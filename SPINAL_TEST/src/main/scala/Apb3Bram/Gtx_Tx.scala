package Apb3Bram

import Apb3Bram.AuroraState.{CRC, DATA, DEVICEID, IDLE, LENGTH, START, STOP, WAIT}
import GTX_TEST.axi4config.bramConfig
import spinal.core._
import spinal.core.sim.SimConfig
import spinal.lib.bus.amba4.axi.{Axi4Config, Axi4W}
import spinal.lib.bus.bram.{BRAM, BRAMConfig}
import spinal.lib.{master, slave}
import spinal.core.sim._

import scala.util.Random

object AuroraState extends SpinalEnum {
  val IDLE, WAIT, START, DEVICEID, LENGTH, DATA, CRC, STOP = newElement()
}

class AuroraTxCore(datawidth : Int , addresswidth : Int) extends Component{
  val axi4Config = Axi4Config(addressWidth = addresswidth,dataWidth = datawidth,idWidth = 1,useStrb = false)
  val io = new Bundle{
    val aurora_userclk = in Bool()
    val reset = in Bool()
    val axiw = master Stream (Axi4W(axi4Config))
    val tx_head = in Bits(datawidth bits)
    val tx_start = in Bool()
    val tx_trigger = in Bool()
    val bram = master(BRAM(BRAMConfig(datawidth,addresswidth)))
    val bram_clkout = out Bool()
    val bram_resetout = out Bool()
  }
  noIoPrefix()

  val auroraClkDomain = ClockDomain(io.aurora_userclk,io.reset)

  val auroraTxArea = new ClockingArea(auroraClkDomain){
    /*val romSamples = for(sampleId <- 0 until 256)yield{
      val normalized = sampleId + 1
      BigInt(normalized.toLong)
    }

    val mem = Mem(Bits(datawidth bits), wordCount = 256) initBigInt(romSamples)*/

    var axi_txdata = Reg(Bits(datawidth bits)) init 0
    var axi_last = Reg(Bool()) init False

    val axi_txhead = Reg(Bits(datawidth bits))
    axi_txhead := io.tx_head

    val length = Reg(UInt(addresswidth bits))
    val mem_rden = Reg(Bool()) init False
    val mem_data = Bits(datawidth bits)

    val mem_addrtemp = Reg(UInt(addresswidth bits)) init 0

    var crc_data = Reg(Bits(datawidth bits))

    val data_cnt = Reg(UInt(addresswidth bits))

    val stateMachine = new Area {
      import AuroraState._

      val state = RegInit(IDLE)
      switch(state) {
        is(IDLE){
          axi_last := False
          when(io.tx_start && io.axiw.ready){
            state := START
          }elsewhen(io.tx_start && (!io.axiw.ready)){
            state := WAIT
          }
        }
        is(WAIT){
          when(io.axiw.ready){
            state := START
          }
        }
        is(START){
          when(io.axiw.fire){
            mem_rden := True
            length := axi_txhead(addresswidth-1 downto 0).asUInt
            when(axi_txhead(15 downto 8) === 0){
              mem_addrtemp := 1
            }otherwise{
              mem_addrtemp := axi_txhead(15 downto 8).asUInt
            }
            state := DEVICEID
          }
        }
        is(DEVICEID){
          when(io.axiw.fire){
            state := LENGTH
          }
        }
        is(LENGTH){
          when(io.axiw.fire){
            mem_addrtemp := mem_addrtemp + 1
            state := DATA
            data_cnt := 0
          }
        }
        is(DATA){
          when(io.axiw.fire){
            data_cnt := data_cnt + 1
            when(data_cnt < length-1){
              mem_addrtemp := mem_addrtemp + 1
            }otherwise{
              state := CRC
            }
          }
        }
        is(CRC){
          when(io.axiw.fire){
            state := STOP
          }
        }
        is(STOP){
          when(io.axiw.fire) {
            state := IDLE
          }
        }
      }
    }

    when(stateMachine.state === START){
      axi_txdata \= B"32'h0000FFBC"
    }elsewhen(stateMachine.state === DEVICEID){
      axi_txdata \= B"32'h00000001"
    }elsewhen(stateMachine.state === LENGTH){
      axi_txdata \= io.tx_head
    }elsewhen(stateMachine.state === DATA){
      axi_txdata \= mem_data
    }elsewhen(stateMachine.state === CRC){
      axi_txdata \= crc_data
    }elsewhen(stateMachine.state === STOP){
      axi_txdata \= B"32'h0000FFBD"
    }otherwise{
      axi_txdata \= B"32'h00000000"
    }

    when(stateMachine.state === STOP & io.axiw.fire){
      axi_last \= True
    }otherwise{
      axi_last \= False
    }

    when(stateMachine.state === START){
      crc_data := B"32'hFFFFFFFF"
    }elsewhen((stateMachine.state === DEVICEID|stateMachine.state === LENGTH|stateMachine.state === DATA)&io.axiw.fire){
      crc_data := Crc32.crc32(crc_data,axi_txdata)
    }otherwise{
      crc_data := crc_data
    }

    val mem_addr = Mux(io.axiw.fire,mem_addrtemp,mem_addrtemp-1)

    /*mem_data := mem.readSync(
      enable  = mem_rden,
      address = mem_addr)*/

    io.axiw.valid := io.axiw.ready & (stateMachine.state =/= IDLE)
    io.axiw.payload.data := axi_txdata
    io.axiw.payload.last := axi_last

    io.bram.addr := mem_addr
    io.bram.en := mem_rden
    io.bram.we := 0
    io.bram.wrdata := 0
    mem_data := io.bram.rddata

    io.bram_clkout := io.aurora_userclk
    io.bram_resetout := io.reset
  }
}

object AuroraTxCore {
  def main(args: Array[String]): Unit = {
    SimConfig.withWave.doSim(new AuroraTxCore(32,8)) { dut =>
      dut.auroraTxArea.clockDomain.forkStimulus(10)
      dut.io.tx_trigger #= false
      dut.io.tx_start #= false
      dut.auroraTxArea.clockDomain.waitSampling(10)
      var idx = 0
      while(idx < 1){
        dut.io.tx_head #= 0x00000304
        dut.io.axiw.ready #= true
        dut.io.tx_start #= true
        dut.auroraTxArea.clockDomain.waitSampling()
        for(i <- 0 until 50)yield{
          dut.auroraTxArea.clockDomain.waitSampling()
          dut.io.tx_start #= false
          dut.io.axiw.ready #= Random.nextBoolean()
        }
        idx = idx + 1
      }

      var idx1 = 0
      while(idx1 < 1){
        dut.io.tx_head #= 0x00000004
        dut.io.axiw.ready #= true
        dut.io.tx_start #= true
        dut.auroraTxArea.clockDomain.waitSampling()
        for(i <- 0 until 50)yield{
          dut.auroraTxArea.clockDomain.waitSampling()
          dut.io.tx_start #= false
          dut.io.axiw.ready #= Random.nextBoolean()
        }
        idx1 = idx1 + 1
      }
      sleep(100)
    }
  }
}


/*
class gtp_tx extends BlackBox{
  val log_clk = in Bool()
  val log_rst_q = in Bool()
  val s_axi_tx_tdata = out Bits(32 bits)
  val s_axi_tx_tkeep = out Bits(4 bits)
  val s_axi_tx_tlast = out Bool()
  val s_axi_tx_tvalid = out Bool()
  val s_axi_tx_tready = in Bool()
  val tx_packet_gtxid = in Bits(32 bits)
  val tx_packet_head = in Bits(32 bits)
  val tx_packet_req = in Bool()
  val tx_packet_trigger = in Bool()
  val crc_data = out Bits(32 bits)
  val tx_packet_addra = out Bits(8 bits)
  val tx_packet_data = in Bits(32 bits)
  val tx_packet_rden = out Bool()
  noIoPrefix()
  addRTLPath( "D:/CODE_LIB/TEST/SPINAL_TEST/gtp_tx.v")
}

class Gtx_Top(datawidth : Int , addresswidth : Int) extends Component{
  val axi4Config = Axi4Config(addressWidth = addresswidth,dataWidth = datawidth,idWidth = 1,useStrb = false)


  val io = new Bundle{
    val axiw = master Stream (Axi4W(axi4Config))
    val tx_head = in Bits(32 bits)
    val tx_packet_req = in Bool()
    val tx_packet_trigger = in Bool()
    val clk = in Bool()
    val reset = in Bool()
  }
  noIoPrefix()
  val gtxtx = new gtp_tx
  val clkdomian = ClockDomain(io.clk,io.reset)

  val area = new ClockingArea(clkdomian){
    val romSamples = for(sampleId <- 0 until 256)yield{
      val normalized = sampleId+1
      BigInt(normalized.toLong)
    }


  val mem = Mem(Bits(32 bits), wordCount = 256) initBigInt(romSamples)

  gtxtx.tx_packet_data := mem.readSync(
    enable  = gtxtx.tx_packet_rden,
    address = gtxtx.tx_packet_addra.asUInt)

  io.axiw.payload.data <> gtxtx.s_axi_tx_tdata
  io.axiw.payload.last <> gtxtx.s_axi_tx_tlast
  io.axiw.ready <> gtxtx.s_axi_tx_tready
  io.axiw.valid <> gtxtx.s_axi_tx_tvalid

  gtxtx.tx_packet_gtxid := 1
  io.tx_head <> gtxtx.tx_packet_head
  io.tx_packet_req <> gtxtx.tx_packet_req
  io.tx_packet_trigger <> gtxtx.tx_packet_trigger

  io.clk <> gtxtx.log_clk
  io.reset <> gtxtx.log_rst_q
  }
}


/*
object Gtx_TxMain extends App {
  SpinalConfig(
    //oneFilePerComponent = true,
    defaultClockDomainFrequency=FixedFrequency(100 MHz)
  ).generateSystemVerilog(new Gtx_Top(32,8))
}*/

object Gtx_Top {
  def main(args: Array[String]): Unit = {
    SimConfig.withWave.doSim(new Gtx_Top(32,8)) { dut =>
      dut.area.clockDomain.forkStimulus(10)
      dut.io.tx_packet_trigger #= false
      dut.io.tx_packet_req #= false
      dut.area.clockDomain.waitSampling(10)
      //var idx = 0
      dut.io.tx_head #= 0x00000010
      dut.io.axiw.ready #= true
      dut.io.tx_packet_req #= true
      dut.area.clockDomain.waitSampling()
      for(i <- 0 until 50)yield{
        dut.area.clockDomain.waitSampling()
        dut.io.tx_packet_req #= false
        dut.io.axiw.ready #= Random.nextBoolean()
      }

      dut.io.tx_head #= 0x00000210
      dut.io.axiw.ready #= true
      dut.io.tx_packet_req #= true
      dut.area.clockDomain.waitSampling()
      for(i <- 0 until 50)yield{
        dut.area.clockDomain.waitSampling()
        dut.io.tx_packet_req #= false
        dut.io.axiw.ready #= Random.nextBoolean()
      }
      //waitUntil(dut.io.axiw.last.toBoolean)
      sleep(100)
    }
  }
}*/