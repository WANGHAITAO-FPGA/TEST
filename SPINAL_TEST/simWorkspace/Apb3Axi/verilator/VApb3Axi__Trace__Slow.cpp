// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VApb3Axi__Syms.h"


//======================

void VApb3Axi::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VApb3Axi::traceInit, &VApb3Axi::traceFull, &VApb3Axi::traceChg, this);
}
void VApb3Axi::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VApb3Axi* t = (VApb3Axi*)userthis;
    VApb3Axi__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VApb3Axi::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VApb3Axi* t = (VApb3Axi*)userthis;
    VApb3Axi__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VApb3Axi::traceInitThis(VApb3Axi__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VApb3Axi* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VApb3Axi::traceFullThis(VApb3Axi__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VApb3Axi* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
        vlTOPp->traceFullThis__15(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VApb3Axi::traceInitThis__1(VApb3Axi__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VApb3Axi* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+457,"apb_PADDR", false,-1, 19,0);
        vcdp->declBus(c+465,"apb_PSEL", false,-1, 0,0);
        vcdp->declBit(c+473,"apb_PENABLE", false,-1);
        vcdp->declBit(c+481,"apb_PREADY", false,-1);
        vcdp->declBit(c+489,"apb_PWRITE", false,-1);
        vcdp->declBus(c+497,"apb_PWDATA", false,-1, 31,0);
        vcdp->declBus(c+505,"apb_PRDATA", false,-1, 31,0);
        vcdp->declBit(c+513,"axiclk", false,-1);
        vcdp->declBit(c+521,"axiwready", false,-1);
        vcdp->declBit(c+529,"inter", false,-1);
        vcdp->declBit(c+537,"reset", false,-1);
        vcdp->declBit(c+545,"clk", false,-1);
        vcdp->declBus(c+457,"Apb3Axi apb_PADDR", false,-1, 19,0);
        vcdp->declBus(c+465,"Apb3Axi apb_PSEL", false,-1, 0,0);
        vcdp->declBit(c+473,"Apb3Axi apb_PENABLE", false,-1);
        vcdp->declBit(c+481,"Apb3Axi apb_PREADY", false,-1);
        vcdp->declBit(c+489,"Apb3Axi apb_PWRITE", false,-1);
        vcdp->declBus(c+497,"Apb3Axi apb_PWDATA", false,-1, 31,0);
        vcdp->declBus(c+505,"Apb3Axi apb_PRDATA", false,-1, 31,0);
        vcdp->declBit(c+513,"Apb3Axi axiclk", false,-1);
        vcdp->declBit(c+521,"Apb3Axi axiwready", false,-1);
        vcdp->declBit(c+529,"Apb3Axi inter", false,-1);
        vcdp->declBit(c+537,"Apb3Axi reset", false,-1);
        vcdp->declBit(c+545,"Apb3Axi clk", false,-1);
        vcdp->declBit(c+65,"Apb3Axi axictrl_axictrl_rx_stream_ready", false,-1);
        vcdp->declBus(c+497,"Apb3Axi axictrl_axictrl_tx_stream_payload", false,-1, 31,0);
        vcdp->declBit(c+73,"Apb3Axi axictrl_axiw_valid", false,-1);
        vcdp->declBus(c+169,"Apb3Axi axictrl_axiw_payload_data", false,-1, 31,0);
        vcdp->declBit(c+553,"Apb3Axi axictrl_axiw_payload_last", false,-1);
        vcdp->declBit(c+585,"Apb3Axi axictrl_axir_ready", false,-1);
        vcdp->declBit(c+137,"Apb3Axi axictrl_axictrl_rx_stream_valid", false,-1);
        vcdp->declBus(c+321,"Apb3Axi axictrl_axictrl_rx_stream_payload", false,-1, 31,0);
        vcdp->declBus(c+1,"Apb3Axi axictrl_axictrl_rx_popOccupancy", false,-1, 8,0);
        vcdp->declBit(c+145,"Apb3Axi axictrl_axictrl_tx_stream_ready", false,-1);
        vcdp->declBit(c+177,"Apb3Axi axictrl_interrupt", false,-1);
        vcdp->declBit(c+561,"Apb3Axi busCtrl_askWrite", false,-1);
        vcdp->declBit(c+569,"Apb3Axi busCtrl_askRead", false,-1);
        vcdp->declBit(c+81,"Apb3Axi busCtrl_doWrite", false,-1);
        vcdp->declBit(c+569,"Apb3Axi busCtrl_doRead", false,-1);
        vcdp->declBit(c+369,"Apb3Axi axictrl_axictrl_tx_flush_driver", false,-1);
        vcdp->declBit(c+377,"Apb3Axi axictrl_axictrl_tx_txstart_driver", false,-1);
        vcdp->declBit(c+209,"Apb3Axi axictrl_axictrl_rx_flush_driver", false,-1);
        vcdp->declBit(c+73,"Apb3Axi axictrl axiw_valid", false,-1);
        vcdp->declBit(c+521,"Apb3Axi axictrl axiw_ready", false,-1);
        vcdp->declBus(c+169,"Apb3Axi axictrl axiw_payload_data", false,-1, 31,0);
        vcdp->declBit(c+553,"Apb3Axi axictrl axiw_payload_last", false,-1);
        vcdp->declBit(c+73,"Apb3Axi axictrl axir_valid", false,-1);
        vcdp->declBit(c+585,"Apb3Axi axictrl axir_ready", false,-1);
        vcdp->declBus(c+169,"Apb3Axi axictrl axir_payload_data", false,-1, 31,0);
        vcdp->declBit(c+553,"Apb3Axi axictrl axir_payload_last", false,-1);
        vcdp->declBit(c+137,"Apb3Axi axictrl axictrl_rx_stream_valid", false,-1);
        vcdp->declBit(c+65,"Apb3Axi axictrl axictrl_rx_stream_ready", false,-1);
        vcdp->declBus(c+321,"Apb3Axi axictrl axictrl_rx_stream_payload", false,-1, 31,0);
        vcdp->declBit(c+209,"Apb3Axi axictrl axictrl_rx_flush", false,-1);
        vcdp->declBus(c+1,"Apb3Axi axictrl axictrl_rx_popOccupancy", false,-1, 8,0);
        vcdp->declBit(c+89,"Apb3Axi axictrl axictrl_tx_stream_valid", false,-1);
        vcdp->declBit(c+145,"Apb3Axi axictrl axictrl_tx_stream_ready", false,-1);
        vcdp->declBus(c+497,"Apb3Axi axictrl axictrl_tx_stream_payload", false,-1, 31,0);
        vcdp->declBit(c+369,"Apb3Axi axictrl axictrl_tx_flush", false,-1);
        vcdp->declBit(c+377,"Apb3Axi axictrl axictrl_tx_txstart", false,-1);
        vcdp->declBit(c+177,"Apb3Axi axictrl interrupt", false,-1);
        vcdp->declBit(c+537,"Apb3Axi axictrl reset", false,-1);
        vcdp->declBit(c+513,"Apb3Axi axictrl axiclk", false,-1);
        vcdp->declBit(c+545,"Apb3Axi axictrl clk", false,-1);
        vcdp->declBit(c+441,"Apb3Axi axictrl bufferCC_7_io_dataOut", false,-1);
        vcdp->declBit(c+425,"Apb3Axi axictrl bufferCC_8_io_dataOut", false,-1);
        vcdp->declBit(c+145,"Apb3Axi axictrl txFrontend_buffer_io_push_ready", false,-1);
        vcdp->declBit(c+9,"Apb3Axi axictrl txFrontend_buffer_io_pop_valid", false,-1);
        vcdp->declBus(c+169,"Apb3Axi axictrl txFrontend_buffer_io_pop_payload", false,-1, 31,0);
        vcdp->declBus(c+257,"Apb3Axi axictrl txFrontend_buffer_io_pushOccupancy", false,-1, 8,0);
        vcdp->declBus(c+17,"Apb3Axi axictrl txFrontend_buffer_io_popOccupancy", false,-1, 8,0);
        vcdp->declBit(c+73,"Apb3Axi axictrl txBackend_axictrltx_axiw_valid", false,-1);
        vcdp->declBus(c+169,"Apb3Axi axictrl txBackend_axictrltx_axiw_payload_data", false,-1, 31,0);
        vcdp->declBit(c+553,"Apb3Axi axictrl txBackend_axictrltx_axiw_payload_last", false,-1);
        vcdp->declBit(c+97,"Apb3Axi axictrl txBackend_axictrltx_write_ready", false,-1);
        vcdp->declBit(c+353,"Apb3Axi axictrl axictrl_tx_txstart_buffercc_io_dataOut", false,-1);
        vcdp->declBit(c+585,"Apb3Axi axictrl rxFrontend_axictrlrx_axir_ready", false,-1);
        vcdp->declBit(c+73,"Apb3Axi axictrl rxFrontend_axictrlrx_read_valid", false,-1);
        vcdp->declBus(c+169,"Apb3Axi axictrl rxFrontend_axictrlrx_read_payload", false,-1, 31,0);
        vcdp->declBit(c+177,"Apb3Axi axictrl rxFrontend_axictrlrx_interrupt", false,-1);
        vcdp->declBit(c+41,"Apb3Axi axictrl rxFrontend_buffer_io_push_ready", false,-1);
        vcdp->declBit(c+137,"Apb3Axi axictrl rxFrontend_buffer_io_pop_valid", false,-1);
        vcdp->declBus(c+321,"Apb3Axi axictrl rxFrontend_buffer_io_pop_payload", false,-1, 31,0);
        vcdp->declBus(c+201,"Apb3Axi axictrl rxFrontend_buffer_io_pushOccupancy", false,-1, 8,0);
        vcdp->declBus(c+1,"Apb3Axi axictrl rxFrontend_buffer_io_popOccupancy", false,-1, 8,0);
        vcdp->declBit(c+441,"Apb3Axi axictrl rxReset", false,-1);
        vcdp->declBit(c+425,"Apb3Axi axictrl txReset", false,-1);
        vcdp->declBit(c+593,"Apb3Axi axictrl bufferCC_7 io_dataIn", false,-1);
        vcdp->declBit(c+441,"Apb3Axi axictrl bufferCC_7 io_dataOut", false,-1);
        vcdp->declBit(c+513,"Apb3Axi axictrl bufferCC_7 axiclk", false,-1);
        vcdp->declBit(c+449,"Apb3Axi axictrl bufferCC_7 buffers_0", false,-1);
        vcdp->declBit(c+441,"Apb3Axi axictrl bufferCC_7 buffers_1", false,-1);
        vcdp->declBit(c+593,"Apb3Axi axictrl bufferCC_8 io_dataIn", false,-1);
        vcdp->declBit(c+425,"Apb3Axi axictrl bufferCC_8 io_dataOut", false,-1);
        vcdp->declBit(c+513,"Apb3Axi axictrl bufferCC_8 axiclk", false,-1);
        vcdp->declBit(c+433,"Apb3Axi axictrl bufferCC_8 buffers_0", false,-1);
        vcdp->declBit(c+425,"Apb3Axi axictrl bufferCC_8 buffers_1", false,-1);
        vcdp->declBit(c+89,"Apb3Axi axictrl txFrontend_buffer io_push_valid", false,-1);
        vcdp->declBit(c+145,"Apb3Axi axictrl txFrontend_buffer io_push_ready", false,-1);
        vcdp->declBus(c+497,"Apb3Axi axictrl txFrontend_buffer io_push_payload", false,-1, 31,0);
        vcdp->declBit(c+9,"Apb3Axi axictrl txFrontend_buffer io_pop_valid", false,-1);
        vcdp->declBit(c+97,"Apb3Axi axictrl txFrontend_buffer io_pop_ready", false,-1);
        vcdp->declBus(c+169,"Apb3Axi axictrl txFrontend_buffer io_pop_payload", false,-1, 31,0);
        vcdp->declBus(c+257,"Apb3Axi axictrl txFrontend_buffer io_pushOccupancy", false,-1, 8,0);
        vcdp->declBus(c+17,"Apb3Axi axictrl txFrontend_buffer io_popOccupancy", false,-1, 8,0);
        vcdp->declBit(c+545,"Apb3Axi axictrl txFrontend_buffer clk", false,-1);
        vcdp->declBit(c+537,"Apb3Axi axictrl txFrontend_buffer reset", false,-1);
        vcdp->declBit(c+369,"Apb3Axi axictrl txFrontend_buffer axictrl_tx_flush", false,-1);
        vcdp->declBit(c+513,"Apb3Axi axictrl txFrontend_buffer axiclk", false,-1);
        vcdp->declBit(c+425,"Apb3Axi axictrl txFrontend_buffer txReset", false,-1);
        vcdp->declBus(c+217,"Apb3Axi axictrl txFrontend_buffer popToPushGray_buffercc_io_dataOut", false,-1, 8,0);
        vcdp->declBus(c+265,"Apb3Axi axictrl txFrontend_buffer pushToPopGray_buffercc_io_dataOut", false,-1, 8,0);
        vcdp->declBus(c+273,"Apb3Axi axictrl txFrontend_buffer popToPushGray", false,-1, 8,0);
        vcdp->declBus(c+385,"Apb3Axi axictrl txFrontend_buffer pushToPopGray", false,-1, 8,0);
        vcdp->declBus(c+393,"Apb3Axi axictrl txFrontend_buffer pushCC_pushPtr", false,-1, 8,0);
        vcdp->declBus(c+401,"Apb3Axi axictrl txFrontend_buffer pushCC_pushPtrPlus", false,-1, 8,0);
        vcdp->declBit(c+121,"Apb3Axi axictrl txFrontend_buffer io_push_fire", false,-1);
        vcdp->declBus(c+385,"Apb3Axi axictrl txFrontend_buffer pushCC_pushPtrGray", false,-1, 8,0);
        vcdp->declBus(c+217,"Apb3Axi axictrl txFrontend_buffer pushCC_popPtrGray", false,-1, 8,0);
        vcdp->declBit(c+153,"Apb3Axi axictrl txFrontend_buffer pushCC_full", false,-1);
        vcdp->declBit(c+105,"Apb3Axi axictrl txFrontend_buffer io_push_fire_1", false,-1);
        vcdp->declBus(c+281,"Apb3Axi axictrl txFrontend_buffer popCC_popPtr", false,-1, 8,0);
        vcdp->declBus(c+289,"Apb3Axi axictrl txFrontend_buffer popCC_popPtrPlus", false,-1, 8,0);
        vcdp->declBit(c+33,"Apb3Axi axictrl txFrontend_buffer io_pop_fire", false,-1);
        vcdp->declBus(c+273,"Apb3Axi axictrl txFrontend_buffer popCC_popPtrGray", false,-1, 8,0);
        vcdp->declBus(c+265,"Apb3Axi axictrl txFrontend_buffer popCC_pushPtrGray", false,-1, 8,0);
        vcdp->declBit(c+25,"Apb3Axi axictrl txFrontend_buffer popCC_empty", false,-1);
        vcdp->declBit(c+33,"Apb3Axi axictrl txFrontend_buffer io_pop_fire_1", false,-1);
        vcdp->declBit(c+33,"Apb3Axi axictrl txFrontend_buffer io_pop_fire_2", false,-1);
        vcdp->declBus(c+273,"Apb3Axi axictrl txFrontend_buffer popToPushGray_buffercc io_dataIn", false,-1, 8,0);
        vcdp->declBus(c+217,"Apb3Axi axictrl txFrontend_buffer popToPushGray_buffercc io_dataOut", false,-1, 8,0);
        vcdp->declBit(c+545,"Apb3Axi axictrl txFrontend_buffer popToPushGray_buffercc clk", false,-1);
        vcdp->declBit(c+537,"Apb3Axi axictrl txFrontend_buffer popToPushGray_buffercc reset", false,-1);
        vcdp->declBit(c+369,"Apb3Axi axictrl txFrontend_buffer popToPushGray_buffercc axictrl_tx_flush", false,-1);
        vcdp->declBus(c+225,"Apb3Axi axictrl txFrontend_buffer popToPushGray_buffercc buffers_0", false,-1, 8,0);
        vcdp->declBus(c+217,"Apb3Axi axictrl txFrontend_buffer popToPushGray_buffercc buffers_1", false,-1, 8,0);
        vcdp->declBus(c+385,"Apb3Axi axictrl txFrontend_buffer pushToPopGray_buffercc io_dataIn", false,-1, 8,0);
        vcdp->declBus(c+265,"Apb3Axi axictrl txFrontend_buffer pushToPopGray_buffercc io_dataOut", false,-1, 8,0);
        vcdp->declBit(c+513,"Apb3Axi axictrl txFrontend_buffer pushToPopGray_buffercc axiclk", false,-1);
        vcdp->declBit(c+425,"Apb3Axi axictrl txFrontend_buffer pushToPopGray_buffercc txReset", false,-1);
        vcdp->declBus(c+297,"Apb3Axi axictrl txFrontend_buffer pushToPopGray_buffercc buffers_0", false,-1, 8,0);
        vcdp->declBus(c+265,"Apb3Axi axictrl txFrontend_buffer pushToPopGray_buffercc buffers_1", false,-1, 8,0);
        vcdp->declBit(c+73,"Apb3Axi axictrl txBackend_axictrltx axiw_valid", false,-1);
        vcdp->declBit(c+521,"Apb3Axi axictrl txBackend_axictrltx axiw_ready", false,-1);
        vcdp->declBus(c+169,"Apb3Axi axictrl txBackend_axictrltx axiw_payload_data", false,-1, 31,0);
        vcdp->declBit(c+553,"Apb3Axi axictrl txBackend_axictrltx axiw_payload_last", false,-1);
        vcdp->declBit(c+9,"Apb3Axi axictrl txBackend_axictrltx write_valid", false,-1);
        vcdp->declBit(c+97,"Apb3Axi axictrl txBackend_axictrltx write_ready", false,-1);
        vcdp->declBus(c+169,"Apb3Axi axictrl txBackend_axictrltx write_payload", false,-1, 31,0);
        vcdp->declBit(c+353,"Apb3Axi axictrl txBackend_axictrltx tx_start", false,-1);
        vcdp->declBus(c+17,"Apb3Axi axictrl txBackend_axictrltx popOccupancy", false,-1, 8,0);
        vcdp->declBit(c+513,"Apb3Axi axictrl txBackend_axictrltx axiclk", false,-1);
        vcdp->declBit(c+425,"Apb3Axi axictrl txBackend_axictrltx txReset", false,-1);
        vcdp->declBus(c+305,"Apb3Axi axictrl txBackend_axictrltx stateMachine_state", false,-1, 1,0);
        vcdp->declBit(c+577,"Apb3Axi axictrl txBackend_axictrltx axiw_fire", false,-1);
        vcdp->declBit(c+553,"Apb3Axi axictrl txBackend_axictrltx when_AxiCtrlTx_l30", false,-1);
        vcdp->declBit(c+577,"Apb3Axi axictrl txBackend_axictrltx axiw_fire_1", false,-1);
        vcdp->declBus(c+313,"Apb3Axi axictrl txBackend_axictrltx stateMachine_state_string", false,-1, 31,0);
        vcdp->declBit(c+377,"Apb3Axi axictrl axictrl_tx_txstart_buffercc io_dataIn", false,-1);
        vcdp->declBit(c+353,"Apb3Axi axictrl axictrl_tx_txstart_buffercc io_dataOut", false,-1);
        vcdp->declBit(c+513,"Apb3Axi axictrl axictrl_tx_txstart_buffercc axiclk", false,-1);
        vcdp->declBit(c+425,"Apb3Axi axictrl axictrl_tx_txstart_buffercc txReset", false,-1);
        vcdp->declBit(c+361,"Apb3Axi axictrl axictrl_tx_txstart_buffercc buffers_0", false,-1);
        vcdp->declBit(c+353,"Apb3Axi axictrl axictrl_tx_txstart_buffercc buffers_1", false,-1);
        vcdp->declBit(c+73,"Apb3Axi axictrl rxFrontend_axictrlrx axir_valid", false,-1);
        vcdp->declBit(c+585,"Apb3Axi axictrl rxFrontend_axictrlrx axir_ready", false,-1);
        vcdp->declBus(c+169,"Apb3Axi axictrl rxFrontend_axictrlrx axir_payload_data", false,-1, 31,0);
        vcdp->declBit(c+553,"Apb3Axi axictrl rxFrontend_axictrlrx axir_payload_last", false,-1);
        vcdp->declBit(c+73,"Apb3Axi axictrl rxFrontend_axictrlrx read_valid", false,-1);
        vcdp->declBit(c+41,"Apb3Axi axictrl rxFrontend_axictrlrx read_ready", false,-1);
        vcdp->declBus(c+169,"Apb3Axi axictrl rxFrontend_axictrlrx read_payload", false,-1, 31,0);
        vcdp->declBit(c+177,"Apb3Axi axictrl rxFrontend_axictrlrx interrupt", false,-1);
        vcdp->declBit(c+513,"Apb3Axi axictrl rxFrontend_axictrlrx axiclk", false,-1);
        vcdp->declBit(c+441,"Apb3Axi axictrl rxFrontend_axictrlrx rxReset", false,-1);
        vcdp->declBit(c+177,"Apb3Axi axictrl rxFrontend_axictrlrx axir_payload_last_regNext", false,-1);
        vcdp->declBit(c+73,"Apb3Axi axictrl rxFrontend_buffer io_push_valid", false,-1);
        vcdp->declBit(c+41,"Apb3Axi axictrl rxFrontend_buffer io_push_ready", false,-1);
        vcdp->declBus(c+169,"Apb3Axi axictrl rxFrontend_buffer io_push_payload", false,-1, 31,0);
        vcdp->declBit(c+137,"Apb3Axi axictrl rxFrontend_buffer io_pop_valid", false,-1);
        vcdp->declBit(c+65,"Apb3Axi axictrl rxFrontend_buffer io_pop_ready", false,-1);
        vcdp->declBus(c+321,"Apb3Axi axictrl rxFrontend_buffer io_pop_payload", false,-1, 31,0);
        vcdp->declBus(c+201,"Apb3Axi axictrl rxFrontend_buffer io_pushOccupancy", false,-1, 8,0);
        vcdp->declBus(c+1,"Apb3Axi axictrl rxFrontend_buffer io_popOccupancy", false,-1, 8,0);
        vcdp->declBit(c+513,"Apb3Axi axictrl rxFrontend_buffer axiclk", false,-1);
        vcdp->declBit(c+441,"Apb3Axi axictrl rxFrontend_buffer rxReset", false,-1);
        vcdp->declBit(c+545,"Apb3Axi axictrl rxFrontend_buffer clk", false,-1);
        vcdp->declBit(c+537,"Apb3Axi axictrl rxFrontend_buffer reset", false,-1);
        vcdp->declBit(c+369,"Apb3Axi axictrl rxFrontend_buffer axictrl_tx_flush", false,-1);
        vcdp->declBus(c+185,"Apb3Axi axictrl rxFrontend_buffer popToPushGray_buffercc_io_dataOut", false,-1, 8,0);
        vcdp->declBus(c+233,"Apb3Axi axictrl rxFrontend_buffer pushToPopGray_buffercc_io_dataOut", false,-1, 8,0);
        vcdp->declBus(c+241,"Apb3Axi axictrl rxFrontend_buffer popToPushGray", false,-1, 8,0);
        vcdp->declBus(c+329,"Apb3Axi axictrl rxFrontend_buffer pushToPopGray", false,-1, 8,0);
        vcdp->declBus(c+337,"Apb3Axi axictrl rxFrontend_buffer pushCC_pushPtr", false,-1, 8,0);
        vcdp->declBus(c+345,"Apb3Axi axictrl rxFrontend_buffer pushCC_pushPtrPlus", false,-1, 8,0);
        vcdp->declBit(c+57,"Apb3Axi axictrl rxFrontend_buffer io_push_fire", false,-1);
        vcdp->declBus(c+329,"Apb3Axi axictrl rxFrontend_buffer pushCC_pushPtrGray", false,-1, 8,0);
        vcdp->declBus(c+185,"Apb3Axi axictrl rxFrontend_buffer pushCC_popPtrGray", false,-1, 8,0);
        vcdp->declBit(c+49,"Apb3Axi axictrl rxFrontend_buffer pushCC_full", false,-1);
        vcdp->declBit(c+113,"Apb3Axi axictrl rxFrontend_buffer io_push_fire_1", false,-1);
        vcdp->declBus(c+409,"Apb3Axi axictrl rxFrontend_buffer popCC_popPtr", false,-1, 8,0);
        vcdp->declBus(c+417,"Apb3Axi axictrl rxFrontend_buffer popCC_popPtrPlus", false,-1, 8,0);
        vcdp->declBit(c+129,"Apb3Axi axictrl rxFrontend_buffer io_pop_fire", false,-1);
        vcdp->declBus(c+241,"Apb3Axi axictrl rxFrontend_buffer popCC_popPtrGray", false,-1, 8,0);
        vcdp->declBus(c+233,"Apb3Axi axictrl rxFrontend_buffer popCC_pushPtrGray", false,-1, 8,0);
        vcdp->declBit(c+161,"Apb3Axi axictrl rxFrontend_buffer popCC_empty", false,-1);
        vcdp->declBit(c+129,"Apb3Axi axictrl rxFrontend_buffer io_pop_fire_1", false,-1);
        vcdp->declBit(c+129,"Apb3Axi axictrl rxFrontend_buffer io_pop_fire_2", false,-1);
        vcdp->declBus(c+241,"Apb3Axi axictrl rxFrontend_buffer popToPushGray_buffercc io_dataIn", false,-1, 8,0);
        vcdp->declBus(c+185,"Apb3Axi axictrl rxFrontend_buffer popToPushGray_buffercc io_dataOut", false,-1, 8,0);
        vcdp->declBit(c+513,"Apb3Axi axictrl rxFrontend_buffer popToPushGray_buffercc axiclk", false,-1);
        vcdp->declBit(c+441,"Apb3Axi axictrl rxFrontend_buffer popToPushGray_buffercc rxReset", false,-1);
        vcdp->declBus(c+193,"Apb3Axi axictrl rxFrontend_buffer popToPushGray_buffercc buffers_0", false,-1, 8,0);
        vcdp->declBus(c+185,"Apb3Axi axictrl rxFrontend_buffer popToPushGray_buffercc buffers_1", false,-1, 8,0);
        vcdp->declBus(c+329,"Apb3Axi axictrl rxFrontend_buffer pushToPopGray_buffercc io_dataIn", false,-1, 8,0);
        vcdp->declBus(c+233,"Apb3Axi axictrl rxFrontend_buffer pushToPopGray_buffercc io_dataOut", false,-1, 8,0);
        vcdp->declBit(c+545,"Apb3Axi axictrl rxFrontend_buffer pushToPopGray_buffercc clk", false,-1);
        vcdp->declBit(c+537,"Apb3Axi axictrl rxFrontend_buffer pushToPopGray_buffercc reset", false,-1);
        vcdp->declBit(c+369,"Apb3Axi axictrl rxFrontend_buffer pushToPopGray_buffercc axictrl_tx_flush", false,-1);
        vcdp->declBus(c+249,"Apb3Axi axictrl rxFrontend_buffer pushToPopGray_buffercc buffers_0", false,-1, 8,0);
        vcdp->declBus(c+233,"Apb3Axi axictrl rxFrontend_buffer pushToPopGray_buffercc buffers_1", false,-1, 8,0);
    }
}

void VApb3Axi::traceFullThis__1(VApb3Axi__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VApb3Axi* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBus(c+1,((0x1ffU & (((0x100U & (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__pushToPopGray_buffercc__DOT__buffers_1)) 
                                       | (((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT___zz_io_popOccupancy_6) 
                                           << 7U) | 
                                          (((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT___zz_io_popOccupancy_5) 
                                            << 6U) 
                                           | (((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT___zz_io_popOccupancy_4) 
                                               << 5U) 
                                              | (((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT___zz_io_popOccupancy_3) 
                                                  << 4U) 
                                                 | (((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT___zz_io_popOccupancy_2) 
                                                     << 3U) 
                                                    | (((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT___zz_io_popOccupancy_1) 
                                                        << 2U) 
                                                       | (((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT___zz_io_popOccupancy) 
                                                           << 1U) 
                                                          | (1U 
                                                             & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__pushToPopGray_buffercc__DOT__buffers_1) 
                                                                ^ (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT___zz_io_popOccupancy))))))))))) 
                                      - (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popCC_popPtr)))),9);
        vcdp->fullBit(c+9,((1U & (~ (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popCC_empty)))));
        vcdp->fullBus(c+17,(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer_io_popOccupancy),9);
        vcdp->fullBit(c+25,(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popCC_empty));
        vcdp->fullBit(c+33,(((~ (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popCC_empty)) 
                             & (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txBackend_axictrltx_write_ready))));
        vcdp->fullBit(c+41,((1U & (~ (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__pushCC_full)))));
        vcdp->fullBit(c+49,(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__pushCC_full));
        vcdp->fullBit(c+57,(((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txBackend_axictrltx_axiw_valid) 
                             & (~ (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__pushCC_full)))));
        vcdp->fullBit(c+65,(vlTOPp->Apb3Axi__DOT__axictrl_axictrl_rx_stream_ready));
        vcdp->fullBit(c+73,(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txBackend_axictrltx_axiw_valid));
        vcdp->fullBit(c+81,(vlTOPp->Apb3Axi__DOT__busCtrl_doWrite));
        vcdp->fullBit(c+89,(vlTOPp->Apb3Axi__DOT___zz_axictrl_tx_stream_valid));
        vcdp->fullBit(c+97,(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txBackend_axictrltx_write_ready));
        vcdp->fullBit(c+105,(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__io_push_fire_1));
        vcdp->fullBit(c+113,(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__io_push_fire_1));
        vcdp->fullBit(c+121,(((IData)(vlTOPp->Apb3Axi__DOT___zz_axictrl_tx_stream_valid) 
                              & (~ (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__pushCC_full)))));
        vcdp->fullBit(c+129,(((~ (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popCC_empty)) 
                              & (IData)(vlTOPp->Apb3Axi__DOT__axictrl_axictrl_rx_stream_ready))));
        vcdp->fullBit(c+137,((1U & (~ (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popCC_empty)))));
        vcdp->fullBit(c+145,((1U & (~ (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__pushCC_full)))));
        vcdp->fullBit(c+153,(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__pushCC_full));
        vcdp->fullBit(c+161,(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popCC_empty));
        vcdp->fullBus(c+169,(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT___zz_ram_port1),32);
        vcdp->fullBit(c+177,(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_axictrlrx__DOT__axir_payload_last_regNext));
        vcdp->fullBus(c+185,(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1),9);
        vcdp->fullBus(c+193,(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_0),9);
        vcdp->fullBus(c+201,((0x1ffU & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__pushCC_pushPtr) 
                                        - ((0x100U 
                                            & (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1)) 
                                           | ((0x80U 
                                               & ((0xffffff80U 
                                                   & (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1)) 
                                                  ^ 
                                                  (0x7fffff80U 
                                                   & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                      >> 1U)))) 
                                              | ((0x40U 
                                                  & ((0xffffffc0U 
                                                      & (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1)) 
                                                     ^ 
                                                     ((0x7fffffc0U 
                                                       & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                          >> 1U)) 
                                                      ^ 
                                                      (0x3fffffc0U 
                                                       & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                          >> 2U))))) 
                                                 | ((0x20U 
                                                     & ((0xffffffe0U 
                                                         & (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1)) 
                                                        ^ 
                                                        ((0x7fffffe0U 
                                                          & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                             >> 1U)) 
                                                         ^ 
                                                         ((0x3fffffe0U 
                                                           & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                              >> 2U)) 
                                                          ^ 
                                                          (0x1fffffe0U 
                                                           & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                              >> 3U)))))) 
                                                    | ((0x10U 
                                                        & ((0xfffffff0U 
                                                            & (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1)) 
                                                           ^ 
                                                           ((0x7ffffff0U 
                                                             & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                >> 1U)) 
                                                            ^ 
                                                            ((0x3ffffff0U 
                                                              & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                 >> 2U)) 
                                                             ^ 
                                                             ((0x1ffffff0U 
                                                               & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                  >> 3U)) 
                                                              ^ 
                                                              (0xffffff0U 
                                                               & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                  >> 4U))))))) 
                                                       | ((8U 
                                                           & ((0xfffffff8U 
                                                               & (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1)) 
                                                              ^ 
                                                              ((0x7ffffff8U 
                                                                & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                   >> 1U)) 
                                                               ^ 
                                                               ((0x3ffffff8U 
                                                                 & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                    >> 2U)) 
                                                                ^ 
                                                                ((0x1ffffff8U 
                                                                  & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                     >> 3U)) 
                                                                 ^ 
                                                                 ((0xffffff8U 
                                                                   & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                      >> 4U)) 
                                                                  ^ 
                                                                  (0x7fffff8U 
                                                                   & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                      >> 5U)))))))) 
                                                          | ((4U 
                                                              & ((0xfffffffcU 
                                                                  & (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1)) 
                                                                 ^ 
                                                                 ((0x7ffffffcU 
                                                                   & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                      >> 1U)) 
                                                                  ^ 
                                                                  ((0x3ffffffcU 
                                                                    & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                       >> 2U)) 
                                                                   ^ 
                                                                   ((0x1ffffffcU 
                                                                     & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                        >> 3U)) 
                                                                    ^ 
                                                                    ((0xffffffcU 
                                                                      & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                         >> 4U)) 
                                                                     ^ 
                                                                     ((0x7fffffcU 
                                                                       & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                          >> 5U)) 
                                                                      ^ 
                                                                      (0x3fffffcU 
                                                                       & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                          >> 6U))))))))) 
                                                             | ((2U 
                                                                 & ((0xfffffffeU 
                                                                     & (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1)) 
                                                                    ^ 
                                                                    ((0x7ffffffeU 
                                                                      & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                         >> 1U)) 
                                                                     ^ 
                                                                     ((0x3ffffffeU 
                                                                       & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                          >> 2U)) 
                                                                      ^ 
                                                                      ((0x1ffffffeU 
                                                                        & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                           >> 3U)) 
                                                                       ^ 
                                                                       ((0xffffffeU 
                                                                         & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                            >> 4U)) 
                                                                        ^ 
                                                                        ((0x7fffffeU 
                                                                          & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                             >> 5U)) 
                                                                         ^ 
                                                                         ((0x3fffffeU 
                                                                           & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                              >> 6U)) 
                                                                          ^ 
                                                                          (0x1fffffeU 
                                                                           & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                              >> 7U)))))))))) 
                                                                | (1U 
                                                                   & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                      ^ 
                                                                      (((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                        >> 1U) 
                                                                       ^ 
                                                                       (((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                         >> 2U) 
                                                                        ^ 
                                                                        (((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                          >> 3U) 
                                                                         ^ 
                                                                         (((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                           >> 4U) 
                                                                          ^ 
                                                                          (((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                            >> 5U) 
                                                                           ^ 
                                                                           (((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                             >> 6U) 
                                                                            ^ 
                                                                            (((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                              >> 7U) 
                                                                             ^ 
                                                                             ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                              >> 8U))))))))))))))))))))),9);
        vcdp->fullBit(c+209,(vlTOPp->Apb3Axi__DOT__axictrl_axictrl_rx_flush_driver));
        vcdp->fullBus(c+217,(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1),9);
        vcdp->fullBus(c+225,(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_0),9);
        vcdp->fullBus(c+233,(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__pushToPopGray_buffercc__DOT__buffers_1),9);
        vcdp->fullBus(c+241,(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popCC_popPtrGray),9);
        vcdp->fullBus(c+249,(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__pushToPopGray_buffercc__DOT__buffers_0),9);
        vcdp->fullBus(c+257,((0x1ffU & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__pushCC_pushPtr) 
                                        - ((0x100U 
                                            & (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1)) 
                                           | ((0x80U 
                                               & ((0xffffff80U 
                                                   & (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1)) 
                                                  ^ 
                                                  (0x7fffff80U 
                                                   & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                      >> 1U)))) 
                                              | ((0x40U 
                                                  & ((0xffffffc0U 
                                                      & (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1)) 
                                                     ^ 
                                                     ((0x7fffffc0U 
                                                       & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                          >> 1U)) 
                                                      ^ 
                                                      (0x3fffffc0U 
                                                       & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                          >> 2U))))) 
                                                 | ((0x20U 
                                                     & ((0xffffffe0U 
                                                         & (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1)) 
                                                        ^ 
                                                        ((0x7fffffe0U 
                                                          & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                             >> 1U)) 
                                                         ^ 
                                                         ((0x3fffffe0U 
                                                           & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                              >> 2U)) 
                                                          ^ 
                                                          (0x1fffffe0U 
                                                           & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                              >> 3U)))))) 
                                                    | ((0x10U 
                                                        & ((0xfffffff0U 
                                                            & (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1)) 
                                                           ^ 
                                                           ((0x7ffffff0U 
                                                             & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                >> 1U)) 
                                                            ^ 
                                                            ((0x3ffffff0U 
                                                              & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                 >> 2U)) 
                                                             ^ 
                                                             ((0x1ffffff0U 
                                                               & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                  >> 3U)) 
                                                              ^ 
                                                              (0xffffff0U 
                                                               & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                  >> 4U))))))) 
                                                       | ((8U 
                                                           & ((0xfffffff8U 
                                                               & (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1)) 
                                                              ^ 
                                                              ((0x7ffffff8U 
                                                                & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                   >> 1U)) 
                                                               ^ 
                                                               ((0x3ffffff8U 
                                                                 & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                    >> 2U)) 
                                                                ^ 
                                                                ((0x1ffffff8U 
                                                                  & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                     >> 3U)) 
                                                                 ^ 
                                                                 ((0xffffff8U 
                                                                   & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                      >> 4U)) 
                                                                  ^ 
                                                                  (0x7fffff8U 
                                                                   & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                      >> 5U)))))))) 
                                                          | ((4U 
                                                              & ((0xfffffffcU 
                                                                  & (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1)) 
                                                                 ^ 
                                                                 ((0x7ffffffcU 
                                                                   & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                      >> 1U)) 
                                                                  ^ 
                                                                  ((0x3ffffffcU 
                                                                    & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                       >> 2U)) 
                                                                   ^ 
                                                                   ((0x1ffffffcU 
                                                                     & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                        >> 3U)) 
                                                                    ^ 
                                                                    ((0xffffffcU 
                                                                      & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                         >> 4U)) 
                                                                     ^ 
                                                                     ((0x7fffffcU 
                                                                       & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                          >> 5U)) 
                                                                      ^ 
                                                                      (0x3fffffcU 
                                                                       & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                          >> 6U))))))))) 
                                                             | ((2U 
                                                                 & ((0xfffffffeU 
                                                                     & (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1)) 
                                                                    ^ 
                                                                    ((0x7ffffffeU 
                                                                      & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                         >> 1U)) 
                                                                     ^ 
                                                                     ((0x3ffffffeU 
                                                                       & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                          >> 2U)) 
                                                                      ^ 
                                                                      ((0x1ffffffeU 
                                                                        & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                           >> 3U)) 
                                                                       ^ 
                                                                       ((0xffffffeU 
                                                                         & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                            >> 4U)) 
                                                                        ^ 
                                                                        ((0x7fffffeU 
                                                                          & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                             >> 5U)) 
                                                                         ^ 
                                                                         ((0x3fffffeU 
                                                                           & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                              >> 6U)) 
                                                                          ^ 
                                                                          (0x1fffffeU 
                                                                           & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                              >> 7U)))))))))) 
                                                                | (1U 
                                                                   & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                      ^ 
                                                                      (((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                        >> 1U) 
                                                                       ^ 
                                                                       (((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                         >> 2U) 
                                                                        ^ 
                                                                        (((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                          >> 3U) 
                                                                         ^ 
                                                                         (((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                           >> 4U) 
                                                                          ^ 
                                                                          (((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                            >> 5U) 
                                                                           ^ 
                                                                           (((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                             >> 6U) 
                                                                            ^ 
                                                                            (((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                              >> 7U) 
                                                                             ^ 
                                                                             ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                              >> 8U))))))))))))))))))))),9);
    }
}

void VApb3Axi::traceFullThis__15(VApb3Axi__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VApb3Axi* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBus(c+265,(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__pushToPopGray_buffercc__DOT__buffers_1),9);
        vcdp->fullBus(c+273,(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popCC_popPtrGray),9);
        vcdp->fullBus(c+281,(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popCC_popPtr),9);
        vcdp->fullBus(c+289,((0x1ffU & ((IData)(1U) 
                                        + (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popCC_popPtr)))),9);
        vcdp->fullBus(c+297,(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__pushToPopGray_buffercc__DOT__buffers_0),9);
        vcdp->fullBus(c+305,(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txBackend_axictrltx__DOT__stateMachine_state),2);
        vcdp->fullBus(c+313,(((0U == (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txBackend_axictrltx__DOT__stateMachine_state))
                               ? 0x49444c45U : ((1U 
                                                 == (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txBackend_axictrltx__DOT__stateMachine_state))
                                                 ? 0x44415441U
                                                 : 
                                                ((2U 
                                                  == (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txBackend_axictrltx__DOT__stateMachine_state))
                                                  ? 0x53544f50U
                                                  : 0x3f3f3f3fU)))),32);
        vcdp->fullBus(c+321,(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT___zz_ram_port1),32);
        vcdp->fullBus(c+329,(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__pushCC_pushPtrGray),9);
        vcdp->fullBus(c+337,(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__pushCC_pushPtr),9);
        vcdp->fullBus(c+345,((0x1ffU & ((IData)(1U) 
                                        + (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__pushCC_pushPtr)))),9);
        vcdp->fullBit(c+353,(vlTOPp->Apb3Axi__DOT__axictrl__DOT__axictrl_tx_txstart_buffercc__DOT__buffers_1));
        vcdp->fullBit(c+361,(vlTOPp->Apb3Axi__DOT__axictrl__DOT__axictrl_tx_txstart_buffercc__DOT__buffers_0));
        vcdp->fullBit(c+369,(vlTOPp->Apb3Axi__DOT__axictrl_axictrl_tx_flush_driver));
        vcdp->fullBit(c+377,(vlTOPp->Apb3Axi__DOT__axictrl_axictrl_tx_txstart_driver));
        vcdp->fullBus(c+385,(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__pushCC_pushPtrGray),9);
        vcdp->fullBus(c+393,(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__pushCC_pushPtr),9);
        vcdp->fullBus(c+401,((0x1ffU & ((IData)(1U) 
                                        + (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__pushCC_pushPtr)))),9);
        vcdp->fullBus(c+409,(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popCC_popPtr),9);
        vcdp->fullBus(c+417,((0x1ffU & ((IData)(1U) 
                                        + (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popCC_popPtr)))),9);
        vcdp->fullBit(c+425,(vlTOPp->Apb3Axi__DOT__axictrl__DOT__bufferCC_8__DOT__buffers_1));
        vcdp->fullBit(c+433,(vlTOPp->Apb3Axi__DOT__axictrl__DOT__bufferCC_8__DOT__buffers_0));
        vcdp->fullBit(c+441,(vlTOPp->Apb3Axi__DOT__axictrl__DOT__bufferCC_7__DOT__buffers_1));
        vcdp->fullBit(c+449,(vlTOPp->Apb3Axi__DOT__axictrl__DOT__bufferCC_7__DOT__buffers_0));
        vcdp->fullBus(c+457,(vlTOPp->apb_PADDR),20);
        vcdp->fullBit(c+465,(vlTOPp->apb_PSEL));
        vcdp->fullBit(c+473,(vlTOPp->apb_PENABLE));
        vcdp->fullBit(c+481,(vlTOPp->apb_PREADY));
        vcdp->fullBit(c+489,(vlTOPp->apb_PWRITE));
        vcdp->fullBus(c+497,(vlTOPp->apb_PWDATA),32);
        vcdp->fullBus(c+505,(vlTOPp->apb_PRDATA),32);
        vcdp->fullBit(c+513,(vlTOPp->axiclk));
        vcdp->fullBit(c+521,(vlTOPp->axiwready));
        vcdp->fullBit(c+529,(vlTOPp->inter));
        vcdp->fullBit(c+537,(vlTOPp->reset));
        vcdp->fullBit(c+545,(vlTOPp->clk));
        vcdp->fullBit(c+553,(((1U == (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer_io_popOccupancy)) 
                              & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txBackend_axictrltx_axiw_valid) 
                                 & (IData)(vlTOPp->axiwready)))));
        vcdp->fullBit(c+561,((((IData)(vlTOPp->apb_PSEL) 
                               & (IData)(vlTOPp->apb_PENABLE)) 
                              & (IData)(vlTOPp->apb_PWRITE))));
        vcdp->fullBit(c+569,((((IData)(vlTOPp->apb_PSEL) 
                               & (IData)(vlTOPp->apb_PENABLE)) 
                              & (~ (IData)(vlTOPp->apb_PWRITE)))));
        vcdp->fullBit(c+577,(((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txBackend_axictrltx_axiw_valid) 
                              & (IData)(vlTOPp->axiwready))));
        vcdp->fullBit(c+585,(1U));
        vcdp->fullBit(c+593,(0U));
    }
}
