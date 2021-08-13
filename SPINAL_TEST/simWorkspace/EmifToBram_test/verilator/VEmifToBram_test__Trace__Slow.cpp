// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VEmifToBram_test__Syms.h"


//======================

void VEmifToBram_test::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VEmifToBram_test::traceInit, &VEmifToBram_test::traceFull, &VEmifToBram_test::traceChg, this);
}
void VEmifToBram_test::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VEmifToBram_test* t = (VEmifToBram_test*)userthis;
    VEmifToBram_test__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VEmifToBram_test::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VEmifToBram_test* t = (VEmifToBram_test*)userthis;
    VEmifToBram_test__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VEmifToBram_test::traceInitThis(VEmifToBram_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VEmifToBram_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VEmifToBram_test::traceFullThis(VEmifToBram_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VEmifToBram_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VEmifToBram_test::traceInitThis__1(VEmifToBram_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VEmifToBram_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+97,"emif_emif_addr", false,-1, 23,0);
        vcdp->declBus(c+105,"emif_emif_data_read", false,-1, 15,0);
        vcdp->declBus(c+113,"emif_emif_data_write", false,-1, 15,0);
        vcdp->declBit(c+121,"emif_emif_data_writeEnable", false,-1);
        vcdp->declBit(c+129,"emif_emif_cs", false,-1);
        vcdp->declBit(c+137,"emif_emif_we", false,-1);
        vcdp->declBit(c+145,"emif_emif_oe", false,-1);
        vcdp->declBit(c+153,"clk", false,-1);
        vcdp->declBit(c+161,"reset", false,-1);
        vcdp->declBus(c+97,"EmifToBram_test emif_emif_addr", false,-1, 23,0);
        vcdp->declBus(c+105,"EmifToBram_test emif_emif_data_read", false,-1, 15,0);
        vcdp->declBus(c+113,"EmifToBram_test emif_emif_data_write", false,-1, 15,0);
        vcdp->declBit(c+121,"EmifToBram_test emif_emif_data_writeEnable", false,-1);
        vcdp->declBit(c+129,"EmifToBram_test emif_emif_cs", false,-1);
        vcdp->declBit(c+137,"EmifToBram_test emif_emif_we", false,-1);
        vcdp->declBit(c+145,"EmifToBram_test emif_emif_oe", false,-1);
        vcdp->declBit(c+153,"EmifToBram_test clk", false,-1);
        vcdp->declBit(c+161,"EmifToBram_test reset", false,-1);
        vcdp->declBus(c+57,"EmifToBram_test apb3tobram_1_io_bram_rddata", false,-1, 31,0);
        vcdp->declBus(c+169,"EmifToBram_test emiftoapb_1_emif_emif_data_write", false,-1, 15,0);
        vcdp->declBit(c+177,"EmifToBram_test emiftoapb_1_emif_emif_data_writeEnable", false,-1);
        vcdp->declBus(c+185,"EmifToBram_test emiftoapb_1_apb_PADDR", false,-1, 19,0);
        vcdp->declBus(c+193,"EmifToBram_test emiftoapb_1_apb_PSEL", false,-1, 0,0);
        vcdp->declBit(c+81,"EmifToBram_test emiftoapb_1_apb_PENABLE", false,-1);
        vcdp->declBit(c+201,"EmifToBram_test emiftoapb_1_apb_PWRITE", false,-1);
        vcdp->declBus(c+209,"EmifToBram_test emiftoapb_1_apb_PWDATA", false,-1, 31,0);
        vcdp->declBit(c+241,"EmifToBram_test apb3tobram_1_io_apb_PREADY", false,-1);
        vcdp->declBus(c+57,"EmifToBram_test apb3tobram_1_io_apb_PRDATA", false,-1, 31,0);
        vcdp->declBit(c+249,"EmifToBram_test apb3tobram_1_io_apb_PSLVERROR", false,-1);
        vcdp->declBit(c+1,"EmifToBram_test apb3tobram_1_io_bram_en", false,-1);
        vcdp->declBus(c+9,"EmifToBram_test apb3tobram_1_io_bram_we", false,-1, 3,0);
        vcdp->declBus(c+217,"EmifToBram_test apb3tobram_1_io_bram_addr", false,-1, 7,0);
        vcdp->declBus(c+209,"EmifToBram_test apb3tobram_1_io_bram_wrdata", false,-1, 31,0);
        vcdp->declBit(c+17,"EmifToBram_test apb_decoder_io_input_PREADY", false,-1);
        vcdp->declBus(c+57,"EmifToBram_test apb_decoder_io_input_PRDATA", false,-1, 31,0);
        vcdp->declBit(c+25,"EmifToBram_test apb_decoder_io_input_PSLVERROR", false,-1);
        vcdp->declBus(c+185,"EmifToBram_test apb_decoder_io_output_PADDR", false,-1, 19,0);
        vcdp->declBus(c+33,"EmifToBram_test apb_decoder_io_output_PSEL", false,-1, 0,0);
        vcdp->declBit(c+81,"EmifToBram_test apb_decoder_io_output_PENABLE", false,-1);
        vcdp->declBit(c+201,"EmifToBram_test apb_decoder_io_output_PWRITE", false,-1);
        vcdp->declBus(c+209,"EmifToBram_test apb_decoder_io_output_PWDATA", false,-1, 31,0);
        vcdp->declBit(c+241,"EmifToBram_test apb3Router_1_io_input_PREADY", false,-1);
        vcdp->declBus(c+57,"EmifToBram_test apb3Router_1_io_input_PRDATA", false,-1, 31,0);
        vcdp->declBit(c+249,"EmifToBram_test apb3Router_1_io_input_PSLVERROR", false,-1);
        vcdp->declBus(c+185,"EmifToBram_test apb3Router_1_io_outputs_0_PADDR", false,-1, 19,0);
        vcdp->declBus(c+1,"EmifToBram_test apb3Router_1_io_outputs_0_PSEL", false,-1, 0,0);
        vcdp->declBit(c+81,"EmifToBram_test apb3Router_1_io_outputs_0_PENABLE", false,-1);
        vcdp->declBit(c+201,"EmifToBram_test apb3Router_1_io_outputs_0_PWRITE", false,-1);
        vcdp->declBus(c+209,"EmifToBram_test apb3Router_1_io_outputs_0_PWDATA", false,-1, 31,0);
        vcdp->declBus(c+97,"EmifToBram_test emiftoapb_1 emif_emif_addr", false,-1, 23,0);
        vcdp->declBus(c+105,"EmifToBram_test emiftoapb_1 emif_emif_data_read", false,-1, 15,0);
        vcdp->declBus(c+169,"EmifToBram_test emiftoapb_1 emif_emif_data_write", false,-1, 15,0);
        vcdp->declBit(c+177,"EmifToBram_test emiftoapb_1 emif_emif_data_writeEnable", false,-1);
        vcdp->declBit(c+129,"EmifToBram_test emiftoapb_1 emif_emif_cs", false,-1);
        vcdp->declBit(c+137,"EmifToBram_test emiftoapb_1 emif_emif_we", false,-1);
        vcdp->declBit(c+145,"EmifToBram_test emiftoapb_1 emif_emif_oe", false,-1);
        vcdp->declBus(c+185,"EmifToBram_test emiftoapb_1 apb_PADDR", false,-1, 19,0);
        vcdp->declBus(c+193,"EmifToBram_test emiftoapb_1 apb_PSEL", false,-1, 0,0);
        vcdp->declBit(c+81,"EmifToBram_test emiftoapb_1 apb_PENABLE", false,-1);
        vcdp->declBit(c+17,"EmifToBram_test emiftoapb_1 apb_PREADY", false,-1);
        vcdp->declBit(c+201,"EmifToBram_test emiftoapb_1 apb_PWRITE", false,-1);
        vcdp->declBus(c+209,"EmifToBram_test emiftoapb_1 apb_PWDATA", false,-1, 31,0);
        vcdp->declBus(c+57,"EmifToBram_test emiftoapb_1 apb_PRDATA", false,-1, 31,0);
        vcdp->declBit(c+25,"EmifToBram_test emiftoapb_1 apb_PSLVERROR", false,-1);
        vcdp->declBit(c+153,"EmifToBram_test emiftoapb_1 clk", false,-1);
        vcdp->declBit(c+161,"EmifToBram_test emiftoapb_1 reset", false,-1);
        vcdp->declBit(c+89,"EmifToBram_test emiftoapb_1 penable", false,-1);
        vcdp->declBus(c+65,"EmifToBram_test emiftoapb_1 emifdatatemp", false,-1, 15,0);
        vcdp->declBus(c+257,"EmifToBram_test emiftoapb_1 emif_default_bits", false,-1, 1,0);
        vcdp->declBit(c+73,"EmifToBram_test emiftoapb_1 penable_regNext", false,-1);
        vcdp->declBit(c+225,"EmifToBram_test emiftoapb_1 when_EmifToApb_l73", false,-1);
        vcdp->declBit(c+233,"EmifToBram_test emiftoapb_1 when_EmifToApb_l83", false,-1);
        vcdp->declBit(c+177,"EmifToBram_test emiftoapb_1 when_EmifToApb_l84", false,-1);
        vcdp->declBit(c+177,"EmifToBram_test emiftoapb_1 when_EmifToApb_l86", false,-1);
        vcdp->declBus(c+185,"EmifToBram_test apb3tobram_1 io_apb_PADDR", false,-1, 19,0);
        vcdp->declBus(c+1,"EmifToBram_test apb3tobram_1 io_apb_PSEL", false,-1, 0,0);
        vcdp->declBit(c+81,"EmifToBram_test apb3tobram_1 io_apb_PENABLE", false,-1);
        vcdp->declBit(c+241,"EmifToBram_test apb3tobram_1 io_apb_PREADY", false,-1);
        vcdp->declBit(c+201,"EmifToBram_test apb3tobram_1 io_apb_PWRITE", false,-1);
        vcdp->declBus(c+209,"EmifToBram_test apb3tobram_1 io_apb_PWDATA", false,-1, 31,0);
        vcdp->declBus(c+57,"EmifToBram_test apb3tobram_1 io_apb_PRDATA", false,-1, 31,0);
        vcdp->declBit(c+249,"EmifToBram_test apb3tobram_1 io_apb_PSLVERROR", false,-1);
        vcdp->declBit(c+1,"EmifToBram_test apb3tobram_1 io_bram_en", false,-1);
        vcdp->declBus(c+9,"EmifToBram_test apb3tobram_1 io_bram_we", false,-1, 3,0);
        vcdp->declBus(c+217,"EmifToBram_test apb3tobram_1 io_bram_addr", false,-1, 7,0);
        vcdp->declBus(c+209,"EmifToBram_test apb3tobram_1 io_bram_wrdata", false,-1, 31,0);
        vcdp->declBus(c+57,"EmifToBram_test apb3tobram_1 io_bram_rddata", false,-1, 31,0);
        vcdp->declBit(c+41,"EmifToBram_test apb3tobram_1 when_Apb3ToBram_l41", false,-1);
        vcdp->declBus(c+185,"EmifToBram_test apb_decoder io_input_PADDR", false,-1, 19,0);
        vcdp->declBus(c+193,"EmifToBram_test apb_decoder io_input_PSEL", false,-1, 0,0);
        vcdp->declBit(c+81,"EmifToBram_test apb_decoder io_input_PENABLE", false,-1);
        vcdp->declBit(c+17,"EmifToBram_test apb_decoder io_input_PREADY", false,-1);
        vcdp->declBit(c+201,"EmifToBram_test apb_decoder io_input_PWRITE", false,-1);
        vcdp->declBus(c+209,"EmifToBram_test apb_decoder io_input_PWDATA", false,-1, 31,0);
        vcdp->declBus(c+57,"EmifToBram_test apb_decoder io_input_PRDATA", false,-1, 31,0);
        vcdp->declBit(c+25,"EmifToBram_test apb_decoder io_input_PSLVERROR", false,-1);
        vcdp->declBus(c+185,"EmifToBram_test apb_decoder io_output_PADDR", false,-1, 19,0);
        vcdp->declBus(c+33,"EmifToBram_test apb_decoder io_output_PSEL", false,-1, 0,0);
        vcdp->declBit(c+81,"EmifToBram_test apb_decoder io_output_PENABLE", false,-1);
        vcdp->declBit(c+241,"EmifToBram_test apb_decoder io_output_PREADY", false,-1);
        vcdp->declBit(c+201,"EmifToBram_test apb_decoder io_output_PWRITE", false,-1);
        vcdp->declBus(c+209,"EmifToBram_test apb_decoder io_output_PWDATA", false,-1, 31,0);
        vcdp->declBus(c+57,"EmifToBram_test apb_decoder io_output_PRDATA", false,-1, 31,0);
        vcdp->declBit(c+249,"EmifToBram_test apb_decoder io_output_PSLVERROR", false,-1);
        vcdp->declBit(c+49,"EmifToBram_test apb_decoder when_Apb3Decoder_l84", false,-1);
        vcdp->declBus(c+185,"EmifToBram_test apb3Router_1 io_input_PADDR", false,-1, 19,0);
        vcdp->declBus(c+33,"EmifToBram_test apb3Router_1 io_input_PSEL", false,-1, 0,0);
        vcdp->declBit(c+81,"EmifToBram_test apb3Router_1 io_input_PENABLE", false,-1);
        vcdp->declBit(c+241,"EmifToBram_test apb3Router_1 io_input_PREADY", false,-1);
        vcdp->declBit(c+201,"EmifToBram_test apb3Router_1 io_input_PWRITE", false,-1);
        vcdp->declBus(c+209,"EmifToBram_test apb3Router_1 io_input_PWDATA", false,-1, 31,0);
        vcdp->declBus(c+57,"EmifToBram_test apb3Router_1 io_input_PRDATA", false,-1, 31,0);
        vcdp->declBit(c+249,"EmifToBram_test apb3Router_1 io_input_PSLVERROR", false,-1);
        vcdp->declBus(c+185,"EmifToBram_test apb3Router_1 io_outputs_0_PADDR", false,-1, 19,0);
        vcdp->declBus(c+1,"EmifToBram_test apb3Router_1 io_outputs_0_PSEL", false,-1, 0,0);
        vcdp->declBit(c+81,"EmifToBram_test apb3Router_1 io_outputs_0_PENABLE", false,-1);
        vcdp->declBit(c+241,"EmifToBram_test apb3Router_1 io_outputs_0_PREADY", false,-1);
        vcdp->declBit(c+201,"EmifToBram_test apb3Router_1 io_outputs_0_PWRITE", false,-1);
        vcdp->declBus(c+209,"EmifToBram_test apb3Router_1 io_outputs_0_PWDATA", false,-1, 31,0);
        vcdp->declBus(c+57,"EmifToBram_test apb3Router_1 io_outputs_0_PRDATA", false,-1, 31,0);
        vcdp->declBit(c+249,"EmifToBram_test apb3Router_1 io_outputs_0_PSLVERROR", false,-1);
        vcdp->declBit(c+153,"EmifToBram_test apb3Router_1 clk", false,-1);
        vcdp->declBit(c+161,"EmifToBram_test apb3Router_1 reset", false,-1);
    }
}

void VEmifToBram_test::traceFullThis__1(VEmifToBram_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VEmifToBram_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(c+1,(vlTOPp->EmifToBram_test__DOT__apb_decoder_io_output_PSEL));
        vcdp->fullBus(c+9,(((IData)(vlTOPp->EmifToBram_test__DOT__apb3tobram_1__DOT__when_Apb3ToBram_l41)
                             ? 0xfU : 0U)),4);
        vcdp->fullBit(c+17,(vlTOPp->EmifToBram_test__DOT__apb_decoder_io_input_PREADY));
        vcdp->fullBit(c+25,(vlTOPp->EmifToBram_test__DOT__apb_decoder_io_input_PSLVERROR));
        vcdp->fullBit(c+33,(vlTOPp->EmifToBram_test__DOT__apb_decoder_io_output_PSEL));
        vcdp->fullBit(c+41,(vlTOPp->EmifToBram_test__DOT__apb3tobram_1__DOT__when_Apb3ToBram_l41));
        vcdp->fullBit(c+49,(vlTOPp->EmifToBram_test__DOT__apb_decoder__DOT__when_Apb3Decoder_l84));
        vcdp->fullBus(c+57,(vlTOPp->EmifToBram_test__DOT___zz_mem_port1),32);
        vcdp->fullBus(c+65,(vlTOPp->EmifToBram_test__DOT__emiftoapb_1__DOT__emifdatatemp),16);
        vcdp->fullBit(c+73,(vlTOPp->EmifToBram_test__DOT__emiftoapb_1__DOT__penable_regNext));
        vcdp->fullBit(c+81,((((IData)(vlTOPp->EmifToBram_test__DOT__emiftoapb_1__DOT__penable) 
                              & (~ (IData)(vlTOPp->EmifToBram_test__DOT__emiftoapb_1__DOT__penable_regNext))) 
                             & (IData)(vlTOPp->EmifToBram_test__DOT__emiftoapb_1__DOT__penable))));
        vcdp->fullBit(c+89,(vlTOPp->EmifToBram_test__DOT__emiftoapb_1__DOT__penable));
        vcdp->fullBus(c+97,(vlTOPp->emif_emif_addr),24);
        vcdp->fullBus(c+105,(vlTOPp->emif_emif_data_read),16);
        vcdp->fullBus(c+113,(vlTOPp->emif_emif_data_write),16);
        vcdp->fullBit(c+121,(vlTOPp->emif_emif_data_writeEnable));
        vcdp->fullBit(c+129,(vlTOPp->emif_emif_cs));
        vcdp->fullBit(c+137,(vlTOPp->emif_emif_we));
        vcdp->fullBit(c+145,(vlTOPp->emif_emif_oe));
        vcdp->fullBit(c+153,(vlTOPp->clk));
        vcdp->fullBit(c+161,(vlTOPp->reset));
        vcdp->fullBus(c+169,(((0x800000U & vlTOPp->emif_emif_addr)
                               ? (IData)(vlTOPp->EmifToBram_test__DOT__emiftoapb_1__DOT___zz_emif_emif_data_write)
                               : (IData)(vlTOPp->EmifToBram_test__DOT__emiftoapb_1__DOT___zz_emif_emif_data_write_1))),16);
        vcdp->fullBit(c+177,((1U & (~ (IData)(vlTOPp->emif_emif_oe)))));
        vcdp->fullBus(c+185,((0xfffffU & (vlTOPp->emif_emif_addr 
                                          << 2U))),20);
        vcdp->fullBit(c+193,((1U & (~ (IData)(vlTOPp->emif_emif_cs)))));
        vcdp->fullBit(c+201,((((~ (IData)(vlTOPp->emif_emif_we)) 
                               & (IData)(vlTOPp->emif_emif_oe)) 
                              & (vlTOPp->emif_emif_addr 
                                 >> 0x17U))));
        vcdp->fullBus(c+209,((((IData)(vlTOPp->emif_emif_data_read) 
                               << 0x10U) | (IData)(vlTOPp->EmifToBram_test__DOT__emiftoapb_1__DOT__emifdatatemp))),32);
        vcdp->fullBus(c+217,((0xffU & (vlTOPp->emif_emif_addr 
                                       << 2U))),8);
        vcdp->fullBit(c+225,((((~ (IData)(vlTOPp->emif_emif_we)) 
                               & (IData)(vlTOPp->emif_emif_oe)) 
                              & (~ (vlTOPp->emif_emif_addr 
                                    >> 0x17U)))));
        vcdp->fullBit(c+233,((1U & (vlTOPp->emif_emif_addr 
                                    >> 0x17U))));
        vcdp->fullBit(c+241,(1U));
        vcdp->fullBit(c+249,(0U));
        vcdp->fullBus(c+257,(0U),2);
    }
}
