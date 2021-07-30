package PHPA82

import spinal.core.sim._

case class Phpa_Test(period:Int) extends Phpa_Top(SramLayout(20,16)){
  def init = {
    area.clockDomain.forkStimulus(period)
    io.emif.emif_cs #= true
    io.emif.emif_oe #= true
    io.emif.emif_we #= true
    io.emif.emif_addr #= 0
    area.clockDomain.waitSampling(10)
  }
  def emif_write(addr:Int,data:Int) = {
    area.clockDomain.waitSampling()
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
    area.clockDomain.waitSampling()
  }

  def emif_read(addr:Int)= {
    area.clockDomain.waitSampling()
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
    area.clockDomain.waitSampling()
    println(io.emif.emif_data.write)
    area.clockDomain.waitSampling()
    io.emif.emif_cs #= true
    io.emif.emif_oe #= true
    io.emif.emif_we #= true
    area.clockDomain.waitSampling()
  }
}


object Phpa_TestSim {
  def main(args: Array[String]): Unit = {
    val dut = SimConfig.withWave.compile(Phpa_Test(10))
    dut.doSim{dut =>
      dut.init
      dut.emif_write(0x600, 0x01)
      dut.area.clockDomain.waitSampling(10)
      dut.emif_write(0x601, 0x3FF)
      dut.area.clockDomain.waitSampling(10)
      dut.emif_write(0x100, 0xaa)
      dut.area.clockDomain.waitSampling(10)
      dut.emif_write(0x101, 0xaa)
      dut.area.clockDomain.waitSampling(10)
      dut.emif_write(0x102, 0xaa)
      dut.area.clockDomain.waitSampling(10)
      dut.emif_write(0x103, 0xaa)
      dut.area.clockDomain.waitSampling(10)
      dut.emif_write(0x200, 0xaa)
      dut.area.clockDomain.waitSampling(10)
      dut.emif_write(0x201, 0xaa)
      dut.area.clockDomain.waitSampling(10)
      dut.emif_write(0x202, 0xaa)
      dut.area.clockDomain.waitSampling(10)
      dut.emif_write(0x203, 0xaa)
      dut.area.clockDomain.waitSampling(10)
      dut.emif_write(0x300, 0xaa)
      dut.area.clockDomain.waitSampling(10)
      dut.emif_write(0x301, 0xaa)
      dut.area.clockDomain.waitSampling(10)
      dut.emif_write(0x302, 0xaa)
      dut.area.clockDomain.waitSampling(10)
      dut.emif_write(0x303, 0xaa)
      dut.area.clockDomain.waitSampling(10)
      dut.emif_write(0x002, 0x01)
      dut.area.clockDomain.waitSampling(10)
      dut.emif_read(0x400)
      dut.area.clockDomain.waitSampling(10)
      dut.emif_read(0x401)
      dut.area.clockDomain.waitSampling(10)
      dut.emif_read(0x402)
      dut.area.clockDomain.waitSampling(10)
      dut.emif_read(0x500)
      dut.area.clockDomain.waitSampling(10)
      dut.emif_read(0x501)
      dut.area.clockDomain.waitSampling(10)
      dut.emif_read(0x502)
      dut.area.clockDomain.waitSampling(10)
      dut.emif_read(0x503)
      dut.area.clockDomain.waitSampling(10)
      dut.emif_read(0x504)
      dut.area.clockDomain.waitSampling(10)
      dut.emif_read(0x505)
      dut.area.clockDomain.waitSampling(10)
      dut.emif_read(0x506)
      dut.area.clockDomain.waitSampling(10)
      dut.emif_read(0x507)
      dut.area.clockDomain.waitSampling(10)
      dut.area.clockDomain.waitSampling(2000)
      dut.emif_write(0x002, 0x00)
      dut.area.clockDomain.waitSampling(10000)
    }
  }

}
