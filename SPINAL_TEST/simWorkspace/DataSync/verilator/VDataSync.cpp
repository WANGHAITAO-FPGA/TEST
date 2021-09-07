// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDataSync.h for the primary calling header

#include "VDataSync.h"
#include "VDataSync__Syms.h"

//==========

void VDataSync::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VDataSync::eval\n"); );
    VDataSync__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VDataSync* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
#ifdef VM_TRACE
    // Tracing
#endif  // VM_TRACE
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("D:/SCALAWORK/TEST/SPINAL_TEST/tmp/job_1/DataSync.v", 7, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VDataSync::_eval_initial_loop(VDataSync__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("D:/SCALAWORK/TEST/SPINAL_TEST/tmp/job_1/DataSync.v", 7, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VDataSync::_sequent__TOP__2(VDataSync__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDataSync::_sequent__TOP__2\n"); );
    VDataSync* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->DataSync__DOT__streamCCByToggle_1__DOT__popArea_stream_valid) 
         & (IData)(vlTOPp->DataSync__DOT__streamCCByToggle_1__DOT__popArea_stream_ready))) {
        vlTOPp->DataSync__DOT__streamCCByToggle_1__DOT__popArea_stream_rData 
            = vlTOPp->DataSync__DOT__streamCCByToggle_1__DOT__pushArea_data;
    }
    vlTOPp->dataout = vlTOPp->DataSync__DOT__streamCCByToggle_1__DOT__popArea_stream_rData;
}

VL_INLINE_OPT void VDataSync::_sequent__TOP__3(VDataSync__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDataSync::_sequent__TOP__3\n"); );
    VDataSync* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->DataSync__DOT__streamCCByToggle_1__DOT__popArea_stream_rValid = 0U;
    } else {
        if (vlTOPp->DataSync__DOT__streamCCByToggle_1__DOT__popArea_stream_ready) {
            vlTOPp->DataSync__DOT__streamCCByToggle_1__DOT__popArea_stream_rValid 
                = vlTOPp->DataSync__DOT__streamCCByToggle_1__DOT__popArea_stream_valid;
        }
    }
}

VL_INLINE_OPT void VDataSync::_sequent__TOP__4(VDataSync__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDataSync::_sequent__TOP__4\n"); );
    VDataSync* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__DataSync__DOT__streamCCByToggle_1__DOT__pushArea_target 
        = vlTOPp->DataSync__DOT__streamCCByToggle_1__DOT__pushArea_target;
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__DataSync__DOT__streamCCByToggle_1__DOT__pushArea_target = 0U;
    } else {
        if (vlTOPp->DataSync__DOT__streamCCByToggle_1__DOT__io_input_fire) {
            vlTOPp->__Vdly__DataSync__DOT__streamCCByToggle_1__DOT__pushArea_target 
                = (1U & (~ (IData)(vlTOPp->DataSync__DOT__streamCCByToggle_1__DOT__pushArea_target)));
        }
    }
    vlTOPp->DataSync__DOT__streamCCByToggle_1__DOT__outHitSignal_buffercc__DOT__buffers_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->DataSync__DOT__streamCCByToggle_1__DOT__outHitSignal_buffercc__DOT__buffers_0));
    vlTOPp->DataSync__DOT__streamCCByToggle_1__DOT__outHitSignal_buffercc__DOT__buffers_0 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->DataSync__DOT__streamCCByToggle_1__DOT__popArea_hit));
}

VL_INLINE_OPT void VDataSync::_sequent__TOP__6(VDataSync__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDataSync::_sequent__TOP__6\n"); );
    VDataSync* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->DataSync__DOT__streamCCByToggle_1__DOT__io_input_fire) {
        vlTOPp->DataSync__DOT__streamCCByToggle_1__DOT__pushArea_data 
            = vlTOPp->datain_payload;
    }
}

VL_INLINE_OPT void VDataSync::_sequent__TOP__7(VDataSync__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDataSync::_sequent__TOP__7\n"); );
    VDataSync* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->DataSync__DOT__streamCCByToggle_1__DOT__popArea_hit = 0U;
    } else {
        if (((IData)(vlTOPp->DataSync__DOT__streamCCByToggle_1__DOT__popArea_stream_valid) 
             & (IData)(vlTOPp->DataSync__DOT__streamCCByToggle_1__DOT__popArea_stream_ready))) {
            vlTOPp->DataSync__DOT__streamCCByToggle_1__DOT__popArea_hit 
                = vlTOPp->DataSync__DOT__streamCCByToggle_1__DOT__pushArea_target_buffercc__DOT__buffers_1;
        }
    }
    vlTOPp->DataSync__DOT__streamCCByToggle_1__DOT__popArea_stream_ready = 1U;
    if ((1U & (~ (IData)(vlTOPp->DataSync__DOT__streamCCByToggle_1__DOT__popArea_stream_rValid)))) {
        vlTOPp->DataSync__DOT__streamCCByToggle_1__DOT__popArea_stream_ready = 1U;
    }
    vlTOPp->DataSync__DOT__streamCCByToggle_1__DOT__pushArea_target_buffercc__DOT__buffers_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->DataSync__DOT__streamCCByToggle_1__DOT__pushArea_target_buffercc__DOT__buffers_0));
    vlTOPp->DataSync__DOT__streamCCByToggle_1__DOT__popArea_stream_valid 
        = ((IData)(vlTOPp->DataSync__DOT__streamCCByToggle_1__DOT__pushArea_target_buffercc__DOT__buffers_1) 
           != (IData)(vlTOPp->DataSync__DOT__streamCCByToggle_1__DOT__popArea_hit));
    vlTOPp->DataSync__DOT__streamCCByToggle_1__DOT__pushArea_target_buffercc__DOT__buffers_0 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->DataSync__DOT__streamCCByToggle_1__DOT__pushArea_target));
}

VL_INLINE_OPT void VDataSync::_sequent__TOP__8(VDataSync__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDataSync::_sequent__TOP__8\n"); );
    VDataSync* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->DataSync__DOT__streamCCByToggle_1__DOT__pushArea_target 
        = vlTOPp->__Vdly__DataSync__DOT__streamCCByToggle_1__DOT__pushArea_target;
    vlTOPp->DataSync__DOT__streamCCByToggle_1_io_input_ready 
        = ((IData)(vlTOPp->DataSync__DOT__streamCCByToggle_1__DOT__outHitSignal_buffercc__DOT__buffers_1) 
           == (IData)(vlTOPp->DataSync__DOT__streamCCByToggle_1__DOT__pushArea_target));
    vlTOPp->datain_ready = vlTOPp->DataSync__DOT__streamCCByToggle_1_io_input_ready;
}

VL_INLINE_OPT void VDataSync::_combo__TOP__9(VDataSync__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDataSync::_combo__TOP__9\n"); );
    VDataSync* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->DataSync__DOT__streamCCByToggle_1__DOT__io_input_fire 
        = ((IData)(vlTOPp->datain_valid) & (IData)(vlTOPp->DataSync__DOT__streamCCByToggle_1_io_input_ready));
}

void VDataSync::_eval(VDataSync__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDataSync::_eval\n"); );
    VDataSync* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk_out) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_out)))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->clk_out) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_out))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__3(vlSymsp);
        vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->clk_in) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_in))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__4(vlSymsp);
        vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->clk_in) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_in)))) {
        vlTOPp->_sequent__TOP__6(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x10U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->clk_out) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_out))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__7(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x20U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->clk_in) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_in))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__8(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x40U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__9(vlSymsp);
    vlTOPp->__Vm_traceActivity = (0x80U | vlTOPp->__Vm_traceActivity);
    // Final
    vlTOPp->__Vclklast__TOP__clk_in = vlTOPp->clk_in;
    vlTOPp->__Vclklast__TOP__clk_out = vlTOPp->clk_out;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VDataSync::_change_request(VDataSync__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDataSync::_change_request\n"); );
    VDataSync* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VDataSync::_change_request_1(VDataSync__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDataSync::_change_request_1\n"); );
    VDataSync* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VDataSync::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDataSync::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk_in & 0xfeU))) {
        Verilated::overWidthError("clk_in");}
    if (VL_UNLIKELY((clk_out & 0xfeU))) {
        Verilated::overWidthError("clk_out");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((datain_valid & 0xfeU))) {
        Verilated::overWidthError("datain_valid");}
}
#endif  // VL_DEBUG
