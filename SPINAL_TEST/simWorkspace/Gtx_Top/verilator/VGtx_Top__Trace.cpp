// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VGtx_Top__Syms.h"


//======================

void VGtx_Top::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VGtx_Top* t = (VGtx_Top*)userthis;
    VGtx_Top__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VGtx_Top::traceChgThis(VGtx_Top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VGtx_Top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 1U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 4U))))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 3U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 4U))))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 4U))))) {
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((8U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__8(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VGtx_Top::traceChgThis__2(VGtx_Top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VGtx_Top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1,((0x3fU & ((IData)(vlTOPp->Gtx_Top__DOT__gtxtx__DOT__ireq_advance_condition)
                                     ? ((IData)(1U) 
                                        + (IData)(vlTOPp->Gtx_Top__DOT__gtxtx__DOT__current_beat_cnt))
                                     : (IData)(vlTOPp->Gtx_Top__DOT__gtxtx__DOT__current_beat_cnt)))),6);
    }
}

void VGtx_Top::traceChgThis__3(VGtx_Top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VGtx_Top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+9,((0xffU & ((IData)(vlTOPp->Gtx_Top__DOT__gtxtx__DOT__ireq_advance_condition)
                                     ? (IData)(vlTOPp->Gtx_Top__DOT__gtxtx__DOT__tx_addr_temp)
                                     : ((IData)(vlTOPp->Gtx_Top__DOT__gtxtx__DOT__tx_addr_temp) 
                                        - (IData)(1U))))),8);
    }
}

void VGtx_Top::traceChgThis__4(VGtx_Top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VGtx_Top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+17,(vlTOPp->Gtx_Top__DOT__gtxtx_s_axi_tx_tdata),32);
        vcdp->chgBit(c+25,(vlTOPp->Gtx_Top__DOT__gtxtx_s_axi_tx_tlast));
        vcdp->chgBit(c+33,(vlTOPp->Gtx_Top__DOT__gtxtx_s_axi_tx_tvalid));
        vcdp->chgBus(c+41,(vlTOPp->Gtx_Top__DOT__gtxtx__DOT__next_state),9);
        vcdp->chgBit(c+49,(vlTOPp->Gtx_Top__DOT__gtxtx__DOT__ireq_advance_condition));
    }
}

void VGtx_Top::traceChgThis__5(VGtx_Top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VGtx_Top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+57,(vlTOPp->Gtx_Top__DOT__gtxtx_crc_data),32);
        vcdp->chgBus(c+65,(vlTOPp->Gtx_Top__DOT__gtxtx__DOT__current_beat_cnt),6);
    }
}

void VGtx_Top::traceChgThis__6(VGtx_Top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VGtx_Top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+73,(vlTOPp->Gtx_Top__DOT___zz_area_mem_port0),32);
    }
}

void VGtx_Top::traceChgThis__7(VGtx_Top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VGtx_Top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+81,((0U != (IData)(vlTOPp->Gtx_Top__DOT__gtxtx__DOT__current_state))));
        vcdp->chgBus(c+89,(vlTOPp->Gtx_Top__DOT__gtxtx__DOT__current_state),9);
        vcdp->chgBus(c+97,(vlTOPp->Gtx_Top__DOT__gtxtx__DOT__tx_addr_temp),8);
    }
}

void VGtx_Top::traceChgThis__8(VGtx_Top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VGtx_Top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+105,(vlTOPp->axiw_valid));
        vcdp->chgBit(c+113,(vlTOPp->axiw_ready));
        vcdp->chgBus(c+121,(vlTOPp->axiw_payload_data),32);
        vcdp->chgBit(c+129,(vlTOPp->axiw_payload_last));
        vcdp->chgBus(c+137,(vlTOPp->tx_head),32);
        vcdp->chgBit(c+145,(vlTOPp->tx_packet_req));
        vcdp->chgBit(c+153,(vlTOPp->tx_packet_trigger));
        vcdp->chgBit(c+161,(vlTOPp->clk));
        vcdp->chgBit(c+169,(vlTOPp->reset));
    }
}
