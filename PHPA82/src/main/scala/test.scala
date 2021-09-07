import spinal.core._
import spinal.lib.bus.amba3.apb.{Apb3, Apb3Config, Apb3SlaveFactory}
import spinal.lib.bus.bmb.BmbParameter
import spinal.lib.com.eth.BmbMacEth.addressWidth
import spinal.lib.com.eth.{BmbMacEth, MacEth, MacEthParameter, PhyIo, PhyParameter}
import spinal.lib.{master, slave}

object Apb3Axi{
  def getApb3Config = Apb3Config(
    addressWidth = 20,
    dataWidth = 32,
    selWidth = 1,
    useSlaveError = false
  )
}

class test extends Component {
  val macethparameter = MacEthParameter(
    phy = PhyParameter(8,8),
    rxDataWidth = 32,
    txDataWidth = 32,
    rxBufferByteSize = 256,
    txBufferByteSize = 256
  )
  val io = new Bundle{
    val txclk = in Bool()
    val rxclk = in Bool()
    val reset = in Bool()
    val phy = master(PhyIo(macethparameter.phy))
    val apb =  slave(Apb3(Apb3Axi.getApb3Config))
  }

  val txcd = ClockDomain(io.txclk,io.reset)
  val rxcd = ClockDomain(io.rxclk,io.reset)

  val mac = MacEth(macethparameter,txcd,rxcd)
  mac.io.phy <> io.phy
  val busCtrl = Apb3SlaveFactory(io.apb)
  val bridge = mac.io.ctrl.driveFrom(busCtrl)

}

object test extends App {
  SpinalConfig(
    //oneFilePerComponent = true,
    defaultClockDomainFrequency=FixedFrequency(100 MHz)
  ).generateVerilog(new test)
}

