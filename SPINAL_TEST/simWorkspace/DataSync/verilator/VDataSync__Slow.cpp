// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDataSync.h for the primary calling header

#include "VDataSync.h"
#include "VDataSync__Syms.h"

//==========

VL_CTOR_IMP(VDataSync) {
    VDataSync__Syms* __restrict vlSymsp = __VlSymsp = new VDataSync__Syms(this, name());
    VDataSync* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VDataSync::__Vconfigure(VDataSync__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VDataSync::~VDataSync() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void VDataSync::_settle__TOP__5(VDataSync__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDataSync::_settle__TOP__5\n"); );
    VDataSync* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->dataout = vlTOPp->DataSync__DOT__streamCCByToggle_1__DOT__popArea_stream_rData;
    vlTOPp->DataSync__DOT__streamCCByToggle_1__DOT__popArea_stream_ready = 1U;
    if ((1U & (~ (IData)(vlTOPp->DataSync__DOT__streamCCByToggle_1__DOT__popArea_stream_rValid)))) {
        vlTOPp->DataSync__DOT__streamCCByToggle_1__DOT__popArea_stream_ready = 1U;
    }
    vlTOPp->DataSync__DOT__streamCCByToggle_1__DOT__popArea_stream_valid 
        = ((IData)(vlTOPp->DataSync__DOT__streamCCByToggle_1__DOT__pushArea_target_buffercc__DOT__buffers_1) 
           != (IData)(vlTOPp->DataSync__DOT__streamCCByToggle_1__DOT__popArea_hit));
    vlTOPp->DataSync__DOT__streamCCByToggle_1_io_input_ready 
        = ((IData)(vlTOPp->DataSync__DOT__streamCCByToggle_1__DOT__outHitSignal_buffercc__DOT__buffers_1) 
           == (IData)(vlTOPp->DataSync__DOT__streamCCByToggle_1__DOT__pushArea_target));
    vlTOPp->datain_ready = vlTOPp->DataSync__DOT__streamCCByToggle_1_io_input_ready;
    vlTOPp->DataSync__DOT__streamCCByToggle_1__DOT__io_input_fire 
        = ((IData)(vlTOPp->datain_valid) & (IData)(vlTOPp->DataSync__DOT__streamCCByToggle_1_io_input_ready));
}

void VDataSync::_eval_initial(VDataSync__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDataSync::_eval_initial\n"); );
    VDataSync* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk_in = vlTOPp->clk_in;
    vlTOPp->__Vclklast__TOP__clk_out = vlTOPp->clk_out;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

void VDataSync::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDataSync::final\n"); );
    // Variables
    VDataSync__Syms* __restrict vlSymsp = this->__VlSymsp;
    VDataSync* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VDataSync::_eval_settle(VDataSync__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDataSync::_eval_settle\n"); );
    VDataSync* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__5(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

void VDataSync::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDataSync::_ctor_var_reset\n"); );
    // Body
    clk_in = VL_RAND_RESET_I(1);
    clk_out = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    datain_valid = VL_RAND_RESET_I(1);
    datain_ready = VL_RAND_RESET_I(1);
    datain_payload = VL_RAND_RESET_I(16);
    dataout = VL_RAND_RESET_I(16);
    DataSync__DOT__streamCCByToggle_1_io_input_ready = VL_RAND_RESET_I(1);
    DataSync__DOT__streamCCByToggle_1__DOT__pushArea_target = VL_RAND_RESET_I(1);
    DataSync__DOT__streamCCByToggle_1__DOT__pushArea_data = VL_RAND_RESET_I(16);
    DataSync__DOT__streamCCByToggle_1__DOT__io_input_fire = VL_RAND_RESET_I(1);
    DataSync__DOT__streamCCByToggle_1__DOT__popArea_stream_valid = VL_RAND_RESET_I(1);
    DataSync__DOT__streamCCByToggle_1__DOT__popArea_stream_ready = VL_RAND_RESET_I(1);
    DataSync__DOT__streamCCByToggle_1__DOT__popArea_hit = VL_RAND_RESET_I(1);
    DataSync__DOT__streamCCByToggle_1__DOT__popArea_stream_rValid = VL_RAND_RESET_I(1);
    DataSync__DOT__streamCCByToggle_1__DOT__popArea_stream_rData = VL_RAND_RESET_I(16);
    DataSync__DOT__streamCCByToggle_1__DOT__outHitSignal_buffercc__DOT__buffers_0 = VL_RAND_RESET_I(1);
    DataSync__DOT__streamCCByToggle_1__DOT__outHitSignal_buffercc__DOT__buffers_1 = VL_RAND_RESET_I(1);
    DataSync__DOT__streamCCByToggle_1__DOT__pushArea_target_buffercc__DOT__buffers_0 = VL_RAND_RESET_I(1);
    DataSync__DOT__streamCCByToggle_1__DOT__pushArea_target_buffercc__DOT__buffers_1 = VL_RAND_RESET_I(1);
    __Vdly__DataSync__DOT__streamCCByToggle_1__DOT__pushArea_target = VL_RAND_RESET_I(1);
    __Vm_traceActivity = 0;
}
