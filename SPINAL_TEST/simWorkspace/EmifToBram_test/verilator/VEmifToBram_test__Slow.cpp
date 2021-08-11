// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VEmifToBram_test.h for the primary calling header

#include "VEmifToBram_test.h"
#include "VEmifToBram_test__Syms.h"

//==========

VL_CTOR_IMP(VEmifToBram_test) {
    VEmifToBram_test__Syms* __restrict vlSymsp = __VlSymsp = new VEmifToBram_test__Syms(this, name());
    VEmifToBram_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VEmifToBram_test::__Vconfigure(VEmifToBram_test__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VEmifToBram_test::~VEmifToBram_test() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void VEmifToBram_test::_settle__TOP__2(VEmifToBram_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEmifToBram_test::_settle__TOP__2\n"); );
    VEmifToBram_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->emif_emif_data_writeEnable = (1U & (~ (IData)(vlTOPp->emif_emif_oe)));
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

void VEmifToBram_test::_eval_initial(VEmifToBram_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEmifToBram_test::_eval_initial\n"); );
    VEmifToBram_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

void VEmifToBram_test::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEmifToBram_test::final\n"); );
    // Variables
    VEmifToBram_test__Syms* __restrict vlSymsp = this->__VlSymsp;
    VEmifToBram_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VEmifToBram_test::_eval_settle(VEmifToBram_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEmifToBram_test::_eval_settle\n"); );
    VEmifToBram_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

void VEmifToBram_test::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEmifToBram_test::_ctor_var_reset\n"); );
    // Body
    emif_emif_addr = VL_RAND_RESET_I(24);
    emif_emif_data_read = VL_RAND_RESET_I(16);
    emif_emif_data_write = VL_RAND_RESET_I(16);
    emif_emif_data_writeEnable = VL_RAND_RESET_I(1);
    emif_emif_cs = VL_RAND_RESET_I(1);
    emif_emif_we = VL_RAND_RESET_I(1);
    emif_emif_oe = VL_RAND_RESET_I(1);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    EmifToBram_test__DOT___zz_mem_port1 = VL_RAND_RESET_I(32);
    EmifToBram_test__DOT__apb_decoder_io_input_PREADY = VL_RAND_RESET_I(1);
    EmifToBram_test__DOT__apb_decoder_io_input_PSLVERROR = VL_RAND_RESET_I(1);
    EmifToBram_test__DOT__apb_decoder_io_output_PSEL = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<256; ++__Vi0) {
            EmifToBram_test__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }}
    EmifToBram_test__DOT__emiftoapb_1__DOT__penable = VL_RAND_RESET_I(1);
    EmifToBram_test__DOT__emiftoapb_1__DOT__emifdatatemp = VL_RAND_RESET_I(16);
    EmifToBram_test__DOT__emiftoapb_1__DOT__penable_regNext = VL_RAND_RESET_I(1);
    EmifToBram_test__DOT__emiftoapb_1__DOT___zz_emif_emif_data_write = VL_RAND_RESET_I(16);
    EmifToBram_test__DOT__emiftoapb_1__DOT___zz_emif_emif_data_write_1 = VL_RAND_RESET_I(16);
    EmifToBram_test__DOT__apb3tobram_1__DOT__when_Apb3ToBram_l41 = VL_RAND_RESET_I(1);
    EmifToBram_test__DOT__apb_decoder__DOT__when_Apb3Decoder_l84 = VL_RAND_RESET_I(1);
    __Vm_traceActivity = 0;
}
