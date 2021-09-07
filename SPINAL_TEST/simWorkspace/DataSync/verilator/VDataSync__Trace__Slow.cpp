// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VDataSync__Syms.h"


//======================

void VDataSync::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VDataSync::traceInit, &VDataSync::traceFull, &VDataSync::traceChg, this);
}
void VDataSync::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VDataSync* t = (VDataSync*)userthis;
    VDataSync__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VDataSync::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VDataSync* t = (VDataSync*)userthis;
    VDataSync__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VDataSync::traceInitThis(VDataSync__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDataSync* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VDataSync::traceFullThis(VDataSync__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDataSync* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VDataSync::traceInitThis__1(VDataSync__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDataSync* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+121,"clk_in", false,-1);
        vcdp->declBit(c+129,"clk_out", false,-1);
        vcdp->declBit(c+137,"reset", false,-1);
        vcdp->declBit(c+145,"datain_valid", false,-1);
        vcdp->declBit(c+153,"datain_ready", false,-1);
        vcdp->declBus(c+161,"datain_payload", false,-1, 15,0);
        vcdp->declBus(c+169,"dataout", false,-1, 15,0);
        vcdp->declBit(c+121,"DataSync clk_in", false,-1);
        vcdp->declBit(c+129,"DataSync clk_out", false,-1);
        vcdp->declBit(c+137,"DataSync reset", false,-1);
        vcdp->declBit(c+145,"DataSync datain_valid", false,-1);
        vcdp->declBit(c+153,"DataSync datain_ready", false,-1);
        vcdp->declBus(c+161,"DataSync datain_payload", false,-1, 15,0);
        vcdp->declBus(c+169,"DataSync dataout", false,-1, 15,0);
        vcdp->declBit(c+25,"DataSync streamCCByToggle_1_io_input_ready", false,-1);
        vcdp->declBit(c+49,"DataSync streamCCByToggle_1_io_output_valid", false,-1);
        vcdp->declBus(c+41,"DataSync streamCCByToggle_1_io_output_payload", false,-1, 15,0);
        vcdp->declBit(c+145,"DataSync streamCCByToggle_1 io_input_valid", false,-1);
        vcdp->declBit(c+25,"DataSync streamCCByToggle_1 io_input_ready", false,-1);
        vcdp->declBus(c+161,"DataSync streamCCByToggle_1 io_input_payload", false,-1, 15,0);
        vcdp->declBit(c+49,"DataSync streamCCByToggle_1 io_output_valid", false,-1);
        vcdp->declBit(c+177,"DataSync streamCCByToggle_1 io_output_ready", false,-1);
        vcdp->declBus(c+41,"DataSync streamCCByToggle_1 io_output_payload", false,-1, 15,0);
        vcdp->declBit(c+121,"DataSync streamCCByToggle_1 clk_in", false,-1);
        vcdp->declBit(c+137,"DataSync streamCCByToggle_1 reset", false,-1);
        vcdp->declBit(c+129,"DataSync streamCCByToggle_1 clk_out", false,-1);
        vcdp->declBit(c+65,"DataSync streamCCByToggle_1 outHitSignal_buffercc_io_dataOut", false,-1);
        vcdp->declBit(c+89,"DataSync streamCCByToggle_1 pushArea_target_buffercc_io_dataOut", false,-1);
        vcdp->declBit(c+97,"DataSync streamCCByToggle_1 outHitSignal", false,-1);
        vcdp->declBit(c+65,"DataSync streamCCByToggle_1 pushArea_hit", false,-1);
        vcdp->declBit(c+33,"DataSync streamCCByToggle_1 pushArea_accept", false,-1);
        vcdp->declBit(c+113,"DataSync streamCCByToggle_1 pushArea_target", false,-1);
        vcdp->declBus(c+81,"DataSync streamCCByToggle_1 pushArea_data", false,-1, 15,0);
        vcdp->declBit(c+33,"DataSync streamCCByToggle_1 io_input_fire", false,-1);
        vcdp->declBit(c+1,"DataSync streamCCByToggle_1 popArea_stream_valid", false,-1);
        vcdp->declBit(c+9,"DataSync streamCCByToggle_1 popArea_stream_ready", false,-1);
        vcdp->declBus(c+81,"DataSync streamCCByToggle_1 popArea_stream_payload", false,-1, 15,0);
        vcdp->declBit(c+89,"DataSync streamCCByToggle_1 popArea_target", false,-1);
        vcdp->declBit(c+17,"DataSync streamCCByToggle_1 popArea_stream_fire", false,-1);
        vcdp->declBit(c+97,"DataSync streamCCByToggle_1 popArea_hit", false,-1);
        vcdp->declBit(c+49,"DataSync streamCCByToggle_1 popArea_stream_m2sPipe_valid", false,-1);
        vcdp->declBit(c+177,"DataSync streamCCByToggle_1 popArea_stream_m2sPipe_ready", false,-1);
        vcdp->declBus(c+41,"DataSync streamCCByToggle_1 popArea_stream_m2sPipe_payload", false,-1, 15,0);
        vcdp->declBit(c+49,"DataSync streamCCByToggle_1 popArea_stream_rValid", false,-1);
        vcdp->declBit(c+17,"DataSync streamCCByToggle_1 popArea_stream_fire_1", false,-1);
        vcdp->declBus(c+41,"DataSync streamCCByToggle_1 popArea_stream_rData", false,-1, 15,0);
        vcdp->declBit(c+57,"DataSync streamCCByToggle_1 when_Stream_l342", false,-1);
        vcdp->declBit(c+97,"DataSync streamCCByToggle_1 outHitSignal_buffercc io_dataIn", false,-1);
        vcdp->declBit(c+65,"DataSync streamCCByToggle_1 outHitSignal_buffercc io_dataOut", false,-1);
        vcdp->declBit(c+121,"DataSync streamCCByToggle_1 outHitSignal_buffercc clk_in", false,-1);
        vcdp->declBit(c+137,"DataSync streamCCByToggle_1 outHitSignal_buffercc reset", false,-1);
        vcdp->declBit(c+73,"DataSync streamCCByToggle_1 outHitSignal_buffercc buffers_0", false,-1);
        vcdp->declBit(c+65,"DataSync streamCCByToggle_1 outHitSignal_buffercc buffers_1", false,-1);
        vcdp->declBit(c+113,"DataSync streamCCByToggle_1 pushArea_target_buffercc io_dataIn", false,-1);
        vcdp->declBit(c+89,"DataSync streamCCByToggle_1 pushArea_target_buffercc io_dataOut", false,-1);
        vcdp->declBit(c+129,"DataSync streamCCByToggle_1 pushArea_target_buffercc clk_out", false,-1);
        vcdp->declBit(c+137,"DataSync streamCCByToggle_1 pushArea_target_buffercc reset", false,-1);
        vcdp->declBit(c+105,"DataSync streamCCByToggle_1 pushArea_target_buffercc buffers_0", false,-1);
        vcdp->declBit(c+89,"DataSync streamCCByToggle_1 pushArea_target_buffercc buffers_1", false,-1);
    }
}

void VDataSync::traceFullThis__1(VDataSync__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDataSync* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(c+1,(vlTOPp->DataSync__DOT__streamCCByToggle_1__DOT__popArea_stream_valid));
        vcdp->fullBit(c+9,(vlTOPp->DataSync__DOT__streamCCByToggle_1__DOT__popArea_stream_ready));
        vcdp->fullBit(c+17,(((IData)(vlTOPp->DataSync__DOT__streamCCByToggle_1__DOT__popArea_stream_valid) 
                             & (IData)(vlTOPp->DataSync__DOT__streamCCByToggle_1__DOT__popArea_stream_ready))));
        vcdp->fullBit(c+25,(vlTOPp->DataSync__DOT__streamCCByToggle_1_io_input_ready));
        vcdp->fullBit(c+33,(vlTOPp->DataSync__DOT__streamCCByToggle_1__DOT__io_input_fire));
        vcdp->fullBus(c+41,(vlTOPp->DataSync__DOT__streamCCByToggle_1__DOT__popArea_stream_rData),16);
        vcdp->fullBit(c+49,(vlTOPp->DataSync__DOT__streamCCByToggle_1__DOT__popArea_stream_rValid));
        vcdp->fullBit(c+57,((1U & (~ (IData)(vlTOPp->DataSync__DOT__streamCCByToggle_1__DOT__popArea_stream_rValid)))));
        vcdp->fullBit(c+65,(vlTOPp->DataSync__DOT__streamCCByToggle_1__DOT__outHitSignal_buffercc__DOT__buffers_1));
        vcdp->fullBit(c+73,(vlTOPp->DataSync__DOT__streamCCByToggle_1__DOT__outHitSignal_buffercc__DOT__buffers_0));
        vcdp->fullBus(c+81,(vlTOPp->DataSync__DOT__streamCCByToggle_1__DOT__pushArea_data),16);
        vcdp->fullBit(c+89,(vlTOPp->DataSync__DOT__streamCCByToggle_1__DOT__pushArea_target_buffercc__DOT__buffers_1));
        vcdp->fullBit(c+97,(vlTOPp->DataSync__DOT__streamCCByToggle_1__DOT__popArea_hit));
        vcdp->fullBit(c+105,(vlTOPp->DataSync__DOT__streamCCByToggle_1__DOT__pushArea_target_buffercc__DOT__buffers_0));
        vcdp->fullBit(c+113,(vlTOPp->DataSync__DOT__streamCCByToggle_1__DOT__pushArea_target));
        vcdp->fullBit(c+121,(vlTOPp->clk_in));
        vcdp->fullBit(c+129,(vlTOPp->clk_out));
        vcdp->fullBit(c+137,(vlTOPp->reset));
        vcdp->fullBit(c+145,(vlTOPp->datain_valid));
        vcdp->fullBit(c+153,(vlTOPp->datain_ready));
        vcdp->fullBus(c+161,(vlTOPp->datain_payload),16);
        vcdp->fullBus(c+169,(vlTOPp->dataout),16);
        vcdp->fullBit(c+177,(1U));
    }
}
