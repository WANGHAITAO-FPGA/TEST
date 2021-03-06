package Apb3Bram

import spinal.core._
import spinal.lib.bus.amba3.apb._
import spinal.lib.bus.bram.{BRAM, BRAMConfig}
import spinal.lib.{master, slave}

object Apb3ToBram{

  def getConfigs(addressApbWidth: Int, addressBRAMWidth: Int, dataWidth: Int): (Apb3Config, BRAMConfig) =
    (
      Apb3Config(
        addressWidth = addressApbWidth,
        dataWidth    = dataWidth
      ),
      BRAMConfig(
        dataWidth    = dataWidth,
        addressWidth = addressBRAMWidth
      )
    )
}

class Apb3ToBram(addressApbWidth: Int, addressBRAMWidth: Int, dataWidth: Int) extends Component {
  assert(addressApbWidth >= addressBRAMWidth, "Address of the BRAM bus can be bigger than the Apb address")

  val (apbConfig, bramConfig) = Apb3ToBram.getConfigs(addressApbWidth, addressBRAMWidth, dataWidth)

  val io = new Bundle{
    val apb = slave(Apb3(apbConfig))
    val bram = master(BRAM(bramConfig))
  }

  io.apb.PREADY := True

  io.apb.PSLVERROR := False

  io.bram.addr := (io.apb.PADDR >>2).resized

  io.bram.en := io.apb.PSEL(0)

  when(io.apb.PENABLE && io.apb.PWRITE && io.apb.PSEL(0)){
    io.bram.we := (1<<(dataWidth/8)) - 1
  }otherwise{
    io.bram.we := 0
  }

  io.bram.wrdata := io.apb.PWDATA

  io.apb.PRDATA := io.bram.rddata
}


object Apb3ToBramMain extends App {
  SpinalConfig(
    //oneFilePerComponent = true,
    defaultClockDomainFrequency=FixedFrequency(100 MHz)
  ).generateSystemVerilog(new Apb3ToBram(20,8,32))
}