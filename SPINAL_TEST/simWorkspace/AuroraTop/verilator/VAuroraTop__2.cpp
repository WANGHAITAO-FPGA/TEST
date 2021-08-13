// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAuroraTop.h for the primary calling header

#include "VAuroraTop.h"
#include "VAuroraTop__Syms.h"

void VAuroraTop::_eval(VAuroraTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAuroraTop::_eval\n"); );
    VAuroraTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__4(vlSymsp);
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->aurora_userclk) & (~ (IData)(vlTOPp->__Vclklast__TOP__aurora_userclk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__6(vlSymsp);
        vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__7(vlSymsp);
    }
    if (((IData)(vlTOPp->aurora_userclk) & (~ (IData)(vlTOPp->__Vclklast__TOP__aurora_userclk)))) {
        vlTOPp->_sequent__TOP__8(vlSymsp);
        vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__9(vlSymsp);
    vlTOPp->__Vm_traceActivity = (0x10U | vlTOPp->__Vm_traceActivity);
    if ((((IData)(vlTOPp->aurora_userclk) & (~ (IData)(vlTOPp->__Vclklast__TOP__aurora_userclk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__10(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x20U | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__11(vlSymsp);
    }
    vlTOPp->_combo__TOP__12(vlSymsp);
    if (((IData)(vlTOPp->aurora_userclk) & (~ (IData)(vlTOPp->__Vclklast__TOP__aurora_userclk)))) {
        vlTOPp->_sequent__TOP__13(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x40U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__14(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x80U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->aurora_userclk) & (~ (IData)(vlTOPp->__Vclklast__TOP__aurora_userclk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__15(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x100U | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__16(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x200U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__17(vlSymsp);
    if (((((IData)(vlTOPp->aurora_userclk) & (~ (IData)(vlTOPp->__Vclklast__TOP__aurora_userclk))) 
          | ((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_multiclk__TOP__18(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x400U | vlTOPp->__Vm_traceActivity);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
    vlTOPp->__Vclklast__TOP__aurora_userclk = vlTOPp->aurora_userclk;
}

VL_INLINE_OPT QData VAuroraTop::_change_request(VAuroraTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAuroraTop::_change_request\n"); );
    VAuroraTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VAuroraTop::_change_request_1(VAuroraTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAuroraTop::_change_request_1\n"); );
    VAuroraTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VAuroraTop::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAuroraTop::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((apb_PADDR & 0xfff00000U))) {
        Verilated::overWidthError("apb_PADDR");}
    if (VL_UNLIKELY((apb_PSEL & 0xfeU))) {
        Verilated::overWidthError("apb_PSEL");}
    if (VL_UNLIKELY((apb_PENABLE & 0xfeU))) {
        Verilated::overWidthError("apb_PENABLE");}
    if (VL_UNLIKELY((apb_PWRITE & 0xfeU))) {
        Verilated::overWidthError("apb_PWRITE");}
    if (VL_UNLIKELY((axiw_ready & 0xfeU))) {
        Verilated::overWidthError("axiw_ready");}
    if (VL_UNLIKELY((axir_valid & 0xfeU))) {
        Verilated::overWidthError("axir_valid");}
    if (VL_UNLIKELY((axir_payload_last & 0xfeU))) {
        Verilated::overWidthError("axir_payload_last");}
    if (VL_UNLIKELY((tx_bram_en & 0xfeU))) {
        Verilated::overWidthError("tx_bram_en");}
    if (VL_UNLIKELY((tx_bram_we & 0xf0U))) {
        Verilated::overWidthError("tx_bram_we");}
    if (VL_UNLIKELY((rx_bram_en & 0xfeU))) {
        Verilated::overWidthError("rx_bram_en");}
    if (VL_UNLIKELY((rx_bram_we & 0xf0U))) {
        Verilated::overWidthError("rx_bram_we");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((aurora_userclk & 0xfeU))) {
        Verilated::overWidthError("aurora_userclk");}
}
#endif  // VL_DEBUG
