package GTX_TEST

import spinal.core.sim._

class Axi_Sim() extends Gtx_test{
  def init = {
    clockDomain.forkStimulus(10)
    io.axi.aw.valid #= false
    io.axi.w.valid #= false
    io.axi.w.last #= false
    io.axi.aw.payload.id #= 2
    io.axi.ar.payload.id #= 2
    io.axi.ar.size #= 0
    io.axi.aw.payload.size #= 0
    io.axi.ar.valid #= false
    io.axi.r.ready #= false
    io.axi.b.ready #= true
    clockDomain.waitSampling()
  }

  def write(address : BigInt, data : BigInt) = {
    io.axi.aw.payload.addr #= address
    io.axi.aw.valid #= true
    io.axi.w.strb #= 0xf
    clockDomain.waitSamplingWhere(io.axi.aw.ready.toBoolean)
    io.axi.aw.valid #= false
    clockDomain.waitSamplingWhere(io.axi.w.ready.toBoolean)
    io.axi.w.valid #= true
    io.axi.w.payload.data #= data
    io.axi.w.last #= true
    clockDomain.waitSampling()
    io.axi.aw.valid #= false
    io.axi.w.valid #= false
    io.axi.w.last #= false
    clockDomain.waitSamplingWhere(io.axi.b.valid.toBoolean)
  }

  def read(address : BigInt) ={
    io.axi.r.ready #= false
    io.axi.ar.valid #= true
    io.axi.ar.payload.addr #= address
    clockDomain.waitSamplingWhere(io.axi.ar.ready.toBoolean)
    io.axi.r.ready #= true
    io.axi.ar.valid #= false
    clockDomain.waitSamplingWhere(io.axi.r.valid.toBoolean)
    io.axi.r.ready #= false
    println(io.axi.r.payload.data)
  }
}


object Gtx_Sim {
  def main(args: Array[String]): Unit = {
    val dut = SimConfig.withWave.compile(new Axi_Sim())
    dut.doSim{dut =>
      dut.init
      dut.write(0x00000000,0x55)
      dut.read(0x0000000)
      sleep(100)
    }
  }
}
