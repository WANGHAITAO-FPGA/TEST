package Apb3Bram

import Apb3Bram.ila_test.ila
import Apb3Bram.regFileGen.genRegFileByMarkdown
import spinal.core._
import spinal.core.sim._
import spinal.lib.bus.amba3.apb.Apb3Decoder
import spinal.lib.io.InOutWrapper
import spinal.lib.{BufferCC, master}
import xilinx._

import scala.collection.mutable
import scala.util.Random

class EmifToAurora(emifaddresswidth: Int, emifdatawidth : Int, apb3addresswidth: Int, bramaddresswidth : Int, datawidth : Int, axilookback : Boolean = false) extends Component{
  val (emifConfig, apb3Config) = EmifToApb.getConfigs(emifaddresswidth, emifdatawidth, apb3addresswidth, datawidth, true)
  val (apbConfig, bramConfig) = Apb3ToBram.getConfigs(apb3addresswidth,  bramaddresswidth, datawidth)

  val io = new Bundle{
    val emif = master(EmifInterface(emifConfig))
    val clk = in Bool()
    val reset = in Bool()
    val aurora_userclk = in Bool()
    val intrrupt = out Bool()
  }
  noIoPrefix()

  val resetCtrlClockDomain = ClockDomain(
    clock = io.clk,
    config = ClockDomainConfig(
      resetKind = BOOT
    )
  )

  val resetCtrl = new ClockingArea(resetCtrlClockDomain) {
    val axiResetUnbuffered  = False
    val axiResetCounter = Reg(UInt(6 bits)) init(0)
    when(axiResetCounter =/= U(axiResetCounter.range -> true)){
      axiResetCounter := axiResetCounter + 1
      axiResetUnbuffered := True
    }
    when(io.reset){
      axiResetCounter := 0
    }
    val axiReset  = RegNext(axiResetUnbuffered)
  }

  val clkdomain = ClockDomain(io.clk,io.reset)

  val auroraclkdomain = ClockDomain(io.aurora_userclk,io.reset)

  val auroraarea = new ClockingArea(auroraclkdomain)

  val area = new ClockingArea(clkdomain){
    val emiftoapb = new EmifToApb(emifaddresswidth,emifdatawidth,apb3addresswidth,datawidth,true)
    io.emif <> emiftoapb.io.emif

    val apb3toTxBram = new Apb3ToBram(apb3addresswidth,bramaddresswidth-2,datawidth)

    val apb3toRxBram = new Apb3ToBram(apb3addresswidth,bramaddresswidth-2,datawidth)

    val auroratop = new AuroraTop(apb3addresswidth,bramaddresswidth-2,datawidth)

    if(axilookback) {
      auroratop.io.axir.payload.data <> auroratop.io.axiw.payload.data
      auroratop.io.axir.payload.last <> auroratop.io.axiw.payload.last
      auroratop.io.axir.valid <> auroratop.io.axiw.valid
      auroratop.io.axir.ready <> auroratop.io.axiw.ready
    }

    val apbDecoder = Apb3Decoder(
      master = emiftoapb.io.apb,
      slaves = List(
        apb3toTxBram.io.apb -> (0x010C00, 1 kB),
        apb3toRxBram.io.apb -> (0x010800, 1 kB),
        auroratop.io.apb -> (0x010000, 32 Bytes)
      )
    )
    apb3toTxBram.io.bram <> auroratop.io.tx_bram
    apb3toRxBram.io.bram <> auroratop.io.rx_bram

    io.clk <> auroratop.io.clk
    io.reset <> auroratop.io.reset
    io.aurora_userclk <> auroratop.io.aurora_userclk

    io.intrrupt <> auroratop.io.intrrupt

    addPrePopTask(()=>genRegFileByMarkdown())

    //val ila_probe=ila("0",io.emif.emif_cs,io.emif.emif_oe,io.emif.emif_we,io.emif.emif_data,io.emif.emif_addr)
  }
}
/*
object EmifToAurora {
  def main(args: Array[String]): Unit = {
    def VivadoSynth[T <: Component](gen: => T, name: String = "temp"): Unit = {
      val report = VivadoFlow(design = gen, name, s"D:/vivado_test/synthWorkspace/$name").doit()
      report.printArea()
      report.printFMax()
    }
    VivadoSynth(InOutWrapper(new EmifToAurora(24,16,20,10,32,true)), name = "EmifToAurora")
  }
}*/

/*
object EmifToAurora extends App {
  SpinalConfig(
    //oneFilePerComponent = true,
    defaultClockDomainFrequency=FixedFrequency(100 MHz)
  ).generateSystemVerilog(InOutWrapper(new EmifToAurora(24,16,20,10,32,true)))
}*/


case class EmifToAurora_test(period:Int) extends EmifToAurora(24,16,20,10,32,true){
  def init = {
    area.clockDomain.forkStimulus(period)
    io.emif.emif_cs #= true
    io.emif.emif_oe #= true
    io.emif.emif_we #= true
    io.emif.emif_addr #= 0
    area.clockDomain.waitSampling(10)
  }
  def emif_write(addr:Int,data:Int) = {
    io.emif.emif_cs #= true
    io.emif.emif_oe #= true
    io.emif.emif_we #= true
    area.clockDomain.waitSampling()
    io.emif.emif_cs #= false
    io.emif.emif_oe #= true
    io.emif.emif_we #= true
    io.emif.emif_addr #= addr
    area.clockDomain.waitSampling()
    io.emif.emif_we #= false
    io.emif.emif_data.read #= data
    area.clockDomain.waitSampling(2)
    io.emif.emif_cs #= true
    io.emif.emif_oe #= true
    io.emif.emif_we #= true
  }

  def emif_read(addr:BigInt): BigInt = {
    io.emif.emif_cs #= true
    io.emif.emif_oe #= true
    io.emif.emif_we #= true
    area.clockDomain.waitSampling()
    io.emif.emif_cs #= false
    io.emif.emif_oe #= true
    io.emif.emif_we #= true
    io.emif.emif_addr #= addr
    area.clockDomain.waitSampling()
    io.emif.emif_oe #= false
    area.clockDomain.waitSampling(2)
    io.emif.emif_cs #= true
    io.emif.emif_oe #= true
    io.emif.emif_we #= true
    io.emif.emif_data.write.toBigInt
  }
  def emif_write32(addr:Int,data:Int) = {
    io.emif.emif_cs #= true
    io.emif.emif_oe #= true
    io.emif.emif_we #= true
    area.clockDomain.waitSampling()
    io.emif.emif_cs #= false
    io.emif.emif_oe #= true
    io.emif.emif_we #= true
    io.emif.emif_addr #= addr
    area.clockDomain.waitSampling()
    io.emif.emif_we #= false
    io.emif.emif_data.read #= data&0x0000ffff
    area.clockDomain.waitSampling(2)
    io.emif.emif_cs #= true
    io.emif.emif_oe #= true
    io.emif.emif_we #= true
    area.clockDomain.waitSampling()
    io.emif.emif_cs #= false
    io.emif.emif_oe #= true
    io.emif.emif_we #= true
    io.emif.emif_addr #= addr + 8388608
    area.clockDomain.waitSampling()
    io.emif.emif_we #= false
    io.emif.emif_data.read #= data>>16
    area.clockDomain.waitSampling(2)
    io.emif.emif_cs #= true
    io.emif.emif_oe #= true
    io.emif.emif_we #= true
  }
  def emif_read32(addr:BigInt): BigInt = {
    io.emif.emif_cs #= true
    io.emif.emif_oe #= true
    io.emif.emif_we #= true
    area.clockDomain.waitSampling()
    io.emif.emif_cs #= false
    io.emif.emif_oe #= true
    io.emif.emif_we #= true
    io.emif.emif_addr #= addr
    area.clockDomain.waitSampling()
    io.emif.emif_oe #= false
    area.clockDomain.waitSampling(2)
    io.emif.emif_cs #= true
    io.emif.emif_oe #= true
    io.emif.emif_we #= true
    val lowdata = io.emif.emif_data.write.toBigInt
    area.clockDomain.waitSampling()
    io.emif.emif_cs #= false
    io.emif.emif_oe #= true
    io.emif.emif_we #= true
    io.emif.emif_addr #= addr + 8388608
    area.clockDomain.waitSampling()
    io.emif.emif_oe #= false
    area.clockDomain.waitSampling(2)
    io.emif.emif_cs #= true
    io.emif.emif_oe #= true
    io.emif.emif_we #= true
    val highdata = io.emif.emif_data.write.toBigInt
    val fulldata = (lowdata + (highdata << 16))
    return fulldata
  }

}

object EmifToAurora_test {
  def main(args: Array[String]): Unit = {
    val dut = SimConfig.withWave.compile(EmifToAurora_test(10))
    dut.doSim{dut =>
      dut.auroraarea.clockDomain.forkStimulus(20)
      dut.init
      dut.auroraarea.clockDomain.waitSampling(10)
      var idx = 0
      while(idx < 100){
        var addr = Random.nextInt(100) + (0x10c00>>2) + 1
        var length = Random.nextInt(100)
        var headdata = (addr<<8) + length
        val q1 = new mutable.Queue[Int]
        dut.emif_write32(0x01000C>>2,headdata)
        var data = 0
        for(i <- 0 until length){
          data = Random.nextInt(1000000)
          dut.emif_write32(addr+i,data)
          q1.enqueue(data)
        }
        dut.emif_write32(0x010004>>2,0x11)
        //dut.emif_write32(0x010004>>2,0)

        var k = dut.io.intrrupt.toBigInt
        while(k == 0){
          k = dut.io.intrrupt.toBigInt
          dut.area.clockDomain.waitSampling()
        }
        sleep(1)
        var rddata = 0
        for(i <- 0 until length){
          var rddata = dut.emif_read32(addr+i+(0x10800>>2)-(0x10c00>>2))
          assert(rddata == q1.dequeue())
        }
        sleep(100)
        idx = idx + 1
      }
    }
  }
}