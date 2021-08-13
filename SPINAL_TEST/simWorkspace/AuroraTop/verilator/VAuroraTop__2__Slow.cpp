// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAuroraTop.h for the primary calling header

#include "VAuroraTop.h"
#include "VAuroraTop__Syms.h"

void VAuroraTop::_eval_initial(VAuroraTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAuroraTop::_eval_initial\n"); );
    VAuroraTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
    vlTOPp->__Vclklast__TOP__aurora_userclk = vlTOPp->aurora_userclk;
}

void VAuroraTop::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAuroraTop::final\n"); );
    // Variables
    VAuroraTop__Syms* __restrict vlSymsp = this->__VlSymsp;
    VAuroraTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VAuroraTop::_eval_settle(VAuroraTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAuroraTop::_eval_settle\n"); );
    VAuroraTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
    vlTOPp->_settle__TOP__3(vlSymsp);
}

void VAuroraTop::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAuroraTop::_ctor_var_reset\n"); );
    // Body
    apb_PADDR = VL_RAND_RESET_I(20);
    apb_PSEL = VL_RAND_RESET_I(1);
    apb_PENABLE = VL_RAND_RESET_I(1);
    apb_PREADY = VL_RAND_RESET_I(1);
    apb_PWRITE = VL_RAND_RESET_I(1);
    apb_PWDATA = VL_RAND_RESET_I(32);
    apb_PRDATA = VL_RAND_RESET_I(32);
    apb_PSLVERROR = VL_RAND_RESET_I(1);
    axiw_valid = VL_RAND_RESET_I(1);
    axiw_ready = VL_RAND_RESET_I(1);
    axiw_payload_data = VL_RAND_RESET_I(32);
    axiw_payload_last = VL_RAND_RESET_I(1);
    axir_valid = VL_RAND_RESET_I(1);
    axir_ready = VL_RAND_RESET_I(1);
    axir_payload_data = VL_RAND_RESET_I(32);
    axir_payload_last = VL_RAND_RESET_I(1);
    tx_bram_en = VL_RAND_RESET_I(1);
    tx_bram_we = VL_RAND_RESET_I(4);
    tx_bram_addr = VL_RAND_RESET_I(8);
    tx_bram_wrdata = VL_RAND_RESET_I(32);
    tx_bram_rddata = VL_RAND_RESET_I(32);
    rx_bram_en = VL_RAND_RESET_I(1);
    rx_bram_we = VL_RAND_RESET_I(4);
    rx_bram_addr = VL_RAND_RESET_I(8);
    rx_bram_wrdata = VL_RAND_RESET_I(32);
    rx_bram_rddata = VL_RAND_RESET_I(32);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    aurora_userclk = VL_RAND_RESET_I(1);
    intrrupt = VL_RAND_RESET_I(1);
    AuroraTop__DOT__auroraArea_auroratxcore_axiw_valid = VL_RAND_RESET_I(1);
    AuroraTop__DOT__toparea_tx_headtemp = VL_RAND_RESET_I(32);
    AuroraTop__DOT__toparea_tx_ctrl = VL_RAND_RESET_I(32);
    AuroraTop__DOT__toparea_ctrl_doWrite = VL_RAND_RESET_I(1);
    AuroraTop__DOT__auroraArea_aurorarxcore__DOT__crc32_2_crc_o = VL_RAND_RESET_I(32);
    AuroraTop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_mem_wren = VL_RAND_RESET_I(1);
    AuroraTop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_mem_addr = VL_RAND_RESET_I(8);
    AuroraTop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_mem_data = VL_RAND_RESET_I(32);
    AuroraTop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_mem_wrwe = VL_RAND_RESET_I(4);
    AuroraTop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_length = VL_RAND_RESET_I(8);
    AuroraTop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_data_cnt = VL_RAND_RESET_I(8);
    AuroraTop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data = VL_RAND_RESET_I(32);
    AuroraTop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_status = VL_RAND_RESET_I(1);
    AuroraTop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_aurora_intrrupt = VL_RAND_RESET_I(1);
    AuroraTop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state = VL_RAND_RESET_I(3);
    AuroraTop__DOT__auroraArea_aurorarxcore__DOT__when_Gtx_Rx_l70 = VL_RAND_RESET_I(1);
    AuroraTop__DOT__auroraArea_aurorarxcore__DOT__when_Gtx_Rx_l89 = VL_RAND_RESET_I(1);
    AuroraTop__DOT__auroraArea_aurorarxcore__DOT__when_Gtx_Rx_l106 = VL_RAND_RESET_I(1);
    AuroraTop__DOT__auroraArea_aurorarxcore__DOT__when_Gtx_Rx_l111 = VL_RAND_RESET_I(1);
    AuroraTop__DOT__auroraArea_aurorarxcore__DOT__when_Gtx_Rx_l120 = VL_RAND_RESET_I(1);
    AuroraTop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state_string = VL_RAND_RESET_Q(64);
    AuroraTop__DOT__auroraArea_auroratxcore__DOT__crc32_2_crc_o = VL_RAND_RESET_I(32);
    AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_last_2 = VL_RAND_RESET_I(1);
    AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_last_1 = VL_RAND_RESET_I(1);
    AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 = VL_RAND_RESET_I(32);
    AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_6 = VL_RAND_RESET_I(32);
    AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_5 = VL_RAND_RESET_I(32);
    AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_4 = VL_RAND_RESET_I(32);
    AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_3 = VL_RAND_RESET_I(32);
    AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_2 = VL_RAND_RESET_I(32);
    AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_1 = VL_RAND_RESET_I(32);
    AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_last = VL_RAND_RESET_I(1);
    AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txhead = VL_RAND_RESET_I(32);
    AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_length = VL_RAND_RESET_I(8);
    AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_mem_rden = VL_RAND_RESET_I(1);
    AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_mem_addrtemp = VL_RAND_RESET_I(8);
    AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data = VL_RAND_RESET_I(32);
    AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_data_cnt = VL_RAND_RESET_I(8);
    AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state = VL_RAND_RESET_I(3);
    AuroraTop__DOT__auroraArea_auroratxcore__DOT__axiw_fire_3 = VL_RAND_RESET_I(1);
    AuroraTop__DOT__auroraArea_auroratxcore__DOT__when_Gtx_Tx_l140 = VL_RAND_RESET_I(1);
    AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state_string = VL_RAND_RESET_Q(64);
    AuroraTop__DOT__auroraArea_auroraTxBlockRam__DOT___zz_bram_port0 = VL_RAND_RESET_I(32);
    AuroraTop__DOT__auroraArea_auroraTxBlockRam__DOT___zz_bram_port1 = VL_RAND_RESET_I(32);
    AuroraTop__DOT__auroraArea_auroraTxBlockRam__DOT__i = VL_RAND_RESET_I(9);
    { int __Vi0=0; for (; __Vi0<256; ++__Vi0) {
            AuroraTop__DOT__auroraArea_auroraTxBlockRam__DOT__bram[__Vi0] = VL_RAND_RESET_I(32);
    }}
    AuroraTop__DOT__auroraArea_auroraRxBlockRam__DOT___zz_bram_port0 = VL_RAND_RESET_I(32);
    AuroraTop__DOT__auroraArea_auroraRxBlockRam__DOT___zz_bram_port1 = VL_RAND_RESET_I(32);
    AuroraTop__DOT__auroraArea_auroraRxBlockRam__DOT__i = VL_RAND_RESET_I(9);
    { int __Vi0=0; for (; __Vi0<256; ++__Vi0) {
            AuroraTop__DOT__auroraArea_auroraRxBlockRam__DOT__bram[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __Vtableidx1 = 0;
    __Vtable1_AuroraTop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state_string[0] = VL_ULL(0x49444c4520202020);
    __Vtable1_AuroraTop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state_string[1] = VL_ULL(0x574149545f312020);
    __Vtable1_AuroraTop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state_string[2] = VL_ULL(0x5354415254202020);
    __Vtable1_AuroraTop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state_string[3] = VL_ULL(0x4445564943454944);
    __Vtable1_AuroraTop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state_string[4] = VL_ULL(0x4c454e4754482020);
    __Vtable1_AuroraTop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state_string[5] = VL_ULL(0x4441544120202020);
    __Vtable1_AuroraTop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state_string[6] = VL_ULL(0x4352432020202020);
    __Vtable1_AuroraTop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state_string[7] = VL_ULL(0x53544f5020202020);
    __Vtableidx2 = 0;
    __Vtable2_AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state_string[0] = VL_ULL(0x49444c4520202020);
    __Vtable2_AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state_string[1] = VL_ULL(0x574149545f312020);
    __Vtable2_AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state_string[2] = VL_ULL(0x5354415254202020);
    __Vtable2_AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state_string[3] = VL_ULL(0x4445564943454944);
    __Vtable2_AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state_string[4] = VL_ULL(0x4c454e4754482020);
    __Vtable2_AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state_string[5] = VL_ULL(0x4441544120202020);
    __Vtable2_AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state_string[6] = VL_ULL(0x4352432020202020);
    __Vtable2_AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state_string[7] = VL_ULL(0x53544f5020202020);
    __Vdlyvdim0__AuroraTop__DOT__auroraArea_auroraTxBlockRam__DOT__bram__v0 = 0;
    __Vdlyvval__AuroraTop__DOT__auroraArea_auroraTxBlockRam__DOT__bram__v0 = VL_RAND_RESET_I(32);
    __Vdlyvset__AuroraTop__DOT__auroraArea_auroraTxBlockRam__DOT__bram__v0 = 0;
    __Vdly__AuroraTop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_mem_addr = VL_RAND_RESET_I(8);
    __Vdly__AuroraTop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state = VL_RAND_RESET_I(3);
    __Vdly__AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_mem_addrtemp = VL_RAND_RESET_I(8);
    __Vdly__AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state = VL_RAND_RESET_I(3);
    __Vdly__AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_data_cnt = VL_RAND_RESET_I(8);
    __Vm_traceActivity = 0;
}
