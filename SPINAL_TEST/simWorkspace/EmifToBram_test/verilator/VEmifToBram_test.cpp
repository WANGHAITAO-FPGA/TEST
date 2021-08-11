// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VEmifToBram_test.h for the primary calling header

#include "VEmifToBram_test.h"
#include "VEmifToBram_test__Syms.h"

//==========

void VEmifToBram_test::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VEmifToBram_test::eval\n"); );
    VEmifToBram_test__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VEmifToBram_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("D:/CODE_LIB/TEST/SPINAL_TEST/tmp/job_1/EmifToBram_test.v", 7, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VEmifToBram_test::_eval_initial_loop(VEmifToBram_test__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("D:/CODE_LIB/TEST/SPINAL_TEST/tmp/job_1/EmifToBram_test.v", 7, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VEmifToBram_test::_combo__TOP__1(VEmifToBram_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEmifToBram_test::_combo__TOP__1\n"); );
    VEmifToBram_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->emif_emif_data_writeEnable = (1U & (~ (IData)(vlTOPp->emif_emif_oe)));
}

VL_INLINE_OPT void VEmifToBram_test::_sequent__TOP__3(VEmifToBram_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEmifToBram_test::_sequent__TOP__3\n"); );
    VEmifToBram_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdlyvdim0__EmifToBram_test__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__EmifToBram_test__DOT__mem__v0;
    IData/*31:0*/ __Vdlyvval__EmifToBram_test__DOT__mem__v0;
    // Body
    __Vdlyvset__EmifToBram_test__DOT__mem__v0 = 0U;
    vlTOPp->EmifToBram_test__DOT__emiftoapb_1__DOT__penable_regNext 
        = vlTOPp->EmifToBram_test__DOT__emiftoapb_1__DOT__penable;
    if (((IData)(vlTOPp->EmifToBram_test__DOT__apb_decoder_io_output_PSEL) 
         & (0xfU == ((IData)(vlTOPp->EmifToBram_test__DOT__apb3tobram_1__DOT__when_Apb3ToBram_l41)
                      ? 0xfU : 0U)))) {
        __Vdlyvval__EmifToBram_test__DOT__mem__v0 = 
            (((IData)(vlTOPp->emif_emif_data_read) 
              << 0x10U) | (IData)(vlTOPp->EmifToBram_test__DOT__emiftoapb_1__DOT__emifdatatemp));
        __Vdlyvset__EmifToBram_test__DOT__mem__v0 = 1U;
        __Vdlyvdim0__EmifToBram_test__DOT__mem__v0 
            = (0xffU & vlTOPp->emif_emif_addr);
    }
    if ((1U & (~ (IData)(vlTOPp->emif_emif_oe)))) {
        vlTOPp->EmifToBram_test__DOT__emiftoapb_1__DOT___zz_emif_emif_data_write_1 
            = (0xffffU & vlTOPp->EmifToBram_test__DOT___zz_mem_port1);
    }
    if ((1U & (~ (IData)(vlTOPp->emif_emif_oe)))) {
        vlTOPp->EmifToBram_test__DOT__emiftoapb_1__DOT___zz_emif_emif_data_write 
            = (0xffffU & (vlTOPp->EmifToBram_test__DOT___zz_mem_port1 
                          >> 0x10U));
    }
    if ((((~ (IData)(vlTOPp->emif_emif_we)) & (IData)(vlTOPp->emif_emif_oe)) 
         & (~ (vlTOPp->emif_emif_addr >> 0x17U)))) {
        vlTOPp->EmifToBram_test__DOT__emiftoapb_1__DOT__emifdatatemp 
            = vlTOPp->emif_emif_data_read;
    }
    if (((IData)(vlTOPp->EmifToBram_test__DOT__apb_decoder_io_output_PSEL) 
         & (0U == ((IData)(vlTOPp->EmifToBram_test__DOT__apb3tobram_1__DOT__when_Apb3ToBram_l41)
                    ? 0xfU : 0U)))) {
        vlTOPp->EmifToBram_test__DOT___zz_mem_port1 
            = vlTOPp->EmifToBram_test__DOT__mem[(0xffU 
                                                 & vlTOPp->emif_emif_addr)];
    }
    if (__Vdlyvset__EmifToBram_test__DOT__mem__v0) {
        vlTOPp->EmifToBram_test__DOT__mem[__Vdlyvdim0__EmifToBram_test__DOT__mem__v0] 
            = __Vdlyvval__EmifToBram_test__DOT__mem__v0;
    }
}

VL_INLINE_OPT void VEmifToBram_test::_sequent__TOP__4(VEmifToBram_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEmifToBram_test::_sequent__TOP__4\n"); );
    VEmifToBram_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->EmifToBram_test__DOT__emiftoapb_1__DOT__penable 
        = (1U & ((~ (IData)(vlTOPp->reset)) & (((~ (IData)(vlTOPp->emif_emif_oe)) 
                                                | (~ (IData)(vlTOPp->emif_emif_we))) 
                                               & (vlTOPp->emif_emif_addr 
                                                  >> 0x17U))));
}

VL_INLINE_OPT void VEmifToBram_test::_combo__TOP__5(VEmifToBram_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEmifToBram_test::_combo__TOP__5\n"); );
    VEmifToBram_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->emif_emif_data_write = ((0x800000U & vlTOPp->emif_emif_addr)
                                     ? (IData)(vlTOPp->EmifToBram_test__DOT__emiftoapb_1__DOT___zz_emif_emif_data_write)
                                     : (IData)(vlTOPp->EmifToBram_test__DOT__emiftoapb_1__DOT___zz_emif_emif_data_write_1));
    vlTOPp->EmifToBram_test__DOT__apb_decoder_io_output_PSEL 
        = ((0U == (0xfff00U & vlTOPp->emif_emif_addr)) 
           & (~ (IData)(vlTOPp->emif_emif_cs)));
    vlTOPp->EmifToBram_test__DOT__apb3tobram_1__DOT__when_Apb3ToBram_l41 
        = (((((IData)(vlTOPp->EmifToBram_test__DOT__emiftoapb_1__DOT__penable) 
              & (~ (IData)(vlTOPp->EmifToBram_test__DOT__emiftoapb_1__DOT__penable_regNext))) 
             & (IData)(vlTOPp->EmifToBram_test__DOT__emiftoapb_1__DOT__penable)) 
            & (((~ (IData)(vlTOPp->emif_emif_we)) & (IData)(vlTOPp->emif_emif_oe)) 
               & (vlTOPp->emif_emif_addr >> 0x17U))) 
           & (IData)(vlTOPp->EmifToBram_test__DOT__apb_decoder_io_output_PSEL));
    vlTOPp->EmifToBram_test__DOT__apb_decoder__DOT__when_Apb3Decoder_l84 
        = (1U & ((~ (IData)(vlTOPp->emif_emif_cs)) 
                 & (~ (IData)(vlTOPp->EmifToBram_test__DOT__apb_decoder_io_output_PSEL))));
    vlTOPp->EmifToBram_test__DOT__apb_decoder_io_input_PREADY = 1U;
    if (vlTOPp->EmifToBram_test__DOT__apb_decoder__DOT__when_Apb3Decoder_l84) {
        vlTOPp->EmifToBram_test__DOT__apb_decoder_io_input_PREADY = 1U;
    }
    vlTOPp->EmifToBram_test__DOT__apb_decoder_io_input_PSLVERROR = 0U;
    if (vlTOPp->EmifToBram_test__DOT__apb_decoder__DOT__when_Apb3Decoder_l84) {
        vlTOPp->EmifToBram_test__DOT__apb_decoder_io_input_PSLVERROR = 1U;
    }
}

void VEmifToBram_test::_eval(VEmifToBram_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEmifToBram_test::_eval\n"); );
    VEmifToBram_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__3(vlSymsp);
        vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__4(vlSymsp);
        vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__5(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VEmifToBram_test::_change_request(VEmifToBram_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEmifToBram_test::_change_request\n"); );
    VEmifToBram_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VEmifToBram_test::_change_request_1(VEmifToBram_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEmifToBram_test::_change_request_1\n"); );
    VEmifToBram_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VEmifToBram_test::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEmifToBram_test::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((emif_emif_addr & 0xff000000U))) {
        Verilated::overWidthError("emif_emif_addr");}
    if (VL_UNLIKELY((emif_emif_cs & 0xfeU))) {
        Verilated::overWidthError("emif_emif_cs");}
    if (VL_UNLIKELY((emif_emif_we & 0xfeU))) {
        Verilated::overWidthError("emif_emif_we");}
    if (VL_UNLIKELY((emif_emif_oe & 0xfeU))) {
        Verilated::overWidthError("emif_emif_oe");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
