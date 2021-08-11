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
                                  >> 2U))))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 2U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 5U))))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 3U))))) {
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 3U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 5U))))) {
            vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 4U))))) {
            vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 5U))))) {
            vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__8(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__9(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((8U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__10(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((0x10U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__11(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__12(vlSymsp, vcdp, code);
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
        vcdp->chgQuad(c+1,(vlTOPp->AuroraTxCore__DOT__aurarorx__DOT__stateMachine_state_string),64);
    }
}

void VAuroraTxCore::traceChgThis__3(VAuroraTxCore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAuroraTxCore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+17,(((((3U == (IData)(vlTOPp->AuroraTxCore__DOT__aurarorx__DOT__stateMachine_state)) 
                              | (4U == (IData)(vlTOPp->AuroraTxCore__DOT__aurarorx__DOT__stateMachine_state))) 
                             | (5U == (IData)(vlTOPp->AuroraTxCore__DOT__aurarorx__DOT__stateMachine_state))) 
                            & (IData)(vlTOPp->AuroraTxCore__DOT__aurarorx_axir_valid))));
    }
}

void VAuroraTxCore::traceChgThis__4(VAuroraTxCore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAuroraTxCore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+25,(vlTOPp->AuroraTxCore__DOT__aurarorx__DOT__when_Gtx_Rx_l59));
    }
}

void VAuroraTxCore::traceChgThis__5(VAuroraTxCore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAuroraTxCore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+33,((vlTOPp->AuroraTxCore__DOT__aurarorx__DOT__crc_data 
                            != vlTOPp->AuroraTxCore__DOT__axi_txdata_7)));
    }
}

void VAuroraTxCore::traceChgThis__6(VAuroraTxCore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAuroraTxCore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+41,(vlTOPp->AuroraTxCore__DOT__axi_txdata_2),32);
        vcdp->chgBus(c+49,(vlTOPp->AuroraTxCore__DOT__axi_txdata_1),32);
        vcdp->chgQuad(c+57,(vlTOPp->AuroraTxCore__DOT__stateMachine_state_string),64);
    }
}

void VAuroraTxCore::traceChgThis__7(VAuroraTxCore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAuroraTxCore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+73,(vlTOPp->AuroraTxCore__DOT__aurarorx_axir_valid));
        vcdp->chgBus(c+81,(vlTOPp->AuroraTxCore__DOT__crc32_2_crc_o),32);
        vcdp->chgBus(c+89,(vlTOPp->AuroraTxCore__DOT__axi_txdata_7),32);
        vcdp->chgBit(c+97,(vlTOPp->AuroraTxCore__DOT__axi_last_2));
        vcdp->chgBit(c+105,(vlTOPp->AuroraTxCore__DOT__axi_last_1));
        vcdp->chgBus(c+113,(vlTOPp->AuroraTxCore__DOT__axi_txdata_6),32);
        vcdp->chgBus(c+121,(vlTOPp->AuroraTxCore__DOT__axi_txdata_5),32);
        vcdp->chgBus(c+129,(vlTOPp->AuroraTxCore__DOT__axi_txdata_4),32);
        vcdp->chgBus(c+137,(vlTOPp->AuroraTxCore__DOT__axi_txdata_3),32);
        vcdp->chgBit(c+145,(vlTOPp->AuroraTxCore__DOT__axiw_fire_3));
        vcdp->chgBit(c+153,(vlTOPp->AuroraTxCore__DOT__when_Gtx_Tx_l134));
        vcdp->chgBus(c+161,(vlTOPp->AuroraTxCore__DOT__mem_addr),8);
        vcdp->chgBus(c+169,(vlTOPp->AuroraTxCore__DOT__aurarorx__DOT__crc32_2_crc_o),32);
        vcdp->chgBit(c+177,(((IData)(vlTOPp->AuroraTxCore__DOT__aurarorx_axir_valid) 
                             & (0xffbcU == vlTOPp->AuroraTxCore__DOT__axi_txdata_7))));
        vcdp->chgBit(c+185,((1U == vlTOPp->AuroraTxCore__DOT__axi_txdata_7)));
        vcdp->chgBit(c+193,(((IData)(vlTOPp->AuroraTxCore__DOT__aurarorx_axir_valid) 
                             & (IData)(vlTOPp->AuroraTxCore__DOT__axi_last_2))));
        vcdp->chgBit(c+201,(vlTOPp->AuroraTxCore__DOT__aurarorx__DOT__when_Gtx_Rx_l92));
        vcdp->chgBit(c+209,((0U == (0xffU & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                             >> 8U)))));
        vcdp->chgBit(c+217,(vlTOPp->AuroraTxCore__DOT__aurarorx__DOT__when_Gtx_Rx_l97));
        vcdp->chgBit(c+225,(vlTOPp->AuroraTxCore__DOT__aurarorx__DOT__when_Gtx_Rx_l106));
    }
}

void VAuroraTxCore::traceChgThis__8(VAuroraTxCore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAuroraTxCore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+233,(vlTOPp->AuroraTxCore__DOT___zz_mem_port0),32);
        vcdp->chgBus(c+241,(vlTOPp->AuroraTxCore__DOT__crc_data),32);
        vcdp->chgBus(c+249,(vlTOPp->AuroraTxCore__DOT__aurarorx__DOT__length),8);
        vcdp->chgBus(c+257,(vlTOPp->AuroraTxCore__DOT__aurarorx__DOT__data_cnt),8);
    }
}

void VAuroraTxCore::traceChgThis__9(VAuroraTxCore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAuroraTxCore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+265,(vlTOPp->AuroraTxCore__DOT__aurarorx__DOT__mem_wren));
        vcdp->chgBus(c+273,(vlTOPp->AuroraTxCore__DOT__aurarorx__DOT__mem_wrwe),4);
        vcdp->chgBus(c+281,(vlTOPp->AuroraTxCore__DOT__aurarorx__DOT__mem_addr),8);
        vcdp->chgBit(c+289,(vlTOPp->AuroraTxCore__DOT__axi_last));
        vcdp->chgBit(c+297,(vlTOPp->AuroraTxCore__DOT__mem_rden));
        vcdp->chgBus(c+305,(vlTOPp->AuroraTxCore__DOT__mem_addrtemp),8);
        vcdp->chgBus(c+313,(vlTOPp->AuroraTxCore__DOT__aurarorx__DOT__mem_data),32);
        vcdp->chgBit(c+321,(vlTOPp->AuroraTxCore__DOT__aurarorx__DOT__crc_status));
        vcdp->chgBus(c+329,(vlTOPp->AuroraTxCore__DOT__aurarorx__DOT__stateMachine_state),3);
        vcdp->chgBit(c+337,((0U == (IData)(vlTOPp->AuroraTxCore__DOT__aurarorx__DOT__stateMachine_state))));
    }
}

void VAuroraTxCore::traceChgThis__10(VAuroraTxCore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAuroraTxCore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+345,(vlTOPp->AuroraTxCore__DOT__axi_txhead),32);
        vcdp->chgBus(c+353,(vlTOPp->AuroraTxCore__DOT__length),8);
        vcdp->chgBus(c+361,(vlTOPp->AuroraTxCore__DOT__data_cnt),8);
        vcdp->chgBit(c+369,((0U == (0xffU & (vlTOPp->AuroraTxCore__DOT__axi_txhead 
                                             >> 8U)))));
        vcdp->chgBit(c+377,(((IData)(vlTOPp->AuroraTxCore__DOT__data_cnt) 
                             < (0xffU & ((IData)(vlTOPp->AuroraTxCore__DOT__length) 
                                         - (IData)(1U))))));
        vcdp->chgBus(c+385,(vlTOPp->AuroraTxCore__DOT__aurarorx__DOT__crc_data),32);
    }
}

void VAuroraTxCore::traceChgThis__11(VAuroraTxCore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAuroraTxCore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+393,(vlTOPp->AuroraTxCore__DOT__stateMachine_state),3);
        vcdp->chgBit(c+401,((2U == (IData)(vlTOPp->AuroraTxCore__DOT__stateMachine_state))));
        vcdp->chgBit(c+409,((3U == (IData)(vlTOPp->AuroraTxCore__DOT__stateMachine_state))));
        vcdp->chgBit(c+417,((4U == (IData)(vlTOPp->AuroraTxCore__DOT__stateMachine_state))));
        vcdp->chgBit(c+425,((5U == (IData)(vlTOPp->AuroraTxCore__DOT__stateMachine_state))));
        vcdp->chgBit(c+433,((6U == (IData)(vlTOPp->AuroraTxCore__DOT__stateMachine_state))));
        vcdp->chgBit(c+441,((7U == (IData)(vlTOPp->AuroraTxCore__DOT__stateMachine_state))));
    }
}

void VAuroraTxCore::traceChgThis__12(VAuroraTxCore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAuroraTxCore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+449,(vlTOPp->axiw_valid));
        vcdp->chgBit(c+457,(vlTOPp->axiw_ready));
        vcdp->chgBus(c+465,(vlTOPp->axiw_payload_data),32);
        vcdp->chgBit(c+473,(vlTOPp->axiw_payload_last));
        vcdp->chgBus(c+481,(vlTOPp->tx_head),32);
        vcdp->chgBit(c+489,(vlTOPp->tx_start));
        vcdp->chgBit(c+497,(vlTOPp->tx_trigger));
        vcdp->chgBit(c+505,(vlTOPp->bram_en));
        vcdp->chgBus(c+513,(vlTOPp->bram_we),4);
        vcdp->chgBus(c+521,(vlTOPp->bram_addr),8);
        vcdp->chgBus(c+529,(vlTOPp->bram_wrdata),32);
        vcdp->chgBus(c+537,(vlTOPp->bram_rddata),32);
        vcdp->chgBit(c+545,(vlTOPp->clk));
        vcdp->chgBit(c+553,(vlTOPp->reset));
        vcdp->chgBit(c+561,(((IData)(vlTOPp->tx_start) 
                             & (IData)(vlTOPp->axiw_ready))));
        vcdp->chgBit(c+569,(((IData)(vlTOPp->tx_start) 
                             & (~ (IData)(vlTOPp->axiw_ready)))));
        vcdp->chgBit(c+577,(((IData)(vlTOPp->axiw_valid) 
                             & (IData)(vlTOPp->axiw_ready))));
        vcdp->chgBit(c+585,(((((3U == (IData)(vlTOPp->AuroraTxCore__DOT__stateMachine_state)) 
                               | (4U == (IData)(vlTOPp->AuroraTxCore__DOT__stateMachine_state))) 
                              | (5U == (IData)(vlTOPp->AuroraTxCore__DOT__stateMachine_state))) 
                             & ((IData)(vlTOPp->axiw_valid) 
                                & (IData)(vlTOPp->axiw_ready)))));
    }
}
