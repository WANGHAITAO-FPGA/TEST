// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VEmifToAurora_test__Syms.h"


//======================

void VEmifToAurora_test::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VEmifToAurora_test* t = (VEmifToAurora_test*)userthis;
    VEmifToAurora_test__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VEmifToAurora_test::traceChgThis(VEmifToAurora_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VEmifToAurora_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 1U))))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 1U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 4U))))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 2U))))) {
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 3U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 0xdU))))) {
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
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 5U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 0xdU))))) {
            vlTOPp->traceChgThis__8(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 7U))))) {
            vlTOPp->traceChgThis__9(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 8U))))) {
            vlTOPp->traceChgThis__10(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 0xbU))))) {
            vlTOPp->traceChgThis__11(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 0xbU)) | (vlTOPp->__Vm_traceActivity 
                                                >> 0xdU))))) {
            vlTOPp->traceChgThis__12(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 0xcU))))) {
            vlTOPp->traceChgThis__13(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 0xdU))))) {
            vlTOPp->traceChgThis__14(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__15(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((8U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__16(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((0x10U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__17(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((0x20U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__18(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((0x40U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__19(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((0x80U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__20(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                >> 7U) | (vlTOPp->__Vm_traceActivity 
                                          >> 0xbU))))) {
            vlTOPp->traceChgThis__21(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((0x100U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__22(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((0x200U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__23(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((0x400U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__24(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((0x800U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__25(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__26(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VEmifToAurora_test::traceChgThis__2(VEmifToAurora_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VEmifToAurora_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1,(vlTOPp->EmifToAurora_test__DOT__area_emiftoapb_apb_PWRITE));
        vcdp->chgBus(c+9,(vlTOPp->EmifToAurora_test__DOT__area_emiftoapb_apb_PWDATA),32);
        vcdp->chgBit(c+17,((1U & (IData)(vlTOPp->EmifToAurora_test__DOT__apb_decoder_io_output_PSEL))));
        vcdp->chgBus(c+25,(((IData)(vlTOPp->EmifToAurora_test__DOT__area_apb3toTxBram__DOT__when_Apb3ToBram_l41)
                             ? 0xfU : 0U)),4);
        vcdp->chgBit(c+33,((1U & ((IData)(vlTOPp->EmifToAurora_test__DOT__apb_decoder_io_output_PSEL) 
                                  >> 1U))));
        vcdp->chgBus(c+41,(vlTOPp->EmifToAurora_test__DOT__area_auroratop_apb_PRDATA),32);
        vcdp->chgBit(c+49,(vlTOPp->EmifToAurora_test__DOT__apb_decoder_io_input_PREADY));
        vcdp->chgBus(c+57,(vlTOPp->EmifToAurora_test__DOT__apb3Router_1__DOT___zz_io_input_PRDATA),32);
        vcdp->chgBit(c+65,(vlTOPp->EmifToAurora_test__DOT__apb_decoder_io_input_PSLVERROR));
        vcdp->chgBus(c+73,(vlTOPp->EmifToAurora_test__DOT__apb_decoder_io_output_PSEL),3);
        vcdp->chgBit(c+81,((1U & ((IData)(vlTOPp->EmifToAurora_test__DOT__apb_decoder_io_output_PSEL) 
                                  >> 2U))));
        vcdp->chgBit(c+89,(vlTOPp->EmifToAurora_test__DOT__area_apb3toTxBram__DOT__when_Apb3ToBram_l41));
        vcdp->chgBit(c+97,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_ctrl_doWrite));
        vcdp->chgBit(c+105,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__when_AuroraTop_l46));
        vcdp->chgBit(c+113,(vlTOPp->EmifToAurora_test__DOT__apb_decoder__DOT__when_Apb3Decoder_l84));
    }
}

void VEmifToAurora_test::traceChgThis__3(VEmifToAurora_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VEmifToAurora_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+121,(((((IData)(vlTOPp->EmifToAurora_test__DOT__area_emiftoapb_apb_PENABLE) 
                               & (IData)(vlTOPp->EmifToAurora_test__DOT__area_emiftoapb_apb_PWRITE)) 
                              & ((IData)(vlTOPp->EmifToAurora_test__DOT__apb_decoder_io_output_PSEL) 
                                 >> 1U)) ? 0xfU : 0U)),4);
        vcdp->chgBit(c+129,((((IData)(vlTOPp->EmifToAurora_test__DOT__area_emiftoapb_apb_PENABLE) 
                              & (IData)(vlTOPp->EmifToAurora_test__DOT__area_emiftoapb_apb_PWRITE)) 
                             & ((IData)(vlTOPp->EmifToAurora_test__DOT__apb_decoder_io_output_PSEL) 
                                >> 1U))));
        vcdp->chgBit(c+137,(((((IData)(vlTOPp->EmifToAurora_test__DOT__apb_decoder_io_output_PSEL) 
                               >> 2U) & (IData)(vlTOPp->EmifToAurora_test__DOT__area_emiftoapb_apb_PENABLE)) 
                             & (IData)(vlTOPp->EmifToAurora_test__DOT__area_emiftoapb_apb_PWRITE))));
        vcdp->chgBit(c+145,(((((IData)(vlTOPp->EmifToAurora_test__DOT__apb_decoder_io_output_PSEL) 
                               >> 2U) & (IData)(vlTOPp->EmifToAurora_test__DOT__area_emiftoapb_apb_PENABLE)) 
                             & (~ (IData)(vlTOPp->EmifToAurora_test__DOT__area_emiftoapb_apb_PWRITE)))));
    }
}

void VEmifToAurora_test::traceChgThis__4(VEmifToAurora_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VEmifToAurora_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+153,(vlTOPp->EmifToAurora_test__DOT__resetCtrl_axiResetUnbuffered));
        vcdp->chgBus(c+161,(vlTOPp->EmifToAurora_test__DOT__resetCtrl_axiResetCounter),6);
        vcdp->chgBit(c+169,((0x3fU != (IData)(vlTOPp->EmifToAurora_test__DOT__resetCtrl_axiResetCounter))));
    }
}

void VEmifToAurora_test::traceChgThis__5(VEmifToAurora_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VEmifToAurora_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+177,(((~ (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_status)) 
                             & (0xffbdU == vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7))));
    }
}

void VEmifToAurora_test::traceChgThis__6(VEmifToAurora_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VEmifToAurora_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+185,(vlTOPp->EmifToAurora_test__DOT__area_emiftoapb_apb_PENABLE));
    }
}

void VEmifToAurora_test::traceChgThis__7(VEmifToAurora_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VEmifToAurora_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+193,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__when_Gtx_Rx_l70));
    }
}

void VEmifToAurora_test::traceChgThis__8(VEmifToAurora_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VEmifToAurora_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+201,((vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data 
                             != vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7)));
    }
}

void VEmifToAurora_test::traceChgThis__9(VEmifToAurora_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VEmifToAurora_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgQuad(c+209,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state_string),64);
    }
}

void VEmifToAurora_test::traceChgThis__10(VEmifToAurora_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VEmifToAurora_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+225,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_triger_temp));
    }
}

void VEmifToAurora_test::traceChgThis__11(VEmifToAurora_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VEmifToAurora_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+233,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_last_2));
        vcdp->chgBit(c+241,(((0U != (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state)) 
                             & (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_last_2))));
        vcdp->chgBit(c+249,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__when_Gtx_Rx_l106));
        vcdp->chgBit(c+257,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__when_Gtx_Rx_l111));
        vcdp->chgBit(c+265,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__when_Gtx_Rx_l120));
        vcdp->chgBit(c+273,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_last_1));
        vcdp->chgBus(c+281,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_2),32);
        vcdp->chgBus(c+289,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_1),32);
        vcdp->chgBit(c+297,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__when_Gtx_Tx_l140));
        vcdp->chgQuad(c+305,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state_string),64);
    }
}

void VEmifToAurora_test::traceChgThis__12(VEmifToAurora_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VEmifToAurora_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+321,(((0U != (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state)) 
                             & (0xffbcU == vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7))));
    }
}

void VEmifToAurora_test::traceChgThis__13(VEmifToAurora_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VEmifToAurora_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+329,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_ctrl_temp));
    }
}

void VEmifToAurora_test::traceChgThis__14(VEmifToAurora_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VEmifToAurora_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+337,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7),32);
        vcdp->chgBus(c+345,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__crc32_2_crc_o),32);
        vcdp->chgBit(c+353,((1U == vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7)));
        vcdp->chgBit(c+361,((0U == (0xffU & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7 
                                             >> 8U)))));
        vcdp->chgBus(c+369,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__crc32_2_crc_o),32);
        vcdp->chgBus(c+377,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_6),32);
        vcdp->chgBus(c+385,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_5),32);
        vcdp->chgBus(c+393,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_4),32);
        vcdp->chgBus(c+401,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_3),32);
    }
}

void VEmifToAurora_test::traceChgThis__15(VEmifToAurora_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VEmifToAurora_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+409,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroraTxBlockRam__DOT___zz_bram_port1),32);
        vcdp->chgBus(c+417,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroraRxBlockRam__DOT___zz_bram_port0),32);
        vcdp->chgBit(c+425,(vlTOPp->EmifToAurora_test__DOT__resetCtrl_axiReset));
        vcdp->chgBus(c+433,(vlTOPp->EmifToAurora_test__DOT__area_emiftoapb__DOT__emifdatatemp),16);
        vcdp->chgBit(c+441,(vlTOPp->EmifToAurora_test__DOT__area_emiftoapb__DOT__penable_regNext));
        vcdp->chgBus(c+449,(vlTOPp->EmifToAurora_test__DOT__apb3Router_1__DOT__selIndex),2);
    }
}

void VEmifToAurora_test::traceChgThis__16(VEmifToAurora_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VEmifToAurora_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+457,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_aurora_intrrupt));
        vcdp->chgBus(c+465,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_mem_data),32);
        vcdp->chgBit(c+473,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_status));
    }
}

void VEmifToAurora_test::traceChgThis__17(VEmifToAurora_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VEmifToAurora_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+481,(vlTOPp->EmifToAurora_test__DOT__area_emiftoapb__DOT__penable));
        vcdp->chgBit(c+489,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_ctrl));
        vcdp->chgBit(c+497,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_triger));
        vcdp->chgBit(c+505,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_triger));
        vcdp->chgBit(c+513,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_sendtriger));
    }
}

void VEmifToAurora_test::traceChgThis__18(VEmifToAurora_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VEmifToAurora_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+521,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroraTxBlockRam__DOT___zz_bram_port0),32);
        vcdp->chgBus(c+529,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroraRxBlockRam__DOT___zz_bram_port1),32);
        vcdp->chgBus(c+537,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_length),8);
        vcdp->chgBus(c+545,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_data_cnt),8);
        vcdp->chgBus(c+553,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data),32);
        vcdp->chgBus(c+561,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data),32);
    }
}

void VEmifToAurora_test::traceChgThis__19(VEmifToAurora_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VEmifToAurora_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+569,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_triger_temp_delay_1));
        vcdp->chgBit(c+577,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_triger_temp_delay_1_1));
        vcdp->chgBit(c+585,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_triger_temp_delay_2));
        vcdp->chgBit(c+593,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_triger_temp_delay_1_2));
        vcdp->chgBit(c+601,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_triger_temp_delay_2_1));
        vcdp->chgBit(c+609,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_triger_temp_delay_3));
    }
}

void VEmifToAurora_test::traceChgThis__20(VEmifToAurora_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VEmifToAurora_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+617,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_mem_wren));
        vcdp->chgBus(c+625,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_mem_wrwe),4);
        vcdp->chgBus(c+633,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_mem_addr),8);
        vcdp->chgBit(c+641,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_mem_rden));
        vcdp->chgBus(c+649,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state),3);
        vcdp->chgBit(c+657,((0U == (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state))));
        vcdp->chgBit(c+665,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_last));
        vcdp->chgBus(c+673,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_mem_addrtemp),8);
    }
}

void VEmifToAurora_test::traceChgThis__21(VEmifToAurora_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VEmifToAurora_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+681,((0xffU & ((0U != (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))
                                       ? (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_mem_addrtemp)
                                       : ((IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_mem_addrtemp) 
                                          - (IData)(1U))))),8);
        vcdp->chgBit(c+689,(((((3U == (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state)) 
                               | (4U == (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state))) 
                              | (5U == (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state))) 
                             & (0U != (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state)))));
    }
}

void VEmifToAurora_test::traceChgThis__22(VEmifToAurora_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VEmifToAurora_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+697,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_senddatatriger));
    }
}

void VEmifToAurora_test::traceChgThis__23(VEmifToAurora_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VEmifToAurora_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+705,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txhead),32);
        vcdp->chgBus(c+713,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_length),8);
        vcdp->chgBus(c+721,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_data_cnt),8);
        vcdp->chgBit(c+729,((0U == (0xffU & (vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txhead 
                                             >> 8U)))));
        vcdp->chgBit(c+737,(((IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_data_cnt) 
                             < (0xffU & ((IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_length) 
                                         - (IData)(1U))))));
    }
}

void VEmifToAurora_test::traceChgThis__24(VEmifToAurora_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VEmifToAurora_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+745,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_headtemp),32);
        vcdp->chgBit(c+753,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_ctrl_temp_delay_1));
        vcdp->chgBit(c+761,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_ctrl_temp_delay_2));
        vcdp->chgBit(c+769,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_ctrl_temp_delay_3));
    }
}

void VEmifToAurora_test::traceChgThis__25(VEmifToAurora_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VEmifToAurora_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+777,((0U != (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))));
        vcdp->chgBus(c+785,(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state),3);
        vcdp->chgBit(c+793,((2U == (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))));
        vcdp->chgBit(c+801,((3U == (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))));
        vcdp->chgBit(c+809,((4U == (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))));
        vcdp->chgBit(c+817,((5U == (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))));
        vcdp->chgBit(c+825,((6U == (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))));
        vcdp->chgBit(c+833,((7U == (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))));
        vcdp->chgBit(c+841,(((((3U == (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state)) 
                               | (4U == (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) 
                              | (5U == (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state))) 
                             & (0U != (IData)(vlTOPp->EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state)))));
    }
}

void VEmifToAurora_test::traceChgThis__26(VEmifToAurora_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VEmifToAurora_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+849,(vlTOPp->emif_emif_addr),24);
        vcdp->chgBus(c+857,(vlTOPp->emif_emif_data_read),16);
        vcdp->chgBus(c+865,(vlTOPp->emif_emif_data_write),16);
        vcdp->chgBit(c+873,(vlTOPp->emif_emif_data_writeEnable));
        vcdp->chgBit(c+881,(vlTOPp->emif_emif_cs));
        vcdp->chgBit(c+889,(vlTOPp->emif_emif_we));
        vcdp->chgBit(c+897,(vlTOPp->emif_emif_oe));
        vcdp->chgBit(c+905,(vlTOPp->clk));
        vcdp->chgBit(c+913,(vlTOPp->reset));
        vcdp->chgBit(c+921,(vlTOPp->aurora_userclk));
        vcdp->chgBit(c+929,(vlTOPp->intrrupt));
        vcdp->chgBus(c+937,(((0x800000U & vlTOPp->emif_emif_addr)
                              ? (IData)(vlTOPp->EmifToAurora_test__DOT__area_emiftoapb__DOT___zz_emif_emif_data_write)
                              : (IData)(vlTOPp->EmifToAurora_test__DOT__area_emiftoapb__DOT___zz_emif_emif_data_write_1))),16);
        vcdp->chgBit(c+945,((1U & (~ (IData)(vlTOPp->emif_emif_oe)))));
        vcdp->chgBus(c+953,((0xfffffU & (vlTOPp->emif_emif_addr 
                                         << 2U))),20);
        vcdp->chgBit(c+961,((1U & (~ (IData)(vlTOPp->emif_emif_cs)))));
        vcdp->chgBus(c+969,((0xffU & vlTOPp->emif_emif_addr)),8);
        vcdp->chgBit(c+977,((((~ (IData)(vlTOPp->emif_emif_we)) 
                              & (IData)(vlTOPp->emif_emif_oe)) 
                             & (~ (vlTOPp->emif_emif_addr 
                                   >> 0x17U)))));
        vcdp->chgBit(c+985,((1U & (vlTOPp->emif_emif_addr 
                                   >> 0x17U))));
    }
}
