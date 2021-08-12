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
        vcdp->declBus(c+689,"emif_emif_addr", false,-1, 23,0);
        vcdp->declBus(c+697,"emif_emif_data_read", false,-1, 15,0);
        vcdp->declBus(c+705,"emif_emif_data_write", false,-1, 15,0);
        vcdp->declBit(c+713,"emif_emif_data_writeEnable", false,-1);
        vcdp->declBit(c+721,"emif_emif_cs", false,-1);
        vcdp->declBit(c+729,"emif_emif_we", false,-1);
        vcdp->declBit(c+737,"emif_emif_oe", false,-1);
        vcdp->declBit(c+745,"clk", false,-1);
        vcdp->declBit(c+753,"reset", false,-1);
        vcdp->declBit(c+761,"aurora_userclk", false,-1);
        vcdp->declBus(c+689,"EmifToAurora_test emif_emif_addr", false,-1, 23,0);
        vcdp->declBus(c+697,"EmifToAurora_test emif_emif_data_read", false,-1, 15,0);
        vcdp->declBus(c+705,"EmifToAurora_test emif_emif_data_write", false,-1, 15,0);
        vcdp->declBit(c+713,"EmifToAurora_test emif_emif_data_writeEnable", false,-1);
        vcdp->declBit(c+721,"EmifToAurora_test emif_emif_cs", false,-1);
        vcdp->declBit(c+729,"EmifToAurora_test emif_emif_we", false,-1);
        vcdp->declBit(c+737,"EmifToAurora_test emif_emif_oe", false,-1);
        vcdp->declBit(c+745,"EmifToAurora_test clk", false,-1);
        vcdp->declBit(c+753,"EmifToAurora_test reset", false,-1);
        vcdp->declBit(c+761,"EmifToAurora_test aurora_userclk", false,-1);
        vcdp->declBus(c+769,"EmifToAurora_test area_emiftoapb_emif_emif_data_write", false,-1, 15,0);
        vcdp->declBit(c+777,"EmifToAurora_test area_emiftoapb_emif_emif_data_writeEnable", false,-1);
        vcdp->declBus(c+785,"EmifToAurora_test area_emiftoapb_apb_PADDR", false,-1, 19,0);
        vcdp->declBus(c+793,"EmifToAurora_test area_emiftoapb_apb_PSEL", false,-1, 0,0);
        vcdp->declBit(c+145,"EmifToAurora_test area_emiftoapb_apb_PENABLE", false,-1);
        vcdp->declBit(c+1,"EmifToAurora_test area_emiftoapb_apb_PWRITE", false,-1);
        vcdp->declBus(c+9,"EmifToAurora_test area_emiftoapb_apb_PWDATA", false,-1, 31,0);
        vcdp->declBit(c+825,"EmifToAurora_test area_apb3toTxBram_io_apb_PREADY", false,-1);
        vcdp->declBus(c+353,"EmifToAurora_test area_apb3toTxBram_io_apb_PRDATA", false,-1, 31,0);
        vcdp->declBit(c+833,"EmifToAurora_test area_apb3toTxBram_io_apb_PSLVERROR", false,-1);
        vcdp->declBit(c+17,"EmifToAurora_test area_apb3toTxBram_io_bram_en", false,-1);
        vcdp->declBus(c+25,"EmifToAurora_test area_apb3toTxBram_io_bram_we", false,-1, 3,0);
        vcdp->declBus(c+801,"EmifToAurora_test area_apb3toTxBram_io_bram_addr", false,-1, 7,0);
        vcdp->declBus(c+9,"EmifToAurora_test area_apb3toTxBram_io_bram_wrdata", false,-1, 31,0);
        vcdp->declBit(c+825,"EmifToAurora_test area_apb3toRxBram_io_apb_PREADY", false,-1);
        vcdp->declBus(c+361,"EmifToAurora_test area_apb3toRxBram_io_apb_PRDATA", false,-1, 31,0);
        vcdp->declBit(c+833,"EmifToAurora_test area_apb3toRxBram_io_apb_PSLVERROR", false,-1);
        vcdp->declBit(c+33,"EmifToAurora_test area_apb3toRxBram_io_bram_en", false,-1);
        vcdp->declBus(c+113,"EmifToAurora_test area_apb3toRxBram_io_bram_we", false,-1, 3,0);
        vcdp->declBus(c+801,"EmifToAurora_test area_apb3toRxBram_io_bram_addr", false,-1, 7,0);
        vcdp->declBus(c+9,"EmifToAurora_test area_apb3toRxBram_io_bram_wrdata", false,-1, 31,0);
        vcdp->declBit(c+825,"EmifToAurora_test area_auroratop_apb_PREADY", false,-1);
        vcdp->declBus(c+41,"EmifToAurora_test area_auroratop_apb_PRDATA", false,-1, 31,0);
        vcdp->declBit(c+833,"EmifToAurora_test area_auroratop_apb_PSLVERROR", false,-1);
        vcdp->declBus(c+353,"EmifToAurora_test area_auroratop_tx_bram_rddata", false,-1, 31,0);
        vcdp->declBus(c+361,"EmifToAurora_test area_auroratop_rx_bram_rddata", false,-1, 31,0);
        vcdp->declBit(c+49,"EmifToAurora_test apb_decoder_io_input_PREADY", false,-1);
        vcdp->declBus(c+57,"EmifToAurora_test apb_decoder_io_input_PRDATA", false,-1, 31,0);
        vcdp->declBit(c+65,"EmifToAurora_test apb_decoder_io_input_PSLVERROR", false,-1);
        vcdp->declBus(c+785,"EmifToAurora_test apb_decoder_io_output_PADDR", false,-1, 19,0);
        vcdp->declBus(c+73,"EmifToAurora_test apb_decoder_io_output_PSEL", false,-1, 2,0);
        vcdp->declBit(c+145,"EmifToAurora_test apb_decoder_io_output_PENABLE", false,-1);
        vcdp->declBit(c+1,"EmifToAurora_test apb_decoder_io_output_PWRITE", false,-1);
        vcdp->declBus(c+9,"EmifToAurora_test apb_decoder_io_output_PWDATA", false,-1, 31,0);
        vcdp->declBit(c+841,"EmifToAurora_test apb3Router_1_io_input_PREADY", false,-1);
        vcdp->declBus(c+57,"EmifToAurora_test apb3Router_1_io_input_PRDATA", false,-1, 31,0);
        vcdp->declBit(c+849,"EmifToAurora_test apb3Router_1_io_input_PSLVERROR", false,-1);
        vcdp->declBus(c+785,"EmifToAurora_test apb3Router_1_io_outputs_0_PADDR", false,-1, 19,0);
        vcdp->declBus(c+17,"EmifToAurora_test apb3Router_1_io_outputs_0_PSEL", false,-1, 0,0);
        vcdp->declBit(c+145,"EmifToAurora_test apb3Router_1_io_outputs_0_PENABLE", false,-1);
        vcdp->declBit(c+1,"EmifToAurora_test apb3Router_1_io_outputs_0_PWRITE", false,-1);
        vcdp->declBus(c+9,"EmifToAurora_test apb3Router_1_io_outputs_0_PWDATA", false,-1, 31,0);
        vcdp->declBus(c+785,"EmifToAurora_test apb3Router_1_io_outputs_1_PADDR", false,-1, 19,0);
        vcdp->declBus(c+33,"EmifToAurora_test apb3Router_1_io_outputs_1_PSEL", false,-1, 0,0);
        vcdp->declBit(c+145,"EmifToAurora_test apb3Router_1_io_outputs_1_PENABLE", false,-1);
        vcdp->declBit(c+1,"EmifToAurora_test apb3Router_1_io_outputs_1_PWRITE", false,-1);
        vcdp->declBus(c+9,"EmifToAurora_test apb3Router_1_io_outputs_1_PWDATA", false,-1, 31,0);
        vcdp->declBus(c+785,"EmifToAurora_test apb3Router_1_io_outputs_2_PADDR", false,-1, 19,0);
        vcdp->declBus(c+81,"EmifToAurora_test apb3Router_1_io_outputs_2_PSEL", false,-1, 0,0);
        vcdp->declBit(c+145,"EmifToAurora_test apb3Router_1_io_outputs_2_PENABLE", false,-1);
        vcdp->declBit(c+1,"EmifToAurora_test apb3Router_1_io_outputs_2_PWRITE", false,-1);
        vcdp->declBus(c+9,"EmifToAurora_test apb3Router_1_io_outputs_2_PWDATA", false,-1, 31,0);
        vcdp->declBus(c+689,"EmifToAurora_test area_emiftoapb emif_emif_addr", false,-1, 23,0);
        vcdp->declBus(c+697,"EmifToAurora_test area_emiftoapb emif_emif_data_read", false,-1, 15,0);
        vcdp->declBus(c+769,"EmifToAurora_test area_emiftoapb emif_emif_data_write", false,-1, 15,0);
        vcdp->declBit(c+777,"EmifToAurora_test area_emiftoapb emif_emif_data_writeEnable", false,-1);
        vcdp->declBit(c+721,"EmifToAurora_test area_emiftoapb emif_emif_cs", false,-1);
        vcdp->declBit(c+729,"EmifToAurora_test area_emiftoapb emif_emif_we", false,-1);
        vcdp->declBit(c+737,"EmifToAurora_test area_emiftoapb emif_emif_oe", false,-1);
        vcdp->declBus(c+785,"EmifToAurora_test area_emiftoapb apb_PADDR", false,-1, 19,0);
        vcdp->declBus(c+793,"EmifToAurora_test area_emiftoapb apb_PSEL", false,-1, 0,0);
        vcdp->declBit(c+145,"EmifToAurora_test area_emiftoapb apb_PENABLE", false,-1);
        vcdp->declBit(c+49,"EmifToAurora_test area_emiftoapb apb_PREADY", false,-1);
        vcdp->declBit(c+1,"EmifToAurora_test area_emiftoapb apb_PWRITE", false,-1);
        vcdp->declBus(c+9,"EmifToAurora_test area_emiftoapb apb_PWDATA", false,-1, 31,0);
        vcdp->declBus(c+57,"EmifToAurora_test area_emiftoapb apb_PRDATA", false,-1, 31,0);
        vcdp->declBit(c+65,"EmifToAurora_test area_emiftoapb apb_PSLVERROR", false,-1);
        vcdp->declBit(c+745,"EmifToAurora_test area_emiftoapb clk", false,-1);
        vcdp->declBit(c+753,"EmifToAurora_test area_emiftoapb reset", false,-1);
        vcdp->declBit(c+409,"EmifToAurora_test area_emiftoapb penable", false,-1);
        vcdp->declBus(c+369,"EmifToAurora_test area_emiftoapb emifdatatemp", false,-1, 15,0);
        vcdp->declBit(c+377,"EmifToAurora_test area_emiftoapb penable_regNext", false,-1);
        vcdp->declBit(c+809,"EmifToAurora_test area_emiftoapb when_EmifToApb_l70", false,-1);
        vcdp->declBit(c+817,"EmifToAurora_test area_emiftoapb when_EmifToApb_l80", false,-1);
        vcdp->declBit(c+777,"EmifToAurora_test area_emiftoapb when_EmifToApb_l81", false,-1);
        vcdp->declBit(c+777,"EmifToAurora_test area_emiftoapb when_EmifToApb_l83", false,-1);
        vcdp->declBus(c+785,"EmifToAurora_test area_apb3toTxBram io_apb_PADDR", false,-1, 19,0);
        vcdp->declBus(c+17,"EmifToAurora_test area_apb3toTxBram io_apb_PSEL", false,-1, 0,0);
        vcdp->declBit(c+145,"EmifToAurora_test area_apb3toTxBram io_apb_PENABLE", false,-1);
        vcdp->declBit(c+825,"EmifToAurora_test area_apb3toTxBram io_apb_PREADY", false,-1);
        vcdp->declBit(c+1,"EmifToAurora_test area_apb3toTxBram io_apb_PWRITE", false,-1);
        vcdp->declBus(c+9,"EmifToAurora_test area_apb3toTxBram io_apb_PWDATA", false,-1, 31,0);
        vcdp->declBus(c+353,"EmifToAurora_test area_apb3toTxBram io_apb_PRDATA", false,-1, 31,0);
        vcdp->declBit(c+833,"EmifToAurora_test area_apb3toTxBram io_apb_PSLVERROR", false,-1);
        vcdp->declBit(c+17,"EmifToAurora_test area_apb3toTxBram io_bram_en", false,-1);
        vcdp->declBus(c+25,"EmifToAurora_test area_apb3toTxBram io_bram_we", false,-1, 3,0);
        vcdp->declBus(c+801,"EmifToAurora_test area_apb3toTxBram io_bram_addr", false,-1, 7,0);
        vcdp->declBus(c+9,"EmifToAurora_test area_apb3toTxBram io_bram_wrdata", false,-1, 31,0);
        vcdp->declBus(c+353,"EmifToAurora_test area_apb3toTxBram io_bram_rddata", false,-1, 31,0);
        vcdp->declBit(c+89,"EmifToAurora_test area_apb3toTxBram when_Apb3ToBram_l41", false,-1);
        vcdp->declBus(c+785,"EmifToAurora_test area_apb3toRxBram io_apb_PADDR", false,-1, 19,0);
        vcdp->declBus(c+33,"EmifToAurora_test area_apb3toRxBram io_apb_PSEL", false,-1, 0,0);
        vcdp->declBit(c+145,"EmifToAurora_test area_apb3toRxBram io_apb_PENABLE", false,-1);
        vcdp->declBit(c+825,"EmifToAurora_test area_apb3toRxBram io_apb_PREADY", false,-1);
        vcdp->declBit(c+1,"EmifToAurora_test area_apb3toRxBram io_apb_PWRITE", false,-1);
        vcdp->declBus(c+9,"EmifToAurora_test area_apb3toRxBram io_apb_PWDATA", false,-1, 31,0);
        vcdp->declBus(c+361,"EmifToAurora_test area_apb3toRxBram io_apb_PRDATA", false,-1, 31,0);
        vcdp->declBit(c+833,"EmifToAurora_test area_apb3toRxBram io_apb_PSLVERROR", false,-1);
        vcdp->declBit(c+33,"EmifToAurora_test area_apb3toRxBram io_bram_en", false,-1);
        vcdp->declBus(c+113,"EmifToAurora_test area_apb3toRxBram io_bram_we", false,-1, 3,0);
        vcdp->declBus(c+801,"EmifToAurora_test area_apb3toRxBram io_bram_addr", false,-1, 7,0);
        vcdp->declBus(c+9,"EmifToAurora_test area_apb3toRxBram io_bram_wrdata", false,-1, 31,0);
        vcdp->declBus(c+361,"EmifToAurora_test area_apb3toRxBram io_bram_rddata", false,-1, 31,0);
        vcdp->declBit(c+121,"EmifToAurora_test area_apb3toRxBram when_Apb3ToBram_l41", false,-1);
        vcdp->declBus(c+785,"EmifToAurora_test area_auroratop apb_PADDR", false,-1, 19,0);
        vcdp->declBus(c+81,"EmifToAurora_test area_auroratop apb_PSEL", false,-1, 0,0);
        vcdp->declBit(c+145,"EmifToAurora_test area_auroratop apb_PENABLE", false,-1);
        vcdp->declBit(c+825,"EmifToAurora_test area_auroratop apb_PREADY", false,-1);
        vcdp->declBit(c+1,"EmifToAurora_test area_auroratop apb_PWRITE", false,-1);
        vcdp->declBus(c+9,"EmifToAurora_test area_auroratop apb_PWDATA", false,-1, 31,0);
        vcdp->declBus(c+41,"EmifToAurora_test area_auroratop apb_PRDATA", false,-1, 31,0);
        vcdp->declBit(c+833,"EmifToAurora_test area_auroratop apb_PSLVERROR", false,-1);
        vcdp->declBit(c+17,"EmifToAurora_test area_auroratop tx_bram_en", false,-1);
        vcdp->declBus(c+25,"EmifToAurora_test area_auroratop tx_bram_we", false,-1, 3,0);
        vcdp->declBus(c+801,"EmifToAurora_test area_auroratop tx_bram_addr", false,-1, 7,0);
        vcdp->declBus(c+9,"EmifToAurora_test area_auroratop tx_bram_wrdata", false,-1, 31,0);
        vcdp->declBus(c+353,"EmifToAurora_test area_auroratop tx_bram_rddata", false,-1, 31,0);
        vcdp->declBit(c+33,"EmifToAurora_test area_auroratop rx_bram_en", false,-1);
        vcdp->declBus(c+113,"EmifToAurora_test area_auroratop rx_bram_we", false,-1, 3,0);
        vcdp->declBus(c+801,"EmifToAurora_test area_auroratop rx_bram_addr", false,-1, 7,0);
        vcdp->declBus(c+9,"EmifToAurora_test area_auroratop rx_bram_wrdata", false,-1, 31,0);
        vcdp->declBus(c+361,"EmifToAurora_test area_auroratop rx_bram_rddata", false,-1, 31,0);
        vcdp->declBit(c+745,"EmifToAurora_test area_auroratop clk", false,-1);
        vcdp->declBit(c+753,"EmifToAurora_test area_auroratop reset", false,-1);
        vcdp->declBit(c+761,"EmifToAurora_test area_auroratop aurora_userclk", false,-1);
        vcdp->declBit(c+585,"EmifToAurora_test area_auroratop auroraArea_auroratxcore_tx_start", false,-1);
        vcdp->declBit(c+593,"EmifToAurora_test area_auroratop auroraArea_auroratxcore_tx_trigger", false,-1);
        vcdp->declBit(c+825,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore_axir_ready", false,-1);
        vcdp->declBit(c+465,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore_bram_en", false,-1);
        vcdp->declBus(c+473,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore_bram_we", false,-1, 3,0);
        vcdp->declBus(c+481,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore_bram_addr", false,-1, 7,0);
        vcdp->declBus(c+281,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore_bram_wrdata", false,-1, 31,0);
        vcdp->declBit(c+761,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore_bram_clkout", false,-1);
        vcdp->declBit(c+753,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore_bram_resetout", false,-1);
        vcdp->declBit(c+609,"EmifToAurora_test area_auroratop auroraArea_auroratxcore_axiw_valid", false,-1);
        vcdp->declBus(c+281,"EmifToAurora_test area_auroratop auroraArea_auroratxcore_axiw_payload_data", false,-1, 31,0);
        vcdp->declBit(c+185,"EmifToAurora_test area_auroratop auroraArea_auroratxcore_axiw_payload_last", false,-1);
        vcdp->declBit(c+489,"EmifToAurora_test area_auroratop auroraArea_auroratxcore_bram_en", false,-1);
        vcdp->declBus(c+857,"EmifToAurora_test area_auroratop auroraArea_auroratxcore_bram_we", false,-1, 3,0);
        vcdp->declBus(c+529,"EmifToAurora_test area_auroratop auroraArea_auroratxcore_bram_addr", false,-1, 7,0);
        vcdp->declBus(c+865,"EmifToAurora_test area_auroratop auroraArea_auroratxcore_bram_wrdata", false,-1, 31,0);
        vcdp->declBit(c+761,"EmifToAurora_test area_auroratop auroraArea_auroratxcore_bram_clkout", false,-1);
        vcdp->declBit(c+753,"EmifToAurora_test area_auroratop auroraArea_auroratxcore_bram_resetout", false,-1);
        vcdp->declBus(c+417,"EmifToAurora_test area_auroratop auroraArea_auroraTxBlockRam_ioA_rddata", false,-1, 31,0);
        vcdp->declBus(c+353,"EmifToAurora_test area_auroratop auroraArea_auroraTxBlockRam_ioB_rddata", false,-1, 31,0);
        vcdp->declBus(c+361,"EmifToAurora_test area_auroratop auroraArea_auroraRxBlockRam_ioA_rddata", false,-1, 31,0);
        vcdp->declBus(c+425,"EmifToAurora_test area_auroratop auroraArea_auroraRxBlockRam_ioB_rddata", false,-1, 31,0);
        vcdp->declBus(c+681,"EmifToAurora_test area_auroratop toparea_tx_headtemp", false,-1, 31,0);
        vcdp->declBus(c+601,"EmifToAurora_test area_auroratop toparea_tx_ctrl", false,-1, 31,0);
        vcdp->declBit(c+129,"EmifToAurora_test area_auroratop toparea_ctrl_askWrite", false,-1);
        vcdp->declBit(c+137,"EmifToAurora_test area_auroratop toparea_ctrl_askRead", false,-1);
        vcdp->declBit(c+97,"EmifToAurora_test area_auroratop toparea_ctrl_doWrite", false,-1);
        vcdp->declBit(c+137,"EmifToAurora_test area_auroratop toparea_ctrl_doRead", false,-1);
        vcdp->declBit(c+761,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore aurora_userclk", false,-1);
        vcdp->declBit(c+753,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore reset", false,-1);
        vcdp->declBit(c+609,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore axir_valid", false,-1);
        vcdp->declBit(c+825,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore axir_ready", false,-1);
        vcdp->declBus(c+281,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore axir_payload_data", false,-1, 31,0);
        vcdp->declBit(c+185,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore axir_payload_last", false,-1);
        vcdp->declBit(c+465,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore bram_en", false,-1);
        vcdp->declBus(c+473,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore bram_we", false,-1, 3,0);
        vcdp->declBus(c+481,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore bram_addr", false,-1, 7,0);
        vcdp->declBus(c+281,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore bram_wrdata", false,-1, 31,0);
        vcdp->declBus(c+425,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore bram_rddata", false,-1, 31,0);
        vcdp->declBit(c+761,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore bram_clkout", false,-1);
        vcdp->declBit(c+753,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore bram_resetout", false,-1);
        vcdp->declBus(c+289,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore crc32_2_crc_o", false,-1, 31,0);
        vcdp->declBit(c+465,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore auroraRxArea_mem_wren", false,-1);
        vcdp->declBus(c+481,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore auroraRxArea_mem_addr", false,-1, 7,0);
        vcdp->declBus(c+393,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore auroraRxArea_mem_data", false,-1, 31,0);
        vcdp->declBus(c+473,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore auroraRxArea_mem_wrwe", false,-1, 3,0);
        vcdp->declBus(c+433,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore auroraRxArea_length", false,-1, 7,0);
        vcdp->declBus(c+441,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore auroraRxArea_data_cnt", false,-1, 7,0);
        vcdp->declBus(c+449,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore auroraRxArea_crc_data", false,-1, 31,0);
        vcdp->declBit(c+401,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore auroraRxArea_crc_status", false,-1);
        vcdp->declBus(c+497,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore auroraRxArea_stateMachine_state", false,-1, 2,0);
        vcdp->declBit(c+609,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore axir_fire", false,-1);
        vcdp->declBit(c+273,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore when_Gtx_Rx_l44", false,-1);
        vcdp->declBit(c+609,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore axir_fire_1", false,-1);
        vcdp->declBit(c+297,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore when_Gtx_Rx_l50", false,-1);
        vcdp->declBit(c+609,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore axir_fire_2", false,-1);
        vcdp->declBit(c+609,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore axir_fire_3", false,-1);
        vcdp->declBit(c+153,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore when_Gtx_Rx_l66", false,-1);
        vcdp->declBit(c+609,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore axir_fire_4", false,-1);
        vcdp->declBit(c+161,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore when_Gtx_Rx_l75", false,-1);
        vcdp->declBit(c+609,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore axir_fire_5", false,-1);
        vcdp->declBit(c+193,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore when_Gtx_Rx_l84", false,-1);
        vcdp->declBit(c+505,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore when_Gtx_Rx_l91", false,-1);
        vcdp->declBit(c+609,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore axir_fire_6", false,-1);
        vcdp->declBit(c+537,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore when_Gtx_Rx_l93", false,-1);
        vcdp->declBit(c+609,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore axir_fire_7", false,-1);
        vcdp->declBit(c+201,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore when_Gtx_Rx_l99", false,-1);
        vcdp->declBit(c+305,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore when_Gtx_Rx_l106", false,-1);
        vcdp->declBit(c+609,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore axir_fire_8", false,-1);
        vcdp->declBit(c+209,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore when_Gtx_Rx_l104", false,-1);
        vcdp->declBit(c+609,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore axir_fire_9", false,-1);
        vcdp->declBit(c+217,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore when_Gtx_Rx_l113", false,-1);
        vcdp->declQuad(c+169,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore auroraRxArea_stateMachine_state_string", false,-1, 63,0);
        vcdp->declBus(c+449,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore crc32_2 crc_i", false,-1, 31,0);
        vcdp->declBus(c+281,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore crc32_2 data_i", false,-1, 31,0);
        vcdp->declBus(c+289,"EmifToAurora_test area_auroratop auroraArea_aurorarxcore crc32_2 crc_o", false,-1, 31,0);
        vcdp->declBit(c+761,"EmifToAurora_test area_auroratop auroraArea_auroratxcore aurora_userclk", false,-1);
        vcdp->declBit(c+753,"EmifToAurora_test area_auroratop auroraArea_auroratxcore reset", false,-1);
        vcdp->declBit(c+609,"EmifToAurora_test area_auroratop auroraArea_auroratxcore axiw_valid", false,-1);
        vcdp->declBit(c+825,"EmifToAurora_test area_auroratop auroraArea_auroratxcore axiw_ready", false,-1);
        vcdp->declBus(c+281,"EmifToAurora_test area_auroratop auroraArea_auroratxcore axiw_payload_data", false,-1, 31,0);
        vcdp->declBit(c+185,"EmifToAurora_test area_auroratop auroraArea_auroratxcore axiw_payload_last", false,-1);
        vcdp->declBus(c+681,"EmifToAurora_test area_auroratop auroraArea_auroratxcore tx_head", false,-1, 31,0);
        vcdp->declBit(c+585,"EmifToAurora_test area_auroratop auroraArea_auroratxcore tx_start", false,-1);
        vcdp->declBit(c+593,"EmifToAurora_test area_auroratop auroraArea_auroratxcore tx_trigger", false,-1);
        vcdp->declBit(c+489,"EmifToAurora_test area_auroratop auroraArea_auroratxcore bram_en", false,-1);
        vcdp->declBus(c+857,"EmifToAurora_test area_auroratop auroraArea_auroratxcore bram_we", false,-1, 3,0);
        vcdp->declBus(c+529,"EmifToAurora_test area_auroratop auroraArea_auroratxcore bram_addr", false,-1, 7,0);
        vcdp->declBus(c+865,"EmifToAurora_test area_auroratop auroraArea_auroratxcore bram_wrdata", false,-1, 31,0);
        vcdp->declBus(c+417,"EmifToAurora_test area_auroratop auroraArea_auroratxcore bram_rddata", false,-1, 31,0);
        vcdp->declBit(c+761,"EmifToAurora_test area_auroratop auroraArea_auroratxcore bram_clkout", false,-1);
        vcdp->declBit(c+753,"EmifToAurora_test area_auroratop auroraArea_auroratxcore bram_resetout", false,-1);
        vcdp->declBus(c+313,"EmifToAurora_test area_auroratop auroraArea_auroratxcore crc32_2_crc_o", false,-1, 31,0);
        vcdp->declBit(c+185,"EmifToAurora_test area_auroratop auroraArea_auroratxcore auroraTxArea_axi_last_2", false,-1);
        vcdp->declBit(c+225,"EmifToAurora_test area_auroratop auroraArea_auroratxcore auroraTxArea_axi_last_1", false,-1);
        vcdp->declBus(c+281,"EmifToAurora_test area_auroratop auroraArea_auroratxcore auroraTxArea_axi_txdata_7", false,-1, 31,0);
        vcdp->declBus(c+321,"EmifToAurora_test area_auroratop auroraArea_auroratxcore auroraTxArea_axi_txdata_6", false,-1, 31,0);
        vcdp->declBus(c+329,"EmifToAurora_test area_auroratop auroraArea_auroratxcore auroraTxArea_axi_txdata_5", false,-1, 31,0);
        vcdp->declBus(c+337,"EmifToAurora_test area_auroratop auroraArea_auroratxcore auroraTxArea_axi_txdata_4", false,-1, 31,0);
        vcdp->declBus(c+345,"EmifToAurora_test area_auroratop auroraArea_auroratxcore auroraTxArea_axi_txdata_3", false,-1, 31,0);
        vcdp->declBus(c+233,"EmifToAurora_test area_auroratop auroraArea_auroratxcore auroraTxArea_axi_txdata_2", false,-1, 31,0);
        vcdp->declBus(c+241,"EmifToAurora_test area_auroratop auroraArea_auroratxcore auroraTxArea_axi_txdata_1", false,-1, 31,0);
        vcdp->declBus(c+865,"EmifToAurora_test area_auroratop auroraArea_auroratxcore auroraTxArea_axi_txdata", false,-1, 31,0);
        vcdp->declBit(c+513,"EmifToAurora_test area_auroratop auroraArea_auroratxcore auroraTxArea_axi_last", false,-1);
        vcdp->declBus(c+545,"EmifToAurora_test area_auroratop auroraArea_auroratxcore auroraTxArea_axi_txhead", false,-1, 31,0);
        vcdp->declBus(c+553,"EmifToAurora_test area_auroratop auroraArea_auroratxcore auroraTxArea_length", false,-1, 7,0);
        vcdp->declBit(c+489,"EmifToAurora_test area_auroratop auroraArea_auroratxcore auroraTxArea_mem_rden", false,-1);
        vcdp->declBus(c+417,"EmifToAurora_test area_auroratop auroraArea_auroratxcore auroraTxArea_mem_data", false,-1, 31,0);
        vcdp->declBus(c+521,"EmifToAurora_test area_auroratop auroraArea_auroratxcore auroraTxArea_mem_addrtemp", false,-1, 7,0);
        vcdp->declBus(c+457,"EmifToAurora_test area_auroratop auroraArea_auroratxcore auroraTxArea_crc_data", false,-1, 31,0);
        vcdp->declBus(c+561,"EmifToAurora_test area_auroratop auroraArea_auroratxcore auroraTxArea_data_cnt", false,-1, 7,0);
        vcdp->declBus(c+617,"EmifToAurora_test area_auroratop auroraArea_auroratxcore auroraTxArea_stateMachine_state", false,-1, 2,0);
        vcdp->declBit(c+585,"EmifToAurora_test area_auroratop auroraArea_auroratxcore when_Gtx_Tx_l66", false,-1);
        vcdp->declBit(c+833,"EmifToAurora_test area_auroratop auroraArea_auroratxcore when_Gtx_Tx_l68", false,-1);
        vcdp->declBit(c+609,"EmifToAurora_test area_auroratop auroraArea_auroratxcore axiw_fire", false,-1);
        vcdp->declBit(c+569,"EmifToAurora_test area_auroratop auroraArea_auroratxcore when_Gtx_Tx_l81", false,-1);
        vcdp->declBit(c+609,"EmifToAurora_test area_auroratop auroraArea_auroratxcore axiw_fire_1", false,-1);
        vcdp->declBit(c+609,"EmifToAurora_test area_auroratop auroraArea_auroratxcore axiw_fire_2", false,-1);
        vcdp->declBit(c+609,"EmifToAurora_test area_auroratop auroraArea_auroratxcore axiw_fire_3", false,-1);
        vcdp->declBit(c+577,"EmifToAurora_test area_auroratop auroraArea_auroratxcore when_Gtx_Tx_l104", false,-1);
        vcdp->declBit(c+609,"EmifToAurora_test area_auroratop auroraArea_auroratxcore axiw_fire_4", false,-1);
        vcdp->declBit(c+609,"EmifToAurora_test area_auroratop auroraArea_auroratxcore axiw_fire_5", false,-1);
        vcdp->declBit(c+625,"EmifToAurora_test area_auroratop auroraArea_auroratxcore when_Gtx_Tx_l124", false,-1);
        vcdp->declBit(c+633,"EmifToAurora_test area_auroratop auroraArea_auroratxcore when_Gtx_Tx_l126", false,-1);
        vcdp->declBit(c+641,"EmifToAurora_test area_auroratop auroraArea_auroratxcore when_Gtx_Tx_l128", false,-1);
        vcdp->declBit(c+649,"EmifToAurora_test area_auroratop auroraArea_auroratxcore when_Gtx_Tx_l130", false,-1);
        vcdp->declBit(c+657,"EmifToAurora_test area_auroratop auroraArea_auroratxcore when_Gtx_Tx_l132", false,-1);
        vcdp->declBit(c+665,"EmifToAurora_test area_auroratop auroraArea_auroratxcore when_Gtx_Tx_l134", false,-1);
        vcdp->declBit(c+609,"EmifToAurora_test area_auroratop auroraArea_auroratxcore axiw_fire_6", false,-1);
        vcdp->declBit(c+249,"EmifToAurora_test area_auroratop auroraArea_auroratxcore when_Gtx_Tx_l140", false,-1);
        vcdp->declBit(c+625,"EmifToAurora_test area_auroratop auroraArea_auroratxcore when_Gtx_Tx_l146", false,-1);
        vcdp->declBit(c+609,"EmifToAurora_test area_auroratop auroraArea_auroratxcore axiw_fire_7", false,-1);
        vcdp->declBit(c+673,"EmifToAurora_test area_auroratop auroraArea_auroratxcore when_Gtx_Tx_l148", false,-1);
        vcdp->declBit(c+609,"EmifToAurora_test area_auroratop auroraArea_auroratxcore axiw_fire_8", false,-1);
        vcdp->declBus(c+529,"EmifToAurora_test area_auroratop auroraArea_auroratxcore auroraTxArea_mem_addr", false,-1, 7,0);
        vcdp->declQuad(c+257,"EmifToAurora_test area_auroratop auroraArea_auroratxcore auroraTxArea_stateMachine_state_string", false,-1, 63,0);
        vcdp->declBus(c+457,"EmifToAurora_test area_auroratop auroraArea_auroratxcore crc32_2 crc_i", false,-1, 31,0);
        vcdp->declBus(c+281,"EmifToAurora_test area_auroratop auroraArea_auroratxcore crc32_2 data_i", false,-1, 31,0);
        vcdp->declBus(c+313,"EmifToAurora_test area_auroratop auroraArea_auroratxcore crc32_2 crc_o", false,-1, 31,0);
        vcdp->declBit(c+489,"EmifToAurora_test area_auroratop auroraArea_auroraTxBlockRam ioA_en", false,-1);
        vcdp->declBus(c+857,"EmifToAurora_test area_auroratop auroraArea_auroraTxBlockRam ioA_we", false,-1, 3,0);
        vcdp->declBus(c+529,"EmifToAurora_test area_auroratop auroraArea_auroraTxBlockRam ioA_addr", false,-1, 7,0);
        vcdp->declBus(c+865,"EmifToAurora_test area_auroratop auroraArea_auroraTxBlockRam ioA_wrdata", false,-1, 31,0);
        vcdp->declBus(c+417,"EmifToAurora_test area_auroratop auroraArea_auroraTxBlockRam ioA_rddata", false,-1, 31,0);
        vcdp->declBit(c+17,"EmifToAurora_test area_auroratop auroraArea_auroraTxBlockRam ioB_en", false,-1);
        vcdp->declBus(c+25,"EmifToAurora_test area_auroratop auroraArea_auroraTxBlockRam ioB_we", false,-1, 3,0);
        vcdp->declBus(c+801,"EmifToAurora_test area_auroratop auroraArea_auroraTxBlockRam ioB_addr", false,-1, 7,0);
        vcdp->declBus(c+9,"EmifToAurora_test area_auroratop auroraArea_auroraTxBlockRam ioB_wrdata", false,-1, 31,0);
        vcdp->declBus(c+353,"EmifToAurora_test area_auroratop auroraArea_auroraTxBlockRam ioB_rddata", false,-1, 31,0);
        vcdp->declBit(c+761,"EmifToAurora_test area_auroratop auroraArea_auroraTxBlockRam clka", false,-1);
        vcdp->declBit(c+745,"EmifToAurora_test area_auroratop auroraArea_auroraTxBlockRam clkb", false,-1);
        vcdp->declBit(c+753,"EmifToAurora_test area_auroratop auroraArea_auroraTxBlockRam reseta", false,-1);
        vcdp->declBit(c+753,"EmifToAurora_test area_auroratop auroraArea_auroraTxBlockRam resetb", false,-1);
        vcdp->declBus(c+873,"EmifToAurora_test area_auroratop auroraArea_auroraTxBlockRam i", false,-1, 8,0);
        vcdp->declBit(c+33,"EmifToAurora_test area_auroratop auroraArea_auroraRxBlockRam ioA_en", false,-1);
        vcdp->declBus(c+113,"EmifToAurora_test area_auroratop auroraArea_auroraRxBlockRam ioA_we", false,-1, 3,0);
        vcdp->declBus(c+801,"EmifToAurora_test area_auroratop auroraArea_auroraRxBlockRam ioA_addr", false,-1, 7,0);
        vcdp->declBus(c+9,"EmifToAurora_test area_auroratop auroraArea_auroraRxBlockRam ioA_wrdata", false,-1, 31,0);
        vcdp->declBus(c+361,"EmifToAurora_test area_auroratop auroraArea_auroraRxBlockRam ioA_rddata", false,-1, 31,0);
        vcdp->declBit(c+465,"EmifToAurora_test area_auroratop auroraArea_auroraRxBlockRam ioB_en", false,-1);
        vcdp->declBus(c+473,"EmifToAurora_test area_auroratop auroraArea_auroraRxBlockRam ioB_we", false,-1, 3,0);
        vcdp->declBus(c+481,"EmifToAurora_test area_auroratop auroraArea_auroraRxBlockRam ioB_addr", false,-1, 7,0);
        vcdp->declBus(c+281,"EmifToAurora_test area_auroratop auroraArea_auroraRxBlockRam ioB_wrdata", false,-1, 31,0);
        vcdp->declBus(c+425,"EmifToAurora_test area_auroratop auroraArea_auroraRxBlockRam ioB_rddata", false,-1, 31,0);
        vcdp->declBit(c+745,"EmifToAurora_test area_auroratop auroraArea_auroraRxBlockRam clka", false,-1);
        vcdp->declBit(c+761,"EmifToAurora_test area_auroratop auroraArea_auroraRxBlockRam clkb", false,-1);
        vcdp->declBit(c+753,"EmifToAurora_test area_auroratop auroraArea_auroraRxBlockRam reseta", false,-1);
        vcdp->declBit(c+753,"EmifToAurora_test area_auroratop auroraArea_auroraRxBlockRam resetb", false,-1);
        vcdp->declBus(c+881,"EmifToAurora_test area_auroratop auroraArea_auroraRxBlockRam i", false,-1, 8,0);
        vcdp->declBus(c+785,"EmifToAurora_test apb_decoder io_input_PADDR", false,-1, 19,0);
        vcdp->declBus(c+793,"EmifToAurora_test apb_decoder io_input_PSEL", false,-1, 0,0);
        vcdp->declBit(c+145,"EmifToAurora_test apb_decoder io_input_PENABLE", false,-1);
        vcdp->declBit(c+49,"EmifToAurora_test apb_decoder io_input_PREADY", false,-1);
        vcdp->declBit(c+1,"EmifToAurora_test apb_decoder io_input_PWRITE", false,-1);
        vcdp->declBus(c+9,"EmifToAurora_test apb_decoder io_input_PWDATA", false,-1, 31,0);
        vcdp->declBus(c+57,"EmifToAurora_test apb_decoder io_input_PRDATA", false,-1, 31,0);
        vcdp->declBit(c+65,"EmifToAurora_test apb_decoder io_input_PSLVERROR", false,-1);
        vcdp->declBus(c+785,"EmifToAurora_test apb_decoder io_output_PADDR", false,-1, 19,0);
        vcdp->declBus(c+73,"EmifToAurora_test apb_decoder io_output_PSEL", false,-1, 2,0);
        vcdp->declBit(c+145,"EmifToAurora_test apb_decoder io_output_PENABLE", false,-1);
        vcdp->declBit(c+841,"EmifToAurora_test apb_decoder io_output_PREADY", false,-1);
        vcdp->declBit(c+1,"EmifToAurora_test apb_decoder io_output_PWRITE", false,-1);
        vcdp->declBus(c+9,"EmifToAurora_test apb_decoder io_output_PWDATA", false,-1, 31,0);
        vcdp->declBus(c+57,"EmifToAurora_test apb_decoder io_output_PRDATA", false,-1, 31,0);
        vcdp->declBit(c+849,"EmifToAurora_test apb_decoder io_output_PSLVERROR", false,-1);
        vcdp->declBit(c+105,"EmifToAurora_test apb_decoder when_Apb3Decoder_l84", false,-1);
        vcdp->declBus(c+785,"EmifToAurora_test apb3Router_1 io_input_PADDR", false,-1, 19,0);
        vcdp->declBus(c+73,"EmifToAurora_test apb3Router_1 io_input_PSEL", false,-1, 2,0);
        vcdp->declBit(c+145,"EmifToAurora_test apb3Router_1 io_input_PENABLE", false,-1);
        vcdp->declBit(c+841,"EmifToAurora_test apb3Router_1 io_input_PREADY", false,-1);
        vcdp->declBit(c+1,"EmifToAurora_test apb3Router_1 io_input_PWRITE", false,-1);
        vcdp->declBus(c+9,"EmifToAurora_test apb3Router_1 io_input_PWDATA", false,-1, 31,0);
        vcdp->declBus(c+57,"EmifToAurora_test apb3Router_1 io_input_PRDATA", false,-1, 31,0);
        vcdp->declBit(c+849,"EmifToAurora_test apb3Router_1 io_input_PSLVERROR", false,-1);
        vcdp->declBus(c+785,"EmifToAurora_test apb3Router_1 io_outputs_0_PADDR", false,-1, 19,0);
        vcdp->declBus(c+17,"EmifToAurora_test apb3Router_1 io_outputs_0_PSEL", false,-1, 0,0);
        vcdp->declBit(c+145,"EmifToAurora_test apb3Router_1 io_outputs_0_PENABLE", false,-1);
        vcdp->declBit(c+825,"EmifToAurora_test apb3Router_1 io_outputs_0_PREADY", false,-1);
        vcdp->declBit(c+1,"EmifToAurora_test apb3Router_1 io_outputs_0_PWRITE", false,-1);
        vcdp->declBus(c+9,"EmifToAurora_test apb3Router_1 io_outputs_0_PWDATA", false,-1, 31,0);
        vcdp->declBus(c+353,"EmifToAurora_test apb3Router_1 io_outputs_0_PRDATA", false,-1, 31,0);
        vcdp->declBit(c+833,"EmifToAurora_test apb3Router_1 io_outputs_0_PSLVERROR", false,-1);
        vcdp->declBus(c+785,"EmifToAurora_test apb3Router_1 io_outputs_1_PADDR", false,-1, 19,0);
        vcdp->declBus(c+33,"EmifToAurora_test apb3Router_1 io_outputs_1_PSEL", false,-1, 0,0);
        vcdp->declBit(c+145,"EmifToAurora_test apb3Router_1 io_outputs_1_PENABLE", false,-1);
        vcdp->declBit(c+825,"EmifToAurora_test apb3Router_1 io_outputs_1_PREADY", false,-1);
        vcdp->declBit(c+1,"EmifToAurora_test apb3Router_1 io_outputs_1_PWRITE", false,-1);
        vcdp->declBus(c+9,"EmifToAurora_test apb3Router_1 io_outputs_1_PWDATA", false,-1, 31,0);
        vcdp->declBus(c+361,"EmifToAurora_test apb3Router_1 io_outputs_1_PRDATA", false,-1, 31,0);
        vcdp->declBit(c+833,"EmifToAurora_test apb3Router_1 io_outputs_1_PSLVERROR", false,-1);
        vcdp->declBus(c+785,"EmifToAurora_test apb3Router_1 io_outputs_2_PADDR", false,-1, 19,0);
        vcdp->declBus(c+81,"EmifToAurora_test apb3Router_1 io_outputs_2_PSEL", false,-1, 0,0);
        vcdp->declBit(c+145,"EmifToAurora_test apb3Router_1 io_outputs_2_PENABLE", false,-1);
        vcdp->declBit(c+825,"EmifToAurora_test apb3Router_1 io_outputs_2_PREADY", false,-1);
        vcdp->declBit(c+1,"EmifToAurora_test apb3Router_1 io_outputs_2_PWRITE", false,-1);
        vcdp->declBus(c+9,"EmifToAurora_test apb3Router_1 io_outputs_2_PWDATA", false,-1, 31,0);
        vcdp->declBus(c+41,"EmifToAurora_test apb3Router_1 io_outputs_2_PRDATA", false,-1, 31,0);
        vcdp->declBit(c+833,"EmifToAurora_test apb3Router_1 io_outputs_2_PSLVERROR", false,-1);
        vcdp->declBit(c+745,"EmifToAurora_test apb3Router_1 clk", false,-1);
        vcdp->declBit(c+753,"EmifToAurora_test apb3Router_1 reset", false,-1);
        vcdp->declBus(c+385,"EmifToAurora_test apb3Router_1 selIndex", false,-1, 1,0);
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
        vcdp->fullBit(c+105,(vlTOPp->EmifToAurora_test__DOT__apb_decoder__DOT__when_Apb3Decoder_l84));
        vcdp->fullBus(c+113,(((((IData)(vlTOPp->EmifToAurora_test__DOT__area_emiftoapb_apb_PENABLE) 
                                & (IData)(vlTOPp->EmifToAurora_test__DOT__area_emiftoapb_apb_PWRITE)) 
                               & ((IData)(vlTOPp->EmifToAurora_test__DOT__apb_decoder_io_output_PSEL) 
                                  >> 1U)) ? 0xfU : 0U)),4);
        vcdp->fullBit(c+121,((((IData)(vlTOPp->EmifToAurora_test__DOT__area_emiftoapb_apb_PENABLE) 
                               & (IData)(vlTOPp->EmifToAurora_test__DOT__area_emiftoapb_apb_PWRITE)) 
                              & ((IData)(vlTOPp->EmifToAurora_test__DOT__apb_decoder_io_output_PSEL) 
                                 >> 1U))));
        vcdp->fullBit(c+129,(((((IData)(vlTOPp->EmifToAurora_test__DOT__apb_decoder_io_output_PSEL) 
                                >> 2U) & (IData)(vlTOPp->EmifToAurora_test__DOT__area_emiftoapb_apb_PENABLE)) 
                              & (IData)(vlTOPp->EmifToAurora_test__DOT__area_emiftoapb_apb_PWRITE))));
        vcdp->fullBit(c+137,(((((IData)(vlTOPp->EmifToAurora_test__DOT__apb_decoder_io_output_PSEL) 
                                >> 2U) & (IData)(vlTOPp->EmifToAurora_test__DOT__area_emiftoapb_apb_PENABLE)) 
                              & (~ (IData)(vlTOPp->EmifToAurora_test__DOT__area_emiftoapb_apb_PWRITE)))));
        vcdp->fullBit(c+145,(vlTOPp->EmifToAurora_test__DOT__area_emiftoapb_apb_PENABLE));
        vcdp->fullBit(c+153,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__when_Gtx_Rx_l66));
        vcdp->fullBit(c+161,((vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                              != vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7)));
        vcdp->fullQuad(c+169,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state_string),64);
        vcdp->fullBit(c+185,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_last_2));
        vcdp->fullBit(c+193,(((0U != (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state)) 
                              & (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_last_2))));
        vcdp->fullBit(c+201,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__when_Gtx_Rx_l99));
        vcdp->fullBit(c+209,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__when_Gtx_Rx_l104));
        vcdp->fullBit(c+217,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__when_Gtx_Rx_l113));
        vcdp->fullBit(c+225,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_last_1));
        vcdp->fullBus(c+233,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_2),32);
        vcdp->fullBus(c+241,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_1),32);
        vcdp->fullBit(c+249,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__when_Gtx_Tx_l140));
        vcdp->fullQuad(c+257,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state_string),64);
        vcdp->fullBit(c+273,(((0U != (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state)) 
                              & (0xffbcU == vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7))));
        vcdp->fullBus(c+281,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7),32);
        vcdp->fullBus(c+289,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__crc32_2_crc_o),32);
        vcdp->fullBit(c+297,((1U == vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7)));
        vcdp->fullBit(c+305,((0U == (0xffU & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                              >> 8U)))));
        vcdp->fullBus(c+313,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__crc32_2_crc_o),32);
        vcdp->fullBus(c+321,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_6),32);
        vcdp->fullBus(c+329,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_5),32);
        vcdp->fullBus(c+337,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_4),32);
        vcdp->fullBus(c+345,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_3),32);
        vcdp->fullBus(c+353,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroraTxBlockRam__DOT___zz_bram_port1),32);
        vcdp->fullBus(c+361,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroraRxBlockRam__DOT___zz_bram_port0),32);
        vcdp->fullBus(c+369,(vlTOPp->EmifToAurora_test__DOT__area_emiftoapb__DOT__emifdatatemp),16);
        vcdp->fullBit(c+377,(vlTOPp->EmifToAurora_test__DOT__area_emiftoapb__DOT__penable_regNext));
        vcdp->fullBus(c+385,(vlTOPp->EmifToAurora_test__DOT__apb3Router_1__DOT__selIndex),2);
        vcdp->fullBus(c+393,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_mem_data),32);
        vcdp->fullBit(c+401,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_status));
        vcdp->fullBit(c+409,(vlTOPp->EmifToAurora_test__DOT__area_emiftoapb__DOT__penable));
        vcdp->fullBus(c+417,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroraTxBlockRam__DOT___zz_bram_port0),32);
        vcdp->fullBus(c+425,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroraRxBlockRam__DOT___zz_bram_port1),32);
        vcdp->fullBus(c+433,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_length),8);
        vcdp->fullBus(c+441,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_data_cnt),8);
        vcdp->fullBus(c+449,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data),32);
        vcdp->fullBus(c+457,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data),32);
        vcdp->fullBit(c+465,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_mem_wren));
        vcdp->fullBus(c+473,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_mem_wrwe),4);
        vcdp->fullBus(c+481,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_mem_addr),8);
        vcdp->fullBit(c+489,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_mem_rden));
        vcdp->fullBus(c+497,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state),3);
        vcdp->fullBit(c+505,((0U == (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state))));
        vcdp->fullBit(c+513,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_last));
        vcdp->fullBus(c+521,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_mem_addrtemp),8);
        vcdp->fullBus(c+529,((0xffU & ((0U != (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))
                                        ? (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_mem_addrtemp)
                                        : ((IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_mem_addrtemp) 
                                           - (IData)(1U))))),8);
        vcdp->fullBit(c+537,(((((3U == (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state)) 
                                | (4U == (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state))) 
                               | (5U == (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state))) 
                              & (0U != (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state)))));
        vcdp->fullBus(c+545,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txhead),32);
        vcdp->fullBus(c+553,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_length),8);
        vcdp->fullBus(c+561,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_data_cnt),8);
        vcdp->fullBit(c+569,((0U == (0xffU & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txhead 
                                              >> 8U)))));
        vcdp->fullBit(c+577,(((IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_data_cnt) 
                              < (0xffU & ((IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_length) 
                                          - (IData)(1U))))));
        vcdp->fullBit(c+585,((1U & vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_ctrl)));
        vcdp->fullBit(c+593,((1U & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_ctrl 
                                    >> 4U))));
        vcdp->fullBus(c+601,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_ctrl),32);
        vcdp->fullBit(c+609,((0U != (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))));
        vcdp->fullBus(c+617,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state),3);
        vcdp->fullBit(c+625,((2U == (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))));
        vcdp->fullBit(c+633,((3U == (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))));
        vcdp->fullBit(c+641,((4U == (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))));
        vcdp->fullBit(c+649,((5U == (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))));
        vcdp->fullBit(c+657,((6U == (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))));
        vcdp->fullBit(c+665,((7U == (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))));
        vcdp->fullBit(c+673,(((((3U == (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state)) 
                                | (4U == (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) 
                               | (5U == (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) 
                              & (0U != (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state)))));
        vcdp->fullBus(c+681,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_headtemp),32);
        vcdp->fullBus(c+689,(vlTOPp->emif_emif_addr),24);
        vcdp->fullBus(c+697,(vlTOPp->emif_emif_data_read),16);
        vcdp->fullBus(c+705,(vlTOPp->emif_emif_data_write),16);
        vcdp->fullBit(c+713,(vlTOPp->emif_emif_data_writeEnable));
        vcdp->fullBit(c+721,(vlTOPp->emif_emif_cs));
        vcdp->fullBit(c+729,(vlTOPp->emif_emif_we));
        vcdp->fullBit(c+737,(vlTOPp->emif_emif_oe));
        vcdp->fullBit(c+745,(vlTOPp->clk));
        vcdp->fullBit(c+753,(vlTOPp->reset));
        vcdp->fullBit(c+761,(vlTOPp->aurora_userclk));
        vcdp->fullBus(c+769,(((0x800000U & vlTOPp->emif_emif_addr)
                               ? (IData)(vlTOPp->EmifToAurora_test__DOT__area_emiftoapb__DOT___zz_emif_emif_data_write)
                               : (IData)(vlTOPp->EmifToAurora_test__DOT__area_emiftoapb__DOT___zz_emif_emif_data_write_1))),16);
        vcdp->fullBit(c+777,((1U & (~ (IData)(vlTOPp->emif_emif_oe)))));
        vcdp->fullBus(c+785,((0xfffffU & vlTOPp->emif_emif_addr)),20);
        vcdp->fullBit(c+793,((1U & (~ (IData)(vlTOPp->emif_emif_cs)))));
        vcdp->fullBus(c+801,((0xffU & vlTOPp->emif_emif_addr)),8);
        vcdp->fullBit(c+809,((((~ (IData)(vlTOPp->emif_emif_we)) 
                               & (IData)(vlTOPp->emif_emif_oe)) 
                              & (~ (vlTOPp->emif_emif_addr 
                                    >> 0x17U)))));
        vcdp->fullBit(c+817,((1U & (vlTOPp->emif_emif_addr 
                                    >> 0x17U))));
        vcdp->fullBit(c+825,(1U));
        vcdp->fullBit(c+833,(0U));
        vcdp->fullBit(c+841,(1U));
        vcdp->fullBit(c+849,(0U));
        vcdp->fullBus(c+857,(0U),4);
        vcdp->fullBus(c+865,(0U),32);
        vcdp->fullBus(c+873,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroraTxBlockRam__DOT__i),9);
        vcdp->fullBus(c+881,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroraRxBlockRam__DOT__i),9);
    }
}
