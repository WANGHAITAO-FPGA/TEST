// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VEmifToAurora_test.h for the primary calling header

#include "VEmifToAurora_test.h"
#include "VEmifToAurora_test__Syms.h"

VL_INLINE_OPT void VEmifToAurora_test::_sequent__TOP__4(VEmifToAurora_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEmifToAurora_test::_sequent__TOP__4\n"); );
    VEmifToAurora_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroraTxBlockRam__DOT__bram__v0 = 0U;
    vlTOPp->EmifToAurora_test__DOT__resetCtrl_axiReset 
        = vlTOPp->EmifToAurora_test__DOT__resetCtrl_axiResetUnbuffered;
    if ((((~ (IData)(vlTOPp->emif_emif_we)) & (IData)(vlTOPp->emif_emif_oe)) 
         & (~ (vlTOPp->emif_emif_addr >> 0x17U)))) {
        vlTOPp->EmifToAurora_test__DOT__area_emiftoapb__DOT__emifdatatemp 
            = vlTOPp->emif_emif_data_read;
    }
    if ((1U & (~ (IData)(vlTOPp->emif_emif_oe)))) {
        vlTOPp->EmifToAurora_test__DOT__area_emiftoapb__DOT___zz_emif_emif_data_write_1 
            = (0xffffU & vlTOPp->EmifToAurora_test__DOT__apb3Router_1__DOT___zz_io_input_PRDATA);
    }
    if ((1U & (~ (IData)(vlTOPp->emif_emif_oe)))) {
        vlTOPp->EmifToAurora_test__DOT__area_emiftoapb__DOT___zz_emif_emif_data_write 
            = (0xffffU & (vlTOPp->EmifToAurora_test__DOT__apb3Router_1__DOT___zz_io_input_PRDATA 
                          >> 0x10U));
    }
    if (vlTOPp->EmifToAurora_test__DOT__when_EmifToAurora_l38) {
        vlTOPp->EmifToAurora_test__DOT__resetCtrl_axiResetCounter 
            = (0x3fU & ((IData)(1U) + (IData)(vlTOPp->EmifToAurora_test__DOT__resetCtrl_axiResetCounter)));
    }
    if (vlTOPp->reset) {
        vlTOPp->EmifToAurora_test__DOT__resetCtrl_axiResetCounter = 0U;
    }
    vlTOPp->EmifToAurora_test__DOT__apb3Router_1__DOT__selIndex 
        = (3U & ((IData)(vlTOPp->EmifToAurora_test__DOT__apb_decoder_io_output_PSEL) 
                 >> 1U));
    if (((IData)(vlTOPp->EmifToAurora_test__DOT__apb_decoder_io_output_PSEL) 
         & (0xfU == ((IData)(vlTOPp->EmifToAurora_test__DOT__area_apb3toTxBram__DOT__when_Apb3ToBram_l41)
                      ? 0xfU : 0U)))) {
        vlTOPp->__Vdlyvval__EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroraTxBlockRam__DOT__bram__v0 
            = vlTOPp->EmifToAurora_test__DOT__area_emiftoapb_apb_PWDATA;
        vlTOPp->__Vdlyvset__EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroraTxBlockRam__DOT__bram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroraTxBlockRam__DOT__bram__v0 
            = (0xffU & vlTOPp->emif_emif_addr);
    }
    if (((IData)(vlTOPp->EmifToAurora_test__DOT__apb_decoder_io_output_PSEL) 
         & (0U == ((IData)(vlTOPp->EmifToAurora_test__DOT__area_apb3toTxBram__DOT__when_Apb3ToBram_l41)
                    ? 0xfU : 0U)))) {
        vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroraTxBlockRam__DOT___zz_bram_port1 
            = vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroraTxBlockRam__DOT__bram
            [(0xffU & vlTOPp->emif_emif_addr)];
    }
    if ((((IData)(vlTOPp->EmifToAurora_test__DOT__apb_decoder_io_output_PSEL) 
          >> 1U) & (0U == ((((IData)(vlTOPp->EmifToAurora_test__DOT__area_emiftoapb_apb_PENABLE) 
                             & (IData)(vlTOPp->EmifToAurora_test__DOT__area_emiftoapb_apb_PWRITE)) 
                            & ((IData)(vlTOPp->EmifToAurora_test__DOT__apb_decoder_io_output_PSEL) 
                               >> 1U)) ? 0xfU : 0U)))) {
        vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroraRxBlockRam__DOT___zz_bram_port0 
            = vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroraRxBlockRam__DOT__bram
            [(0xffU & vlTOPp->emif_emif_addr)];
    }
}

VL_INLINE_OPT void VEmifToAurora_test::_sequent__TOP__5(VEmifToAurora_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEmifToAurora_test::_sequent__TOP__5\n"); );
    VEmifToAurora_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->EmifToAurora_test__DOT__area_emiftoapb__DOT__penable_regNext 
        = vlTOPp->EmifToAurora_test__DOT__area_emiftoapb__DOT__penable;
    vlTOPp->EmifToAurora_test__DOT__resetCtrl_axiResetUnbuffered = 0U;
    if ((0x3fU != (IData)(vlTOPp->EmifToAurora_test__DOT__resetCtrl_axiResetCounter))) {
        vlTOPp->EmifToAurora_test__DOT__resetCtrl_axiResetUnbuffered = 1U;
    }
    vlTOPp->EmifToAurora_test__DOT__when_EmifToAurora_l38 
        = (0x3fU != (IData)(vlTOPp->EmifToAurora_test__DOT__resetCtrl_axiResetCounter));
}

VL_INLINE_OPT void VEmifToAurora_test::_sequent__TOP__6(VEmifToAurora_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEmifToAurora_test::_sequent__TOP__6\n"); );
    VEmifToAurora_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_mem_addr 
        = vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_mem_addr;
    vlTOPp->__Vdly__EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state 
        = vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state;
    vlTOPp->__Vdly__EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_mem_addrtemp 
        = vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_mem_addrtemp;
    vlTOPp->__Vdly__EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state 
        = vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state;
    if (vlTOPp->reset) {
        vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_mem_data = 0U;
    } else {
        if (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__when_Gtx_Rx_l106) {
            vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_mem_data 
                = vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7;
        } else {
            if (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__when_Gtx_Rx_l111) {
                vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_mem_data 
                    = vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7;
            } else {
                if (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__when_Gtx_Rx_l120) {
                    vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_mem_data 
                        = vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_mem_addr = 0U;
    } else {
        if (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__when_Gtx_Rx_l106) {
            vlTOPp->__Vdly__EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_mem_addr = 0U;
        } else {
            if (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__when_Gtx_Rx_l111) {
                vlTOPp->__Vdly__EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_mem_addr 
                    = ((0U == (0xffU & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                        >> 8U))) ? 1U
                        : (0xffU & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                    >> 8U)));
            } else {
                if (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__when_Gtx_Rx_l120) {
                    vlTOPp->__Vdly__EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_mem_addr 
                        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_mem_addr)));
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_status = 0U;
        vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_aurora_intrrupt = 0U;
        vlTOPp->__Vdly__EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state = 0U;
    } else {
        if ((4U & (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state))) {
            if ((2U & (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state))) {
                if ((1U & (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state))) {
                    if (((0U != (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state)) 
                         & (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_last_2))) {
                        if (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__when_Gtx_Rx_l89) {
                            vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_aurora_intrrupt = 1U;
                        }
                        vlTOPp->__Vdly__EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state = 0U;
                    }
                } else {
                    if ((0U != (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) {
                        vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_status 
                            = (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                               != vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7);
                        vlTOPp->__Vdly__EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state = 7U;
                    }
                }
            } else {
                if ((1U & (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state))) {
                    if ((0U != (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) {
                        if ((1U & (~ (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__when_Gtx_Rx_l70)))) {
                            vlTOPp->__Vdly__EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state = 6U;
                        }
                    }
                } else {
                    if ((0U != (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) {
                        vlTOPp->__Vdly__EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state = 5U;
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state))) {
                if ((1U & (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state))) {
                    if ((0U != (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) {
                        vlTOPp->__Vdly__EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state 
                            = ((1U == vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7)
                                ? 4U : 0U);
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state)))) {
                    if (((0U != (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state)) 
                         & (0xffbcU == vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7))) {
                        vlTOPp->__Vdly__EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state = 3U;
                    }
                    vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_aurora_intrrupt = 0U;
                }
            }
        }
    }
}

VL_INLINE_OPT void VEmifToAurora_test::_sequent__TOP__7(VEmifToAurora_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEmifToAurora_test::_sequent__TOP__7\n"); );
    VEmifToAurora_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->intrrupt = vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_aurora_intrrupt;
}

VL_INLINE_OPT void VEmifToAurora_test::_sequent__TOP__8(VEmifToAurora_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEmifToAurora_test::_sequent__TOP__8\n"); );
    VEmifToAurora_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_triger 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__when_AuroraTop_l46));
    vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_sendtriger 
        = ((~ (IData)(vlTOPp->reset)) & ((((IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_triger_temp) 
                                           | (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_triger_temp_delay_1)) 
                                          | (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_triger_temp_delay_2)) 
                                         | (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_triger_temp_delay_3)));
    if (vlTOPp->reset) {
        vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_ctrl = 0U;
    } else {
        if ((0x10004U == (0xfffffU & (vlTOPp->emif_emif_addr 
                                      << 2U)))) {
            if (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_ctrl_doWrite) {
                vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_ctrl 
                    = (1U & vlTOPp->EmifToAurora_test__DOT__area_emiftoapb_apb_PWDATA);
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_triger = 0U;
    } else {
        if ((0x10004U == (0xfffffU & (vlTOPp->emif_emif_addr 
                                      << 2U)))) {
            if (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_ctrl_doWrite) {
                vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_triger 
                    = (1U & (vlTOPp->EmifToAurora_test__DOT__area_emiftoapb_apb_PWDATA 
                             >> 4U));
            }
        }
    }
    vlTOPp->EmifToAurora_test__DOT__area_emiftoapb__DOT__penable 
        = (1U & ((~ (IData)(vlTOPp->reset)) & (((~ (IData)(vlTOPp->emif_emif_oe)) 
                                                | (~ (IData)(vlTOPp->emif_emif_we))) 
                                               & (vlTOPp->emif_emif_addr 
                                                  >> 0x17U))));
    vlTOPp->EmifToAurora_test__DOT__area_emiftoapb_apb_PENABLE 
        = (((IData)(vlTOPp->EmifToAurora_test__DOT__area_emiftoapb__DOT__penable) 
            & (~ (IData)(vlTOPp->EmifToAurora_test__DOT__area_emiftoapb__DOT__penable_regNext))) 
           & (IData)(vlTOPp->EmifToAurora_test__DOT__area_emiftoapb__DOT__penable));
}

VL_INLINE_OPT void VEmifToAurora_test::_sequent__TOP__9(VEmifToAurora_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEmifToAurora_test::_sequent__TOP__9\n"); );
    VEmifToAurora_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdly__EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_data_cnt;
    CData/*7:0*/ __Vdlyvdim0__EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroraRxBlockRam__DOT__bram__v0;
    CData/*0:0*/ __Vdlyvset__EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroraRxBlockRam__DOT__bram__v0;
    IData/*31:0*/ __Vdlyvval__EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroraRxBlockRam__DOT__bram__v0;
    // Body
    __Vdlyvset__EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroraRxBlockRam__DOT__bram__v0 = 0U;
    vlTOPp->__Vdly__EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_data_cnt 
        = vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_data_cnt;
    __Vdly__EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_data_cnt 
        = vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_data_cnt;
    if (((IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_mem_wren) 
         & (0U == (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_mem_wrwe)))) {
        vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroraRxBlockRam__DOT___zz_bram_port1 
            = vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroraRxBlockRam__DOT__bram
            [vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_mem_addr];
    }
    if (((IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_mem_wren) 
         & (0xfU == (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_mem_wrwe)))) {
        __Vdlyvval__EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroraRxBlockRam__DOT__bram__v0 
            = vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7;
        __Vdlyvset__EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroraRxBlockRam__DOT__bram__v0 = 1U;
        __Vdlyvdim0__EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroraRxBlockRam__DOT__bram__v0 
            = vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_mem_addr;
    }
    if ((4U & (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) {
        if ((1U & (~ ((IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) {
                if ((0U != (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) {
                    vlTOPp->__Vdly__EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_data_cnt 
                        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_data_cnt)));
                }
            } else {
                if ((0U != (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) {
                    vlTOPp->__Vdly__EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_data_cnt = 0U;
                }
            }
        }
    }
    vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
        = ((0U == (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state))
            ? 0xffffffffU : (((((3U == (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state)) 
                                | (4U == (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state))) 
                               | (5U == (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state))) 
                              & (0U != (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state)))
                              ? vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__crc32_2_crc_o
                              : vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data));
    if ((4U == (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state))) {
        if ((0U != (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) {
            __Vdly__EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_data_cnt = 0U;
        }
    } else {
        if ((5U == (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state))) {
            if ((0U != (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) {
                if (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__when_Gtx_Rx_l70) {
                    __Vdly__EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_data_cnt 
                        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_data_cnt)));
                }
            }
        }
    }
    if ((4U == (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state))) {
        if ((0U != (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) {
            vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_length 
                = (0xffU & vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7);
        }
    }
    vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
        = ((2U == (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))
            ? 0xffffffffU : (((((3U == (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state)) 
                                | (4U == (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) 
                               | (5U == (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) 
                              & (0U != (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state)))
                              ? vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__crc32_2_crc_o
                              : vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data));
    if (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_mem_rden) {
        vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroraTxBlockRam__DOT___zz_bram_port0 
            = vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroraTxBlockRam__DOT__bram
            [(0xffU & ((0U != (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))
                        ? (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_mem_addrtemp)
                        : ((IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_mem_addrtemp) 
                           - (IData)(1U))))];
    }
    if (__Vdlyvset__EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroraRxBlockRam__DOT__bram__v0) {
        vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroraRxBlockRam__DOT__bram[__Vdlyvdim0__EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroraRxBlockRam__DOT__bram__v0] 
            = __Vdlyvval__EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroraRxBlockRam__DOT__bram__v0;
    }
    vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_data_cnt 
        = __Vdly__EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_data_cnt;
    vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__when_Gtx_Rx_l70 
        = ((IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_data_cnt) 
           < (0xffU & ((IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_length) 
                       - (IData)(1U))));
}

VL_INLINE_OPT void VEmifToAurora_test::_combo__TOP__11(VEmifToAurora_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEmifToAurora_test::_combo__TOP__11\n"); );
    VEmifToAurora_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->EmifToAurora_test__DOT__area_emiftoapb_apb_PWRITE 
        = (((~ (IData)(vlTOPp->emif_emif_we)) & (IData)(vlTOPp->emif_emif_oe)) 
           & (vlTOPp->emif_emif_addr >> 0x17U));
    vlTOPp->EmifToAurora_test__DOT__apb_decoder_io_output_PSEL 
        = ((6U & (IData)(vlTOPp->EmifToAurora_test__DOT__apb_decoder_io_output_PSEL)) 
           | ((0x10c00U == (0xffc00U & (vlTOPp->emif_emif_addr 
                                        << 2U))) & 
              (~ (IData)(vlTOPp->emif_emif_cs))));
    vlTOPp->EmifToAurora_test__DOT__apb_decoder_io_output_PSEL 
        = ((5U & (IData)(vlTOPp->EmifToAurora_test__DOT__apb_decoder_io_output_PSEL)) 
           | (((0x10800U == (0xffc00U & (vlTOPp->emif_emif_addr 
                                         << 2U))) & 
               (~ (IData)(vlTOPp->emif_emif_cs))) << 1U));
    vlTOPp->EmifToAurora_test__DOT__apb_decoder_io_output_PSEL 
        = ((3U & (IData)(vlTOPp->EmifToAurora_test__DOT__apb_decoder_io_output_PSEL)) 
           | (((0x10000U == (0xfffe0U & (vlTOPp->emif_emif_addr 
                                         << 2U))) & 
               (~ (IData)(vlTOPp->emif_emif_cs))) << 2U));
    vlTOPp->emif_emif_data_write = ((0x800000U & vlTOPp->emif_emif_addr)
                                     ? (IData)(vlTOPp->EmifToAurora_test__DOT__area_emiftoapb__DOT___zz_emif_emif_data_write)
                                     : (IData)(vlTOPp->EmifToAurora_test__DOT__area_emiftoapb__DOT___zz_emif_emif_data_write_1));
    vlTOPp->EmifToAurora_test__DOT__apb_decoder__DOT__when_Apb3Decoder_l84 
        = ((~ (IData)(vlTOPp->emif_emif_cs)) & (0U 
                                                == (IData)(vlTOPp->EmifToAurora_test__DOT__apb_decoder_io_output_PSEL)));
    vlTOPp->EmifToAurora_test__DOT__area_apb3toTxBram__DOT__when_Apb3ToBram_l41 
        = (((IData)(vlTOPp->EmifToAurora_test__DOT__area_emiftoapb_apb_PENABLE) 
            & (IData)(vlTOPp->EmifToAurora_test__DOT__area_emiftoapb_apb_PWRITE)) 
           & (IData)(vlTOPp->EmifToAurora_test__DOT__apb_decoder_io_output_PSEL));
    vlTOPp->EmifToAurora_test__DOT__apb_decoder_io_input_PREADY = 1U;
    if (vlTOPp->EmifToAurora_test__DOT__apb_decoder__DOT__when_Apb3Decoder_l84) {
        vlTOPp->EmifToAurora_test__DOT__apb_decoder_io_input_PREADY = 1U;
    }
    vlTOPp->EmifToAurora_test__DOT__apb_decoder_io_input_PSLVERROR = 0U;
    if (vlTOPp->EmifToAurora_test__DOT__apb_decoder__DOT__when_Apb3Decoder_l84) {
        vlTOPp->EmifToAurora_test__DOT__apb_decoder_io_input_PSLVERROR = 1U;
    }
}

VL_INLINE_OPT void VEmifToAurora_test::_sequent__TOP__12(VEmifToAurora_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEmifToAurora_test::_sequent__TOP__12\n"); );
    VEmifToAurora_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->__Vdlyvset__EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroraTxBlockRam__DOT__bram__v0) {
        vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroraTxBlockRam__DOT__bram[vlTOPp->__Vdlyvdim0__EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroraTxBlockRam__DOT__bram__v0] 
            = vlTOPp->__Vdlyvval__EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroraTxBlockRam__DOT__bram__v0;
    }
    vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_triger_temp_delay_1 
        = vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_triger_temp;
    vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_triger_temp_delay_2 
        = vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_triger_temp_delay_1_1;
    vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_triger_temp_delay_3 
        = vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_triger_temp_delay_2_1;
    vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_triger_temp_delay_1_1 
        = vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_triger_temp;
    vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_triger_temp_delay_2_1 
        = vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_triger_temp_delay_1_2;
    vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_triger_temp_delay_1_2 
        = vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_triger_temp;
}

VL_INLINE_OPT void VEmifToAurora_test::_sequent__TOP__13(VEmifToAurora_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEmifToAurora_test::_sequent__TOP__13\n"); );
    VEmifToAurora_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_mem_addr 
        = vlTOPp->__Vdly__EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_mem_addr;
    vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state 
        = vlTOPp->__Vdly__EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state;
    vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_mem_wren 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__when_Gtx_Rx_l106) 
                                         | ((IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__when_Gtx_Rx_l111) 
                                            | (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__when_Gtx_Rx_l120))));
    vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_mem_wrwe 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__when_Gtx_Rx_l106)
                                           ? 0xfU : 
                                          ((IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__when_Gtx_Rx_l111)
                                            ? 0xfU : 
                                           ((IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__when_Gtx_Rx_l120)
                                             ? 0xfU
                                             : 0U))));
    vlTOPp->__Vtableidx1 = vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state;
    vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state_string 
        = vlTOPp->__Vtable1_EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state_string
        [vlTOPp->__Vtableidx1];
    if (vlTOPp->reset) {
        vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_last = 0U;
        vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_mem_rden = 0U;
        vlTOPp->__Vdly__EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_mem_addrtemp = 0U;
        vlTOPp->__Vdly__EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state = 0U;
    } else {
        if ((4U & (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) {
            if ((2U & (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) {
                if ((1U & (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) {
                    if (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore_axiw_valid) {
                        vlTOPp->__Vdly__EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state = 0U;
                    }
                } else {
                    if (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore_axiw_valid) {
                        vlTOPp->__Vdly__EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state = 7U;
                    }
                }
            } else {
                if ((1U & (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) {
                    if (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore_axiw_valid) {
                        if (((IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_data_cnt) 
                             < (0xffU & ((IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_length) 
                                         - (IData)(1U))))) {
                            vlTOPp->__Vdly__EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_mem_addrtemp 
                                = (0xffU & ((IData)(1U) 
                                            + (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_mem_addrtemp)));
                        } else {
                            vlTOPp->__Vdly__EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state = 6U;
                        }
                    }
                } else {
                    if (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore_axiw_valid) {
                        vlTOPp->__Vdly__EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_mem_addrtemp 
                            = (0xffU & ((IData)(1U) 
                                        + (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_mem_addrtemp)));
                        vlTOPp->__Vdly__EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state = 5U;
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) {
                if ((1U & (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) {
                    if (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore_axiw_valid) {
                        vlTOPp->__Vdly__EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state = 4U;
                    }
                } else {
                    if (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore_axiw_valid) {
                        vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_mem_rden = 1U;
                        vlTOPp->__Vdly__EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_mem_addrtemp 
                            = ((0U == (0xffU & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txhead 
                                                >> 8U)))
                                ? 1U : (0xffU & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txhead 
                                                 >> 8U)));
                        vlTOPp->__Vdly__EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state = 3U;
                    }
                }
            } else {
                if ((1U & (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) {
                    vlTOPp->__Vdly__EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state = 2U;
                } else {
                    vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_last = 0U;
                    if (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_senddatatriger) {
                        vlTOPp->__Vdly__EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state = 2U;
                    }
                }
            }
        }
    }
    vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_mem_addrtemp 
        = vlTOPp->__Vdly__EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_mem_addrtemp;
}

VL_INLINE_OPT void VEmifToAurora_test::_sequent__TOP__15(VEmifToAurora_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEmifToAurora_test::_sequent__TOP__15\n"); );
    VEmifToAurora_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_triger_temp 
        = ((IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_triger) 
           & (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_triger));
    vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_senddatatriger 
        = ((~ (IData)(vlTOPp->reset)) & ((((IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_ctrl_temp) 
                                           | (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_ctrl_temp_delay_1)) 
                                          | (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_ctrl_temp_delay_2)) 
                                         | (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_ctrl_temp_delay_3)));
}

VL_INLINE_OPT void VEmifToAurora_test::_sequent__TOP__16(VEmifToAurora_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEmifToAurora_test::_sequent__TOP__16\n"); );
    VEmifToAurora_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_data_cnt 
        = vlTOPp->__Vdly__EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_data_cnt;
    if ((1U & (~ ((IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) {
            if ((1U & (~ (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state)))) {
                if ((0U != (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) {
                    vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_length 
                        = (0xffU & vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txhead);
                }
            }
        }
    }
    vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txhead 
        = vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_headtemp;
}

VL_INLINE_OPT void VEmifToAurora_test::_sequent__TOP__17(VEmifToAurora_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEmifToAurora_test::_sequent__TOP__17\n"); );
    VEmifToAurora_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_ctrl_temp_delay_3 
        = vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_ctrl_temp_delay_2;
    if ((0x1000cU == (0xfffffU & (vlTOPp->emif_emif_addr 
                                  << 2U)))) {
        if (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_ctrl_doWrite) {
            vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_headtemp 
                = vlTOPp->EmifToAurora_test__DOT__area_emiftoapb_apb_PWDATA;
        }
    }
    vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_ctrl_temp_delay_2 
        = vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_ctrl_temp_delay_1;
    vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_ctrl_temp_delay_1 
        = vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_ctrl_temp;
}

VL_INLINE_OPT void VEmifToAurora_test::_sequent__TOP__18(VEmifToAurora_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEmifToAurora_test::_sequent__TOP__18\n"); );
    VEmifToAurora_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state 
        = vlTOPp->__Vdly__EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state;
    vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore_axiw_valid 
        = (0U != (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state));
    vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__when_Gtx_Rx_l106 
        = ((3U == (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state)) 
           & (0U != (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state)));
    vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__when_Gtx_Rx_l111 
        = ((4U == (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state)) 
           & (0U != (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state)));
    vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__when_Gtx_Rx_l120 
        = (((5U == (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state)) 
            & (0U != (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) 
           & ((IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_data_cnt) 
              < (0xffU & ((IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_length) 
                          - (IData)(1U)))));
    vlTOPp->__Vtableidx2 = vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state;
    vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state_string 
        = vlTOPp->__Vtable2_EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state_string
        [vlTOPp->__Vtableidx2];
    vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__when_Gtx_Tx_l140 
        = ((7U == (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state)) 
           & (0U != (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state)));
    vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_1 = 0U;
    if ((2U == (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) {
        vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_1 = 0xffbcU;
    }
    vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_last_1 
        = vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_last;
    if (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__when_Gtx_Tx_l140) {
        vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_last_1 = 1U;
    }
    vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_2 
        = vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_1;
    if ((2U != (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) {
        if ((3U == (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) {
            vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_2 = 1U;
        }
    }
    vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_last_2 
        = vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_last_1;
    if ((1U & (~ (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__when_Gtx_Tx_l140)))) {
        vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_last_2 = 0U;
    }
}

VL_INLINE_OPT void VEmifToAurora_test::_combo__TOP__19(VEmifToAurora_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEmifToAurora_test::_combo__TOP__19\n"); );
    VEmifToAurora_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->EmifToAurora_test__DOT__area_emiftoapb_apb_PWDATA 
        = (((IData)(vlTOPp->emif_emif_data_read) << 0x10U) 
           | (IData)(vlTOPp->EmifToAurora_test__DOT__area_emiftoapb__DOT__emifdatatemp));
    vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_ctrl_doWrite 
        = ((((IData)(vlTOPp->EmifToAurora_test__DOT__apb_decoder_io_output_PSEL) 
             >> 2U) & (IData)(vlTOPp->EmifToAurora_test__DOT__area_emiftoapb_apb_PENABLE)) 
           & (IData)(vlTOPp->EmifToAurora_test__DOT__area_emiftoapb_apb_PWRITE));
    vlTOPp->EmifToAurora_test__DOT__area_auroratop_apb_PRDATA = 0U;
    if ((0x10004U == (0xfffffU & (vlTOPp->emif_emif_addr 
                                  << 2U)))) {
        vlTOPp->EmifToAurora_test__DOT__area_auroratop_apb_PRDATA 
            = ((0xfffffffeU & vlTOPp->EmifToAurora_test__DOT__area_auroratop_apb_PRDATA) 
               | (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_ctrl));
        vlTOPp->EmifToAurora_test__DOT__area_auroratop_apb_PRDATA 
            = ((0xffffffefU & vlTOPp->EmifToAurora_test__DOT__area_auroratop_apb_PRDATA) 
               | ((IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_triger) 
                  << 4U));
    } else {
        if ((0x1000cU == (0xfffffU & (vlTOPp->emif_emif_addr 
                                      << 2U)))) {
            vlTOPp->EmifToAurora_test__DOT__area_auroratop_apb_PRDATA 
                = vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_headtemp;
        }
    }
    vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__when_AuroraTop_l46 = 0U;
    if ((0x10004U == (0xfffffU & (vlTOPp->emif_emif_addr 
                                  << 2U)))) {
        if (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_ctrl_doWrite) {
            vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__when_AuroraTop_l46 = 1U;
        }
    }
    vlTOPp->EmifToAurora_test__DOT__apb3Router_1__DOT___zz_io_input_PRDATA 
        = ((0U == (IData)(vlTOPp->EmifToAurora_test__DOT__apb3Router_1__DOT__selIndex))
            ? vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroraTxBlockRam__DOT___zz_bram_port1
            : ((1U == (IData)(vlTOPp->EmifToAurora_test__DOT__apb3Router_1__DOT__selIndex))
                ? vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroraRxBlockRam__DOT___zz_bram_port0
                : vlTOPp->EmifToAurora_test__DOT__area_auroratop_apb_PRDATA));
}

VL_INLINE_OPT void VEmifToAurora_test::_sequent__TOP__20(VEmifToAurora_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEmifToAurora_test::_sequent__TOP__20\n"); );
    VEmifToAurora_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_ctrl_temp 
        = ((IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_ctrl) 
           & (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_triger));
}

VL_INLINE_OPT void VEmifToAurora_test::_multiclk__TOP__21(VEmifToAurora_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEmifToAurora_test::_multiclk__TOP__21\n"); );
    VEmifToAurora_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_3 
        = vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_2;
    if ((2U != (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) {
        if ((3U != (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) {
            if ((4U == (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) {
                vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_3 
                    = vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_headtemp;
            }
        }
    }
    vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_4 
        = vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_3;
    if ((2U != (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) {
        if ((3U != (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) {
            if ((4U != (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) {
                if ((5U == (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) {
                    vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_4 
                        = vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroraTxBlockRam__DOT___zz_bram_port0;
                }
            }
        }
    }
    vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_5 
        = vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_4;
    if ((2U != (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) {
        if ((3U != (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) {
            if ((4U != (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) {
                if ((5U != (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) {
                    if ((6U == (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) {
                        vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_5 
                            = vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data;
                    }
                }
            }
        }
    }
    vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_6 
        = vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_5;
    if ((2U != (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) {
        if ((3U != (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) {
            if ((4U != (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) {
                if ((5U != (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) {
                    if ((6U != (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) {
                        if ((7U == (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) {
                            vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_6 = 0xffbdU;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
        = vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_6;
    if ((2U != (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) {
        if ((3U != (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) {
            if ((4U != (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) {
                if ((5U != (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) {
                    if ((6U != (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) {
                        if ((7U != (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) {
                            vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 = 0U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__when_Gtx_Rx_l89 
        = ((~ (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_status)) 
           & (0xffbdU == vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7));
    vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__crc32_2_crc_o 
        = ((0xfffffffeU & vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__crc32_2_crc_o) 
           | (1U & ((((((((((((((((((((((((((vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                             >> 0x1fU) 
                                            ^ (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                               >> 0x1eU)) 
                                           ^ (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                              >> 0x1dU)) 
                                          ^ (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                             >> 0x1cU)) 
                                         ^ (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                            >> 0x1aU)) 
                                        ^ (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                           >> 0x19U)) 
                                       ^ (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                          >> 0x18U)) 
                                      ^ (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                         >> 0x10U)) 
                                     ^ (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                        >> 0xcU)) ^ 
                                    (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                     >> 0xaU)) ^ (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                  >> 9U)) 
                                  ^ (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                     >> 6U)) ^ vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7) 
                                ^ vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data) 
                               ^ (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                  >> 6U)) ^ (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                             >> 9U)) 
                             ^ (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                >> 0xaU)) ^ (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                             >> 0xcU)) 
                           ^ (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                              >> 0x10U)) ^ (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                            >> 0x18U)) 
                         ^ (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                            >> 0x19U)) ^ (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                          >> 0x1aU)) 
                       ^ (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                          >> 0x1cU)) ^ (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                        >> 0x1dU)) 
                     ^ (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                        >> 0x1eU)) ^ (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                      >> 0x1fU))));
    vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__crc32_2_crc_o 
        = ((0xfffffffdU & vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__crc32_2_crc_o) 
           | (2U & ((((((((((((((((((((((((((0x1eU 
                                             & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                >> 0x1bU)) 
                                            ^ (0x3eU 
                                               & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                  >> 0x1aU))) 
                                           ^ (0x1feU 
                                              & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                 >> 0x17U))) 
                                          ^ (0xfffeU 
                                             & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                >> 0x10U))) 
                                         ^ (0x1fffeU 
                                            & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                               >> 0xfU))) 
                                        ^ (0xffffeU 
                                           & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                              >> 0xcU))) 
                                       ^ (0x1ffffeU 
                                          & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                             >> 0xbU))) 
                                      ^ (0x3ffffeU 
                                         & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                            >> 0xaU))) 
                                     ^ (0xfffffeU & 
                                        (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                         >> 8U))) ^ 
                                    (0x3fffffeU & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                   >> 6U))) 
                                   ^ (0x7fffffeU & 
                                      (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                       >> 5U))) ^ (0xfffffffeU 
                                                   & vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7)) 
                                 ^ (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                    << 1U)) ^ (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                               << 1U)) 
                               ^ (0xfffffffeU & vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data)) 
                              ^ (0x7fffffeU & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                               >> 5U))) 
                             ^ (0x3fffffeU & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                              >> 6U))) 
                            ^ (0xfffffeU & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                            >> 8U))) 
                           ^ (0x3ffffeU & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                           >> 0xaU))) 
                          ^ (0x1ffffeU & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                          >> 0xbU))) 
                         ^ (0xffffeU & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                        >> 0xcU))) 
                        ^ (0x1fffeU & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                       >> 0xfU))) ^ 
                       (0xfffeU & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                   >> 0x10U))) ^ (0x1feU 
                                                  & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                     >> 0x17U))) 
                     ^ (0x3eU & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                 >> 0x1aU))) ^ (0x1eU 
                                                & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                   >> 0x1bU)))));
    vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__crc32_2_crc_o 
        = ((0xfffffffbU & vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__crc32_2_crc_o) 
           | (4U & ((((((((((((((((((((((((((((((((4U 
                                                   & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      >> 0x1dU)) 
                                                  ^ 
                                                  (0xcU 
                                                   & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      >> 0x1cU))) 
                                                 ^ 
                                                 (0xfcU 
                                                  & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     >> 0x18U))) 
                                                ^ (0x3fcU 
                                                   & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      >> 0x16U))) 
                                               ^ (0xfffcU 
                                                  & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     >> 0x10U))) 
                                              ^ (0x1fffcU 
                                                 & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                    >> 0xfU))) 
                                             ^ (0x3fffcU 
                                                & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                   >> 0xeU))) 
                                            ^ (0xffffcU 
                                               & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                  >> 0xcU))) 
                                           ^ (0x1ffffcU 
                                              & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                 >> 0xbU))) 
                                          ^ (0x1fffffcU 
                                             & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                >> 7U))) 
                                         ^ (0x3fffffcU 
                                            & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                               >> 6U))) 
                                        ^ (0x7fffffcU 
                                           & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                              >> 5U))) 
                                       ^ (0xffffffcU 
                                          & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                             >> 4U))) 
                                      ^ (0xfffffffcU 
                                         & vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7)) 
                                     ^ (0xfffffffcU 
                                        & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                           << 1U))) 
                                    ^ (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                       << 2U)) ^ (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                  << 2U)) 
                                  ^ (0xfffffffcU & 
                                     (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                      << 1U))) ^ (0xfffffffcU 
                                                  & vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data)) 
                                ^ (0xffffffcU & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                 >> 4U))) 
                               ^ (0x7fffffcU & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                >> 5U))) 
                              ^ (0x3fffffcU & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                               >> 6U))) 
                             ^ (0x1fffffcU & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                              >> 7U))) 
                            ^ (0x1ffffcU & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                            >> 0xbU))) 
                           ^ (0xffffcU & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                          >> 0xcU))) 
                          ^ (0x3fffcU & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                         >> 0xeU))) 
                         ^ (0x1fffcU & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                        >> 0xfU))) 
                        ^ (0xfffcU & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                      >> 0x10U))) ^ 
                       (0x3fcU & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                  >> 0x16U))) ^ (0xfcU 
                                                 & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                    >> 0x18U))) 
                     ^ (0xcU & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                >> 0x1cU))) ^ (4U & 
                                               (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                >> 0x1dU)))));
    vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__crc32_2_crc_o 
        = ((0xfffffff7U & vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__crc32_2_crc_o) 
           | (8U & ((((((((((((((((((((((((((((((8U 
                                                 & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                    >> 0x1cU)) 
                                                ^ (0xf8U 
                                                   & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      >> 0x18U))) 
                                               ^ (0x3f8U 
                                                  & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     >> 0x16U))) 
                                              ^ (0xfff8U 
                                                 & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                    >> 0x10U))) 
                                             ^ (0x1fff8U 
                                                & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                   >> 0xfU))) 
                                            ^ (0x3fff8U 
                                               & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                  >> 0xeU))) 
                                           ^ (0xffff8U 
                                              & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                 >> 0xcU))) 
                                          ^ (0x1ffff8U 
                                             & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                >> 0xbU))) 
                                         ^ (0x1fffff8U 
                                            & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                               >> 7U))) 
                                        ^ (0x3fffff8U 
                                           & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                              >> 6U))) 
                                       ^ (0x7fffff8U 
                                          & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                             >> 5U))) 
                                      ^ (0xffffff8U 
                                         & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                            >> 4U))) 
                                     ^ (0xfffffff8U 
                                        & vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7)) 
                                    ^ (0xfffffff8U 
                                       & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                          << 1U))) 
                                   ^ (0xfffffff8U & 
                                      (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                       << 2U))) ^ (0xfffffff8U 
                                                   & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                      << 2U))) 
                                 ^ (0xfffffff8U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                   << 1U))) 
                                ^ (0xfffffff8U & vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data)) 
                               ^ (0xffffff8U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                >> 4U))) 
                              ^ (0x7fffff8U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                               >> 5U))) 
                             ^ (0x3fffff8U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                              >> 6U))) 
                            ^ (0x1fffff8U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                             >> 7U))) 
                           ^ (0x1ffff8U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                           >> 0xbU))) 
                          ^ (0xffff8U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                         >> 0xcU))) 
                         ^ (0x3fff8U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                        >> 0xeU))) 
                        ^ (0x1fff8U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                       >> 0xfU))) ^ 
                       (0xfff8U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                   >> 0x10U))) ^ (0x3f8U 
                                                  & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                     >> 0x16U))) 
                     ^ (0xf8U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                 >> 0x18U))) ^ (8U 
                                                & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                   >> 0x1cU)))));
    vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__crc32_2_crc_o 
        = ((0xffffffefU & vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__crc32_2_crc_o) 
           | (0x10U & (((((((((((((((((((((((((((((
                                                   (((((0x10U 
                                                        & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                           >> 0x1bU)) 
                                                       ^ 
                                                       (0x30U 
                                                        & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                           >> 0x1aU))) 
                                                      ^ 
                                                      (0x70U 
                                                       & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                          >> 0x19U))) 
                                                     ^ 
                                                     (0x7f0U 
                                                      & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                         >> 0x15U))) 
                                                    ^ 
                                                    (0xff0U 
                                                     & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                        >> 0x14U))) 
                                                   ^ 
                                                   (0xfff0U 
                                                    & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                       >> 0x10U))) 
                                                  ^ 
                                                  (0x1fff0U 
                                                   & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      >> 0xfU))) 
                                                 ^ 
                                                 (0x3fff0U 
                                                  & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     >> 0xeU))) 
                                                ^ (0x1ffff0U 
                                                   & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      >> 0xbU))) 
                                               ^ (0xfffff0U 
                                                  & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     >> 8U))) 
                                              ^ (0x1fffff0U 
                                                 & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                    >> 7U))) 
                                             ^ (0xffffff0U 
                                                & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                   >> 4U))) 
                                            ^ (0x3ffffff0U 
                                               & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                  >> 2U))) 
                                           ^ (0xfffffff0U 
                                              & vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7)) 
                                          ^ (0xfffffff0U 
                                             & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                << 1U))) 
                                         ^ (0xfffffff0U 
                                            & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                               << 2U))) 
                                        ^ (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                           << 4U)) 
                                       ^ (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                          << 4U)) ^ 
                                      (0xfffffff0U 
                                       & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                          << 2U))) 
                                     ^ (0xfffffff0U 
                                        & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                           << 1U))) 
                                    ^ (0xfffffff0U 
                                       & vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data)) 
                                   ^ (0x3ffffff0U & 
                                      (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                       >> 2U))) ^ (0xffffff0U 
                                                   & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                      >> 4U))) 
                                 ^ (0x1fffff0U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                  >> 7U))) 
                                ^ (0xfffff0U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                >> 8U))) 
                               ^ (0x1ffff0U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                               >> 0xbU))) 
                              ^ (0x3fff0U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                             >> 0xeU))) 
                             ^ (0x1fff0U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                            >> 0xfU))) 
                            ^ (0xfff0U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                          >> 0x10U))) 
                           ^ (0xff0U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                        >> 0x14U))) 
                          ^ (0x7f0U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                       >> 0x15U))) 
                         ^ (0x70U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                     >> 0x19U))) ^ 
                        (0x30U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                  >> 0x1aU))) ^ (0x10U 
                                                 & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                    >> 0x1bU)))));
    vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__crc32_2_crc_o 
        = ((0xffffffdfU & vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__crc32_2_crc_o) 
           | (0x20U & (((((((((((((((((((((((((((((
                                                   (0xe0U 
                                                    & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                       >> 0x18U)) 
                                                   ^ 
                                                   (0x1e0U 
                                                    & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                       >> 0x17U))) 
                                                  ^ 
                                                  (0x1fe0U 
                                                   & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      >> 0x13U))) 
                                                 ^ 
                                                 (0xffe0U 
                                                  & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     >> 0x10U))) 
                                                ^ (0x1ffe0U 
                                                   & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      >> 0xfU))) 
                                               ^ (0x3ffe0U 
                                                  & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     >> 0xeU))) 
                                              ^ (0xffffe0U 
                                                 & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                    >> 8U))) 
                                             ^ (0x7ffffe0U 
                                                & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                   >> 5U))) 
                                            ^ (0x3fffffe0U 
                                               & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                  >> 2U))) 
                                           ^ (0x7fffffe0U 
                                              & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                 >> 1U))) 
                                          ^ (0xffffffe0U 
                                             & vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7)) 
                                         ^ (0xffffffe0U 
                                            & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                               << 1U))) 
                                        ^ (0xffffffe0U 
                                           & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                              << 2U))) 
                                       ^ (0xffffffe0U 
                                          & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                             << 4U))) 
                                      ^ (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                         << 5U)) ^ 
                                     (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                      << 5U)) ^ (0xffffffe0U 
                                                 & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                    << 4U))) 
                                   ^ (0xffffffe0U & 
                                      (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                       << 2U))) ^ (0xffffffe0U 
                                                   & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                      << 1U))) 
                                 ^ (0xffffffe0U & vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data)) 
                                ^ (0x7fffffe0U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                  >> 1U))) 
                               ^ (0x3fffffe0U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                 >> 2U))) 
                              ^ (0x7ffffe0U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                               >> 5U))) 
                             ^ (0xffffe0U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                             >> 8U))) 
                            ^ (0x3ffe0U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                           >> 0xeU))) 
                           ^ (0x1ffe0U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                          >> 0xfU))) 
                          ^ (0xffe0U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                        >> 0x10U))) 
                         ^ (0x1fe0U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                       >> 0x13U))) 
                        ^ (0x1e0U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                     >> 0x17U))) ^ 
                       (0xe0U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                 >> 0x18U)))));
    vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__crc32_2_crc_o 
        = ((0xffffffbfU & vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__crc32_2_crc_o) 
           | (0x40U & (((((((((((((((((((((((((((((
                                                   (0xc0U 
                                                    & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                       >> 0x18U)) 
                                                   ^ 
                                                   (0x1c0U 
                                                    & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                       >> 0x17U))) 
                                                  ^ 
                                                  (0x1fc0U 
                                                   & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      >> 0x13U))) 
                                                 ^ 
                                                 (0xffc0U 
                                                  & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     >> 0x10U))) 
                                                ^ (0x1ffc0U 
                                                   & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      >> 0xfU))) 
                                               ^ (0x3ffc0U 
                                                  & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     >> 0xeU))) 
                                              ^ (0xffffc0U 
                                                 & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                    >> 8U))) 
                                             ^ (0x7ffffc0U 
                                                & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                   >> 5U))) 
                                            ^ (0x3fffffc0U 
                                               & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                  >> 2U))) 
                                           ^ (0x7fffffc0U 
                                              & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                 >> 1U))) 
                                          ^ (0xffffffc0U 
                                             & vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7)) 
                                         ^ (0xffffffc0U 
                                            & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                               << 1U))) 
                                        ^ (0xffffffc0U 
                                           & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                              << 2U))) 
                                       ^ (0xffffffc0U 
                                          & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                             << 4U))) 
                                      ^ (0xffffffc0U 
                                         & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                            << 5U))) 
                                     ^ (0xffffffc0U 
                                        & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                           << 5U))) 
                                    ^ (0xffffffc0U 
                                       & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                          << 4U))) 
                                   ^ (0xffffffc0U & 
                                      (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                       << 2U))) ^ (0xffffffc0U 
                                                   & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                      << 1U))) 
                                 ^ (0xffffffc0U & vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data)) 
                                ^ (0x7fffffc0U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                  >> 1U))) 
                               ^ (0x3fffffc0U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                 >> 2U))) 
                              ^ (0x7ffffc0U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                               >> 5U))) 
                             ^ (0xffffc0U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                             >> 8U))) 
                            ^ (0x3ffc0U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                           >> 0xeU))) 
                           ^ (0x1ffc0U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                          >> 0xfU))) 
                          ^ (0xffc0U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                        >> 0x10U))) 
                         ^ (0x1fc0U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                       >> 0x13U))) 
                        ^ (0x1c0U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                     >> 0x17U))) ^ 
                       (0xc0U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                 >> 0x18U)))));
    vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__crc32_2_crc_o 
        = ((0xffffff7fU & vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__crc32_2_crc_o) 
           | (0x80U & (((((((((((((((((((((((((((((
                                                   (((0x380U 
                                                      & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                         >> 0x16U)) 
                                                     ^ 
                                                     (0x780U 
                                                      & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                         >> 0x15U))) 
                                                    ^ 
                                                    (0x3f80U 
                                                     & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                        >> 0x12U))) 
                                                   ^ 
                                                   (0x7f80U 
                                                    & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                       >> 0x11U))) 
                                                  ^ 
                                                  (0xff80U 
                                                   & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      >> 0x10U))) 
                                                 ^ 
                                                 (0x1ff80U 
                                                  & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     >> 0xfU))) 
                                                ^ (0x3ff80U 
                                                   & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      >> 0xeU))) 
                                               ^ (0x7fff80U 
                                                  & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     >> 9U))) 
                                              ^ (0xffff80U 
                                                 & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                    >> 8U))) 
                                             ^ (0x1fffff80U 
                                                & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                   >> 3U))) 
                                            ^ (0x7fffff80U 
                                               & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                  >> 1U))) 
                                           ^ (0xffffff80U 
                                              & vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7)) 
                                          ^ (0xffffff80U 
                                             & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                << 2U))) 
                                         ^ (0xffffff80U 
                                            & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                               << 4U))) 
                                        ^ (0xffffff80U 
                                           & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                              << 5U))) 
                                       ^ (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                          << 7U)) ^ 
                                      (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                       << 7U)) ^ (0xffffff80U 
                                                  & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                     << 5U))) 
                                    ^ (0xffffff80U 
                                       & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                          << 4U))) 
                                   ^ (0xffffff80U & 
                                      (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                       << 2U))) ^ (0xffffff80U 
                                                   & vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data)) 
                                 ^ (0x7fffff80U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                   >> 1U))) 
                                ^ (0x1fffff80U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                  >> 3U))) 
                               ^ (0xffff80U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                               >> 8U))) 
                              ^ (0x7fff80U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                              >> 9U))) 
                             ^ (0x3ff80U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                            >> 0xeU))) 
                            ^ (0x1ff80U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                           >> 0xfU))) 
                           ^ (0xff80U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                         >> 0x10U))) 
                          ^ (0x7f80U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                        >> 0x11U))) 
                         ^ (0x3f80U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                       >> 0x12U))) 
                        ^ (0x780U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                     >> 0x15U))) ^ 
                       (0x380U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                  >> 0x16U)))));
    vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__crc32_2_crc_o 
        = ((0xfffffeffU & vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__crc32_2_crc_o) 
           | (0x100U & ((((((((((((((((((((((((((0x100U 
                                                 & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                    >> 0x17U)) 
                                                ^ (0xf00U 
                                                   & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      >> 0x14U))) 
                                               ^ (0x1ff00U 
                                                  & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     >> 0xfU))) 
                                              ^ (0x3ff00U 
                                                 & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                    >> 0xeU))) 
                                             ^ (0x7fff00U 
                                                & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                   >> 9U))) 
                                            ^ (0xfffff00U 
                                               & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                  >> 4U))) 
                                           ^ (0x1fffff00U 
                                              & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                 >> 3U))) 
                                          ^ (0x3fffff00U 
                                             & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                >> 2U))) 
                                         ^ (0xffffff00U 
                                            & vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7)) 
                                        ^ (0xffffff00U 
                                           & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                              << 4U))) 
                                       ^ (0xffffff00U 
                                          & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                             << 5U))) 
                                      ^ (0xffffff00U 
                                         & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                            << 7U))) 
                                     ^ (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                        << 8U)) ^ (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                   << 8U)) 
                                   ^ (0xffffff00U & 
                                      (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                       << 7U))) ^ (0xffffff00U 
                                                   & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                      << 5U))) 
                                 ^ (0xffffff00U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                   << 4U))) 
                                ^ (0xffffff00U & vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data)) 
                               ^ (0x3fffff00U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                 >> 2U))) 
                              ^ (0x1fffff00U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                >> 3U))) 
                             ^ (0xfffff00U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                              >> 4U))) 
                            ^ (0x7fff00U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                            >> 9U))) 
                           ^ (0x3ff00U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                          >> 0xeU))) 
                          ^ (0x1ff00U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                         >> 0xfU))) 
                         ^ (0xf00U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                      >> 0x14U))) ^ 
                        (0x100U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                   >> 0x17U)))));
    vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__crc32_2_crc_o 
        = ((0xfffffdffU & vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__crc32_2_crc_o) 
           | (0x200U & ((((((((((((((((((((((((0xe00U 
                                               & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                  >> 0x14U)) 
                                              ^ (0x1fe00U 
                                                 & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                    >> 0xfU))) 
                                             ^ (0x3fe00U 
                                                & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                   >> 0xeU))) 
                                            ^ (0x7ffe00U 
                                               & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                  >> 9U))) 
                                           ^ (0xffffe00U 
                                              & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                 >> 4U))) 
                                          ^ (0x1ffffe00U 
                                             & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                >> 3U))) 
                                         ^ (0x3ffffe00U 
                                            & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                               >> 2U))) 
                                        ^ (0xfffffe00U 
                                           & vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7)) 
                                       ^ (0xfffffe00U 
                                          & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                             << 4U))) 
                                      ^ (0xfffffe00U 
                                         & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                            << 5U))) 
                                     ^ (0xfffffe00U 
                                        & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                           << 7U))) 
                                    ^ (0xfffffe00U 
                                       & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                          << 8U))) 
                                   ^ (0xfffffe00U & 
                                      (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                       << 8U))) ^ (0xfffffe00U 
                                                   & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                      << 7U))) 
                                 ^ (0xfffffe00U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                   << 5U))) 
                                ^ (0xfffffe00U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                  << 4U))) 
                               ^ (0xfffffe00U & vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data)) 
                              ^ (0x3ffffe00U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                >> 2U))) 
                             ^ (0x1ffffe00U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                               >> 3U))) 
                            ^ (0xffffe00U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                             >> 4U))) 
                           ^ (0x7ffe00U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                           >> 9U))) 
                          ^ (0x3fe00U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                         >> 0xeU))) 
                         ^ (0x1fe00U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                        >> 0xfU))) 
                        ^ (0xe00U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                     >> 0x14U)))));
    vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__crc32_2_crc_o 
        = ((0xfffffbffU & vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__crc32_2_crc_o) 
           | (0x400U & ((((((((((((((((((((((((((0x400U 
                                                 & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                    >> 0x15U)) 
                                                ^ (0x1c00U 
                                                   & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      >> 0x13U))) 
                                               ^ (0x3c00U 
                                                  & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     >> 0x12U))) 
                                              ^ (0xfc00U 
                                                 & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                    >> 0x10U))) 
                                             ^ (0x7ffc00U 
                                                & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                   >> 9U))) 
                                            ^ (0x3fffc00U 
                                               & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                  >> 6U))) 
                                           ^ (0xffffc00U 
                                              & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                 >> 4U))) 
                                          ^ (0x1ffffc00U 
                                             & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                >> 3U))) 
                                         ^ (0xfffffc00U 
                                            & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                               << 1U))) 
                                        ^ (0xfffffc00U 
                                           & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                              << 5U))) 
                                       ^ (0xfffffc00U 
                                          & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                             << 7U))) 
                                      ^ (0xfffffc00U 
                                         & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                            << 8U))) 
                                     ^ (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                        << 0xaU)) ^ 
                                    (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                     << 0xaU)) ^ (0xfffffc00U 
                                                  & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                     << 8U))) 
                                  ^ (0xfffffc00U & 
                                     (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                      << 7U))) ^ (0xfffffc00U 
                                                  & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                     << 5U))) 
                                ^ (0xfffffc00U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                  << 1U))) 
                               ^ (0x1ffffc00U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                 >> 3U))) 
                              ^ (0xffffc00U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                               >> 4U))) 
                             ^ (0x3fffc00U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                              >> 6U))) 
                            ^ (0x7ffc00U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                            >> 9U))) 
                           ^ (0xfc00U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                         >> 0x10U))) 
                          ^ (0x3c00U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                        >> 0x12U))) 
                         ^ (0x1c00U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                       >> 0x13U))) 
                        ^ (0x400U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                     >> 0x15U)))));
    vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__crc32_2_crc_o 
        = ((0xfffff7ffU & vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__crc32_2_crc_o) 
           | (0x800U & ((((((((((((((((((((((((((((
                                                   ((((((0x800U 
                                                         & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                            >> 0x14U)) 
                                                        ^ 
                                                        (0x7800U 
                                                         & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                            >> 0x11U))) 
                                                       ^ 
                                                       (0xf800U 
                                                        & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                           >> 0x10U))) 
                                                      ^ 
                                                      (0x1f800U 
                                                       & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                          >> 0xfU))) 
                                                     ^ 
                                                     (0x3f800U 
                                                      & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                         >> 0xeU))) 
                                                    ^ 
                                                    (0x7f800U 
                                                     & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                        >> 0xdU))) 
                                                   ^ 
                                                   (0x7ff800U 
                                                    & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                       >> 9U))) 
                                                  ^ 
                                                  (0x3fff800U 
                                                   & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      >> 6U))) 
                                                 ^ 
                                                 (0x7fff800U 
                                                  & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     >> 5U))) 
                                                ^ (0xffff800U 
                                                   & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      >> 4U))) 
                                               ^ (0x1ffff800U 
                                                  & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     >> 3U))) 
                                              ^ (0x7ffff800U 
                                                 & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                    >> 1U))) 
                                             ^ (0xfffff800U 
                                                & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                   << 2U))) 
                                            ^ (0xfffff800U 
                                               & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                  << 7U))) 
                                           ^ (0xfffff800U 
                                              & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                 << 8U))) 
                                          ^ (0xfffff800U 
                                             & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                << 0xaU))) 
                                         ^ (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                            << 0xbU)) 
                                        ^ (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                           << 0xbU)) 
                                       ^ (0xfffff800U 
                                          & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                             << 0xaU))) 
                                      ^ (0xfffff800U 
                                         & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                            << 8U))) 
                                     ^ (0xfffff800U 
                                        & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                           << 7U))) 
                                    ^ (0xfffff800U 
                                       & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                          << 2U))) 
                                   ^ (0x7ffff800U & 
                                      (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                       >> 1U))) ^ (0x1ffff800U 
                                                   & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                      >> 3U))) 
                                 ^ (0xffff800U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                  >> 4U))) 
                                ^ (0x7fff800U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                 >> 5U))) 
                               ^ (0x3fff800U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                >> 6U))) 
                              ^ (0x7ff800U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                              >> 9U))) 
                             ^ (0x7f800U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                            >> 0xdU))) 
                            ^ (0x3f800U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                           >> 0xeU))) 
                           ^ (0x1f800U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                          >> 0xfU))) 
                          ^ (0xf800U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                        >> 0x10U))) 
                         ^ (0x7800U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                       >> 0x11U))) 
                        ^ (0x800U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                     >> 0x14U)))));
    vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__crc32_2_crc_o 
        = ((0xffffefffU & vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__crc32_2_crc_o) 
           | (0x1000U & (((((((((((((((((((((((((((
                                                   (((((((0x1000U 
                                                          & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                             >> 0x13U)) 
                                                         ^ 
                                                         (0x3000U 
                                                          & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                             >> 0x12U))) 
                                                        ^ 
                                                        (0x1f000U 
                                                         & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                            >> 0xfU))) 
                                                       ^ 
                                                       (0xff000U 
                                                        & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                           >> 0xcU))) 
                                                      ^ 
                                                      (0x7ff000U 
                                                       & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                          >> 9U))) 
                                                     ^ 
                                                     (0x3fff000U 
                                                      & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                         >> 6U))) 
                                                    ^ 
                                                    (0x7fff000U 
                                                     & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                        >> 5U))) 
                                                   ^ 
                                                   (0x1ffff000U 
                                                    & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                       >> 3U))) 
                                                  ^ 
                                                  (0x7ffff000U 
                                                   & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      >> 1U))) 
                                                 ^ 
                                                 (0xfffff000U 
                                                  & vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7)) 
                                                ^ (0xfffff000U 
                                                   & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      << 3U))) 
                                               ^ (0xfffff000U 
                                                  & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     << 6U))) 
                                              ^ (0xfffff000U 
                                                 & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                    << 7U))) 
                                             ^ (0xfffff000U 
                                                & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                   << 8U))) 
                                            ^ (0xfffff000U 
                                               & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                  << 0xaU))) 
                                           ^ (0xfffff000U 
                                              & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                 << 0xbU))) 
                                          ^ (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                             << 0xcU)) 
                                         ^ (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                            << 0xcU)) 
                                        ^ (0xfffff000U 
                                           & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                              << 0xbU))) 
                                       ^ (0xfffff000U 
                                          & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                             << 0xaU))) 
                                      ^ (0xfffff000U 
                                         & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                            << 8U))) 
                                     ^ (0xfffff000U 
                                        & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                           << 7U))) 
                                    ^ (0xfffff000U 
                                       & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                          << 6U))) 
                                   ^ (0xfffff000U & 
                                      (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                       << 3U))) ^ (0xfffff000U 
                                                   & vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data)) 
                                 ^ (0x7ffff000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                   >> 1U))) 
                                ^ (0x1ffff000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                  >> 3U))) 
                               ^ (0x7fff000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                >> 5U))) 
                              ^ (0x3fff000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                               >> 6U))) 
                             ^ (0x7ff000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                             >> 9U))) 
                            ^ (0xff000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                           >> 0xcU))) 
                           ^ (0x1f000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                          >> 0xfU))) 
                          ^ (0x3000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                        >> 0x12U))) 
                         ^ (0x1000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                       >> 0x13U)))));
    vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__crc32_2_crc_o 
        = ((0xffffdfffU & vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__crc32_2_crc_o) 
           | (0x2000U & (((((((((((((((((((((((((((
                                                   (((((0x2000U 
                                                        & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                           >> 0x12U)) 
                                                       ^ 
                                                       (0x1e000U 
                                                        & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                           >> 0xfU))) 
                                                      ^ 
                                                      (0xfe000U 
                                                       & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                          >> 0xcU))) 
                                                     ^ 
                                                     (0x7fe000U 
                                                      & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                         >> 9U))) 
                                                    ^ 
                                                    (0x3ffe000U 
                                                     & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                        >> 6U))) 
                                                   ^ 
                                                   (0x7ffe000U 
                                                    & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                       >> 5U))) 
                                                  ^ 
                                                  (0x1fffe000U 
                                                   & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      >> 3U))) 
                                                 ^ 
                                                 (0x7fffe000U 
                                                  & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     >> 1U))) 
                                                ^ (0xffffe000U 
                                                   & vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7)) 
                                               ^ (0xffffe000U 
                                                  & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     << 3U))) 
                                              ^ (0xffffe000U 
                                                 & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                    << 6U))) 
                                             ^ (0xffffe000U 
                                                & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                   << 7U))) 
                                            ^ (0xffffe000U 
                                               & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                  << 8U))) 
                                           ^ (0xffffe000U 
                                              & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                 << 0xaU))) 
                                          ^ (0xffffe000U 
                                             & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                << 0xbU))) 
                                         ^ (0xffffe000U 
                                            & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                               << 0xcU))) 
                                        ^ (0xffffe000U 
                                           & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                              << 0xcU))) 
                                       ^ (0xffffe000U 
                                          & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                             << 0xbU))) 
                                      ^ (0xffffe000U 
                                         & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                            << 0xaU))) 
                                     ^ (0xffffe000U 
                                        & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                           << 8U))) 
                                    ^ (0xffffe000U 
                                       & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                          << 7U))) 
                                   ^ (0xffffe000U & 
                                      (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                       << 6U))) ^ (0xffffe000U 
                                                   & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                      << 3U))) 
                                 ^ (0xffffe000U & vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data)) 
                                ^ (0x7fffe000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                  >> 1U))) 
                               ^ (0x1fffe000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                 >> 3U))) 
                              ^ (0x7ffe000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                               >> 5U))) 
                             ^ (0x3ffe000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                              >> 6U))) 
                            ^ (0x7fe000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                            >> 9U))) 
                           ^ (0xfe000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                          >> 0xcU))) 
                          ^ (0x1e000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                         >> 0xfU))) 
                         ^ (0x2000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                       >> 0x12U)))));
    vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__crc32_2_crc_o 
        = ((0xffffbfffU & vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__crc32_2_crc_o) 
           | (0x4000U & (((((((((((((((((((((((((((
                                                   (((0x1c000U 
                                                      & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                         >> 0xfU)) 
                                                     ^ 
                                                     (0xfc000U 
                                                      & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                         >> 0xcU))) 
                                                    ^ 
                                                    (0x7fc000U 
                                                     & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                        >> 9U))) 
                                                   ^ 
                                                   (0x3ffc000U 
                                                    & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                       >> 6U))) 
                                                  ^ 
                                                  (0x7ffc000U 
                                                   & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      >> 5U))) 
                                                 ^ 
                                                 (0x1fffc000U 
                                                  & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     >> 3U))) 
                                                ^ (0x7fffc000U 
                                                   & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      >> 1U))) 
                                               ^ (0xffffc000U 
                                                  & vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7)) 
                                              ^ (0xffffc000U 
                                                 & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                    << 3U))) 
                                             ^ (0xffffc000U 
                                                & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                   << 6U))) 
                                            ^ (0xffffc000U 
                                               & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                  << 7U))) 
                                           ^ (0xffffc000U 
                                              & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                 << 8U))) 
                                          ^ (0xffffc000U 
                                             & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                << 0xaU))) 
                                         ^ (0xffffc000U 
                                            & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                               << 0xbU))) 
                                        ^ (0xffffc000U 
                                           & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                              << 0xcU))) 
                                       ^ (0xffffc000U 
                                          & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                             << 0xcU))) 
                                      ^ (0xffffc000U 
                                         & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                            << 0xbU))) 
                                     ^ (0xffffc000U 
                                        & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                           << 0xaU))) 
                                    ^ (0xffffc000U 
                                       & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                          << 8U))) 
                                   ^ (0xffffc000U & 
                                      (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                       << 7U))) ^ (0xffffc000U 
                                                   & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                      << 6U))) 
                                 ^ (0xffffc000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                   << 3U))) 
                                ^ (0xffffc000U & vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data)) 
                               ^ (0x7fffc000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                 >> 1U))) 
                              ^ (0x1fffc000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                >> 3U))) 
                             ^ (0x7ffc000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                              >> 5U))) 
                            ^ (0x3ffc000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                             >> 6U))) 
                           ^ (0x7fc000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                           >> 9U))) 
                          ^ (0xfc000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                         >> 0xcU))) 
                         ^ (0x1c000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                        >> 0xfU)))));
    vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__crc32_2_crc_o 
        = ((0xffff7fffU & vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__crc32_2_crc_o) 
           | (0x8000U & (((((((((((((((((((((((((((
                                                   (((0x18000U 
                                                      & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                         >> 0xfU)) 
                                                     ^ 
                                                     (0xf8000U 
                                                      & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                         >> 0xcU))) 
                                                    ^ 
                                                    (0x7f8000U 
                                                     & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                        >> 9U))) 
                                                   ^ 
                                                   (0x3ff8000U 
                                                    & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                       >> 6U))) 
                                                  ^ 
                                                  (0x7ff8000U 
                                                   & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      >> 5U))) 
                                                 ^ 
                                                 (0x1fff8000U 
                                                  & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     >> 3U))) 
                                                ^ (0x7fff8000U 
                                                   & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      >> 1U))) 
                                               ^ (0xffff8000U 
                                                  & vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7)) 
                                              ^ (0xffff8000U 
                                                 & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                    << 3U))) 
                                             ^ (0xffff8000U 
                                                & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                   << 6U))) 
                                            ^ (0xffff8000U 
                                               & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                  << 7U))) 
                                           ^ (0xffff8000U 
                                              & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                 << 8U))) 
                                          ^ (0xffff8000U 
                                             & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                << 0xaU))) 
                                         ^ (0xffff8000U 
                                            & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                               << 0xbU))) 
                                        ^ (0xffff8000U 
                                           & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                              << 0xcU))) 
                                       ^ (0xffff8000U 
                                          & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                             << 0xcU))) 
                                      ^ (0xffff8000U 
                                         & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                            << 0xbU))) 
                                     ^ (0xffff8000U 
                                        & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                           << 0xaU))) 
                                    ^ (0xffff8000U 
                                       & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                          << 8U))) 
                                   ^ (0xffff8000U & 
                                      (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                       << 7U))) ^ (0xffff8000U 
                                                   & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                      << 6U))) 
                                 ^ (0xffff8000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                   << 3U))) 
                                ^ (0xffff8000U & vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data)) 
                               ^ (0x7fff8000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                 >> 1U))) 
                              ^ (0x1fff8000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                >> 3U))) 
                             ^ (0x7ff8000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                              >> 5U))) 
                            ^ (0x3ff8000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                             >> 6U))) 
                           ^ (0x7f8000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                           >> 9U))) 
                          ^ (0xf8000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                         >> 0xcU))) 
                         ^ (0x18000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                        >> 0xfU)))));
    vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__crc32_2_crc_o 
        = ((0xfffeffffU & vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__crc32_2_crc_o) 
           | (0x10000U & ((((((((((((((((((((((((((
                                                   ((0x30000U 
                                                     & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                        >> 0xeU)) 
                                                    ^ 
                                                    (0x70000U 
                                                     & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                        >> 0xdU))) 
                                                   ^ 
                                                   (0x3f0000U 
                                                    & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                       >> 0xaU))) 
                                                  ^ 
                                                  (0xff0000U 
                                                   & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      >> 8U))) 
                                                 ^ 
                                                 (0x3ff0000U 
                                                  & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     >> 6U))) 
                                                ^ (0x7ff0000U 
                                                   & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      >> 5U))) 
                                               ^ (0x1fff0000U 
                                                  & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     >> 3U))) 
                                              ^ (0x7fff0000U 
                                                 & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                    >> 1U))) 
                                             ^ (0xffff0000U 
                                                & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                   << 3U))) 
                                            ^ (0xffff0000U 
                                               & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                  << 4U))) 
                                           ^ (0xffff0000U 
                                              & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                 << 8U))) 
                                          ^ (0xffff0000U 
                                             & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                << 0xbU))) 
                                         ^ (0xffff0000U 
                                            & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                               << 0xcU))) 
                                        ^ (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                           << 0x10U)) 
                                       ^ (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                          << 0x10U)) 
                                      ^ (0xffff0000U 
                                         & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                            << 0xcU))) 
                                     ^ (0xffff0000U 
                                        & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                           << 0xbU))) 
                                    ^ (0xffff0000U 
                                       & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                          << 8U))) 
                                   ^ (0xffff0000U & 
                                      (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                       << 4U))) ^ (0xffff0000U 
                                                   & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                      << 3U))) 
                                 ^ (0x7fff0000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                   >> 1U))) 
                                ^ (0x1fff0000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                  >> 3U))) 
                               ^ (0x7ff0000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                >> 5U))) 
                              ^ (0x3ff0000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                               >> 6U))) 
                             ^ (0xff0000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                             >> 8U))) 
                            ^ (0x3f0000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                            >> 0xaU))) 
                           ^ (0x70000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                          >> 0xdU))) 
                          ^ (0x30000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                         >> 0xeU)))));
    vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__crc32_2_crc_o 
        = ((0xfffdffffU & vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__crc32_2_crc_o) 
           | (0x20000U & ((((((((((((((((((((((((((
                                                   ((0x20000U 
                                                     & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                        >> 0xeU)) 
                                                    ^ 
                                                    (0x60000U 
                                                     & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                        >> 0xdU))) 
                                                   ^ 
                                                   (0x3e0000U 
                                                    & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                       >> 0xaU))) 
                                                  ^ 
                                                  (0xfe0000U 
                                                   & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      >> 8U))) 
                                                 ^ 
                                                 (0x3fe0000U 
                                                  & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     >> 6U))) 
                                                ^ (0x7fe0000U 
                                                   & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      >> 5U))) 
                                               ^ (0x1ffe0000U 
                                                  & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     >> 3U))) 
                                              ^ (0x7ffe0000U 
                                                 & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                    >> 1U))) 
                                             ^ (0xfffe0000U 
                                                & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                   << 3U))) 
                                            ^ (0xfffe0000U 
                                               & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                  << 4U))) 
                                           ^ (0xfffe0000U 
                                              & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                 << 8U))) 
                                          ^ (0xfffe0000U 
                                             & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                << 0xbU))) 
                                         ^ (0xfffe0000U 
                                            & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                               << 0xcU))) 
                                        ^ (0xfffe0000U 
                                           & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                              << 0x10U))) 
                                       ^ (0xfffe0000U 
                                          & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                             << 0x10U))) 
                                      ^ (0xfffe0000U 
                                         & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                            << 0xcU))) 
                                     ^ (0xfffe0000U 
                                        & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                           << 0xbU))) 
                                    ^ (0xfffe0000U 
                                       & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                          << 8U))) 
                                   ^ (0xfffe0000U & 
                                      (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                       << 4U))) ^ (0xfffe0000U 
                                                   & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                      << 3U))) 
                                 ^ (0x7ffe0000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                   >> 1U))) 
                                ^ (0x1ffe0000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                  >> 3U))) 
                               ^ (0x7fe0000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                >> 5U))) 
                              ^ (0x3fe0000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                               >> 6U))) 
                             ^ (0xfe0000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                             >> 8U))) 
                            ^ (0x3e0000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                            >> 0xaU))) 
                           ^ (0x60000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                          >> 0xdU))) 
                          ^ (0x20000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                         >> 0xeU)))));
    vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__crc32_2_crc_o 
        = ((0xfffbffffU & vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__crc32_2_crc_o) 
           | (0x40000U & ((((((((((((((((((((((((((0x40000U 
                                                   & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      >> 0xdU)) 
                                                  ^ 
                                                  (0x3c0000U 
                                                   & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      >> 0xaU))) 
                                                 ^ 
                                                 (0xfc0000U 
                                                  & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     >> 8U))) 
                                                ^ (0x3fc0000U 
                                                   & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      >> 6U))) 
                                               ^ (0x7fc0000U 
                                                  & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     >> 5U))) 
                                              ^ (0x1ffc0000U 
                                                 & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                    >> 3U))) 
                                             ^ (0x7ffc0000U 
                                                & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                   >> 1U))) 
                                            ^ (0xfffc0000U 
                                               & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                  << 3U))) 
                                           ^ (0xfffc0000U 
                                              & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                 << 4U))) 
                                          ^ (0xfffc0000U 
                                             & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                << 8U))) 
                                         ^ (0xfffc0000U 
                                            & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                               << 0xbU))) 
                                        ^ (0xfffc0000U 
                                           & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                              << 0xcU))) 
                                       ^ (0xfffc0000U 
                                          & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                             << 0x10U))) 
                                      ^ (0xfffc0000U 
                                         & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                            << 0x10U))) 
                                     ^ (0xfffc0000U 
                                        & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                           << 0xcU))) 
                                    ^ (0xfffc0000U 
                                       & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                          << 0xbU))) 
                                   ^ (0xfffc0000U & 
                                      (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                       << 8U))) ^ (0xfffc0000U 
                                                   & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                      << 4U))) 
                                 ^ (0xfffc0000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                   << 3U))) 
                                ^ (0x7ffc0000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                  >> 1U))) 
                               ^ (0x1ffc0000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                 >> 3U))) 
                              ^ (0x7fc0000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                               >> 5U))) 
                             ^ (0x3fc0000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                              >> 6U))) 
                            ^ (0xfc0000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                            >> 8U))) 
                           ^ (0x3c0000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                           >> 0xaU))) 
                          ^ (0x40000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                         >> 0xdU)))));
    vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__crc32_2_crc_o 
        = ((0xfff7ffffU & vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__crc32_2_crc_o) 
           | (0x80000U & ((((((((((((((((((((((((0x380000U 
                                                 & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                    >> 0xaU)) 
                                                ^ (0xf80000U 
                                                   & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      >> 8U))) 
                                               ^ (0x3f80000U 
                                                  & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     >> 6U))) 
                                              ^ (0x7f80000U 
                                                 & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                    >> 5U))) 
                                             ^ (0x1ff80000U 
                                                & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                   >> 3U))) 
                                            ^ (0x7ff80000U 
                                               & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                  >> 1U))) 
                                           ^ (0xfff80000U 
                                              & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                 << 3U))) 
                                          ^ (0xfff80000U 
                                             & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                << 4U))) 
                                         ^ (0xfff80000U 
                                            & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                               << 8U))) 
                                        ^ (0xfff80000U 
                                           & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                              << 0xbU))) 
                                       ^ (0xfff80000U 
                                          & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                             << 0xcU))) 
                                      ^ (0xfff80000U 
                                         & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                            << 0x10U))) 
                                     ^ (0xfff80000U 
                                        & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                           << 0x10U))) 
                                    ^ (0xfff80000U 
                                       & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                          << 0xcU))) 
                                   ^ (0xfff80000U & 
                                      (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                       << 0xbU))) ^ 
                                  (0xfff80000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                  << 8U))) 
                                 ^ (0xfff80000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                   << 4U))) 
                                ^ (0xfff80000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                  << 3U))) 
                               ^ (0x7ff80000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                 >> 1U))) 
                              ^ (0x1ff80000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                >> 3U))) 
                             ^ (0x7f80000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                              >> 5U))) 
                            ^ (0x3f80000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                             >> 6U))) 
                           ^ (0xf80000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                           >> 8U))) 
                          ^ (0x380000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                          >> 0xaU)))));
    vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__crc32_2_crc_o 
        = ((0xffefffffU & vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__crc32_2_crc_o) 
           | (0x100000U & ((((((((((((((((((((((((0x300000U 
                                                  & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     >> 0xaU)) 
                                                 ^ 
                                                 (0xf00000U 
                                                  & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     >> 8U))) 
                                                ^ (0x3f00000U 
                                                   & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      >> 6U))) 
                                               ^ (0x7f00000U 
                                                  & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     >> 5U))) 
                                              ^ (0x1ff00000U 
                                                 & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                    >> 3U))) 
                                             ^ (0x7ff00000U 
                                                & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                   >> 1U))) 
                                            ^ (0xfff00000U 
                                               & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                  << 3U))) 
                                           ^ (0xfff00000U 
                                              & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                 << 4U))) 
                                          ^ (0xfff00000U 
                                             & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                << 8U))) 
                                         ^ (0xfff00000U 
                                            & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                               << 0xbU))) 
                                        ^ (0xfff00000U 
                                           & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                              << 0xcU))) 
                                       ^ (0xfff00000U 
                                          & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                             << 0x10U))) 
                                      ^ (0xfff00000U 
                                         & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                            << 0x10U))) 
                                     ^ (0xfff00000U 
                                        & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                           << 0xcU))) 
                                    ^ (0xfff00000U 
                                       & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                          << 0xbU))) 
                                   ^ (0xfff00000U & 
                                      (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                       << 8U))) ^ (0xfff00000U 
                                                   & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                      << 4U))) 
                                 ^ (0xfff00000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                   << 3U))) 
                                ^ (0x7ff00000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                  >> 1U))) 
                               ^ (0x1ff00000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                 >> 3U))) 
                              ^ (0x7f00000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                               >> 5U))) 
                             ^ (0x3f00000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                              >> 6U))) 
                            ^ (0xf00000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                            >> 8U))) 
                           ^ (0x300000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                           >> 0xaU)))));
    vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__crc32_2_crc_o 
        = ((0xffdfffffU & vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__crc32_2_crc_o) 
           | (0x200000U & ((((((((((((((((((((((((0x200000U 
                                                  & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     >> 0xaU)) 
                                                 ^ 
                                                 (0xe00000U 
                                                  & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     >> 8U))) 
                                                ^ (0x3e00000U 
                                                   & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      >> 6U))) 
                                               ^ (0x7e00000U 
                                                  & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     >> 5U))) 
                                              ^ (0x1fe00000U 
                                                 & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                    >> 3U))) 
                                             ^ (0x7fe00000U 
                                                & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                   >> 1U))) 
                                            ^ (0xffe00000U 
                                               & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                  << 3U))) 
                                           ^ (0xffe00000U 
                                              & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                 << 4U))) 
                                          ^ (0xffe00000U 
                                             & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                << 8U))) 
                                         ^ (0xffe00000U 
                                            & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                               << 0xbU))) 
                                        ^ (0xffe00000U 
                                           & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                              << 0xcU))) 
                                       ^ (0xffe00000U 
                                          & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                             << 0x10U))) 
                                      ^ (0xffe00000U 
                                         & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                            << 0x10U))) 
                                     ^ (0xffe00000U 
                                        & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                           << 0xcU))) 
                                    ^ (0xffe00000U 
                                       & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                          << 0xbU))) 
                                   ^ (0xffe00000U & 
                                      (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                       << 8U))) ^ (0xffe00000U 
                                                   & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                      << 4U))) 
                                 ^ (0xffe00000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                   << 3U))) 
                                ^ (0x7fe00000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                  >> 1U))) 
                               ^ (0x1fe00000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                 >> 3U))) 
                              ^ (0x7e00000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                               >> 5U))) 
                             ^ (0x3e00000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                              >> 6U))) 
                            ^ (0xe00000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                            >> 8U))) 
                           ^ (0x200000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                           >> 0xaU)))));
    vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__crc32_2_crc_o 
        = ((0xffbfffffU & vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__crc32_2_crc_o) 
           | (0x400000U & (((((((((((((((((((((((((
                                                   (((0x400000U 
                                                      & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                         >> 9U)) 
                                                     ^ 
                                                     (0x1c00000U 
                                                      & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                         >> 7U))) 
                                                    ^ 
                                                    (0x7c00000U 
                                                     & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                        >> 5U))) 
                                                   ^ 
                                                   (0xfc00000U 
                                                    & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                       >> 4U))) 
                                                  ^ 
                                                  (0x3fc00000U 
                                                   & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      >> 2U))) 
                                                 ^ 
                                                 (0x7fc00000U 
                                                  & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     >> 1U))) 
                                                ^ (0xffc00000U 
                                                   & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      << 3U))) 
                                               ^ (0xffc00000U 
                                                  & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     << 4U))) 
                                              ^ (0xffc00000U 
                                                 & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                    << 6U))) 
                                             ^ (0xffc00000U 
                                                & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                   << 8U))) 
                                            ^ (0xffc00000U 
                                               & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                  << 0xaU))) 
                                           ^ (0xffc00000U 
                                              & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                 << 0xbU))) 
                                          ^ (0xffc00000U 
                                             & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                << 0xdU))) 
                                         ^ (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                            << 0x16U)) 
                                        ^ (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                           << 0x16U)) 
                                       ^ (0xffc00000U 
                                          & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                             << 0xdU))) 
                                      ^ (0xffc00000U 
                                         & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                            << 0xbU))) 
                                     ^ (0xffc00000U 
                                        & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                           << 0xaU))) 
                                    ^ (0xffc00000U 
                                       & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                          << 8U))) 
                                   ^ (0xffc00000U & 
                                      (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                       << 6U))) ^ (0xffc00000U 
                                                   & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                      << 4U))) 
                                 ^ (0xffc00000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                   << 3U))) 
                                ^ (0x7fc00000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                  >> 1U))) 
                               ^ (0x3fc00000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                 >> 2U))) 
                              ^ (0xfc00000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                               >> 4U))) 
                             ^ (0x7c00000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                              >> 5U))) 
                            ^ (0x1c00000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                             >> 7U))) 
                           ^ (0x400000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                           >> 9U)))));
    vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__crc32_2_crc_o 
        = ((0xff7fffffU & vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__crc32_2_crc_o) 
           | (0x800000U & (((((((((((((((((((((((((
                                                   (((0x800000U 
                                                      & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                         >> 8U)) 
                                                     ^ 
                                                     (0x3800000U 
                                                      & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                         >> 6U))) 
                                                    ^ 
                                                    (0xf800000U 
                                                     & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                        >> 4U))) 
                                                   ^ 
                                                   (0x1f800000U 
                                                    & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                       >> 3U))) 
                                                  ^ 
                                                  (0xff800000U 
                                                   & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      << 3U))) 
                                                 ^ 
                                                 (0xff800000U 
                                                  & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     << 4U))) 
                                                ^ (0xff800000U 
                                                   & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      << 6U))) 
                                               ^ (0xff800000U 
                                                  & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     << 7U))) 
                                              ^ (0xff800000U 
                                                 & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                    << 8U))) 
                                             ^ (0xff800000U 
                                                & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                   << 0xaU))) 
                                            ^ (0xff800000U 
                                               & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                  << 0xeU))) 
                                           ^ (0xff800000U 
                                              & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                 << 0x11U))) 
                                          ^ (0xff800000U 
                                             & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                << 0x16U))) 
                                         ^ (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                            << 0x17U)) 
                                        ^ (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                           << 0x17U)) 
                                       ^ (0xff800000U 
                                          & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                             << 0x16U))) 
                                      ^ (0xff800000U 
                                         & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                            << 0x11U))) 
                                     ^ (0xff800000U 
                                        & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                           << 0xeU))) 
                                    ^ (0xff800000U 
                                       & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                          << 0xaU))) 
                                   ^ (0xff800000U & 
                                      (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                       << 8U))) ^ (0xff800000U 
                                                   & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                      << 7U))) 
                                 ^ (0xff800000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                   << 6U))) 
                                ^ (0xff800000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                  << 4U))) 
                               ^ (0xff800000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                 << 3U))) 
                              ^ (0x1f800000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                >> 3U))) 
                             ^ (0xf800000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                              >> 4U))) 
                            ^ (0x3800000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                             >> 6U))) 
                           ^ (0x800000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                           >> 8U)))));
    vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__crc32_2_crc_o 
        = ((0xfeffffffU & vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__crc32_2_crc_o) 
           | (0x1000000U & ((((((((((((((((((((((((
                                                   ((0x3000000U 
                                                     & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                        >> 6U)) 
                                                    ^ 
                                                    (0xf000000U 
                                                     & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                        >> 4U))) 
                                                   ^ 
                                                   (0x1f000000U 
                                                    & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                       >> 3U))) 
                                                  ^ 
                                                  (0xff000000U 
                                                   & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      << 3U))) 
                                                 ^ 
                                                 (0xff000000U 
                                                  & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     << 4U))) 
                                                ^ (0xff000000U 
                                                   & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      << 6U))) 
                                               ^ (0xff000000U 
                                                  & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     << 7U))) 
                                              ^ (0xff000000U 
                                                 & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                    << 8U))) 
                                             ^ (0xff000000U 
                                                & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                   << 0xaU))) 
                                            ^ (0xff000000U 
                                               & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                  << 0xeU))) 
                                           ^ (0xff000000U 
                                              & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                 << 0x11U))) 
                                          ^ (0xff000000U 
                                             & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                << 0x16U))) 
                                         ^ (0xff000000U 
                                            & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                               << 0x17U))) 
                                        ^ (0xff000000U 
                                           & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                              << 0x17U))) 
                                       ^ (0xff000000U 
                                          & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                             << 0x16U))) 
                                      ^ (0xff000000U 
                                         & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                            << 0x11U))) 
                                     ^ (0xff000000U 
                                        & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                           << 0xeU))) 
                                    ^ (0xff000000U 
                                       & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                          << 0xaU))) 
                                   ^ (0xff000000U & 
                                      (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                       << 8U))) ^ (0xff000000U 
                                                   & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                      << 7U))) 
                                 ^ (0xff000000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                   << 6U))) 
                                ^ (0xff000000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                  << 4U))) 
                               ^ (0xff000000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                 << 3U))) 
                              ^ (0x1f000000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                >> 3U))) 
                             ^ (0xf000000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                              >> 4U))) 
                            ^ (0x3000000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                             >> 6U)))));
    vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__crc32_2_crc_o 
        = ((0xfdffffffU & vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__crc32_2_crc_o) 
           | (0x2000000U & ((((((((((((((((((((((((
                                                   ((0x2000000U 
                                                     & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                        >> 6U)) 
                                                    ^ 
                                                    (0xe000000U 
                                                     & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                        >> 4U))) 
                                                   ^ 
                                                   (0x1e000000U 
                                                    & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                       >> 3U))) 
                                                  ^ 
                                                  (0xfe000000U 
                                                   & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      << 3U))) 
                                                 ^ 
                                                 (0xfe000000U 
                                                  & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     << 4U))) 
                                                ^ (0xfe000000U 
                                                   & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      << 6U))) 
                                               ^ (0xfe000000U 
                                                  & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     << 7U))) 
                                              ^ (0xfe000000U 
                                                 & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                    << 8U))) 
                                             ^ (0xfe000000U 
                                                & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                   << 0xaU))) 
                                            ^ (0xfe000000U 
                                               & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                  << 0xeU))) 
                                           ^ (0xfe000000U 
                                              & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                 << 0x11U))) 
                                          ^ (0xfe000000U 
                                             & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                << 0x16U))) 
                                         ^ (0xfe000000U 
                                            & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                               << 0x17U))) 
                                        ^ (0xfe000000U 
                                           & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                              << 0x17U))) 
                                       ^ (0xfe000000U 
                                          & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                             << 0x16U))) 
                                      ^ (0xfe000000U 
                                         & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                            << 0x11U))) 
                                     ^ (0xfe000000U 
                                        & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                           << 0xeU))) 
                                    ^ (0xfe000000U 
                                       & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                          << 0xaU))) 
                                   ^ (0xfe000000U & 
                                      (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                       << 8U))) ^ (0xfe000000U 
                                                   & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                      << 7U))) 
                                 ^ (0xfe000000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                   << 6U))) 
                                ^ (0xfe000000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                  << 4U))) 
                               ^ (0xfe000000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                 << 3U))) 
                              ^ (0x1e000000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                >> 3U))) 
                             ^ (0xe000000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                              >> 4U))) 
                            ^ (0x2000000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                             >> 6U)))));
    vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__crc32_2_crc_o 
        = ((0xfbffffffU & vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__crc32_2_crc_o) 
           | (0x4000000U & ((((((((((((((((((((((((
                                                   ((((((0x4000000U 
                                                         & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                            >> 5U)) 
                                                        ^ 
                                                        (0x3c000000U 
                                                         & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                            >> 2U))) 
                                                       ^ 
                                                       (0xfc000000U 
                                                        & vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7)) 
                                                      ^ 
                                                      (0xfc000000U 
                                                       & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                          << 1U))) 
                                                     ^ 
                                                     (0xfc000000U 
                                                      & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                         << 2U))) 
                                                    ^ 
                                                    (0xfc000000U 
                                                     & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                        << 3U))) 
                                                   ^ 
                                                   (0xfc000000U 
                                                    & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                       << 4U))) 
                                                  ^ 
                                                  (0xfc000000U 
                                                   & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      << 6U))) 
                                                 ^ 
                                                 (0xfc000000U 
                                                  & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     << 7U))) 
                                                ^ (0xfc000000U 
                                                   & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      << 8U))) 
                                               ^ (0xfc000000U 
                                                  & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     << 0x10U))) 
                                              ^ (0xfc000000U 
                                                 & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                    << 0x14U))) 
                                             ^ (0xfc000000U 
                                                & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                   << 0x16U))) 
                                            ^ (0xfc000000U 
                                               & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                  << 0x17U))) 
                                           ^ (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                              << 0x1aU)) 
                                          ^ (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                             << 0x1aU)) 
                                         ^ (0xfc000000U 
                                            & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                               << 0x17U))) 
                                        ^ (0xfc000000U 
                                           & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                              << 0x16U))) 
                                       ^ (0xfc000000U 
                                          & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                             << 0x14U))) 
                                      ^ (0xfc000000U 
                                         & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                            << 0x10U))) 
                                     ^ (0xfc000000U 
                                        & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                           << 8U))) 
                                    ^ (0xfc000000U 
                                       & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                          << 7U))) 
                                   ^ (0xfc000000U & 
                                      (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                       << 6U))) ^ (0xfc000000U 
                                                   & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                      << 4U))) 
                                 ^ (0xfc000000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                   << 3U))) 
                                ^ (0xfc000000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                  << 2U))) 
                               ^ (0xfc000000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                 << 1U))) 
                              ^ (0xfc000000U & vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data)) 
                             ^ (0x3c000000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                               >> 2U))) 
                            ^ (0x4000000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                             >> 5U)))));
    vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__crc32_2_crc_o 
        = ((0xf7ffffffU & vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__crc32_2_crc_o) 
           | (0x8000000U & ((((((((((((((((((((((((
                                                   ((((0x38000000U 
                                                       & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                          >> 2U)) 
                                                      ^ 
                                                      (0xf8000000U 
                                                       & vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7)) 
                                                     ^ 
                                                     (0xf8000000U 
                                                      & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                         << 1U))) 
                                                    ^ 
                                                    (0xf8000000U 
                                                     & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                        << 2U))) 
                                                   ^ 
                                                   (0xf8000000U 
                                                    & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                       << 3U))) 
                                                  ^ 
                                                  (0xf8000000U 
                                                   & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      << 4U))) 
                                                 ^ 
                                                 (0xf8000000U 
                                                  & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     << 6U))) 
                                                ^ (0xf8000000U 
                                                   & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      << 7U))) 
                                               ^ (0xf8000000U 
                                                  & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     << 8U))) 
                                              ^ (0xf8000000U 
                                                 & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                    << 0x10U))) 
                                             ^ (0xf8000000U 
                                                & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                   << 0x14U))) 
                                            ^ (0xf8000000U 
                                               & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                  << 0x16U))) 
                                           ^ (0xf8000000U 
                                              & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                 << 0x17U))) 
                                          ^ (0xf8000000U 
                                             & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                << 0x1aU))) 
                                         ^ (0xf8000000U 
                                            & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                               << 0x1aU))) 
                                        ^ (0xf8000000U 
                                           & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                              << 0x17U))) 
                                       ^ (0xf8000000U 
                                          & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                             << 0x16U))) 
                                      ^ (0xf8000000U 
                                         & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                            << 0x14U))) 
                                     ^ (0xf8000000U 
                                        & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                           << 0x10U))) 
                                    ^ (0xf8000000U 
                                       & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                          << 8U))) 
                                   ^ (0xf8000000U & 
                                      (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                       << 7U))) ^ (0xf8000000U 
                                                   & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                      << 6U))) 
                                 ^ (0xf8000000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                   << 4U))) 
                                ^ (0xf8000000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                  << 3U))) 
                               ^ (0xf8000000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                 << 2U))) 
                              ^ (0xf8000000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                << 1U))) 
                             ^ (0xf8000000U & vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data)) 
                            ^ (0x38000000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                              >> 2U)))));
    vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__crc32_2_crc_o 
        = ((0xefffffffU & vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__crc32_2_crc_o) 
           | (0x10000000U & (((((((((((((((((((((((
                                                   (((((0x30000000U 
                                                        & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                           >> 2U)) 
                                                       ^ 
                                                       (0xf0000000U 
                                                        & vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7)) 
                                                      ^ 
                                                      (0xf0000000U 
                                                       & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                          << 1U))) 
                                                     ^ 
                                                     (0xf0000000U 
                                                      & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                         << 2U))) 
                                                    ^ 
                                                    (0xf0000000U 
                                                     & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                        << 3U))) 
                                                   ^ 
                                                   (0xf0000000U 
                                                    & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                       << 4U))) 
                                                  ^ 
                                                  (0xf0000000U 
                                                   & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      << 6U))) 
                                                 ^ 
                                                 (0xf0000000U 
                                                  & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     << 7U))) 
                                                ^ (0xf0000000U 
                                                   & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      << 8U))) 
                                               ^ (0xf0000000U 
                                                  & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     << 0x10U))) 
                                              ^ (0xf0000000U 
                                                 & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                    << 0x14U))) 
                                             ^ (0xf0000000U 
                                                & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                   << 0x16U))) 
                                            ^ (0xf0000000U 
                                               & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                  << 0x17U))) 
                                           ^ (0xf0000000U 
                                              & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                 << 0x1aU))) 
                                          ^ (0xf0000000U 
                                             & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                << 0x1aU))) 
                                         ^ (0xf0000000U 
                                            & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                               << 0x17U))) 
                                        ^ (0xf0000000U 
                                           & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                              << 0x16U))) 
                                       ^ (0xf0000000U 
                                          & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                             << 0x14U))) 
                                      ^ (0xf0000000U 
                                         & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                            << 0x10U))) 
                                     ^ (0xf0000000U 
                                        & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                           << 8U))) 
                                    ^ (0xf0000000U 
                                       & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                          << 7U))) 
                                   ^ (0xf0000000U & 
                                      (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                       << 6U))) ^ (0xf0000000U 
                                                   & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                      << 4U))) 
                                 ^ (0xf0000000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                   << 3U))) 
                                ^ (0xf0000000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                  << 2U))) 
                               ^ (0xf0000000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                 << 1U))) 
                              ^ (0xf0000000U & vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data)) 
                             ^ (0x30000000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                               >> 2U)))));
    vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__crc32_2_crc_o 
        = ((0xdfffffffU & vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__crc32_2_crc_o) 
           | (0x20000000U & (((((((((((((((((((((((
                                                   (((((0x20000000U 
                                                        & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                           >> 2U)) 
                                                       ^ 
                                                       (0xe0000000U 
                                                        & vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7)) 
                                                      ^ 
                                                      (0xe0000000U 
                                                       & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                          << 1U))) 
                                                     ^ 
                                                     (0xe0000000U 
                                                      & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                         << 2U))) 
                                                    ^ 
                                                    (0xe0000000U 
                                                     & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                        << 3U))) 
                                                   ^ 
                                                   (0xe0000000U 
                                                    & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                       << 4U))) 
                                                  ^ 
                                                  (0xe0000000U 
                                                   & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      << 6U))) 
                                                 ^ 
                                                 (0xe0000000U 
                                                  & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     << 7U))) 
                                                ^ (0xe0000000U 
                                                   & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      << 8U))) 
                                               ^ (0xe0000000U 
                                                  & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     << 0x10U))) 
                                              ^ (0xe0000000U 
                                                 & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                    << 0x14U))) 
                                             ^ (0xe0000000U 
                                                & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                   << 0x16U))) 
                                            ^ (0xe0000000U 
                                               & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                  << 0x17U))) 
                                           ^ (0xe0000000U 
                                              & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                 << 0x1aU))) 
                                          ^ (0xe0000000U 
                                             & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                << 0x1aU))) 
                                         ^ (0xe0000000U 
                                            & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                               << 0x17U))) 
                                        ^ (0xe0000000U 
                                           & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                              << 0x16U))) 
                                       ^ (0xe0000000U 
                                          & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                             << 0x14U))) 
                                      ^ (0xe0000000U 
                                         & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                            << 0x10U))) 
                                     ^ (0xe0000000U 
                                        & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                           << 8U))) 
                                    ^ (0xe0000000U 
                                       & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                          << 7U))) 
                                   ^ (0xe0000000U & 
                                      (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                       << 6U))) ^ (0xe0000000U 
                                                   & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                      << 4U))) 
                                 ^ (0xe0000000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                   << 3U))) 
                                ^ (0xe0000000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                  << 2U))) 
                               ^ (0xe0000000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                 << 1U))) 
                              ^ (0xe0000000U & vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data)) 
                             ^ (0x20000000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                               >> 2U)))));
    vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__crc32_2_crc_o 
        = ((0xbfffffffU & vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__crc32_2_crc_o) 
           | (0x40000000U & (((((((((((((((((((((((
                                                   (((0xc0000000U 
                                                      & vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7) 
                                                     ^ 
                                                     (0xc0000000U 
                                                      & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                         << 1U))) 
                                                    ^ 
                                                    (0xc0000000U 
                                                     & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                        << 2U))) 
                                                   ^ 
                                                   (0xc0000000U 
                                                    & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                       << 3U))) 
                                                  ^ 
                                                  (0xc0000000U 
                                                   & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      << 4U))) 
                                                 ^ 
                                                 (0xc0000000U 
                                                  & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     << 6U))) 
                                                ^ (0xc0000000U 
                                                   & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      << 7U))) 
                                               ^ (0xc0000000U 
                                                  & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     << 8U))) 
                                              ^ (0xc0000000U 
                                                 & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                    << 0x10U))) 
                                             ^ (0xc0000000U 
                                                & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                   << 0x14U))) 
                                            ^ (0xc0000000U 
                                               & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                  << 0x16U))) 
                                           ^ (0xc0000000U 
                                              & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                 << 0x17U))) 
                                          ^ (0xc0000000U 
                                             & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                << 0x1aU))) 
                                         ^ (0xc0000000U 
                                            & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                               << 0x1aU))) 
                                        ^ (0xc0000000U 
                                           & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                              << 0x17U))) 
                                       ^ (0xc0000000U 
                                          & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                             << 0x16U))) 
                                      ^ (0xc0000000U 
                                         & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                            << 0x14U))) 
                                     ^ (0xc0000000U 
                                        & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                           << 0x10U))) 
                                    ^ (0xc0000000U 
                                       & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                          << 8U))) 
                                   ^ (0xc0000000U & 
                                      (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                       << 7U))) ^ (0xc0000000U 
                                                   & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                      << 6U))) 
                                 ^ (0xc0000000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                   << 4U))) 
                                ^ (0xc0000000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                  << 3U))) 
                               ^ (0xc0000000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                 << 2U))) 
                              ^ (0xc0000000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                << 1U))) 
                             ^ (0xc0000000U & vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data))));
    vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__crc32_2_crc_o 
        = ((0x7fffffffU & vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__crc32_2_crc_o) 
           | (0x80000000U & (((((((((((((((((((((((
                                                   (((0x80000000U 
                                                      & vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7) 
                                                     ^ 
                                                     (0x80000000U 
                                                      & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                         << 1U))) 
                                                    ^ 
                                                    (0x80000000U 
                                                     & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                        << 2U))) 
                                                   ^ 
                                                   (0x80000000U 
                                                    & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                       << 3U))) 
                                                  ^ 
                                                  (0x80000000U 
                                                   & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      << 4U))) 
                                                 ^ 
                                                 (0x80000000U 
                                                  & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     << 6U))) 
                                                ^ (0x80000000U 
                                                   & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      << 7U))) 
                                               ^ (0x80000000U 
                                                  & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     << 8U))) 
                                              ^ (0x80000000U 
                                                 & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                    << 0x10U))) 
                                             ^ (0x80000000U 
                                                & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                   << 0x14U))) 
                                            ^ (0x80000000U 
                                               & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                  << 0x16U))) 
                                           ^ (0x80000000U 
                                              & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                 << 0x17U))) 
                                          ^ (0x80000000U 
                                             & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                << 0x1aU))) 
                                         ^ (0x80000000U 
                                            & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                               << 0x1aU))) 
                                        ^ (0x80000000U 
                                           & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                              << 0x17U))) 
                                       ^ (0x80000000U 
                                          & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                             << 0x16U))) 
                                      ^ (0x80000000U 
                                         & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                            << 0x14U))) 
                                     ^ (0x80000000U 
                                        & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                           << 0x10U))) 
                                    ^ (0x80000000U 
                                       & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                          << 8U))) 
                                   ^ (0x80000000U & 
                                      (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                       << 7U))) ^ (0x80000000U 
                                                   & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                      << 6U))) 
                                 ^ (0x80000000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                   << 4U))) 
                                ^ (0x80000000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                  << 3U))) 
                               ^ (0x80000000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                 << 2U))) 
                              ^ (0x80000000U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                                                << 1U))) 
                             ^ (0x80000000U & vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data))));
}
