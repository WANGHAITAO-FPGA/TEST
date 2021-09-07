// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VDataSync__Syms.h"


//======================

void VDataSync::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VDataSync* t = (VDataSync*)userthis;
    VDataSync__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VDataSync::traceChgThis(VDataSync__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDataSync* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 5U))))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 6U))))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 7U))))) {
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((8U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((0x10U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__8(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((0x20U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__9(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((0x40U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__10(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__11(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VDataSync::traceChgThis__2(VDataSync__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDataSync* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1,(vlTOPp->DataSync__DOT__streamCCByToggle_1__DOT__popArea_stream_valid));
        vcdp->chgBit(c+9,(vlTOPp->DataSync__DOT__streamCCByToggle_1__DOT__popArea_stream_ready));
        vcdp->chgBit(c+17,(((IData)(vlTOPp->DataSync__DOT__streamCCByToggle_1__DOT__popArea_stream_valid) 
                            & (IData)(vlTOPp->DataSync__DOT__streamCCByToggle_1__DOT__popArea_stream_ready))));
    }
}

void VDataSync::traceChgThis__3(VDataSync__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDataSync* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+25,(vlTOPp->DataSync__DOT__streamCCByToggle_1_io_input_ready));
    }
}

void VDataSync::traceChgThis__4(VDataSync__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDataSync* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+33,(vlTOPp->DataSync__DOT__streamCCByToggle_1__DOT__io_input_fire));
    }
}

void VDataSync::traceChgThis__5(VDataSync__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDataSync* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+41,(vlTOPp->DataSync__DOT__streamCCByToggle_1__DOT__popArea_stream_rData),16);
    }
}

void VDataSync::traceChgThis__6(VDataSync__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDataSync* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+49,(vlTOPp->DataSync__DOT__streamCCByToggle_1__DOT__popArea_stream_rValid));
        vcdp->chgBit(c+57,((1U & (~ (IData)(vlTOPp->DataSync__DOT__streamCCByToggle_1__DOT__popArea_stream_rValid)))));
    }
}

void VDataSync::traceChgThis__7(VDataSync__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDataSync* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+65,(vlTOPp->DataSync__DOT__streamCCByToggle_1__DOT__outHitSignal_buffercc__DOT__buffers_1));
        vcdp->chgBit(c+73,(vlTOPp->DataSync__DOT__streamCCByToggle_1__DOT__outHitSignal_buffercc__DOT__buffers_0));
    }
}

void VDataSync::traceChgThis__8(VDataSync__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDataSync* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+81,(vlTOPp->DataSync__DOT__streamCCByToggle_1__DOT__pushArea_data),16);
    }
}

void VDataSync::traceChgThis__9(VDataSync__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDataSync* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+89,(vlTOPp->DataSync__DOT__streamCCByToggle_1__DOT__pushArea_target_buffercc__DOT__buffers_1));
        vcdp->chgBit(c+97,(vlTOPp->DataSync__DOT__streamCCByToggle_1__DOT__popArea_hit));
        vcdp->chgBit(c+105,(vlTOPp->DataSync__DOT__streamCCByToggle_1__DOT__pushArea_target_buffercc__DOT__buffers_0));
    }
}

void VDataSync::traceChgThis__10(VDataSync__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDataSync* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+113,(vlTOPp->DataSync__DOT__streamCCByToggle_1__DOT__pushArea_target));
    }
}

void VDataSync::traceChgThis__11(VDataSync__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDataSync* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+121,(vlTOPp->clk_in));
        vcdp->chgBit(c+129,(vlTOPp->clk_out));
        vcdp->chgBit(c+137,(vlTOPp->reset));
        vcdp->chgBit(c+145,(vlTOPp->datain_valid));
        vcdp->chgBit(c+153,(vlTOPp->datain_ready));
        vcdp->chgBus(c+161,(vlTOPp->datain_payload),16);
        vcdp->chgBus(c+169,(vlTOPp->dataout),16);
    }
}
