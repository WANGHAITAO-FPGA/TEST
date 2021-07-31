package GTX_TEST

import spinal.core._
import spinal.lib.bus.amba3.apb.Apb3Config
import spinal.lib.bus.amba4.axi.{Axi4, Axi4Config, Axi4CrossbarFactory, Axi4SharedOnChipRam, Axi4SharedToApb3Bridge, Axi4ToAxi4Shared, Axi4W}
import spinal.lib.bus.regif.AccessType.RW
import spinal.lib.bus.regif.{Apb3BusInterface, BusInterface}
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
}

class Gtx_test extends Component {
  val io = new Bundle{
    val axi = slave(Axi4(axi4config.getAxi4Configs()))
  }
  noIoPrefix()

  val axiCrossbar = Axi4CrossbarFactory()

  val ram = Axi4SharedOnChipRam(
    dataWidth = 32,
    byteCount = 4 kB,
    idWidth = 4     //Specify the AXI4 ID width.
  )

  val apbBridge = Axi4SharedToApb3Bridge(addressWidth = axi4config.getAxi4Configs().addressWidth,dataWidth = axi4config.getAxi4Configs().dataWidth,
    idWidth = axi4config.getAxi4Configs().idWidth)

  axiCrossbar.addSlaves(
    ram.io.axi   -> (0x00000000L, 4 kB),
    apbBridge.io.axi -> (0x00001000L,   1 MiB)
  )

  axiCrossbar.addConnections(
    io.axi -> List(ram.io.axi, apbBridge.io.axi)
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

  val busif = Apb3BusInterface(apbBridge.io.apb, (0x0000, 100 Byte))

  val M_REG0  = busif.newReg(doc="REG0")
  val reg0 = M_REG0.field(32 bits,RW,resetValue = 0)

  val M_REG1  = busif.newReg(doc="REG1")
  val reg1 = M_REG1.field(32 bits,RW,resetValue = 0)

  val M_REG2  = busif.newRegAt(address = 0x0010, doc="REG2")
  val reg2 = M_REG2.field(32 bits,RW,resetValue = 0)

  val M_REG3  = busif.newReg(doc="REG3")
  val reg3 = M_REG3.field(32 bits,RW,resetValue = 0)
}



object GtxtestMain extends App {
  SpinalConfig(
    //oneFilePerComponent = true,
    defaultClockDomainFrequency=FixedFrequency(100 MHz)
  ).generateSystemVerilog(new Gtx_test)
}