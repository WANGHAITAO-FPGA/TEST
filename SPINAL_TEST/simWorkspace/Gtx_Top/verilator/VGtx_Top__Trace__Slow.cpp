// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VGtx_Top__Syms.h"


//======================

void VGtx_Top::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VGtx_Top::traceInit, &VGtx_Top::traceFull, &VGtx_Top::traceChg, this);
}
void VGtx_Top::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VGtx_Top* t = (VGtx_Top*)userthis;
    VGtx_Top__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VGtx_Top::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VGtx_Top* t = (VGtx_Top*)userthis;
    VGtx_Top__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VGtx_Top::traceInitThis(VGtx_Top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VGtx_Top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VGtx_Top::traceFullThis(VGtx_Top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VGtx_Top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VGtx_Top::traceInitThis__1(VGtx_Top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VGtx_Top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+105,"axiw_valid", false,-1);
        vcdp->declBit(c+113,"axiw_ready", false,-1);
        vcdp->declBus(c+121,"axiw_payload_data", false,-1, 31,0);
        vcdp->declBit(c+129,"axiw_payload_last", false,-1);
        vcdp->declBus(c+137,"tx_head", false,-1, 31,0);
        vcdp->declBit(c+145,"tx_packet_req", false,-1);
        vcdp->declBit(c+153,"tx_packet_trigger", false,-1);
        vcdp->declBit(c+161,"clk", false,-1);
        vcdp->declBit(c+169,"reset", false,-1);
        vcdp->declBit(c+105,"Gtx_Top axiw_valid", false,-1);
        vcdp->declBit(c+113,"Gtx_Top axiw_ready", false,-1);
        vcdp->declBus(c+121,"Gtx_Top axiw_payload_data", false,-1, 31,0);
        vcdp->declBit(c+129,"Gtx_Top axiw_payload_last", false,-1);
        vcdp->declBus(c+137,"Gtx_Top tx_head", false,-1, 31,0);
        vcdp->declBit(c+145,"Gtx_Top tx_packet_req", false,-1);
        vcdp->declBit(c+153,"Gtx_Top tx_packet_trigger", false,-1);
        vcdp->declBit(c+161,"Gtx_Top clk", false,-1);
        vcdp->declBit(c+169,"Gtx_Top reset", false,-1);
        vcdp->declBus(c+73,"Gtx_Top gtxtx_tx_packet_data", false,-1, 31,0);
        vcdp->declBus(c+17,"Gtx_Top gtxtx_s_axi_tx_tdata", false,-1, 31,0);
        vcdp->declBus(c+177,"Gtx_Top gtxtx_s_axi_tx_tkeep", false,-1, 3,0);
        vcdp->declBit(c+25,"Gtx_Top gtxtx_s_axi_tx_tlast", false,-1);
        vcdp->declBit(c+33,"Gtx_Top gtxtx_s_axi_tx_tvalid", false,-1);
        vcdp->declBus(c+57,"Gtx_Top gtxtx_crc_data", false,-1, 31,0);
        vcdp->declBus(c+9,"Gtx_Top gtxtx_tx_packet_addra", false,-1, 7,0);
        vcdp->declBit(c+81,"Gtx_Top gtxtx_tx_packet_rden", false,-1);
        vcdp->declBit(c+169,"Gtx_Top gtxtx log_rst_q", false,-1);
        vcdp->declBit(c+161,"Gtx_Top gtxtx log_clk", false,-1);
        vcdp->declBus(c+17,"Gtx_Top gtxtx s_axi_tx_tdata", false,-1, 31,0);
        vcdp->declBus(c+177,"Gtx_Top gtxtx s_axi_tx_tkeep", false,-1, 3,0);
        vcdp->declBit(c+25,"Gtx_Top gtxtx s_axi_tx_tlast", false,-1);
        vcdp->declBit(c+33,"Gtx_Top gtxtx s_axi_tx_tvalid", false,-1);
        vcdp->declBit(c+113,"Gtx_Top gtxtx s_axi_tx_tready", false,-1);
        vcdp->declBus(c+185,"Gtx_Top gtxtx tx_packet_gtxid", false,-1, 31,0);
        vcdp->declBus(c+137,"Gtx_Top gtxtx tx_packet_head", false,-1, 31,0);
        vcdp->declBit(c+145,"Gtx_Top gtxtx tx_packet_req", false,-1);
        vcdp->declBit(c+153,"Gtx_Top gtxtx tx_packet_trigger", false,-1);
        vcdp->declBus(c+57,"Gtx_Top gtxtx crc_data", false,-1, 31,0);
        vcdp->declBus(c+9,"Gtx_Top gtxtx tx_packet_addra", false,-1, 7,0);
        vcdp->declBus(c+73,"Gtx_Top gtxtx tx_packet_data", false,-1, 31,0);
        vcdp->declBit(c+81,"Gtx_Top gtxtx tx_packet_rden", false,-1);
        vcdp->declBus(c+193,"Gtx_Top gtxtx IDLE", false,-1, 8,0);
        vcdp->declBus(c+201,"Gtx_Top gtxtx TX_HEAD", false,-1, 8,0);
        vcdp->declBus(c+209,"Gtx_Top gtxtx TX_GTXID", false,-1, 8,0);
        vcdp->declBus(c+217,"Gtx_Top gtxtx TX_LENGTH", false,-1, 8,0);
        vcdp->declBus(c+225,"Gtx_Top gtxtx TX_DATA", false,-1, 8,0);
        vcdp->declBus(c+233,"Gtx_Top gtxtx TX_CHECK", false,-1, 8,0);
        vcdp->declBus(c+241,"Gtx_Top gtxtx TX_END", false,-1, 8,0);
        vcdp->declBus(c+249,"Gtx_Top gtxtx TX_TRIGGER", false,-1, 8,0);
        vcdp->declBus(c+257,"Gtx_Top gtxtx TX_TRIGGER_END", false,-1, 8,0);
        vcdp->declBus(c+89,"Gtx_Top gtxtx current_state", false,-1, 8,0);
        vcdp->declBus(c+41,"Gtx_Top gtxtx next_state", false,-1, 8,0);
        vcdp->declBit(c+49,"Gtx_Top gtxtx ireq_advance_condition", false,-1);
        vcdp->declBus(c+65,"Gtx_Top gtxtx current_beat_cnt", false,-1, 5,0);
        vcdp->declBus(c+1,"Gtx_Top gtxtx tx_byte_cnt", false,-1, 5,0);
        vcdp->declBus(c+97,"Gtx_Top gtxtx tx_addr_temp", false,-1, 7,0);
    }
}

void VGtx_Top::traceFullThis__1(VGtx_Top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VGtx_Top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBus(c+1,((0x3fU & ((IData)(vlTOPp->Gtx_Top__DOT__gtxtx__DOT__ireq_advance_condition)
                                      ? ((IData)(1U) 
                                         + (IData)(vlTOPp->Gtx_Top__DOT__gtxtx__DOT__current_beat_cnt))
                                      : (IData)(vlTOPp->Gtx_Top__DOT__gtxtx__DOT__current_beat_cnt)))),6);
        vcdp->fullBus(c+9,((0xffU & ((IData)(vlTOPp->Gtx_Top__DOT__gtxtx__DOT__ireq_advance_condition)
                                      ? (IData)(vlTOPp->Gtx_Top__DOT__gtxtx__DOT__tx_addr_temp)
                                      : ((IData)(vlTOPp->Gtx_Top__DOT__gtxtx__DOT__tx_addr_temp) 
                                         - (IData)(1U))))),8);
        vcdp->fullBus(c+17,(vlTOPp->Gtx_Top__DOT__gtxtx_s_axi_tx_tdata),32);
        vcdp->fullBit(c+25,(vlTOPp->Gtx_Top__DOT__gtxtx_s_axi_tx_tlast));
        vcdp->fullBit(c+33,(vlTOPp->Gtx_Top__DOT__gtxtx_s_axi_tx_tvalid));
        vcdp->fullBus(c+41,(vlTOPp->Gtx_Top__DOT__gtxtx__DOT__next_state),9);
        vcdp->fullBit(c+49,(vlTOPp->Gtx_Top__DOT__gtxtx__DOT__ireq_advance_condition));
        vcdp->fullBus(c+57,(vlTOPp->Gtx_Top__DOT__gtxtx_crc_data),32);
        vcdp->fullBus(c+65,(vlTOPp->Gtx_Top__DOT__gtxtx__DOT__current_beat_cnt),6);
        vcdp->fullBus(c+73,(vlTOPp->Gtx_Top__DOT___zz_area_mem_port0),32);
        vcdp->fullBit(c+81,((0U != (IData)(vlTOPp->Gtx_Top__DOT__gtxtx__DOT__current_state))));
        vcdp->fullBus(c+89,(vlTOPp->Gtx_Top__DOT__gtxtx__DOT__current_state),9);
        vcdp->fullBus(c+97,(vlTOPp->Gtx_Top__DOT__gtxtx__DOT__tx_addr_temp),8);
        vcdp->fullBit(c+105,(vlTOPp->axiw_valid));
        vcdp->fullBit(c+113,(vlTOPp->axiw_ready));
        vcdp->fullBus(c+121,(vlTOPp->axiw_payload_data),32);
        vcdp->fullBit(c+129,(vlTOPp->axiw_payload_last));
        vcdp->fullBus(c+137,(vlTOPp->tx_head),32);
        vcdp->fullBit(c+145,(vlTOPp->tx_packet_req));
        vcdp->fullBit(c+153,(vlTOPp->tx_packet_trigger));
        vcdp->fullBit(c+161,(vlTOPp->clk));
        vcdp->fullBit(c+169,(vlTOPp->reset));
        vcdp->fullBus(c+177,(0xfU),4);
        vcdp->fullBus(c+185,(1U),32);
        vcdp->fullBus(c+193,(0U),9);
        vcdp->fullBus(c+201,(1U),9);
        vcdp->fullBus(c+209,(2U),9);
        vcdp->fullBus(c+217,(4U),9);
        vcdp->fullBus(c+225,(8U),9);
        vcdp->fullBus(c+233,(0x10U),9);
        vcdp->fullBus(c+241,(0x40U),9);
        vcdp->fullBus(c+249,(0x80U),9);
        vcdp->fullBus(c+257,(0x100U),9);
    }
}
