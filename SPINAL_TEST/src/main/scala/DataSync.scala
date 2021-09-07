import GTX_TEST.Axi_Sim
import spinal.core._
import spinal.core.sim.{SimConfig, sleep}
import spinal.lib.{BufferCC, StreamCCByToggle, master, slave}
import spinal.core.sim._

import scala.Stream
import scala.util.Random
/*
class DataSync extends Component {
  val io = new Bundle{
    val clk_80M = in Bool()
    val user_clk = in Bool()
    val reset = in Bool()
    val ad_data_in = Vec(slave Stream(Bits(16 bits)),24)
    val bissc_data_in = Vec(slave Stream(Bits(32 bits)),4)
    val encoder_data_in = Vec(slave Stream(Bits(32 bits)),4)
    val ad_data_out = out Vec(Bits(16 bits),24)
    val bissc_data_out = out Vec(Bits(32 bits),4)
    val encoder_data_out = out Vec(Bits(32 bits),4)
  }
  noIoPrefix()

  val data_in_clkdomain = ClockDomain(io.clk_80M,io.reset)
  val data_out_clkdomain = ClockDomain(io.user_clk,io.reset)

  for(i <- 0 until 24){
    val stream = StreamCCByToggle(
      input = io.ad_data_in(i),
      inputClock = data_in_clkdomain,
      outputClock = data_out_clkdomain
    )
    stream.ready := True
    io.ad_data_out(i) := stream.payload
  }
  for(i <- 0 until 4){
    val stream = StreamCCByToggle(
      input = io.bissc_data_in(i),
      inputClock = data_in_clkdomain,
      outputClock = data_out_clkdomain
    )
    stream.ready := True
    io.bissc_data_out(i) := stream.payload
  }

  for(i <- 0 until 4){
    val stream = StreamCCByToggle(
      input = io.encoder_data_in(i),
      inputClock = data_in_clkdomain,
      outputClock = data_out_clkdomain
    )
    stream.ready := True
    io.encoder_data_out(i) := stream.payload
  }
}

object DataSyncMain extends App {
  SpinalConfig(
    //oneFilePerComponent = true,
    defaultClockDomainFrequency=FixedFrequency(100 MHz)
  ).generateSystemVerilog(new DataSync)
}
*/

class DataSync extends Component{
  val io = new Bundle{
    val clk_in = in Bool()
    val clk_out = in Bool()
    val reset = in Bool()
    val datain =  slave Stream(Bits(16 bits))
    val dataout = out (Bits(16 bits))
  }
  noIoPrefix()

  val clkin_domain = ClockDomain(io.clk_in,io.reset)
  val clkout_domain = ClockDomain(io.clk_out,io.reset)

  val stream = StreamCCByToggle(
    input = io.datain,
    inputClock = clkin_domain,
    outputClock = clkout_domain
  )
  stream.ready := True

  io.dataout := stream.payload
}

object DataSync{
  def main(args: Array[String]): Unit = {
    SimConfig.withWave.doSim(new DataSync) { dut =>
      dut.clkin_domain.forkStimulus(20)
      dut.clkout_domain.forkStimulus(10)
      dut.clkin_domain.waitSampling(20)
      var idx = 0
      while(idx < 100){
        dut.io.datain.payload #= Random.nextInt(256)
        dut.io.datain.valid #= true
        dut.clkin_domain.waitSampling()
        //dut.io.datain.valid #= false
        dut.clkin_domain.waitSampling(10)
        idx += 1
      }
      sleep(100)
     }
  }
}

