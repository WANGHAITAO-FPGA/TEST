package GTX_TEST

import spinal.core._
import spinal.lib.bus.amba3.apb.Apb3Config
import spinal.lib.bus.amba4.axi.{Axi4, Axi4Config, Axi4CrossbarFactory, Axi4SharedOnChipRam, Axi4SharedToApb3Bridge, Axi4SharedToBram, Axi4SlaveFactory, Axi4ToAxi4Shared, Axi4W}
import spinal.lib.bus.bram.{BRAM, BRAMConfig}
import spinal.lib.bus.misc.SizeMapping
import spinal.lib.bus.regif.AccessType.RW
import spinal.lib.bus.regif.{Apb3BusInterface, BusIf, BusInterface, ClassName}
import spinal.lib.{master, slave}

object axi4config{
  def getAxi4Configs() =(
    Axi4Config(
      addressWidth = 20,
      dataWidth    = 32,
      idWidth      = 4,
      useLock      = false,
      useRegion    = false,
      useCache     = false,
      useProt      = false,
      useQos       = false
    ))
  def bramConfig() =(
    BRAMConfig(
      dataWidth    = 32,
      addressWidth = 8
    )
    )
}

class Axi4_top extends Component {
  val io = new Bundle{
    val axi = slave(Axi4(axi4config.getAxi4Configs()))
    val bram = master(BRAM(axi4config.bramConfig()))
  }
  noIoPrefix()

  val axiCrossbar = Axi4CrossbarFactory()

  val ram = new Axi4SharedToBram(
    addressAxiWidth = axi4config.getAxi4Configs().addressWidth,
    addressBRAMWidth = 8,
    dataWidth = 32,
    idWidth = 4     //Specify the AXI4 ID width.
  )

  //val bram = master(BRAM(axi4config.bramConfig()))

  ram.io.bram <> io.bram

  val apbBridge = Axi4SharedToApb3Bridge(addressWidth = axi4config.getAxi4Configs().addressWidth,dataWidth = axi4config.getAxi4Configs().dataWidth,
    idWidth = axi4config.getAxi4Configs().idWidth)

  axiCrossbar.addSlaves(
    apbBridge.io.axi -> (0x00002000L,   4 kB),
    ram.io.axi   -> (0x00000000L, 4 kB),
  )

  axiCrossbar.addConnections(
    io.axi -> List(ram.io.axi,apbBridge.io.axi)
  )


  axiCrossbar.addPipelining(ram.io.axi)((crossbar,ctrl) => {
    crossbar.sharedCmd.halfPipe()  >>  ctrl.sharedCmd
    crossbar.writeData            >/-> ctrl.writeData
    crossbar.writeRsp              <<  ctrl.writeRsp
    crossbar.readRsp               <<  ctrl.readRsp
  })

  axiCrossbar.addPipelining(apbBridge.io.axi)((crossbar,bridge) => {
    crossbar.sharedCmd.halfPipe() >> bridge.sharedCmd
    crossbar.writeData.halfPipe() >> bridge.writeData
    crossbar.writeRsp             << bridge.writeRsp
    crossbar.readRsp              << bridge.readRsp
  })

  axiCrossbar.build()

  val apb3busif = Apb3BusInterface(apbBridge.io.apb, (0x00001000L, 100 Byte))

  val Apb3_M_REG0  = apb3busif.newReg(doc="REG0")
  val Apb3_reg0 = Apb3_M_REG0.field(32 bits,RW,resetValue = 0)

  val Apb3_M_REG1  = apb3busif.newReg(doc="REG1")
  val Apb3_reg1 = Apb3_M_REG1.field(32 bits,RW,resetValue = 0)

  val Apb3_M_REG2  = apb3busif.newRegAt(address = 0x1010, doc="REG2")
  val Apb3_reg2 = Apb3_M_REG2.field(32 bits,RW,resetValue = 0)

  val Apb3_M_REG3  = apb3busif.newReg(doc="REG3")
  val Apb3_reg3 = Apb3_M_REG3.field(32 bits,RW,resetValue = 0)
}

class Gtx_test extends Component{
  val io = new Bundle{
    val axi = slave(Axi4(axi4config.getAxi4Configs()))
    val bram = slave(BRAM(axi4config.bramConfig()))
    val clk = in Bool()
    val reset = in Bool()
    val clkb = in Bool()
    val resetb = in Bool()
  }
  noIoPrefix()

  val clkcd = ClockDomain(io.clk,io.reset)

  val area = new ClockingArea(clkcd){
    val axi4top = new Axi4_top
    io.axi <> axi4top.io.axi

    val blockram = BlockRam(axi4config.bramConfig())

    axi4top.io.bram <> blockram.ioA
    io.bram <> blockram.ioB

    io.clk <> blockram.clka
    io.reset <> blockram.reseta
    io.clkb <> blockram.clkb
    io.resetb <> blockram.resetb
  }
}



object GtxtestMain extends App {
  SpinalConfig(
    //oneFilePerComponent = true,
    defaultClockDomainFrequency=FixedFrequency(100 MHz)
  ).generateSystemVerilog(new Gtx_test)
}


