package AxiFifo

import AxiFifo.AxiCtrlTxState.IDLE
import spinal.core._
import spinal.lib.bus.amba4.axi.Axi4R
import spinal.lib.{master, slave}


class AxiCtrlRx extends Component{
  val io = new Bundle{
    val axir = slave Stream (Axi4R(AxiConfig.axi4Config))
    val read = master Stream (Bits(AxiConfig.axi4Config.dataWidth bits))
    val interrupt = out Bool()
  }
  noIoPrefix()

  io.axir.ready := True

  io.read.payload := io.axir.payload.data
  io.read.valid := io.axir.valid
  io.interrupt := RegNext(io.axir.last)
}
