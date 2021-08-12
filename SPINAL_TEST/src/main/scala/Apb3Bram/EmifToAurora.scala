package Apb3Bram

import spinal.core._
import spinal.core.sim._
import spinal.lib.bus.amba3.apb.Apb3Decoder
import spinal.lib.master

import scala.collection.mutable
import scala.util.Random

class EmifToAurora(emifaddresswidth: Int, emifdatawidth : Int, apb3addresswidth: Int, bramaddresswidth : Int, datawidth : Int) extends Component{
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

  val clkdomain = ClockDomain(io.clk,io.reset)

  val auroraclkdomain = ClockDomain(io.aurora_userclk,io.reset)

  val auroraarea = new ClockingArea(auroraclkdomain)

  val area = new ClockingArea(clkdomain){
    val emiftoapb = new EmifToApb(emifaddresswidth,emifdatawidth,apb3addresswidth,datawidth,true)
    io.emif <> emiftoapb.io.emif

    val apb3toTxBram = new Apb3ToBram(apb3addresswidth,bramaddresswidth,datawidth)

    val apb3toRxBram = new Apb3ToBram(apb3addresswidth,bramaddresswidth,datawidth)

    val auroratop = new AuroraTop(apb3addresswidth,bramaddresswidth,datawidth,true)

    val apbDecoder = Apb3Decoder(
      master = emiftoapb.io.apb,
      slaves = List(
        apb3toTxBram.io.apb -> (0x00000, 256 Bytes),
        apb3toRxBram.io.apb -> (0x01000, 256 Bytes),
        auroratop.io.apb -> (0x03000, 256 Bytes)
      )
    )
    apb3toTxBram.io.bram <> auroratop.io.tx_bram
    apb3toRxBram.io.bram <> auroratop.io.rx_bram

    io.clk <> auroratop.io.clk
    io.reset <> auroratop.io.reset
    io.aurora_userclk <> auroratop.io.aurora_userclk

    io.intrrupt <> auroratop.io.intrrupt
  }
}


case class EmifToAurora_test(period:Int) extends EmifToAurora(24,16,20,8,32){
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
      dut.init
      dut.auroraarea.clockDomain.forkStimulus(20)
      dut.auroraarea.clockDomain.waitSampling(10)
      var idx = 0
      while(idx < 100){
        var addr = Random.nextInt(100)
        var length = Random.nextInt(100)
        var headdata = (addr<<8) + length
        val q1 = new mutable.Queue[Int]
        dut.emif_write32(0x003000,headdata)
        var data = 0
        for(i <- 0 until length){
          data = Random.nextInt(1000000)
          dut.emif_write32(addr+i,data)
          q1.enqueue(data)
        }
        dut.emif_write32(0x003004,1)
        dut.emif_write32(0x003004,0)
        sleep(5000)
        for(i <- 0 until length){
          val rddata = dut.emif_read32(addr+i+0x1000)
          assert(rddata == q1.dequeue())
        }
        sleep(5000)
        idx = idx + 1
      }
    }
  }

}