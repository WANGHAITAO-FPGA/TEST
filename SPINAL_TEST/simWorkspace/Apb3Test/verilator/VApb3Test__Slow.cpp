// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VApb3Test.h for the primary calling header

#include "VApb3Test.h"
#include "VApb3Test__Syms.h"

//==========

VL_CTOR_IMP(VApb3Test) {
    VApb3Test__Syms* __restrict vlSymsp = __VlSymsp = new VApb3Test__Syms(this, name());
    VApb3Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VApb3Test::__Vconfigure(VApb3Test__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VApb3Test::~VApb3Test() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void VApb3Test::_settle__TOP__3(VApb3Test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VApb3Test::_settle__TOP__3\n"); );
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
    vlTOPp->gpio_write = vlTOPp->Apb3Test__DOT__gpioCtrl__DOT__io_gpio_write_driver;
    vlTOPp->gpio_writeEnable = vlTOPp->Apb3Test__DOT__gpioCtrl__DOT__io_gpio_writeEnable_driver;
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
    vlTOPp->Apb3Test__DOT__apb3tobram_1__DOT__when_Apb3ToBram_l42 
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

void VApb3Test::_eval_initial(VApb3Test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VApb3Test::_eval_initial\n"); );
    VApb3Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

void VApb3Test::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VApb3Test::final\n"); );
    // Variables
    VApb3Test__Syms* __restrict vlSymsp = this->__VlSymsp;
    VApb3Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VApb3Test::_eval_settle(VApb3Test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VApb3Test::_eval_settle\n"); );
    VApb3Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

void VApb3Test::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VApb3Test::_ctor_var_reset\n"); );
    // Body
    apb3_PADDR = VL_RAND_RESET_I(20);
    apb3_PSEL = VL_RAND_RESET_I(1);
    apb3_PENABLE = VL_RAND_RESET_I(1);
    apb3_PREADY = VL_RAND_RESET_I(1);
    apb3_PWRITE = VL_RAND_RESET_I(1);
    apb3_PWDATA = VL_RAND_RESET_I(32);
    apb3_PRDATA = VL_RAND_RESET_I(32);
    apb3_PSLVERROR = VL_RAND_RESET_I(1);
    gpio_read = VL_RAND_RESET_I(32);
    gpio_write = VL_RAND_RESET_I(32);
    gpio_writeEnable = VL_RAND_RESET_I(32);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    Apb3Test__DOT___zz_mem_port1 = VL_RAND_RESET_I(32);
    Apb3Test__DOT__gpioCtrl_io_apb_PRDATA = VL_RAND_RESET_I(32);
    Apb3Test__DOT__apb3_decoder_io_input_PREADY = VL_RAND_RESET_I(1);
    Apb3Test__DOT__apb3_decoder_io_input_PSLVERROR = VL_RAND_RESET_I(1);
    Apb3Test__DOT__apb3_decoder_io_output_PSEL = VL_RAND_RESET_I(2);
    { int __Vi0=0; for (; __Vi0<256; ++__Vi0) {
            Apb3Test__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }}
    Apb3Test__DOT__apb3tobram_1__DOT__when_Apb3ToBram_l42 = VL_RAND_RESET_I(1);
    Apb3Test__DOT__gpioCtrl__DOT__ctrl_doWrite = VL_RAND_RESET_I(1);
    Apb3Test__DOT__gpioCtrl__DOT__io_gpio_write_driver = VL_RAND_RESET_I(32);
    Apb3Test__DOT__gpioCtrl__DOT__io_gpio_writeEnable_driver = VL_RAND_RESET_I(32);
    Apb3Test__DOT__gpioCtrl__DOT__io_gpio_read_buffercc__DOT__buffers_0 = VL_RAND_RESET_I(32);
    Apb3Test__DOT__gpioCtrl__DOT__io_gpio_read_buffercc__DOT__buffers_1 = VL_RAND_RESET_I(32);
    Apb3Test__DOT__apb3_decoder__DOT__when_Apb3Decoder_l84 = VL_RAND_RESET_I(1);
    Apb3Test__DOT__apb3Router_1__DOT__selIndex = VL_RAND_RESET_I(1);
    __Vm_traceActivity = 0;
}
