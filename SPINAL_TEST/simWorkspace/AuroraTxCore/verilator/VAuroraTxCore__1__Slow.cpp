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
    vlTOPp->__Vclklast__TOP__aurora_userclk = vlTOPp->aurora_userclk;
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
    vlTOPp->_settle__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

void VAuroraTxCore::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAuroraTxCore::_ctor_var_reset\n"); );
    // Body
    aurora_userclk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
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
    bram_clkout = VL_RAND_RESET_I(1);
    bram_resetout = VL_RAND_RESET_I(1);
    AuroraTxCore__DOT___zz_auroraTxArea_mem_port0 = VL_RAND_RESET_I(32);
    AuroraTxCore__DOT__crc32_1_crc_o = VL_RAND_RESET_I(32);
    AuroraTxCore__DOT__auroraTxArea_axi_last_2 = VL_RAND_RESET_I(1);
    AuroraTxCore__DOT__auroraTxArea_axi_last_1 = VL_RAND_RESET_I(1);
    AuroraTxCore__DOT__auroraTxArea_axi_txdata_7 = VL_RAND_RESET_I(32);
    AuroraTxCore__DOT__auroraTxArea_axi_txdata_6 = VL_RAND_RESET_I(32);
    AuroraTxCore__DOT__auroraTxArea_axi_txdata_5 = VL_RAND_RESET_I(32);
    AuroraTxCore__DOT__auroraTxArea_axi_txdata_4 = VL_RAND_RESET_I(32);
    AuroraTxCore__DOT__auroraTxArea_axi_txdata_3 = VL_RAND_RESET_I(32);
    AuroraTxCore__DOT__auroraTxArea_axi_txdata_2 = VL_RAND_RESET_I(32);
    AuroraTxCore__DOT__auroraTxArea_axi_txdata_1 = VL_RAND_RESET_I(32);
    AuroraTxCore__DOT__auroraTxArea_axi_last = VL_RAND_RESET_I(1);
    AuroraTxCore__DOT__auroraTxArea_axi_txhead = VL_RAND_RESET_I(32);
    AuroraTxCore__DOT__auroraTxArea_length = VL_RAND_RESET_I(8);
    AuroraTxCore__DOT__auroraTxArea_mem_rden = VL_RAND_RESET_I(1);
    AuroraTxCore__DOT__auroraTxArea_mem_addrtemp = VL_RAND_RESET_I(8);
    AuroraTxCore__DOT__auroraTxArea_crc_data = VL_RAND_RESET_I(32);
    AuroraTxCore__DOT__auroraTxArea_data_cnt = VL_RAND_RESET_I(8);
    AuroraTxCore__DOT__auroraTxArea_stateMachine_state = VL_RAND_RESET_I(3);
    AuroraTxCore__DOT__axiw_fire_3 = VL_RAND_RESET_I(1);
    AuroraTxCore__DOT__when_Gtx_Tx_l140 = VL_RAND_RESET_I(1);
    AuroraTxCore__DOT__auroraTxArea_mem_addr = VL_RAND_RESET_I(8);
    AuroraTxCore__DOT__auroraTxArea_stateMachine_state_string = VL_RAND_RESET_Q(64);
    { int __Vi0=0; for (; __Vi0<256; ++__Vi0) {
            AuroraTxCore__DOT__auroraTxArea_mem[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __Vtableidx1 = 0;
    __Vtable1_AuroraTxCore__DOT__auroraTxArea_stateMachine_state_string[0] = VL_ULL(0x49444c4520202020);
    __Vtable1_AuroraTxCore__DOT__auroraTxArea_stateMachine_state_string[1] = VL_ULL(0x574149545f312020);
    __Vtable1_AuroraTxCore__DOT__auroraTxArea_stateMachine_state_string[2] = VL_ULL(0x5354415254202020);
    __Vtable1_AuroraTxCore__DOT__auroraTxArea_stateMachine_state_string[3] = VL_ULL(0x4445564943454944);
    __Vtable1_AuroraTxCore__DOT__auroraTxArea_stateMachine_state_string[4] = VL_ULL(0x4c454e4754482020);
    __Vtable1_AuroraTxCore__DOT__auroraTxArea_stateMachine_state_string[5] = VL_ULL(0x4441544120202020);
    __Vtable1_AuroraTxCore__DOT__auroraTxArea_stateMachine_state_string[6] = VL_ULL(0x4352432020202020);
    __Vtable1_AuroraTxCore__DOT__auroraTxArea_stateMachine_state_string[7] = VL_ULL(0x53544f5020202020);
    __Vdly__AuroraTxCore__DOT__auroraTxArea_data_cnt = VL_RAND_RESET_I(8);
    __Vdly__AuroraTxCore__DOT__auroraTxArea_stateMachine_state = VL_RAND_RESET_I(3);
    __Vm_traceActivity = 0;
}
