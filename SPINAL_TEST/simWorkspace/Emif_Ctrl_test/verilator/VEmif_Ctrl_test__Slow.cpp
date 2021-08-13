// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VEmif_Ctrl_test.h for the primary calling header

#include "VEmif_Ctrl_test.h"
#include "VEmif_Ctrl_test__Syms.h"

//==========

VL_CTOR_IMP(VEmif_Ctrl_test) {
    VEmif_Ctrl_test__Syms* __restrict vlSymsp = __VlSymsp = new VEmif_Ctrl_test__Syms(this, name());
    VEmif_Ctrl_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VEmif_Ctrl_test::__Vconfigure(VEmif_Ctrl_test__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VEmif_Ctrl_test::~VEmif_Ctrl_test() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void VEmif_Ctrl_test::_settle__TOP__2(VEmif_Ctrl_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEmif_Ctrl_test::_settle__TOP__2\n"); );
    VEmif_Ctrl_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->apb_PADDR = (0xfffffU & (vlTOPp->emif_emif_addr 
                                     << 2U));
    vlTOPp->apb_PSEL = (1U & (~ (IData)(vlTOPp->emif_emif_cs)));
    vlTOPp->emif_emif_data_writeEnable = (1U & (~ (IData)(vlTOPp->emif_emif_oe)));
    vlTOPp->apb_PWRITE = (((~ (IData)(vlTOPp->emif_emif_we)) 
                           & (IData)(vlTOPp->emif_emif_oe)) 
                          & (vlTOPp->emif_emif_addr 
                             >> 0x17U));
    vlTOPp->apb_PWDATA = (((IData)(vlTOPp->emif_emif_data_read) 
                           << 0x10U) | (IData)(vlTOPp->Emif_Ctrl_test__DOT__emifdatatemp));
    vlTOPp->emif_emif_data_write = ((0x800000U & vlTOPp->emif_emif_addr)
                                     ? (IData)(vlTOPp->Emif_Ctrl_test__DOT___zz_emif_emif_data_write)
                                     : (IData)(vlTOPp->Emif_Ctrl_test__DOT___zz_emif_emif_data_write_1));
    vlTOPp->apb_PENABLE = (((IData)(vlTOPp->Emif_Ctrl_test__DOT__penable) 
                            & (~ (IData)(vlTOPp->Emif_Ctrl_test__DOT__penable_regNext))) 
                           & (IData)(vlTOPp->Emif_Ctrl_test__DOT__penable));
}

void VEmif_Ctrl_test::_eval_initial(VEmif_Ctrl_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEmif_Ctrl_test::_eval_initial\n"); );
    VEmif_Ctrl_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

void VEmif_Ctrl_test::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEmif_Ctrl_test::final\n"); );
    // Variables
    VEmif_Ctrl_test__Syms* __restrict vlSymsp = this->__VlSymsp;
    VEmif_Ctrl_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VEmif_Ctrl_test::_eval_settle(VEmif_Ctrl_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEmif_Ctrl_test::_eval_settle\n"); );
    VEmif_Ctrl_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void VEmif_Ctrl_test::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEmif_Ctrl_test::_ctor_var_reset\n"); );
    // Body
    emif_emif_addr = VL_RAND_RESET_I(24);
    emif_emif_data_read = VL_RAND_RESET_I(16);
    emif_emif_data_write = VL_RAND_RESET_I(16);
    emif_emif_data_writeEnable = VL_RAND_RESET_I(1);
    emif_emif_cs = VL_RAND_RESET_I(1);
    emif_emif_we = VL_RAND_RESET_I(1);
    emif_emif_oe = VL_RAND_RESET_I(1);
    apb_PADDR = VL_RAND_RESET_I(20);
    apb_PSEL = VL_RAND_RESET_I(1);
    apb_PENABLE = VL_RAND_RESET_I(1);
    apb_PREADY = VL_RAND_RESET_I(1);
    apb_PWRITE = VL_RAND_RESET_I(1);
    apb_PWDATA = VL_RAND_RESET_I(32);
    apb_PRDATA = VL_RAND_RESET_I(32);
    apb_PSLVERROR = VL_RAND_RESET_I(1);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    Emif_Ctrl_test__DOT__penable = VL_RAND_RESET_I(1);
    Emif_Ctrl_test__DOT__emifdatatemp = VL_RAND_RESET_I(16);
    Emif_Ctrl_test__DOT__penable_regNext = VL_RAND_RESET_I(1);
    Emif_Ctrl_test__DOT___zz_emif_emif_data_write = VL_RAND_RESET_I(16);
    Emif_Ctrl_test__DOT___zz_emif_emif_data_write_1 = VL_RAND_RESET_I(16);
    __Vm_traceActivity = 0;
}
