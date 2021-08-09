package Apb3Bram

import GTX_TEST.Axi_Sim
import spinal.core._
import spinal.core.sim._
import spinal.lib.bus.amba3.apb._
import spinal.lib.bus.amba3.apb.sim.Apb3Driver
import spinal.lib.bus.regif.AccessType.RW
import spinal.lib.bus.regif.Apb3BusInterface
import spinal.lib.io.TriStateArray
import spinal.lib.{master, slave}

import scala.util.Random


class Apb3Test extends Component {
  val io = new Bundle{
    val apb3 = slave(Apb3(Apb3Config(addressWidth = 20,dataWidth = 32,selWidth = 1)))
    val gpio      = master(TriStateArray(32 bits))
  }
  noIoPrefix()

  val apb3tobram = new Apb3ToBram(20,8,32)

  val gpioCtrl = Apb3Gpio(gpioWidth = 32,withReadSync = true)

  io.gpio <> gpioCtrl.io.gpio

  val apbDecoder = Apb3Decoder(
    master = io.apb3,
    slaves = List(
      apb3tobram.io.apb -> (0x00000, 4 KiB),
      gpioCtrl.io.apb -> (0x10000, 4 KiB)
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

/*
object Apb3testMain extends App {
  SpinalConfig(
    //oneFilePerComponent = true,
    defaultClockDomainFrequency=FixedFrequency(100 MHz)
  ).generateSystemVerilog(new Apb3Test)
}*/


object Apb3Sim{
  def main(args: Array[String]): Unit = {
    val dut = SimConfig.withWave.compile(new Apb3Test())
    dut.doSim{dut =>
      dut.clockDomain.forkStimulus(10)
      dut.clockDomain.waitSampling(10)
      val testapb = new Apb3Driver(dut.io.apb3,dut.clockDomain)
      var idx = 0
      while(idx < 100){
        val data = Random.nextInt(1000000)
        val addr = Random.nextInt(255)
        testapb.write(addr,data)
        val rd = testapb.read(addr)
        assert(data == rd,println(data,rd))
        idx += 1
      }

      sleep(100)
    }
  }
}