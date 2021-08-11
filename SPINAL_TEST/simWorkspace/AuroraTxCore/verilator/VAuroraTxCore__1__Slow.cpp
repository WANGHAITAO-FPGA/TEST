// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAuroraTxCore.h for the primary calling header

#include "VAuroraTxCore.h"
#include "VAuroraTxCore__Syms.h"

void VAuroraTxCore::_eval_initial(VAuroraTxCore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAuroraTxCore::_eval_initial\n"); );
    VAuroraTxCore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

void VAuroraTxCore::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAuroraTxCore::final\n"); );
    // Variables
    VAuroraTxCore__Syms* __restrict vlSymsp = this->__VlSymsp;
    VAuroraTxCore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VAuroraTxCore::_eval_settle(VAuroraTxCore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAuroraTxCore::_eval_settle\n"); );
    VAuroraTxCore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__5(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
    vlTOPp->_settle__TOP__6(vlSymsp);
}

void VAuroraTxCore::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAuroraTxCore::_ctor_var_reset\n"); );
    // Body
    axiw_valid = VL_RAND_RESET_I(1);
    axiw_ready = VL_RAND_RESET_I(1);
    axiw_payload_data = VL_RAND_RESET_I(32);
    axiw_payload_last = VL_RAND_RESET_I(1);
    tx_head = VL_RAND_RESET_I(32);
    tx_start = VL_RAND_RESET_I(1);
    tx_trigger = VL_RAND_RESET_I(1);
    bram_en = VL_RAND_RESET_I(1);
    bram_we = VL_RAND_RESET_I(4);
    bram_addr = VL_RAND_RESET_I(8);
    bram_wrdata = VL_RAND_RESET_I(32);
    bram_rddata = VL_RAND_RESET_I(32);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    AuroraTxCore__DOT__aurarorx_axir_valid = VL_RAND_RESET_I(1);
    AuroraTxCore__DOT__aurarorx_bram_rddata = VL_RAND_RESET_I(32);
    AuroraTxCore__DOT___zz_mem_port0 = VL_RAND_RESET_I(32);
    AuroraTxCore__DOT__crc32_2_crc_o = VL_RAND_RESET_I(32);
    AuroraTxCore__DOT__axi_last_2 = VL_RAND_RESET_I(1);
    AuroraTxCore__DOT__axi_last_1 = VL_RAND_RESET_I(1);
    AuroraTxCore__DOT__axi_txdata_7 = VL_RAND_RESET_I(32);
    AuroraTxCore__DOT__axi_txdata_6 = VL_RAND_RESET_I(32);
    AuroraTxCore__DOT__axi_txdata_5 = VL_RAND_RESET_I(32);
    AuroraTxCore__DOT__axi_txdata_4 = VL_RAND_RESET_I(32);
    AuroraTxCore__DOT__axi_txdata_3 = VL_RAND_RESET_I(32);
    AuroraTxCore__DOT__axi_txdata_2 = VL_RAND_RESET_I(32);
    AuroraTxCore__DOT__axi_txdata_1 = VL_RAND_RESET_I(32);
    AuroraTxCore__DOT__axi_last = VL_RAND_RESET_I(1);
    AuroraTxCore__DOT__axi_txhead = VL_RAND_RESET_I(32);
    AuroraTxCore__DOT__length = VL_RAND_RESET_I(8);
    AuroraTxCore__DOT__mem_rden = VL_RAND_RESET_I(1);
    AuroraTxCore__DOT__mem_addrtemp = VL_RAND_RESET_I(8);
    AuroraTxCore__DOT__crc_data = VL_RAND_RESET_I(32);
    AuroraTxCore__DOT__data_cnt = VL_RAND_RESET_I(8);
    AuroraTxCore__DOT__stateMachine_state = VL_RAND_RESET_I(3);
    AuroraTxCore__DOT__axiw_fire_3 = VL_RAND_RESET_I(1);
    AuroraTxCore__DOT__when_Gtx_Tx_l134 = VL_RAND_RESET_I(1);
    AuroraTxCore__DOT__mem_addr = VL_RAND_RESET_I(8);
    AuroraTxCore__DOT__stateMachine_state_string = VL_RAND_RESET_Q(64);
    { int __Vi0=0; for (; __Vi0<256; ++__Vi0) {
            AuroraTxCore__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }}
    AuroraTxCore__DOT__aurarorx__DOT__crc32_2_crc_o = VL_RAND_RESET_I(32);
    AuroraTxCore__DOT__aurarorx__DOT__mem_wren = VL_RAND_RESET_I(1);
    AuroraTxCore__DOT__aurarorx__DOT__mem_addr = VL_RAND_RESET_I(8);
    AuroraTxCore__DOT__aurarorx__DOT__mem_data = VL_RAND_RESET_I(32);
    AuroraTxCore__DOT__aurarorx__DOT__mem_wrwe = VL_RAND_RESET_I(4);
    AuroraTxCore__DOT__aurarorx__DOT__length = VL_RAND_RESET_I(8);
    AuroraTxCore__DOT__aurarorx__DOT__data_cnt = VL_RAND_RESET_I(8);
    AuroraTxCore__DOT__aurarorx__DOT__crc_data = VL_RAND_RESET_I(32);
    AuroraTxCore__DOT__aurarorx__DOT__crc_status = VL_RAND_RESET_I(1);
    AuroraTxCore__DOT__aurarorx__DOT__stateMachine_state = VL_RAND_RESET_I(3);
    AuroraTxCore__DOT__aurarorx__DOT__when_Gtx_Rx_l59 = VL_RAND_RESET_I(1);
    AuroraTxCore__DOT__aurarorx__DOT__when_Gtx_Rx_l92 = VL_RAND_RESET_I(1);
    AuroraTxCore__DOT__aurarorx__DOT__when_Gtx_Rx_l97 = VL_RAND_RESET_I(1);
    AuroraTxCore__DOT__aurarorx__DOT__when_Gtx_Rx_l106 = VL_RAND_RESET_I(1);
    AuroraTxCore__DOT__aurarorx__DOT__stateMachine_state_string = VL_RAND_RESET_Q(64);
    __Vtableidx1 = 0;
    __Vtable1_AuroraTxCore__DOT__stateMachine_state_string[0] = VL_ULL(0x49444c4520202020);
    __Vtable1_AuroraTxCore__DOT__stateMachine_state_string[1] = VL_ULL(0x574149545f312020);
    __Vtable1_AuroraTxCore__DOT__stateMachine_state_string[2] = VL_ULL(0x5354415254202020);
    __Vtable1_AuroraTxCore__DOT__stateMachine_state_string[3] = VL_ULL(0x4445564943454944);
    __Vtable1_AuroraTxCore__DOT__stateMachine_state_string[4] = VL_ULL(0x4c454e4754482020);
    __Vtable1_AuroraTxCore__DOT__stateMachine_state_string[5] = VL_ULL(0x4441544120202020);
    __Vtable1_AuroraTxCore__DOT__stateMachine_state_string[6] = VL_ULL(0x4352432020202020);
    __Vtable1_AuroraTxCore__DOT__stateMachine_state_string[7] = VL_ULL(0x53544f5020202020);
    __Vtableidx2 = 0;
    __Vtable2_AuroraTxCore__DOT__aurarorx__DOT__stateMachine_state_string[0] = VL_ULL(0x49444c4520202020);
    __Vtable2_AuroraTxCore__DOT__aurarorx__DOT__stateMachine_state_string[1] = VL_ULL(0x574149545f312020);
    __Vtable2_AuroraTxCore__DOT__aurarorx__DOT__stateMachine_state_string[2] = VL_ULL(0x5354415254202020);
    __Vtable2_AuroraTxCore__DOT__aurarorx__DOT__stateMachine_state_string[3] = VL_ULL(0x4445564943454944);
    __Vtable2_AuroraTxCore__DOT__aurarorx__DOT__stateMachine_state_string[4] = VL_ULL(0x4c454e4754482020);
    __Vtable2_AuroraTxCore__DOT__aurarorx__DOT__stateMachine_state_string[5] = VL_ULL(0x4441544120202020);
    __Vtable2_AuroraTxCore__DOT__aurarorx__DOT__stateMachine_state_string[6] = VL_ULL(0x4352432020202020);
    __Vtable2_AuroraTxCore__DOT__aurarorx__DOT__stateMachine_state_string[7] = VL_ULL(0x53544f5020202020);
    __Vdly__AuroraTxCore__DOT__data_cnt = VL_RAND_RESET_I(8);
    __Vdly__AuroraTxCore__DOT__aurarorx__DOT__crc_data = VL_RAND_RESET_I(32);
    __Vdly__AuroraTxCore__DOT__mem_addrtemp = VL_RAND_RESET_I(8);
    __Vdly__AuroraTxCore__DOT__stateMachine_state = VL_RAND_RESET_I(3);
    __Vdly__AuroraTxCore__DOT__aurarorx__DOT__stateMachine_state = VL_RAND_RESET_I(3);
    __Vdly__AuroraTxCore__DOT__aurarorx__DOT__mem_addr = VL_RAND_RESET_I(8);
    __Vm_traceActivity = 0;
}