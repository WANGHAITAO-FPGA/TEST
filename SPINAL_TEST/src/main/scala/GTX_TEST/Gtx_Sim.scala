package GTX_TEST

import spinal.core.IntToBuilder
import spinal.core.sim._

import scala.util.Random

class Axi_Sim() extends Gtx_test{
  def init = {
    area.clockDomain.forkStimulus(10)
    io.axi.aw.valid #= false
    io.axi.w.valid #= false
    io.axi.w.last #= false
    io.axi.aw.payload.id #= 2
    io.axi.ar.payload.id #= 2
    io.axi.ar.len #= 0
    io.axi.ar.burst #= 0
    io.axi.ar.size #= 0
    io.axi.aw.payload.size #= 0
    io.axi.ar.valid #= false
    io.axi.r.ready #= false
    io.axi.b.ready #= true
    area.clockDomain.waitSampling()
  }

  def write(address : BigInt, data : BigInt) = {
    io.axi.aw.payload.addr #= address
    io.axi.aw.valid #= true
    io.axi.w.strb #= 0xf
    area.clockDomain.waitSamplingWhere(io.axi.aw.ready.toBoolean)
    io.axi.aw.valid #= false
    area.clockDomain.waitSamplingWhere(io.axi.w.ready.toBoolean)
    io.axi.w.valid #= true
    io.axi.w.payload.data #= data
    io.axi.w.last #= true
    area.clockDomain.waitSampling()
    io.axi.aw.valid #= false
    io.axi.w.valid #= false
    io.axi.w.last #= false
    area.clockDomain.waitSamplingWhere(io.axi.b.valid.toBoolean)
  }

  def read(address : BigInt):BigInt ={
    io.axi.r.ready #= false
    io.axi.ar.valid #= true
    io.axi.ar.payload.addr #= address
    area.clockDomain.waitSamplingWhere(io.axi.ar.ready.toBoolean)
    io.axi.r.ready #= true
    io.axi.ar.valid #= false
    area.clockDomain.waitSamplingWhere(io.axi.r.valid.toBoolean)
    io.axi.ar.valid #= false
    io.axi.r.ready #= false
    io.axi.r.payload.data.toBigInt
  }
}


object Gtx_Sim {
  def main(args: Array[String]): Unit = {
    val dut = SimConfig.withWave.compile(new Axi_Sim())
    dut.doSim{dut =>
      dut.init
      var idx = 0
      while(idx < 100){
        val a = Random.nextInt(256)
        val b = Random.nextInt(1000000000)
        dut.write(a,b)
        val data = dut.read(a)
        //assert(data == b)
        idx += 1
      }
      sleep(100)
    }
  }
}
