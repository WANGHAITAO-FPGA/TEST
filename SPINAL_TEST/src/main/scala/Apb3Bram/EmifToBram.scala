package Apb3Bram

import spinal.core._
import spinal.lib.bus.amba3.apb._
import spinal.lib.{master, slave}
import spinal.core.sim._
import spinal.lib.bus.regif.AccessType.RW
import spinal.lib.bus.regif.Apb3BusInterface

import scala.util.Random


class EmifToBram extends Component {

  val (emifConfig, apb3Config) = EmifToApb.getConfigs(24, 16, 20, 32, true)

  val (apbConfig, bramConfig) = Apb3ToBram.getConfigs(20,  8, 32)

  val io = new Bundle{
    val emif = master(EmifInterface(emifConfig))
  }
  noIoPrefix()

  val emiftoapb = new EmifToApb(24,16,20,32,true)
  io.emif <> emiftoapb.io.emif

  val apb3tobram = new Apb3ToBram(20,8,32)

  val apbDecoder = Apb3Decoder(
    master = emiftoapb.io.apb,
    slaves = List(
      apb3tobram.io.apb -> (0x00000, 256 Bytes)
    )
  )

  val mem = Mem(Bits(32 bits), wordCount = 256)
  mem.write(
    enable  = apb3tobram.io.bram.en && (apb3tobram.io.bram.we === 0x0f),
    address = apb3tobram.io.bram.addr,
    data    = apb3tobram.io.bram.wrdata
  )

  apb3tobram.io.bram.rddata := mem.readSync(
    enable  = apb3tobram.io.bram.en &&(apb3tobram.io.bram.we === 0),
    address = apb3tobram.io.bram.addr
  )

}


case class EmifToBram_test(period:Int) extends EmifToBram(){
  def init = {
    clockDomain.forkStimulus(period)
    io.emif.emif_cs #= true
    io.emif.emif_oe #= true
    io.emif.emif_we #= true
    io.emif.emif_addr #= 0
    clockDomain.waitSampling(10)
  }
  def emif_write(addr:Int,data:Int) = {
    io.emif.emif_cs #= true
    io.emif.emif_oe #= true
    io.emif.emif_we #= true
    clockDomain.waitSampling()
    io.emif.emif_cs #= false
    io.emif.emif_oe #= true
    io.emif.emif_we #= true
    io.emif.emif_addr #= addr
    clockDomain.waitSampling()
    io.emif.emif_we #= false
    io.emif.emif_data.read #= data
    clockDomain.waitSampling(2)
    io.emif.emif_cs #= true
    io.emif.emif_oe #= true
    io.emif.emif_we #= true
  }

  def emif_read(addr:BigInt): BigInt = {
    io.emif.emif_cs #= true
    io.emif.emif_oe #= true
    io.emif.emif_we #= true
    clockDomain.waitSampling()
    io.emif.emif_cs #= false
    io.emif.emif_oe #= true
    io.emif.emif_we #= true
    io.emif.emif_addr #= addr
    clockDomain.waitSampling()
    io.emif.emif_oe #= false
    clockDomain.waitSampling(2)
    io.emif.emif_cs #= true
    io.emif.emif_oe #= true
    io.emif.emif_we #= true
    io.emif.emif_data.write.toBigInt
  }
}

object EmifToBram_test {
  def main(args: Array[String]): Unit = {
    val dut = SimConfig.withWave.compile(EmifToBram_test(10))
    dut.doSim{dut =>
      dut.init
      var idx = 0
      while(idx < 100){
        val data = Random.nextInt(1000000)
        val addr = Random.nextInt(255)
        val low_addr = addr
        val high_addr = addr + 8388608
        dut.emif_write(low_addr, data&0x0000ffff)
        dut.emif_write(high_addr, data>>16)
        val data1 = dut.emif_read(low_addr)
        val data2 = dut.emif_read(high_addr)
        assert(data == data1 + (data2<<16))
        idx += 1
      }
      sleep(100)
    }
  }

}