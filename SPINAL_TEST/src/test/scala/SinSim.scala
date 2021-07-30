import spinal.core.sim._

object cordic {
  def main(args: Array[String]): Unit = {
    SimConfig.withWave.doSim(new post_cir_cordic){dut=>
      dut.clockDomain.forkStimulus(10)
      dut.clockDomain.waitSampling(10)
      dut.io.data_in #= 12867
      dut.clockDomain.waitSampling(20)
      dut.io.data_in #= 25736
      dut.clockDomain.waitSampling(20)
      dut.io.data_in #= 38604
      dut.clockDomain.waitSampling(20)
      dut.io.data_in #= 51445
      dut.clockDomain.waitSampling(20)
      dut.io.data_in #= 118024
      dut.clockDomain.waitSampling(20)
    }
  }

}

