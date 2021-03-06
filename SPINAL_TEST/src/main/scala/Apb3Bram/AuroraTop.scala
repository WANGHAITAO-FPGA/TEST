package Apb3Bram

import Apb3Bram.regFileGen.regInsert
import GTX_TEST.BlockRam
import spinal.core._
import spinal.core.sim.SimConfig
import spinal.lib.bus.amba3.apb.{Apb3, Apb3SlaveFactory}
import spinal.lib.bus.bram.BRAM
import spinal.lib.{Delay, master, slave}
import spinal.core.sim._
import spinal.lib.bus.amba3.apb.sim.Apb3Driver
import spinal.lib.bus.amba4.axi.{Axi4Config, Axi4R, Axi4W}

class AuroraTop(addressApbWidth: Int, addressBRAMWidth: Int, dataWidth: Int)  extends Component{
  val (apbConfig, bramConfig) = Apb3ToBram.getConfigs(addressApbWidth, addressBRAMWidth, dataWidth)
  val axi4Config = Axi4Config(addressWidth = addressBRAMWidth,dataWidth = dataWidth,idWidth = 1,useStrb = false,useId = false,useResp = false)
  val io = new Bundle{
    val apb = slave(Apb3(apbConfig))
    val axiw = master Stream (Axi4W(axi4Config))
    val axir = slave Stream (Axi4R(axi4Config))
    val tx_bram = slave(BRAM(bramConfig))
    val rx_bram = slave(BRAM(bramConfig))
    val clk = in Bool()
    val reset = in Bool()
    val aurora_userclk = in Bool()
    val intrrupt = out Bool()
  }
  noIoPrefix()

  val auroraClockDomain = new ClockDomain(io.aurora_userclk,io.reset)

  val topClockDomain = new ClockDomain(io.clk,io.reset)

  val toparea = new ClockingArea(topClockDomain){

    val tx_headtemp = Reg(Bits(dataWidth bits)) addTag(crossClockDomain)

    val tx_ctrl = Reg(Bits(1 bits)) init 0

    val tx_triger = Reg(Bits(1 bits))  init 0

    val ctrl = Apb3SlaveFactory(io.apb)

    val triger = Reg(Bool()) init False addTag(crossClockDomain)

    when(ctrl.isWriting(0x010004)){
      triger := True
    }otherwise{
      triger := False
    }

    ctrl.readAndWrite(tx_headtemp,0x01000C,bitOffset = 0,documentation = "auroratx 发送帧头")

    ctrl.readAndWrite(tx_ctrl,0x010004,bitOffset = 0,documentation = "auroratx send_data register")

    ctrl.readAndWrite(tx_triger,0x010004,bitOffset = 4,documentation = "auroratx send_triger register")

    ctrl.addDataModel("aurora reg",0)

    val tx_ctrl_temp = tx_ctrl.asBool & triger

    val tx_triger_temp = tx_triger.asBool & triger

    val tx_senddatatriger = Reg(Bool()) init False addTag(crossClockDomain)
    val tx_sendtriger  = Reg(Bool()) init False addTag(crossClockDomain)

    tx_senddatatriger := tx_ctrl_temp|Delay(tx_ctrl_temp,1)|Delay(tx_ctrl_temp,2)|Delay(tx_ctrl_temp,3)

    tx_sendtriger := tx_triger_temp|Delay(tx_triger_temp,1)|Delay(tx_triger_temp,2)|Delay(tx_triger_temp,3)
  }

  val auroraArea = new ClockingArea(auroraClockDomain){
    val aurorarxcore = new AuroraRxCore(dataWidth,addressBRAMWidth)
    val auroratxcore = new AuroraTxCore(dataWidth,addressBRAMWidth)

    val auroraTxBlockRam = new BlockRam(bramConfig)
    val auroraRxBlockRam = new BlockRam(bramConfig)
  }

  auroraArea.auroratxcore.io.axiw <> io.axiw
  auroraArea.aurorarxcore.io.axir <> io.axir

  auroraArea.auroratxcore.io.tx_head := toparea.tx_headtemp

  auroraArea.auroratxcore.io.tx_start := toparea.tx_senddatatriger
  auroraArea.auroratxcore.io.tx_trigger := toparea.tx_sendtriger

  auroraArea.aurorarxcore.io.bram <> auroraArea.auroraRxBlockRam.ioB
  auroraArea.aurorarxcore.io.bram_clkout <> auroraArea.auroraRxBlockRam.clkb
  auroraArea.aurorarxcore.io.bram_resetout <> auroraArea.auroraRxBlockRam.resetb

  auroraArea.auroratxcore.io.bram <> auroraArea.auroraTxBlockRam.ioA
  auroraArea.auroratxcore.io.bram_clkout <> auroraArea.auroraTxBlockRam.clka
  auroraArea.auroratxcore.io.bram_resetout <> auroraArea.auroraTxBlockRam.reseta

  io.rx_bram <> auroraArea.auroraRxBlockRam.ioA
  io.clk <> auroraArea.auroraRxBlockRam.clka
  io.reset <> auroraArea.auroraRxBlockRam.reseta

  io.tx_bram <> auroraArea.auroraTxBlockRam.ioB
  io.clk <> auroraArea.auroraTxBlockRam.clkb
  io.reset <> auroraArea.auroraTxBlockRam.resetb

  io.aurora_userclk <> auroraArea.auroratxcore.io.aurora_userclk
  io.aurora_userclk <> auroraArea.aurorarxcore.io.aurora_userclk
  io.reset <> auroraArea.auroratxcore.io.reset
  io.reset <> auroraArea.aurorarxcore.io.reset

  io.intrrupt <> auroraArea.aurorarxcore.io.intrrupt
}

object AuroraTop{
  def main(args: Array[String]): Unit = {
    SimConfig.withWave.doSim(new AuroraTop(20,8,32)){dut=>
      dut.toparea.clockDomain.forkStimulus(10)
      dut.auroraArea.clockDomain.forkStimulus(20)
      dut.toparea.clockDomain.waitSampling(30)
      val testapb = new Apb3Driver(dut.io.apb,dut.toparea.clockDomain)
      testapb.write(0,0x00000305)
      testapb.write(4,1)
      testapb.write(4,0)
      sleep(2000)
    }
  }
}