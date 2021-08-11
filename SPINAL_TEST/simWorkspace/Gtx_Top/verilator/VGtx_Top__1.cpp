// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VGtx_Top.h for the primary calling header

#include "VGtx_Top.h"
#include "VGtx_Top__Syms.h"

VL_INLINE_OPT void VGtx_Top::_sequent__TOP__3(VGtx_Top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGtx_Top::_sequent__TOP__3\n"); );
    VGtx_Top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Gtx_Top__DOT__gtxtx__DOT__current_beat_cnt 
        = vlTOPp->__Vdly__Gtx_Top__DOT__gtxtx__DOT__current_beat_cnt;
}

VL_INLINE_OPT void VGtx_Top::_sequent__TOP__4(VGtx_Top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGtx_Top::_sequent__TOP__4\n"); );
    VGtx_Top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((0U != (IData)(vlTOPp->Gtx_Top__DOT__gtxtx__DOT__current_state))) {
        vlTOPp->Gtx_Top__DOT___zz_area_mem_port0 = 
            vlTOPp->Gtx_Top__DOT__area_mem[(0xffU & 
                                            ((IData)(vlTOPp->Gtx_Top__DOT__gtxtx__DOT__ireq_advance_condition)
                                              ? (IData)(vlTOPp->Gtx_Top__DOT__gtxtx__DOT__tx_addr_temp)
                                              : ((IData)(vlTOPp->Gtx_Top__DOT__gtxtx__DOT__tx_addr_temp) 
                                                 - (IData)(1U))))];
    }
}

VL_INLINE_OPT void VGtx_Top::_settle__TOP__6(VGtx_Top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGtx_Top::_settle__TOP__6\n"); );
    VGtx_Top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Gtx_Top__DOT__gtxtx_s_axi_tx_tdata = 0U;
    if ((1U == (IData)(vlTOPp->Gtx_Top__DOT__gtxtx__DOT__current_state))) {
        vlTOPp->Gtx_Top__DOT__gtxtx_s_axi_tx_tdata = 0xffbcU;
    } else {
        if ((2U == (IData)(vlTOPp->Gtx_Top__DOT__gtxtx__DOT__current_state))) {
            vlTOPp->Gtx_Top__DOT__gtxtx_s_axi_tx_tdata = 1U;
        } else {
            if ((4U == (IData)(vlTOPp->Gtx_Top__DOT__gtxtx__DOT__current_state))) {
                vlTOPp->Gtx_Top__DOT__gtxtx_s_axi_tx_tdata 
                    = vlTOPp->tx_head;
            } else {
                if ((8U == (IData)(vlTOPp->Gtx_Top__DOT__gtxtx__DOT__current_state))) {
                    vlTOPp->Gtx_Top__DOT__gtxtx_s_axi_tx_tdata 
                        = vlTOPp->Gtx_Top__DOT___zz_area_mem_port0;
                } else {
                    if ((0x10U == (IData)(vlTOPp->Gtx_Top__DOT__gtxtx__DOT__current_state))) {
                        vlTOPp->Gtx_Top__DOT__gtxtx_s_axi_tx_tdata 
                            = vlTOPp->Gtx_Top__DOT__gtxtx_crc_data;
                    } else {
                        if ((0x40U == (IData)(vlTOPp->Gtx_Top__DOT__gtxtx__DOT__current_state))) {
                            vlTOPp->Gtx_Top__DOT__gtxtx_s_axi_tx_tdata = 0xffbdU;
                        } else {
                            if ((0x80U == (IData)(vlTOPp->Gtx_Top__DOT__gtxtx__DOT__current_state))) {
                                vlTOPp->Gtx_Top__DOT__gtxtx_s_axi_tx_tdata = 0xffbaU;
                            } else {
                                if ((0x100U == (IData)(vlTOPp->Gtx_Top__DOT__gtxtx__DOT__current_state))) {
                                    vlTOPp->Gtx_Top__DOT__gtxtx_s_axi_tx_tdata = 0xffbbU;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->Gtx_Top__DOT__gtxtx_s_axi_tx_tvalid = (
                                                   (0U 
                                                    != (IData)(vlTOPp->Gtx_Top__DOT__gtxtx__DOT__current_state)) 
                                                   & (IData)(vlTOPp->axiw_ready));
    vlTOPp->axiw_payload_data = vlTOPp->Gtx_Top__DOT__gtxtx_s_axi_tx_tdata;
    vlTOPp->axiw_valid = vlTOPp->Gtx_Top__DOT__gtxtx_s_axi_tx_tvalid;
    vlTOPp->Gtx_Top__DOT__gtxtx__DOT__ireq_advance_condition 
        = ((IData)(vlTOPp->axiw_ready) & (IData)(vlTOPp->Gtx_Top__DOT__gtxtx_s_axi_tx_tvalid));
    vlTOPp->Gtx_Top__DOT__gtxtx__DOT__next_state = 
        (((((((((0U == (IData)(vlTOPp->Gtx_Top__DOT__gtxtx__DOT__current_state)) 
                | (1U == (IData)(vlTOPp->Gtx_Top__DOT__gtxtx__DOT__current_state))) 
               | (2U == (IData)(vlTOPp->Gtx_Top__DOT__gtxtx__DOT__current_state))) 
              | (4U == (IData)(vlTOPp->Gtx_Top__DOT__gtxtx__DOT__current_state))) 
             | (8U == (IData)(vlTOPp->Gtx_Top__DOT__gtxtx__DOT__current_state))) 
            | (0x10U == (IData)(vlTOPp->Gtx_Top__DOT__gtxtx__DOT__current_state))) 
           | (0x40U == (IData)(vlTOPp->Gtx_Top__DOT__gtxtx__DOT__current_state))) 
          | (0x80U == (IData)(vlTOPp->Gtx_Top__DOT__gtxtx__DOT__current_state)))
          ? ((0U == (IData)(vlTOPp->Gtx_Top__DOT__gtxtx__DOT__current_state))
              ? (((IData)(vlTOPp->tx_packet_req) & (IData)(vlTOPp->axiw_ready))
                  ? 1U : (((IData)(vlTOPp->tx_packet_trigger) 
                           & (IData)(vlTOPp->axiw_ready))
                           ? 0x80U : 0U)) : ((1U == (IData)(vlTOPp->Gtx_Top__DOT__gtxtx__DOT__current_state))
                                              ? ((IData)(vlTOPp->Gtx_Top__DOT__gtxtx__DOT__ireq_advance_condition)
                                                  ? 2U
                                                  : 1U)
                                              : ((2U 
                                                  == (IData)(vlTOPp->Gtx_Top__DOT__gtxtx__DOT__current_state))
                                                  ? 
                                                 ((IData)(vlTOPp->Gtx_Top__DOT__gtxtx__DOT__ireq_advance_condition)
                                                   ? 4U
                                                   : 2U)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlTOPp->Gtx_Top__DOT__gtxtx__DOT__current_state))
                                                   ? 
                                                  ((IData)(vlTOPp->Gtx_Top__DOT__gtxtx__DOT__ireq_advance_condition)
                                                    ? 8U
                                                    : 4U)
                                                   : 
                                                  ((8U 
                                                    == (IData)(vlTOPp->Gtx_Top__DOT__gtxtx__DOT__current_state))
                                                    ? 
                                                   ((((IData)(vlTOPp->Gtx_Top__DOT__gtxtx__DOT__current_beat_cnt) 
                                                      > 
                                                      (0xffU 
                                                       & ((IData)(1U) 
                                                          + vlTOPp->tx_head))) 
                                                     & (IData)(vlTOPp->Gtx_Top__DOT__gtxtx__DOT__ireq_advance_condition))
                                                     ? 0x10U
                                                     : 8U)
                                                    : 
                                                   ((0x10U 
                                                     == (IData)(vlTOPp->Gtx_Top__DOT__gtxtx__DOT__current_state))
                                                     ? 
                                                    ((IData)(vlTOPp->Gtx_Top__DOT__gtxtx__DOT__ireq_advance_condition)
                                                      ? 0x40U
                                                      : 0x10U)
                                                     : 
                                                    ((0x40U 
                                                      == (IData)(vlTOPp->Gtx_Top__DOT__gtxtx__DOT__current_state))
                                                      ? 
                                                     ((IData)(vlTOPp->Gtx_Top__DOT__gtxtx__DOT__ireq_advance_condition)
                                                       ? 0U
                                                       : 0x40U)
                                                      : 
                                                     ((IData)(vlTOPp->Gtx_Top__DOT__gtxtx__DOT__ireq_advance_condition)
                                                       ? 0x100U
                                                       : 0x80U))))))))
          : ((0x100U == (IData)(vlTOPp->Gtx_Top__DOT__gtxtx__DOT__current_state))
              ? ((IData)(vlTOPp->Gtx_Top__DOT__gtxtx__DOT__ireq_advance_condition)
                  ? 0U : 0x100U) : 0U));
    vlTOPp->Gtx_Top__DOT__gtxtx_s_axi_tx_tlast = ((
                                                   ((IData)(vlTOPp->Gtx_Top__DOT__gtxtx__DOT__current_beat_cnt) 
                                                    == 
                                                    (0xffU 
                                                     & ((IData)(5U) 
                                                        + vlTOPp->tx_head))) 
                                                   | (0x40U 
                                                      == (IData)(vlTOPp->Gtx_Top__DOT__gtxtx__DOT__current_state))) 
                                                  | ((0x100U 
                                                      == (IData)(vlTOPp->Gtx_Top__DOT__gtxtx__DOT__current_state)) 
                                                     & (IData)(vlTOPp->Gtx_Top__DOT__gtxtx__DOT__ireq_advance_condition)));
    vlTOPp->axiw_payload_last = vlTOPp->Gtx_Top__DOT__gtxtx_s_axi_tx_tlast;
}

VL_INLINE_OPT void VGtx_Top::_sequent__TOP__7(VGtx_Top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGtx_Top::_sequent__TOP__7\n"); );
    VGtx_Top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Gtx_Top__DOT__gtxtx__DOT__tx_addr_temp 
        = vlTOPp->__Vdly__Gtx_Top__DOT__gtxtx__DOT__tx_addr_temp;
    vlTOPp->Gtx_Top__DOT__gtxtx__DOT__current_state 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->Gtx_Top__DOT__gtxtx__DOT__next_state));
}

void VGtx_Top::_eval(VGtx_Top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGtx_Top::_eval\n"); );
    VGtx_Top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__2(vlSymsp);
        vlTOPp->_sequent__TOP__3(vlSymsp);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__4(vlSymsp);
        vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__7(vlSymsp);
        vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_settle__TOP__6(vlSymsp);
    vlTOPp->__Vm_traceActivity = (0x10U | vlTOPp->__Vm_traceActivity);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VGtx_Top::_change_request(VGtx_Top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGtx_Top::_change_request\n"); );
    VGtx_Top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VGtx_Top::_change_request_1(VGtx_Top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGtx_Top::_change_request_1\n"); );
    VGtx_Top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VGtx_Top::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGtx_Top::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((axiw_ready & 0xfeU))) {
        Verilated::overWidthError("axiw_ready");}
    if (VL_UNLIKELY((tx_packet_req & 0xfeU))) {
        Verilated::overWidthError("tx_packet_req");}
    if (VL_UNLIKELY((tx_packet_trigger & 0xfeU))) {
        Verilated::overWidthError("tx_packet_trigger");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
