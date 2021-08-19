package AxiFifo

import spinal.core._
import spinal.lib.bus.amba4.axi.{Axi4Config, Axi4R, Axi4W}
import spinal.lib.bus.misc.BusSlaveFactory
import spinal.lib.{BufferCC, ResetCtrl, Stream, StreamFifoCC, master, slave}

object AxiConfig{
  val axi4Config = Axi4Config(
    addressWidth = 20,
    dataWidth = 32,
    idWidth = 1,
    useStrb = false,
    useId = false,
    useResp = false
  )
}

class AxiCtrl(txfifodepth : Int, rxfifodepth : Int) extends Bundle {
  val rx = new Bundle {
    val stream = master(Stream(Bits(AxiConfig.axi4Config.dataWidth bits)))
    val flush = in Bool()
    val popOccupancy = out UInt(log2Up(rxfifodepth + 1) bits)
  }
  val tx = new Bundle{
    val stream = slave(Stream(Bits(AxiConfig.axi4Config.dataWidth bits)))
    val flush = in Bool()
    val txstart = in Bool()
  }

  def driveFrom(bus: BusSlaveFactory) = new Area{
    bus.driveAndRead(tx.flush,   0x00, 0) init(True)
    bus.read(tx.stream.ready, 0x00, 1)
    bus.driveAndRead(tx.txstart, 0x00, 2) init False

    bus.driveAndRead(rx.flush,   0x00, 4) init(True)
    bus.read(rx.stream.valid, 0x00, 5)

    bus.read(rx.popOccupancy, address = 0x04)

    tx.stream << bus.createAndDriveFlow(Bits(AxiConfig.axi4Config.dataWidth bits), 0x10).toStream

    rx.stream.ready := False
    bus.onRead(0x20){rx.stream.ready := True}
    bus.read(rx.stream.payload, 0x20)
  }
}


class Axi(txCd : ClockDomain, rxCd : ClockDomain, txfifodepth : Int, rxfifodepth : Int) extends Component{
  val io = new Bundle{
    val axiw = master Stream (Axi4W(AxiConfig.axi4Config))
    val axir = slave Stream (Axi4R(AxiConfig.axi4Config))
    val axictrl = new AxiCtrl(txfifodepth,rxfifodepth)
    val interrupt = out Bool()
  }
  noIoPrefix()

  val ctrlClockDomain = this.clockDomain
  val rxReset = ResetCtrl.asyncAssertSyncDeassert(
    input = ClockDomain.current.isResetActive || io.axictrl.rx.flush,
    clockDomain = rxCd
  )
  val rxClockDomain = rxCd.copy(reset = rxReset)

  val txReset = ResetCtrl.asyncAssertSyncDeassert(
    input = ClockDomain.current.isResetActive || io.axictrl.tx.flush,
    clockDomain = txCd
  )
  val txClockDomain = txCd.copy(reset = txReset)

  val txFrontend = new Area{
    val buffer = StreamFifoCC(
      dataType = Bits(AxiConfig.axi4Config.dataWidth bits),
      depth = txfifodepth,
      pushClock = ctrlClockDomain.copy(softReset = io.axictrl.tx.flush),
      popClock = txClockDomain
    )
    buffer.io.push << io.axictrl.tx.stream
  }

  val txBackend = txClockDomain on new Area{
    val axictrltx = new AxiCtrlTx(txfifodepth)
    axictrltx.io.write << txFrontend.buffer.io.pop
    axictrltx.io.tx_start := BufferCC(io.axictrl.tx.txstart)
    axictrltx.io.popOccupancy := txFrontend.buffer.io.popOccupancy
    axictrltx.io.axiw <> io.axiw
  }

  val rxFrontend = rxClockDomain on new Area{
    val axictrlrx = new AxiCtrlRx
    val buffer = StreamFifoCC(
      dataType = Bits(AxiConfig.axi4Config.dataWidth bits),
      depth = rxfifodepth,
      pushClock = rxClockDomain,
      popClock = ctrlClockDomain.copy(softReset = io.axictrl.tx.flush)
    )
    buffer.io.push << axictrlrx.io.read
    axictrlrx.io.axir <> io.axir
    io.interrupt <> axictrlrx.io.interrupt
    io.axictrl.rx.popOccupancy <> buffer.io.popOccupancy
  }
  val rxBackend = new Area{
    rxFrontend.buffer.io.pop >> io.axictrl.rx.stream
  }
}
