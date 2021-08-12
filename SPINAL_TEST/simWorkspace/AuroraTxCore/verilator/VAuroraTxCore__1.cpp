// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAuroraTxCore.h for the primary calling header

#include "VAuroraTxCore.h"
#include "VAuroraTxCore__Syms.h"

void VAuroraTxCore::_eval(VAuroraTxCore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAuroraTxCore::_eval\n"); );
    VAuroraTxCore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    if (((IData)(vlTOPp->aurora_userclk) & (~ (IData)(vlTOPp->__Vclklast__TOP__aurora_userclk)))) {
        vlTOPp->_sequent__TOP__4(vlSymsp);
        vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->aurora_userclk) & (~ (IData)(vlTOPp->__Vclklast__TOP__aurora_userclk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__5(vlSymsp);
        vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->aurora_userclk) & (~ (IData)(vlTOPp->__Vclklast__TOP__aurora_userclk)))) {
        vlTOPp->_sequent__TOP__6(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x10U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->aurora_userclk) & (~ (IData)(vlTOPp->__Vclklast__TOP__aurora_userclk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__7(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x20U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__8(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__aurora_userclk = vlTOPp->aurora_userclk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VAuroraTxCore::_change_request(VAuroraTxCore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAuroraTxCore::_change_request\n"); );
    VAuroraTxCore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VAuroraTxCore::_change_request_1(VAuroraTxCore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAuroraTxCore::_change_request_1\n"); );
    VAuroraTxCore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VAuroraTxCore::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAuroraTxCore::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((aurora_userclk & 0xfeU))) {
        Verilated::overWidthError("aurora_userclk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((axiw_ready & 0xfeU))) {
        Verilated::overWidthError("axiw_ready");}
    if (VL_UNLIKELY((tx_start & 0xfeU))) {
        Verilated::overWidthError("tx_start");}
    if (VL_UNLIKELY((tx_trigger & 0xfeU))) {
        Verilated::overWidthError("tx_trigger");}
}
#endif  // VL_DEBUG
