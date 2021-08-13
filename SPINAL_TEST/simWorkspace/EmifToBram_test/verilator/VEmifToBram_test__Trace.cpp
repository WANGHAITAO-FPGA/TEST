// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VEmifToBram_test__Syms.h"


//======================

void VEmifToBram_test::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VEmifToBram_test* t = (VEmifToBram_test*)userthis;
    VEmifToBram_test__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VEmifToBram_test::traceChgThis(VEmifToBram_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VEmifToBram_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 1U))))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                >> 2U) | (vlTOPp->__Vm_traceActivity 
                                          >> 3U))))) {
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((8U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VEmifToBram_test::traceChgThis__2(VEmifToBram_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VEmifToBram_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1,(vlTOPp->EmifToBram_test__DOT__apb_decoder_io_output_PSEL));
        vcdp->chgBus(c+9,(((IData)(vlTOPp->EmifToBram_test__DOT__apb3tobram_1__DOT__when_Apb3ToBram_l41)
                            ? 0xfU : 0U)),4);
        vcdp->chgBit(c+17,(vlTOPp->EmifToBram_test__DOT__apb_decoder_io_input_PREADY));
        vcdp->chgBit(c+25,(vlTOPp->EmifToBram_test__DOT__apb_decoder_io_input_PSLVERROR));
        vcdp->chgBit(c+33,(vlTOPp->EmifToBram_test__DOT__apb_decoder_io_output_PSEL));
        vcdp->chgBit(c+41,(vlTOPp->EmifToBram_test__DOT__apb3tobram_1__DOT__when_Apb3ToBram_l41));
        vcdp->chgBit(c+49,(vlTOPp->EmifToBram_test__DOT__apb_decoder__DOT__when_Apb3Decoder_l84));
    }
}

void VEmifToBram_test::traceChgThis__3(VEmifToBram_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VEmifToBram_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+57,(vlTOPp->EmifToBram_test__DOT___zz_mem_port1),32);
        vcdp->chgBus(c+65,(vlTOPp->EmifToBram_test__DOT__emiftoapb_1__DOT__emifdatatemp),16);
        vcdp->chgBit(c+73,(vlTOPp->EmifToBram_test__DOT__emiftoapb_1__DOT__penable_regNext));
    }
}

void VEmifToBram_test::traceChgThis__4(VEmifToBram_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VEmifToBram_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+81,((((IData)(vlTOPp->EmifToBram_test__DOT__emiftoapb_1__DOT__penable) 
                             & (~ (IData)(vlTOPp->EmifToBram_test__DOT__emiftoapb_1__DOT__penable_regNext))) 
                            & (IData)(vlTOPp->EmifToBram_test__DOT__emiftoapb_1__DOT__penable))));
    }
}

void VEmifToBram_test::traceChgThis__5(VEmifToBram_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VEmifToBram_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+89,(vlTOPp->EmifToBram_test__DOT__emiftoapb_1__DOT__penable));
    }
}

void VEmifToBram_test::traceChgThis__6(VEmifToBram_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VEmifToBram_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+97,(vlTOPp->emif_emif_addr),24);
        vcdp->chgBus(c+105,(vlTOPp->emif_emif_data_read),16);
        vcdp->chgBus(c+113,(vlTOPp->emif_emif_data_write),16);
        vcdp->chgBit(c+121,(vlTOPp->emif_emif_data_writeEnable));
        vcdp->chgBit(c+129,(vlTOPp->emif_emif_cs));
        vcdp->chgBit(c+137,(vlTOPp->emif_emif_we));
        vcdp->chgBit(c+145,(vlTOPp->emif_emif_oe));
        vcdp->chgBit(c+153,(vlTOPp->clk));
        vcdp->chgBit(c+161,(vlTOPp->reset));
        vcdp->chgBus(c+169,(((0x800000U & vlTOPp->emif_emif_addr)
                              ? (IData)(vlTOPp->EmifToBram_test__DOT__emiftoapb_1__DOT___zz_emif_emif_data_write)
                              : (IData)(vlTOPp->EmifToBram_test__DOT__emiftoapb_1__DOT___zz_emif_emif_data_write_1))),16);
        vcdp->chgBit(c+177,((1U & (~ (IData)(vlTOPp->emif_emif_oe)))));
        vcdp->chgBus(c+185,((0xfffffU & (vlTOPp->emif_emif_addr 
                                         << 2U))),20);
        vcdp->chgBit(c+193,((1U & (~ (IData)(vlTOPp->emif_emif_cs)))));
        vcdp->chgBit(c+201,((((~ (IData)(vlTOPp->emif_emif_we)) 
                              & (IData)(vlTOPp->emif_emif_oe)) 
                             & (vlTOPp->emif_emif_addr 
                                >> 0x17U))));
        vcdp->chgBus(c+209,((((IData)(vlTOPp->emif_emif_data_read) 
                              << 0x10U) | (IData)(vlTOPp->EmifToBram_test__DOT__emiftoapb_1__DOT__emifdatatemp))),32);
        vcdp->chgBus(c+217,((0xffU & (vlTOPp->emif_emif_addr 
                                      << 2U))),8);
        vcdp->chgBit(c+225,((((~ (IData)(vlTOPp->emif_emif_we)) 
                              & (IData)(vlTOPp->emif_emif_oe)) 
                             & (~ (vlTOPp->emif_emif_addr 
                                   >> 0x17U)))));
        vcdp->chgBit(c+233,((1U & (vlTOPp->emif_emif_addr 
                                   >> 0x17U))));
    }
}
