package AxiFifo

import Apb3Bram.{Apb3Test, AuroraTop}
import spinal.core._
import spinal.core.sim._
import spinal.lib.bus.amba3.apb.sim.Apb3Driver
import spinal.lib.bus.amba3.apb.{Apb3, Apb3Config, Apb3SlaveFactory}
import spinal.lib.bus.amba4.axi.{Axi4R, Axi4W}
import spinal.lib.{master, slave}

import scala.collection.mutable
import scala.util.Random

object Apb3Axi{
  def getApb3Config = Apb3Config(
    addressWidth = 20,
    dataWidth = 32,
    selWidth = 1,
    useSlaveError = false
  )
}

class Apb3Axi( txfifodepth : Int, rxfifodepth : Int) extends Component{
  val io = new Bundle{
    val apb =  slave(Apb3(Apb3Axi.getApb3Config))
    val axiclk = in Bool()
    val axiwready = in Bool()
    val inter= out Bool()
  }
  noIoPrefix()

  val axiclockdomain = ClockDomain(io.axiclk)

  val axictrl = new Axi(axiclockdomain,axiclockdomain,txfifodepth,rxfifodepth)
  val busCtrl = Apb3SlaveFactory(io.apb)
  val bridge = axictrl.io.axictrl.driveFrom(busCtrl)

  axictrl.io.axir.payload.data := axictrl.io.axiw.payload.data
  axictrl.io.axir.valid := axictrl.io.axiw.valid
  axictrl.io.axir.payload.last := axictrl.io.axiw.payload.last
  axictrl.io.axiw.ready := io.axiwready
  io.inter <> axictrl.io.interrupt
}

object Apb3AxiSim {
  def main(args: Array[String]): Unit = {
    val dut = SimConfig.withWave.compile(new Apb3Axi(256, 256))
    dut.doSim{dut =>
      dut.clockDomain.forkStimulus(10)
      dut.axiclockdomain.forkStimulus(20)
      dut.clockDomain.waitSampling(10)
      var kk = 0
      while(kk < 100){
        val q1 = new mutable.Queue[Int]
        val testapb = new Apb3Driver(dut.io.apb,dut.clockDomain)
        testapb.write(0x00,0x02)
        var length = Random.nextInt(100)+2
        var idt = 0
        while(idt < length-1) {
          var data = Random.nextInt(1000000)
          testapb.write(0x10,data)
          q1.enqueue(data)
          idt += 1
        }
        testapb.write(0x00,0x06)
        testapb.write(0x00,0x02)
        var k = dut.io.inter.toBigInt
        while(k == 0) {
          k = dut.io.inter.toBigInt
          dut.io.axiwready #= Random.nextBoolean()
          dut.axiclockdomain.waitSampling()
        }
        sleep(100)
        var rdlength = testapb.read(0x04)
        var id = 0
        while(id < rdlength){
          var rddata = testapb.read(0x20)
          id += 1
          assert(rddata == q1.dequeue())
        }
        kk += 1
        sleep(100)
      }
      sleep(1000)
    }
  }
}