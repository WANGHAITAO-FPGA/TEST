package AxiFifo

import spinal.core._
import spinal.lib.bus.amba4.axi.{Axi4Config, Axi4R, Axi4W}
import spinal.lib.bus.misc.BusSlaveFactory
import spinal.lib.{ResetCtrl, Stream, StreamFifoCC, master, slave}

object AxiCtrlTxState extends SpinalEnum {
  val IDLE, DATA, STOP = newElement()
}

class AxiCtrlTx(txfifodepth : Int) extends Component {
  val io = new Bundle{
    val axiw = master Stream (Axi4W(AxiConfig.axi4Config))
    val write = slave Stream (Bits(AxiConfig.axi4Config.dataWidth bits))
    val tx_start = in Bool()
    val popOccupancy  = in UInt(log2Up(txfifodepth + 1) bits)
  }
  noIoPrefix()
  import AxiCtrlTxState._
  val stateMachine = new Area {
    val state = RegInit(IDLE)
    switch(state) {
      is(IDLE){
        when(io.tx_start){
          state := DATA
        }
      }
      is(DATA){
        when((io.popOccupancy === 1) && io.axiw.fire){
          state := STOP
        }
      }
      is(STOP){
        state := IDLE
      }
    }
  }
  io.axiw.valid := io.axiw.ready & (stateMachine.state =/= IDLE) & io.write.valid
  io.axiw.payload.data := io.write.payload
  io.axiw.payload.last := (io.popOccupancy === 1) && io.axiw.fire
  io.write.ready := io.axiw.ready & (stateMachine.state =/= IDLE)
}


object AxiCtrlTxMain extends App {
  SpinalConfig(
    //oneFilePerComponent = true,
    defaultClockDomainFrequency=FixedFrequency(100 MHz)
  ).generateSystemVerilog(new AxiCtrlTx(256))
}