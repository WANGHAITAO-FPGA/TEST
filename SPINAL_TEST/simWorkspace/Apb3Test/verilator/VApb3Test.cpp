// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VApb3Test.h for the primary calling header

#include "VApb3Test.h"
#include "VApb3Test__Syms.h"

//==========

void VApb3Test::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VApb3Test::eval\n"); );
    VApb3Test__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VApb3Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("D:/CODE_LIB/TEST/SPINAL_TEST/tmp/job_1/Apb3Test.v", 7, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VApb3Test::_eval_initial_loop(VApb3Test__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("D:/CODE_LIB/TEST/SPINAL_TEST/tmp/job_1/Apb3Test.v", 7, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VApb3Test::_sequent__TOP__1(VApb3Test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VApb3Test::_sequent__TOP__1\n"); );
    VApb3Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdlyvdim0__Apb3Test__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__Apb3Test__DOT__mem__v0;
    IData/*31:0*/ __Vdlyvval__Apb3Test__DOT__mem__v0;
    // Body
    __Vdlyvset__Apb3Test__DOT__mem__v0 = 0U;
    vlTOPp->Apb3Test__DOT__gpioCtrl__DOT__io_gpio_read_buffercc__DOT__buffers_1 
        = vlTOPp->Apb3Test__DOT__gpioCtrl__DOT__io_gpio_read_buffercc__DOT__buffers_0;
    if ((4U == (0xfU & vlTOPp->apb3_PADDR))) {
        if (vlTOPp->Apb3Test__DOT__gpioCtrl__DOT__ctrl_doWrite) {
            vlTOPp->Apb3Test__DOT__gpioCtrl__DOT__io_gpio_write_driver 
                = vlTOPp->apb3_PWDATA;
        }
    }
    vlTOPp->Apb3Test__DOT__apb3Router_1__DOT__selIndex 
        = (1U & ((IData)(vlTOPp->Apb3Test__DOT__apb3_decoder_io_output_PSEL) 
                 >> 1U));
    if (((IData)(vlTOPp->Apb3Test__DOT__apb3_decoder_io_output_PSEL) 
         & (0xfU == ((IData)(vlTOPp->Apb3Test__DOT__apb3tobram_1__DOT__when_Apb3ToBram_l41)
                      ? 0xfU : 0U)))) {
        __Vdlyvval__Apb3Test__DOT__mem__v0 = vlTOPp->apb3_PWDATA;
        __Vdlyvset__Apb3Test__DOT__mem__v0 = 1U;
        __Vdlyvdim0__Apb3Test__DOT__mem__v0 = (0xffU 
                                               & vlTOPp->apb3_PADDR);
    }
    if (((IData)(vlTOPp->Apb3Test__DOT__apb3_decoder_io_output_PSEL) 
         & (0U == ((IData)(vlTOPp->Apb3Test__DOT__apb3tobram_1__DOT__when_Apb3ToBram_l41)
                    ? 0xfU : 0U)))) {
        vlTOPp->Apb3Test__DOT___zz_mem_port1 = vlTOPp->Apb3Test__DOT__mem
            [(0xffU & vlTOPp->apb3_PADDR)];
    }
    if (__Vdlyvset__Apb3Test__DOT__mem__v0) {
        vlTOPp->Apb3Test__DOT__mem[__Vdlyvdim0__Apb3Test__DOT__mem__v0] 
            = __Vdlyvval__Apb3Test__DOT__mem__v0;
    }
    vlTOPp->Apb3Test__DOT__gpioCtrl__DOT__io_gpio_read_buffercc__DOT__buffers_0 
        = vlTOPp->gpio_read;
    vlTOPp->gpio_write = vlTOPp->Apb3Test__DOT__gpioCtrl__DOT__io_gpio_write_driver;
}

VL_INLINE_OPT void VApb3Test::_sequent__TOP__2(VApb3Test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VApb3Test::_sequent__TOP__2\n"); );
    VApb3Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->Apb3Test__DOT__gpioCtrl__DOT__io_gpio_writeEnable_driver = 0U;
    } else {
        if ((8U == (0xfU & vlTOPp->apb3_PADDR))) {
            if (vlTOPp->Apb3Test__DOT__gpioCtrl__DOT__ctrl_doWrite) {
                vlTOPp->Apb3Test__DOT__gpioCtrl__DOT__io_gpio_writeEnable_driver 
                    = vlTOPp->apb3_PWDATA;
            }
        }
    }
    vlTOPp->gpio_writeEnable = vlTOPp->Apb3Test__DOT__gpioCtrl__DOT__io_gpio_writeEnable_driver;
}

VL_INLINE_OPT void VApb3Test::_combo__TOP__4(VApb3Test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VApb3Test::_combo__TOP__4\n"); );
    VApb3Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Apb3Test__DOT__apb3_decoder_io_output_PSEL 
        = ((2U & (IData)(vlTOPp->Apb3Test__DOT__apb3_decoder_io_output_PSEL)) 
           | ((0U == (0xff000U & vlTOPp->apb3_PADDR)) 
              & (IData)(vlTOPp->apb3_PSEL)));
    vlTOPp->Apb3Test__DOT__apb3_decoder_io_output_PSEL 
        = ((1U & (IData)(vlTOPp->Apb3Test__DOT__apb3_decoder_io_output_PSEL)) 
           | (((0x10000U == (0xff000U & vlTOPp->apb3_PADDR)) 
               & (IData)(vlTOPp->apb3_PSEL)) << 1U));
    vlTOPp->Apb3Test__DOT__gpioCtrl_io_apb_PRDATA = 0U;
    if ((0U == (0xfU & vlTOPp->apb3_PADDR))) {
        vlTOPp->Apb3Test__DOT__gpioCtrl_io_apb_PRDATA 
            = vlTOPp->Apb3Test__DOT__gpioCtrl__DOT__io_gpio_read_buffercc__DOT__buffers_1;
    } else {
        if ((4U == (0xfU & vlTOPp->apb3_PADDR))) {
            vlTOPp->Apb3Test__DOT__gpioCtrl_io_apb_PRDATA 
                = vlTOPp->Apb3Test__DOT__gpioCtrl__DOT__io_gpio_write_driver;
        } else {
            if ((8U == (0xfU & vlTOPp->apb3_PADDR))) {
                vlTOPp->Apb3Test__DOT__gpioCtrl_io_apb_PRDATA 
                    = vlTOPp->Apb3Test__DOT__gpioCtrl__DOT__io_gpio_writeEnable_driver;
            }
        }
    }
    vlTOPp->Apb3Test__DOT__apb3tobram_1__DOT__when_Apb3ToBram_l41 
        = (((IData)(vlTOPp->apb3_PENABLE) & (IData)(vlTOPp->apb3_PWRITE)) 
           & (IData)(vlTOPp->Apb3Test__DOT__apb3_decoder_io_output_PSEL));
    vlTOPp->Apb3Test__DOT__gpioCtrl__DOT__ctrl_doWrite 
        = ((((IData)(vlTOPp->Apb3Test__DOT__apb3_decoder_io_output_PSEL) 
             >> 1U) & (IData)(vlTOPp->apb3_PENABLE)) 
           & (IData)(vlTOPp->apb3_PWRITE));
    vlTOPp->Apb3Test__DOT__apb3_decoder__DOT__when_Apb3Decoder_l84 
        = ((IData)(vlTOPp->apb3_PSEL) & (0U == (IData)(vlTOPp->Apb3Test__DOT__apb3_decoder_io_output_PSEL)));
    vlTOPp->apb3_PRDATA = ((IData)(vlTOPp->Apb3Test__DOT__apb3Router_1__DOT__selIndex)
                            ? vlTOPp->Apb3Test__DOT__gpioCtrl_io_apb_PRDATA
                            : vlTOPp->Apb3Test__DOT___zz_mem_port1);
    vlTOPp->Apb3Test__DOT__apb3_decoder_io_input_PREADY = 1U;
    if (vlTOPp->Apb3Test__DOT__apb3_decoder__DOT__when_Apb3Decoder_l84) {
        vlTOPp->Apb3Test__DOT__apb3_decoder_io_input_PREADY = 1U;
    }
    vlTOPp->Apb3Test__DOT__apb3_decoder_io_input_PSLVERROR = 0U;
    if (vlTOPp->Apb3Test__DOT__apb3_decoder__DOT__when_Apb3Decoder_l84) {
        vlTOPp->Apb3Test__DOT__apb3_decoder_io_input_PSLVERROR = 1U;
    }
    vlTOPp->apb3_PREADY = vlTOPp->Apb3Test__DOT__apb3_decoder_io_input_PREADY;
    vlTOPp->apb3_PSLVERROR = vlTOPp->Apb3Test__DOT__apb3_decoder_io_input_PSLVERROR;
}

void VApb3Test::_eval(VApb3Test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VApb3Test::_eval\n"); );
    VApb3Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
        vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__4(vlSymsp);
    vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VApb3Test::_change_request(VApb3Test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VApb3Test::_change_request\n"); );
    VApb3Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VApb3Test::_change_request_1(VApb3Test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VApb3Test::_change_request_1\n"); );
    VApb3Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VApb3Test::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VApb3Test::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((apb3_PADDR & 0xfff00000U))) {
        Verilated::overWidthError("apb3_PADDR");}
    if (VL_UNLIKELY((apb3_PSEL & 0xfeU))) {
        Verilated::overWidthError("apb3_PSEL");}
    if (VL_UNLIKELY((apb3_PENABLE & 0xfeU))) {
        Verilated::overWidthError("apb3_PENABLE");}
    if (VL_UNLIKELY((apb3_PWRITE & 0xfeU))) {
        Verilated::overWidthError("apb3_PWRITE");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
