package Apb3Bram

import Apb3Bram.AuroraState.{DATA, DEVICEID, IDLE, LENGTH}
import spinal.core._
import spinal.lib.bus.amba4.axi.{Axi4Config, Axi4R, Axi4W}
import spinal.lib.bus.bram.{BRAM, BRAMConfig}
import spinal.lib.{master, slave}

class AuroraRxCore(datawidth : Int , addresswidth : Int) extends Component{
  val axi4Config = Axi4Config(addressWidth = addresswidth,dataWidth = datawidth,idWidth = 1,useStrb = false,useResp = false,useId = false)

  val io = new Bundle{
    val aurora_userclk = in Bool()
    val reset = in Bool()
    val axir = slave Stream (Axi4R(axi4Config))
    val bram = master(BRAM(BRAMConfig(datawidth,addresswidth)))
    val bram_clkout = out Bool()
    val bram_resetout = out Bool()
  }
  noIoPrefix()

  val auroraClkDomain = ClockDomain(io.aurora_userclk,io.reset)

  val auroraRxArea = new ClockingArea(auroraClkDomain){
    io.axir.ready := True

    val mem_wren = Reg(Bool()) init False
    val mem_addr = Reg(UInt(addresswidth bits)) init 0
    val mem_data = Reg(Bits(datawidth bits)) init 0
    val mem_wrwe = Reg(Bits(datawidth/8 bits)) init 0

    val length = Reg(UInt(addresswidth bits))
    val data_cnt = Reg(UInt(addresswidth bits))

    val crc_data = Reg(Bits(datawidth bits))

    val crc_status = Reg(Bool()) init False

    val stateMachine = new Area {
      import AuroraState._
      val state = RegInit(IDLE)
      switch(state) {
        is(IDLE){
          when(io.axir.fire & (io.axir.payload.data === 0x00000FFBC)){
            state := DEVICEID
          }
        }
        is(DEVICEID){
          when(io.axir.fire){
            when(io.axir.payload.data === 0x000000001){
              state := LENGTH
            }otherwise{
              state := IDLE
            }
          }
        }
        is(LENGTH){
          when(io.axir.fire){
            length := io.axir.payload.data(7 downto 0).asUInt
            data_cnt := 0
            state := DATA
          }
        }
        is(DATA){
          when(io.axir.fire){
            when(data_cnt < length-1){
              data_cnt := data_cnt + 1
            }otherwise{
              state := CRC
            }
          }
        }
        is(CRC){
          when(io.axir.fire){
            when(crc_data =/= io.axir.payload.data){
              crc_status := True
            }otherwise{
              crc_status := False
            }
            state := STOP
          }
        }
        is(STOP){
          when(io.axir.fire & io.axir.payload.last){
            state := IDLE
          }
        }
      }
    }

    when(stateMachine.state === IDLE){
      crc_data := B"32'hFFFFFFFF"
    }elsewhen((stateMachine.state === DEVICEID|stateMachine.state === LENGTH|stateMachine.state === DATA)&io.axir.fire){
      crc_data := Crc32.crc32(crc_data,io.axir.payload.data)
    }otherwise{
      crc_data := crc_data
    }

    when((stateMachine.state === DEVICEID)&io.axir.fire){
      mem_wren := True
      mem_addr := 0
      mem_data := io.axir.payload.data
      mem_wrwe := B"4'hf"
    }elsewhen((stateMachine.state === LENGTH)&io.axir.fire){
      mem_wren := True
      when(io.axir.payload.data(15 downto 8).asUInt === 0){
        mem_addr := 1
      }otherwise{
        mem_addr := io.axir.payload.data(15 downto 8).asUInt
      }
      mem_data := io.axir.payload.data
      mem_wrwe := B"4'hf"
    }elsewhen((stateMachine.state === DATA)&io.axir.fire&(data_cnt < length-1)){
      mem_wren := True
      mem_addr := mem_addr + 1
      mem_data := io.axir.payload.data
      mem_wrwe := B"4'hf"
    }otherwise{
      mem_wren := False
      mem_wrwe := B"4'h0"
    }

    io.bram.en := mem_wren
    io.bram.wrdata := io.axir.payload.data
    io.bram.addr := mem_addr
    io.bram.we := mem_wrwe

    io.bram_clkout := io.aurora_userclk
    io.bram_resetout := io.reset
  }
}


object AuroraRxCoreMain extends App {
  SpinalConfig(
    //oneFilePerComponent = true,
    defaultClockDomainFrequency=FixedFrequency(100 MHz)
  ).generateSystemVerilog(new AuroraRxCore(32,8))
}