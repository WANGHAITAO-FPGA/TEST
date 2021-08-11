// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VGtx_Top.h for the primary calling header

#include "VGtx_Top.h"
#include "VGtx_Top__Syms.h"

//==========

VL_CTOR_IMP(VGtx_Top) {
    VGtx_Top__Syms* __restrict vlSymsp = __VlSymsp = new VGtx_Top__Syms(this, name());
    VGtx_Top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VGtx_Top::__Vconfigure(VGtx_Top__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VGtx_Top::~VGtx_Top() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void VGtx_Top::_initial__TOP__5(VGtx_Top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGtx_Top::_initial__TOP__5\n"); );
    VGtx_Top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*255:0*/ __Vtemp2[8];
    // Body
    __Vtemp2[0U] = 0x2e62696eU;
    __Vtemp2[1U] = 0x5f6d656dU;
    __Vtemp2[2U] = 0x61726561U;
    __Vtemp2[3U] = 0x76656c5fU;
    __Vtemp2[4U] = 0x6f706c65U;
    __Vtemp2[5U] = 0x2e765f74U;
    __Vtemp2[6U] = 0x5f546f70U;
    __Vtemp2[7U] = 0x477478U;
    VL_READMEM_N(false, 32, 256, 0, VL_CVT_PACK_STR_NW(8, __Vtemp2)
                 , vlTOPp->Gtx_Top__DOT__area_mem, 0
                 , ~VL_ULL(0));
}

void VGtx_Top::_eval_initial(VGtx_Top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGtx_Top::_eval_initial\n"); );
    VGtx_Top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
    vlTOPp->_initial__TOP__5(vlSymsp);
}

void VGtx_Top::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGtx_Top::final\n"); );
    // Variables
    VGtx_Top__Syms* __restrict vlSymsp = this->__VlSymsp;
    VGtx_Top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VGtx_Top::_eval_settle(VGtx_Top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGtx_Top::_eval_settle\n"); );
    VGtx_Top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__6(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

void VGtx_Top::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGtx_Top::_ctor_var_reset\n"); );
    // Body
    axiw_valid = VL_RAND_RESET_I(1);
    axiw_ready = VL_RAND_RESET_I(1);
    axiw_payload_data = VL_RAND_RESET_I(32);
    axiw_payload_last = VL_RAND_RESET_I(1);
    tx_head = VL_RAND_RESET_I(32);
    tx_packet_req = VL_RAND_RESET_I(1);
    tx_packet_trigger = VL_RAND_RESET_I(1);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    Gtx_Top__DOT___zz_area_mem_port0 = VL_RAND_RESET_I(32);
    Gtx_Top__DOT__gtxtx_s_axi_tx_tdata = VL_RAND_RESET_I(32);
    Gtx_Top__DOT__gtxtx_s_axi_tx_tlast = VL_RAND_RESET_I(1);
    Gtx_Top__DOT__gtxtx_s_axi_tx_tvalid = VL_RAND_RESET_I(1);
    Gtx_Top__DOT__gtxtx_crc_data = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<256; ++__Vi0) {
            Gtx_Top__DOT__area_mem[__Vi0] = VL_RAND_RESET_I(32);
    }}
    Gtx_Top__DOT__gtxtx__DOT__current_state = VL_RAND_RESET_I(9);
    Gtx_Top__DOT__gtxtx__DOT__next_state = VL_RAND_RESET_I(9);
    Gtx_Top__DOT__gtxtx__DOT__ireq_advance_condition = VL_RAND_RESET_I(1);
    Gtx_Top__DOT__gtxtx__DOT__current_beat_cnt = VL_RAND_RESET_I(6);
    Gtx_Top__DOT__gtxtx__DOT__tx_addr_temp = VL_RAND_RESET_I(8);
    __Vdly__Gtx_Top__DOT__gtxtx__DOT__current_beat_cnt = VL_RAND_RESET_I(6);
    __Vdly__Gtx_Top__DOT__gtxtx__DOT__tx_addr_temp = VL_RAND_RESET_I(8);
    __Vm_traceActivity = 0;
}
