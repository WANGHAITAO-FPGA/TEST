// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VApb3Test__Syms.h"


//======================

void VApb3Test::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VApb3Test* t = (VApb3Test*)userthis;
    VApb3Test__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VApb3Test::traceChgThis(VApb3Test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VApb3Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 1U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 3U))))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 3U))))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VApb3Test::traceChgThis__2(VApb3Test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VApb3Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1,(((IData)(vlTOPp->Apb3Test__DOT__apb3Router_1__DOT__selIndex)
                            ? vlTOPp->Apb3Test__DOT__gpioCtrl_io_apb_PRDATA
                            : vlTOPp->Apb3Test__DOT___zz_mem_port1)),32);
    }
}

void VApb3Test::traceChgThis__3(VApb3Test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VApb3Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+9,((1U & (IData)(vlTOPp->Apb3Test__DOT__apb3_decoder_io_output_PSEL))));
        vcdp->chgBus(c+17,(((IData)(vlTOPp->Apb3Test__DOT__apb3tobram_1__DOT__when_Apb3ToBram_l42)
                             ? 0xfU : 0U)),4);
        vcdp->chgBus(c+25,(vlTOPp->Apb3Test__DOT__gpioCtrl_io_apb_PRDATA),32);
        vcdp->chgBit(c+33,(vlTOPp->Apb3Test__DOT__apb3_decoder_io_input_PREADY));
        vcdp->chgBit(c+41,(vlTOPp->Apb3Test__DOT__apb3_decoder_io_input_PSLVERROR));
        vcdp->chgBus(c+49,(vlTOPp->Apb3Test__DOT__apb3_decoder_io_output_PSEL),2);
        vcdp->chgBit(c+57,((1U & ((IData)(vlTOPp->Apb3Test__DOT__apb3_decoder_io_output_PSEL) 
                                  >> 1U))));
        vcdp->chgBit(c+65,(vlTOPp->Apb3Test__DOT__apb3tobram_1__DOT__when_Apb3ToBram_l42));
        vcdp->chgBit(c+73,(vlTOPp->Apb3Test__DOT__gpioCtrl__DOT__ctrl_doWrite));
        vcdp->chgBit(c+81,(vlTOPp->Apb3Test__DOT__apb3_decoder__DOT__when_Apb3Decoder_l84));
    }
}

void VApb3Test::traceChgThis__4(VApb3Test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VApb3Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+89,(vlTOPp->Apb3Test__DOT___zz_mem_port1),32);
        vcdp->chgBus(c+97,(vlTOPp->Apb3Test__DOT__gpioCtrl__DOT__io_gpio_write_driver),32);
        vcdp->chgBus(c+105,(vlTOPp->Apb3Test__DOT__gpioCtrl__DOT__io_gpio_read_buffercc__DOT__buffers_1),32);
        vcdp->chgBus(c+113,(vlTOPp->Apb3Test__DOT__gpioCtrl__DOT__io_gpio_read_buffercc__DOT__buffers_0),32);
        vcdp->chgBit(c+121,(vlTOPp->Apb3Test__DOT__apb3Router_1__DOT__selIndex));
    }
}

void VApb3Test::traceChgThis__5(VApb3Test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VApb3Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+129,(vlTOPp->Apb3Test__DOT__gpioCtrl__DOT__io_gpio_writeEnable_driver),32);
    }
}

void VApb3Test::traceChgThis__6(VApb3Test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VApb3Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+137,(vlTOPp->apb3_PADDR),20);
        vcdp->chgBit(c+145,(vlTOPp->apb3_PSEL));
        vcdp->chgBit(c+153,(vlTOPp->apb3_PENABLE));
        vcdp->chgBit(c+161,(vlTOPp->apb3_PREADY));
        vcdp->chgBit(c+169,(vlTOPp->apb3_PWRITE));
        vcdp->chgBus(c+177,(vlTOPp->apb3_PWDATA),32);
        vcdp->chgBus(c+185,(vlTOPp->apb3_PRDATA),32);
        vcdp->chgBit(c+193,(vlTOPp->apb3_PSLVERROR));
        vcdp->chgBus(c+201,(vlTOPp->gpio_read),32);
        vcdp->chgBus(c+209,(vlTOPp->gpio_write),32);
        vcdp->chgBus(c+217,(vlTOPp->gpio_writeEnable),32);
        vcdp->chgBit(c+225,(vlTOPp->clk));
        vcdp->chgBit(c+233,(vlTOPp->reset));
        vcdp->chgBus(c+241,((0xfU & vlTOPp->apb3_PADDR)),4);
        vcdp->chgBus(c+249,((0xffU & vlTOPp->apb3_PADDR)),8);
        vcdp->chgBit(c+257,(((((IData)(vlTOPp->Apb3Test__DOT__apb3_decoder_io_output_PSEL) 
                               >> 1U) & (IData)(vlTOPp->apb3_PENABLE)) 
                             & (IData)(vlTOPp->apb3_PWRITE))));
        vcdp->chgBit(c+265,(((((IData)(vlTOPp->Apb3Test__DOT__apb3_decoder_io_output_PSEL) 
                               >> 1U) & (IData)(vlTOPp->apb3_PENABLE)) 
                             & (~ (IData)(vlTOPp->apb3_PWRITE)))));
    }
}
