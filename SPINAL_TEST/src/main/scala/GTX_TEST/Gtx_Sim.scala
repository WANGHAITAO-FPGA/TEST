package GTX_TEST

import spinal.core.sim._


object Gtx_Sim {
  def main(args: Array[String]): Unit = {
    SimConfig.withWave.doSim(new Gtx_test){dut=>
      dut.clockDomain.forkStimulus(10)
      dut.clockDomain.waitSampling(10)

    }
  }
}
