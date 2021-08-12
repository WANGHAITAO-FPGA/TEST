// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAuroraTop__Syms.h"


//======================

void VAuroraTop::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VAuroraTop::traceInit, &VAuroraTop::traceFull, &VAuroraTop::traceChg, this);
}
void VAuroraTop::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VAuroraTop* t = (VAuroraTop*)userthis;
    VAuroraTop__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VAuroraTop::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VAuroraTop* t = (VAuroraTop*)userthis;
    VAuroraTop__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VAuroraTop::traceInitThis(VAuroraTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAuroraTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VAuroraTop::traceFullThis(VAuroraTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAuroraTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VAuroraTop::traceInitThis__1(VAuroraTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAuroraTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+529,"apb_PADDR", false,-1, 19,0);
        vcdp->declBus(c+537,"apb_PSEL", false,-1, 0,0);
        vcdp->declBit(c+545,"apb_PENABLE", false,-1);
        vcdp->declBit(c+553,"apb_PREADY", false,-1);
        vcdp->declBit(c+561,"apb_PWRITE", false,-1);
        vcdp->declBus(c+569,"apb_PWDATA", false,-1, 31,0);
        vcdp->declBus(c+577,"apb_PRDATA", false,-1, 31,0);
        vcdp->declBit(c+585,"apb_PSLVERROR", false,-1);
        vcdp->declBit(c+593,"tx_bram_en", false,-1);
        vcdp->declBus(c+601,"tx_bram_we", false,-1, 3,0);
        vcdp->declBus(c+609,"tx_bram_addr", false,-1, 7,0);
        vcdp->declBus(c+617,"tx_bram_wrdata", false,-1, 31,0);
        vcdp->declBus(c+625,"tx_bram_rddata", false,-1, 31,0);
        vcdp->declBit(c+633,"rx_bram_en", false,-1);
        vcdp->declBus(c+641,"rx_bram_we", false,-1, 3,0);
        vcdp->declBus(c+649,"rx_bram_addr", false,-1, 7,0);
        vcdp->declBus(c+657,"rx_bram_wrdata", false,-1, 31,0);
        vcdp->declBus(c+665,"rx_bram_rddata", false,-1, 31,0);
        vcdp->declBit(c+673,"clk", false,-1);
        vcdp->declBit(c+681,"reset", false,-1);
        vcdp->declBit(c+689,"aurora_userclk", false,-1);
        vcdp->declBus(c+529,"AuroraTop apb_PADDR", false,-1, 19,0);
        vcdp->declBus(c+537,"AuroraTop apb_PSEL", false,-1, 0,0);
        vcdp->declBit(c+545,"AuroraTop apb_PENABLE", false,-1);
        vcdp->declBit(c+553,"AuroraTop apb_PREADY", false,-1);
        vcdp->declBit(c+561,"AuroraTop apb_PWRITE", false,-1);
        vcdp->declBus(c+569,"AuroraTop apb_PWDATA", false,-1, 31,0);
        vcdp->declBus(c+577,"AuroraTop apb_PRDATA", false,-1, 31,0);
        vcdp->declBit(c+585,"AuroraTop apb_PSLVERROR", false,-1);
        vcdp->declBit(c+593,"AuroraTop tx_bram_en", false,-1);
        vcdp->declBus(c+601,"AuroraTop tx_bram_we", false,-1, 3,0);
        vcdp->declBus(c+609,"AuroraTop tx_bram_addr", false,-1, 7,0);
        vcdp->declBus(c+617,"AuroraTop tx_bram_wrdata", false,-1, 31,0);
        vcdp->declBus(c+625,"AuroraTop tx_bram_rddata", false,-1, 31,0);
        vcdp->declBit(c+633,"AuroraTop rx_bram_en", false,-1);
        vcdp->declBus(c+641,"AuroraTop rx_bram_we", false,-1, 3,0);
        vcdp->declBus(c+649,"AuroraTop rx_bram_addr", false,-1, 7,0);
        vcdp->declBus(c+657,"AuroraTop rx_bram_wrdata", false,-1, 31,0);
        vcdp->declBus(c+665,"AuroraTop rx_bram_rddata", false,-1, 31,0);
        vcdp->declBit(c+673,"AuroraTop clk", false,-1);
        vcdp->declBit(c+681,"AuroraTop reset", false,-1);
        vcdp->declBit(c+689,"AuroraTop aurora_userclk", false,-1);
        vcdp->declBit(c+425,"AuroraTop auroraArea_auroratxcore_tx_start", false,-1);
        vcdp->declBit(c+433,"AuroraTop auroraArea_auroratxcore_tx_trigger", false,-1);
        vcdp->declBit(c+713,"AuroraTop auroraArea_aurorarxcore_axir_ready", false,-1);
        vcdp->declBit(c+305,"AuroraTop auroraArea_aurorarxcore_bram_en", false,-1);
        vcdp->declBus(c+313,"AuroraTop auroraArea_aurorarxcore_bram_we", false,-1, 3,0);
        vcdp->declBus(c+321,"AuroraTop auroraArea_aurorarxcore_bram_addr", false,-1, 7,0);
        vcdp->declBus(c+145,"AuroraTop auroraArea_aurorarxcore_bram_wrdata", false,-1, 31,0);
        vcdp->declBit(c+689,"AuroraTop auroraArea_aurorarxcore_bram_clkout", false,-1);
        vcdp->declBit(c+681,"AuroraTop auroraArea_aurorarxcore_bram_resetout", false,-1);
        vcdp->declBit(c+233,"AuroraTop auroraArea_aurorarxcore_intrrupt", false,-1);
        vcdp->declBit(c+449,"AuroraTop auroraArea_auroratxcore_axiw_valid", false,-1);
        vcdp->declBus(c+145,"AuroraTop auroraArea_auroratxcore_axiw_payload_data", false,-1, 31,0);
        vcdp->declBit(c+41,"AuroraTop auroraArea_auroratxcore_axiw_payload_last", false,-1);
        vcdp->declBit(c+329,"AuroraTop auroraArea_auroratxcore_bram_en", false,-1);
        vcdp->declBus(c+721,"AuroraTop auroraArea_auroratxcore_bram_we", false,-1, 3,0);
        vcdp->declBus(c+369,"AuroraTop auroraArea_auroratxcore_bram_addr", false,-1, 7,0);
        vcdp->declBus(c+729,"AuroraTop auroraArea_auroratxcore_bram_wrdata", false,-1, 31,0);
        vcdp->declBit(c+689,"AuroraTop auroraArea_auroratxcore_bram_clkout", false,-1);
        vcdp->declBit(c+681,"AuroraTop auroraArea_auroratxcore_bram_resetout", false,-1);
        vcdp->declBus(c+257,"AuroraTop auroraArea_auroraTxBlockRam_ioA_rddata", false,-1, 31,0);
        vcdp->declBus(c+217,"AuroraTop auroraArea_auroraTxBlockRam_ioB_rddata", false,-1, 31,0);
        vcdp->declBus(c+225,"AuroraTop auroraArea_auroraRxBlockRam_ioA_rddata", false,-1, 31,0);
        vcdp->declBus(c+265,"AuroraTop auroraArea_auroraRxBlockRam_ioB_rddata", false,-1, 31,0);
        vcdp->declBus(c+521,"AuroraTop toparea_tx_headtemp", false,-1, 31,0);
        vcdp->declBus(c+441,"AuroraTop toparea_tx_ctrl", false,-1, 31,0);
        vcdp->declBit(c+697,"AuroraTop toparea_ctrl_askWrite", false,-1);
        vcdp->declBit(c+705,"AuroraTop toparea_ctrl_askRead", false,-1);
        vcdp->declBit(c+137,"AuroraTop toparea_ctrl_doWrite", false,-1);
        vcdp->declBit(c+705,"AuroraTop toparea_ctrl_doRead", false,-1);
        vcdp->declBit(c+689,"AuroraTop auroraArea_aurorarxcore aurora_userclk", false,-1);
        vcdp->declBit(c+681,"AuroraTop auroraArea_aurorarxcore reset", false,-1);
        vcdp->declBit(c+449,"AuroraTop auroraArea_aurorarxcore axir_valid", false,-1);
        vcdp->declBit(c+713,"AuroraTop auroraArea_aurorarxcore axir_ready", false,-1);
        vcdp->declBus(c+145,"AuroraTop auroraArea_aurorarxcore axir_payload_data", false,-1, 31,0);
        vcdp->declBit(c+41,"AuroraTop auroraArea_aurorarxcore axir_payload_last", false,-1);
        vcdp->declBit(c+305,"AuroraTop auroraArea_aurorarxcore bram_en", false,-1);
        vcdp->declBus(c+313,"AuroraTop auroraArea_aurorarxcore bram_we", false,-1, 3,0);
        vcdp->declBus(c+321,"AuroraTop auroraArea_aurorarxcore bram_addr", false,-1, 7,0);
        vcdp->declBus(c+145,"AuroraTop auroraArea_aurorarxcore bram_wrdata", false,-1, 31,0);
        vcdp->declBus(c+265,"AuroraTop auroraArea_aurorarxcore bram_rddata", false,-1, 31,0);
        vcdp->declBit(c+689,"AuroraTop auroraArea_aurorarxcore bram_clkout", false,-1);
        vcdp->declBit(c+681,"AuroraTop auroraArea_aurorarxcore bram_resetout", false,-1);
        vcdp->declBit(c+233,"AuroraTop auroraArea_aurorarxcore intrrupt", false,-1);
        vcdp->declBus(c+153,"AuroraTop auroraArea_aurorarxcore crc32_2_crc_o", false,-1, 31,0);
        vcdp->declBit(c+305,"AuroraTop auroraArea_aurorarxcore auroraRxArea_mem_wren", false,-1);
        vcdp->declBus(c+321,"AuroraTop auroraArea_aurorarxcore auroraRxArea_mem_addr", false,-1, 7,0);
        vcdp->declBus(c+241,"AuroraTop auroraArea_aurorarxcore auroraRxArea_mem_data", false,-1, 31,0);
        vcdp->declBus(c+313,"AuroraTop auroraArea_aurorarxcore auroraRxArea_mem_wrwe", false,-1, 3,0);
        vcdp->declBus(c+273,"AuroraTop auroraArea_aurorarxcore auroraRxArea_length", false,-1, 7,0);
        vcdp->declBus(c+281,"AuroraTop auroraArea_aurorarxcore auroraRxArea_data_cnt", false,-1, 7,0);
        vcdp->declBus(c+289,"AuroraTop auroraArea_aurorarxcore auroraRxArea_crc_data", false,-1, 31,0);
        vcdp->declBit(c+249,"AuroraTop auroraArea_aurorarxcore auroraRxArea_crc_status", false,-1);
        vcdp->declBit(c+233,"AuroraTop auroraArea_aurorarxcore auroraRxArea_aurora_intrrupt", false,-1);
        vcdp->declBus(c+337,"AuroraTop auroraArea_aurorarxcore auroraRxArea_stateMachine_state", false,-1, 2,0);
        vcdp->declBit(c+449,"AuroraTop auroraArea_aurorarxcore axir_fire", false,-1);
        vcdp->declBit(c+129,"AuroraTop auroraArea_aurorarxcore when_Gtx_Rx_l47", false,-1);
        vcdp->declBit(c+449,"AuroraTop auroraArea_aurorarxcore axir_fire_1", false,-1);
        vcdp->declBit(c+161,"AuroraTop auroraArea_aurorarxcore when_Gtx_Rx_l54", false,-1);
        vcdp->declBit(c+449,"AuroraTop auroraArea_aurorarxcore axir_fire_2", false,-1);
        vcdp->declBit(c+449,"AuroraTop auroraArea_aurorarxcore axir_fire_3", false,-1);
        vcdp->declBit(c+9,"AuroraTop auroraArea_aurorarxcore when_Gtx_Rx_l70", false,-1);
        vcdp->declBit(c+449,"AuroraTop auroraArea_aurorarxcore axir_fire_4", false,-1);
        vcdp->declBit(c+17,"AuroraTop auroraArea_aurorarxcore when_Gtx_Rx_l79", false,-1);
        vcdp->declBit(c+449,"AuroraTop auroraArea_aurorarxcore axir_fire_5", false,-1);
        vcdp->declBit(c+49,"AuroraTop auroraArea_aurorarxcore when_Gtx_Rx_l88", false,-1);
        vcdp->declBit(c+1,"AuroraTop auroraArea_aurorarxcore when_Gtx_Rx_l89", false,-1);
        vcdp->declBit(c+345,"AuroraTop auroraArea_aurorarxcore when_Gtx_Rx_l98", false,-1);
        vcdp->declBit(c+449,"AuroraTop auroraArea_aurorarxcore axir_fire_6", false,-1);
        vcdp->declBit(c+377,"AuroraTop auroraArea_aurorarxcore when_Gtx_Rx_l100", false,-1);
        vcdp->declBit(c+449,"AuroraTop auroraArea_aurorarxcore axir_fire_7", false,-1);
        vcdp->declBit(c+57,"AuroraTop auroraArea_aurorarxcore when_Gtx_Rx_l106", false,-1);
        vcdp->declBit(c+169,"AuroraTop auroraArea_aurorarxcore when_Gtx_Rx_l113", false,-1);
        vcdp->declBit(c+449,"AuroraTop auroraArea_aurorarxcore axir_fire_8", false,-1);
        vcdp->declBit(c+65,"AuroraTop auroraArea_aurorarxcore when_Gtx_Rx_l111", false,-1);
        vcdp->declBit(c+449,"AuroraTop auroraArea_aurorarxcore axir_fire_9", false,-1);
        vcdp->declBit(c+73,"AuroraTop auroraArea_aurorarxcore when_Gtx_Rx_l120", false,-1);
        vcdp->declQuad(c+25,"AuroraTop auroraArea_aurorarxcore auroraRxArea_stateMachine_state_string", false,-1, 63,0);
        vcdp->declBus(c+289,"AuroraTop auroraArea_aurorarxcore crc32_2 crc_i", false,-1, 31,0);
        vcdp->declBus(c+145,"AuroraTop auroraArea_aurorarxcore crc32_2 data_i", false,-1, 31,0);
        vcdp->declBus(c+153,"AuroraTop auroraArea_aurorarxcore crc32_2 crc_o", false,-1, 31,0);
        vcdp->declBit(c+689,"AuroraTop auroraArea_auroratxcore aurora_userclk", false,-1);
        vcdp->declBit(c+681,"AuroraTop auroraArea_auroratxcore reset", false,-1);
        vcdp->declBit(c+449,"AuroraTop auroraArea_auroratxcore axiw_valid", false,-1);
        vcdp->declBit(c+713,"AuroraTop auroraArea_auroratxcore axiw_ready", false,-1);
        vcdp->declBus(c+145,"AuroraTop auroraArea_auroratxcore axiw_payload_data", false,-1, 31,0);
        vcdp->declBit(c+41,"AuroraTop auroraArea_auroratxcore axiw_payload_last", false,-1);
        vcdp->declBus(c+521,"AuroraTop auroraArea_auroratxcore tx_head", false,-1, 31,0);
        vcdp->declBit(c+425,"AuroraTop auroraArea_auroratxcore tx_start", false,-1);
        vcdp->declBit(c+433,"AuroraTop auroraArea_auroratxcore tx_trigger", false,-1);
        vcdp->declBit(c+329,"AuroraTop auroraArea_auroratxcore bram_en", false,-1);
        vcdp->declBus(c+721,"AuroraTop auroraArea_auroratxcore bram_we", false,-1, 3,0);
        vcdp->declBus(c+369,"AuroraTop auroraArea_auroratxcore bram_addr", false,-1, 7,0);
        vcdp->declBus(c+729,"AuroraTop auroraArea_auroratxcore bram_wrdata", false,-1, 31,0);
        vcdp->declBus(c+257,"AuroraTop auroraArea_auroratxcore bram_rddata", false,-1, 31,0);
        vcdp->declBit(c+689,"AuroraTop auroraArea_auroratxcore bram_clkout", false,-1);
        vcdp->declBit(c+681,"AuroraTop auroraArea_auroratxcore bram_resetout", false,-1);
        vcdp->declBus(c+177,"AuroraTop auroraArea_auroratxcore crc32_2_crc_o", false,-1, 31,0);
        vcdp->declBit(c+41,"AuroraTop auroraArea_auroratxcore auroraTxArea_axi_last_2", false,-1);
        vcdp->declBit(c+81,"AuroraTop auroraArea_auroratxcore auroraTxArea_axi_last_1", false,-1);
        vcdp->declBus(c+145,"AuroraTop auroraArea_auroratxcore auroraTxArea_axi_txdata_7", false,-1, 31,0);
        vcdp->declBus(c+185,"AuroraTop auroraArea_auroratxcore auroraTxArea_axi_txdata_6", false,-1, 31,0);
        vcdp->declBus(c+193,"AuroraTop auroraArea_auroratxcore auroraTxArea_axi_txdata_5", false,-1, 31,0);
        vcdp->declBus(c+201,"AuroraTop auroraArea_auroratxcore auroraTxArea_axi_txdata_4", false,-1, 31,0);
        vcdp->declBus(c+209,"AuroraTop auroraArea_auroratxcore auroraTxArea_axi_txdata_3", false,-1, 31,0);
        vcdp->declBus(c+89,"AuroraTop auroraArea_auroratxcore auroraTxArea_axi_txdata_2", false,-1, 31,0);
        vcdp->declBus(c+97,"AuroraTop auroraArea_auroratxcore auroraTxArea_axi_txdata_1", false,-1, 31,0);
        vcdp->declBus(c+729,"AuroraTop auroraArea_auroratxcore auroraTxArea_axi_txdata", false,-1, 31,0);
        vcdp->declBit(c+353,"AuroraTop auroraArea_auroratxcore auroraTxArea_axi_last", false,-1);
        vcdp->declBus(c+385,"AuroraTop auroraArea_auroratxcore auroraTxArea_axi_txhead", false,-1, 31,0);
        vcdp->declBus(c+393,"AuroraTop auroraArea_auroratxcore auroraTxArea_length", false,-1, 7,0);
        vcdp->declBit(c+329,"AuroraTop auroraArea_auroratxcore auroraTxArea_mem_rden", false,-1);
        vcdp->declBus(c+257,"AuroraTop auroraArea_auroratxcore auroraTxArea_mem_data", false,-1, 31,0);
        vcdp->declBus(c+361,"AuroraTop auroraArea_auroratxcore auroraTxArea_mem_addrtemp", false,-1, 7,0);
        vcdp->declBus(c+297,"AuroraTop auroraArea_auroratxcore auroraTxArea_crc_data", false,-1, 31,0);
        vcdp->declBus(c+401,"AuroraTop auroraArea_auroratxcore auroraTxArea_data_cnt", false,-1, 7,0);
        vcdp->declBus(c+457,"AuroraTop auroraArea_auroratxcore auroraTxArea_stateMachine_state", false,-1, 2,0);
        vcdp->declBit(c+425,"AuroraTop auroraArea_auroratxcore when_Gtx_Tx_l66", false,-1);
        vcdp->declBit(c+737,"AuroraTop auroraArea_auroratxcore when_Gtx_Tx_l68", false,-1);
        vcdp->declBit(c+449,"AuroraTop auroraArea_auroratxcore axiw_fire", false,-1);
        vcdp->declBit(c+409,"AuroraTop auroraArea_auroratxcore when_Gtx_Tx_l81", false,-1);
        vcdp->declBit(c+449,"AuroraTop auroraArea_auroratxcore axiw_fire_1", false,-1);
        vcdp->declBit(c+449,"AuroraTop auroraArea_auroratxcore axiw_fire_2", false,-1);
        vcdp->declBit(c+449,"AuroraTop auroraArea_auroratxcore axiw_fire_3", false,-1);
        vcdp->declBit(c+417,"AuroraTop auroraArea_auroratxcore when_Gtx_Tx_l104", false,-1);
        vcdp->declBit(c+449,"AuroraTop auroraArea_auroratxcore axiw_fire_4", false,-1);
        vcdp->declBit(c+449,"AuroraTop auroraArea_auroratxcore axiw_fire_5", false,-1);
        vcdp->declBit(c+465,"AuroraTop auroraArea_auroratxcore when_Gtx_Tx_l124", false,-1);
        vcdp->declBit(c+473,"AuroraTop auroraArea_auroratxcore when_Gtx_Tx_l126", false,-1);
        vcdp->declBit(c+481,"AuroraTop auroraArea_auroratxcore when_Gtx_Tx_l128", false,-1);
        vcdp->declBit(c+489,"AuroraTop auroraArea_auroratxcore when_Gtx_Tx_l130", false,-1);
        vcdp->declBit(c+497,"AuroraTop auroraArea_auroratxcore when_Gtx_Tx_l132", false,-1);
        vcdp->declBit(c+505,"AuroraTop auroraArea_auroratxcore when_Gtx_Tx_l134", false,-1);
        vcdp->declBit(c+449,"AuroraTop auroraArea_auroratxcore axiw_fire_6", false,-1);
        vcdp->declBit(c+105,"AuroraTop auroraArea_auroratxcore when_Gtx_Tx_l140", false,-1);
        vcdp->declBit(c+465,"AuroraTop auroraArea_auroratxcore when_Gtx_Tx_l146", false,-1);
        vcdp->declBit(c+449,"AuroraTop auroraArea_auroratxcore axiw_fire_7", false,-1);
        vcdp->declBit(c+513,"AuroraTop auroraArea_auroratxcore when_Gtx_Tx_l148", false,-1);
        vcdp->declBit(c+449,"AuroraTop auroraArea_auroratxcore axiw_fire_8", false,-1);
        vcdp->declBus(c+369,"AuroraTop auroraArea_auroratxcore auroraTxArea_mem_addr", false,-1, 7,0);
        vcdp->declQuad(c+113,"AuroraTop auroraArea_auroratxcore auroraTxArea_stateMachine_state_string", false,-1, 63,0);
        vcdp->declBus(c+297,"AuroraTop auroraArea_auroratxcore crc32_2 crc_i", false,-1, 31,0);
        vcdp->declBus(c+145,"AuroraTop auroraArea_auroratxcore crc32_2 data_i", false,-1, 31,0);
        vcdp->declBus(c+177,"AuroraTop auroraArea_auroratxcore crc32_2 crc_o", false,-1, 31,0);
        vcdp->declBit(c+329,"AuroraTop auroraArea_auroraTxBlockRam ioA_en", false,-1);
        vcdp->declBus(c+721,"AuroraTop auroraArea_auroraTxBlockRam ioA_we", false,-1, 3,0);
        vcdp->declBus(c+369,"AuroraTop auroraArea_auroraTxBlockRam ioA_addr", false,-1, 7,0);
        vcdp->declBus(c+729,"AuroraTop auroraArea_auroraTxBlockRam ioA_wrdata", false,-1, 31,0);
        vcdp->declBus(c+257,"AuroraTop auroraArea_auroraTxBlockRam ioA_rddata", false,-1, 31,0);
        vcdp->declBit(c+593,"AuroraTop auroraArea_auroraTxBlockRam ioB_en", false,-1);
        vcdp->declBus(c+601,"AuroraTop auroraArea_auroraTxBlockRam ioB_we", false,-1, 3,0);
        vcdp->declBus(c+609,"AuroraTop auroraArea_auroraTxBlockRam ioB_addr", false,-1, 7,0);
        vcdp->declBus(c+617,"AuroraTop auroraArea_auroraTxBlockRam ioB_wrdata", false,-1, 31,0);
        vcdp->declBus(c+217,"AuroraTop auroraArea_auroraTxBlockRam ioB_rddata", false,-1, 31,0);
        vcdp->declBit(c+689,"AuroraTop auroraArea_auroraTxBlockRam clka", false,-1);
        vcdp->declBit(c+673,"AuroraTop auroraArea_auroraTxBlockRam clkb", false,-1);
        vcdp->declBit(c+681,"AuroraTop auroraArea_auroraTxBlockRam reseta", false,-1);
        vcdp->declBit(c+681,"AuroraTop auroraArea_auroraTxBlockRam resetb", false,-1);
        vcdp->declBus(c+745,"AuroraTop auroraArea_auroraTxBlockRam i", false,-1, 8,0);
        vcdp->declBit(c+633,"AuroraTop auroraArea_auroraRxBlockRam ioA_en", false,-1);
        vcdp->declBus(c+641,"AuroraTop auroraArea_auroraRxBlockRam ioA_we", false,-1, 3,0);
        vcdp->declBus(c+649,"AuroraTop auroraArea_auroraRxBlockRam ioA_addr", false,-1, 7,0);
        vcdp->declBus(c+657,"AuroraTop auroraArea_auroraRxBlockRam ioA_wrdata", false,-1, 31,0);
        vcdp->declBus(c+225,"AuroraTop auroraArea_auroraRxBlockRam ioA_rddata", false,-1, 31,0);
        vcdp->declBit(c+305,"AuroraTop auroraArea_auroraRxBlockRam ioB_en", false,-1);
        vcdp->declBus(c+313,"AuroraTop auroraArea_auroraRxBlockRam ioB_we", false,-1, 3,0);
        vcdp->declBus(c+321,"AuroraTop auroraArea_auroraRxBlockRam ioB_addr", false,-1, 7,0);
        vcdp->declBus(c+145,"AuroraTop auroraArea_auroraRxBlockRam ioB_wrdata", false,-1, 31,0);
        vcdp->declBus(c+265,"AuroraTop auroraArea_auroraRxBlockRam ioB_rddata", false,-1, 31,0);
        vcdp->declBit(c+673,"AuroraTop auroraArea_auroraRxBlockRam clka", false,-1);
        vcdp->declBit(c+689,"AuroraTop auroraArea_auroraRxBlockRam clkb", false,-1);
        vcdp->declBit(c+681,"AuroraTop auroraArea_auroraRxBlockRam reseta", false,-1);
        vcdp->declBit(c+681,"AuroraTop auroraArea_auroraRxBlockRam resetb", false,-1);
        vcdp->declBus(c+753,"AuroraTop auroraArea_auroraRxBlockRam i", false,-1, 8,0);
    }
}

void VAuroraTop::traceFullThis__1(VAuroraTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAuroraTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(c+1,(((~ (IData)(vlTOPp->AuroraTop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_status)) 
                            & (0xffbdU == vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7))));
        vcdp->fullBit(c+9,(vlTOPp->AuroraTop__DOT__auroraArea_aurorarxcore__DOT__when_Gtx_Rx_l70));
        vcdp->fullBit(c+17,((vlTOPp->AuroraTop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                             != vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7)));
        vcdp->fullQuad(c+25,(vlTOPp->AuroraTop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state_string),64);
        vcdp->fullBit(c+41,(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_last_2));
        vcdp->fullBit(c+49,(((0U != (IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state)) 
                             & (IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_last_2))));
        vcdp->fullBit(c+57,(vlTOPp->AuroraTop__DOT__auroraArea_aurorarxcore__DOT__when_Gtx_Rx_l106));
        vcdp->fullBit(c+65,(vlTOPp->AuroraTop__DOT__auroraArea_aurorarxcore__DOT__when_Gtx_Rx_l111));
        vcdp->fullBit(c+73,(vlTOPp->AuroraTop__DOT__auroraArea_aurorarxcore__DOT__when_Gtx_Rx_l120));
        vcdp->fullBit(c+81,(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_last_1));
        vcdp->fullBus(c+89,(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_2),32);
        vcdp->fullBus(c+97,(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_1),32);
        vcdp->fullBit(c+105,(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__when_Gtx_Tx_l140));
        vcdp->fullQuad(c+113,(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state_string),64);
        vcdp->fullBit(c+129,(((0U != (IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state)) 
                              & (0xffbcU == vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7))));
        vcdp->fullBit(c+137,(vlTOPp->AuroraTop__DOT__toparea_ctrl_doWrite));
        vcdp->fullBus(c+145,(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7),32);
        vcdp->fullBus(c+153,(vlTOPp->AuroraTop__DOT__auroraArea_aurorarxcore__DOT__crc32_2_crc_o),32);
        vcdp->fullBit(c+161,((1U == vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7)));
        vcdp->fullBit(c+169,((0U == (0xffU & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                              >> 8U)))));
        vcdp->fullBus(c+177,(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__crc32_2_crc_o),32);
        vcdp->fullBus(c+185,(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_6),32);
        vcdp->fullBus(c+193,(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_5),32);
        vcdp->fullBus(c+201,(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_4),32);
        vcdp->fullBus(c+209,(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_3),32);
        vcdp->fullBus(c+217,(vlTOPp->AuroraTop__DOT__auroraArea_auroraTxBlockRam__DOT___zz_bram_port1),32);
        vcdp->fullBus(c+225,(vlTOPp->AuroraTop__DOT__auroraArea_auroraRxBlockRam__DOT___zz_bram_port0),32);
        vcdp->fullBit(c+233,(vlTOPp->AuroraTop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_aurora_intrrupt));
        vcdp->fullBus(c+241,(vlTOPp->AuroraTop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_mem_data),32);
        vcdp->fullBit(c+249,(vlTOPp->AuroraTop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_status));
        vcdp->fullBus(c+257,(vlTOPp->AuroraTop__DOT__auroraArea_auroraTxBlockRam__DOT___zz_bram_port0),32);
        vcdp->fullBus(c+265,(vlTOPp->AuroraTop__DOT__auroraArea_auroraRxBlockRam__DOT___zz_bram_port1),32);
        vcdp->fullBus(c+273,(vlTOPp->AuroraTop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_length),8);
        vcdp->fullBus(c+281,(vlTOPp->AuroraTop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_data_cnt),8);
        vcdp->fullBus(c+289,(vlTOPp->AuroraTop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data),32);
        vcdp->fullBus(c+297,(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data),32);
        vcdp->fullBit(c+305,(vlTOPp->AuroraTop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_mem_wren));
        vcdp->fullBus(c+313,(vlTOPp->AuroraTop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_mem_wrwe),4);
        vcdp->fullBus(c+321,(vlTOPp->AuroraTop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_mem_addr),8);
        vcdp->fullBit(c+329,(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_mem_rden));
        vcdp->fullBus(c+337,(vlTOPp->AuroraTop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state),3);
        vcdp->fullBit(c+345,((0U == (IData)(vlTOPp->AuroraTop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state))));
        vcdp->fullBit(c+353,(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_last));
        vcdp->fullBus(c+361,(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_mem_addrtemp),8);
        vcdp->fullBus(c+369,((0xffU & ((0U != (IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))
                                        ? (IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_mem_addrtemp)
                                        : ((IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_mem_addrtemp) 
                                           - (IData)(1U))))),8);
        vcdp->fullBit(c+377,(((((3U == (IData)(vlTOPp->AuroraTop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state)) 
                                | (4U == (IData)(vlTOPp->AuroraTop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state))) 
                               | (5U == (IData)(vlTOPp->AuroraTop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state))) 
                              & (0U != (IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state)))));
        vcdp->fullBus(c+385,(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txhead),32);
        vcdp->fullBus(c+393,(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_length),8);
        vcdp->fullBus(c+401,(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_data_cnt),8);
        vcdp->fullBit(c+409,((0U == (0xffU & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txhead 
                                              >> 8U)))));
        vcdp->fullBit(c+417,(((IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_data_cnt) 
                              < (0xffU & ((IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_length) 
                                          - (IData)(1U))))));
        vcdp->fullBit(c+425,((1U & vlTOPp->AuroraTop__DOT__toparea_tx_ctrl)));
        vcdp->fullBit(c+433,((1U & (vlTOPp->AuroraTop__DOT__toparea_tx_ctrl 
                                    >> 4U))));
        vcdp->fullBus(c+441,(vlTOPp->AuroraTop__DOT__toparea_tx_ctrl),32);
        vcdp->fullBit(c+449,((0U != (IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))));
        vcdp->fullBus(c+457,(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state),3);
        vcdp->fullBit(c+465,((2U == (IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))));
        vcdp->fullBit(c+473,((3U == (IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))));
        vcdp->fullBit(c+481,((4U == (IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))));
        vcdp->fullBit(c+489,((5U == (IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))));
        vcdp->fullBit(c+497,((6U == (IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))));
        vcdp->fullBit(c+505,((7U == (IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))));
        vcdp->fullBit(c+513,(((((3U == (IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state)) 
                                | (4U == (IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) 
                               | (5U == (IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) 
                              & (0U != (IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state)))));
        vcdp->fullBus(c+521,(vlTOPp->AuroraTop__DOT__toparea_tx_headtemp),32);
        vcdp->fullBus(c+529,(vlTOPp->apb_PADDR),20);
        vcdp->fullBit(c+537,(vlTOPp->apb_PSEL));
        vcdp->fullBit(c+545,(vlTOPp->apb_PENABLE));
        vcdp->fullBit(c+553,(vlTOPp->apb_PREADY));
        vcdp->fullBit(c+561,(vlTOPp->apb_PWRITE));
        vcdp->fullBus(c+569,(vlTOPp->apb_PWDATA),32);
        vcdp->fullBus(c+577,(vlTOPp->apb_PRDATA),32);
        vcdp->fullBit(c+585,(vlTOPp->apb_PSLVERROR));
        vcdp->fullBit(c+593,(vlTOPp->tx_bram_en));
        vcdp->fullBus(c+601,(vlTOPp->tx_bram_we),4);
        vcdp->fullBus(c+609,(vlTOPp->tx_bram_addr),8);
        vcdp->fullBus(c+617,(vlTOPp->tx_bram_wrdata),32);
        vcdp->fullBus(c+625,(vlTOPp->tx_bram_rddata),32);
        vcdp->fullBit(c+633,(vlTOPp->rx_bram_en));
        vcdp->fullBus(c+641,(vlTOPp->rx_bram_we),4);
        vcdp->fullBus(c+649,(vlTOPp->rx_bram_addr),8);
        vcdp->fullBus(c+657,(vlTOPp->rx_bram_wrdata),32);
        vcdp->fullBus(c+665,(vlTOPp->rx_bram_rddata),32);
        vcdp->fullBit(c+673,(vlTOPp->clk));
        vcdp->fullBit(c+681,(vlTOPp->reset));
        vcdp->fullBit(c+689,(vlTOPp->aurora_userclk));
        vcdp->fullBit(c+697,((((IData)(vlTOPp->apb_PSEL) 
                               & (IData)(vlTOPp->apb_PENABLE)) 
                              & (IData)(vlTOPp->apb_PWRITE))));
        vcdp->fullBit(c+705,((((IData)(vlTOPp->apb_PSEL) 
                               & (IData)(vlTOPp->apb_PENABLE)) 
                              & (~ (IData)(vlTOPp->apb_PWRITE)))));
        vcdp->fullBit(c+713,(1U));
        vcdp->fullBus(c+721,(0U),4);
        vcdp->fullBus(c+729,(0U),32);
        vcdp->fullBit(c+737,(0U));
        vcdp->fullBus(c+745,(vlTOPp->AuroraTop__DOT__auroraArea_auroraTxBlockRam__DOT__i),9);
        vcdp->fullBus(c+753,(vlTOPp->AuroraTop__DOT__auroraArea_auroraRxBlockRam__DOT__i),9);
    }
}
