package Apb3Bram

import spinal.core._
import spinal.lib.bus.amba4.axi.{Axi4Config, Axi4R, Axi4W}
import spinal.lib.{master, slave}

class Gtx_Slave(datawidth: Int) extends BlackBox{
  val io = new Bundle{
    val s_axi_tx_tdata = in Bits(datawidth bits)
    val s_axi_tx_tkeep = in Bits(datawidth/8 bits)
    val s_axi_tx_tvalid = in Bool()
    val s_axi_tx_tlast = in Bool()
    val s_axi_tx_tready = out Bool()

    val m_axi_rx_tdata = out Bits(datawidth bits)
    val m_axi_rx_tkeep = out Bits(datawidth/8 bits)
    val m_axi_rx_tvalid = out Bool()
    val m_axi_rx_tlast = out Bool()

    val drpaddr_in = in Bits(9 bits)
    val drpen_in = in Bool()
    val drpdi_in = in Bool()
    val drpdo_out = out Bits(16 bits)
    val drprdy_out = out Bool()
    val drpwe_in = in Bool()

    val loopback = in Bits(3 bits)
    val power_down = in Bool()

    val rxp = in Bool()
    val rxn = in Bool()
    val txp = out Bool()
    val txn = out Bool()

    val reset = in Bool()
    val gt_reset = in Bool()
    val drpclk_in = in Bool()
    val init_clk_in = in Bool()

    val channel_up = out Bool()
    val frame_err = out Bool()
    val hard_err = out Bool()
    val lane_up = out Bool()

    val rx_resetdone_out = out Bool()
    val soft_err = out Bool()
    val tx_lock = out Bool()
    val tx_resetdone_out = out Bool()

    val link_reset_out = out Bool()
    val sys_reset_out = out Bool()
    /*if(ismaster){
    val gt_refclk1_p = in Bool()
    val gt_refclk1_n = in Bool()

    val pll_not_locked_out = out Bool()
    val gt0_qplllock_out = out Bool()
    val gt0_qpllrefclklost_out = out Bool()
    val user_clk_out = out Bool()
    val sync_clk_out = out Bool()
    val init_clk_out = out Bool()
    val gt_reset_out = out Bool()
    val gt_refclk1_out = out Bool()
    val gt_qpllclk_quad3_out = out Bool()
    val gt_qpllrefclk_quad3_out = out Bool()*/
    //}else{
      val pll_not_locked = in Bool()
      val gt0_qplllock_in = in Bool()
      val gt0_qpllrefclklost_in = in Bool()
      val gt_qpllclk_quad3_in = in Bool()
      val gt_qpllrefclk_quad3_in = in Bool()
      val user_clk = in Bool()
      val sync_clk = in Bool()
      val gt_refclk1 = in Bool()
      val gt0_qpllreset_out = out Bool()
      val tx_out_clk = out Bool()
    //}
  }
  noIoPrefix()
}

class Gtx_Master(datawidth: Int) extends BlackBox{
  val io = new Bundle{
    val s_axi_tx_tdata = in Bits(datawidth bits)
    val s_axi_tx_tkeep = in Bits(datawidth/8 bits)
    val s_axi_tx_tvalid = in Bool()
    val s_axi_tx_tlast = in Bool()
    val s_axi_tx_tready = out Bool()

    val m_axi_rx_tdata = out Bits(datawidth bits)
    val m_axi_rx_tkeep = out Bits(datawidth/8 bits)
    val m_axi_rx_tvalid = out Bool()
    val m_axi_rx_tlast = out Bool()

    val drpaddr_in = in Bits(9 bits)
    val drpen_in = in Bool()
    val drpdi_in = in Bool()
    val drpdo_out = out Bits(16 bits)
    val drprdy_out = out Bool()
    val drpwe_in = in Bool()

    val loopback = in Bits(3 bits)
    val power_down = in Bool()

    val rxp = in Bool()
    val rxn = in Bool()
    val txp = out Bool()
    val txn = out Bool()

    val reset = in Bool()
    val gt_reset = in Bool()
    val drpclk_in = in Bool()
    val init_clk_in = in Bool()

    val channel_up = out Bool()
    val frame_err = out Bool()
    val hard_err = out Bool()
    val lane_up = out Bool()

    val rx_resetdone_out = out Bool()
    val soft_err = out Bool()
    val tx_lock = out Bool()
    val tx_resetdone_out = out Bool()

    val link_reset_out = out Bool()
    val sys_reset_out = out Bool()

    //if(ismaster){
      val gt_refclk1_p = in Bool()
      val gt_refclk1_n = in Bool()

      val pll_not_locked_out = out Bool()
      val gt0_qplllock_out = out Bool()
      val gt0_qpllrefclklost_out = out Bool()
      val user_clk_out = out Bool()
      val sync_clk_out = out Bool()
      val gt_reset_out = out Bool()
      val gt_refclk1_out = out Bool()
      val gt_qpllclk_quad3_out = out Bool()
      val gt_qpllrefclk_quad3_out = out Bool()
    /*}else{
      val pll_not_locked = in Bool()
      val gt0_qplllock_in = in Bool()
      val gt0_qpllrefclklost_in = in Bool()
      val gt_qpllclk_quad3_in = in Bool()
      val gt_qpllrefclk_quad3_in = in Bool()
      val user_clk = in Bool()
      val sync_clk = in Bool()
      val gt_refclk1 = in Bool()
      val gt0_qpllreset_out = out Bool()
      val tx_out_clk = out Bool()
    }*/
  }
  noIoPrefix()
}

class AuroraMasterIp(addresswidth: Int, datawidth: Int) extends Component{
  val axi4Config = Axi4Config(addressWidth = addresswidth,dataWidth = datawidth,idWidth = 1,useStrb = false,useId = false,useResp = false)
  val io = new Bundle{
    val axiw = slave Stream (Axi4W(axi4Config))
    val axir = master Stream (Axi4R(axi4Config))
    val rxp = in Bool()
    val rxn = in Bool()
    val txp = out Bool()
    val txn = out Bool()
    val init_clk_in = in Bool()
    val gt_refclk1_p = in Bool()
    val gt_refclk1_n = in Bool()
    val fiber_status = out Bits(datawidth bits)
    val gt_reset = in Bool()
    val reset = in Bool()
    val power_down = in Bool()

    val gt_refclk1_out = out Bool()
    val user_clk_out = out Bool()
    val sync_clk_out = out Bool()
    val gt0_qplllock_out = out Bool()
    val gt0_qpllrefclklost_out = out Bool()
    val gt_qpllclk_quad3_out = out Bool()
    val gt_qpllrefclk_quad3_out = out Bool()
  }
  noIoPrefix()
  val aurora_channela = new Gtx_Master(datawidth)

  io.axiw.ready <> aurora_channela.io.s_axi_tx_tready
  io.axiw.payload.data <> aurora_channela.io.s_axi_tx_tdata
  io.axiw.payload.last <> aurora_channela.io.s_axi_tx_tlast
  io.axiw.valid <> aurora_channela.io.s_axi_tx_tvalid
  aurora_channela.io.s_axi_tx_tkeep := 0x0f

  io.axir.payload.data <> aurora_channela.io.m_axi_rx_tdata
  io.axir.payload.last <> aurora_channela.io.m_axi_rx_tlast
  io.axir.valid <> aurora_channela.io.m_axi_rx_tvalid

  io.rxn <> aurora_channela.io.rxn
  io.rxp <> aurora_channela.io.rxp
  io.txn <> aurora_channela.io.txn
  io.txp <> aurora_channela.io.txp

  io.init_clk_in <> aurora_channela.io.init_clk_in
  io.init_clk_in <> aurora_channela.io.drpclk_in
  io.gt_refclk1_n <> aurora_channela.io.gt_refclk1_n
  io.gt_refclk1_p <> aurora_channela.io.gt_refclk1_p
  io.gt_refclk1_out <> aurora_channela.io.gt_refclk1_out
  io.user_clk_out <> aurora_channela.io.user_clk_out

  io.fiber_status := (aurora_channela.io.frame_err##aurora_channela.io.hard_err##aurora_channela.io.soft_err##aurora_channela.io.lane_up##aurora_channela.io.channel_up).resized

  io.gt_reset <> aurora_channela.io.gt_reset
  io.reset <> aurora_channela.io.reset
  io.power_down <> aurora_channela.io.power_down
  io.sync_clk_out <> aurora_channela.io.sync_clk_out

  aurora_channela.io.drpaddr_in := 0
  aurora_channela.io.drpen_in := False
  aurora_channela.io.drpdi_in := False
  aurora_channela.io.drpwe_in := False
  aurora_channela.io.loopback := 0

  io.gt0_qplllock_out <> aurora_channela.io.gt0_qplllock_out
  io.gt0_qpllrefclklost_out <> aurora_channela.io.gt0_qpllrefclklost_out
  io.gt_qpllclk_quad3_out <> aurora_channela.io.gt_qpllclk_quad3_out
  io.gt_qpllrefclk_quad3_out <> aurora_channela.io.gt_qpllrefclk_quad3_out
}

class AuroraSlaveIp(addresswidth: Int, datawidth: Int) extends Component{
  val axi4Config = Axi4Config(addressWidth = addresswidth,dataWidth = datawidth,idWidth = 1,useStrb = false,useId = false,useResp = false)
  val io = new Bundle{
    val axiw = slave Stream (Axi4W(axi4Config))
    val axir = master Stream (Axi4R(axi4Config))
    val rxp = in Bool()
    val rxn = in Bool()
    val txp = out Bool()
    val txn = out Bool()

    val init_clk_in = in Bool()
    val fiber_status = out Bits(datawidth bits)
    val gt_reset = in Bool()
    val reset = in Bool()
    val power_down = in Bool()

    val gt0_qplllock_in = in Bool()
    val gt0_qpllrefclklost_in = in Bool()
    val gt_qpllclk_quad3_in = in Bool()
    val gt_qpllrefclk_quad3_in = in Bool()
    val user_clk = in Bool()
    val sync_clk = in Bool()
    val gt_refclk1 = in Bool()
  }
  noIoPrefix()
  val aurora_channelb = new Gtx_Slave(datawidth)

  io.axiw.ready <> aurora_channelb.io.s_axi_tx_tready
  io.axiw.payload.data <> aurora_channelb.io.s_axi_tx_tdata
  io.axiw.payload.last <> aurora_channelb.io.s_axi_tx_tlast
  io.axiw.valid <> aurora_channelb.io.s_axi_tx_tvalid
  aurora_channelb.io.s_axi_tx_tkeep := 0x0f

  io.axir.payload.data <> aurora_channelb.io.m_axi_rx_tdata
  io.axir.payload.last <> aurora_channelb.io.m_axi_rx_tlast
  io.axir.valid <> aurora_channelb.io.m_axi_rx_tvalid

  io.gt_refclk1 <> aurora_channelb.io.gt_refclk1
  io.gt0_qplllock_in <> aurora_channelb.io.gt0_qplllock_in
  io.gt0_qpllrefclklost_in <> aurora_channelb.io.gt0_qpllrefclklost_in
  io.gt_qpllclk_quad3_in <> aurora_channelb.io.gt_qpllclk_quad3_in
  io.gt_qpllrefclk_quad3_in <> aurora_channelb.io.gt_qpllrefclk_quad3_in
  io.user_clk <> aurora_channelb.io.user_clk
  io.sync_clk <> aurora_channelb.io.sync_clk
  aurora_channelb.io.pll_not_locked := False

  io.init_clk_in <> aurora_channelb.io.init_clk_in
  io.init_clk_in <> aurora_channelb.io.drpclk_in
  io.gt_reset <> aurora_channelb.io.gt_reset
  io.reset <> aurora_channelb.io.reset
  io.power_down <> aurora_channelb.io.power_down

  io.rxn <> aurora_channelb.io.rxn
  io.rxp <> aurora_channelb.io.rxp
  io.txn <> aurora_channelb.io.txn
  io.txp <> aurora_channelb.io.txp

  io.fiber_status := (aurora_channelb.io.frame_err##aurora_channelb.io.hard_err##aurora_channelb.io.soft_err##aurora_channelb.io.lane_up##aurora_channelb.io.channel_up).resized

  aurora_channelb.io.drpaddr_in := 0
  aurora_channelb.io.drpen_in := False
  aurora_channelb.io.drpdi_in := False
  aurora_channelb.io.drpwe_in := False
  aurora_channelb.io.loopback := 0
}

class AuroraIp(addresswidth: Int, datawidth: Int, slavenumber: Int) extends Component{
  val axi4Config = Axi4Config(addressWidth = addresswidth,dataWidth = datawidth,idWidth = 1,useStrb = false,useId = false,useResp = false)
  val gtx_channel_number = slavenumber + 1
  val io = new Bundle{
    val axiw = Seq.fill(gtx_channel_number)(slave Stream (Axi4W(axi4Config)))
    val axir = Seq.fill(gtx_channel_number)(master Stream (Axi4R(axi4Config)))
    val rxp = Seq.fill(gtx_channel_number)(in Bool())
    val rxn = Seq.fill(gtx_channel_number)(in Bool())
    val txp = Seq.fill(gtx_channel_number)(out Bool())
    val txn = Seq.fill(gtx_channel_number)(out Bool())
    val init_clk_in = in Bool()
    val gt_refclk1_p = in Bool()
    val gt_refclk1_n = in Bool()
    val fiber_status = Seq.fill(gtx_channel_number)(out Bits(datawidth bits))
    val gt_reset = in Bool()
    val reset = in Bool()
    val power_down = in Bool()
  }
  noIoPrefix()
  val auroramaster = new AuroraMasterIp(addresswidth,datawidth)
  val auroraslave = new AuroraSlaveIp(addresswidth,datawidth)

  io.axiw(0) <> auroramaster.io.axiw
  io.axir(0) <> auroramaster.io.axir

  io.axiw(1) <> auroraslave.io.axiw
  io.axir(1) <> auroraslave.io.axir

  io.rxp(0) <> auroramaster.io.rxp
  io.rxn(0) <> auroramaster.io.rxn
  io.txp(0) <> auroramaster.io.txp
  io.txn(0) <> auroramaster.io.txn
  io.rxp(1) <> auroraslave.io.rxp
  io.rxn(1) <> auroraslave.io.rxn
  io.txp(1) <> auroraslave.io.txp
  io.txn(1) <> auroraslave.io.txn

  io.init_clk_in <> auroramaster.io.init_clk_in
  io.init_clk_in <> auroraslave.io.init_clk_in

  io.gt_refclk1_n <> auroramaster.io.gt_refclk1_n
  io.gt_refclk1_p <> auroramaster.io.gt_refclk1_p

  io.fiber_status(0) <> auroramaster.io.fiber_status
  io.fiber_status(1) <> auroraslave.io.fiber_status

  io.gt_reset <> auroramaster.io.gt_reset
  io.gt_reset <> auroraslave.io.gt_reset

  io.reset <> auroramaster.io.reset
  io.reset <> auroraslave.io.reset

  io.power_down <> auroramaster.io.power_down
  io.power_down <> auroraslave.io.power_down

  auroramaster.io.gt_refclk1_out <> auroraslave.io.gt_refclk1
  auroramaster.io.gt0_qplllock_out <> auroraslave.io.gt0_qplllock_in
  auroramaster.io.gt0_qpllrefclklost_out <> auroraslave.io.gt0_qpllrefclklost_in
  auroramaster.io.gt_qpllclk_quad3_out <> auroraslave.io.gt_qpllclk_quad3_in
  auroramaster.io.gt_qpllrefclk_quad3_out <> auroraslave.io.gt_qpllrefclk_quad3_in
  auroramaster.io.user_clk_out <> auroraslave.io.user_clk
  auroramaster.io.sync_clk_out <> auroraslave.io.sync_clk
}

/*
object AuroraMasterIp extends App {
  SpinalConfig(
    //oneFilePerComponent = true,
    defaultClockDomainFrequency=FixedFrequency(100 MHz)
  ).generateSystemVerilog(new AuroraMasterIp(20,32))
}*/
/*
object AuroraSlaveIp extends App {
  SpinalConfig(
    //oneFilePerComponent = true,
    defaultClockDomainFrequency=FixedFrequency(100 MHz)
  ).generateSystemVerilog(new AuroraSlaveIp(20,32))
}*/


object AuroraIp extends App {
  SpinalConfig(
    //oneFilePerComponent = true,
    defaultClockDomainFrequency=FixedFrequency(100 MHz)
  ).generateSystemVerilog(new AuroraIp(20,32,1))
}