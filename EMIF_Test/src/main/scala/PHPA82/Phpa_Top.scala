package PHPA82

import EMIF.{Emif_Apb, SramInterface, SramLayout, Top}
import PHPA82.ila_test.ila
import PHPA82.regFileGen.genRegFileByMarkdown
import spinal.core._
import spinal.lib._
import spinal.lib.bus.amba3.apb.{Apb3, Apb3Config, Apb3Decoder}
import spinal.lib.bus.misc.SizeMapping
import spinal.lib.com.uart.Uart
import spinal.lib.io.{InOutWrapper, TriState, TriStateArray}

import scala.collection.mutable.ArrayBuffer

case class SramLayout(addressWidth: Int, dataWidth : Int) {
  val capacity = BigInt(1) << (addressWidth + log2Up(dataWidth/8))
}

case class SramInterface(g : SramLayout) extends Bundle with IMasterSlave{
  val emif_addr = UInt((g.addressWidth) bits)
  val emif_data = TriState(Bits(g.dataWidth bits))
  val emif_cs  = Bool
  val emif_we  = Bool
  val emif_oe  = Bool

  override def asMaster(): Unit = {
    in(emif_addr,emif_cs,emif_we,emif_oe)
    master(emif_data)
  }
}

class Emif_Apb(sramLayout : SramLayout) extends Component {
  val io = new Bundle{
    val emif = master(SramInterface(sramLayout))
    val apb = master(Apb3(Apb3Config(addressWidth = sramLayout.addressWidth,dataWidth = sramLayout.dataWidth)))
  }
  noIoPrefix()

  val penable = Reg(Bool()) init False

  penable := (!io.emif.emif_oe)|(!io.emif.emif_we)

  io.apb.PADDR := io.emif.emif_addr
  io.apb.PSEL := ~(io.emif.emif_cs.asBits)
  io.apb.PENABLE := Mux(penable.rise(),penable,False)
  io.apb.PWRITE := (!io.emif.emif_we)&io.emif.emif_oe

  io.emif.emif_data.writeEnable := !io.emif.emif_oe
  io.emif.emif_data.write := RegNextWhen(io.apb.PRDATA,!io.emif.emif_oe)

  io.apb.PWDATA := io.emif.emif_data.read
}


class Phpa_Top(sramLayout : SramLayout) extends Component {
  val io = new Bundle{
    val emif = master(SramInterface(sramLayout))
    val ad5544_A = master(Ad5544Interface())
    val ad5544_B = master(Ad5544Interface())
    val ad5544_C = master(Ad5544Interface())
    val biss_c = master(BissCInterface())
    val ad7606 = master(Ad7606Interface())
    val clk = in Bool()
    val reset = in Bool()
    val led = out Bool()
  }
  noIoPrefix()

  val systemClockDomain = ClockDomain(
    clock = io.clk,
    reset = io.reset,
    frequency = FixedFrequency(100 MHz)
  )

  val area = new ClockingArea(systemClockDomain){
    val emif_interface = new Emif_Apb(sramLayout)
    io.emif <> emif_interface.io.emif

    //val ad5544_temp = Reg(Bool()) init False

    val apbMapping = ArrayBuffer[(Apb3, SizeMapping)]()

    val apbtimer = new ApbTimer("ApbTimer",0x000600)
    io.clk <> apbtimer.io.clk
    io.reset <> apbtimer.io.reset
    apbMapping += apbtimer.io.apb -> (0x000600, 256 Bytes)
    val interrupt_temp = Reg(Bool()) init False
    interrupt_temp := apbtimer.io.interrupt|Delay(apbtimer.io.interrupt,1)|Delay(apbtimer.io.interrupt,2)|Delay(apbtimer.io.interrupt,3)

    val ad5544_triger = new AD5544_triger("AD5544_Triger",0x000000)
    //ad5544_temp := ad5544_triger.io.ad5544_tri
    io.clk <> ad5544_triger.io.clk
    io.reset <> ad5544_triger.io.reset
    apbMapping += ad5544_triger.io.apb -> (0x000000, 256 Bytes)

    val ad5544_A_Ctrl = new AD5544("AD5544_1",0x000100)
    io.ad5544_A <> ad5544_A_Ctrl.io.ad5544Interface
    io.clk <> ad5544_A_Ctrl.io.clk
    io.reset <> ad5544_A_Ctrl.io.reset
    //ad5544_A_Ctrl.io.ad5544_enable := ad5544_temp
    ad5544_A_Ctrl.io.ad5544_enable := ad5544_triger.io.ad5544_tri|interrupt_temp
    apbMapping += ad5544_A_Ctrl.io.apb -> (0x000100, 256 Bytes)

    val ad5544_B_Ctrl = new AD5544("AD5544_2",0x000200)
    io.ad5544_B <> ad5544_B_Ctrl.io.ad5544Interface
    io.clk <> ad5544_B_Ctrl.io.clk
    io.reset <> ad5544_B_Ctrl.io.reset
    //ad5544_B_Ctrl.io.ad5544_enable := ad5544_temp
    ad5544_B_Ctrl.io.ad5544_enable := ad5544_triger.io.ad5544_tri|interrupt_temp
    apbMapping += ad5544_B_Ctrl.io.apb -> (0x000200, 256 Bytes)

    val ad5544_C_Ctrl = new AD5544("AD5544_3",0x000300)
    io.ad5544_C <> ad5544_C_Ctrl.io.ad5544Interface
    io.clk <> ad5544_C_Ctrl.io.clk
    io.reset <> ad5544_C_Ctrl.io.reset
    //ad5544_C_Ctrl.io.ad5544_enable := ad5544_temp
    ad5544_C_Ctrl.io.ad5544_enable := ad5544_triger.io.ad5544_tri|interrupt_temp
    apbMapping += ad5544_C_Ctrl.io.apb -> (0x000300, 256 Bytes)

    val biss_c_ctrl = new Biss_C("Biss_c",0x000400)
    io.biss_c <> biss_c_ctrl.io.bisscInterface
    io.clk <> biss_c_ctrl.io.clk
    io.reset <> biss_c_ctrl.io.reset
    apbMapping += biss_c_ctrl.io.apb -> (0x000400, 256 Bytes)

    val ad7606_ctrl = new AD7606("AD7606",0x000500)
    io.ad7606 <> ad7606_ctrl.io.ad7606Interface
    io.clk <> ad7606_ctrl.io.clk
    io.reset <> ad7606_ctrl.io.reset
    apbMapping += ad7606_ctrl.io.apb -> (0x000500, 256 Bytes)

    val apbDecoder = Apb3Decoder(
      master = emif_interface.io.apb,
      slaves = apbMapping
    )

    val ledtemp = Reg(Bool()) init False

    val counter =  CounterFreeRun(5000)
    when(counter.willOverflow){
      counter.clear()
      ledtemp := ~ledtemp;
    }

    io.led := ledtemp
   //addPrePopTask(()=>genRegFileByMarkdown())
   val ila_probe=ila("0",io.emif.emif_cs,io.emif.emif_oe,io.emif.emif_we,io.emif.emif_data,io.emif.emif_addr)
   }
}




object Phpa_Top_Test extends App {
  SpinalConfig(
    //oneFilePerComponent = true,
    defaultClockDomainFrequency=FixedFrequency(100 MHz)
  ).generateVerilog(InOutWrapper(new Phpa_Top(SramLayout(20,16))))
}
