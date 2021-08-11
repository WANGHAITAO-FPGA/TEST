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
        vcdp->declBit(c+257,"axiw_valid", false,-1);
        vcdp->declBit(c+265,"axiw_ready", false,-1);
        vcdp->declBus(c+273,"axiw_payload_data", false,-1, 31,0);
        vcdp->declBit(c+281,"axiw_payload_last", false,-1);
        vcdp->declBus(c+289,"tx_head", false,-1, 31,0);
        vcdp->declBit(c+297,"tx_start", false,-1);
        vcdp->declBit(c+305,"tx_trigger", false,-1);
        vcdp->declBit(c+313,"bram_en", false,-1);
        vcdp->declBus(c+321,"bram_we", false,-1, 3,0);
        vcdp->declBus(c+329,"bram_addr", false,-1, 7,0);
        vcdp->declBus(c+337,"bram_wrdata", false,-1, 31,0);
        vcdp->declBus(c+345,"bram_rddata", false,-1, 31,0);
        vcdp->declBit(c+353,"clk", false,-1);
        vcdp->declBit(c+361,"reset", false,-1);
        vcdp->declBit(c+257,"AuroraTxCore axiw_valid", false,-1);
        vcdp->declBit(c+265,"AuroraTxCore axiw_ready", false,-1);
        vcdp->declBus(c+273,"AuroraTxCore axiw_payload_data", false,-1, 31,0);
        vcdp->declBit(c+281,"AuroraTxCore axiw_payload_last", false,-1);
        vcdp->declBus(c+289,"AuroraTxCore tx_head", false,-1, 31,0);
        vcdp->declBit(c+297,"AuroraTxCore tx_start", false,-1);
        vcdp->declBit(c+305,"AuroraTxCore tx_trigger", false,-1);
        vcdp->declBit(c+313,"AuroraTxCore bram_en", false,-1);
        vcdp->declBus(c+321,"AuroraTxCore bram_we", false,-1, 3,0);
        vcdp->declBus(c+329,"AuroraTxCore bram_addr", false,-1, 7,0);
        vcdp->declBus(c+337,"AuroraTxCore bram_wrdata", false,-1, 31,0);
        vcdp->declBus(c+345,"AuroraTxCore bram_rddata", false,-1, 31,0);
        vcdp->declBit(c+353,"AuroraTxCore clk", false,-1);
        vcdp->declBit(c+361,"AuroraTxCore reset", false,-1);
        vcdp->declBus(c+33,"AuroraTxCore crc32_1_crc_o", false,-1, 31,0);
        vcdp->declBit(c+41,"AuroraTxCore axi_last_2", false,-1);
        vcdp->declBit(c+49,"AuroraTxCore axi_last_1", false,-1);
        vcdp->declBus(c+57,"AuroraTxCore axi_txdata_7", false,-1, 31,0);
        vcdp->declBus(c+65,"AuroraTxCore axi_txdata_6", false,-1, 31,0);
        vcdp->declBus(c+73,"AuroraTxCore axi_txdata_5", false,-1, 31,0);
        vcdp->declBus(c+81,"AuroraTxCore axi_txdata_4", false,-1, 31,0);
        vcdp->declBus(c+89,"AuroraTxCore axi_txdata_3", false,-1, 31,0);
        vcdp->declBus(c+1,"AuroraTxCore axi_txdata_2", false,-1, 31,0);
        vcdp->declBus(c+9,"AuroraTxCore axi_txdata_1", false,-1, 31,0);
        vcdp->declBus(c+401,"AuroraTxCore axi_txdata", false,-1, 31,0);
        vcdp->declBit(c+137,"AuroraTxCore axi_last", false,-1);
        vcdp->declBit(c+409,"AuroraTxCore axi_valid", false,-1);
        vcdp->declBus(c+161,"AuroraTxCore axi_txhead", false,-1, 31,0);
        vcdp->declBus(c+169,"AuroraTxCore length", false,-1, 7,0);
        vcdp->declBit(c+145,"AuroraTxCore mem_rden", false,-1);
        vcdp->declBus(c+121,"AuroraTxCore mem_data", false,-1, 31,0);
        vcdp->declBus(c+153,"AuroraTxCore mem_addrtemp", false,-1, 7,0);
        vcdp->declBus(c+129,"AuroraTxCore crc_data", false,-1, 31,0);
        vcdp->declBus(c+177,"AuroraTxCore data_cnt", false,-1, 7,0);
        vcdp->declBus(c+201,"AuroraTxCore stateMachine_state", false,-1, 2,0);
        vcdp->declBit(c+369,"AuroraTxCore when_Gtx_Tx_l60", false,-1);
        vcdp->declBit(c+377,"AuroraTxCore when_Gtx_Tx_l62", false,-1);
        vcdp->declBit(c+97,"AuroraTxCore axiw_fire", false,-1);
        vcdp->declBit(c+185,"AuroraTxCore when_Gtx_Tx_l75", false,-1);
        vcdp->declBit(c+385,"AuroraTxCore axiw_fire_1", false,-1);
        vcdp->declBit(c+97,"AuroraTxCore axiw_fire_2", false,-1);
        vcdp->declBit(c+97,"AuroraTxCore axiw_fire_3", false,-1);
        vcdp->declBit(c+193,"AuroraTxCore when_Gtx_Tx_l98", false,-1);
        vcdp->declBit(c+385,"AuroraTxCore axiw_fire_4", false,-1);
        vcdp->declBit(c+385,"AuroraTxCore axiw_fire_5", false,-1);
        vcdp->declBit(c+209,"AuroraTxCore when_Gtx_Tx_l118", false,-1);
        vcdp->declBit(c+217,"AuroraTxCore when_Gtx_Tx_l120", false,-1);
        vcdp->declBit(c+225,"AuroraTxCore when_Gtx_Tx_l122", false,-1);
        vcdp->declBit(c+233,"AuroraTxCore when_Gtx_Tx_l124", false,-1);
        vcdp->declBit(c+241,"AuroraTxCore when_Gtx_Tx_l126", false,-1);
        vcdp->declBit(c+249,"AuroraTxCore when_Gtx_Tx_l128", false,-1);
        vcdp->declBit(c+385,"AuroraTxCore axiw_fire_6", false,-1);
        vcdp->declBit(c+105,"AuroraTxCore when_Gtx_Tx_l134", false,-1);
        vcdp->declBit(c+209,"AuroraTxCore when_Gtx_Tx_l140", false,-1);
        vcdp->declBit(c+385,"AuroraTxCore axiw_fire_7", false,-1);
        vcdp->declBit(c+393,"AuroraTxCore when_Gtx_Tx_l142", false,-1);
        vcdp->declBit(c+385,"AuroraTxCore axiw_fire_8", false,-1);
        vcdp->declBus(c+113,"AuroraTxCore mem_addr", false,-1, 7,0);
        vcdp->declQuad(c+17,"AuroraTxCore stateMachine_state_string", false,-1, 63,0);
        vcdp->declBus(c+129,"AuroraTxCore crc32_1 crc_i", false,-1, 31,0);
        vcdp->declBus(c+57,"AuroraTxCore crc32_1 data_i", false,-1, 31,0);
        vcdp->declBus(c+33,"AuroraTxCore crc32_1 crc_o", false,-1, 31,0);
    }
}

void VAuroraTxCore::traceFullThis__1(VAuroraTxCore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAuroraTxCore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBus(c+1,(vlTOPp->AuroraTxCore__DOT__axi_txdata_2),32);
        vcdp->fullBus(c+9,(vlTOPp->AuroraTxCore__DOT__axi_txdata_1),32);
        vcdp->fullQuad(c+17,(vlTOPp->AuroraTxCore__DOT__stateMachine_state_string),64);
        vcdp->fullBus(c+33,(vlTOPp->AuroraTxCore__DOT__crc32_1_crc_o),32);
        vcdp->fullBit(c+41,(vlTOPp->AuroraTxCore__DOT__axi_last_2));
        vcdp->fullBit(c+49,(vlTOPp->AuroraTxCore__DOT__axi_last_1));
        vcdp->fullBus(c+57,(vlTOPp->AuroraTxCore__DOT__axi_txdata_7),32);
        vcdp->fullBus(c+65,(vlTOPp->AuroraTxCore__DOT__axi_txdata_6),32);
        vcdp->fullBus(c+73,(vlTOPp->AuroraTxCore__DOT__axi_txdata_5),32);
        vcdp->fullBus(c+81,(vlTOPp->AuroraTxCore__DOT__axi_txdata_4),32);
        vcdp->fullBus(c+89,(vlTOPp->AuroraTxCore__DOT__axi_txdata_3),32);
        vcdp->fullBit(c+97,(vlTOPp->AuroraTxCore__DOT__axiw_fire_3));
        vcdp->fullBit(c+105,(vlTOPp->AuroraTxCore__DOT__when_Gtx_Tx_l134));
        vcdp->fullBus(c+113,(vlTOPp->AuroraTxCore__DOT__mem_addr),8);
        vcdp->fullBus(c+121,(vlTOPp->AuroraTxCore__DOT___zz_mem_port0),32);
        vcdp->fullBus(c+129,(vlTOPp->AuroraTxCore__DOT__crc_data),32);
        vcdp->fullBit(c+137,(vlTOPp->AuroraTxCore__DOT__axi_last));
        vcdp->fullBit(c+145,(vlTOPp->AuroraTxCore__DOT__mem_rden));
        vcdp->fullBus(c+153,(vlTOPp->AuroraTxCore__DOT__mem_addrtemp),8);
        vcdp->fullBus(c+161,(vlTOPp->AuroraTxCore__DOT__axi_txhead),32);
        vcdp->fullBus(c+169,(vlTOPp->AuroraTxCore__DOT__length),8);
        vcdp->fullBus(c+177,(vlTOPp->AuroraTxCore__DOT__data_cnt),8);
        vcdp->fullBit(c+185,((0U == (0xffU & (vlTOPp->AuroraTxCore__DOT__axi_txhead 
                                              >> 8U)))));
        vcdp->fullBit(c+193,(((IData)(vlTOPp->AuroraTxCore__DOT__data_cnt) 
                              < (0xffU & ((IData)(vlTOPp->AuroraTxCore__DOT__length) 
                                          - (IData)(1U))))));
        vcdp->fullBus(c+201,(vlTOPp->AuroraTxCore__DOT__stateMachine_state),3);
        vcdp->fullBit(c+209,((2U == (IData)(vlTOPp->AuroraTxCore__DOT__stateMachine_state))));
        vcdp->fullBit(c+217,((3U == (IData)(vlTOPp->AuroraTxCore__DOT__stateMachine_state))));
        vcdp->fullBit(c+225,((4U == (IData)(vlTOPp->AuroraTxCore__DOT__stateMachine_state))));
        vcdp->fullBit(c+233,((5U == (IData)(vlTOPp->AuroraTxCore__DOT__stateMachine_state))));
        vcdp->fullBit(c+241,((6U == (IData)(vlTOPp->AuroraTxCore__DOT__stateMachine_state))));
        vcdp->fullBit(c+249,((7U == (IData)(vlTOPp->AuroraTxCore__DOT__stateMachine_state))));
        vcdp->fullBit(c+257,(vlTOPp->axiw_valid));
        vcdp->fullBit(c+265,(vlTOPp->axiw_ready));
        vcdp->fullBus(c+273,(vlTOPp->axiw_payload_data),32);
        vcdp->fullBit(c+281,(vlTOPp->axiw_payload_last));
        vcdp->fullBus(c+289,(vlTOPp->tx_head),32);
        vcdp->fullBit(c+297,(vlTOPp->tx_start));
        vcdp->fullBit(c+305,(vlTOPp->tx_trigger));
        vcdp->fullBit(c+313,(vlTOPp->bram_en));
        vcdp->fullBus(c+321,(vlTOPp->bram_we),4);
        vcdp->fullBus(c+329,(vlTOPp->bram_addr),8);
        vcdp->fullBus(c+337,(vlTOPp->bram_wrdata),32);
        vcdp->fullBus(c+345,(vlTOPp->bram_rddata),32);
        vcdp->fullBit(c+353,(vlTOPp->clk));
        vcdp->fullBit(c+361,(vlTOPp->reset));
        vcdp->fullBit(c+369,(((IData)(vlTOPp->tx_start) 
                              & (IData)(vlTOPp->axiw_ready))));
        vcdp->fullBit(c+377,(((IData)(vlTOPp->tx_start) 
                              & (~ (IData)(vlTOPp->axiw_ready)))));
        vcdp->fullBit(c+385,(((IData)(vlTOPp->axiw_valid) 
                              & (IData)(vlTOPp->axiw_ready))));
        vcdp->fullBit(c+393,(((((3U == (IData)(vlTOPp->AuroraTxCore__DOT__stateMachine_state)) 
                                | (4U == (IData)(vlTOPp->AuroraTxCore__DOT__stateMachine_state))) 
                               | (5U == (IData)(vlTOPp->AuroraTxCore__DOT__stateMachine_state))) 
                              & ((IData)(vlTOPp->axiw_valid) 
                                 & (IData)(vlTOPp->axiw_ready)))));
        vcdp->fullBus(c+401,(0U),32);
        vcdp->fullBit(c+409,(0U));
    }
}
