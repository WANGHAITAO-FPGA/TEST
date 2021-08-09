// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VEmif_Ctrl_test.h for the primary calling header

#include "VEmif_Ctrl_test.h"
#include "VEmif_Ctrl_test__Syms.h"

//==========

void VEmif_Ctrl_test::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VEmif_Ctrl_test::eval\n"); );
    VEmif_Ctrl_test__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VEmif_Ctrl_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("D:/CODE_LIB/TEST/SPINAL_TEST/tmp/job_1/Emif_Ctrl_test.v", 7, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VEmif_Ctrl_test::_eval_initial_loop(VEmif_Ctrl_test__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("D:/CODE_LIB/TEST/SPINAL_TEST/tmp/job_1/Emif_Ctrl_test.v", 7, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VEmif_Ctrl_test::_combo__TOP__1(VEmif_Ctrl_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEmif_Ctrl_test::_combo__TOP__1\n"); );
    VEmif_Ctrl_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->apb_PADDR = (0xfffffU & vlTOPp->emif_emif_addr);
    vlTOPp->apb_PSEL = (1U & (~ (IData)(vlTOPp->emif_emif_cs)));
    vlTOPp->apb_PWDATA = vlTOPp->emif_emif_data_read;
    vlTOPp->emif_emif_data_writeEnable = (1U & (~ (IData)(vlTOPp->emif_emif_oe)));
    vlTOPp->apb_PWRITE = ((~ (IData)(vlTOPp->emif_emif_we)) 
                          & (IData)(vlTOPp->emif_emif_oe));
}

VL_INLINE_OPT void VEmif_Ctrl_test::_sequent__TOP__4(VEmif_Ctrl_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEmif_Ctrl_test::_sequent__TOP__4\n"); );
    VEmif_Ctrl_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((~ (IData)(vlTOPp->emif_emif_we)) & (IData)(vlTOPp->emif_emif_oe)) 
         & (~ (vlTOPp->emif_emif_addr >> 0x17U)))) {
        vlTOPp->Emif_Ctrl_test__DOT__emifdatatemp = vlTOPp->emif_emif_data_read;
    }
    if ((1U & (~ (IData)(vlTOPp->emif_emif_oe)))) {
        vlTOPp->Emif_Ctrl_test__DOT__apb_PRDATA_regNextWhen 
            = vlTOPp->apb_PRDATA;
    }
    vlTOPp->Emif_Ctrl_test__DOT__penable_regNext = vlTOPp->Emif_Ctrl_test__DOT__penable;
    vlTOPp->emif_emif_data_write = vlTOPp->Emif_Ctrl_test__DOT__apb_PRDATA_regNextWhen;
}

VL_INLINE_OPT void VEmif_Ctrl_test::_sequent__TOP__5(VEmif_Ctrl_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEmif_Ctrl_test::_sequent__TOP__5\n"); );
    VEmif_Ctrl_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Emif_Ctrl_test__DOT__penable = (1U & ((~ (IData)(vlTOPp->reset)) 
                                                  & ((~ (IData)(vlTOPp->emif_emif_oe)) 
                                                     | (~ (IData)(vlTOPp->emif_emif_we)))));
    vlTOPp->apb_PENABLE = (((IData)(vlTOPp->Emif_Ctrl_test__DOT__penable) 
                            & (~ (IData)(vlTOPp->Emif_Ctrl_test__DOT__penable_regNext))) 
                           & (IData)(vlTOPp->Emif_Ctrl_test__DOT__penable));
}

void VEmif_Ctrl_test::_eval(VEmif_Ctrl_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEmif_Ctrl_test::_eval\n"); );
    VEmif_Ctrl_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__4(vlSymsp);
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__5(vlSymsp);
        vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VEmif_Ctrl_test::_change_request(VEmif_Ctrl_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEmif_Ctrl_test::_change_request\n"); );
    VEmif_Ctrl_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VEmif_Ctrl_test::_change_request_1(VEmif_Ctrl_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEmif_Ctrl_test::_change_request_1\n"); );
    VEmif_Ctrl_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VEmif_Ctrl_test::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEmif_Ctrl_test::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((emif_emif_addr & 0xff000000U))) {
        Verilated::overWidthError("emif_emif_addr");}
    if (VL_UNLIKELY((emif_emif_cs & 0xfeU))) {
        Verilated::overWidthError("emif_emif_cs");}
    if (VL_UNLIKELY((emif_emif_we & 0xfeU))) {
        Verilated::overWidthError("emif_emif_we");}
    if (VL_UNLIKELY((emif_emif_oe & 0xfeU))) {
        Verilated::overWidthError("emif_emif_oe");}
    if (VL_UNLIKELY((apb_PREADY & 0xfeU))) {
        Verilated::overWidthError("apb_PREADY");}
    if (VL_UNLIKELY((apb_PSLVERROR & 0xfeU))) {
        Verilated::overWidthError("apb_PSLVERROR");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
