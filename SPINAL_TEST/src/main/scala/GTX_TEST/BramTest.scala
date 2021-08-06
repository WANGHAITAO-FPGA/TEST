package GTX_TEST

import spinal.core.{Bits, _}
import spinal.core.sim._
import spinal.lib.slave

import spinal.core.{Bits, Bool, Bundle, UInt, in, out}
import spinal.lib.IMasterSlave

case class XILINX_BRAM_PORT(dataWidth: Int, addressWidth: Int) extends Bundle with IMasterSlave { // FIXME: may not be needed
  val addr = UInt(addressWidth bits)
  val dataIn = Bits(dataWidth bits)
  val dataOut = Bits(dataWidth bits)
  val en = Bool
  val we = Bits(dataWidth/8 bits)

  override def asMaster(): Unit = { // implemented as slave on a RAM, as master on a ram reader/writer
    out(addr, en)
    in(dataOut)
    out(dataIn, we)
  }

  def preAssign(): Unit = {
    addr.assignDontCare() // the pattern of using don't care as pre-assignment is of great value
    addr.allowOverride
    en.assignDontCare()
    en.allowOverride
    dataIn.assignDontCare()
    dataIn.allowOverride
    we.assignDontCare()
    we.allowOverride
  }
}

case class BlockRam(dataWidth: Int, addressWidth: Int) extends Component {

  val ioA = slave(XILINX_BRAM_PORT(dataWidth, addressWidth))
  val ioB = slave(XILINX_BRAM_PORT(dataWidth, addressWidth))
  val clka = in Bool()
  val clkb = in Bool()
  val reseta = in Bool()
  val resetb = in Bool()

  val bramacd = ClockDomain(clka,reseta)

  val brambcd = ClockDomain(clkb,resetb)

  val i = UInt(addressWidth+1 bits)

  val bram = Mem(Bits(dataWidth bits), BigInt(1) << addressWidth)

  val brama_area = new ClockingArea(bramacd){
    //ioA.dataOut := bram.readWriteSync(ioA.addr, ioA.dataIn, ioA.en, ioA.we.asBool)
    ioA.dataOut := bram.readSync(ioA.addr,ioA.en&&(ioA.we === 0))
    bram.write(ioA.addr,ioA.dataIn,ioA.en&&(ioA.we === ((BigInt(1) << dataWidth/8)-1)))
  }

  val bramb_area = new ClockingArea(brambcd){
    //ioB.dataOut := bram.readWriteSync(ioB.addr, ioB.dataIn, ioB.en, ioB.we.asBool)
    ioB.dataOut := bram.readSync(ioB.addr,ioB.en&&(ioB.we === 0))
    bram.write(ioB.addr,ioB.dataIn,ioB.en&&(ioB.we === ((BigInt(1) << dataWidth/8)-1)))
  }

  def preAssign() = {
    ioA.preAssign()
    ioB.preAssign()
  }
}

object BlockRamMain extends App {
  SpinalConfig(
    //oneFilePerComponent = true,
    defaultClockDomainFrequency=FixedFrequency(100 MHz)
  ).generateSystemVerilog(new BlockRam(32,10))
}