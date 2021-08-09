// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VEmif_Ctrl_test__Syms.h"


//======================

void VEmif_Ctrl_test::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VEmif_Ctrl_test::traceInit, &VEmif_Ctrl_test::traceFull, &VEmif_Ctrl_test::traceChg, this);
}
void VEmif_Ctrl_test::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VEmif_Ctrl_test* t = (VEmif_Ctrl_test*)userthis;
    VEmif_Ctrl_test__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VEmif_Ctrl_test::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VEmif_Ctrl_test* t = (VEmif_Ctrl_test*)userthis;
    VEmif_Ctrl_test__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VEmif_Ctrl_test::traceInitThis(VEmif_Ctrl_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VEmif_Ctrl_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VEmif_Ctrl_test::traceFullThis(VEmif_Ctrl_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VEmif_Ctrl_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VEmif_Ctrl_test::traceInitThis__1(VEmif_Ctrl_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VEmif_Ctrl_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+33,"emif_emif_addr", false,-1, 23,0);
        vcdp->declBus(c+41,"emif_emif_data_read", false,-1, 31,0);
        vcdp->declBus(c+49,"emif_emif_data_write", false,-1, 31,0);
        vcdp->declBit(c+57,"emif_emif_data_writeEnable", false,-1);
        vcdp->declBit(c+65,"emif_emif_cs", false,-1);
        vcdp->declBit(c+73,"emif_emif_we", false,-1);
        vcdp->declBit(c+81,"emif_emif_oe", false,-1);
        vcdp->declBus(c+89,"apb_PADDR", false,-1, 19,0);
        vcdp->declBus(c+97,"apb_PSEL", false,-1, 0,0);
        vcdp->declBit(c+105,"apb_PENABLE", false,-1);
        vcdp->declBit(c+113,"apb_PREADY", false,-1);
        vcdp->declBit(c+121,"apb_PWRITE", false,-1);
        vcdp->declBus(c+129,"apb_PWDATA", false,-1, 31,0);
        vcdp->declBus(c+137,"apb_PRDATA", false,-1, 31,0);
        vcdp->declBit(c+145,"apb_PSLVERROR", false,-1);
        vcdp->declBit(c+153,"clk", false,-1);
        vcdp->declBit(c+161,"reset", false,-1);
        vcdp->declBus(c+33,"Emif_Ctrl_test emif_emif_addr", false,-1, 23,0);
        vcdp->declBus(c+41,"Emif_Ctrl_test emif_emif_data_read", false,-1, 31,0);
        vcdp->declBus(c+49,"Emif_Ctrl_test emif_emif_data_write", false,-1, 31,0);
        vcdp->declBit(c+57,"Emif_Ctrl_test emif_emif_data_writeEnable", false,-1);
        vcdp->declBit(c+65,"Emif_Ctrl_test emif_emif_cs", false,-1);
        vcdp->declBit(c+73,"Emif_Ctrl_test emif_emif_we", false,-1);
        vcdp->declBit(c+81,"Emif_Ctrl_test emif_emif_oe", false,-1);
        vcdp->declBus(c+89,"Emif_Ctrl_test apb_PADDR", false,-1, 19,0);
        vcdp->declBus(c+97,"Emif_Ctrl_test apb_PSEL", false,-1, 0,0);
        vcdp->declBit(c+105,"Emif_Ctrl_test apb_PENABLE", false,-1);
        vcdp->declBit(c+113,"Emif_Ctrl_test apb_PREADY", false,-1);
        vcdp->declBit(c+121,"Emif_Ctrl_test apb_PWRITE", false,-1);
        vcdp->declBus(c+129,"Emif_Ctrl_test apb_PWDATA", false,-1, 31,0);
        vcdp->declBus(c+137,"Emif_Ctrl_test apb_PRDATA", false,-1, 31,0);
        vcdp->declBit(c+145,"Emif_Ctrl_test apb_PSLVERROR", false,-1);
        vcdp->declBit(c+153,"Emif_Ctrl_test clk", false,-1);
        vcdp->declBit(c+161,"Emif_Ctrl_test reset", false,-1);
        vcdp->declBit(c+25,"Emif_Ctrl_test penable", false,-1);
        vcdp->declBus(c+1,"Emif_Ctrl_test emifdatatemp", false,-1, 31,0);
        vcdp->declBit(c+9,"Emif_Ctrl_test penable_regNext", false,-1);
        vcdp->declBit(c+169,"Emif_Ctrl_test when_EmifToApb_l69", false,-1);
        vcdp->declBit(c+177,"Emif_Ctrl_test when_EmifToApb_l77", false,-1);
        vcdp->declBus(c+17,"Emif_Ctrl_test apb_PRDATA_regNextWhen", false,-1, 31,0);
    }
}

void VEmif_Ctrl_test::traceFullThis__1(VEmif_Ctrl_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VEmif_Ctrl_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBus(c+1,(vlTOPp->Emif_Ctrl_test__DOT__emifdatatemp),32);
        vcdp->fullBit(c+9,(vlTOPp->Emif_Ctrl_test__DOT__penable_regNext));
        vcdp->fullBus(c+17,(vlTOPp->Emif_Ctrl_test__DOT__apb_PRDATA_regNextWhen),32);
        vcdp->fullBit(c+25,(vlTOPp->Emif_Ctrl_test__DOT__penable));
        vcdp->fullBus(c+33,(vlTOPp->emif_emif_addr),24);
        vcdp->fullBus(c+41,(vlTOPp->emif_emif_data_read),32);
        vcdp->fullBus(c+49,(vlTOPp->emif_emif_data_write),32);
        vcdp->fullBit(c+57,(vlTOPp->emif_emif_data_writeEnable));
        vcdp->fullBit(c+65,(vlTOPp->emif_emif_cs));
        vcdp->fullBit(c+73,(vlTOPp->emif_emif_we));
        vcdp->fullBit(c+81,(vlTOPp->emif_emif_oe));
        vcdp->fullBus(c+89,(vlTOPp->apb_PADDR),20);
        vcdp->fullBit(c+97,(vlTOPp->apb_PSEL));
        vcdp->fullBit(c+105,(vlTOPp->apb_PENABLE));
        vcdp->fullBit(c+113,(vlTOPp->apb_PREADY));
        vcdp->fullBit(c+121,(vlTOPp->apb_PWRITE));
        vcdp->fullBus(c+129,(vlTOPp->apb_PWDATA),32);
        vcdp->fullBus(c+137,(vlTOPp->apb_PRDATA),32);
        vcdp->fullBit(c+145,(vlTOPp->apb_PSLVERROR));
        vcdp->fullBit(c+153,(vlTOPp->clk));
        vcdp->fullBit(c+161,(vlTOPp->reset));
        vcdp->fullBit(c+169,((((~ (IData)(vlTOPp->emif_emif_we)) 
                               & (IData)(vlTOPp->emif_emif_oe)) 
                              & (~ (vlTOPp->emif_emif_addr 
                                    >> 0x17U)))));
        vcdp->fullBit(c+177,((1U & (~ (IData)(vlTOPp->emif_emif_oe)))));
    }
}
