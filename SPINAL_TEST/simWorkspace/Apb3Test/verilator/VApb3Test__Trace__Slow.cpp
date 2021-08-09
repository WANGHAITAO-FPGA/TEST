// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VApb3Test__Syms.h"


//======================

void VApb3Test::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VApb3Test::traceInit, &VApb3Test::traceFull, &VApb3Test::traceChg, this);
}
void VApb3Test::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VApb3Test* t = (VApb3Test*)userthis;
    VApb3Test__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VApb3Test::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VApb3Test* t = (VApb3Test*)userthis;
    VApb3Test__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VApb3Test::traceInitThis(VApb3Test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VApb3Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VApb3Test::traceFullThis(VApb3Test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VApb3Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VApb3Test::traceInitThis__1(VApb3Test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VApb3Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+137,"apb3_PADDR", false,-1, 19,0);
        vcdp->declBus(c+145,"apb3_PSEL", false,-1, 0,0);
        vcdp->declBit(c+153,"apb3_PENABLE", false,-1);
        vcdp->declBit(c+161,"apb3_PREADY", false,-1);
        vcdp->declBit(c+169,"apb3_PWRITE", false,-1);
        vcdp->declBus(c+177,"apb3_PWDATA", false,-1, 31,0);
        vcdp->declBus(c+185,"apb3_PRDATA", false,-1, 31,0);
        vcdp->declBit(c+193,"apb3_PSLVERROR", false,-1);
        vcdp->declBus(c+201,"gpio_read", false,-1, 31,0);
        vcdp->declBus(c+209,"gpio_write", false,-1, 31,0);
        vcdp->declBus(c+217,"gpio_writeEnable", false,-1, 31,0);
        vcdp->declBit(c+225,"clk", false,-1);
        vcdp->declBit(c+233,"reset", false,-1);
        vcdp->declBus(c+137,"Apb3Test apb3_PADDR", false,-1, 19,0);
        vcdp->declBus(c+145,"Apb3Test apb3_PSEL", false,-1, 0,0);
        vcdp->declBit(c+153,"Apb3Test apb3_PENABLE", false,-1);
        vcdp->declBit(c+161,"Apb3Test apb3_PREADY", false,-1);
        vcdp->declBit(c+169,"Apb3Test apb3_PWRITE", false,-1);
        vcdp->declBus(c+177,"Apb3Test apb3_PWDATA", false,-1, 31,0);
        vcdp->declBus(c+185,"Apb3Test apb3_PRDATA", false,-1, 31,0);
        vcdp->declBit(c+193,"Apb3Test apb3_PSLVERROR", false,-1);
        vcdp->declBus(c+201,"Apb3Test gpio_read", false,-1, 31,0);
        vcdp->declBus(c+209,"Apb3Test gpio_write", false,-1, 31,0);
        vcdp->declBus(c+217,"Apb3Test gpio_writeEnable", false,-1, 31,0);
        vcdp->declBit(c+225,"Apb3Test clk", false,-1);
        vcdp->declBit(c+233,"Apb3Test reset", false,-1);
        vcdp->declBus(c+89,"Apb3Test apb3tobram_1_io_bram_rddata", false,-1, 31,0);
        vcdp->declBus(c+241,"Apb3Test gpioCtrl_io_apb_PADDR", false,-1, 3,0);
        vcdp->declBit(c+273,"Apb3Test apb3tobram_1_io_apb_PREADY", false,-1);
        vcdp->declBus(c+89,"Apb3Test apb3tobram_1_io_apb_PRDATA", false,-1, 31,0);
        vcdp->declBit(c+281,"Apb3Test apb3tobram_1_io_apb_PSLVERROR", false,-1);
        vcdp->declBit(c+9,"Apb3Test apb3tobram_1_io_bram_en", false,-1);
        vcdp->declBus(c+17,"Apb3Test apb3tobram_1_io_bram_we", false,-1, 3,0);
        vcdp->declBus(c+249,"Apb3Test apb3tobram_1_io_bram_addr", false,-1, 7,0);
        vcdp->declBus(c+177,"Apb3Test apb3tobram_1_io_bram_wrdata", false,-1, 31,0);
        vcdp->declBit(c+273,"Apb3Test gpioCtrl_io_apb_PREADY", false,-1);
        vcdp->declBus(c+25,"Apb3Test gpioCtrl_io_apb_PRDATA", false,-1, 31,0);
        vcdp->declBit(c+281,"Apb3Test gpioCtrl_io_apb_PSLVERROR", false,-1);
        vcdp->declBus(c+97,"Apb3Test gpioCtrl_io_gpio_write", false,-1, 31,0);
        vcdp->declBus(c+129,"Apb3Test gpioCtrl_io_gpio_writeEnable", false,-1, 31,0);
        vcdp->declBus(c+105,"Apb3Test gpioCtrl_io_value", false,-1, 31,0);
        vcdp->declBit(c+33,"Apb3Test apb3_decoder_io_input_PREADY", false,-1);
        vcdp->declBus(c+1,"Apb3Test apb3_decoder_io_input_PRDATA", false,-1, 31,0);
        vcdp->declBit(c+41,"Apb3Test apb3_decoder_io_input_PSLVERROR", false,-1);
        vcdp->declBus(c+137,"Apb3Test apb3_decoder_io_output_PADDR", false,-1, 19,0);
        vcdp->declBus(c+49,"Apb3Test apb3_decoder_io_output_PSEL", false,-1, 1,0);
        vcdp->declBit(c+153,"Apb3Test apb3_decoder_io_output_PENABLE", false,-1);
        vcdp->declBit(c+169,"Apb3Test apb3_decoder_io_output_PWRITE", false,-1);
        vcdp->declBus(c+177,"Apb3Test apb3_decoder_io_output_PWDATA", false,-1, 31,0);
        vcdp->declBit(c+289,"Apb3Test apb3Router_1_io_input_PREADY", false,-1);
        vcdp->declBus(c+1,"Apb3Test apb3Router_1_io_input_PRDATA", false,-1, 31,0);
        vcdp->declBit(c+297,"Apb3Test apb3Router_1_io_input_PSLVERROR", false,-1);
        vcdp->declBus(c+137,"Apb3Test apb3Router_1_io_outputs_0_PADDR", false,-1, 19,0);
        vcdp->declBus(c+9,"Apb3Test apb3Router_1_io_outputs_0_PSEL", false,-1, 0,0);
        vcdp->declBit(c+153,"Apb3Test apb3Router_1_io_outputs_0_PENABLE", false,-1);
        vcdp->declBit(c+169,"Apb3Test apb3Router_1_io_outputs_0_PWRITE", false,-1);
        vcdp->declBus(c+177,"Apb3Test apb3Router_1_io_outputs_0_PWDATA", false,-1, 31,0);
        vcdp->declBus(c+137,"Apb3Test apb3Router_1_io_outputs_1_PADDR", false,-1, 19,0);
        vcdp->declBus(c+57,"Apb3Test apb3Router_1_io_outputs_1_PSEL", false,-1, 0,0);
        vcdp->declBit(c+153,"Apb3Test apb3Router_1_io_outputs_1_PENABLE", false,-1);
        vcdp->declBit(c+169,"Apb3Test apb3Router_1_io_outputs_1_PWRITE", false,-1);
        vcdp->declBus(c+177,"Apb3Test apb3Router_1_io_outputs_1_PWDATA", false,-1, 31,0);
        vcdp->declBus(c+137,"Apb3Test apb3tobram_1 io_apb_PADDR", false,-1, 19,0);
        vcdp->declBus(c+9,"Apb3Test apb3tobram_1 io_apb_PSEL", false,-1, 0,0);
        vcdp->declBit(c+153,"Apb3Test apb3tobram_1 io_apb_PENABLE", false,-1);
        vcdp->declBit(c+273,"Apb3Test apb3tobram_1 io_apb_PREADY", false,-1);
        vcdp->declBit(c+169,"Apb3Test apb3tobram_1 io_apb_PWRITE", false,-1);
        vcdp->declBus(c+177,"Apb3Test apb3tobram_1 io_apb_PWDATA", false,-1, 31,0);
        vcdp->declBus(c+89,"Apb3Test apb3tobram_1 io_apb_PRDATA", false,-1, 31,0);
        vcdp->declBit(c+281,"Apb3Test apb3tobram_1 io_apb_PSLVERROR", false,-1);
        vcdp->declBit(c+9,"Apb3Test apb3tobram_1 io_bram_en", false,-1);
        vcdp->declBus(c+17,"Apb3Test apb3tobram_1 io_bram_we", false,-1, 3,0);
        vcdp->declBus(c+249,"Apb3Test apb3tobram_1 io_bram_addr", false,-1, 7,0);
        vcdp->declBus(c+177,"Apb3Test apb3tobram_1 io_bram_wrdata", false,-1, 31,0);
        vcdp->declBus(c+89,"Apb3Test apb3tobram_1 io_bram_rddata", false,-1, 31,0);
        vcdp->declBit(c+65,"Apb3Test apb3tobram_1 when_Apb3ToBram_l42", false,-1);
        vcdp->declBus(c+241,"Apb3Test gpioCtrl io_apb_PADDR", false,-1, 3,0);
        vcdp->declBus(c+57,"Apb3Test gpioCtrl io_apb_PSEL", false,-1, 0,0);
        vcdp->declBit(c+153,"Apb3Test gpioCtrl io_apb_PENABLE", false,-1);
        vcdp->declBit(c+273,"Apb3Test gpioCtrl io_apb_PREADY", false,-1);
        vcdp->declBit(c+169,"Apb3Test gpioCtrl io_apb_PWRITE", false,-1);
        vcdp->declBus(c+177,"Apb3Test gpioCtrl io_apb_PWDATA", false,-1, 31,0);
        vcdp->declBus(c+25,"Apb3Test gpioCtrl io_apb_PRDATA", false,-1, 31,0);
        vcdp->declBit(c+281,"Apb3Test gpioCtrl io_apb_PSLVERROR", false,-1);
        vcdp->declBus(c+201,"Apb3Test gpioCtrl io_gpio_read", false,-1, 31,0);
        vcdp->declBus(c+97,"Apb3Test gpioCtrl io_gpio_write", false,-1, 31,0);
        vcdp->declBus(c+129,"Apb3Test gpioCtrl io_gpio_writeEnable", false,-1, 31,0);
        vcdp->declBus(c+105,"Apb3Test gpioCtrl io_value", false,-1, 31,0);
        vcdp->declBit(c+225,"Apb3Test gpioCtrl clk", false,-1);
        vcdp->declBit(c+233,"Apb3Test gpioCtrl reset", false,-1);
        vcdp->declBus(c+105,"Apb3Test gpioCtrl io_gpio_read_buffercc_io_dataOut", false,-1, 31,0);
        vcdp->declBit(c+257,"Apb3Test gpioCtrl ctrl_askWrite", false,-1);
        vcdp->declBit(c+265,"Apb3Test gpioCtrl ctrl_askRead", false,-1);
        vcdp->declBit(c+73,"Apb3Test gpioCtrl ctrl_doWrite", false,-1);
        vcdp->declBit(c+265,"Apb3Test gpioCtrl ctrl_doRead", false,-1);
        vcdp->declBus(c+97,"Apb3Test gpioCtrl io_gpio_write_driver", false,-1, 31,0);
        vcdp->declBus(c+129,"Apb3Test gpioCtrl io_gpio_writeEnable_driver", false,-1, 31,0);
        vcdp->declBus(c+201,"Apb3Test gpioCtrl io_gpio_read_buffercc io_dataIn", false,-1, 31,0);
        vcdp->declBus(c+105,"Apb3Test gpioCtrl io_gpio_read_buffercc io_dataOut", false,-1, 31,0);
        vcdp->declBit(c+225,"Apb3Test gpioCtrl io_gpio_read_buffercc clk", false,-1);
        vcdp->declBit(c+233,"Apb3Test gpioCtrl io_gpio_read_buffercc reset", false,-1);
        vcdp->declBus(c+113,"Apb3Test gpioCtrl io_gpio_read_buffercc buffers_0", false,-1, 31,0);
        vcdp->declBus(c+105,"Apb3Test gpioCtrl io_gpio_read_buffercc buffers_1", false,-1, 31,0);
        vcdp->declBus(c+137,"Apb3Test apb3_decoder io_input_PADDR", false,-1, 19,0);
        vcdp->declBus(c+145,"Apb3Test apb3_decoder io_input_PSEL", false,-1, 0,0);
        vcdp->declBit(c+153,"Apb3Test apb3_decoder io_input_PENABLE", false,-1);
        vcdp->declBit(c+33,"Apb3Test apb3_decoder io_input_PREADY", false,-1);
        vcdp->declBit(c+169,"Apb3Test apb3_decoder io_input_PWRITE", false,-1);
        vcdp->declBus(c+177,"Apb3Test apb3_decoder io_input_PWDATA", false,-1, 31,0);
        vcdp->declBus(c+1,"Apb3Test apb3_decoder io_input_PRDATA", false,-1, 31,0);
        vcdp->declBit(c+41,"Apb3Test apb3_decoder io_input_PSLVERROR", false,-1);
        vcdp->declBus(c+137,"Apb3Test apb3_decoder io_output_PADDR", false,-1, 19,0);
        vcdp->declBus(c+49,"Apb3Test apb3_decoder io_output_PSEL", false,-1, 1,0);
        vcdp->declBit(c+153,"Apb3Test apb3_decoder io_output_PENABLE", false,-1);
        vcdp->declBit(c+289,"Apb3Test apb3_decoder io_output_PREADY", false,-1);
        vcdp->declBit(c+169,"Apb3Test apb3_decoder io_output_PWRITE", false,-1);
        vcdp->declBus(c+177,"Apb3Test apb3_decoder io_output_PWDATA", false,-1, 31,0);
        vcdp->declBus(c+1,"Apb3Test apb3_decoder io_output_PRDATA", false,-1, 31,0);
        vcdp->declBit(c+297,"Apb3Test apb3_decoder io_output_PSLVERROR", false,-1);
        vcdp->declBit(c+81,"Apb3Test apb3_decoder when_Apb3Decoder_l84", false,-1);
        vcdp->declBus(c+137,"Apb3Test apb3Router_1 io_input_PADDR", false,-1, 19,0);
        vcdp->declBus(c+49,"Apb3Test apb3Router_1 io_input_PSEL", false,-1, 1,0);
        vcdp->declBit(c+153,"Apb3Test apb3Router_1 io_input_PENABLE", false,-1);
        vcdp->declBit(c+289,"Apb3Test apb3Router_1 io_input_PREADY", false,-1);
        vcdp->declBit(c+169,"Apb3Test apb3Router_1 io_input_PWRITE", false,-1);
        vcdp->declBus(c+177,"Apb3Test apb3Router_1 io_input_PWDATA", false,-1, 31,0);
        vcdp->declBus(c+1,"Apb3Test apb3Router_1 io_input_PRDATA", false,-1, 31,0);
        vcdp->declBit(c+297,"Apb3Test apb3Router_1 io_input_PSLVERROR", false,-1);
        vcdp->declBus(c+137,"Apb3Test apb3Router_1 io_outputs_0_PADDR", false,-1, 19,0);
        vcdp->declBus(c+9,"Apb3Test apb3Router_1 io_outputs_0_PSEL", false,-1, 0,0);
        vcdp->declBit(c+153,"Apb3Test apb3Router_1 io_outputs_0_PENABLE", false,-1);
        vcdp->declBit(c+273,"Apb3Test apb3Router_1 io_outputs_0_PREADY", false,-1);
        vcdp->declBit(c+169,"Apb3Test apb3Router_1 io_outputs_0_PWRITE", false,-1);
        vcdp->declBus(c+177,"Apb3Test apb3Router_1 io_outputs_0_PWDATA", false,-1, 31,0);
        vcdp->declBus(c+89,"Apb3Test apb3Router_1 io_outputs_0_PRDATA", false,-1, 31,0);
        vcdp->declBit(c+281,"Apb3Test apb3Router_1 io_outputs_0_PSLVERROR", false,-1);
        vcdp->declBus(c+137,"Apb3Test apb3Router_1 io_outputs_1_PADDR", false,-1, 19,0);
        vcdp->declBus(c+57,"Apb3Test apb3Router_1 io_outputs_1_PSEL", false,-1, 0,0);
        vcdp->declBit(c+153,"Apb3Test apb3Router_1 io_outputs_1_PENABLE", false,-1);
        vcdp->declBit(c+273,"Apb3Test apb3Router_1 io_outputs_1_PREADY", false,-1);
        vcdp->declBit(c+169,"Apb3Test apb3Router_1 io_outputs_1_PWRITE", false,-1);
        vcdp->declBus(c+177,"Apb3Test apb3Router_1 io_outputs_1_PWDATA", false,-1, 31,0);
        vcdp->declBus(c+25,"Apb3Test apb3Router_1 io_outputs_1_PRDATA", false,-1, 31,0);
        vcdp->declBit(c+281,"Apb3Test apb3Router_1 io_outputs_1_PSLVERROR", false,-1);
        vcdp->declBit(c+225,"Apb3Test apb3Router_1 clk", false,-1);
        vcdp->declBit(c+233,"Apb3Test apb3Router_1 reset", false,-1);
        vcdp->declBus(c+121,"Apb3Test apb3Router_1 selIndex", false,-1, 0,0);
    }
}

void VApb3Test::traceFullThis__1(VApb3Test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VApb3Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBus(c+1,(((IData)(vlTOPp->Apb3Test__DOT__apb3Router_1__DOT__selIndex)
                             ? vlTOPp->Apb3Test__DOT__gpioCtrl_io_apb_PRDATA
                             : vlTOPp->Apb3Test__DOT___zz_mem_port1)),32);
        vcdp->fullBit(c+9,((1U & (IData)(vlTOPp->Apb3Test__DOT__apb3_decoder_io_output_PSEL))));
        vcdp->fullBus(c+17,(((IData)(vlTOPp->Apb3Test__DOT__apb3tobram_1__DOT__when_Apb3ToBram_l42)
                              ? 0xfU : 0U)),4);
        vcdp->fullBus(c+25,(vlTOPp->Apb3Test__DOT__gpioCtrl_io_apb_PRDATA),32);
        vcdp->fullBit(c+33,(vlTOPp->Apb3Test__DOT__apb3_decoder_io_input_PREADY));
        vcdp->fullBit(c+41,(vlTOPp->Apb3Test__DOT__apb3_decoder_io_input_PSLVERROR));
        vcdp->fullBus(c+49,(vlTOPp->Apb3Test__DOT__apb3_decoder_io_output_PSEL),2);
        vcdp->fullBit(c+57,((1U & ((IData)(vlTOPp->Apb3Test__DOT__apb3_decoder_io_output_PSEL) 
                                   >> 1U))));
        vcdp->fullBit(c+65,(vlTOPp->Apb3Test__DOT__apb3tobram_1__DOT__when_Apb3ToBram_l42));
        vcdp->fullBit(c+73,(vlTOPp->Apb3Test__DOT__gpioCtrl__DOT__ctrl_doWrite));
        vcdp->fullBit(c+81,(vlTOPp->Apb3Test__DOT__apb3_decoder__DOT__when_Apb3Decoder_l84));
        vcdp->fullBus(c+89,(vlTOPp->Apb3Test__DOT___zz_mem_port1),32);
        vcdp->fullBus(c+97,(vlTOPp->Apb3Test__DOT__gpioCtrl__DOT__io_gpio_write_driver),32);
        vcdp->fullBus(c+105,(vlTOPp->Apb3Test__DOT__gpioCtrl__DOT__io_gpio_read_buffercc__DOT__buffers_1),32);
        vcdp->fullBus(c+113,(vlTOPp->Apb3Test__DOT__gpioCtrl__DOT__io_gpio_read_buffercc__DOT__buffers_0),32);
        vcdp->fullBit(c+121,(vlTOPp->Apb3Test__DOT__apb3Router_1__DOT__selIndex));
        vcdp->fullBus(c+129,(vlTOPp->Apb3Test__DOT__gpioCtrl__DOT__io_gpio_writeEnable_driver),32);
        vcdp->fullBus(c+137,(vlTOPp->apb3_PADDR),20);
        vcdp->fullBit(c+145,(vlTOPp->apb3_PSEL));
        vcdp->fullBit(c+153,(vlTOPp->apb3_PENABLE));
        vcdp->fullBit(c+161,(vlTOPp->apb3_PREADY));
        vcdp->fullBit(c+169,(vlTOPp->apb3_PWRITE));
        vcdp->fullBus(c+177,(vlTOPp->apb3_PWDATA),32);
        vcdp->fullBus(c+185,(vlTOPp->apb3_PRDATA),32);
        vcdp->fullBit(c+193,(vlTOPp->apb3_PSLVERROR));
        vcdp->fullBus(c+201,(vlTOPp->gpio_read),32);
        vcdp->fullBus(c+209,(vlTOPp->gpio_write),32);
        vcdp->fullBus(c+217,(vlTOPp->gpio_writeEnable),32);
        vcdp->fullBit(c+225,(vlTOPp->clk));
        vcdp->fullBit(c+233,(vlTOPp->reset));
        vcdp->fullBus(c+241,((0xfU & vlTOPp->apb3_PADDR)),4);
        vcdp->fullBus(c+249,((0xffU & vlTOPp->apb3_PADDR)),8);
        vcdp->fullBit(c+257,(((((IData)(vlTOPp->Apb3Test__DOT__apb3_decoder_io_output_PSEL) 
                                >> 1U) & (IData)(vlTOPp->apb3_PENABLE)) 
                              & (IData)(vlTOPp->apb3_PWRITE))));
        vcdp->fullBit(c+265,(((((IData)(vlTOPp->Apb3Test__DOT__apb3_decoder_io_output_PSEL) 
                                >> 1U) & (IData)(vlTOPp->apb3_PENABLE)) 
                              & (~ (IData)(vlTOPp->apb3_PWRITE)))));
        vcdp->fullBit(c+273,(1U));
        vcdp->fullBit(c+281,(0U));
        vcdp->fullBit(c+289,(1U));
        vcdp->fullBit(c+297,(0U));
    }
}
