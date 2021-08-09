package Apb3Bram

import spinal.core._
import spinal.lib.bus.amba3.apb.{Apb3, Apb3Config}
import spinal.lib.{IMasterSlave, master}
import spinal.lib.io.{InOutWrapper, TriState}
import spinal.core.sim._

case class EmifConfig(emifaddresswidth  : Int, emifdataWidth: Int, usejoint : Boolean)


object EmifToApb{

  def getConfigs(emifaddresswidth : Int,emifdataWidth: Int, apb3addressWidth: Int,  apb3dataWidth: Int, selId:Int, usejoint : Boolean): (EmifConfig, Apb3Config) =
    (
      EmifConfig(
        emifaddresswidth  = emifaddresswidth,
        emifdataWidth = emifdataWidth,
        usejoint = usejoint
      ),
      Apb3Config(
        addressWidth = apb3addressWidth,
        dataWidth    = apb3dataWidth,
        selWidth     = selId
      )
    )
}


case class EmifInterface(config : EmifConfig) extends Bundle with IMasterSlave{
  val emif_addr = UInt((config.emifaddresswidth) bits)
  val emif_data = TriState(Bits(config.emifdataWidth bits))
  val emif_cs  = Bool
  val emif_we  = Bool
  val emif_oe  = Bool

  override def asMaster(): Unit = {
    in(emif_addr,emif_cs,emif_we,emif_oe)
    master(emif_data)
  }
}

class EmifToApb(emifaddresswidth : Int, emifdataWidth: Int, apb3addressWidth: Int, apb3dataWidth: Int,  selId:Int, usejoint:Boolean=false) extends Component{
  assert(apb3dataWidth >= emifdataWidth, "Address of the Apb3 bus can be bigger than the Emif datawidth")
  assert(emifaddresswidth >= apb3addressWidth, "Address of the Emif bus can be bigger than the Apb3 addresswidth")

  val (emifConfig, apb3Config) = EmifToApb.getConfigs(emifaddresswidth, emifdataWidth, apb3addressWidth, apb3dataWidth, selId, usejoint)

  val io = new Bundle{
    val emif = master(EmifInterface(emifConfig))
    val apb = master(Apb3(apb3Config))
  }
  noIoPrefix()

  val penable = Reg(Bool()) init False

  val emifdatatemp = Reg(Bits(emifdataWidth bits))

  if(!usejoint) penable := (!io.emif.emif_oe)||(!io.emif.emif_we) else penable := ((!io.emif.emif_oe)||(!io.emif.emif_we))&&io.emif.emif_addr(emifaddresswidth-1)

  io.apb.PADDR := io.emif.emif_addr.resized

  io.apb.PSEL := ~(io.emif.emif_cs.asBits)

  io.apb.PENABLE := Mux(penable.rise(),penable,False)

  if(!usejoint) io.apb.PWRITE := (!io.emif.emif_we)&&io.emif.emif_oe else io.apb.PWRITE := (!io.emif.emif_we)&&io.emif.emif_oe&&io.emif.emif_addr(emifaddresswidth-1)

  when((!io.emif.emif_we)&&io.emif.emif_oe&&(!io.emif.emif_addr(emifaddresswidth-1))){
    emifdatatemp := io.emif.emif_data.read
  }

  if(!usejoint)io.apb.PWDATA := io.emif.emif_data.read else io.apb.PWDATA := io.emif.emif_data.read ## emifdatatemp

  io.emif.emif_data.writeEnable := !io.emif.emif_oe

  if(!usejoint) io.emif.emif_data.write := RegNextWhen(io.apb.PRDATA,!io.emif.emif_oe)
  else{
    when(io.emif.emif_addr(emifaddresswidth-1)){
      io.emif.emif_data.write := RegNextWhen(io.apb.PRDATA(apb3dataWidth-1 downto emifdataWidth),!io.emif.emif_oe)
    }otherwise{
      io.emif.emif_data.write := RegNextWhen(io.apb.PRDATA(emifdataWidth-1 downto 0),!io.emif.emif_oe)
    }
  }
}


case class Emif_Ctrl_test(period:Int) extends EmifToApb(24,32,20,32,1,false){
  def init = {
    clockDomain.forkStimulus(period)
    io.emif.emif_cs #= true
    io.emif.emif_oe #= true
    io.emif.emif_we #= true
    io.emif.emif_addr #= 0
    clockDomain.waitSampling(10)
  }
  def emif_write(addr:Int,data:Int) = {
    io.emif.emif_cs #= true
    io.emif.emif_oe #= true
    io.emif.emif_we #= true
    clockDomain.waitSampling()
    io.emif.emif_cs #= false
    io.emif.emif_oe #= true
    io.emif.emif_we #= true
    io.emif.emif_addr #= addr
    clockDomain.waitSampling()
    io.emif.emif_we #= false
    io.emif.emif_data.read #= data
    clockDomain.waitSampling(2)
    io.emif.emif_cs #= true
    io.emif.emif_oe #= true
    io.emif.emif_we #= true
  }

  def emif_read(addr:Int)= {
    io.emif.emif_cs #= true
    io.emif.emif_oe #= true
    io.emif.emif_we #= true
    clockDomain.waitSampling()
    io.emif.emif_cs #= false
    io.emif.emif_oe #= true
    io.emif.emif_we #= true
    io.emif.emif_addr #= addr
    clockDomain.waitSampling()
    io.emif.emif_oe #= false
    clockDomain.waitSampling()
    println(io.emif.emif_data.write)
    clockDomain.waitSampling()
    io.emif.emif_cs #= true
    io.emif.emif_oe #= true
    io.emif.emif_we #= true
  }
}

object Emif_Test {
  def main(args: Array[String]): Unit = {
    val dut = SimConfig.withWave.compile(Emif_Ctrl_test(10))
    dut.doSim{dut =>
      dut.init
      dut.emif_write(0x000004, 0x5678)
      dut.emif_write(0x800004, 0x1234)
      dut.emif_read(0x000000)
      dut.emif_read(0x800000)
      sleep(100)

    }
  }

}