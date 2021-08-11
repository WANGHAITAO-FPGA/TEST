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
        vcdp->declBit(c+449,"axiw_valid", false,-1);
        vcdp->declBit(c+457,"axiw_ready", false,-1);
        vcdp->declBus(c+465,"axiw_payload_data", false,-1, 31,0);
        vcdp->declBit(c+473,"axiw_payload_last", false,-1);
        vcdp->declBus(c+481,"tx_head", false,-1, 31,0);
        vcdp->declBit(c+489,"tx_start", false,-1);
        vcdp->declBit(c+497,"tx_trigger", false,-1);
        vcdp->declBit(c+505,"bram_en", false,-1);
        vcdp->declBus(c+513,"bram_we", false,-1, 3,0);
        vcdp->declBus(c+521,"bram_addr", false,-1, 7,0);
        vcdp->declBus(c+529,"bram_wrdata", false,-1, 31,0);
        vcdp->declBus(c+537,"bram_rddata", false,-1, 31,0);
        vcdp->declBit(c+545,"clk", false,-1);
        vcdp->declBit(c+553,"reset", false,-1);
        vcdp->declBit(c+449,"AuroraTxCore axiw_valid", false,-1);
        vcdp->declBit(c+457,"AuroraTxCore axiw_ready", false,-1);
        vcdp->declBus(c+465,"AuroraTxCore axiw_payload_data", false,-1, 31,0);
        vcdp->declBit(c+473,"AuroraTxCore axiw_payload_last", false,-1);
        vcdp->declBus(c+481,"AuroraTxCore tx_head", false,-1, 31,0);
        vcdp->declBit(c+489,"AuroraTxCore tx_start", false,-1);
        vcdp->declBit(c+497,"AuroraTxCore tx_trigger", false,-1);
        vcdp->declBit(c+505,"AuroraTxCore bram_en", false,-1);
        vcdp->declBus(c+513,"AuroraTxCore bram_we", false,-1, 3,0);
        vcdp->declBus(c+521,"AuroraTxCore bram_addr", false,-1, 7,0);
        vcdp->declBus(c+529,"AuroraTxCore bram_wrdata", false,-1, 31,0);
        vcdp->declBus(c+537,"AuroraTxCore bram_rddata", false,-1, 31,0);
        vcdp->declBit(c+545,"AuroraTxCore clk", false,-1);
        vcdp->declBit(c+553,"AuroraTxCore reset", false,-1);
        vcdp->declBit(c+73,"AuroraTxCore aurarorx_axir_valid", false,-1);
        vcdp->declBus(c+593,"AuroraTxCore aurarorx_bram_rddata", false,-1, 31,0);
        vcdp->declBus(c+81,"AuroraTxCore crc32_2_crc_o", false,-1, 31,0);
        vcdp->declBit(c+601,"AuroraTxCore aurarorx_axir_ready", false,-1);
        vcdp->declBit(c+265,"AuroraTxCore aurarorx_bram_en", false,-1);
        vcdp->declBus(c+273,"AuroraTxCore aurarorx_bram_we", false,-1, 3,0);
        vcdp->declBus(c+281,"AuroraTxCore aurarorx_bram_addr", false,-1, 7,0);
        vcdp->declBus(c+89,"AuroraTxCore aurarorx_bram_wrdata", false,-1, 31,0);
        vcdp->declBit(c+97,"AuroraTxCore axi_last_2", false,-1);
        vcdp->declBit(c+105,"AuroraTxCore axi_last_1", false,-1);
        vcdp->declBus(c+89,"AuroraTxCore axi_txdata_7", false,-1, 31,0);
        vcdp->declBus(c+113,"AuroraTxCore axi_txdata_6", false,-1, 31,0);
        vcdp->declBus(c+121,"AuroraTxCore axi_txdata_5", false,-1, 31,0);
        vcdp->declBus(c+129,"AuroraTxCore axi_txdata_4", false,-1, 31,0);
        vcdp->declBus(c+137,"AuroraTxCore axi_txdata_3", false,-1, 31,0);
        vcdp->declBus(c+41,"AuroraTxCore axi_txdata_2", false,-1, 31,0);
        vcdp->declBus(c+49,"AuroraTxCore axi_txdata_1", false,-1, 31,0);
        vcdp->declBus(c+609,"AuroraTxCore axi_txdata", false,-1, 31,0);
        vcdp->declBit(c+289,"AuroraTxCore axi_last", false,-1);
        vcdp->declBit(c+617,"AuroraTxCore axi_valid", false,-1);
        vcdp->declBus(c+345,"AuroraTxCore axi_txhead", false,-1, 31,0);
        vcdp->declBus(c+353,"AuroraTxCore length", false,-1, 7,0);
        vcdp->declBit(c+297,"AuroraTxCore mem_rden", false,-1);
        vcdp->declBus(c+233,"AuroraTxCore mem_data", false,-1, 31,0);
        vcdp->declBus(c+305,"AuroraTxCore mem_addrtemp", false,-1, 7,0);
        vcdp->declBus(c+241,"AuroraTxCore crc_data", false,-1, 31,0);
        vcdp->declBus(c+361,"AuroraTxCore data_cnt", false,-1, 7,0);
        vcdp->declBus(c+393,"AuroraTxCore stateMachine_state", false,-1, 2,0);
        vcdp->declBit(c+561,"AuroraTxCore when_Gtx_Tx_l60", false,-1);
        vcdp->declBit(c+569,"AuroraTxCore when_Gtx_Tx_l62", false,-1);
        vcdp->declBit(c+145,"AuroraTxCore axiw_fire", false,-1);
        vcdp->declBit(c+369,"AuroraTxCore when_Gtx_Tx_l75", false,-1);
        vcdp->declBit(c+577,"AuroraTxCore axiw_fire_1", false,-1);
        vcdp->declBit(c+145,"AuroraTxCore axiw_fire_2", false,-1);
        vcdp->declBit(c+145,"AuroraTxCore axiw_fire_3", false,-1);
        vcdp->declBit(c+377,"AuroraTxCore when_Gtx_Tx_l98", false,-1);
        vcdp->declBit(c+577,"AuroraTxCore axiw_fire_4", false,-1);
        vcdp->declBit(c+577,"AuroraTxCore axiw_fire_5", false,-1);
        vcdp->declBit(c+401,"AuroraTxCore when_Gtx_Tx_l118", false,-1);
        vcdp->declBit(c+409,"AuroraTxCore when_Gtx_Tx_l120", false,-1);
        vcdp->declBit(c+417,"AuroraTxCore when_Gtx_Tx_l122", false,-1);
        vcdp->declBit(c+425,"AuroraTxCore when_Gtx_Tx_l124", false,-1);
        vcdp->declBit(c+433,"AuroraTxCore when_Gtx_Tx_l126", false,-1);
        vcdp->declBit(c+441,"AuroraTxCore when_Gtx_Tx_l128", false,-1);
        vcdp->declBit(c+577,"AuroraTxCore axiw_fire_6", false,-1);
        vcdp->declBit(c+153,"AuroraTxCore when_Gtx_Tx_l134", false,-1);
        vcdp->declBit(c+401,"AuroraTxCore when_Gtx_Tx_l140", false,-1);
        vcdp->declBit(c+577,"AuroraTxCore axiw_fire_7", false,-1);
        vcdp->declBit(c+585,"AuroraTxCore when_Gtx_Tx_l142", false,-1);
        vcdp->declBit(c+577,"AuroraTxCore axiw_fire_8", false,-1);
        vcdp->declBus(c+161,"AuroraTxCore mem_addr", false,-1, 7,0);
        vcdp->declQuad(c+57,"AuroraTxCore stateMachine_state_string", false,-1, 63,0);
        vcdp->declBus(c+241,"AuroraTxCore crc32_2 crc_i", false,-1, 31,0);
        vcdp->declBus(c+89,"AuroraTxCore crc32_2 data_i", false,-1, 31,0);
        vcdp->declBus(c+81,"AuroraTxCore crc32_2 crc_o", false,-1, 31,0);
        vcdp->declBit(c+73,"AuroraTxCore aurarorx axir_valid", false,-1);
        vcdp->declBit(c+601,"AuroraTxCore aurarorx axir_ready", false,-1);
        vcdp->declBus(c+89,"AuroraTxCore aurarorx axir_payload_data", false,-1, 31,0);
        vcdp->declBit(c+97,"AuroraTxCore aurarorx axir_payload_last", false,-1);
        vcdp->declBit(c+265,"AuroraTxCore aurarorx bram_en", false,-1);
        vcdp->declBus(c+273,"AuroraTxCore aurarorx bram_we", false,-1, 3,0);
        vcdp->declBus(c+281,"AuroraTxCore aurarorx bram_addr", false,-1, 7,0);
        vcdp->declBus(c+89,"AuroraTxCore aurarorx bram_wrdata", false,-1, 31,0);
        vcdp->declBus(c+593,"AuroraTxCore aurarorx bram_rddata", false,-1, 31,0);
        vcdp->declBit(c+545,"AuroraTxCore aurarorx clk", false,-1);
        vcdp->declBit(c+553,"AuroraTxCore aurarorx reset", false,-1);
        vcdp->declBus(c+169,"AuroraTxCore aurarorx crc32_2_crc_o", false,-1, 31,0);
        vcdp->declBit(c+265,"AuroraTxCore aurarorx mem_wren", false,-1);
        vcdp->declBus(c+281,"AuroraTxCore aurarorx mem_addr", false,-1, 7,0);
        vcdp->declBus(c+313,"AuroraTxCore aurarorx mem_data", false,-1, 31,0);
        vcdp->declBus(c+273,"AuroraTxCore aurarorx mem_wrwe", false,-1, 3,0);
        vcdp->declBus(c+249,"AuroraTxCore aurarorx length", false,-1, 7,0);
        vcdp->declBus(c+257,"AuroraTxCore aurarorx data_cnt", false,-1, 7,0);
        vcdp->declBus(c+385,"AuroraTxCore aurarorx crc_data", false,-1, 31,0);
        vcdp->declBit(c+321,"AuroraTxCore aurarorx crc_status", false,-1);
        vcdp->declBus(c+329,"AuroraTxCore aurarorx stateMachine_state", false,-1, 2,0);
        vcdp->declBit(c+73,"AuroraTxCore aurarorx axir_fire", false,-1);
        vcdp->declBit(c+177,"AuroraTxCore aurarorx when_Gtx_Rx_l37", false,-1);
        vcdp->declBit(c+73,"AuroraTxCore aurarorx axir_fire_1", false,-1);
        vcdp->declBit(c+185,"AuroraTxCore aurarorx when_Gtx_Rx_l43", false,-1);
        vcdp->declBit(c+73,"AuroraTxCore aurarorx axir_fire_2", false,-1);
        vcdp->declBit(c+73,"AuroraTxCore aurarorx axir_fire_3", false,-1);
        vcdp->declBit(c+25,"AuroraTxCore aurarorx when_Gtx_Rx_l59", false,-1);
        vcdp->declBit(c+73,"AuroraTxCore aurarorx axir_fire_4", false,-1);
        vcdp->declBit(c+33,"AuroraTxCore aurarorx when_Gtx_Rx_l68", false,-1);
        vcdp->declBit(c+73,"AuroraTxCore aurarorx axir_fire_5", false,-1);
        vcdp->declBit(c+193,"AuroraTxCore aurarorx when_Gtx_Rx_l77", false,-1);
        vcdp->declBit(c+337,"AuroraTxCore aurarorx when_Gtx_Rx_l84", false,-1);
        vcdp->declBit(c+73,"AuroraTxCore aurarorx axir_fire_6", false,-1);
        vcdp->declBit(c+17,"AuroraTxCore aurarorx when_Gtx_Rx_l86", false,-1);
        vcdp->declBit(c+73,"AuroraTxCore aurarorx axir_fire_7", false,-1);
        vcdp->declBit(c+201,"AuroraTxCore aurarorx when_Gtx_Rx_l92", false,-1);
        vcdp->declBit(c+209,"AuroraTxCore aurarorx when_Gtx_Rx_l99", false,-1);
        vcdp->declBit(c+73,"AuroraTxCore aurarorx axir_fire_8", false,-1);
        vcdp->declBit(c+217,"AuroraTxCore aurarorx when_Gtx_Rx_l97", false,-1);
        vcdp->declBit(c+73,"AuroraTxCore aurarorx axir_fire_9", false,-1);
        vcdp->declBit(c+225,"AuroraTxCore aurarorx when_Gtx_Rx_l106", false,-1);
        vcdp->declQuad(c+1,"AuroraTxCore aurarorx stateMachine_state_string", false,-1, 63,0);
        vcdp->declBus(c+385,"AuroraTxCore aurarorx crc32_2 crc_i", false,-1, 31,0);
        vcdp->declBus(c+89,"AuroraTxCore aurarorx crc32_2 data_i", false,-1, 31,0);
        vcdp->declBus(c+169,"AuroraTxCore aurarorx crc32_2 crc_o", false,-1, 31,0);
    }
}

void VAuroraTxCore::traceFullThis__1(VAuroraTxCore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAuroraTxCore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullQuad(c+1,(vlTOPp->AuroraTxCore__DOT__aurarorx__DOT__stateMachine_state_string),64);
        vcdp->fullBit(c+17,(((((3U == (IData)(vlTOPp->AuroraTxCore__DOT__aurarorx__DOT__stateMachine_state)) 
                               | (4U == (IData)(vlTOPp->AuroraTxCore__DOT__aurarorx__DOT__stateMachine_state))) 
                              | (5U == (IData)(vlTOPp->AuroraTxCore__DOT__aurarorx__DOT__stateMachine_state))) 
                             & (IData)(vlTOPp->AuroraTxCore__DOT__aurarorx_axir_valid))));
        vcdp->fullBit(c+25,(vlTOPp->AuroraTxCore__DOT__aurarorx__DOT__when_Gtx_Rx_l59));
        vcdp->fullBit(c+33,((vlTOPp->AuroraTxCore__DOT__aurarorx__DOT__crc_data 
                             != vlTOPp->AuroraTxCore__DOT__axi_txdata_7)));
        vcdp->fullBus(c+41,(vlTOPp->AuroraTxCore__DOT__axi_txdata_2),32);
        vcdp->fullBus(c+49,(vlTOPp->AuroraTxCore__DOT__axi_txdata_1),32);
        vcdp->fullQuad(c+57,(vlTOPp->AuroraTxCore__DOT__stateMachine_state_string),64);
        vcdp->fullBit(c+73,(vlTOPp->AuroraTxCore__DOT__aurarorx_axir_valid));
        vcdp->fullBus(c+81,(vlTOPp->AuroraTxCore__DOT__crc32_2_crc_o),32);
        vcdp->fullBus(c+89,(vlTOPp->AuroraTxCore__DOT__axi_txdata_7),32);
        vcdp->fullBit(c+97,(vlTOPp->AuroraTxCore__DOT__axi_last_2));
        vcdp->fullBit(c+105,(vlTOPp->AuroraTxCore__DOT__axi_last_1));
        vcdp->fullBus(c+113,(vlTOPp->AuroraTxCore__DOT__axi_txdata_6),32);
        vcdp->fullBus(c+121,(vlTOPp->AuroraTxCore__DOT__axi_txdata_5),32);
        vcdp->fullBus(c+129,(vlTOPp->AuroraTxCore__DOT__axi_txdata_4),32);
        vcdp->fullBus(c+137,(vlTOPp->AuroraTxCore__DOT__axi_txdata_3),32);
        vcdp->fullBit(c+145,(vlTOPp->AuroraTxCore__DOT__axiw_fire_3));
        vcdp->fullBit(c+153,(vlTOPp->AuroraTxCore__DOT__when_Gtx_Tx_l134));
        vcdp->fullBus(c+161,(vlTOPp->AuroraTxCore__DOT__mem_addr),8);
        vcdp->fullBus(c+169,(vlTOPp->AuroraTxCore__DOT__aurarorx__DOT__crc32_2_crc_o),32);
        vcdp->fullBit(c+177,(((IData)(vlTOPp->AuroraTxCore__DOT__aurarorx_axir_valid) 
                              & (0xffbcU == vlTOPp->AuroraTxCore__DOT__axi_txdata_7))));
        vcdp->fullBit(c+185,((1U == vlTOPp->AuroraTxCore__DOT__axi_txdata_7)));
        vcdp->fullBit(c+193,(((IData)(vlTOPp->AuroraTxCore__DOT__aurarorx_axir_valid) 
                              & (IData)(vlTOPp->AuroraTxCore__DOT__axi_last_2))));
        vcdp->fullBit(c+201,(vlTOPp->AuroraTxCore__DOT__aurarorx__DOT__when_Gtx_Rx_l92));
        vcdp->fullBit(c+209,((0U == (0xffU & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                              >> 8U)))));
        vcdp->fullBit(c+217,(vlTOPp->AuroraTxCore__DOT__aurarorx__DOT__when_Gtx_Rx_l97));
        vcdp->fullBit(c+225,(vlTOPp->AuroraTxCore__DOT__aurarorx__DOT__when_Gtx_Rx_l106));
        vcdp->fullBus(c+233,(vlTOPp->AuroraTxCore__DOT___zz_mem_port0),32);
        vcdp->fullBus(c+241,(vlTOPp->AuroraTxCore__DOT__crc_data),32);
        vcdp->fullBus(c+249,(vlTOPp->AuroraTxCore__DOT__aurarorx__DOT__length),8);
        vcdp->fullBus(c+257,(vlTOPp->AuroraTxCore__DOT__aurarorx__DOT__data_cnt),8);
        vcdp->fullBit(c+265,(vlTOPp->AuroraTxCore__DOT__aurarorx__DOT__mem_wren));
        vcdp->fullBus(c+273,(vlTOPp->AuroraTxCore__DOT__aurarorx__DOT__mem_wrwe),4);
        vcdp->fullBus(c+281,(vlTOPp->AuroraTxCore__DOT__aurarorx__DOT__mem_addr),8);
        vcdp->fullBit(c+289,(vlTOPp->AuroraTxCore__DOT__axi_last));
        vcdp->fullBit(c+297,(vlTOPp->AuroraTxCore__DOT__mem_rden));
        vcdp->fullBus(c+305,(vlTOPp->AuroraTxCore__DOT__mem_addrtemp),8);
        vcdp->fullBus(c+313,(vlTOPp->AuroraTxCore__DOT__aurarorx__DOT__mem_data),32);
        vcdp->fullBit(c+321,(vlTOPp->AuroraTxCore__DOT__aurarorx__DOT__crc_status));
        vcdp->fullBus(c+329,(vlTOPp->AuroraTxCore__DOT__aurarorx__DOT__stateMachine_state),3);
        vcdp->fullBit(c+337,((0U == (IData)(vlTOPp->AuroraTxCore__DOT__aurarorx__DOT__stateMachine_state))));
        vcdp->fullBus(c+345,(vlTOPp->AuroraTxCore__DOT__axi_txhead),32);
        vcdp->fullBus(c+353,(vlTOPp->AuroraTxCore__DOT__length),8);
        vcdp->fullBus(c+361,(vlTOPp->AuroraTxCore__DOT__data_cnt),8);
        vcdp->fullBit(c+369,((0U == (0xffU & (vlTOPp->AuroraTxCore__DOT__axi_txhead 
                                              >> 8U)))));
        vcdp->fullBit(c+377,(((IData)(vlTOPp->AuroraTxCore__DOT__data_cnt) 
                              < (0xffU & ((IData)(vlTOPp->AuroraTxCore__DOT__length) 
                                          - (IData)(1U))))));
        vcdp->fullBus(c+385,(vlTOPp->AuroraTxCore__DOT__aurarorx__DOT__crc_data),32);
        vcdp->fullBus(c+393,(vlTOPp->AuroraTxCore__DOT__stateMachine_state),3);
        vcdp->fullBit(c+401,((2U == (IData)(vlTOPp->AuroraTxCore__DOT__stateMachine_state))));
        vcdp->fullBit(c+409,((3U == (IData)(vlTOPp->AuroraTxCore__DOT__stateMachine_state))));
        vcdp->fullBit(c+417,((4U == (IData)(vlTOPp->AuroraTxCore__DOT__stateMachine_state))));
        vcdp->fullBit(c+425,((5U == (IData)(vlTOPp->AuroraTxCore__DOT__stateMachine_state))));
        vcdp->fullBit(c+433,((6U == (IData)(vlTOPp->AuroraTxCore__DOT__stateMachine_state))));
        vcdp->fullBit(c+441,((7U == (IData)(vlTOPp->AuroraTxCore__DOT__stateMachine_state))));
        vcdp->fullBit(c+449,(vlTOPp->axiw_valid));
        vcdp->fullBit(c+457,(vlTOPp->axiw_ready));
        vcdp->fullBus(c+465,(vlTOPp->axiw_payload_data),32);
        vcdp->fullBit(c+473,(vlTOPp->axiw_payload_last));
        vcdp->fullBus(c+481,(vlTOPp->tx_head),32);
        vcdp->fullBit(c+489,(vlTOPp->tx_start));
        vcdp->fullBit(c+497,(vlTOPp->tx_trigger));
        vcdp->fullBit(c+505,(vlTOPp->bram_en));
        vcdp->fullBus(c+513,(vlTOPp->bram_we),4);
        vcdp->fullBus(c+521,(vlTOPp->bram_addr),8);
        vcdp->fullBus(c+529,(vlTOPp->bram_wrdata),32);
        vcdp->fullBus(c+537,(vlTOPp->bram_rddata),32);
        vcdp->fullBit(c+545,(vlTOPp->clk));
        vcdp->fullBit(c+553,(vlTOPp->reset));
        vcdp->fullBit(c+561,(((IData)(vlTOPp->tx_start) 
                              & (IData)(vlTOPp->axiw_ready))));
        vcdp->fullBit(c+569,(((IData)(vlTOPp->tx_start) 
                              & (~ (IData)(vlTOPp->axiw_ready)))));
        vcdp->fullBit(c+577,(((IData)(vlTOPp->axiw_valid) 
                              & (IData)(vlTOPp->axiw_ready))));
        vcdp->fullBit(c+585,(((((3U == (IData)(vlTOPp->AuroraTxCore__DOT__stateMachine_state)) 
                                | (4U == (IData)(vlTOPp->AuroraTxCore__DOT__stateMachine_state))) 
                               | (5U == (IData)(vlTOPp->AuroraTxCore__DOT__stateMachine_state))) 
                              & ((IData)(vlTOPp->axiw_valid) 
                                 & (IData)(vlTOPp->axiw_ready)))));
        vcdp->fullBus(c+593,(vlTOPp->AuroraTxCore__DOT__aurarorx_bram_rddata),32);
        vcdp->fullBit(c+601,(1U));
        vcdp->fullBus(c+609,(0U),32);
        vcdp->fullBit(c+617,(0U));
    }
}
