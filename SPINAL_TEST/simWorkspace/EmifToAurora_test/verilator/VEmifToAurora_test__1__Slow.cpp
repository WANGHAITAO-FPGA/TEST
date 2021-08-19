// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VEmifToAurora_test.h for the primary calling header

#include "VEmifToAurora_test.h"
#include "VEmifToAurora_test__Syms.h"

void VEmifToAurora_test::_initial__TOP__10(VEmifToAurora_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEmifToAurora_test::_initial__TOP__10\n"); );
    VEmifToAurora_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->EmifToAurora_test__DOT__resetCtrl_axiResetCounter = 0U;
}

void VEmifToAurora_test::_settle__TOP__14(VEmifToAurora_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEmifToAurora_test::_settle__TOP__14\n"); );
    VEmifToAurora_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->EmifToAurora_test__DOT__resetCtrl_axiResetUnbuffered = 0U;
    if ((0x3fU != (IData)(vlTOPp->EmifToAurora_test__DOT__resetCtrl_axiResetCounter))) {
        vlTOPp->EmifToAurora_test__DOT__resetCtrl_axiResetUnbuffered = 1U;
    }
    vlTOPp->EmifToAurora_test__DOT__when_EmifToAurora_l38 
        = (0x3fU != (IData)(vlTOPp->EmifToAurora_test__DOT__resetCtrl_axiResetCounter));
}

void VEmifToAurora_test::_eval_initial(VEmifToAurora_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEmifToAurora_test::_eval_initial\n"); );
    VEmifToAurora_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__aurora_userclk = vlTOPp->aurora_userclk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
    vlTOPp->_initial__TOP__10(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

void VEmifToAurora_test::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEmifToAurora_test::final\n"); );
    // Variables
    VEmifToAurora_test__Syms* __restrict vlSymsp = this->__VlSymsp;
    VEmifToAurora_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VEmifToAurora_test::_eval_settle(VEmifToAurora_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEmifToAurora_test::_eval_settle\n"); );
    VEmifToAurora_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
    vlTOPp->_settle__TOP__3(vlSymsp);
    vlTOPp->_settle__TOP__14(vlSymsp);
}

void VEmifToAurora_test::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEmifToAurora_test::_ctor_var_reset\n"); );
    // Body
    emif_emif_addr = VL_RAND_RESET_I(24);
    emif_emif_data_read = VL_RAND_RESET_I(16);
    emif_emif_data_write = VL_RAND_RESET_I(16);
    emif_emif_data_writeEnable = VL_RAND_RESET_I(1);
    emif_emif_cs = VL_RAND_RESET_I(1);
    emif_emif_we = VL_RAND_RESET_I(1);
    emif_emif_oe = VL_RAND_RESET_I(1);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    aurora_userclk = VL_RAND_RESET_I(1);
    intrrupt = VL_RAND_RESET_I(1);
    EmifToAurora_test__DOT__area_emiftoapb_apb_PENABLE = VL_RAND_RESET_I(1);
    EmifToAurora_test__DOT__area_emiftoapb_apb_PWRITE = VL_RAND_RESET_I(1);
    EmifToAurora_test__DOT__area_emiftoapb_apb_PWDATA = VL_RAND_RESET_I(32);
    EmifToAurora_test__DOT__area_auroratop_apb_PRDATA = VL_RAND_RESET_I(32);
    EmifToAurora_test__DOT__apb_decoder_io_input_PREADY = VL_RAND_RESET_I(1);
    EmifToAurora_test__DOT__apb_decoder_io_input_PSLVERROR = VL_RAND_RESET_I(1);
    EmifToAurora_test__DOT__apb_decoder_io_output_PSEL = VL_RAND_RESET_I(3);
    EmifToAurora_test__DOT__resetCtrl_axiResetUnbuffered = VL_RAND_RESET_I(1);
    EmifToAurora_test__DOT__resetCtrl_axiResetCounter = VL_RAND_RESET_I(6);
    EmifToAurora_test__DOT__when_EmifToAurora_l38 = VL_RAND_RESET_I(1);
    EmifToAurora_test__DOT__resetCtrl_axiReset = VL_RAND_RESET_I(1);
    EmifToAurora_test__DOT__area_emiftoapb__DOT__penable = VL_RAND_RESET_I(1);
    EmifToAurora_test__DOT__area_emiftoapb__DOT__emifdatatemp = VL_RAND_RESET_I(16);
    EmifToAurora_test__DOT__area_emiftoapb__DOT__penable_regNext = VL_RAND_RESET_I(1);
    EmifToAurora_test__DOT__area_emiftoapb__DOT___zz_emif_emif_data_write = VL_RAND_RESET_I(16);
    EmifToAurora_test__DOT__area_emiftoapb__DOT___zz_emif_emif_data_write_1 = VL_RAND_RESET_I(16);
    EmifToAurora_test__DOT__area_apb3toTxBram__DOT__when_Apb3ToBram_l41 = VL_RAND_RESET_I(1);
    EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore_axiw_valid = VL_RAND_RESET_I(1);
    EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_headtemp = VL_RAND_RESET_I(32);
    EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_ctrl = VL_RAND_RESET_I(1);
    EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_triger = VL_RAND_RESET_I(1);
    EmifToAurora_test__DOT__area_auroratop__DOT__toparea_ctrl_doWrite = VL_RAND_RESET_I(1);
    EmifToAurora_test__DOT__area_auroratop__DOT__toparea_triger = VL_RAND_RESET_I(1);
    EmifToAurora_test__DOT__area_auroratop__DOT__when_AuroraTop_l46 = VL_RAND_RESET_I(1);
    EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_ctrl_temp = VL_RAND_RESET_I(1);
    EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_triger_temp = VL_RAND_RESET_I(1);
    EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_senddatatriger = VL_RAND_RESET_I(1);
    EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_sendtriger = VL_RAND_RESET_I(1);
    EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_ctrl_temp_delay_1 = VL_RAND_RESET_I(1);
    EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_ctrl_temp_delay_2 = VL_RAND_RESET_I(1);
    EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_ctrl_temp_delay_3 = VL_RAND_RESET_I(1);
    EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_triger_temp_delay_1 = VL_RAND_RESET_I(1);
    EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_triger_temp_delay_1_1 = VL_RAND_RESET_I(1);
    EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_triger_temp_delay_2 = VL_RAND_RESET_I(1);
    EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_triger_temp_delay_1_2 = VL_RAND_RESET_I(1);
    EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_triger_temp_delay_2_1 = VL_RAND_RESET_I(1);
    EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_triger_temp_delay_3 = VL_RAND_RESET_I(1);
    EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__crc32_2_crc_o = VL_RAND_RESET_I(32);
    EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_mem_wren = VL_RAND_RESET_I(1);
    EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_mem_addr = VL_RAND_RESET_I(8);
    EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_mem_data = VL_RAND_RESET_I(32);
    EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_mem_wrwe = VL_RAND_RESET_I(4);
    EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_length = VL_RAND_RESET_I(8);
    EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_data_cnt = VL_RAND_RESET_I(8);
    EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data = VL_RAND_RESET_I(32);
    EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_status = VL_RAND_RESET_I(1);
    EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_aurora_intrrupt = VL_RAND_RESET_I(1);
    EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state = VL_RAND_RESET_I(3);
    EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__when_Gtx_Rx_l70 = VL_RAND_RESET_I(1);
    EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__when_Gtx_Rx_l89 = VL_RAND_RESET_I(1);
    EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__when_Gtx_Rx_l106 = VL_RAND_RESET_I(1);
    EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__when_Gtx_Rx_l111 = VL_RAND_RESET_I(1);
    EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__when_Gtx_Rx_l120 = VL_RAND_RESET_I(1);
    EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state_string = VL_RAND_RESET_Q(64);
    EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__crc32_2_crc_o = VL_RAND_RESET_I(32);
    EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_last_2 = VL_RAND_RESET_I(1);
    EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_last_1 = VL_RAND_RESET_I(1);
    EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 = VL_RAND_RESET_I(32);
    EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_6 = VL_RAND_RESET_I(32);
    EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_5 = VL_RAND_RESET_I(32);
    EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_4 = VL_RAND_RESET_I(32);
    EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_3 = VL_RAND_RESET_I(32);
    EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_2 = VL_RAND_RESET_I(32);
    EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_1 = VL_RAND_RESET_I(32);
    EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_last = VL_RAND_RESET_I(1);
    EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txhead = VL_RAND_RESET_I(32);
    EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_length = VL_RAND_RESET_I(8);
    EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_mem_rden = VL_RAND_RESET_I(1);
    EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_mem_addrtemp = VL_RAND_RESET_I(8);
    EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data = VL_RAND_RESET_I(32);
    EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_data_cnt = VL_RAND_RESET_I(8);
    EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state = VL_RAND_RESET_I(3);
    EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__when_Gtx_Tx_l140 = VL_RAND_RESET_I(1);
    EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state_string = VL_RAND_RESET_Q(64);
    EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroraTxBlockRam__DOT___zz_bram_port0 = VL_RAND_RESET_I(32);
    EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroraTxBlockRam__DOT___zz_bram_port1 = VL_RAND_RESET_I(32);
    EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroraTxBlockRam__DOT__i = VL_RAND_RESET_I(9);
    { int __Vi0=0; for (; __Vi0<256; ++__Vi0) {
            EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroraTxBlockRam__DOT__bram[__Vi0] = VL_RAND_RESET_I(32);
    }}
    EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroraRxBlockRam__DOT___zz_bram_port0 = VL_RAND_RESET_I(32);
    EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroraRxBlockRam__DOT___zz_bram_port1 = VL_RAND_RESET_I(32);
    EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroraRxBlockRam__DOT__i = VL_RAND_RESET_I(9);
    { int __Vi0=0; for (; __Vi0<256; ++__Vi0) {
            EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroraRxBlockRam__DOT__bram[__Vi0] = VL_RAND_RESET_I(32);
    }}
    EmifToAurora_test__DOT__apb_decoder__DOT__when_Apb3Decoder_l84 = VL_RAND_RESET_I(1);
    EmifToAurora_test__DOT__apb3Router_1__DOT___zz_io_input_PRDATA = VL_RAND_RESET_I(32);
    EmifToAurora_test__DOT__apb3Router_1__DOT__selIndex = VL_RAND_RESET_I(2);
    __Vtableidx1 = 0;
    __Vtable1_EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state_string[0] = VL_ULL(0x49444c4520202020);
    __Vtable1_EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state_string[1] = VL_ULL(0x574149545f312020);
    __Vtable1_EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state_string[2] = VL_ULL(0x5354415254202020);
    __Vtable1_EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state_string[3] = VL_ULL(0x4445564943454944);
    __Vtable1_EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state_string[4] = VL_ULL(0x4c454e4754482020);
    __Vtable1_EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state_string[5] = VL_ULL(0x4441544120202020);
    __Vtable1_EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state_string[6] = VL_ULL(0x4352432020202020);
    __Vtable1_EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state_string[7] = VL_ULL(0x53544f5020202020);
    __Vtableidx2 = 0;
    __Vtable2_EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state_string[0] = VL_ULL(0x49444c4520202020);
    __Vtable2_EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state_string[1] = VL_ULL(0x574149545f312020);
    __Vtable2_EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state_string[2] = VL_ULL(0x5354415254202020);
    __Vtable2_EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state_string[3] = VL_ULL(0x4445564943454944);
    __Vtable2_EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state_string[4] = VL_ULL(0x4c454e4754482020);
    __Vtable2_EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state_string[5] = VL_ULL(0x4441544120202020);
    __Vtable2_EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state_string[6] = VL_ULL(0x4352432020202020);
    __Vtable2_EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state_string[7] = VL_ULL(0x53544f5020202020);
    __Vdlyvdim0__EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroraTxBlockRam__DOT__bram__v0 = 0;
    __Vdlyvval__EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroraTxBlockRam__DOT__bram__v0 = VL_RAND_RESET_I(32);
    __Vdlyvset__EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroraTxBlockRam__DOT__bram__v0 = 0;
    __Vdly__EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_mem_addr = VL_RAND_RESET_I(8);
    __Vdly__EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state = VL_RAND_RESET_I(3);
    __Vdly__EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_mem_addrtemp = VL_RAND_RESET_I(8);
    __Vdly__EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state = VL_RAND_RESET_I(3);
    __Vdly__EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_data_cnt = VL_RAND_RESET_I(8);
    __Vm_traceActivity = 0;
}
