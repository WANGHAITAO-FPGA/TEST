// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAuroraTop__Syms.h"


//======================

void VAuroraTop::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VAuroraTop* t = (VAuroraTop*)userthis;
    VAuroraTop__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VAuroraTop::traceChgThis(VAuroraTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAuroraTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 2U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 0xaU))))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 3U))))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 3U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 0xaU))))) {
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 4U))))) {
            vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 7U))))) {
            vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 7U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 0xaU))))) {
            vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 9U))))) {
            vlTOPp->traceChgThis__8(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 0xaU))))) {
            vlTOPp->traceChgThis__9(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__10(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__11(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((8U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__12(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((0x10U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__13(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                >> 4U) | (vlTOPp->__Vm_traceActivity 
                                          >> 7U))))) {
            vlTOPp->traceChgThis__14(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((0x20U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__15(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((0x40U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__16(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((0x80U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__17(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((0x100U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__18(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__19(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VAuroraTop::traceChgThis__2(VAuroraTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAuroraTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1,(((~ (IData)(vlTOPp->AuroraTop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_status)) 
                           & (0xffbdU == vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7))));
    }
}

void VAuroraTop::traceChgThis__3(VAuroraTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAuroraTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+9,(vlTOPp->AuroraTop__DOT__auroraArea_aurorarxcore__DOT__when_Gtx_Rx_l70));
    }
}

void VAuroraTop::traceChgThis__4(VAuroraTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAuroraTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+17,((vlTOPp->AuroraTop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                            != vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7)));
    }
}

void VAuroraTop::traceChgThis__5(VAuroraTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAuroraTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgQuad(c+25,(vlTOPp->AuroraTop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state_string),64);
    }
}

void VAuroraTop::traceChgThis__6(VAuroraTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAuroraTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+41,(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_last_2));
        vcdp->chgBit(c+49,(((0U != (IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state)) 
                            & (IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_last_2))));
        vcdp->chgBit(c+57,(vlTOPp->AuroraTop__DOT__auroraArea_aurorarxcore__DOT__when_Gtx_Rx_l106));
        vcdp->chgBit(c+65,(vlTOPp->AuroraTop__DOT__auroraArea_aurorarxcore__DOT__when_Gtx_Rx_l111));
        vcdp->chgBit(c+73,(vlTOPp->AuroraTop__DOT__auroraArea_aurorarxcore__DOT__when_Gtx_Rx_l120));
        vcdp->chgBit(c+81,(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_last_1));
        vcdp->chgBus(c+89,(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_2),32);
        vcdp->chgBus(c+97,(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_1),32);
        vcdp->chgBit(c+105,(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__when_Gtx_Tx_l140));
        vcdp->chgQuad(c+113,(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state_string),64);
    }
}

void VAuroraTop::traceChgThis__7(VAuroraTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAuroraTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+129,(((0U != (IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state)) 
                             & (0xffbcU == vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7))));
    }
}

void VAuroraTop::traceChgThis__8(VAuroraTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAuroraTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+137,(vlTOPp->AuroraTop__DOT__toparea_ctrl_doWrite));
    }
}

void VAuroraTop::traceChgThis__9(VAuroraTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAuroraTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+145,(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7),32);
        vcdp->chgBus(c+153,(vlTOPp->AuroraTop__DOT__auroraArea_aurorarxcore__DOT__crc32_2_crc_o),32);
        vcdp->chgBit(c+161,((1U == vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7)));
        vcdp->chgBit(c+169,((0U == (0xffU & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                             >> 8U)))));
        vcdp->chgBus(c+177,(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__crc32_2_crc_o),32);
        vcdp->chgBus(c+185,(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_6),32);
        vcdp->chgBus(c+193,(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_5),32);
        vcdp->chgBus(c+201,(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_4),32);
        vcdp->chgBus(c+209,(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_3),32);
    }
}

void VAuroraTop::traceChgThis__10(VAuroraTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAuroraTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+217,(vlTOPp->AuroraTop__DOT__auroraArea_auroraTxBlockRam__DOT___zz_bram_port1),32);
        vcdp->chgBus(c+225,(vlTOPp->AuroraTop__DOT__auroraArea_auroraRxBlockRam__DOT___zz_bram_port0),32);
    }
}

void VAuroraTop::traceChgThis__11(VAuroraTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAuroraTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+233,(vlTOPp->AuroraTop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_aurora_intrrupt));
        vcdp->chgBus(c+241,(vlTOPp->AuroraTop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_mem_data),32);
        vcdp->chgBit(c+249,(vlTOPp->AuroraTop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_status));
    }
}

void VAuroraTop::traceChgThis__12(VAuroraTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAuroraTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+257,(vlTOPp->AuroraTop__DOT__auroraArea_auroraTxBlockRam__DOT___zz_bram_port0),32);
        vcdp->chgBus(c+265,(vlTOPp->AuroraTop__DOT__auroraArea_auroraRxBlockRam__DOT___zz_bram_port1),32);
        vcdp->chgBus(c+273,(vlTOPp->AuroraTop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_length),8);
        vcdp->chgBus(c+281,(vlTOPp->AuroraTop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_data_cnt),8);
        vcdp->chgBus(c+289,(vlTOPp->AuroraTop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data),32);
        vcdp->chgBus(c+297,(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data),32);
    }
}

void VAuroraTop::traceChgThis__13(VAuroraTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAuroraTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+305,(vlTOPp->AuroraTop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_mem_wren));
        vcdp->chgBus(c+313,(vlTOPp->AuroraTop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_mem_wrwe),4);
        vcdp->chgBus(c+321,(vlTOPp->AuroraTop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_mem_addr),8);
        vcdp->chgBit(c+329,(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_mem_rden));
        vcdp->chgBus(c+337,(vlTOPp->AuroraTop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state),3);
        vcdp->chgBit(c+345,((0U == (IData)(vlTOPp->AuroraTop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state))));
        vcdp->chgBit(c+353,(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_last));
        vcdp->chgBus(c+361,(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_mem_addrtemp),8);
    }
}

void VAuroraTop::traceChgThis__14(VAuroraTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAuroraTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+369,((0xffU & ((0U != (IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))
                                       ? (IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_mem_addrtemp)
                                       : ((IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_mem_addrtemp) 
                                          - (IData)(1U))))),8);
        vcdp->chgBit(c+377,(((((3U == (IData)(vlTOPp->AuroraTop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state)) 
                               | (4U == (IData)(vlTOPp->AuroraTop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state))) 
                              | (5U == (IData)(vlTOPp->AuroraTop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state))) 
                             & (0U != (IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state)))));
    }
}

void VAuroraTop::traceChgThis__15(VAuroraTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAuroraTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+385,(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txhead),32);
        vcdp->chgBus(c+393,(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_length),8);
        vcdp->chgBus(c+401,(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_data_cnt),8);
        vcdp->chgBit(c+409,((0U == (0xffU & (vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txhead 
                                             >> 8U)))));
        vcdp->chgBit(c+417,(((IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_data_cnt) 
                             < (0xffU & ((IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_length) 
                                         - (IData)(1U))))));
    }
}

void VAuroraTop::traceChgThis__16(VAuroraTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAuroraTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+425,((1U & vlTOPp->AuroraTop__DOT__toparea_tx_ctrl)));
        vcdp->chgBit(c+433,((1U & (vlTOPp->AuroraTop__DOT__toparea_tx_ctrl 
                                   >> 4U))));
        vcdp->chgBus(c+441,(vlTOPp->AuroraTop__DOT__toparea_tx_ctrl),32);
    }
}

void VAuroraTop::traceChgThis__17(VAuroraTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAuroraTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+449,((0U != (IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))));
        vcdp->chgBus(c+457,(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state),3);
        vcdp->chgBit(c+465,((2U == (IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))));
        vcdp->chgBit(c+473,((3U == (IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))));
        vcdp->chgBit(c+481,((4U == (IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))));
        vcdp->chgBit(c+489,((5U == (IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))));
        vcdp->chgBit(c+497,((6U == (IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))));
        vcdp->chgBit(c+505,((7U == (IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))));
        vcdp->chgBit(c+513,(((((3U == (IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state)) 
                               | (4U == (IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) 
                              | (5U == (IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) 
                             & (0U != (IData)(vlTOPp->AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state)))));
    }
}

void VAuroraTop::traceChgThis__18(VAuroraTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAuroraTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+521,(vlTOPp->AuroraTop__DOT__toparea_tx_headtemp),32);
    }
}

void VAuroraTop::traceChgThis__19(VAuroraTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAuroraTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+529,(vlTOPp->apb_PADDR),20);
        vcdp->chgBit(c+537,(vlTOPp->apb_PSEL));
        vcdp->chgBit(c+545,(vlTOPp->apb_PENABLE));
        vcdp->chgBit(c+553,(vlTOPp->apb_PREADY));
        vcdp->chgBit(c+561,(vlTOPp->apb_PWRITE));
        vcdp->chgBus(c+569,(vlTOPp->apb_PWDATA),32);
        vcdp->chgBus(c+577,(vlTOPp->apb_PRDATA),32);
        vcdp->chgBit(c+585,(vlTOPp->apb_PSLVERROR));
        vcdp->chgBit(c+593,(vlTOPp->tx_bram_en));
        vcdp->chgBus(c+601,(vlTOPp->tx_bram_we),4);
        vcdp->chgBus(c+609,(vlTOPp->tx_bram_addr),8);
        vcdp->chgBus(c+617,(vlTOPp->tx_bram_wrdata),32);
        vcdp->chgBus(c+625,(vlTOPp->tx_bram_rddata),32);
        vcdp->chgBit(c+633,(vlTOPp->rx_bram_en));
        vcdp->chgBus(c+641,(vlTOPp->rx_bram_we),4);
        vcdp->chgBus(c+649,(vlTOPp->rx_bram_addr),8);
        vcdp->chgBus(c+657,(vlTOPp->rx_bram_wrdata),32);
        vcdp->chgBus(c+665,(vlTOPp->rx_bram_rddata),32);
        vcdp->chgBit(c+673,(vlTOPp->clk));
        vcdp->chgBit(c+681,(vlTOPp->reset));
        vcdp->chgBit(c+689,(vlTOPp->aurora_userclk));
        vcdp->chgBit(c+697,((((IData)(vlTOPp->apb_PSEL) 
                              & (IData)(vlTOPp->apb_PENABLE)) 
                             & (IData)(vlTOPp->apb_PWRITE))));
        vcdp->chgBit(c+705,((((IData)(vlTOPp->apb_PSEL) 
                              & (IData)(vlTOPp->apb_PENABLE)) 
                             & (~ (IData)(vlTOPp->apb_PWRITE)))));
    }
}
