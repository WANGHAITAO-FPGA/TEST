// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAuroraTxCore__Syms.h"


//======================

void VAuroraTxCore::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VAuroraTxCore* t = (VAuroraTxCore*)userthis;
    VAuroraTxCore__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VAuroraTxCore::traceChgThis(VAuroraTxCore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAuroraTxCore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 1U))))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 5U))))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((8U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((0x10U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((0x20U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__8(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VAuroraTxCore::traceChgThis__2(VAuroraTxCore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAuroraTxCore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1,(vlTOPp->AuroraTxCore__DOT__crc32_1_crc_o),32);
        vcdp->chgBit(c+9,(vlTOPp->AuroraTxCore__DOT__auroraTxArea_axi_last_2));
        vcdp->chgBit(c+17,(vlTOPp->AuroraTxCore__DOT__auroraTxArea_axi_last_1));
        vcdp->chgBus(c+25,(vlTOPp->AuroraTxCore__DOT__auroraTxArea_axi_txdata_7),32);
        vcdp->chgBus(c+33,(vlTOPp->AuroraTxCore__DOT__auroraTxArea_axi_txdata_6),32);
        vcdp->chgBus(c+41,(vlTOPp->AuroraTxCore__DOT__auroraTxArea_axi_txdata_5),32);
        vcdp->chgBus(c+49,(vlTOPp->AuroraTxCore__DOT__auroraTxArea_axi_txdata_4),32);
        vcdp->chgBus(c+57,(vlTOPp->AuroraTxCore__DOT__auroraTxArea_axi_txdata_3),32);
        vcdp->chgBit(c+65,(vlTOPp->AuroraTxCore__DOT__axiw_fire_3));
        vcdp->chgBit(c+73,(vlTOPp->AuroraTxCore__DOT__when_Gtx_Tx_l140));
        vcdp->chgBus(c+81,(vlTOPp->AuroraTxCore__DOT__auroraTxArea_mem_addr),8);
    }
}

void VAuroraTxCore::traceChgThis__3(VAuroraTxCore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAuroraTxCore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+89,(vlTOPp->AuroraTxCore__DOT__auroraTxArea_axi_txdata_2),32);
        vcdp->chgBus(c+97,(vlTOPp->AuroraTxCore__DOT__auroraTxArea_axi_txdata_1),32);
        vcdp->chgQuad(c+105,(vlTOPp->AuroraTxCore__DOT__auroraTxArea_stateMachine_state_string),64);
    }
}

void VAuroraTxCore::traceChgThis__4(VAuroraTxCore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAuroraTxCore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+121,(vlTOPp->AuroraTxCore__DOT___zz_auroraTxArea_mem_port0),32);
        vcdp->chgBus(c+129,(vlTOPp->AuroraTxCore__DOT__auroraTxArea_crc_data),32);
    }
}

void VAuroraTxCore::traceChgThis__5(VAuroraTxCore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAuroraTxCore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+137,(vlTOPp->AuroraTxCore__DOT__auroraTxArea_axi_last));
        vcdp->chgBit(c+145,(vlTOPp->AuroraTxCore__DOT__auroraTxArea_mem_rden));
        vcdp->chgBus(c+153,(vlTOPp->AuroraTxCore__DOT__auroraTxArea_mem_addrtemp),8);
    }
}

void VAuroraTxCore::traceChgThis__6(VAuroraTxCore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAuroraTxCore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+161,(vlTOPp->AuroraTxCore__DOT__auroraTxArea_axi_txhead),32);
        vcdp->chgBus(c+169,(vlTOPp->AuroraTxCore__DOT__auroraTxArea_length),8);
        vcdp->chgBus(c+177,(vlTOPp->AuroraTxCore__DOT__auroraTxArea_data_cnt),8);
        vcdp->chgBit(c+185,((0U == (0xffU & (vlTOPp->AuroraTxCore__DOT__auroraTxArea_axi_txhead 
                                             >> 8U)))));
        vcdp->chgBit(c+193,(((IData)(vlTOPp->AuroraTxCore__DOT__auroraTxArea_data_cnt) 
                             < (0xffU & ((IData)(vlTOPp->AuroraTxCore__DOT__auroraTxArea_length) 
                                         - (IData)(1U))))));
    }
}

void VAuroraTxCore::traceChgThis__7(VAuroraTxCore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAuroraTxCore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+201,(vlTOPp->AuroraTxCore__DOT__auroraTxArea_stateMachine_state),3);
        vcdp->chgBit(c+209,((2U == (IData)(vlTOPp->AuroraTxCore__DOT__auroraTxArea_stateMachine_state))));
        vcdp->chgBit(c+217,((3U == (IData)(vlTOPp->AuroraTxCore__DOT__auroraTxArea_stateMachine_state))));
        vcdp->chgBit(c+225,((4U == (IData)(vlTOPp->AuroraTxCore__DOT__auroraTxArea_stateMachine_state))));
        vcdp->chgBit(c+233,((5U == (IData)(vlTOPp->AuroraTxCore__DOT__auroraTxArea_stateMachine_state))));
        vcdp->chgBit(c+241,((6U == (IData)(vlTOPp->AuroraTxCore__DOT__auroraTxArea_stateMachine_state))));
        vcdp->chgBit(c+249,((7U == (IData)(vlTOPp->AuroraTxCore__DOT__auroraTxArea_stateMachine_state))));
    }
}

void VAuroraTxCore::traceChgThis__8(VAuroraTxCore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAuroraTxCore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+257,(vlTOPp->aurora_userclk));
        vcdp->chgBit(c+265,(vlTOPp->reset));
        vcdp->chgBit(c+273,(vlTOPp->axiw_valid));
        vcdp->chgBit(c+281,(vlTOPp->axiw_ready));
        vcdp->chgBus(c+289,(vlTOPp->axiw_payload_data),32);
        vcdp->chgBit(c+297,(vlTOPp->axiw_payload_last));
        vcdp->chgBus(c+305,(vlTOPp->tx_head),32);
        vcdp->chgBit(c+313,(vlTOPp->tx_start));
        vcdp->chgBit(c+321,(vlTOPp->tx_trigger));
        vcdp->chgBit(c+329,(vlTOPp->bram_en));
        vcdp->chgBus(c+337,(vlTOPp->bram_we),4);
        vcdp->chgBus(c+345,(vlTOPp->bram_addr),8);
        vcdp->chgBus(c+353,(vlTOPp->bram_wrdata),32);
        vcdp->chgBus(c+361,(vlTOPp->bram_rddata),32);
        vcdp->chgBit(c+369,(vlTOPp->bram_clkout));
        vcdp->chgBit(c+377,(vlTOPp->bram_resetout));
        vcdp->chgBit(c+385,(((IData)(vlTOPp->tx_start) 
                             & (IData)(vlTOPp->axiw_ready))));
        vcdp->chgBit(c+393,(((IData)(vlTOPp->tx_start) 
                             & (~ (IData)(vlTOPp->axiw_ready)))));
        vcdp->chgBit(c+401,(((IData)(vlTOPp->axiw_valid) 
                             & (IData)(vlTOPp->axiw_ready))));
        vcdp->chgBit(c+409,(((((3U == (IData)(vlTOPp->AuroraTxCore__DOT__auroraTxArea_stateMachine_state)) 
                               | (4U == (IData)(vlTOPp->AuroraTxCore__DOT__auroraTxArea_stateMachine_state))) 
                              | (5U == (IData)(vlTOPp->AuroraTxCore__DOT__auroraTxArea_stateMachine_state))) 
                             & ((IData)(vlTOPp->axiw_valid) 
                                & (IData)(vlTOPp->axiw_ready)))));
    }
}
