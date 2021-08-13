// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VEmif_Ctrl_test__Syms.h"


//======================

void VEmif_Ctrl_test::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VEmif_Ctrl_test* t = (VEmif_Ctrl_test*)userthis;
    VEmif_Ctrl_test__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VEmif_Ctrl_test::traceChgThis(VEmif_Ctrl_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VEmif_Ctrl_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VEmif_Ctrl_test::traceChgThis__2(VEmif_Ctrl_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VEmif_Ctrl_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1,(vlTOPp->Emif_Ctrl_test__DOT__emifdatatemp),16);
        vcdp->chgBit(c+9,(vlTOPp->Emif_Ctrl_test__DOT__penable_regNext));
    }
}

void VEmif_Ctrl_test::traceChgThis__3(VEmif_Ctrl_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VEmif_Ctrl_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+17,(vlTOPp->Emif_Ctrl_test__DOT__penable));
    }
}

void VEmif_Ctrl_test::traceChgThis__4(VEmif_Ctrl_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VEmif_Ctrl_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+25,(vlTOPp->emif_emif_addr),24);
        vcdp->chgBus(c+33,(vlTOPp->emif_emif_data_read),16);
        vcdp->chgBus(c+41,(vlTOPp->emif_emif_data_write),16);
        vcdp->chgBit(c+49,(vlTOPp->emif_emif_data_writeEnable));
        vcdp->chgBit(c+57,(vlTOPp->emif_emif_cs));
        vcdp->chgBit(c+65,(vlTOPp->emif_emif_we));
        vcdp->chgBit(c+73,(vlTOPp->emif_emif_oe));
        vcdp->chgBus(c+81,(vlTOPp->apb_PADDR),20);
        vcdp->chgBit(c+89,(vlTOPp->apb_PSEL));
        vcdp->chgBit(c+97,(vlTOPp->apb_PENABLE));
        vcdp->chgBit(c+105,(vlTOPp->apb_PREADY));
        vcdp->chgBit(c+113,(vlTOPp->apb_PWRITE));
        vcdp->chgBus(c+121,(vlTOPp->apb_PWDATA),32);
        vcdp->chgBus(c+129,(vlTOPp->apb_PRDATA),32);
        vcdp->chgBit(c+137,(vlTOPp->apb_PSLVERROR));
        vcdp->chgBit(c+145,(vlTOPp->clk));
        vcdp->chgBit(c+153,(vlTOPp->reset));
        vcdp->chgBit(c+161,((((~ (IData)(vlTOPp->emif_emif_we)) 
                              & (IData)(vlTOPp->emif_emif_oe)) 
                             & (~ (vlTOPp->emif_emif_addr 
                                   >> 0x17U)))));
        vcdp->chgBit(c+169,((1U & (vlTOPp->emif_emif_addr 
                                   >> 0x17U))));
        vcdp->chgBit(c+177,((1U & (~ (IData)(vlTOPp->emif_emif_oe)))));
    }
}
