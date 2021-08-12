// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAuroraTxCore__Syms.h"


//======================

void VAuroraTxCore::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VAuroraTxCore::traceInit, &VAuroraTxCore::traceFull, &VAuroraTxCore::traceChg, this);
}
void VAuroraTxCore::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VAuroraTxCore* t = (VAuroraTxCore*)userthis;
    VAuroraTxCore__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VAuroraTxCore::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VAuroraTxCore* t = (VAuroraTxCore*)userthis;
    VAuroraTxCore__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VAuroraTxCore::traceInitThis(VAuroraTxCore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAuroraTxCore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VAuroraTxCore::traceFullThis(VAuroraTxCore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAuroraTxCore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VAuroraTxCore::traceInitThis__1(VAuroraTxCore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAuroraTxCore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+257,"aurora_userclk", false,-1);
        vcdp->declBit(c+265,"reset", false,-1);
        vcdp->declBit(c+273,"axiw_valid", false,-1);
        vcdp->declBit(c+281,"axiw_ready", false,-1);
        vcdp->declBus(c+289,"axiw_payload_data", false,-1, 31,0);
        vcdp->declBit(c+297,"axiw_payload_last", false,-1);
        vcdp->declBus(c+305,"tx_head", false,-1, 31,0);
        vcdp->declBit(c+313,"tx_start", false,-1);
        vcdp->declBit(c+321,"tx_trigger", false,-1);
        vcdp->declBit(c+329,"bram_en", false,-1);
        vcdp->declBus(c+337,"bram_we", false,-1, 3,0);
        vcdp->declBus(c+345,"bram_addr", false,-1, 7,0);
        vcdp->declBus(c+353,"bram_wrdata", false,-1, 31,0);
        vcdp->declBus(c+361,"bram_rddata", false,-1, 31,0);
        vcdp->declBit(c+369,"bram_clkout", false,-1);
        vcdp->declBit(c+377,"bram_resetout", false,-1);
        vcdp->declBit(c+257,"AuroraTxCore aurora_userclk", false,-1);
        vcdp->declBit(c+265,"AuroraTxCore reset", false,-1);
        vcdp->declBit(c+273,"AuroraTxCore axiw_valid", false,-1);
        vcdp->declBit(c+281,"AuroraTxCore axiw_ready", false,-1);
        vcdp->declBus(c+289,"AuroraTxCore axiw_payload_data", false,-1, 31,0);
        vcdp->declBit(c+297,"AuroraTxCore axiw_payload_last", false,-1);
        vcdp->declBus(c+305,"AuroraTxCore tx_head", false,-1, 31,0);
        vcdp->declBit(c+313,"AuroraTxCore tx_start", false,-1);
        vcdp->declBit(c+321,"AuroraTxCore tx_trigger", false,-1);
        vcdp->declBit(c+329,"AuroraTxCore bram_en", false,-1);
        vcdp->declBus(c+337,"AuroraTxCore bram_we", false,-1, 3,0);
        vcdp->declBus(c+345,"AuroraTxCore bram_addr", false,-1, 7,0);
        vcdp->declBus(c+353,"AuroraTxCore bram_wrdata", false,-1, 31,0);
        vcdp->declBus(c+361,"AuroraTxCore bram_rddata", false,-1, 31,0);
        vcdp->declBit(c+369,"AuroraTxCore bram_clkout", false,-1);
        vcdp->declBit(c+377,"AuroraTxCore bram_resetout", false,-1);
        vcdp->declBus(c+1,"AuroraTxCore crc32_1_crc_o", false,-1, 31,0);
        vcdp->declBit(c+9,"AuroraTxCore auroraTxArea_axi_last_2", false,-1);
        vcdp->declBit(c+17,"AuroraTxCore auroraTxArea_axi_last_1", false,-1);
        vcdp->declBus(c+25,"AuroraTxCore auroraTxArea_axi_txdata_7", false,-1, 31,0);
        vcdp->declBus(c+33,"AuroraTxCore auroraTxArea_axi_txdata_6", false,-1, 31,0);
        vcdp->declBus(c+41,"AuroraTxCore auroraTxArea_axi_txdata_5", false,-1, 31,0);
        vcdp->declBus(c+49,"AuroraTxCore auroraTxArea_axi_txdata_4", false,-1, 31,0);
        vcdp->declBus(c+57,"AuroraTxCore auroraTxArea_axi_txdata_3", false,-1, 31,0);
        vcdp->declBus(c+89,"AuroraTxCore auroraTxArea_axi_txdata_2", false,-1, 31,0);
        vcdp->declBus(c+97,"AuroraTxCore auroraTxArea_axi_txdata_1", false,-1, 31,0);
        vcdp->declBus(c+417,"AuroraTxCore auroraTxArea_axi_txdata", false,-1, 31,0);
        vcdp->declBit(c+137,"AuroraTxCore auroraTxArea_axi_last", false,-1);
        vcdp->declBus(c+161,"AuroraTxCore auroraTxArea_axi_txhead", false,-1, 31,0);
        vcdp->declBus(c+169,"AuroraTxCore auroraTxArea_length", false,-1, 7,0);
        vcdp->declBit(c+145,"AuroraTxCore auroraTxArea_mem_rden", false,-1);
        vcdp->declBus(c+121,"AuroraTxCore auroraTxArea_mem_data", false,-1, 31,0);
        vcdp->declBus(c+153,"AuroraTxCore auroraTxArea_mem_addrtemp", false,-1, 7,0);
        vcdp->declBus(c+129,"AuroraTxCore auroraTxArea_crc_data", false,-1, 31,0);
        vcdp->declBus(c+177,"AuroraTxCore auroraTxArea_data_cnt", false,-1, 7,0);
        vcdp->declBus(c+201,"AuroraTxCore auroraTxArea_stateMachine_state", false,-1, 2,0);
        vcdp->declBit(c+385,"AuroraTxCore when_Gtx_Tx_l66", false,-1);
        vcdp->declBit(c+393,"AuroraTxCore when_Gtx_Tx_l68", false,-1);
        vcdp->declBit(c+65,"AuroraTxCore axiw_fire", false,-1);
        vcdp->declBit(c+185,"AuroraTxCore when_Gtx_Tx_l81", false,-1);
        vcdp->declBit(c+401,"AuroraTxCore axiw_fire_1", false,-1);
        vcdp->declBit(c+65,"AuroraTxCore axiw_fire_2", false,-1);
        vcdp->declBit(c+65,"AuroraTxCore axiw_fire_3", false,-1);
        vcdp->declBit(c+193,"AuroraTxCore when_Gtx_Tx_l104", false,-1);
        vcdp->declBit(c+401,"AuroraTxCore axiw_fire_4", false,-1);
        vcdp->declBit(c+401,"AuroraTxCore axiw_fire_5", false,-1);
        vcdp->declBit(c+209,"AuroraTxCore when_Gtx_Tx_l124", false,-1);
        vcdp->declBit(c+217,"AuroraTxCore when_Gtx_Tx_l126", false,-1);
        vcdp->declBit(c+225,"AuroraTxCore when_Gtx_Tx_l128", false,-1);
        vcdp->declBit(c+233,"AuroraTxCore when_Gtx_Tx_l130", false,-1);
        vcdp->declBit(c+241,"AuroraTxCore when_Gtx_Tx_l132", false,-1);
        vcdp->declBit(c+249,"AuroraTxCore when_Gtx_Tx_l134", false,-1);
        vcdp->declBit(c+401,"AuroraTxCore axiw_fire_6", false,-1);
        vcdp->declBit(c+73,"AuroraTxCore when_Gtx_Tx_l140", false,-1);
        vcdp->declBit(c+209,"AuroraTxCore when_Gtx_Tx_l146", false,-1);
        vcdp->declBit(c+401,"AuroraTxCore axiw_fire_7", false,-1);
        vcdp->declBit(c+409,"AuroraTxCore when_Gtx_Tx_l148", false,-1);
        vcdp->declBit(c+401,"AuroraTxCore axiw_fire_8", false,-1);
        vcdp->declBus(c+81,"AuroraTxCore auroraTxArea_mem_addr", false,-1, 7,0);
        vcdp->declQuad(c+105,"AuroraTxCore auroraTxArea_stateMachine_state_string", false,-1, 63,0);
        vcdp->declBus(c+129,"AuroraTxCore crc32_1 crc_i", false,-1, 31,0);
        vcdp->declBus(c+25,"AuroraTxCore crc32_1 data_i", false,-1, 31,0);
        vcdp->declBus(c+1,"AuroraTxCore crc32_1 crc_o", false,-1, 31,0);
    }
}

void VAuroraTxCore::traceFullThis__1(VAuroraTxCore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAuroraTxCore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBus(c+1,(vlTOPp->AuroraTxCore__DOT__crc32_1_crc_o),32);
        vcdp->fullBit(c+9,(vlTOPp->AuroraTxCore__DOT__auroraTxArea_axi_last_2));
        vcdp->fullBit(c+17,(vlTOPp->AuroraTxCore__DOT__auroraTxArea_axi_last_1));
        vcdp->fullBus(c+25,(vlTOPp->AuroraTxCore__DOT__auroraTxArea_axi_txdata_7),32);
        vcdp->fullBus(c+33,(vlTOPp->AuroraTxCore__DOT__auroraTxArea_axi_txdata_6),32);
        vcdp->fullBus(c+41,(vlTOPp->AuroraTxCore__DOT__auroraTxArea_axi_txdata_5),32);
        vcdp->fullBus(c+49,(vlTOPp->AuroraTxCore__DOT__auroraTxArea_axi_txdata_4),32);
        vcdp->fullBus(c+57,(vlTOPp->AuroraTxCore__DOT__auroraTxArea_axi_txdata_3),32);
        vcdp->fullBit(c+65,(vlTOPp->AuroraTxCore__DOT__axiw_fire_3));
        vcdp->fullBit(c+73,(vlTOPp->AuroraTxCore__DOT__when_Gtx_Tx_l140));
        vcdp->fullBus(c+81,(vlTOPp->AuroraTxCore__DOT__auroraTxArea_mem_addr),8);
        vcdp->fullBus(c+89,(vlTOPp->AuroraTxCore__DOT__auroraTxArea_axi_txdata_2),32);
        vcdp->fullBus(c+97,(vlTOPp->AuroraTxCore__DOT__auroraTxArea_axi_txdata_1),32);
        vcdp->fullQuad(c+105,(vlTOPp->AuroraTxCore__DOT__auroraTxArea_stateMachine_state_string),64);
        vcdp->fullBus(c+121,(vlTOPp->AuroraTxCore__DOT___zz_auroraTxArea_mem_port0),32);
        vcdp->fullBus(c+129,(vlTOPp->AuroraTxCore__DOT__auroraTxArea_crc_data),32);
        vcdp->fullBit(c+137,(vlTOPp->AuroraTxCore__DOT__auroraTxArea_axi_last));
        vcdp->fullBit(c+145,(vlTOPp->AuroraTxCore__DOT__auroraTxArea_mem_rden));
        vcdp->fullBus(c+153,(vlTOPp->AuroraTxCore__DOT__auroraTxArea_mem_addrtemp),8);
        vcdp->fullBus(c+161,(vlTOPp->AuroraTxCore__DOT__auroraTxArea_axi_txhead),32);
        vcdp->fullBus(c+169,(vlTOPp->AuroraTxCore__DOT__auroraTxArea_length),8);
        vcdp->fullBus(c+177,(vlTOPp->AuroraTxCore__DOT__auroraTxArea_data_cnt),8);
        vcdp->fullBit(c+185,((0U == (0xffU & (vlTOPp->AuroraTxCore__DOT__auroraTxArea_axi_txhead 
                                              >> 8U)))));
        vcdp->fullBit(c+193,(((IData)(vlTOPp->AuroraTxCore__DOT__auroraTxArea_data_cnt) 
                              < (0xffU & ((IData)(vlTOPp->AuroraTxCore__DOT__auroraTxArea_length) 
                                          - (IData)(1U))))));
        vcdp->fullBus(c+201,(vlTOPp->AuroraTxCore__DOT__auroraTxArea_stateMachine_state),3);
        vcdp->fullBit(c+209,((2U == (IData)(vlTOPp->AuroraTxCore__DOT__auroraTxArea_stateMachine_state))));
        vcdp->fullBit(c+217,((3U == (IData)(vlTOPp->AuroraTxCore__DOT__auroraTxArea_stateMachine_state))));
        vcdp->fullBit(c+225,((4U == (IData)(vlTOPp->AuroraTxCore__DOT__auroraTxArea_stateMachine_state))));
        vcdp->fullBit(c+233,((5U == (IData)(vlTOPp->AuroraTxCore__DOT__auroraTxArea_stateMachine_state))));
        vcdp->fullBit(c+241,((6U == (IData)(vlTOPp->AuroraTxCore__DOT__auroraTxArea_stateMachine_state))));
        vcdp->fullBit(c+249,((7U == (IData)(vlTOPp->AuroraTxCore__DOT__auroraTxArea_stateMachine_state))));
        vcdp->fullBit(c+257,(vlTOPp->aurora_userclk));
        vcdp->fullBit(c+265,(vlTOPp->reset));
        vcdp->fullBit(c+273,(vlTOPp->axiw_valid));
        vcdp->fullBit(c+281,(vlTOPp->axiw_ready));
        vcdp->fullBus(c+289,(vlTOPp->axiw_payload_data),32);
        vcdp->fullBit(c+297,(vlTOPp->axiw_payload_last));
        vcdp->fullBus(c+305,(vlTOPp->tx_head),32);
        vcdp->fullBit(c+313,(vlTOPp->tx_start));
        vcdp->fullBit(c+321,(vlTOPp->tx_trigger));
        vcdp->fullBit(c+329,(vlTOPp->bram_en));
        vcdp->fullBus(c+337,(vlTOPp->bram_we),4);
        vcdp->fullBus(c+345,(vlTOPp->bram_addr),8);
        vcdp->fullBus(c+353,(vlTOPp->bram_wrdata),32);
        vcdp->fullBus(c+361,(vlTOPp->bram_rddata),32);
        vcdp->fullBit(c+369,(vlTOPp->bram_clkout));
        vcdp->fullBit(c+377,(vlTOPp->bram_resetout));
        vcdp->fullBit(c+385,(((IData)(vlTOPp->tx_start) 
                              & (IData)(vlTOPp->axiw_ready))));
        vcdp->fullBit(c+393,(((IData)(vlTOPp->tx_start) 
                              & (~ (IData)(vlTOPp->axiw_ready)))));
        vcdp->fullBit(c+401,(((IData)(vlTOPp->axiw_valid) 
                              & (IData)(vlTOPp->axiw_ready))));
        vcdp->fullBit(c+409,(((((3U == (IData)(vlTOPp->AuroraTxCore__DOT__auroraTxArea_stateMachine_state)) 
                                | (4U == (IData)(vlTOPp->AuroraTxCore__DOT__auroraTxArea_stateMachine_state))) 
                               | (5U == (IData)(vlTOPp->AuroraTxCore__DOT__auroraTxArea_stateMachine_state))) 
                              & ((IData)(vlTOPp->axiw_valid) 
                                 & (IData)(vlTOPp->axiw_ready)))));
        vcdp->fullBus(c+417,(0U),32);
    }
}
