// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VEmifToAurora_test__Syms.h"


//======================

void VEmifToAurora_test::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VEmifToAurora_test::traceInit, &VEmifToAurora_test::traceFull, &VEmifToAurora_test::traceChg, this);
}
void VEmifToAurora_test::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VEmifToAurora_test* t = (VEmifToAurora_test*)userthis;
    VEmifToAurora_test__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VEmifToAurora_test::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VEmifToAurora_test* t = (VEmifToAurora_test*)userthis;
    VEmifToAurora_test__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VEmifToAurora_test::traceInitThis(VEmifToAurora_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VEmifToAurora_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VEmifToAurora_test::traceFullThis(VEmifToAurora_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VEmifToAurora_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VEmifToAurora_test::traceInitThis__1(VEmifToAurora_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VEmifToAurora_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+849,"emif_emif_addr", false,-1, 23,0);
        vcdp->declBus(c+857,"emif_emif_data_read", false,-1, 15,0);
        vcdp->declBus(c+865,"emif_emif_data_write", false,-1, 15,0);
        vcdp->declBit(c+873,"emif_emif_data_writeEnable", false,-1);
        vcdp->declBit(c+881,"emif_emif_cs", false,-1);
        vcdp->declBit(c+889,"emif_emif_we", false,-1);
        vcdp->declBit(c+897,"emif_emif_oe", false,-1);
        vcdp->declBit(c+905,"clk", false,-1);
        vcdp->declBit(c+913,"reset", false,-1);
        vcdp->declBit(c+921,"aurora_userclk", false,-1);
        vcdp->declBit(c+929,"intrrupt", false,-1);
        vcdp->declBus(c+849,"EmifToAurora_test emif_emif_addr", false,-1, 23,0);
        vcdp->declBus(c+857,"EmifToAurora_test emif_emif_data_read", false,-1, 15,0);
        vcdp->declBus(c+865,"EmifToAurora_test emif_emif_data_write", false,-1, 15,0);
        vcdp->declBit(c+873,"EmifToAurora_test emif_emif_data_writeEnable", false,-1);
        vcdp->declBit(c+881,"EmifToAurora_test emif_emif_cs", false,-1);
        vcdp->declBit(c+889,"EmifToAurora_test emif_emif_we", false,-1);
        vcdp->declBit(c+897,"EmifToAurora_test emif_emif_oe", false,-1);
        vcdp->declBit(c+905,"EmifToAurora_test clk", false,-1);
        vcdp->declBit(c+913,"EmifToAurora_test reset", false,-1);
        vcdp->declBit(c+921,"EmifToAurora_test aurora_userclk", false,-1);
        vcdp->declBit(c+929,"EmifToAurora_test intrrupt", false,-1);
        vcdp->declBus(c+937,"EmifToAurora_test area_emiftoapb_emif_emif_data_write", false,-1, 15,0);
        vcdp->declBit(c+945,"EmifToAurora_test area_emiftoapb_emif_emif_data_writeEnable", false,-1);
        vcdp->declBus(c+953,"EmifToAurora_test area_emiftoapb_apb_PADDR", false,-1, 19,0);
        vcdp->declBus(c+961,"EmifToAurora_test area_emiftoapb_apb_PSEL", false,-1, 0,0);
        vcdp->declBit(c+185,"EmifToAurora_test area_emiftoapb_apb_PENABLE", false,-1);
        vcdp->declBit(c+1,"EmifToAurora_test area_emiftoapb_apb_PWRITE", false,-1);
        vcdp->declBus(c+9,"EmifToAurora_test area_emiftoapb_apb_PWDATA", false,-1, 31,0);
        vcdp->declBit(c+993,"EmifToAurora_test area_apb3toTxBram_io_apb_PREADY", false,-1);
        vcdp->declBus(c+409,"EmifToAurora_test area_apb3toTxBram_io_apb_PRDATA", false,-1, 31,0);
        vcdp->declBit(c+1001,"EmifToAurora_test area_apb3toTxBram_io_apb_PSLVERROR", false,-1);
        vcdp->declBit(c+17,"EmifToAurora_test area_apb3toTxBram_io_bram_en", false,-1);
        vcdp->declBus(c+25,"EmifToAurora_test area_apb3toTxBram_io_bram_we", false,-1, 3,0);
        vcdp->declBus(c+969,"EmifToAurora_test area_apb3toTxBram_io_bram_addr", false,-1, 7,0);
        vcdp->declBus(c+9,"EmifToAurora_test area_apb3toTxBram_io_bram_wrdata", false,-1, 31,0);
        vcdp->declBit(c+993,"EmifToAurora_test area_apb3toRxBram_io_apb_PREADY", false,-1);
        vcdp->declBus(c+417,"EmifToAurora_test area_apb3toRxBram_io_apb_PRDATA", false,-1, 31,0);
        vcdp->declBit(c+1001,"EmifToAurora_test area_apb3toRxBram_io_apb_PSLVERROR", false,-1);
        vcdp->declBit(c+33,"EmifToAurora_test area_apb3toRxBram_io_bram_en", false,-1);
        vcdp->declBus(c+121,"EmifToAurora_test area_apb3toRxBram_io_bram_we", false,-1, 3,0);
        vcdp->declBus(c+969,"EmifToAurora_test area_apb3toRxBram_io_bram_addr", false,-1, 7,0);
        vcdp->declBus(c+9,"EmifToAurora_test area_apb3toRxBram_io_bram_wrdata", false,-1, 31,0);
        vcdp->declBit(c+993,"EmifToAurora_test area_auroratop_apb_PREADY", false,-1);
        vcdp->declBus(c+41,"EmifToAurora_test area_auroratop_apb_PRDATA", false,-1, 31,0);
        vcdp->declBit(c+1001,"EmifToAurora_test area_auroratop_apb_PSLVERROR", false,-1);
        vcdp->declBit(c+777,"EmifToAurora_test area_auroratop_axiw_valid", false,-1);
        vcdp->declBus(c+337,"EmifToAurora_test area_auroratop_axiw_payload_data", false,-1, 31,0);
        vcdp->declBit(c+233,"EmifToAurora_test area_auroratop_axiw_payload_last", false,-1);
        vcdp->declBit(c+993,"EmifToAurora_test area_auroratop_axir_ready", false,-1);
        vcdp->declBus(c+409,"EmifToAurora_test area_auroratop_tx_bram_rddata", false,-1, 31,0);
        vcdp->declBus(c+417,"EmifToAurora_test area_auroratop_rx_bram_rddata", false,-1, 31,0);
        vcdp->declBit(c+457,"EmifToAurora_test area_auroratop_intrrupt", false,-1);
        vcdp->declBit(c+49,"EmifToAurora_test apb_decoder_io_input_PREADY", false,-1);
        vcdp->declBus(c+57,"EmifToAurora_test apb_decoder_io_input_PRDATA", false,-1, 31,0);
        vcdp->declBit(c+65,"EmifToAurora_test apb_decoder_io_input_PSLVERROR", false,-1);
        vcdp->declBus(c+953,"EmifToAurora_test apb_decoder_io_output_PADDR", false,-1, 19,0);
        vcdp->declBus(c+73,"EmifToAurora_test apb_decoder_io_output_PSEL", false,-1, 2,0);
        vcdp->declBit(c+185,"EmifToAurora_test apb_decoder_io_output_PENABLE", false,-1);
        vcdp->declBit(c+1,"EmifToAurora_test apb_decoder_io_output_PWRITE", false,-1);
        vcdp->declBus(c+9,"EmifToAurora_test apb_decoder_io_output_PWDATA", false,-1, 31,0);
        vcdp->declBit(c+1009,"EmifToAurora_test apb3Router_1_io_input_PREADY", false,-1);
        vcdp->declBus(c+57,"EmifToAurora_test apb3Router_1_io_input_PRDATA", false,-1, 31,0);
        vcdp->declBit(c+1017,"EmifToAurora_test apb3Router_1_io_input_PSLVERROR", false,-1);
        vcdp->declBus(c+953,"EmifToAurora_test apb3Router_1_io_outputs_0_PADDR", false,-1, 19,0);
        vcdp->declBus(c+17,"EmifToAurora_test apb3Router_1_io_outputs_0_PSEL", false,-1, 0,0);
        vcdp->declBit(c+185,"EmifToAurora_test apb3Router_1_io_outputs_0_PENABLE", false,-1);
        vcdp->declBit(c+1,"EmifToAurora_test apb3Router_1_io_outputs_0_PWRITE", false,-1);
        vcdp->declBus(c+9,"EmifToAurora_test apb3Router_1_io_outputs_0_PWDATA", false,-1, 31,0);
        vcdp->declBus(c+953,"EmifToAurora_test apb3Router_1_io_outputs_1_PADDR", false,-1, 19,0);
        vcdp->declBus(c+33,"EmifToAurora_test apb3Router_1_io_outputs_1_PSEL", false,-1, 0,0);
        vcdp->declBit(c+185,"EmifToAurora_test apb3Router_1_io_outputs_1_PENABLE", false,-1);
        vcdp->declBit(c+1,"EmifToAurora_test apb3Router_1_io_outputs_1_PWRITE", false,-1);
        vcdp->declBus(c+9,"EmifToAurora_test apb3Router_1_io_outputs_1_PWDATA", false,-1, 31,0);
        vcdp->declBus(c+953,"EmifToAurora_test apb3Router_1_io_outputs_2_PADDR", false,-1, 19,0);
        vcdp->declBus(c+81,"EmifToAurora_test apb3Router_1_io_outputs_2_PSEL", false,-1, 0,0);
        vcdp->declBit(c+185,"EmifToAurora_test apb3Router_1_io_outputs_2_PENABLE", false,-1);
        vcdp->declBit(c+1,"EmifToAurora_test apb3Router_1_io_outputs_2_PWRITE", false,-1);
        vcdp->declBus(c+9,"EmifToAurora_test apb3Router_1_io_outputs_2_PWDATA", false,-1, 31,0);
        vcdp->declBit(c+153,"EmifToAurora_test resetCtrl_axiResetUnbuffered", false,-1);
        vcdp->declBus(c+161,"EmifToAurora_test resetCtrl_axiResetCounter", false,-1, 5,0);
        vcdp->declBit(c+169,"EmifToAurora_test when_EmifToAurora_l38", false,-1);
        vcdp->declBit(c+425,"EmifToAurora_test resetCtrl_axiReset", false,-1);
        vcdp->declBus(c+849,"EmifToAurora_test area_emiftoapb emif_emif_addr", false,-1, 23,0);
        vcdp->declBus(c+857,"EmifToAurora_test area_emiftoapb emif_emif_data_read", false,-1, 15,0);
        vcdp->declBus(c+937,"EmifToAurora_test area_emiftoapb emif_emif_data_write", false,-1, 15,0);
        vcdp->declBit(c+945,"EmifToAurora_test area_emiftoapb emif_emif_data_writeEnable", false,-1);
        vcdp->declBit(c+881,"EmifToAurora_test area_emiftoapb emif_emif_cs", false,-1);
        vcdp->declBit(c+889,"EmifToAurora_test area_emiftoapb emif_emif_we", false,-1);
        vcdp->declBit(c+897,"EmifToAurora_test area_emiftoapb emif_emif_oe", false,-1);
        vcdp->declBus(c+953,"EmifToAurora_test area_emiftoapb apb_PADDR", false,-1, 19,0);
        vcdp->declBus(c+961,"EmifToAurora_test area_emiftoapb apb_PSEL", false,-1, 0,0);
        vcdp->declBit(c+185,"EmifToAurora_test area_emiftoapb apb_PENABLE", false,-1);
        vcdp->declBit(c+49,"EmifToAurora_test area_emiftoapb apb_PREADY", false,-1);
        vcdp->declBit(c+1,"EmifToAurora_test area_emiftoapb apb_PWRITE", false,-1);
        vcdp->declBus(c+9,"EmifToAurora_test area_emiftoapb apb_PWDATA", false,-1, 31,0);
        vcdp->declBus(c+57,"EmifToAurora_test area_emiftoapb apb_PRDATA", false,-1, 31,0);
        vcdp->declBit(c+65,"EmifToAurora_test area_emiftoapb apb_PSLVERROR", false,-1);
        vcdp->declBit(c+905,"EmifToAurora_test area_emiftoapb clk", false,-1);
        vcdp->declBit(c+913,"EmifToAurora_test area_emiftoapb reset", false,-1);
        vcdp->declBit(c+481,"EmifToAurora_test area_emiftoapb penable", false,-1);
        vcdp->declBus(c+433,"EmifToAurora_test area_emiftoapb emifdatatemp", false,-1, 15,0);
        vcdp->declBus(c+1025,"EmifToAurora_test area_emiftoapb emif_default_bits", false,-1, 1,0);
        vcdp->declBit(c+441,"EmifToAurora_test area_emiftoapb penable_regNext", false,-1);
        vcdp->declBit(c+977,"EmifToAurora_test area_emiftoapb when_EmifToApb_l73", false,-1);
        vcdp->declBit(c+985,"EmifToAurora_test area_emiftoapb when_EmifToApb_l83", false,-1);
        vcdp->declBit(c+945,"EmifToAurora_test area_emiftoapb when_EmifToApb_l84", false,-1);
        vcdp->declBit(c+945,"EmifToAurora_test area_emiftoapb when_EmifToApb_l86", false,-1);
        vcdp->declBus(c+953,"EmifToAurora_test area_apb3toTxBram io_apb_PADDR", false,-1, 19,0);
        vcdp->declBus(c+17,"EmifToAurora_test area_apb3toTxBram io_apb_PSEL", false,-1, 0,0);
        vcdp->declBit(c+185,"EmifToAurora_test area_apb3toTxBram io_apb_PENABLE", false,-1);
        vcdp->declBit(c+993,"EmifToAurora_test area_apb3toTxBram io_apb_PREADY", false,-1);
        vcdp->declBit(c+1,"EmifToAurora_test area_apb3toTxBram io_apb_PWRITE", false,-1);
        vcdp->declBus(c+9,"EmifToAurora_test area_apb3toTxBram io_apb_PWDATA", false,-1, 31,0);
        vcdp->declBus(c+409,"EmifToAurora_test area_apb3toTxBram io_apb_PRDATA", false,-1, 31,0);
        vcdp->declBit(c+1001,"EmifToAurora_test area_apb3toTxBram io_apb_PSLVERROR", false,-1);
        vcdp->declBit(c+17,"EmifToAurora_test area_apb3toTxBram io_bram_en", false,-1);
        vcdp->declBus(c+25,"EmifToAurora_test area_apb3toTxBram io_bram_we", false,-1, 3,0);
        vcdp->declBus(c+969,"EmifToAurora_test area_apb3toTxBram io_bram_addr", false,-1, 7,0);
        vcdp->declBus(c+9,"EmifToAurora_test area_apb3toTxBram io_bram_wrdata", false,-1, 31,0);
        vcdp->declBus(c+409,"EmifToAurora_test area_apb3toTxBram io_bram_rddata", false,-1, 31,0);
        vcdp->declBit(c+89,"EmifToAurora_test area_apb3toTxBram when_Apb3ToBram_l41", false,-1);
        vcdp->declBus(c+953,"EmifToAurora_test area_apb3toRxBram io_apb_PADDR", false,-1, 19,0);
        vcdp->declBus(c+33,"EmifToAurora_test area_apb3toRxBram io_apb_PSEL", false,-1, 0,0);
        vcdp->declBit(c+185,"EmifToAurora_test area_apb3toRxBram io_apb_PENABLE", false,-1);
        vcdp->declBit(c+993,"EmifToAurora_test area_apb3toRxBram io_apb_PREADY", false,-1);
        vcdp->declBit(c+1,"EmifToAurora_test area_apb3toRxBram io_apb_PWRITE", false,-1);
        vcdp->declBus(c+9,"EmifToAurora_test area_apb3toRxBram io_apb_PWDATA", false,-1, 31,0);
        vcdp->declBus(c+417,"EmifToAurora_test area_apb3toRxBram io_apb_PRDATA", false,-1, 31,0);
        vcdp->declBit(c+1001,"EmifToAurora_test area_apb3toRxBram io_apb_PSLVERROR", false,-1);
        vcdp->declBit(c+33,"EmifToAurora_test area_apb3toRxBram io_bram_en", false,-1);
        vcdp->declBus(c+121,"EmifToAurora_test area_apb3toRxBram io_bram_we", false,-1, 3,0);
        vcdp->declBus(c+969,"EmifToAurora_test area_apb3toRxBram io_bram_addr", false,-1, 7,0);
        vcdp->declBus(c+9,"EmifToAurora_test area_apb3toRxBram io_bram_wrdata", false,-1, 31,0);
        vcdp->declBus(c+417,"EmifToAurora_test area_apb3toRxBram io_bram_rddata", false,-1, 31,0);
        vcdp->declBit(c+129,"EmifToAurora_test area_apb3toRxBram when_Apb3ToBram_l41", false,-1);
        vcdp->declBus(c+953,"EmifToAurora_test area_auroratop apb_PADDR", false,-1, 19,0);
        vcdp->declBus(c+81,"EmifToAurora_test area_auroratop apb_PSEL", false,-1, 0,0);
        vcdp->declBit(c+185,"EmifToAurora_test area_auroratop apb_PENABLE", false,-1);
        vcdp->declBit(c+993,"EmifToAurora_test area_auroratop apb_PREADY", false,-1);
        vcdp->declBit(c+1,"EmifToAurora_test area_auroratop apb_PWRITE", false,-1);
        vcdp->declBus(c+9,"EmifToAurora_test area_auroratop apb_PWDATA", false,-1, 31,0);
        vcdp->declBus(c+41,"EmifToAurora_test area_auroratop apb_PRDATA", false,-1, 31,0);
        vcdp->declBit(c+1001,"EmifToAurora_test area_auroratop apb_PSLVERROR", false,-1);
        vcdp->declBit(c+777,"EmifToAurora_test area_auroratop axiw_valid", false,-1);
        vcdp->declBit(c+993,"EmifToAurora_test area_auroratop axiw_ready", false,-1);
        vcdp->declBus(c+337,"EmifToAurora_test area_auroratop axiw_payload_data", false,-1, 31,0);
        vcdp->declBit(c+233,"EmifToAurora_test area_auroratop axiw_payload_last", false,-1);
        vcdp->declBit(c+777,"EmifToAurora_test area_auroratop axir_valid", false,-1);
        vcdp->declBit(c+993,"EmifToAurora_test area_auroratop axir_ready", false,-1);
        vcdp->declBus(c+337,"EmifToAurora_test area_auroratop axir_payload_data", false,-1, 31,0);
        vcdp->declBit(c+233,"EmifToAurora_test area_auroratop axir_payload_last", false,-1);
        vcdp->declBit(c+17,"EmifToAurora_test area_auroratop tx_bram_en", false,-1);
        vcdp->declBus(c+25,"EmifToAurora_test area_auroratop tx_bram_we", false,-1, 3,0);
        vcdp->declBus(c+969,"EmifToAurora_test area_auroratop tx_bram_addr", false,-1, 7,0);
        vcdp->declBus(c+9,"EmifToAurora_test area_auroratop tx_bram_wrdata", false,-1, 31,0);
        vcdp->declBus(c+409,"EmifToAurora_test area_auroratop tx_bram_rddata", false,-1, 31,0);
        vcdp->declBit(c+33,"EmifToAurora_test area_auroratop rx_bram_en", false,-1);
        vcdp->declBus(c+121,"EmifToAurora_test area_auroratop rx_bram_we", false,-1, 3,0);
        vcdp->declBus(c+969,"EmifToAurora_test area_auroratop rx_bram_addr", false,-1, 7,0);
        vcdp->declBus(c+9,"EmifToAurora_test area_auroratop rx_bram_wrdata", false,-1, 31,0);
        vcdp->declBus(c+417,"EmifToAurora_test area_auroratop rx_bram_rddata", false,-1, 31,0);
        vcdp->declBit(c+905,"EmifToAurora_test area_auroratop clk", false,-1);
        vcdp->declBit(c+913,"EmifToAurora_test area_auroratop reset", false,-1);
        vcdp->declBit(c+921,"EmifToAurora_test area_auroratop aurora_userclk", false,-1);
        vcdp->declBit(c+457,"EmifToAurora_test area_auroratop intrrupt", false,-1);
        vcdp->declBit(c+993,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore_axir_ready", false,-1);
        vcdp->declBit(c+617,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore_bram_en", false,-1);
        vcdp->declBus(c+625,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore_bram_we", false,-1, 3,0);
        vcdp->declBus(c+633,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore_bram_addr", false,-1, 7,0);
        vcdp->declBus(c+337,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore_bram_wrdata", false,-1, 31,0);
        vcdp->declBit(c+921,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore_bram_clkout", false,-1);
        vcdp->declBit(c+913,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore_bram_resetout", false,-1);
        vcdp->declBit(c+457,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore_intrrupt", false,-1);
        vcdp->declBit(c+777,"EmifToAurora_test area_auroratop auroraArea_auroratxcore_axiw_valid", false,-1);
        vcdp->declBus(c+337,"EmifToAurora_test area_auroratop auroraArea_auroratxcore_axiw_payload_data", false,-1, 31,0);
        vcdp->declBit(c+233,"EmifToAurora_test area_auroratop auroraArea_auroratxcore_axiw_payload_last", false,-1);
        vcdp->declBit(c+641,"EmifToAurora_test area_auroratop auroraArea_auroratxcore_bram_en", false,-1);
        vcdp->declBus(c+1033,"EmifToAurora_test area_auroratop auroraArea_auroratxcore_bram_we", false,-1, 3,0);
        vcdp->declBus(c+681,"EmifToAurora_test area_auroratop auroraArea_auroratxcore_bram_addr", false,-1, 7,0);
        vcdp->declBus(c+1041,"EmifToAurora_test area_auroratop auroraArea_auroratxcore_bram_wrdata", false,-1, 31,0);
        vcdp->declBit(c+921,"EmifToAurora_test area_auroratop auroraArea_auroratxcore_bram_clkout", false,-1);
        vcdp->declBit(c+913,"EmifToAurora_test area_auroratop auroraArea_auroratxcore_bram_resetout", false,-1);
        vcdp->declBus(c+521,"EmifToAurora_test area_auroratop auroraArea_auroraTxBlockRam_ioA_rddata", false,-1, 31,0);
        vcdp->declBus(c+409,"EmifToAurora_test area_auroratop auroraArea_auroraTxBlockRam_ioB_rddata", false,-1, 31,0);
        vcdp->declBus(c+417,"EmifToAurora_test area_auroratop auroraArea_auroraRxBlockRam_ioA_rddata", false,-1, 31,0);
        vcdp->declBus(c+529,"EmifToAurora_test area_auroratop auroraArea_auroraRxBlockRam_ioB_rddata", false,-1, 31,0);
        vcdp->declBus(c+745,"EmifToAurora_test area_auroratop toparea_tx_headtemp", false,-1, 31,0);
        vcdp->declBus(c+489,"EmifToAurora_test area_auroratop toparea_tx_ctrl", false,-1, 0,0);
        vcdp->declBus(c+497,"EmifToAurora_test area_auroratop toparea_tx_triger", false,-1, 0,0);
        vcdp->declBit(c+137,"EmifToAurora_test area_auroratop toparea_ctrl_askWrite", false,-1);
        vcdp->declBit(c+145,"EmifToAurora_test area_auroratop toparea_ctrl_askRead", false,-1);
        vcdp->declBit(c+97,"EmifToAurora_test area_auroratop toparea_ctrl_doWrite", false,-1);
        vcdp->declBit(c+145,"EmifToAurora_test area_auroratop toparea_ctrl_doRead", false,-1);
        vcdp->declBit(c+505,"EmifToAurora_test area_auroratop toparea_triger", false,-1);
        vcdp->declBit(c+105,"EmifToAurora_test area_auroratop when_AuroraTop_l46", false,-1);
        vcdp->declBit(c+329,"EmifToAurora_test area_auroratop toparea_tx_ctrl_temp", false,-1);
        vcdp->declBit(c+225,"EmifToAurora_test area_auroratop toparea_tx_triger_temp", false,-1);
        vcdp->declBit(c+697,"EmifToAurora_test area_auroratop toparea_tx_senddatatriger", false,-1);
        vcdp->declBit(c+513,"EmifToAurora_test area_auroratop toparea_tx_sendtriger", false,-1);
        vcdp->declBit(c+753,"EmifToAurora_test area_auroratop toparea_tx_ctrl_temp_delay_1", false,-1);
        vcdp->declBit(c+753,"EmifToAurora_test area_auroratop toparea_tx_ctrl_temp_delay_1_1", false,-1);
        vcdp->declBit(c+761,"EmifToAurora_test area_auroratop toparea_tx_ctrl_temp_delay_2", false,-1);
        vcdp->declBit(c+753,"EmifToAurora_test area_auroratop toparea_tx_ctrl_temp_delay_1_2", false,-1);
        vcdp->declBit(c+761,"EmifToAurora_test area_auroratop toparea_tx_ctrl_temp_delay_2_1", false,-1);
        vcdp->declBit(c+769,"EmifToAurora_test area_auroratop toparea_tx_ctrl_temp_delay_3", false,-1);
        vcdp->declBit(c+569,"EmifToAurora_test area_auroratop toparea_tx_triger_temp_delay_1", false,-1);
        vcdp->declBit(c+577,"EmifToAurora_test area_auroratop toparea_tx_triger_temp_delay_1_1", false,-1);
        vcdp->declBit(c+585,"EmifToAurora_test area_auroratop toparea_tx_triger_temp_delay_2", false,-1);
        vcdp->declBit(c+593,"EmifToAurora_test area_auroratop toparea_tx_triger_temp_delay_1_2", false,-1);
        vcdp->declBit(c+601,"EmifToAurora_test area_auroratop toparea_tx_triger_temp_delay_2_1", false,-1);
        vcdp->declBit(c+609,"EmifToAurora_test area_auroratop toparea_tx_triger_temp_delay_3", false,-1);
        vcdp->declBit(c+921,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore aurora_userclk", false,-1);
        vcdp->declBit(c+913,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore reset", false,-1);
        vcdp->declBit(c+777,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore axir_valid", false,-1);
        vcdp->declBit(c+993,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore axir_ready", false,-1);
        vcdp->declBus(c+337,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore axir_payload_data", false,-1, 31,0);
        vcdp->declBit(c+233,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore axir_payload_last", false,-1);
        vcdp->declBit(c+617,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore bram_en", false,-1);
        vcdp->declBus(c+625,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore bram_we", false,-1, 3,0);
        vcdp->declBus(c+633,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore bram_addr", false,-1, 7,0);
        vcdp->declBus(c+337,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore bram_wrdata", false,-1, 31,0);
        vcdp->declBus(c+529,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore bram_rddata", false,-1, 31,0);
        vcdp->declBit(c+921,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore bram_clkout", false,-1);
        vcdp->declBit(c+913,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore bram_resetout", false,-1);
        vcdp->declBit(c+457,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore intrrupt", false,-1);
        vcdp->declBus(c+345,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore crc32_2_crc_o", false,-1, 31,0);
        vcdp->declBit(c+617,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore auroraRxArea_mem_wren", false,-1);
        vcdp->declBus(c+633,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore auroraRxArea_mem_addr", false,-1, 7,0);
        vcdp->declBus(c+465,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore auroraRxArea_mem_data", false,-1, 31,0);
        vcdp->declBus(c+625,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore auroraRxArea_mem_wrwe", false,-1, 3,0);
        vcdp->declBus(c+537,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore auroraRxArea_length", false,-1, 7,0);
        vcdp->declBus(c+545,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore auroraRxArea_data_cnt", false,-1, 7,0);
        vcdp->declBus(c+553,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore auroraRxArea_crc_data", false,-1, 31,0);
        vcdp->declBit(c+473,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore auroraRxArea_crc_status", false,-1);
        vcdp->declBit(c+457,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore auroraRxArea_aurora_intrrupt", false,-1);
        vcdp->declBus(c+649,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore auroraRxArea_stateMachine_state", false,-1, 2,0);
        vcdp->declBit(c+777,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore axir_fire", false,-1);
        vcdp->declBit(c+321,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore when_Gtx_Rx_l47", false,-1);
        vcdp->declBit(c+777,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore axir_fire_1", false,-1);
        vcdp->declBit(c+353,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore when_Gtx_Rx_l54", false,-1);
        vcdp->declBit(c+777,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore axir_fire_2", false,-1);
        vcdp->declBit(c+777,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore axir_fire_3", false,-1);
        vcdp->declBit(c+193,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore when_Gtx_Rx_l70", false,-1);
        vcdp->declBit(c+777,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore axir_fire_4", false,-1);
        vcdp->declBit(c+201,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore when_Gtx_Rx_l79", false,-1);
        vcdp->declBit(c+777,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore axir_fire_5", false,-1);
        vcdp->declBit(c+241,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore when_Gtx_Rx_l88", false,-1);
        vcdp->declBit(c+177,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore when_Gtx_Rx_l89", false,-1);
        vcdp->declBit(c+657,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore when_Gtx_Rx_l98", false,-1);
        vcdp->declBit(c+777,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore axir_fire_6", false,-1);
        vcdp->declBit(c+689,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore when_Gtx_Rx_l100", false,-1);
        vcdp->declBit(c+777,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore axir_fire_7", false,-1);
        vcdp->declBit(c+249,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore when_Gtx_Rx_l106", false,-1);
        vcdp->declBit(c+361,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore when_Gtx_Rx_l113", false,-1);
        vcdp->declBit(c+777,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore axir_fire_8", false,-1);
        vcdp->declBit(c+257,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore when_Gtx_Rx_l111", false,-1);
        vcdp->declBit(c+777,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore axir_fire_9", false,-1);
        vcdp->declBit(c+265,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore when_Gtx_Rx_l120", false,-1);
        vcdp->declQuad(c+209,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore auroraRxArea_stateMachine_state_string", false,-1, 63,0);
        vcdp->declBus(c+553,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore crc32_2 crc_i", false,-1, 31,0);
        vcdp->declBus(c+337,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore crc32_2 data_i", false,-1, 31,0);
        vcdp->declBus(c+345,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore crc32_2 crc_o", false,-1, 31,0);
        vcdp->declBit(c+921,"EmifToAurora_test area_auroratop auroraArea_auroratxcore aurora_userclk", false,-1);
        vcdp->declBit(c+913,"EmifToAurora_test area_auroratop auroraArea_auroratxcore reset", false,-1);
        vcdp->declBit(c+777,"EmifToAurora_test area_auroratop auroraArea_auroratxcore axiw_valid", false,-1);
        vcdp->declBit(c+993,"EmifToAurora_test area_auroratop auroraArea_auroratxcore axiw_ready", false,-1);
        vcdp->declBus(c+337,"EmifToAurora_test area_auroratop auroraArea_auroratxcore axiw_payload_data", false,-1, 31,0);
        vcdp->declBit(c+233,"EmifToAurora_test area_auroratop auroraArea_auroratxcore axiw_payload_last", false,-1);
        vcdp->declBus(c+745,"EmifToAurora_test area_auroratop auroraArea_auroratxcore tx_head", false,-1, 31,0);
        vcdp->declBit(c+697,"EmifToAurora_test area_auroratop auroraArea_auroratxcore tx_start", false,-1);
        vcdp->declBit(c+513,"EmifToAurora_test area_auroratop auroraArea_auroratxcore tx_trigger", false,-1);
        vcdp->declBit(c+641,"EmifToAurora_test area_auroratop auroraArea_auroratxcore bram_en", false,-1);
        vcdp->declBus(c+1033,"EmifToAurora_test area_auroratop auroraArea_auroratxcore bram_we", false,-1, 3,0);
        vcdp->declBus(c+681,"EmifToAurora_test area_auroratop auroraArea_auroratxcore bram_addr", false,-1, 7,0);
        vcdp->declBus(c+1041,"EmifToAurora_test area_auroratop auroraArea_auroratxcore bram_wrdata", false,-1, 31,0);
        vcdp->declBus(c+521,"EmifToAurora_test area_auroratop auroraArea_auroratxcore bram_rddata", false,-1, 31,0);
        vcdp->declBit(c+921,"EmifToAurora_test area_auroratop auroraArea_auroratxcore bram_clkout", false,-1);
        vcdp->declBit(c+913,"EmifToAurora_test area_auroratop auroraArea_auroratxcore bram_resetout", false,-1);
        vcdp->declBus(c+369,"EmifToAurora_test area_auroratop auroraArea_auroratxcore crc32_2_crc_o", false,-1, 31,0);
        vcdp->declBit(c+233,"EmifToAurora_test area_auroratop auroraArea_auroratxcore auroraTxArea_axi_last_2", false,-1);
        vcdp->declBit(c+273,"EmifToAurora_test area_auroratop auroraArea_auroratxcore auroraTxArea_axi_last_1", false,-1);
        vcdp->declBus(c+337,"EmifToAurora_test area_auroratop auroraArea_auroratxcore auroraTxArea_axi_txdata_7", false,-1, 31,0);
        vcdp->declBus(c+377,"EmifToAurora_test area_auroratop auroraArea_auroratxcore auroraTxArea_axi_txdata_6", false,-1, 31,0);
        vcdp->declBus(c+385,"EmifToAurora_test area_auroratop auroraArea_auroratxcore auroraTxArea_axi_txdata_5", false,-1, 31,0);
        vcdp->declBus(c+393,"EmifToAurora_test area_auroratop auroraArea_auroratxcore auroraTxArea_axi_txdata_4", false,-1, 31,0);
        vcdp->declBus(c+401,"EmifToAurora_test area_auroratop auroraArea_auroratxcore auroraTxArea_axi_txdata_3", false,-1, 31,0);
        vcdp->declBus(c+281,"EmifToAurora_test area_auroratop auroraArea_auroratxcore auroraTxArea_axi_txdata_2", false,-1, 31,0);
        vcdp->declBus(c+289,"EmifToAurora_test area_auroratop auroraArea_auroratxcore auroraTxArea_axi_txdata_1", false,-1, 31,0);
        vcdp->declBus(c+1041,"EmifToAurora_test area_auroratop auroraArea_auroratxcore auroraTxArea_axi_txdata", false,-1, 31,0);
        vcdp->declBit(c+665,"EmifToAurora_test area_auroratop auroraArea_auroratxcore auroraTxArea_axi_last", false,-1);
        vcdp->declBus(c+705,"EmifToAurora_test area_auroratop auroraArea_auroratxcore auroraTxArea_axi_txhead", false,-1, 31,0);
        vcdp->declBus(c+713,"EmifToAurora_test area_auroratop auroraArea_auroratxcore auroraTxArea_length", false,-1, 7,0);
        vcdp->declBit(c+641,"EmifToAurora_test area_auroratop auroraArea_auroratxcore auroraTxArea_mem_rden", false,-1);
        vcdp->declBus(c+521,"EmifToAurora_test area_auroratop auroraArea_auroratxcore auroraTxArea_mem_data", false,-1, 31,0);
        vcdp->declBus(c+673,"EmifToAurora_test area_auroratop auroraArea_auroratxcore auroraTxArea_mem_addrtemp", false,-1, 7,0);
        vcdp->declBus(c+561,"EmifToAurora_test area_auroratop auroraArea_auroratxcore auroraTxArea_crc_data", false,-1, 31,0);
        vcdp->declBus(c+721,"EmifToAurora_test area_auroratop auroraArea_auroratxcore auroraTxArea_data_cnt", false,-1, 7,0);
        vcdp->declBus(c+785,"EmifToAurora_test area_auroratop auroraArea_auroratxcore auroraTxArea_stateMachine_state", false,-1, 2,0);
        vcdp->declBit(c+697,"EmifToAurora_test area_auroratop auroraArea_auroratxcore when_Gtx_Tx_l66", false,-1);
        vcdp->declBit(c+1001,"EmifToAurora_test area_auroratop auroraArea_auroratxcore when_Gtx_Tx_l68", false,-1);
        vcdp->declBit(c+777,"EmifToAurora_test area_auroratop auroraArea_auroratxcore axiw_fire", false,-1);
        vcdp->declBit(c+729,"EmifToAurora_test area_auroratop auroraArea_auroratxcore when_Gtx_Tx_l81", false,-1);
        vcdp->declBit(c+777,"EmifToAurora_test area_auroratop auroraArea_auroratxcore axiw_fire_1", false,-1);
        vcdp->declBit(c+777,"EmifToAurora_test area_auroratop auroraArea_auroratxcore axiw_fire_2", false,-1);
        vcdp->declBit(c+777,"EmifToAurora_test area_auroratop auroraArea_auroratxcore axiw_fire_3", false,-1);
        vcdp->declBit(c+737,"EmifToAurora_test area_auroratop auroraArea_auroratxcore when_Gtx_Tx_l104", false,-1);
        vcdp->declBit(c+777,"EmifToAurora_test area_auroratop auroraArea_auroratxcore axiw_fire_4", false,-1);
        vcdp->declBit(c+777,"EmifToAurora_test area_auroratop auroraArea_auroratxcore axiw_fire_5", false,-1);
        vcdp->declBit(c+793,"EmifToAurora_test area_auroratop auroraArea_auroratxcore when_Gtx_Tx_l124", false,-1);
        vcdp->declBit(c+801,"EmifToAurora_test area_auroratop auroraArea_auroratxcore when_Gtx_Tx_l126", false,-1);
        vcdp->declBit(c+809,"EmifToAurora_test area_auroratop auroraArea_auroratxcore when_Gtx_Tx_l128", false,-1);
        vcdp->declBit(c+817,"EmifToAurora_test area_auroratop auroraArea_auroratxcore when_Gtx_Tx_l130", false,-1);
        vcdp->declBit(c+825,"EmifToAurora_test area_auroratop auroraArea_auroratxcore when_Gtx_Tx_l132", false,-1);
        vcdp->declBit(c+833,"EmifToAurora_test area_auroratop auroraArea_auroratxcore when_Gtx_Tx_l134", false,-1);
        vcdp->declBit(c+777,"EmifToAurora_test area_auroratop auroraArea_auroratxcore axiw_fire_6", false,-1);
        vcdp->declBit(c+297,"EmifToAurora_test area_auroratop auroraArea_auroratxcore when_Gtx_Tx_l140", false,-1);
        vcdp->declBit(c+793,"EmifToAurora_test area_auroratop auroraArea_auroratxcore when_Gtx_Tx_l146", false,-1);
        vcdp->declBit(c+777,"EmifToAurora_test area_auroratop auroraArea_auroratxcore axiw_fire_7", false,-1);
        vcdp->declBit(c+841,"EmifToAurora_test area_auroratop auroraArea_auroratxcore when_Gtx_Tx_l148", false,-1);
        vcdp->declBit(c+777,"EmifToAurora_test area_auroratop auroraArea_auroratxcore axiw_fire_8", false,-1);
        vcdp->declBus(c+681,"EmifToAurora_test area_auroratop auroraArea_auroratxcore auroraTxArea_mem_addr", false,-1, 7,0);
        vcdp->declQuad(c+305,"EmifToAurora_test area_auroratop auroraArea_auroratxcore auroraTxArea_stateMachine_state_string", false,-1, 63,0);
        vcdp->declBus(c+561,"EmifToAurora_test area_auroratop auroraArea_auroratxcore crc32_2 crc_i", false,-1, 31,0);
        vcdp->declBus(c+337,"EmifToAurora_test area_auroratop auroraArea_auroratxcore crc32_2 data_i", false,-1, 31,0);
        vcdp->declBus(c+369,"EmifToAurora_test area_auroratop auroraArea_auroratxcore crc32_2 crc_o", false,-1, 31,0);
        vcdp->declBit(c+641,"EmifToAurora_test area_auroratop auroraArea_auroraTxBlockRam ioA_en", false,-1);
        vcdp->declBus(c+1033,"EmifToAurora_test area_auroratop auroraArea_auroraTxBlockRam ioA_we", false,-1, 3,0);
        vcdp->declBus(c+681,"EmifToAurora_test area_auroratop auroraArea_auroraTxBlockRam ioA_addr", false,-1, 7,0);
        vcdp->declBus(c+1041,"EmifToAurora_test area_auroratop auroraArea_auroraTxBlockRam ioA_wrdata", false,-1, 31,0);
        vcdp->declBus(c+521,"EmifToAurora_test area_auroratop auroraArea_auroraTxBlockRam ioA_rddata", false,-1, 31,0);
        vcdp->declBit(c+17,"EmifToAurora_test area_auroratop auroraArea_auroraTxBlockRam ioB_en", false,-1);
        vcdp->declBus(c+25,"EmifToAurora_test area_auroratop auroraArea_auroraTxBlockRam ioB_we", false,-1, 3,0);
        vcdp->declBus(c+969,"EmifToAurora_test area_auroratop auroraArea_auroraTxBlockRam ioB_addr", false,-1, 7,0);
        vcdp->declBus(c+9,"EmifToAurora_test area_auroratop auroraArea_auroraTxBlockRam ioB_wrdata", false,-1, 31,0);
        vcdp->declBus(c+409,"EmifToAurora_test area_auroratop auroraArea_auroraTxBlockRam ioB_rddata", false,-1, 31,0);
        vcdp->declBit(c+921,"EmifToAurora_test area_auroratop auroraArea_auroraTxBlockRam clka", false,-1);
        vcdp->declBit(c+905,"EmifToAurora_test area_auroratop auroraArea_auroraTxBlockRam clkb", false,-1);
        vcdp->declBit(c+913,"EmifToAurora_test area_auroratop auroraArea_auroraTxBlockRam reseta", false,-1);
        vcdp->declBit(c+913,"EmifToAurora_test area_auroratop auroraArea_auroraTxBlockRam resetb", false,-1);
        vcdp->declBus(c+1049,"EmifToAurora_test area_auroratop auroraArea_auroraTxBlockRam i", false,-1, 8,0);
        vcdp->declBit(c+33,"EmifToAurora_test area_auroratop auroraArea_auroraRxBlockRam ioA_en", false,-1);
        vcdp->declBus(c+121,"EmifToAurora_test area_auroratop auroraArea_auroraRxBlockRam ioA_we", false,-1, 3,0);
        vcdp->declBus(c+969,"EmifToAurora_test area_auroratop auroraArea_auroraRxBlockRam ioA_addr", false,-1, 7,0);
        vcdp->declBus(c+9,"EmifToAurora_test area_auroratop auroraArea_auroraRxBlockRam ioA_wrdata", false,-1, 31,0);
        vcdp->declBus(c+417,"EmifToAurora_test area_auroratop auroraArea_auroraRxBlockRam ioA_rddata", false,-1, 31,0);
        vcdp->declBit(c+617,"EmifToAurora_test area_auroratop auroraArea_auroraRxBlockRam ioB_en", false,-1);
        vcdp->declBus(c+625,"EmifToAurora_test area_auroratop auroraArea_auroraRxBlockRam ioB_we", false,-1, 3,0);
        vcdp->declBus(c+633,"EmifToAurora_test area_auroratop auroraArea_auroraRxBlockRam ioB_addr", false,-1, 7,0);
        vcdp->declBus(c+337,"EmifToAurora_test area_auroratop auroraArea_auroraRxBlockRam ioB_wrdata", false,-1, 31,0);
        vcdp->declBus(c+529,"EmifToAurora_test area_auroratop auroraArea_auroraRxBlockRam ioB_rddata", false,-1, 31,0);
        vcdp->declBit(c+905,"EmifToAurora_test area_auroratop auroraArea_auroraRxBlockRam clka", false,-1);
        vcdp->declBit(c+921,"EmifToAurora_test area_auroratop auroraArea_auroraRxBlockRam clkb", false,-1);
        vcdp->declBit(c+913,"EmifToAurora_test area_auroratop auroraArea_auroraRxBlockRam reseta", false,-1);
        vcdp->declBit(c+913,"EmifToAurora_test area_auroratop auroraArea_auroraRxBlockRam resetb", false,-1);
        vcdp->declBus(c+1057,"EmifToAurora_test area_auroratop auroraArea_auroraRxBlockRam i", false,-1, 8,0);
        vcdp->declBus(c+953,"EmifToAurora_test apb_decoder io_input_PADDR", false,-1, 19,0);
        vcdp->declBus(c+961,"EmifToAurora_test apb_decoder io_input_PSEL", false,-1, 0,0);
        vcdp->declBit(c+185,"EmifToAurora_test apb_decoder io_input_PENABLE", false,-1);
        vcdp->declBit(c+49,"EmifToAurora_test apb_decoder io_input_PREADY", false,-1);
        vcdp->declBit(c+1,"EmifToAurora_test apb_decoder io_input_PWRITE", false,-1);
        vcdp->declBus(c+9,"EmifToAurora_test apb_decoder io_input_PWDATA", false,-1, 31,0);
        vcdp->declBus(c+57,"EmifToAurora_test apb_decoder io_input_PRDATA", false,-1, 31,0);
        vcdp->declBit(c+65,"EmifToAurora_test apb_decoder io_input_PSLVERROR", false,-1);
        vcdp->declBus(c+953,"EmifToAurora_test apb_decoder io_output_PADDR", false,-1, 19,0);
        vcdp->declBus(c+73,"EmifToAurora_test apb_decoder io_output_PSEL", false,-1, 2,0);
        vcdp->declBit(c+185,"EmifToAurora_test apb_decoder io_output_PENABLE", false,-1);
        vcdp->declBit(c+1009,"EmifToAurora_test apb_decoder io_output_PREADY", false,-1);
        vcdp->declBit(c+1,"EmifToAurora_test apb_decoder io_output_PWRITE", false,-1);
        vcdp->declBus(c+9,"EmifToAurora_test apb_decoder io_output_PWDATA", false,-1, 31,0);
        vcdp->declBus(c+57,"EmifToAurora_test apb_decoder io_output_PRDATA", false,-1, 31,0);
        vcdp->declBit(c+1017,"EmifToAurora_test apb_decoder io_output_PSLVERROR", false,-1);
        vcdp->declBit(c+113,"EmifToAurora_test apb_decoder when_Apb3Decoder_l84", false,-1);
        vcdp->declBus(c+953,"EmifToAurora_test apb3Router_1 io_input_PADDR", false,-1, 19,0);
        vcdp->declBus(c+73,"EmifToAurora_test apb3Router_1 io_input_PSEL", false,-1, 2,0);
        vcdp->declBit(c+185,"EmifToAurora_test apb3Router_1 io_input_PENABLE", false,-1);
        vcdp->declBit(c+1009,"EmifToAurora_test apb3Router_1 io_input_PREADY", false,-1);
        vcdp->declBit(c+1,"EmifToAurora_test apb3Router_1 io_input_PWRITE", false,-1);
        vcdp->declBus(c+9,"EmifToAurora_test apb3Router_1 io_input_PWDATA", false,-1, 31,0);
        vcdp->declBus(c+57,"EmifToAurora_test apb3Router_1 io_input_PRDATA", false,-1, 31,0);
        vcdp->declBit(c+1017,"EmifToAurora_test apb3Router_1 io_input_PSLVERROR", false,-1);
        vcdp->declBus(c+953,"EmifToAurora_test apb3Router_1 io_outputs_0_PADDR", false,-1, 19,0);
        vcdp->declBus(c+17,"EmifToAurora_test apb3Router_1 io_outputs_0_PSEL", false,-1, 0,0);
        vcdp->declBit(c+185,"EmifToAurora_test apb3Router_1 io_outputs_0_PENABLE", false,-1);
        vcdp->declBit(c+993,"EmifToAurora_test apb3Router_1 io_outputs_0_PREADY", false,-1);
        vcdp->declBit(c+1,"EmifToAurora_test apb3Router_1 io_outputs_0_PWRITE", false,-1);
        vcdp->declBus(c+9,"EmifToAurora_test apb3Router_1 io_outputs_0_PWDATA", false,-1, 31,0);
        vcdp->declBus(c+409,"EmifToAurora_test apb3Router_1 io_outputs_0_PRDATA", false,-1, 31,0);
        vcdp->declBit(c+1001,"EmifToAurora_test apb3Router_1 io_outputs_0_PSLVERROR", false,-1);
        vcdp->declBus(c+953,"EmifToAurora_test apb3Router_1 io_outputs_1_PADDR", false,-1, 19,0);
        vcdp->declBus(c+33,"EmifToAurora_test apb3Router_1 io_outputs_1_PSEL", false,-1, 0,0);
        vcdp->declBit(c+185,"EmifToAurora_test apb3Router_1 io_outputs_1_PENABLE", false,-1);
        vcdp->declBit(c+993,"EmifToAurora_test apb3Router_1 io_outputs_1_PREADY", false,-1);
        vcdp->declBit(c+1,"EmifToAurora_test apb3Router_1 io_outputs_1_PWRITE", false,-1);
        vcdp->declBus(c+9,"EmifToAurora_test apb3Router_1 io_outputs_1_PWDATA", false,-1, 31,0);
        vcdp->declBus(c+417,"EmifToAurora_test apb3Router_1 io_outputs_1_PRDATA", false,-1, 31,0);
        vcdp->declBit(c+1001,"EmifToAurora_test apb3Router_1 io_outputs_1_PSLVERROR", false,-1);
        vcdp->declBus(c+953,"EmifToAurora_test apb3Router_1 io_outputs_2_PADDR", false,-1, 19,0);
        vcdp->declBus(c+81,"EmifToAurora_test apb3Router_1 io_outputs_2_PSEL", false,-1, 0,0);
        vcdp->declBit(c+185,"EmifToAurora_test apb3Router_1 io_outputs_2_PENABLE", false,-1);
        vcdp->declBit(c+993,"EmifToAurora_test apb3Router_1 io_outputs_2_PREADY", false,-1);
        vcdp->declBit(c+1,"EmifToAurora_test apb3Router_1 io_outputs_2_PWRITE", false,-1);
        vcdp->declBus(c+9,"EmifToAurora_test apb3Router_1 io_outputs_2_PWDATA", false,-1, 31,0);
        vcdp->declBus(c+41,"EmifToAurora_test apb3Router_1 io_outputs_2_PRDATA", false,-1, 31,0);
        vcdp->declBit(c+1001,"EmifToAurora_test apb3Router_1 io_outputs_2_PSLVERROR", false,-1);
        vcdp->declBit(c+905,"EmifToAurora_test apb3Router_1 clk", false,-1);
        vcdp->declBit(c+913,"EmifToAurora_test apb3Router_1 reset", false,-1);
        vcdp->declBus(c+449,"EmifToAurora_test apb3Router_1 selIndex", false,-1, 1,0);
    }
}

void VEmifToAurora_test::traceFullThis__1(VEmifToAurora_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VEmifToAurora_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(c+1,(vlTOPp->EmifToAurora_test__DOT__area_emiftoapb_apb_PWRITE));
        vcdp->fullBus(c+9,(vlTOPp->EmifToAurora_test__DOT__area_emiftoapb_apb_PWDATA),32);
        vcdp->fullBit(c+17,((1U & (IData)(vlTOPp->EmifToAurora_test__DOT__apb_decoder_io_output_PSEL))));
        vcdp->fullBus(c+25,(((IData)(vlTOPp->EmifToAurora_test__DOT__area_apb3toTxBram__DOT__when_Apb3ToBram_l41)
                              ? 0xfU : 0U)),4);
        vcdp->fullBit(c+33,((1U & ((IData)(vlTOPp->EmifToAurora_test__DOT__apb_decoder_io_output_PSEL) 
                                   >> 1U))));
        vcdp->fullBus(c+41,(vlTOPp->EmifToAurora_test__DOT__area_auroratop_apb_PRDATA),32);
        vcdp->fullBit(c+49,(vlTOPp->EmifToAurora_test__DOT__apb_decoder_io_input_PREADY));
        vcdp->fullBus(c+57,(vlTOPp->EmifToAurora_test__DOT__apb3Router_1__DOT___zz_io_input_PRDATA),32);
        vcdp->fullBit(c+65,(vlTOPp->EmifToAurora_test__DOT__apb_decoder_io_input_PSLVERROR));
        vcdp->fullBus(c+73,(vlTOPp->EmifToAurora_test__DOT__apb_decoder_io_output_PSEL),3);
        vcdp->fullBit(c+81,((1U & ((IData)(vlTOPp->EmifToAurora_test__DOT__apb_decoder_io_output_PSEL) 
                                   >> 2U))));
        vcdp->fullBit(c+89,(vlTOPp->EmifToAurora_test__DOT__area_apb3toTxBram__DOT__when_Apb3ToBram_l41));
        vcdp->fullBit(c+97,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_ctrl_doWrite));
        vcdp->fullBit(c+105,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__when_AuroraTop_l46));
        vcdp->fullBit(c+113,(vlTOPp->EmifToAurora_test__DOT__apb_decoder__DOT__when_Apb3Decoder_l84));
        vcdp->fullBus(c+121,(((((IData)(vlTOPp->EmifToAurora_test__DOT__area_emiftoapb_apb_PENABLE) 
                                & (IData)(vlTOPp->EmifToAurora_test__DOT__area_emiftoapb_apb_PWRITE)) 
                               & ((IData)(vlTOPp->EmifToAurora_test__DOT__apb_decoder_io_output_PSEL) 
                                  >> 1U)) ? 0xfU : 0U)),4);
        vcdp->fullBit(c+129,((((IData)(vlTOPp->EmifToAurora_test__DOT__area_emiftoapb_apb_PENABLE) 
                               & (IData)(vlTOPp->EmifToAurora_test__DOT__area_emiftoapb_apb_PWRITE)) 
                              & ((IData)(vlTOPp->EmifToAurora_test__DOT__apb_decoder_io_output_PSEL) 
                                 >> 1U))));
        vcdp->fullBit(c+137,(((((IData)(vlTOPp->EmifToAurora_test__DOT__apb_decoder_io_output_PSEL) 
                                >> 2U) & (IData)(vlTOPp->EmifToAurora_test__DOT__area_emiftoapb_apb_PENABLE)) 
                              & (IData)(vlTOPp->EmifToAurora_test__DOT__area_emiftoapb_apb_PWRITE))));
        vcdp->fullBit(c+145,(((((IData)(vlTOPp->EmifToAurora_test__DOT__apb_decoder_io_output_PSEL) 
                                >> 2U) & (IData)(vlTOPp->EmifToAurora_test__DOT__area_emiftoapb_apb_PENABLE)) 
                              & (~ (IData)(vlTOPp->EmifToAurora_test__DOT__area_emiftoapb_apb_PWRITE)))));
        vcdp->fullBit(c+153,(vlTOPp->EmifToAurora_test__DOT__resetCtrl_axiResetUnbuffered));
        vcdp->fullBus(c+161,(vlTOPp->EmifToAurora_test__DOT__resetCtrl_axiResetCounter),6);
        vcdp->fullBit(c+169,((0x3fU != (IData)(vlTOPp->EmifToAurora_test__DOT__resetCtrl_axiResetCounter))));
        vcdp->fullBit(c+177,(((~ (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_status)) 
                              & (0xffbdU == vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7))));
        vcdp->fullBit(c+185,(vlTOPp->EmifToAurora_test__DOT__area_emiftoapb_apb_PENABLE));
        vcdp->fullBit(c+193,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__when_Gtx_Rx_l70));
        vcdp->fullBit(c+201,((vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                              != vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7)));
        vcdp->fullQuad(c+209,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state_string),64);
        vcdp->fullBit(c+225,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_triger_temp));
        vcdp->fullBit(c+233,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_last_2));
        vcdp->fullBit(c+241,(((0U != (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state)) 
                              & (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_last_2))));
        vcdp->fullBit(c+249,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__when_Gtx_Rx_l106));
        vcdp->fullBit(c+257,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__when_Gtx_Rx_l111));
        vcdp->fullBit(c+265,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__when_Gtx_Rx_l120));
        vcdp->fullBit(c+273,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_last_1));
        vcdp->fullBus(c+281,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_2),32);
        vcdp->fullBus(c+289,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_1),32);
        vcdp->fullBit(c+297,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__when_Gtx_Tx_l140));
        vcdp->fullQuad(c+305,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state_string),64);
        vcdp->fullBit(c+321,(((0U != (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state)) 
                              & (0xffbcU == vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7))));
        vcdp->fullBit(c+329,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_ctrl_temp));
        vcdp->fullBus(c+337,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7),32);
        vcdp->fullBus(c+345,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__crc32_2_crc_o),32);
        vcdp->fullBit(c+353,((1U == vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7)));
        vcdp->fullBit(c+361,((0U == (0xffU & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                              >> 8U)))));
        vcdp->fullBus(c+369,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__crc32_2_crc_o),32);
        vcdp->fullBus(c+377,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_6),32);
        vcdp->fullBus(c+385,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_5),32);
        vcdp->fullBus(c+393,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_4),32);
        vcdp->fullBus(c+401,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_3),32);
        vcdp->fullBus(c+409,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroraTxBlockRam__DOT___zz_bram_port1),32);
        vcdp->fullBus(c+417,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroraRxBlockRam__DOT___zz_bram_port0),32);
        vcdp->fullBit(c+425,(vlTOPp->EmifToAurora_test__DOT__resetCtrl_axiReset));
        vcdp->fullBus(c+433,(vlTOPp->EmifToAurora_test__DOT__area_emiftoapb__DOT__emifdatatemp),16);
        vcdp->fullBit(c+441,(vlTOPp->EmifToAurora_test__DOT__area_emiftoapb__DOT__penable_regNext));
        vcdp->fullBus(c+449,(vlTOPp->EmifToAurora_test__DOT__apb3Router_1__DOT__selIndex),2);
        vcdp->fullBit(c+457,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_aurora_intrrupt));
        vcdp->fullBus(c+465,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_mem_data),32);
        vcdp->fullBit(c+473,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_status));
        vcdp->fullBit(c+481,(vlTOPp->EmifToAurora_test__DOT__area_emiftoapb__DOT__penable));
        vcdp->fullBit(c+489,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_ctrl));
        vcdp->fullBit(c+497,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_triger));
        vcdp->fullBit(c+505,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_triger));
        vcdp->fullBit(c+513,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_sendtriger));
        vcdp->fullBus(c+521,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroraTxBlockRam__DOT___zz_bram_port0),32);
        vcdp->fullBus(c+529,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroraRxBlockRam__DOT___zz_bram_port1),32);
        vcdp->fullBus(c+537,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_length),8);
        vcdp->fullBus(c+545,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_data_cnt),8);
        vcdp->fullBus(c+553,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data),32);
        vcdp->fullBus(c+561,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data),32);
        vcdp->fullBit(c+569,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_triger_temp_delay_1));
        vcdp->fullBit(c+577,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_triger_temp_delay_1_1));
        vcdp->fullBit(c+585,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_triger_temp_delay_2));
        vcdp->fullBit(c+593,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_triger_temp_delay_1_2));
        vcdp->fullBit(c+601,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_triger_temp_delay_2_1));
        vcdp->fullBit(c+609,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_triger_temp_delay_3));
        vcdp->fullBit(c+617,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_mem_wren));
        vcdp->fullBus(c+625,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_mem_wrwe),4);
        vcdp->fullBus(c+633,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_mem_addr),8);
        vcdp->fullBit(c+641,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_mem_rden));
        vcdp->fullBus(c+649,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state),3);
        vcdp->fullBit(c+657,((0U == (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state))));
        vcdp->fullBit(c+665,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_last));
        vcdp->fullBus(c+673,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_mem_addrtemp),8);
        vcdp->fullBus(c+681,((0xffU & ((0U != (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))
                                        ? (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_mem_addrtemp)
                                        : ((IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_mem_addrtemp) 
                                           - (IData)(1U))))),8);
        vcdp->fullBit(c+689,(((((3U == (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state)) 
                                | (4U == (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state))) 
                               | (5U == (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state))) 
                              & (0U != (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state)))));
        vcdp->fullBit(c+697,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_senddatatriger));
        vcdp->fullBus(c+705,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txhead),32);
        vcdp->fullBus(c+713,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_length),8);
        vcdp->fullBus(c+721,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_data_cnt),8);
        vcdp->fullBit(c+729,((0U == (0xffU & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txhead 
                                              >> 8U)))));
        vcdp->fullBit(c+737,(((IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_data_cnt) 
                              < (0xffU & ((IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_length) 
                                          - (IData)(1U))))));
        vcdp->fullBus(c+745,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_headtemp),32);
        vcdp->fullBit(c+753,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_ctrl_temp_delay_1));
        vcdp->fullBit(c+761,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_ctrl_temp_delay_2));
        vcdp->fullBit(c+769,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_ctrl_temp_delay_3));
        vcdp->fullBit(c+777,((0U != (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))));
        vcdp->fullBus(c+785,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state),3);
        vcdp->fullBit(c+793,((2U == (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))));
        vcdp->fullBit(c+801,((3U == (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))));
        vcdp->fullBit(c+809,((4U == (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))));
        vcdp->fullBit(c+817,((5U == (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))));
        vcdp->fullBit(c+825,((6U == (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))));
        vcdp->fullBit(c+833,((7U == (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))));
        vcdp->fullBit(c+841,(((((3U == (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state)) 
                                | (4U == (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) 
                               | (5U == (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) 
                              & (0U != (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state)))));
        vcdp->fullBus(c+849,(vlTOPp->emif_emif_addr),24);
        vcdp->fullBus(c+857,(vlTOPp->emif_emif_data_read),16);
        vcdp->fullBus(c+865,(vlTOPp->emif_emif_data_write),16);
        vcdp->fullBit(c+873,(vlTOPp->emif_emif_data_writeEnable));
        vcdp->fullBit(c+881,(vlTOPp->emif_emif_cs));
        vcdp->fullBit(c+889,(vlTOPp->emif_emif_we));
        vcdp->fullBit(c+897,(vlTOPp->emif_emif_oe));
        vcdp->fullBit(c+905,(vlTOPp->clk));
        vcdp->fullBit(c+913,(vlTOPp->reset));
        vcdp->fullBit(c+921,(vlTOPp->aurora_userclk));
        vcdp->fullBit(c+929,(vlTOPp->intrrupt));
        vcdp->fullBus(c+937,(((0x800000U & vlTOPp->emif_emif_addr)
                               ? (IData)(vlTOPp->EmifToAurora_test__DOT__area_emiftoapb__DOT___zz_emif_emif_data_write)
                               : (IData)(vlTOPp->EmifToAurora_test__DOT__area_emiftoapb__DOT___zz_emif_emif_data_write_1))),16);
        vcdp->fullBit(c+945,((1U & (~ (IData)(vlTOPp->emif_emif_oe)))));
        vcdp->fullBus(c+953,((0xfffffU & (vlTOPp->emif_emif_addr 
                                          << 2U))),20);
        vcdp->fullBit(c+961,((1U & (~ (IData)(vlTOPp->emif_emif_cs)))));
        vcdp->fullBus(c+969,((0xffU & vlTOPp->emif_emif_addr)),8);
        vcdp->fullBit(c+977,((((~ (IData)(vlTOPp->emif_emif_we)) 
                               & (IData)(vlTOPp->emif_emif_oe)) 
                              & (~ (vlTOPp->emif_emif_addr 
                                    >> 0x17U)))));
        vcdp->fullBit(c+985,((1U & (vlTOPp->emif_emif_addr 
                                    >> 0x17U))));
        vcdp->fullBit(c+993,(1U));
        vcdp->fullBit(c+1001,(0U));
        vcdp->fullBit(c+1009,(1U));
        vcdp->fullBit(c+1017,(0U));
        vcdp->fullBus(c+1025,(0U),2);
        vcdp->fullBus(c+1033,(0U),4);
        vcdp->fullBus(c+1041,(0U),32);
        vcdp->fullBus(c+1049,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroraTxBlockRam__DOT__i),9);
        vcdp->fullBus(c+1057,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroraRxBlockRam__DOT__i),9);
    }
}
