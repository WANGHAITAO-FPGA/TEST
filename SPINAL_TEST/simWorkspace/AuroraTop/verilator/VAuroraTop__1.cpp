// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAuroraTop.h for the primary calling header

#include "VAuroraTop.h"
#include "VAuroraTop__Syms.h"

VL_INLINE_OPT void VAuroraTop::_sequent__TOP__10(VAuroraTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAuroraTop::_sequent__TOP__10\n"); );
    VAuroraTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->__Vdlyvset__AuroraTop__DOT__auroraArea_auroraTxBlockRam__DOT__bram__v0) {
        vlTOPp->AuroraTop__DOT__auroraArea_auroraTxBlockRam__DOT__bram[vlTOPp->__Vdlyvdim0__AuroraTop__DOT__auroraArea_auroraTxBlockRam__DOT__bram__v0] 
            = vlTOPp->__Vdlyvval__AuroraTop__DOT__auroraArea_auroraTxBlockRam__DOT__bram__v0;
    }
    vlTOPp->AuroraTop__DOT__toparea_tx_triger_temp_delay_1 
        = vlTOPp->AuroraTop__DOT__toparea_tx_triger_temp;
    vlTOPp->AuroraTop__DOT__toparea_tx_triger_temp_delay_2 
        = vlTOPp->AuroraTop__DOT__toparea_tx_triger_temp_delay_1_1;
    vlTOPp->AuroraTop__DOT__toparea_tx_triger_temp_delay_3 
        = vlTOPp->AuroraTop__DOT__toparea_tx_triger_temp_delay_2_1;
    vlTOPp->AuroraTop__DOT__toparea_tx_triger_temp_delay_1_1 
        = vlTOPp->AuroraTop__DOT__toparea_tx_triger_temp;
    vlTOPp->AuroraTop__DOT__toparea_tx_triger_temp_delay_2_1 
        = vlTOPp->AuroraTop__DOT__toparea_tx_triger_temp_delay_1_2;
    vlTOPp->AuroraTop__DOT__toparea_tx_triger_temp_delay_1_2 
        = vlTOPp->AuroraTop__DOT__toparea_tx_triger_temp;
}

VL_INLINE_OPT void VAuroraTop::_sequent__TOP__11(VAuroraTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAuroraTop::_sequent__TOP__11\n"); );
    VAuroraTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AuroraTop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state 
        = vlTOPp->__Vdly__AuroraTop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state;
    vlTOPp->AuroraTop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_mem_addr 
        = vlTOPp->__Vdly__AuroraTop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_mem_addr;
    vlTOPp->__Vtableidx1 = vlTOPp->AuroraTop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state;
    vlTOPp->AuroraTop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state_string 
        = vlTOPp->__Vtable1_AuroraTop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state_string
        [vlTOPp->__Vtableidx1];
    vlTOPp->AuroraTop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_mem_wren 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->AuroraTop__DOT__auroraArea_aurorarxcore__DOT__when_Gtx_Rx_l106) 
                                         | ((IData)(vlTOPp->AuroraTop__DOT__auroraArea_aurorarxcore__DOT__when_Gtx_Rx_l111) 
                                            | (IData)(vlTOPp->AuroraTop__DOT__auroraArea_aurorarxcore__DOT__when_Gtx_Rx_l120))));
    vlTOPp->AuroraTop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_mem_wrwe 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->AuroraTop__DOT__auroraArea_aurorarxcore__DOT__when_Gtx_Rx_l106)
                                           ? 0xfU : 
                                          ((IData)(vlTOPp->AuroraTop__DOT__auroraArea_aurorarxcore__DOT__when_Gtx_Rx_l111)
                                            ? 0xfU : 
                                           ((IData)(vlTOPp->AuroraTop__DOT__auroraArea_aurorarxcore__DOT__when_Gtx_Rx_l120)
                                             ? 0xfU
                                             : 0U))));
    if (vlTOPp->reset) {
        vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_last = 0U;
        vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_mem_rden = 0U;
        vlTOPp->__Vdly__AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_mem_addrtemp = 0U;
        vlTOPp->__Vdly__AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state = 0U;
    } else {
        if ((4U & (IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) {
            if ((2U & (IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) {
                if ((1U & (IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) {
                    if (((IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore_axiw_valid) 
                         & (IData)(vlTOPp->axiw_ready))) {
                        vlTOPp->__Vdly__AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state = 0U;
                    }
                } else {
                    if (((IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore_axiw_valid) 
                         & (IData)(vlTOPp->axiw_ready))) {
                        vlTOPp->__Vdly__AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state = 7U;
                    }
                }
            } else {
                if ((1U & (IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) {
                    if (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__axiw_fire_3) {
                        if (((IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_data_cnt) 
                             < (0xffU & ((IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_length) 
                                         - (IData)(1U))))) {
                            vlTOPp->__Vdly__AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_mem_addrtemp 
                                = (0xffU & ((IData)(1U) 
                                            + (IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_mem_addrtemp)));
                        } else {
                            vlTOPp->__Vdly__AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state = 6U;
                        }
                    }
                } else {
                    if (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__axiw_fire_3) {
                        vlTOPp->__Vdly__AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_mem_addrtemp 
                            = (0xffU & ((IData)(1U) 
                                        + (IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_mem_addrtemp)));
                        vlTOPp->__Vdly__AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state = 5U;
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) {
                if ((1U & (IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) {
                    if (((IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore_axiw_valid) 
                         & (IData)(vlTOPp->axiw_ready))) {
                        vlTOPp->__Vdly__AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state = 4U;
                    }
                } else {
                    if (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__axiw_fire_3) {
                        vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_mem_rden = 1U;
                        vlTOPp->__Vdly__AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_mem_addrtemp 
                            = ((0U == (0xffU & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txhead 
                                                >> 8U)))
                                ? 1U : (0xffU & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txhead 
                                                 >> 8U)));
                        vlTOPp->__Vdly__AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state = 3U;
                    }
                }
            } else {
                if ((1U & (IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) {
                    if (vlTOPp->axiw_ready) {
                        vlTOPp->__Vdly__AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state = 2U;
                    }
                } else {
                    vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_last = 0U;
                    if (((IData)(vlTOPp->AuroraTop__DOT__toparea_tx_senddatatriger) 
                         & (IData)(vlTOPp->axiw_ready))) {
                        vlTOPp->__Vdly__AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state = 2U;
                    } else {
                        if (((IData)(vlTOPp->AuroraTop__DOT__toparea_tx_senddatatriger) 
                             & (~ (IData)(vlTOPp->axiw_ready)))) {
                            vlTOPp->__Vdly__AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_mem_addrtemp 
        = vlTOPp->__Vdly__AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_mem_addrtemp;
}

VL_INLINE_OPT void VAuroraTop::_sequent__TOP__12(VAuroraTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAuroraTop::_sequent__TOP__12\n"); );
    VAuroraTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AuroraTop__DOT__toparea_tx_triger_temp 
        = ((IData)(vlTOPp->AuroraTop__DOT__toparea_tx_triger) 
           & (IData)(vlTOPp->AuroraTop__DOT__toparea_triger));
    vlTOPp->AuroraTop__DOT__toparea_tx_senddatatriger 
        = ((~ (IData)(vlTOPp->reset)) & ((((IData)(vlTOPp->AuroraTop__DOT__toparea_tx_ctrl_temp) 
                                           | (IData)(vlTOPp->AuroraTop__DOT__toparea_tx_ctrl_temp_delay_1)) 
                                          | (IData)(vlTOPp->AuroraTop__DOT__toparea_tx_ctrl_temp_delay_2)) 
                                         | (IData)(vlTOPp->AuroraTop__DOT__toparea_tx_ctrl_temp_delay_3)));
}

VL_INLINE_OPT void VAuroraTop::_combo__TOP__13(VAuroraTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAuroraTop::_combo__TOP__13\n"); );
    VAuroraTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AuroraTop__DOT__auroraArea_aurorarxcore__DOT__when_Gtx_Rx_l106 
        = ((3U == (IData)(vlTOPp->AuroraTop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state)) 
           & (IData)(vlTOPp->axir_valid));
    vlTOPp->AuroraTop__DOT__auroraArea_aurorarxcore__DOT__when_Gtx_Rx_l111 
        = ((4U == (IData)(vlTOPp->AuroraTop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state)) 
           & (IData)(vlTOPp->axir_valid));
    vlTOPp->AuroraTop__DOT__auroraArea_aurorarxcore__DOT__when_Gtx_Rx_l120 
        = (((5U == (IData)(vlTOPp->AuroraTop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state)) 
            & (IData)(vlTOPp->axir_valid)) & ((IData)(vlTOPp->AuroraTop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_data_cnt) 
                                              < (0xffU 
                                                 & ((IData)(vlTOPp->AuroraTop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_length) 
                                                    - (IData)(1U)))));
}

VL_INLINE_OPT void VAuroraTop::_sequent__TOP__14(VAuroraTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAuroraTop::_sequent__TOP__14\n"); );
    VAuroraTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_data_cnt 
        = vlTOPp->__Vdly__AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_data_cnt;
    if ((1U & (~ ((IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) {
            if ((1U & (~ (IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state)))) {
                if (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__axiw_fire_3) {
                    vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_length 
                        = (0xffU & vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txhead);
                }
            }
        }
    }
    vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txhead 
        = vlTOPp->AuroraTop__DOT__toparea_tx_headtemp;
}

VL_INLINE_OPT void VAuroraTop::_sequent__TOP__15(VAuroraTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAuroraTop::_sequent__TOP__15\n"); );
    VAuroraTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AuroraTop__DOT__toparea_tx_ctrl_temp_delay_3 
        = vlTOPp->AuroraTop__DOT__toparea_tx_ctrl_temp_delay_2;
    if ((0x1000cU == vlTOPp->apb_PADDR)) {
        if (vlTOPp->AuroraTop__DOT__toparea_ctrl_doWrite) {
            vlTOPp->AuroraTop__DOT__toparea_tx_headtemp 
                = vlTOPp->apb_PWDATA;
        }
    }
    vlTOPp->AuroraTop__DOT__toparea_tx_ctrl_temp_delay_2 
        = vlTOPp->AuroraTop__DOT__toparea_tx_ctrl_temp_delay_1;
    vlTOPp->AuroraTop__DOT__toparea_tx_ctrl_temp_delay_1 
        = vlTOPp->AuroraTop__DOT__toparea_tx_ctrl_temp;
}

VL_INLINE_OPT void VAuroraTop::_sequent__TOP__16(VAuroraTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAuroraTop::_sequent__TOP__16\n"); );
    VAuroraTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state 
        = vlTOPp->__Vdly__AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state;
    vlTOPp->__Vtableidx2 = vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state;
    vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state_string 
        = vlTOPp->__Vtable2_AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state_string
        [vlTOPp->__Vtableidx2];
    vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_1 = 0U;
    if ((2U == (IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) {
        vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_1 = 0xffbcU;
    }
    vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_2 
        = vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_1;
    if ((2U != (IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) {
        if ((3U == (IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) {
            vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_2 = 1U;
        }
    }
}

VL_INLINE_OPT void VAuroraTop::_combo__TOP__17(VAuroraTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAuroraTop::_combo__TOP__17\n"); );
    VAuroraTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AuroraTop__DOT__toparea_ctrl_doWrite = 
        (((IData)(vlTOPp->apb_PSEL) & (IData)(vlTOPp->apb_PENABLE)) 
         & (IData)(vlTOPp->apb_PWRITE));
    vlTOPp->apb_PRDATA = 0U;
    if ((0x10004U == vlTOPp->apb_PADDR)) {
        vlTOPp->apb_PRDATA = ((0xfffffffeU & vlTOPp->apb_PRDATA) 
                              | (IData)(vlTOPp->AuroraTop__DOT__toparea_tx_ctrl));
        vlTOPp->apb_PRDATA = ((0xffffffefU & vlTOPp->apb_PRDATA) 
                              | ((IData)(vlTOPp->AuroraTop__DOT__toparea_tx_triger) 
                                 << 4U));
    } else {
        if ((0x1000cU == vlTOPp->apb_PADDR)) {
            vlTOPp->apb_PRDATA = vlTOPp->AuroraTop__DOT__toparea_tx_headtemp;
        }
    }
    vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore_axiw_valid 
        = ((IData)(vlTOPp->axiw_ready) & (0U != (IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state)));
    vlTOPp->AuroraTop__DOT__when_AuroraTop_l46 = 0U;
    if ((0x10004U == vlTOPp->apb_PADDR)) {
        if (vlTOPp->AuroraTop__DOT__toparea_ctrl_doWrite) {
            vlTOPp->AuroraTop__DOT__when_AuroraTop_l46 = 1U;
        }
    }
    vlTOPp->axiw_valid = vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore_axiw_valid;
    vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__axiw_fire_3 
        = ((IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore_axiw_valid) 
           & (IData)(vlTOPp->axiw_ready));
    vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__when_Gtx_Tx_l140 
        = ((7U == (IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state)) 
           & ((IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore_axiw_valid) 
              & (IData)(vlTOPp->axiw_ready)));
    vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_last_1 
        = vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_last;
    if (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__when_Gtx_Tx_l140) {
        vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_last_1 = 1U;
    }
    vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_last_2 
        = vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_last_1;
    if ((1U & (~ (IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__when_Gtx_Tx_l140)))) {
        vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_last_2 = 0U;
    }
    vlTOPp->axiw_payload_last = vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_last_2;
}

VL_INLINE_OPT void VAuroraTop::_sequent__TOP__18(VAuroraTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAuroraTop::_sequent__TOP__18\n"); );
    VAuroraTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AuroraTop__DOT__toparea_tx_ctrl_temp = 
        ((IData)(vlTOPp->AuroraTop__DOT__toparea_tx_ctrl) 
         & (IData)(vlTOPp->AuroraTop__DOT__toparea_triger));
}

VL_INLINE_OPT void VAuroraTop::_multiclk__TOP__19(VAuroraTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAuroraTop::_multiclk__TOP__19\n"); );
    VAuroraTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_3 
        = vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_2;
    if ((2U != (IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) {
        if ((3U != (IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) {
            if ((4U == (IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) {
                vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_3 
                    = vlTOPp->AuroraTop__DOT__toparea_tx_headtemp;
            }
        }
    }
    vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_4 
        = vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_3;
    if ((2U != (IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) {
        if ((3U != (IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) {
            if ((4U != (IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) {
                if ((5U == (IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) {
                    vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_4 
                        = vlTOPp->AuroraTop__DOT__auroraArea_auroraTxBlockRam__DOT___zz_bram_port0;
                }
            }
        }
    }
    vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_5 
        = vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_4;
    if ((2U != (IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) {
        if ((3U != (IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) {
            if ((4U != (IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) {
                if ((5U != (IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) {
                    if ((6U == (IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) {
                        vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_5 
                            = vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data;
                    }
                }
            }
        }
    }
    vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_6 
        = vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_5;
    if ((2U != (IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) {
        if ((3U != (IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) {
            if ((4U != (IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) {
                if ((5U != (IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) {
                    if ((6U != (IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) {
                        if ((7U == (IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) {
                            vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_6 = 0xffbdU;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
        = vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_6;
    if ((2U != (IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) {
        if ((3U != (IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) {
            if ((4U != (IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) {
                if ((5U != (IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) {
                    if ((6U != (IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) {
                        if ((7U != (IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) {
                            vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 = 0U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->axiw_payload_data = vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7;
    vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__crc32_2_crc_o 
        = ((0xfffffffeU & vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__crc32_2_crc_o) 
           | (1U & ((((((((((((((((((((((((((vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                             >> 0x1fU) 
                                            ^ (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                               >> 0x1eU)) 
                                           ^ (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                              >> 0x1dU)) 
                                          ^ (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                             >> 0x1cU)) 
                                         ^ (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                            >> 0x1aU)) 
                                        ^ (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                           >> 0x19U)) 
                                       ^ (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                          >> 0x18U)) 
                                      ^ (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                         >> 0x10U)) 
                                     ^ (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                        >> 0xcU)) ^ 
                                    (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                     >> 0xaU)) ^ (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                  >> 9U)) 
                                  ^ (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                     >> 6U)) ^ vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7) 
                                ^ vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data) 
                               ^ (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                  >> 6U)) ^ (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                             >> 9U)) 
                             ^ (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                >> 0xaU)) ^ (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                             >> 0xcU)) 
                           ^ (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                              >> 0x10U)) ^ (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                            >> 0x18U)) 
                         ^ (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                            >> 0x19U)) ^ (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                          >> 0x1aU)) 
                       ^ (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                          >> 0x1cU)) ^ (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                        >> 0x1dU)) 
                     ^ (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                        >> 0x1eU)) ^ (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                      >> 0x1fU))));
    vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__crc32_2_crc_o 
        = ((0xfffffffdU & vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__crc32_2_crc_o) 
           | (2U & ((((((((((((((((((((((((((0x1eU 
                                             & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                >> 0x1bU)) 
                                            ^ (0x3eU 
                                               & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                  >> 0x1aU))) 
                                           ^ (0x1feU 
                                              & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                 >> 0x17U))) 
                                          ^ (0xfffeU 
                                             & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                >> 0x10U))) 
                                         ^ (0x1fffeU 
                                            & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                               >> 0xfU))) 
                                        ^ (0xffffeU 
                                           & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                              >> 0xcU))) 
                                       ^ (0x1ffffeU 
                                          & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                             >> 0xbU))) 
                                      ^ (0x3ffffeU 
                                         & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                            >> 0xaU))) 
                                     ^ (0xfffffeU & 
                                        (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                         >> 8U))) ^ 
                                    (0x3fffffeU & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                   >> 6U))) 
                                   ^ (0x7fffffeU & 
                                      (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                       >> 5U))) ^ (0xfffffffeU 
                                                   & vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7)) 
                                 ^ (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                    << 1U)) ^ (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                               << 1U)) 
                               ^ (0xfffffffeU & vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data)) 
                              ^ (0x7fffffeU & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                               >> 5U))) 
                             ^ (0x3fffffeU & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                              >> 6U))) 
                            ^ (0xfffffeU & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                            >> 8U))) 
                           ^ (0x3ffffeU & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                           >> 0xaU))) 
                          ^ (0x1ffffeU & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                          >> 0xbU))) 
                         ^ (0xffffeU & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                        >> 0xcU))) 
                        ^ (0x1fffeU & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                       >> 0xfU))) ^ 
                       (0xfffeU & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                   >> 0x10U))) ^ (0x1feU 
                                                  & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                     >> 0x17U))) 
                     ^ (0x3eU & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                 >> 0x1aU))) ^ (0x1eU 
                                                & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                   >> 0x1bU)))));
    vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__crc32_2_crc_o 
        = ((0xfffffffbU & vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__crc32_2_crc_o) 
           | (4U & ((((((((((((((((((((((((((((((((4U 
                                                   & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      >> 0x1dU)) 
                                                  ^ 
                                                  (0xcU 
                                                   & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      >> 0x1cU))) 
                                                 ^ 
                                                 (0xfcU 
                                                  & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     >> 0x18U))) 
                                                ^ (0x3fcU 
                                                   & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      >> 0x16U))) 
                                               ^ (0xfffcU 
                                                  & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     >> 0x10U))) 
                                              ^ (0x1fffcU 
                                                 & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                    >> 0xfU))) 
                                             ^ (0x3fffcU 
                                                & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                   >> 0xeU))) 
                                            ^ (0xffffcU 
                                               & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                  >> 0xcU))) 
                                           ^ (0x1ffffcU 
                                              & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                 >> 0xbU))) 
                                          ^ (0x1fffffcU 
                                             & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                >> 7U))) 
                                         ^ (0x3fffffcU 
                                            & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                               >> 6U))) 
                                        ^ (0x7fffffcU 
                                           & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                              >> 5U))) 
                                       ^ (0xffffffcU 
                                          & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                             >> 4U))) 
                                      ^ (0xfffffffcU 
                                         & vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7)) 
                                     ^ (0xfffffffcU 
                                        & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                           << 1U))) 
                                    ^ (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                       << 2U)) ^ (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                  << 2U)) 
                                  ^ (0xfffffffcU & 
                                     (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                      << 1U))) ^ (0xfffffffcU 
                                                  & vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data)) 
                                ^ (0xffffffcU & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                 >> 4U))) 
                               ^ (0x7fffffcU & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                >> 5U))) 
                              ^ (0x3fffffcU & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                               >> 6U))) 
                             ^ (0x1fffffcU & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                              >> 7U))) 
                            ^ (0x1ffffcU & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                            >> 0xbU))) 
                           ^ (0xffffcU & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                          >> 0xcU))) 
                          ^ (0x3fffcU & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                         >> 0xeU))) 
                         ^ (0x1fffcU & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                        >> 0xfU))) 
                        ^ (0xfffcU & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                      >> 0x10U))) ^ 
                       (0x3fcU & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                  >> 0x16U))) ^ (0xfcU 
                                                 & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                    >> 0x18U))) 
                     ^ (0xcU & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                >> 0x1cU))) ^ (4U & 
                                               (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                >> 0x1dU)))));
    vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__crc32_2_crc_o 
        = ((0xfffffff7U & vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__crc32_2_crc_o) 
           | (8U & ((((((((((((((((((((((((((((((8U 
                                                 & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                    >> 0x1cU)) 
                                                ^ (0xf8U 
                                                   & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      >> 0x18U))) 
                                               ^ (0x3f8U 
                                                  & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     >> 0x16U))) 
                                              ^ (0xfff8U 
                                                 & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                    >> 0x10U))) 
                                             ^ (0x1fff8U 
                                                & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                   >> 0xfU))) 
                                            ^ (0x3fff8U 
                                               & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                  >> 0xeU))) 
                                           ^ (0xffff8U 
                                              & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                 >> 0xcU))) 
                                          ^ (0x1ffff8U 
                                             & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                >> 0xbU))) 
                                         ^ (0x1fffff8U 
                                            & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                               >> 7U))) 
                                        ^ (0x3fffff8U 
                                           & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                              >> 6U))) 
                                       ^ (0x7fffff8U 
                                          & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                             >> 5U))) 
                                      ^ (0xffffff8U 
                                         & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                            >> 4U))) 
                                     ^ (0xfffffff8U 
                                        & vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7)) 
                                    ^ (0xfffffff8U 
                                       & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                          << 1U))) 
                                   ^ (0xfffffff8U & 
                                      (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                       << 2U))) ^ (0xfffffff8U 
                                                   & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                      << 2U))) 
                                 ^ (0xfffffff8U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                   << 1U))) 
                                ^ (0xfffffff8U & vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data)) 
                               ^ (0xffffff8U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                >> 4U))) 
                              ^ (0x7fffff8U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                               >> 5U))) 
                             ^ (0x3fffff8U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                              >> 6U))) 
                            ^ (0x1fffff8U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                             >> 7U))) 
                           ^ (0x1ffff8U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                           >> 0xbU))) 
                          ^ (0xffff8U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                         >> 0xcU))) 
                         ^ (0x3fff8U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                        >> 0xeU))) 
                        ^ (0x1fff8U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                       >> 0xfU))) ^ 
                       (0xfff8U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                   >> 0x10U))) ^ (0x3f8U 
                                                  & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                     >> 0x16U))) 
                     ^ (0xf8U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                 >> 0x18U))) ^ (8U 
                                                & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                   >> 0x1cU)))));
    vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__crc32_2_crc_o 
        = ((0xffffffefU & vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__crc32_2_crc_o) 
           | (0x10U & (((((((((((((((((((((((((((((
                                                   (((((0x10U 
                                                        & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                           >> 0x1bU)) 
                                                       ^ 
                                                       (0x30U 
                                                        & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                           >> 0x1aU))) 
                                                      ^ 
                                                      (0x70U 
                                                       & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                          >> 0x19U))) 
                                                     ^ 
                                                     (0x7f0U 
                                                      & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                         >> 0x15U))) 
                                                    ^ 
                                                    (0xff0U 
                                                     & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                        >> 0x14U))) 
                                                   ^ 
                                                   (0xfff0U 
                                                    & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                       >> 0x10U))) 
                                                  ^ 
                                                  (0x1fff0U 
                                                   & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      >> 0xfU))) 
                                                 ^ 
                                                 (0x3fff0U 
                                                  & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     >> 0xeU))) 
                                                ^ (0x1ffff0U 
                                                   & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      >> 0xbU))) 
                                               ^ (0xfffff0U 
                                                  & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     >> 8U))) 
                                              ^ (0x1fffff0U 
                                                 & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                    >> 7U))) 
                                             ^ (0xffffff0U 
                                                & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                   >> 4U))) 
                                            ^ (0x3ffffff0U 
                                               & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                  >> 2U))) 
                                           ^ (0xfffffff0U 
                                              & vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7)) 
                                          ^ (0xfffffff0U 
                                             & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                << 1U))) 
                                         ^ (0xfffffff0U 
                                            & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                               << 2U))) 
                                        ^ (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                           << 4U)) 
                                       ^ (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                          << 4U)) ^ 
                                      (0xfffffff0U 
                                       & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                          << 2U))) 
                                     ^ (0xfffffff0U 
                                        & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                           << 1U))) 
                                    ^ (0xfffffff0U 
                                       & vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data)) 
                                   ^ (0x3ffffff0U & 
                                      (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                       >> 2U))) ^ (0xffffff0U 
                                                   & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                      >> 4U))) 
                                 ^ (0x1fffff0U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                  >> 7U))) 
                                ^ (0xfffff0U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                >> 8U))) 
                               ^ (0x1ffff0U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                               >> 0xbU))) 
                              ^ (0x3fff0U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                             >> 0xeU))) 
                             ^ (0x1fff0U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                            >> 0xfU))) 
                            ^ (0xfff0U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                          >> 0x10U))) 
                           ^ (0xff0U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                        >> 0x14U))) 
                          ^ (0x7f0U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                       >> 0x15U))) 
                         ^ (0x70U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                     >> 0x19U))) ^ 
                        (0x30U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                  >> 0x1aU))) ^ (0x10U 
                                                 & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                    >> 0x1bU)))));
    vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__crc32_2_crc_o 
        = ((0xffffffdfU & vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__crc32_2_crc_o) 
           | (0x20U & (((((((((((((((((((((((((((((
                                                   (0xe0U 
                                                    & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                       >> 0x18U)) 
                                                   ^ 
                                                   (0x1e0U 
                                                    & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                       >> 0x17U))) 
                                                  ^ 
                                                  (0x1fe0U 
                                                   & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      >> 0x13U))) 
                                                 ^ 
                                                 (0xffe0U 
                                                  & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     >> 0x10U))) 
                                                ^ (0x1ffe0U 
                                                   & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      >> 0xfU))) 
                                               ^ (0x3ffe0U 
                                                  & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     >> 0xeU))) 
                                              ^ (0xffffe0U 
                                                 & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                    >> 8U))) 
                                             ^ (0x7ffffe0U 
                                                & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                   >> 5U))) 
                                            ^ (0x3fffffe0U 
                                               & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                  >> 2U))) 
                                           ^ (0x7fffffe0U 
                                              & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                 >> 1U))) 
                                          ^ (0xffffffe0U 
                                             & vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7)) 
                                         ^ (0xffffffe0U 
                                            & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                               << 1U))) 
                                        ^ (0xffffffe0U 
                                           & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                              << 2U))) 
                                       ^ (0xffffffe0U 
                                          & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                             << 4U))) 
                                      ^ (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                         << 5U)) ^ 
                                     (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                      << 5U)) ^ (0xffffffe0U 
                                                 & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                    << 4U))) 
                                   ^ (0xffffffe0U & 
                                      (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                       << 2U))) ^ (0xffffffe0U 
                                                   & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                      << 1U))) 
                                 ^ (0xffffffe0U & vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data)) 
                                ^ (0x7fffffe0U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                  >> 1U))) 
                               ^ (0x3fffffe0U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                 >> 2U))) 
                              ^ (0x7ffffe0U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                               >> 5U))) 
                             ^ (0xffffe0U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                             >> 8U))) 
                            ^ (0x3ffe0U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                           >> 0xeU))) 
                           ^ (0x1ffe0U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                          >> 0xfU))) 
                          ^ (0xffe0U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                        >> 0x10U))) 
                         ^ (0x1fe0U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                       >> 0x13U))) 
                        ^ (0x1e0U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                     >> 0x17U))) ^ 
                       (0xe0U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                 >> 0x18U)))));
    vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__crc32_2_crc_o 
        = ((0xffffffbfU & vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__crc32_2_crc_o) 
           | (0x40U & (((((((((((((((((((((((((((((
                                                   (0xc0U 
                                                    & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                       >> 0x18U)) 
                                                   ^ 
                                                   (0x1c0U 
                                                    & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                       >> 0x17U))) 
                                                  ^ 
                                                  (0x1fc0U 
                                                   & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      >> 0x13U))) 
                                                 ^ 
                                                 (0xffc0U 
                                                  & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     >> 0x10U))) 
                                                ^ (0x1ffc0U 
                                                   & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      >> 0xfU))) 
                                               ^ (0x3ffc0U 
                                                  & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     >> 0xeU))) 
                                              ^ (0xffffc0U 
                                                 & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                    >> 8U))) 
                                             ^ (0x7ffffc0U 
                                                & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                   >> 5U))) 
                                            ^ (0x3fffffc0U 
                                               & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                  >> 2U))) 
                                           ^ (0x7fffffc0U 
                                              & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                 >> 1U))) 
                                          ^ (0xffffffc0U 
                                             & vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7)) 
                                         ^ (0xffffffc0U 
                                            & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                               << 1U))) 
                                        ^ (0xffffffc0U 
                                           & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                              << 2U))) 
                                       ^ (0xffffffc0U 
                                          & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                             << 4U))) 
                                      ^ (0xffffffc0U 
                                         & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                            << 5U))) 
                                     ^ (0xffffffc0U 
                                        & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                           << 5U))) 
                                    ^ (0xffffffc0U 
                                       & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                          << 4U))) 
                                   ^ (0xffffffc0U & 
                                      (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                       << 2U))) ^ (0xffffffc0U 
                                                   & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                      << 1U))) 
                                 ^ (0xffffffc0U & vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data)) 
                                ^ (0x7fffffc0U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                  >> 1U))) 
                               ^ (0x3fffffc0U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                 >> 2U))) 
                              ^ (0x7ffffc0U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                               >> 5U))) 
                             ^ (0xffffc0U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                             >> 8U))) 
                            ^ (0x3ffc0U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                           >> 0xeU))) 
                           ^ (0x1ffc0U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                          >> 0xfU))) 
                          ^ (0xffc0U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                        >> 0x10U))) 
                         ^ (0x1fc0U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                       >> 0x13U))) 
                        ^ (0x1c0U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                     >> 0x17U))) ^ 
                       (0xc0U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                 >> 0x18U)))));
    vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__crc32_2_crc_o 
        = ((0xffffff7fU & vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__crc32_2_crc_o) 
           | (0x80U & (((((((((((((((((((((((((((((
                                                   (((0x380U 
                                                      & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                         >> 0x16U)) 
                                                     ^ 
                                                     (0x780U 
                                                      & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                         >> 0x15U))) 
                                                    ^ 
                                                    (0x3f80U 
                                                     & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                        >> 0x12U))) 
                                                   ^ 
                                                   (0x7f80U 
                                                    & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                       >> 0x11U))) 
                                                  ^ 
                                                  (0xff80U 
                                                   & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      >> 0x10U))) 
                                                 ^ 
                                                 (0x1ff80U 
                                                  & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     >> 0xfU))) 
                                                ^ (0x3ff80U 
                                                   & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      >> 0xeU))) 
                                               ^ (0x7fff80U 
                                                  & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     >> 9U))) 
                                              ^ (0xffff80U 
                                                 & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                    >> 8U))) 
                                             ^ (0x1fffff80U 
                                                & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                   >> 3U))) 
                                            ^ (0x7fffff80U 
                                               & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                  >> 1U))) 
                                           ^ (0xffffff80U 
                                              & vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7)) 
                                          ^ (0xffffff80U 
                                             & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                << 2U))) 
                                         ^ (0xffffff80U 
                                            & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                               << 4U))) 
                                        ^ (0xffffff80U 
                                           & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                              << 5U))) 
                                       ^ (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                          << 7U)) ^ 
                                      (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                       << 7U)) ^ (0xffffff80U 
                                                  & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                     << 5U))) 
                                    ^ (0xffffff80U 
                                       & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                          << 4U))) 
                                   ^ (0xffffff80U & 
                                      (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                       << 2U))) ^ (0xffffff80U 
                                                   & vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data)) 
                                 ^ (0x7fffff80U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                   >> 1U))) 
                                ^ (0x1fffff80U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                  >> 3U))) 
                               ^ (0xffff80U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                               >> 8U))) 
                              ^ (0x7fff80U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                              >> 9U))) 
                             ^ (0x3ff80U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                            >> 0xeU))) 
                            ^ (0x1ff80U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                           >> 0xfU))) 
                           ^ (0xff80U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                         >> 0x10U))) 
                          ^ (0x7f80U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                        >> 0x11U))) 
                         ^ (0x3f80U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                       >> 0x12U))) 
                        ^ (0x780U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                     >> 0x15U))) ^ 
                       (0x380U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                  >> 0x16U)))));
    vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__crc32_2_crc_o 
        = ((0xfffffeffU & vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__crc32_2_crc_o) 
           | (0x100U & ((((((((((((((((((((((((((0x100U 
                                                 & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                    >> 0x17U)) 
                                                ^ (0xf00U 
                                                   & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      >> 0x14U))) 
                                               ^ (0x1ff00U 
                                                  & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     >> 0xfU))) 
                                              ^ (0x3ff00U 
                                                 & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                    >> 0xeU))) 
                                             ^ (0x7fff00U 
                                                & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                   >> 9U))) 
                                            ^ (0xfffff00U 
                                               & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                  >> 4U))) 
                                           ^ (0x1fffff00U 
                                              & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                 >> 3U))) 
                                          ^ (0x3fffff00U 
                                             & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                >> 2U))) 
                                         ^ (0xffffff00U 
                                            & vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7)) 
                                        ^ (0xffffff00U 
                                           & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                              << 4U))) 
                                       ^ (0xffffff00U 
                                          & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                             << 5U))) 
                                      ^ (0xffffff00U 
                                         & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                            << 7U))) 
                                     ^ (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                        << 8U)) ^ (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                   << 8U)) 
                                   ^ (0xffffff00U & 
                                      (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                       << 7U))) ^ (0xffffff00U 
                                                   & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                      << 5U))) 
                                 ^ (0xffffff00U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                   << 4U))) 
                                ^ (0xffffff00U & vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data)) 
                               ^ (0x3fffff00U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                 >> 2U))) 
                              ^ (0x1fffff00U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                >> 3U))) 
                             ^ (0xfffff00U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                              >> 4U))) 
                            ^ (0x7fff00U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                            >> 9U))) 
                           ^ (0x3ff00U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                          >> 0xeU))) 
                          ^ (0x1ff00U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                         >> 0xfU))) 
                         ^ (0xf00U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                      >> 0x14U))) ^ 
                        (0x100U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                   >> 0x17U)))));
    vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__crc32_2_crc_o 
        = ((0xfffffdffU & vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__crc32_2_crc_o) 
           | (0x200U & ((((((((((((((((((((((((0xe00U 
                                               & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                  >> 0x14U)) 
                                              ^ (0x1fe00U 
                                                 & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                    >> 0xfU))) 
                                             ^ (0x3fe00U 
                                                & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                   >> 0xeU))) 
                                            ^ (0x7ffe00U 
                                               & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                  >> 9U))) 
                                           ^ (0xffffe00U 
                                              & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                 >> 4U))) 
                                          ^ (0x1ffffe00U 
                                             & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                >> 3U))) 
                                         ^ (0x3ffffe00U 
                                            & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                               >> 2U))) 
                                        ^ (0xfffffe00U 
                                           & vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7)) 
                                       ^ (0xfffffe00U 
                                          & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                             << 4U))) 
                                      ^ (0xfffffe00U 
                                         & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                            << 5U))) 
                                     ^ (0xfffffe00U 
                                        & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                           << 7U))) 
                                    ^ (0xfffffe00U 
                                       & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                          << 8U))) 
                                   ^ (0xfffffe00U & 
                                      (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                       << 8U))) ^ (0xfffffe00U 
                                                   & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                      << 7U))) 
                                 ^ (0xfffffe00U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                   << 5U))) 
                                ^ (0xfffffe00U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                  << 4U))) 
                               ^ (0xfffffe00U & vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data)) 
                              ^ (0x3ffffe00U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                >> 2U))) 
                             ^ (0x1ffffe00U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                               >> 3U))) 
                            ^ (0xffffe00U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                             >> 4U))) 
                           ^ (0x7ffe00U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                           >> 9U))) 
                          ^ (0x3fe00U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                         >> 0xeU))) 
                         ^ (0x1fe00U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                        >> 0xfU))) 
                        ^ (0xe00U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                     >> 0x14U)))));
    vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__crc32_2_crc_o 
        = ((0xfffffbffU & vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__crc32_2_crc_o) 
           | (0x400U & ((((((((((((((((((((((((((0x400U 
                                                 & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                    >> 0x15U)) 
                                                ^ (0x1c00U 
                                                   & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      >> 0x13U))) 
                                               ^ (0x3c00U 
                                                  & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     >> 0x12U))) 
                                              ^ (0xfc00U 
                                                 & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                    >> 0x10U))) 
                                             ^ (0x7ffc00U 
                                                & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                   >> 9U))) 
                                            ^ (0x3fffc00U 
                                               & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                  >> 6U))) 
                                           ^ (0xffffc00U 
                                              & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                 >> 4U))) 
                                          ^ (0x1ffffc00U 
                                             & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                >> 3U))) 
                                         ^ (0xfffffc00U 
                                            & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                               << 1U))) 
                                        ^ (0xfffffc00U 
                                           & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                              << 5U))) 
                                       ^ (0xfffffc00U 
                                          & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                             << 7U))) 
                                      ^ (0xfffffc00U 
                                         & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                            << 8U))) 
                                     ^ (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                        << 0xaU)) ^ 
                                    (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                     << 0xaU)) ^ (0xfffffc00U 
                                                  & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                     << 8U))) 
                                  ^ (0xfffffc00U & 
                                     (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                      << 7U))) ^ (0xfffffc00U 
                                                  & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                     << 5U))) 
                                ^ (0xfffffc00U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                  << 1U))) 
                               ^ (0x1ffffc00U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                 >> 3U))) 
                              ^ (0xffffc00U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                               >> 4U))) 
                             ^ (0x3fffc00U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                              >> 6U))) 
                            ^ (0x7ffc00U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                            >> 9U))) 
                           ^ (0xfc00U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                         >> 0x10U))) 
                          ^ (0x3c00U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                        >> 0x12U))) 
                         ^ (0x1c00U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                       >> 0x13U))) 
                        ^ (0x400U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                     >> 0x15U)))));
    vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__crc32_2_crc_o 
        = ((0xfffff7ffU & vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__crc32_2_crc_o) 
           | (0x800U & ((((((((((((((((((((((((((((
                                                   ((((((0x800U 
                                                         & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                            >> 0x14U)) 
                                                        ^ 
                                                        (0x7800U 
                                                         & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                            >> 0x11U))) 
                                                       ^ 
                                                       (0xf800U 
                                                        & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                           >> 0x10U))) 
                                                      ^ 
                                                      (0x1f800U 
                                                       & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                          >> 0xfU))) 
                                                     ^ 
                                                     (0x3f800U 
                                                      & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                         >> 0xeU))) 
                                                    ^ 
                                                    (0x7f800U 
                                                     & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                        >> 0xdU))) 
                                                   ^ 
                                                   (0x7ff800U 
                                                    & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                       >> 9U))) 
                                                  ^ 
                                                  (0x3fff800U 
                                                   & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      >> 6U))) 
                                                 ^ 
                                                 (0x7fff800U 
                                                  & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     >> 5U))) 
                                                ^ (0xffff800U 
                                                   & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      >> 4U))) 
                                               ^ (0x1ffff800U 
                                                  & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     >> 3U))) 
                                              ^ (0x7ffff800U 
                                                 & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                    >> 1U))) 
                                             ^ (0xfffff800U 
                                                & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                   << 2U))) 
                                            ^ (0xfffff800U 
                                               & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                  << 7U))) 
                                           ^ (0xfffff800U 
                                              & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                 << 8U))) 
                                          ^ (0xfffff800U 
                                             & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                << 0xaU))) 
                                         ^ (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                            << 0xbU)) 
                                        ^ (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                           << 0xbU)) 
                                       ^ (0xfffff800U 
                                          & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                             << 0xaU))) 
                                      ^ (0xfffff800U 
                                         & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                            << 8U))) 
                                     ^ (0xfffff800U 
                                        & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                           << 7U))) 
                                    ^ (0xfffff800U 
                                       & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                          << 2U))) 
                                   ^ (0x7ffff800U & 
                                      (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                       >> 1U))) ^ (0x1ffff800U 
                                                   & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                      >> 3U))) 
                                 ^ (0xffff800U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                  >> 4U))) 
                                ^ (0x7fff800U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                 >> 5U))) 
                               ^ (0x3fff800U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                >> 6U))) 
                              ^ (0x7ff800U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                              >> 9U))) 
                             ^ (0x7f800U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                            >> 0xdU))) 
                            ^ (0x3f800U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                           >> 0xeU))) 
                           ^ (0x1f800U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                          >> 0xfU))) 
                          ^ (0xf800U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                        >> 0x10U))) 
                         ^ (0x7800U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                       >> 0x11U))) 
                        ^ (0x800U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                     >> 0x14U)))));
    vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__crc32_2_crc_o 
        = ((0xffffefffU & vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__crc32_2_crc_o) 
           | (0x1000U & (((((((((((((((((((((((((((
                                                   (((((((0x1000U 
                                                          & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                             >> 0x13U)) 
                                                         ^ 
                                                         (0x3000U 
                                                          & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                             >> 0x12U))) 
                                                        ^ 
                                                        (0x1f000U 
                                                         & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                            >> 0xfU))) 
                                                       ^ 
                                                       (0xff000U 
                                                        & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                           >> 0xcU))) 
                                                      ^ 
                                                      (0x7ff000U 
                                                       & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                          >> 9U))) 
                                                     ^ 
                                                     (0x3fff000U 
                                                      & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                         >> 6U))) 
                                                    ^ 
                                                    (0x7fff000U 
                                                     & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                        >> 5U))) 
                                                   ^ 
                                                   (0x1ffff000U 
                                                    & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                       >> 3U))) 
                                                  ^ 
                                                  (0x7ffff000U 
                                                   & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      >> 1U))) 
                                                 ^ 
                                                 (0xfffff000U 
                                                  & vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7)) 
                                                ^ (0xfffff000U 
                                                   & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      << 3U))) 
                                               ^ (0xfffff000U 
                                                  & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     << 6U))) 
                                              ^ (0xfffff000U 
                                                 & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                    << 7U))) 
                                             ^ (0xfffff000U 
                                                & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                   << 8U))) 
                                            ^ (0xfffff000U 
                                               & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                  << 0xaU))) 
                                           ^ (0xfffff000U 
                                              & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                 << 0xbU))) 
                                          ^ (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                             << 0xcU)) 
                                         ^ (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                            << 0xcU)) 
                                        ^ (0xfffff000U 
                                           & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                              << 0xbU))) 
                                       ^ (0xfffff000U 
                                          & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                             << 0xaU))) 
                                      ^ (0xfffff000U 
                                         & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                            << 8U))) 
                                     ^ (0xfffff000U 
                                        & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                           << 7U))) 
                                    ^ (0xfffff000U 
                                       & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                          << 6U))) 
                                   ^ (0xfffff000U & 
                                      (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                       << 3U))) ^ (0xfffff000U 
                                                   & vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data)) 
                                 ^ (0x7ffff000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                   >> 1U))) 
                                ^ (0x1ffff000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                  >> 3U))) 
                               ^ (0x7fff000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                >> 5U))) 
                              ^ (0x3fff000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                               >> 6U))) 
                             ^ (0x7ff000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                             >> 9U))) 
                            ^ (0xff000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                           >> 0xcU))) 
                           ^ (0x1f000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                          >> 0xfU))) 
                          ^ (0x3000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                        >> 0x12U))) 
                         ^ (0x1000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                       >> 0x13U)))));
    vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__crc32_2_crc_o 
        = ((0xffffdfffU & vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__crc32_2_crc_o) 
           | (0x2000U & (((((((((((((((((((((((((((
                                                   (((((0x2000U 
                                                        & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                           >> 0x12U)) 
                                                       ^ 
                                                       (0x1e000U 
                                                        & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                           >> 0xfU))) 
                                                      ^ 
                                                      (0xfe000U 
                                                       & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                          >> 0xcU))) 
                                                     ^ 
                                                     (0x7fe000U 
                                                      & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                         >> 9U))) 
                                                    ^ 
                                                    (0x3ffe000U 
                                                     & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                        >> 6U))) 
                                                   ^ 
                                                   (0x7ffe000U 
                                                    & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                       >> 5U))) 
                                                  ^ 
                                                  (0x1fffe000U 
                                                   & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      >> 3U))) 
                                                 ^ 
                                                 (0x7fffe000U 
                                                  & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     >> 1U))) 
                                                ^ (0xffffe000U 
                                                   & vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7)) 
                                               ^ (0xffffe000U 
                                                  & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     << 3U))) 
                                              ^ (0xffffe000U 
                                                 & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                    << 6U))) 
                                             ^ (0xffffe000U 
                                                & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                   << 7U))) 
                                            ^ (0xffffe000U 
                                               & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                  << 8U))) 
                                           ^ (0xffffe000U 
                                              & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                 << 0xaU))) 
                                          ^ (0xffffe000U 
                                             & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                << 0xbU))) 
                                         ^ (0xffffe000U 
                                            & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                               << 0xcU))) 
                                        ^ (0xffffe000U 
                                           & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                              << 0xcU))) 
                                       ^ (0xffffe000U 
                                          & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                             << 0xbU))) 
                                      ^ (0xffffe000U 
                                         & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                            << 0xaU))) 
                                     ^ (0xffffe000U 
                                        & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                           << 8U))) 
                                    ^ (0xffffe000U 
                                       & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                          << 7U))) 
                                   ^ (0xffffe000U & 
                                      (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                       << 6U))) ^ (0xffffe000U 
                                                   & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                      << 3U))) 
                                 ^ (0xffffe000U & vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data)) 
                                ^ (0x7fffe000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                  >> 1U))) 
                               ^ (0x1fffe000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                 >> 3U))) 
                              ^ (0x7ffe000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                               >> 5U))) 
                             ^ (0x3ffe000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                              >> 6U))) 
                            ^ (0x7fe000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                            >> 9U))) 
                           ^ (0xfe000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                          >> 0xcU))) 
                          ^ (0x1e000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                         >> 0xfU))) 
                         ^ (0x2000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                       >> 0x12U)))));
    vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__crc32_2_crc_o 
        = ((0xffffbfffU & vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__crc32_2_crc_o) 
           | (0x4000U & (((((((((((((((((((((((((((
                                                   (((0x1c000U 
                                                      & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                         >> 0xfU)) 
                                                     ^ 
                                                     (0xfc000U 
                                                      & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                         >> 0xcU))) 
                                                    ^ 
                                                    (0x7fc000U 
                                                     & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                        >> 9U))) 
                                                   ^ 
                                                   (0x3ffc000U 
                                                    & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                       >> 6U))) 
                                                  ^ 
                                                  (0x7ffc000U 
                                                   & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      >> 5U))) 
                                                 ^ 
                                                 (0x1fffc000U 
                                                  & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     >> 3U))) 
                                                ^ (0x7fffc000U 
                                                   & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      >> 1U))) 
                                               ^ (0xffffc000U 
                                                  & vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7)) 
                                              ^ (0xffffc000U 
                                                 & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                    << 3U))) 
                                             ^ (0xffffc000U 
                                                & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                   << 6U))) 
                                            ^ (0xffffc000U 
                                               & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                  << 7U))) 
                                           ^ (0xffffc000U 
                                              & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                 << 8U))) 
                                          ^ (0xffffc000U 
                                             & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                << 0xaU))) 
                                         ^ (0xffffc000U 
                                            & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                               << 0xbU))) 
                                        ^ (0xffffc000U 
                                           & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                              << 0xcU))) 
                                       ^ (0xffffc000U 
                                          & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                             << 0xcU))) 
                                      ^ (0xffffc000U 
                                         & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                            << 0xbU))) 
                                     ^ (0xffffc000U 
                                        & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                           << 0xaU))) 
                                    ^ (0xffffc000U 
                                       & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                          << 8U))) 
                                   ^ (0xffffc000U & 
                                      (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                       << 7U))) ^ (0xffffc000U 
                                                   & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                      << 6U))) 
                                 ^ (0xffffc000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                   << 3U))) 
                                ^ (0xffffc000U & vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data)) 
                               ^ (0x7fffc000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                 >> 1U))) 
                              ^ (0x1fffc000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                >> 3U))) 
                             ^ (0x7ffc000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                              >> 5U))) 
                            ^ (0x3ffc000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                             >> 6U))) 
                           ^ (0x7fc000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                           >> 9U))) 
                          ^ (0xfc000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                         >> 0xcU))) 
                         ^ (0x1c000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                        >> 0xfU)))));
    vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__crc32_2_crc_o 
        = ((0xffff7fffU & vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__crc32_2_crc_o) 
           | (0x8000U & (((((((((((((((((((((((((((
                                                   (((0x18000U 
                                                      & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                         >> 0xfU)) 
                                                     ^ 
                                                     (0xf8000U 
                                                      & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                         >> 0xcU))) 
                                                    ^ 
                                                    (0x7f8000U 
                                                     & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                        >> 9U))) 
                                                   ^ 
                                                   (0x3ff8000U 
                                                    & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                       >> 6U))) 
                                                  ^ 
                                                  (0x7ff8000U 
                                                   & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      >> 5U))) 
                                                 ^ 
                                                 (0x1fff8000U 
                                                  & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     >> 3U))) 
                                                ^ (0x7fff8000U 
                                                   & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      >> 1U))) 
                                               ^ (0xffff8000U 
                                                  & vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7)) 
                                              ^ (0xffff8000U 
                                                 & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                    << 3U))) 
                                             ^ (0xffff8000U 
                                                & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                   << 6U))) 
                                            ^ (0xffff8000U 
                                               & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                  << 7U))) 
                                           ^ (0xffff8000U 
                                              & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                 << 8U))) 
                                          ^ (0xffff8000U 
                                             & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                << 0xaU))) 
                                         ^ (0xffff8000U 
                                            & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                               << 0xbU))) 
                                        ^ (0xffff8000U 
                                           & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                              << 0xcU))) 
                                       ^ (0xffff8000U 
                                          & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                             << 0xcU))) 
                                      ^ (0xffff8000U 
                                         & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                            << 0xbU))) 
                                     ^ (0xffff8000U 
                                        & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                           << 0xaU))) 
                                    ^ (0xffff8000U 
                                       & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                          << 8U))) 
                                   ^ (0xffff8000U & 
                                      (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                       << 7U))) ^ (0xffff8000U 
                                                   & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                      << 6U))) 
                                 ^ (0xffff8000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                   << 3U))) 
                                ^ (0xffff8000U & vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data)) 
                               ^ (0x7fff8000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                 >> 1U))) 
                              ^ (0x1fff8000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                >> 3U))) 
                             ^ (0x7ff8000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                              >> 5U))) 
                            ^ (0x3ff8000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                             >> 6U))) 
                           ^ (0x7f8000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                           >> 9U))) 
                          ^ (0xf8000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                         >> 0xcU))) 
                         ^ (0x18000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                        >> 0xfU)))));
    vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__crc32_2_crc_o 
        = ((0xfffeffffU & vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__crc32_2_crc_o) 
           | (0x10000U & ((((((((((((((((((((((((((
                                                   ((0x30000U 
                                                     & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                        >> 0xeU)) 
                                                    ^ 
                                                    (0x70000U 
                                                     & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                        >> 0xdU))) 
                                                   ^ 
                                                   (0x3f0000U 
                                                    & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                       >> 0xaU))) 
                                                  ^ 
                                                  (0xff0000U 
                                                   & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      >> 8U))) 
                                                 ^ 
                                                 (0x3ff0000U 
                                                  & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     >> 6U))) 
                                                ^ (0x7ff0000U 
                                                   & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      >> 5U))) 
                                               ^ (0x1fff0000U 
                                                  & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     >> 3U))) 
                                              ^ (0x7fff0000U 
                                                 & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                    >> 1U))) 
                                             ^ (0xffff0000U 
                                                & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                   << 3U))) 
                                            ^ (0xffff0000U 
                                               & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                  << 4U))) 
                                           ^ (0xffff0000U 
                                              & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                 << 8U))) 
                                          ^ (0xffff0000U 
                                             & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                << 0xbU))) 
                                         ^ (0xffff0000U 
                                            & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                               << 0xcU))) 
                                        ^ (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                           << 0x10U)) 
                                       ^ (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                          << 0x10U)) 
                                      ^ (0xffff0000U 
                                         & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                            << 0xcU))) 
                                     ^ (0xffff0000U 
                                        & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                           << 0xbU))) 
                                    ^ (0xffff0000U 
                                       & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                          << 8U))) 
                                   ^ (0xffff0000U & 
                                      (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                       << 4U))) ^ (0xffff0000U 
                                                   & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                      << 3U))) 
                                 ^ (0x7fff0000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                   >> 1U))) 
                                ^ (0x1fff0000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                  >> 3U))) 
                               ^ (0x7ff0000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                >> 5U))) 
                              ^ (0x3ff0000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                               >> 6U))) 
                             ^ (0xff0000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                             >> 8U))) 
                            ^ (0x3f0000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                            >> 0xaU))) 
                           ^ (0x70000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                          >> 0xdU))) 
                          ^ (0x30000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                         >> 0xeU)))));
    vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__crc32_2_crc_o 
        = ((0xfffdffffU & vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__crc32_2_crc_o) 
           | (0x20000U & ((((((((((((((((((((((((((
                                                   ((0x20000U 
                                                     & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                        >> 0xeU)) 
                                                    ^ 
                                                    (0x60000U 
                                                     & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                        >> 0xdU))) 
                                                   ^ 
                                                   (0x3e0000U 
                                                    & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                       >> 0xaU))) 
                                                  ^ 
                                                  (0xfe0000U 
                                                   & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      >> 8U))) 
                                                 ^ 
                                                 (0x3fe0000U 
                                                  & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     >> 6U))) 
                                                ^ (0x7fe0000U 
                                                   & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      >> 5U))) 
                                               ^ (0x1ffe0000U 
                                                  & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     >> 3U))) 
                                              ^ (0x7ffe0000U 
                                                 & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                    >> 1U))) 
                                             ^ (0xfffe0000U 
                                                & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                   << 3U))) 
                                            ^ (0xfffe0000U 
                                               & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                  << 4U))) 
                                           ^ (0xfffe0000U 
                                              & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                 << 8U))) 
                                          ^ (0xfffe0000U 
                                             & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                << 0xbU))) 
                                         ^ (0xfffe0000U 
                                            & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                               << 0xcU))) 
                                        ^ (0xfffe0000U 
                                           & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                              << 0x10U))) 
                                       ^ (0xfffe0000U 
                                          & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                             << 0x10U))) 
                                      ^ (0xfffe0000U 
                                         & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                            << 0xcU))) 
                                     ^ (0xfffe0000U 
                                        & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                           << 0xbU))) 
                                    ^ (0xfffe0000U 
                                       & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                          << 8U))) 
                                   ^ (0xfffe0000U & 
                                      (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                       << 4U))) ^ (0xfffe0000U 
                                                   & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                      << 3U))) 
                                 ^ (0x7ffe0000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                   >> 1U))) 
                                ^ (0x1ffe0000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                  >> 3U))) 
                               ^ (0x7fe0000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                >> 5U))) 
                              ^ (0x3fe0000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                               >> 6U))) 
                             ^ (0xfe0000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                             >> 8U))) 
                            ^ (0x3e0000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                            >> 0xaU))) 
                           ^ (0x60000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                          >> 0xdU))) 
                          ^ (0x20000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                         >> 0xeU)))));
    vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__crc32_2_crc_o 
        = ((0xfffbffffU & vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__crc32_2_crc_o) 
           | (0x40000U & ((((((((((((((((((((((((((0x40000U 
                                                   & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      >> 0xdU)) 
                                                  ^ 
                                                  (0x3c0000U 
                                                   & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      >> 0xaU))) 
                                                 ^ 
                                                 (0xfc0000U 
                                                  & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     >> 8U))) 
                                                ^ (0x3fc0000U 
                                                   & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      >> 6U))) 
                                               ^ (0x7fc0000U 
                                                  & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     >> 5U))) 
                                              ^ (0x1ffc0000U 
                                                 & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                    >> 3U))) 
                                             ^ (0x7ffc0000U 
                                                & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                   >> 1U))) 
                                            ^ (0xfffc0000U 
                                               & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                  << 3U))) 
                                           ^ (0xfffc0000U 
                                              & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                 << 4U))) 
                                          ^ (0xfffc0000U 
                                             & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                << 8U))) 
                                         ^ (0xfffc0000U 
                                            & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                               << 0xbU))) 
                                        ^ (0xfffc0000U 
                                           & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                              << 0xcU))) 
                                       ^ (0xfffc0000U 
                                          & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                             << 0x10U))) 
                                      ^ (0xfffc0000U 
                                         & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                            << 0x10U))) 
                                     ^ (0xfffc0000U 
                                        & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                           << 0xcU))) 
                                    ^ (0xfffc0000U 
                                       & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                          << 0xbU))) 
                                   ^ (0xfffc0000U & 
                                      (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                       << 8U))) ^ (0xfffc0000U 
                                                   & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                      << 4U))) 
                                 ^ (0xfffc0000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                   << 3U))) 
                                ^ (0x7ffc0000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                  >> 1U))) 
                               ^ (0x1ffc0000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                 >> 3U))) 
                              ^ (0x7fc0000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                               >> 5U))) 
                             ^ (0x3fc0000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                              >> 6U))) 
                            ^ (0xfc0000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                            >> 8U))) 
                           ^ (0x3c0000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                           >> 0xaU))) 
                          ^ (0x40000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                         >> 0xdU)))));
    vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__crc32_2_crc_o 
        = ((0xfff7ffffU & vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__crc32_2_crc_o) 
           | (0x80000U & ((((((((((((((((((((((((0x380000U 
                                                 & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                    >> 0xaU)) 
                                                ^ (0xf80000U 
                                                   & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      >> 8U))) 
                                               ^ (0x3f80000U 
                                                  & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     >> 6U))) 
                                              ^ (0x7f80000U 
                                                 & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                    >> 5U))) 
                                             ^ (0x1ff80000U 
                                                & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                   >> 3U))) 
                                            ^ (0x7ff80000U 
                                               & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                  >> 1U))) 
                                           ^ (0xfff80000U 
                                              & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                 << 3U))) 
                                          ^ (0xfff80000U 
                                             & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                << 4U))) 
                                         ^ (0xfff80000U 
                                            & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                               << 8U))) 
                                        ^ (0xfff80000U 
                                           & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                              << 0xbU))) 
                                       ^ (0xfff80000U 
                                          & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                             << 0xcU))) 
                                      ^ (0xfff80000U 
                                         & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                            << 0x10U))) 
                                     ^ (0xfff80000U 
                                        & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                           << 0x10U))) 
                                    ^ (0xfff80000U 
                                       & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                          << 0xcU))) 
                                   ^ (0xfff80000U & 
                                      (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                       << 0xbU))) ^ 
                                  (0xfff80000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                  << 8U))) 
                                 ^ (0xfff80000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                   << 4U))) 
                                ^ (0xfff80000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                  << 3U))) 
                               ^ (0x7ff80000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                 >> 1U))) 
                              ^ (0x1ff80000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                >> 3U))) 
                             ^ (0x7f80000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                              >> 5U))) 
                            ^ (0x3f80000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                             >> 6U))) 
                           ^ (0xf80000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                           >> 8U))) 
                          ^ (0x380000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                          >> 0xaU)))));
    vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__crc32_2_crc_o 
        = ((0xffefffffU & vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__crc32_2_crc_o) 
           | (0x100000U & ((((((((((((((((((((((((0x300000U 
                                                  & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     >> 0xaU)) 
                                                 ^ 
                                                 (0xf00000U 
                                                  & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     >> 8U))) 
                                                ^ (0x3f00000U 
                                                   & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      >> 6U))) 
                                               ^ (0x7f00000U 
                                                  & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     >> 5U))) 
                                              ^ (0x1ff00000U 
                                                 & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                    >> 3U))) 
                                             ^ (0x7ff00000U 
                                                & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                   >> 1U))) 
                                            ^ (0xfff00000U 
                                               & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                  << 3U))) 
                                           ^ (0xfff00000U 
                                              & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                 << 4U))) 
                                          ^ (0xfff00000U 
                                             & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                << 8U))) 
                                         ^ (0xfff00000U 
                                            & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                               << 0xbU))) 
                                        ^ (0xfff00000U 
                                           & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                              << 0xcU))) 
                                       ^ (0xfff00000U 
                                          & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                             << 0x10U))) 
                                      ^ (0xfff00000U 
                                         & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                            << 0x10U))) 
                                     ^ (0xfff00000U 
                                        & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                           << 0xcU))) 
                                    ^ (0xfff00000U 
                                       & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                          << 0xbU))) 
                                   ^ (0xfff00000U & 
                                      (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                       << 8U))) ^ (0xfff00000U 
                                                   & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                      << 4U))) 
                                 ^ (0xfff00000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                   << 3U))) 
                                ^ (0x7ff00000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                  >> 1U))) 
                               ^ (0x1ff00000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                 >> 3U))) 
                              ^ (0x7f00000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                               >> 5U))) 
                             ^ (0x3f00000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                              >> 6U))) 
                            ^ (0xf00000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                            >> 8U))) 
                           ^ (0x300000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                           >> 0xaU)))));
    vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__crc32_2_crc_o 
        = ((0xffdfffffU & vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__crc32_2_crc_o) 
           | (0x200000U & ((((((((((((((((((((((((0x200000U 
                                                  & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     >> 0xaU)) 
                                                 ^ 
                                                 (0xe00000U 
                                                  & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     >> 8U))) 
                                                ^ (0x3e00000U 
                                                   & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      >> 6U))) 
                                               ^ (0x7e00000U 
                                                  & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     >> 5U))) 
                                              ^ (0x1fe00000U 
                                                 & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                    >> 3U))) 
                                             ^ (0x7fe00000U 
                                                & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                   >> 1U))) 
                                            ^ (0xffe00000U 
                                               & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                  << 3U))) 
                                           ^ (0xffe00000U 
                                              & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                 << 4U))) 
                                          ^ (0xffe00000U 
                                             & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                << 8U))) 
                                         ^ (0xffe00000U 
                                            & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                               << 0xbU))) 
                                        ^ (0xffe00000U 
                                           & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                              << 0xcU))) 
                                       ^ (0xffe00000U 
                                          & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                             << 0x10U))) 
                                      ^ (0xffe00000U 
                                         & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                            << 0x10U))) 
                                     ^ (0xffe00000U 
                                        & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                           << 0xcU))) 
                                    ^ (0xffe00000U 
                                       & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                          << 0xbU))) 
                                   ^ (0xffe00000U & 
                                      (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                       << 8U))) ^ (0xffe00000U 
                                                   & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                      << 4U))) 
                                 ^ (0xffe00000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                   << 3U))) 
                                ^ (0x7fe00000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                  >> 1U))) 
                               ^ (0x1fe00000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                 >> 3U))) 
                              ^ (0x7e00000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                               >> 5U))) 
                             ^ (0x3e00000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                              >> 6U))) 
                            ^ (0xe00000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                            >> 8U))) 
                           ^ (0x200000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                           >> 0xaU)))));
    vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__crc32_2_crc_o 
        = ((0xffbfffffU & vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__crc32_2_crc_o) 
           | (0x400000U & (((((((((((((((((((((((((
                                                   (((0x400000U 
                                                      & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                         >> 9U)) 
                                                     ^ 
                                                     (0x1c00000U 
                                                      & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                         >> 7U))) 
                                                    ^ 
                                                    (0x7c00000U 
                                                     & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                        >> 5U))) 
                                                   ^ 
                                                   (0xfc00000U 
                                                    & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                       >> 4U))) 
                                                  ^ 
                                                  (0x3fc00000U 
                                                   & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      >> 2U))) 
                                                 ^ 
                                                 (0x7fc00000U 
                                                  & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     >> 1U))) 
                                                ^ (0xffc00000U 
                                                   & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      << 3U))) 
                                               ^ (0xffc00000U 
                                                  & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     << 4U))) 
                                              ^ (0xffc00000U 
                                                 & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                    << 6U))) 
                                             ^ (0xffc00000U 
                                                & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                   << 8U))) 
                                            ^ (0xffc00000U 
                                               & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                  << 0xaU))) 
                                           ^ (0xffc00000U 
                                              & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                 << 0xbU))) 
                                          ^ (0xffc00000U 
                                             & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                << 0xdU))) 
                                         ^ (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                            << 0x16U)) 
                                        ^ (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                           << 0x16U)) 
                                       ^ (0xffc00000U 
                                          & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                             << 0xdU))) 
                                      ^ (0xffc00000U 
                                         & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                            << 0xbU))) 
                                     ^ (0xffc00000U 
                                        & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                           << 0xaU))) 
                                    ^ (0xffc00000U 
                                       & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                          << 8U))) 
                                   ^ (0xffc00000U & 
                                      (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                       << 6U))) ^ (0xffc00000U 
                                                   & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                      << 4U))) 
                                 ^ (0xffc00000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                   << 3U))) 
                                ^ (0x7fc00000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                  >> 1U))) 
                               ^ (0x3fc00000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                 >> 2U))) 
                              ^ (0xfc00000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                               >> 4U))) 
                             ^ (0x7c00000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                              >> 5U))) 
                            ^ (0x1c00000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                             >> 7U))) 
                           ^ (0x400000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                           >> 9U)))));
    vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__crc32_2_crc_o 
        = ((0xff7fffffU & vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__crc32_2_crc_o) 
           | (0x800000U & (((((((((((((((((((((((((
                                                   (((0x800000U 
                                                      & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                         >> 8U)) 
                                                     ^ 
                                                     (0x3800000U 
                                                      & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                         >> 6U))) 
                                                    ^ 
                                                    (0xf800000U 
                                                     & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                        >> 4U))) 
                                                   ^ 
                                                   (0x1f800000U 
                                                    & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                       >> 3U))) 
                                                  ^ 
                                                  (0xff800000U 
                                                   & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      << 3U))) 
                                                 ^ 
                                                 (0xff800000U 
                                                  & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     << 4U))) 
                                                ^ (0xff800000U 
                                                   & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      << 6U))) 
                                               ^ (0xff800000U 
                                                  & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     << 7U))) 
                                              ^ (0xff800000U 
                                                 & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                    << 8U))) 
                                             ^ (0xff800000U 
                                                & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                   << 0xaU))) 
                                            ^ (0xff800000U 
                                               & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                  << 0xeU))) 
                                           ^ (0xff800000U 
                                              & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                 << 0x11U))) 
                                          ^ (0xff800000U 
                                             & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                << 0x16U))) 
                                         ^ (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                            << 0x17U)) 
                                        ^ (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                           << 0x17U)) 
                                       ^ (0xff800000U 
                                          & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                             << 0x16U))) 
                                      ^ (0xff800000U 
                                         & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                            << 0x11U))) 
                                     ^ (0xff800000U 
                                        & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                           << 0xeU))) 
                                    ^ (0xff800000U 
                                       & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                          << 0xaU))) 
                                   ^ (0xff800000U & 
                                      (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                       << 8U))) ^ (0xff800000U 
                                                   & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                      << 7U))) 
                                 ^ (0xff800000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                   << 6U))) 
                                ^ (0xff800000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                  << 4U))) 
                               ^ (0xff800000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                 << 3U))) 
                              ^ (0x1f800000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                >> 3U))) 
                             ^ (0xf800000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                              >> 4U))) 
                            ^ (0x3800000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                             >> 6U))) 
                           ^ (0x800000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                           >> 8U)))));
    vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__crc32_2_crc_o 
        = ((0xfeffffffU & vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__crc32_2_crc_o) 
           | (0x1000000U & ((((((((((((((((((((((((
                                                   ((0x3000000U 
                                                     & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                        >> 6U)) 
                                                    ^ 
                                                    (0xf000000U 
                                                     & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                        >> 4U))) 
                                                   ^ 
                                                   (0x1f000000U 
                                                    & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                       >> 3U))) 
                                                  ^ 
                                                  (0xff000000U 
                                                   & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      << 3U))) 
                                                 ^ 
                                                 (0xff000000U 
                                                  & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     << 4U))) 
                                                ^ (0xff000000U 
                                                   & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      << 6U))) 
                                               ^ (0xff000000U 
                                                  & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     << 7U))) 
                                              ^ (0xff000000U 
                                                 & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                    << 8U))) 
                                             ^ (0xff000000U 
                                                & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                   << 0xaU))) 
                                            ^ (0xff000000U 
                                               & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                  << 0xeU))) 
                                           ^ (0xff000000U 
                                              & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                 << 0x11U))) 
                                          ^ (0xff000000U 
                                             & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                << 0x16U))) 
                                         ^ (0xff000000U 
                                            & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                               << 0x17U))) 
                                        ^ (0xff000000U 
                                           & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                              << 0x17U))) 
                                       ^ (0xff000000U 
                                          & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                             << 0x16U))) 
                                      ^ (0xff000000U 
                                         & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                            << 0x11U))) 
                                     ^ (0xff000000U 
                                        & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                           << 0xeU))) 
                                    ^ (0xff000000U 
                                       & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                          << 0xaU))) 
                                   ^ (0xff000000U & 
                                      (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                       << 8U))) ^ (0xff000000U 
                                                   & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                      << 7U))) 
                                 ^ (0xff000000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                   << 6U))) 
                                ^ (0xff000000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                  << 4U))) 
                               ^ (0xff000000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                 << 3U))) 
                              ^ (0x1f000000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                >> 3U))) 
                             ^ (0xf000000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                              >> 4U))) 
                            ^ (0x3000000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                             >> 6U)))));
    vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__crc32_2_crc_o 
        = ((0xfdffffffU & vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__crc32_2_crc_o) 
           | (0x2000000U & ((((((((((((((((((((((((
                                                   ((0x2000000U 
                                                     & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                        >> 6U)) 
                                                    ^ 
                                                    (0xe000000U 
                                                     & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                        >> 4U))) 
                                                   ^ 
                                                   (0x1e000000U 
                                                    & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                       >> 3U))) 
                                                  ^ 
                                                  (0xfe000000U 
                                                   & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      << 3U))) 
                                                 ^ 
                                                 (0xfe000000U 
                                                  & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     << 4U))) 
                                                ^ (0xfe000000U 
                                                   & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      << 6U))) 
                                               ^ (0xfe000000U 
                                                  & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     << 7U))) 
                                              ^ (0xfe000000U 
                                                 & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                    << 8U))) 
                                             ^ (0xfe000000U 
                                                & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                   << 0xaU))) 
                                            ^ (0xfe000000U 
                                               & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                  << 0xeU))) 
                                           ^ (0xfe000000U 
                                              & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                 << 0x11U))) 
                                          ^ (0xfe000000U 
                                             & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                << 0x16U))) 
                                         ^ (0xfe000000U 
                                            & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                               << 0x17U))) 
                                        ^ (0xfe000000U 
                                           & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                              << 0x17U))) 
                                       ^ (0xfe000000U 
                                          & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                             << 0x16U))) 
                                      ^ (0xfe000000U 
                                         & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                            << 0x11U))) 
                                     ^ (0xfe000000U 
                                        & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                           << 0xeU))) 
                                    ^ (0xfe000000U 
                                       & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                          << 0xaU))) 
                                   ^ (0xfe000000U & 
                                      (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                       << 8U))) ^ (0xfe000000U 
                                                   & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                      << 7U))) 
                                 ^ (0xfe000000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                   << 6U))) 
                                ^ (0xfe000000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                  << 4U))) 
                               ^ (0xfe000000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                 << 3U))) 
                              ^ (0x1e000000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                >> 3U))) 
                             ^ (0xe000000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                              >> 4U))) 
                            ^ (0x2000000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                             >> 6U)))));
    vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__crc32_2_crc_o 
        = ((0xfbffffffU & vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__crc32_2_crc_o) 
           | (0x4000000U & ((((((((((((((((((((((((
                                                   ((((((0x4000000U 
                                                         & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                            >> 5U)) 
                                                        ^ 
                                                        (0x3c000000U 
                                                         & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                            >> 2U))) 
                                                       ^ 
                                                       (0xfc000000U 
                                                        & vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7)) 
                                                      ^ 
                                                      (0xfc000000U 
                                                       & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                          << 1U))) 
                                                     ^ 
                                                     (0xfc000000U 
                                                      & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                         << 2U))) 
                                                    ^ 
                                                    (0xfc000000U 
                                                     & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                        << 3U))) 
                                                   ^ 
                                                   (0xfc000000U 
                                                    & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                       << 4U))) 
                                                  ^ 
                                                  (0xfc000000U 
                                                   & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      << 6U))) 
                                                 ^ 
                                                 (0xfc000000U 
                                                  & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     << 7U))) 
                                                ^ (0xfc000000U 
                                                   & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      << 8U))) 
                                               ^ (0xfc000000U 
                                                  & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     << 0x10U))) 
                                              ^ (0xfc000000U 
                                                 & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                    << 0x14U))) 
                                             ^ (0xfc000000U 
                                                & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                   << 0x16U))) 
                                            ^ (0xfc000000U 
                                               & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                  << 0x17U))) 
                                           ^ (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                              << 0x1aU)) 
                                          ^ (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                             << 0x1aU)) 
                                         ^ (0xfc000000U 
                                            & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                               << 0x17U))) 
                                        ^ (0xfc000000U 
                                           & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                              << 0x16U))) 
                                       ^ (0xfc000000U 
                                          & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                             << 0x14U))) 
                                      ^ (0xfc000000U 
                                         & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                            << 0x10U))) 
                                     ^ (0xfc000000U 
                                        & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                           << 8U))) 
                                    ^ (0xfc000000U 
                                       & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                          << 7U))) 
                                   ^ (0xfc000000U & 
                                      (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                       << 6U))) ^ (0xfc000000U 
                                                   & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                      << 4U))) 
                                 ^ (0xfc000000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                   << 3U))) 
                                ^ (0xfc000000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                  << 2U))) 
                               ^ (0xfc000000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                 << 1U))) 
                              ^ (0xfc000000U & vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data)) 
                             ^ (0x3c000000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                               >> 2U))) 
                            ^ (0x4000000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                             >> 5U)))));
    vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__crc32_2_crc_o 
        = ((0xf7ffffffU & vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__crc32_2_crc_o) 
           | (0x8000000U & ((((((((((((((((((((((((
                                                   ((((0x38000000U 
                                                       & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                          >> 2U)) 
                                                      ^ 
                                                      (0xf8000000U 
                                                       & vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7)) 
                                                     ^ 
                                                     (0xf8000000U 
                                                      & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                         << 1U))) 
                                                    ^ 
                                                    (0xf8000000U 
                                                     & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                        << 2U))) 
                                                   ^ 
                                                   (0xf8000000U 
                                                    & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                       << 3U))) 
                                                  ^ 
                                                  (0xf8000000U 
                                                   & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      << 4U))) 
                                                 ^ 
                                                 (0xf8000000U 
                                                  & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     << 6U))) 
                                                ^ (0xf8000000U 
                                                   & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      << 7U))) 
                                               ^ (0xf8000000U 
                                                  & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     << 8U))) 
                                              ^ (0xf8000000U 
                                                 & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                    << 0x10U))) 
                                             ^ (0xf8000000U 
                                                & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                   << 0x14U))) 
                                            ^ (0xf8000000U 
                                               & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                  << 0x16U))) 
                                           ^ (0xf8000000U 
                                              & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                 << 0x17U))) 
                                          ^ (0xf8000000U 
                                             & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                << 0x1aU))) 
                                         ^ (0xf8000000U 
                                            & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                               << 0x1aU))) 
                                        ^ (0xf8000000U 
                                           & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                              << 0x17U))) 
                                       ^ (0xf8000000U 
                                          & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                             << 0x16U))) 
                                      ^ (0xf8000000U 
                                         & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                            << 0x14U))) 
                                     ^ (0xf8000000U 
                                        & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                           << 0x10U))) 
                                    ^ (0xf8000000U 
                                       & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                          << 8U))) 
                                   ^ (0xf8000000U & 
                                      (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                       << 7U))) ^ (0xf8000000U 
                                                   & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                      << 6U))) 
                                 ^ (0xf8000000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                   << 4U))) 
                                ^ (0xf8000000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                  << 3U))) 
                               ^ (0xf8000000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                 << 2U))) 
                              ^ (0xf8000000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                << 1U))) 
                             ^ (0xf8000000U & vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data)) 
                            ^ (0x38000000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                              >> 2U)))));
    vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__crc32_2_crc_o 
        = ((0xefffffffU & vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__crc32_2_crc_o) 
           | (0x10000000U & (((((((((((((((((((((((
                                                   (((((0x30000000U 
                                                        & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                           >> 2U)) 
                                                       ^ 
                                                       (0xf0000000U 
                                                        & vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7)) 
                                                      ^ 
                                                      (0xf0000000U 
                                                       & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                          << 1U))) 
                                                     ^ 
                                                     (0xf0000000U 
                                                      & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                         << 2U))) 
                                                    ^ 
                                                    (0xf0000000U 
                                                     & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                        << 3U))) 
                                                   ^ 
                                                   (0xf0000000U 
                                                    & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                       << 4U))) 
                                                  ^ 
                                                  (0xf0000000U 
                                                   & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      << 6U))) 
                                                 ^ 
                                                 (0xf0000000U 
                                                  & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     << 7U))) 
                                                ^ (0xf0000000U 
                                                   & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      << 8U))) 
                                               ^ (0xf0000000U 
                                                  & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     << 0x10U))) 
                                              ^ (0xf0000000U 
                                                 & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                    << 0x14U))) 
                                             ^ (0xf0000000U 
                                                & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                   << 0x16U))) 
                                            ^ (0xf0000000U 
                                               & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                  << 0x17U))) 
                                           ^ (0xf0000000U 
                                              & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                 << 0x1aU))) 
                                          ^ (0xf0000000U 
                                             & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                << 0x1aU))) 
                                         ^ (0xf0000000U 
                                            & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                               << 0x17U))) 
                                        ^ (0xf0000000U 
                                           & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                              << 0x16U))) 
                                       ^ (0xf0000000U 
                                          & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                             << 0x14U))) 
                                      ^ (0xf0000000U 
                                         & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                            << 0x10U))) 
                                     ^ (0xf0000000U 
                                        & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                           << 8U))) 
                                    ^ (0xf0000000U 
                                       & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                          << 7U))) 
                                   ^ (0xf0000000U & 
                                      (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                       << 6U))) ^ (0xf0000000U 
                                                   & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                      << 4U))) 
                                 ^ (0xf0000000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                   << 3U))) 
                                ^ (0xf0000000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                  << 2U))) 
                               ^ (0xf0000000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                 << 1U))) 
                              ^ (0xf0000000U & vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data)) 
                             ^ (0x30000000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                               >> 2U)))));
    vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__crc32_2_crc_o 
        = ((0xdfffffffU & vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__crc32_2_crc_o) 
           | (0x20000000U & (((((((((((((((((((((((
                                                   (((((0x20000000U 
                                                        & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                           >> 2U)) 
                                                       ^ 
                                                       (0xe0000000U 
                                                        & vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7)) 
                                                      ^ 
                                                      (0xe0000000U 
                                                       & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                          << 1U))) 
                                                     ^ 
                                                     (0xe0000000U 
                                                      & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                         << 2U))) 
                                                    ^ 
                                                    (0xe0000000U 
                                                     & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                        << 3U))) 
                                                   ^ 
                                                   (0xe0000000U 
                                                    & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                       << 4U))) 
                                                  ^ 
                                                  (0xe0000000U 
                                                   & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      << 6U))) 
                                                 ^ 
                                                 (0xe0000000U 
                                                  & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     << 7U))) 
                                                ^ (0xe0000000U 
                                                   & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      << 8U))) 
                                               ^ (0xe0000000U 
                                                  & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     << 0x10U))) 
                                              ^ (0xe0000000U 
                                                 & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                    << 0x14U))) 
                                             ^ (0xe0000000U 
                                                & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                   << 0x16U))) 
                                            ^ (0xe0000000U 
                                               & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                  << 0x17U))) 
                                           ^ (0xe0000000U 
                                              & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                 << 0x1aU))) 
                                          ^ (0xe0000000U 
                                             & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                << 0x1aU))) 
                                         ^ (0xe0000000U 
                                            & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                               << 0x17U))) 
                                        ^ (0xe0000000U 
                                           & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                              << 0x16U))) 
                                       ^ (0xe0000000U 
                                          & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                             << 0x14U))) 
                                      ^ (0xe0000000U 
                                         & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                            << 0x10U))) 
                                     ^ (0xe0000000U 
                                        & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                           << 8U))) 
                                    ^ (0xe0000000U 
                                       & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                          << 7U))) 
                                   ^ (0xe0000000U & 
                                      (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                       << 6U))) ^ (0xe0000000U 
                                                   & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                      << 4U))) 
                                 ^ (0xe0000000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                   << 3U))) 
                                ^ (0xe0000000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                  << 2U))) 
                               ^ (0xe0000000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                 << 1U))) 
                              ^ (0xe0000000U & vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data)) 
                             ^ (0x20000000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                               >> 2U)))));
    vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__crc32_2_crc_o 
        = ((0xbfffffffU & vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__crc32_2_crc_o) 
           | (0x40000000U & (((((((((((((((((((((((
                                                   (((0xc0000000U 
                                                      & vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7) 
                                                     ^ 
                                                     (0xc0000000U 
                                                      & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                         << 1U))) 
                                                    ^ 
                                                    (0xc0000000U 
                                                     & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                        << 2U))) 
                                                   ^ 
                                                   (0xc0000000U 
                                                    & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                       << 3U))) 
                                                  ^ 
                                                  (0xc0000000U 
                                                   & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      << 4U))) 
                                                 ^ 
                                                 (0xc0000000U 
                                                  & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     << 6U))) 
                                                ^ (0xc0000000U 
                                                   & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      << 7U))) 
                                               ^ (0xc0000000U 
                                                  & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     << 8U))) 
                                              ^ (0xc0000000U 
                                                 & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                    << 0x10U))) 
                                             ^ (0xc0000000U 
                                                & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                   << 0x14U))) 
                                            ^ (0xc0000000U 
                                               & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                  << 0x16U))) 
                                           ^ (0xc0000000U 
                                              & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                 << 0x17U))) 
                                          ^ (0xc0000000U 
                                             & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                << 0x1aU))) 
                                         ^ (0xc0000000U 
                                            & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                               << 0x1aU))) 
                                        ^ (0xc0000000U 
                                           & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                              << 0x17U))) 
                                       ^ (0xc0000000U 
                                          & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                             << 0x16U))) 
                                      ^ (0xc0000000U 
                                         & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                            << 0x14U))) 
                                     ^ (0xc0000000U 
                                        & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                           << 0x10U))) 
                                    ^ (0xc0000000U 
                                       & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                          << 8U))) 
                                   ^ (0xc0000000U & 
                                      (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                       << 7U))) ^ (0xc0000000U 
                                                   & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                      << 6U))) 
                                 ^ (0xc0000000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                   << 4U))) 
                                ^ (0xc0000000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                  << 3U))) 
                               ^ (0xc0000000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                 << 2U))) 
                              ^ (0xc0000000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                << 1U))) 
                             ^ (0xc0000000U & vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data))));
    vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__crc32_2_crc_o 
        = ((0x7fffffffU & vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__crc32_2_crc_o) 
           | (0x80000000U & (((((((((((((((((((((((
                                                   (((0x80000000U 
                                                      & vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7) 
                                                     ^ 
                                                     (0x80000000U 
                                                      & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                         << 1U))) 
                                                    ^ 
                                                    (0x80000000U 
                                                     & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                        << 2U))) 
                                                   ^ 
                                                   (0x80000000U 
                                                    & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                       << 3U))) 
                                                  ^ 
                                                  (0x80000000U 
                                                   & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      << 4U))) 
                                                 ^ 
                                                 (0x80000000U 
                                                  & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     << 6U))) 
                                                ^ (0x80000000U 
                                                   & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                      << 7U))) 
                                               ^ (0x80000000U 
                                                  & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                     << 8U))) 
                                              ^ (0x80000000U 
                                                 & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                    << 0x10U))) 
                                             ^ (0x80000000U 
                                                & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                   << 0x14U))) 
                                            ^ (0x80000000U 
                                               & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                  << 0x16U))) 
                                           ^ (0x80000000U 
                                              & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                 << 0x17U))) 
                                          ^ (0x80000000U 
                                             & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                                << 0x1aU))) 
                                         ^ (0x80000000U 
                                            & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                               << 0x1aU))) 
                                        ^ (0x80000000U 
                                           & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                              << 0x17U))) 
                                       ^ (0x80000000U 
                                          & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                             << 0x16U))) 
                                      ^ (0x80000000U 
                                         & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                            << 0x14U))) 
                                     ^ (0x80000000U 
                                        & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                           << 0x10U))) 
                                    ^ (0x80000000U 
                                       & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                          << 8U))) 
                                   ^ (0x80000000U & 
                                      (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                       << 7U))) ^ (0x80000000U 
                                                   & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                      << 6U))) 
                                 ^ (0x80000000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                   << 4U))) 
                                ^ (0x80000000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                  << 3U))) 
                               ^ (0x80000000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                 << 2U))) 
                              ^ (0x80000000U & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data 
                                                << 1U))) 
                             ^ (0x80000000U & vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data))));
}
