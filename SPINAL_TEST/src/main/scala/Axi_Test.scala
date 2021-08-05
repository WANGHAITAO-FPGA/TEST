import spinal.core._
import spinal.lib.bus.amba3.apb.{Apb3, Apb3Config}
import spinal.lib.bus.amba4.axi.{Axi4, Axi4Config, Axi4Shared, Axi4SharedToApb3Bridge, Axi4ToAxi4Shared}
import spinal.lib.{master, slave}
import xilinx._

object axi4toapb3{
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
  def getApb3Configs() =(
      Apb3Config(
        addressWidth  = 20,
        dataWidth     = 32,
        selWidth      = 1,
        useSlaveError = true
      )
    )
}


class Axi_Test extends Component {
  val io = new Bundle{
    val axi = slave (Axi4(axi4toapb3.getAxi4Configs()))
    val apb = master(Apb3(axi4toapb3.getApb3Configs()))
  }

  noIoPrefix()

  val axi4Shared = Axi4ToAxi4Shared(io.axi)

  val apbBridge = Axi4SharedToApb3Bridge(
    addressWidth = 20,
    dataWidth    = 32,
    idWidth      = 4
  )

  axi4Shared <> apbBridge.io.axi
  io.apb <> apbBridge.io.apb
}

object Axi_TestMain {
  def main(args: Array[String]): Unit = {
    def VivadoSynth[T <: Component](gen: => T, name: String = "temp"): Unit = {
      val report = VivadoFlow(design = gen, name, s"D:/vivado_test/synthWorkspace/$name").doit()
      report.printArea()
      report.printFMax()
    }
    VivadoSynth(new Axi_Test(), name = "Axi_Test")
  }
}