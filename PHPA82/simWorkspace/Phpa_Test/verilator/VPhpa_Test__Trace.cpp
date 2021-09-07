// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPhpa_Test__Syms.h"


//======================

void VPhpa_Test::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VPhpa_Test* t = (VPhpa_Test*)userthis;
    VPhpa_Test__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VPhpa_Test::traceChgThis(VPhpa_Test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPhpa_Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
                                              >> 3U))))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 3U))))) {
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 4U))))) {
            vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 6U))))) {
            vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 7U))))) {
            vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 8U))))) {
            vlTOPp->traceChgThis__8(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 0xbU))))) {
            vlTOPp->traceChgThis__9(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 0xdU))))) {
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
        if (VL_UNLIKELY((0x20U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__14(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((0x40U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__15(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((0x80U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__16(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((0x100U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__17(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((0x200U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__18(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((0x400U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__19(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((0x800U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__21(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((0x1000U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__22(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__23(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VPhpa_Test::traceChgThis__2(VPhpa_Test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPhpa_Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1,(vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PWRITE));
        vcdp->chgBus(c+9,(vlTOPp->Phpa_Test__DOT__area_apbtimer_apb_PRDATA),16);
        vcdp->chgBus(c+17,(vlTOPp->Phpa_Test__DOT__area_ad5544_triger_apb_PRDATA),16);
        vcdp->chgBus(c+25,(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl_apb_PRDATA),16);
        vcdp->chgBus(c+33,(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl_apb_PRDATA),16);
        vcdp->chgBus(c+41,(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl_apb_PRDATA),16);
        vcdp->chgBus(c+49,(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl_apb_PRDATA),16);
        vcdp->chgBus(c+57,(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl_apb_PRDATA),16);
        vcdp->chgBit(c+65,(vlTOPp->Phpa_Test__DOT__apb_decoder_io_input_PREADY));
        vcdp->chgBus(c+73,(vlTOPp->Phpa_Test__DOT__apb3Router_1__DOT___zz_io_input_PRDATA),16);
        vcdp->chgBit(c+81,(vlTOPp->Phpa_Test__DOT__apb_decoder_io_input_PSLVERROR));
        vcdp->chgBus(c+89,(vlTOPp->Phpa_Test__DOT__apb_decoder_io_output_PSEL),7);
        vcdp->chgBit(c+97,((1U & (IData)(vlTOPp->Phpa_Test__DOT__apb_decoder_io_output_PSEL))));
        vcdp->chgBit(c+105,((1U & ((IData)(vlTOPp->Phpa_Test__DOT__apb_decoder_io_output_PSEL) 
                                   >> 1U))));
        vcdp->chgBit(c+113,((1U & ((IData)(vlTOPp->Phpa_Test__DOT__apb_decoder_io_output_PSEL) 
                                   >> 2U))));
        vcdp->chgBit(c+121,((1U & ((IData)(vlTOPp->Phpa_Test__DOT__apb_decoder_io_output_PSEL) 
                                   >> 3U))));
        vcdp->chgBit(c+129,((1U & ((IData)(vlTOPp->Phpa_Test__DOT__apb_decoder_io_output_PSEL) 
                                   >> 4U))));
        vcdp->chgBit(c+137,((1U & ((IData)(vlTOPp->Phpa_Test__DOT__apb_decoder_io_output_PSEL) 
                                   >> 5U))));
        vcdp->chgBit(c+145,((1U & ((IData)(vlTOPp->Phpa_Test__DOT__apb_decoder_io_output_PSEL) 
                                   >> 6U))));
        vcdp->chgBit(c+153,(vlTOPp->Phpa_Test__DOT__area_apbtimer__DOT__area_busCtrl_doWrite));
        vcdp->chgBit(c+161,(vlTOPp->Phpa_Test__DOT__area_ad5544_triger__DOT__when_AD5544_l91));
        vcdp->chgBit(c+169,(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ctrl_doWrite));
        vcdp->chgBit(c+177,(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ctrl_doWrite));
        vcdp->chgBit(c+185,(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ctrl_doWrite));
        vcdp->chgBit(c+193,(vlTOPp->Phpa_Test__DOT__apb_decoder__DOT__when_Apb3Decoder_l84));
    }
}

void VPhpa_Test::traceChgThis__3(VPhpa_Test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPhpa_Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+201,((((IData)(vlTOPp->Phpa_Test__DOT__apb_decoder_io_output_PSEL) 
                              & (IData)(vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PENABLE)) 
                             & (IData)(vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PWRITE))));
        vcdp->chgBit(c+209,((((IData)(vlTOPp->Phpa_Test__DOT__apb_decoder_io_output_PSEL) 
                              & (IData)(vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PENABLE)) 
                             & (~ (IData)(vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PWRITE)))));
        vcdp->chgBit(c+217,(((((IData)(vlTOPp->Phpa_Test__DOT__apb_decoder_io_output_PSEL) 
                               >> 1U) & (IData)(vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PENABLE)) 
                             & (IData)(vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PWRITE))));
        vcdp->chgBit(c+225,(((((IData)(vlTOPp->Phpa_Test__DOT__apb_decoder_io_output_PSEL) 
                               >> 1U) & (IData)(vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PENABLE)) 
                             & (~ (IData)(vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PWRITE)))));
        vcdp->chgBit(c+233,(((((IData)(vlTOPp->Phpa_Test__DOT__apb_decoder_io_output_PSEL) 
                               >> 2U) & (IData)(vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PENABLE)) 
                             & (IData)(vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PWRITE))));
        vcdp->chgBit(c+241,(((((IData)(vlTOPp->Phpa_Test__DOT__apb_decoder_io_output_PSEL) 
                               >> 2U) & (IData)(vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PENABLE)) 
                             & (~ (IData)(vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PWRITE)))));
        vcdp->chgBit(c+249,(((((IData)(vlTOPp->Phpa_Test__DOT__apb_decoder_io_output_PSEL) 
                               >> 3U) & (IData)(vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PENABLE)) 
                             & (IData)(vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PWRITE))));
        vcdp->chgBit(c+257,(((((IData)(vlTOPp->Phpa_Test__DOT__apb_decoder_io_output_PSEL) 
                               >> 3U) & (IData)(vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PENABLE)) 
                             & (~ (IData)(vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PWRITE)))));
        vcdp->chgBit(c+265,(((((IData)(vlTOPp->Phpa_Test__DOT__apb_decoder_io_output_PSEL) 
                               >> 4U) & (IData)(vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PENABLE)) 
                             & (IData)(vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PWRITE))));
        vcdp->chgBit(c+273,(((((IData)(vlTOPp->Phpa_Test__DOT__apb_decoder_io_output_PSEL) 
                               >> 4U) & (IData)(vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PENABLE)) 
                             & (~ (IData)(vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PWRITE)))));
        vcdp->chgBit(c+281,(((((IData)(vlTOPp->Phpa_Test__DOT__apb_decoder_io_output_PSEL) 
                               >> 5U) & (IData)(vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PENABLE)) 
                             & (IData)(vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PWRITE))));
        vcdp->chgBit(c+289,(((((IData)(vlTOPp->Phpa_Test__DOT__apb_decoder_io_output_PSEL) 
                               >> 5U) & (IData)(vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PENABLE)) 
                             & (~ (IData)(vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PWRITE)))));
        vcdp->chgBit(c+297,(((((IData)(vlTOPp->Phpa_Test__DOT__apb_decoder_io_output_PSEL) 
                               >> 6U) & (IData)(vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PENABLE)) 
                             & (IData)(vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PWRITE))));
        vcdp->chgBit(c+305,(((((IData)(vlTOPp->Phpa_Test__DOT__apb_decoder_io_output_PSEL) 
                               >> 6U) & (IData)(vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PENABLE)) 
                             & (~ (IData)(vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PWRITE)))));
    }
}

void VPhpa_Test::traceChgThis__4(VPhpa_Test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPhpa_Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+313,(vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PENABLE));
        vcdp->chgBit(c+321,(vlTOPp->Phpa_Test__DOT__area_counter_willClear));
        vcdp->chgBus(c+329,(vlTOPp->Phpa_Test__DOT__area_counter_valueNext),26);
    }
}

void VPhpa_Test::traceChgThis__5(VPhpa_Test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPhpa_Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+337,(vlTOPp->Phpa_Test__DOT__area_apbtimer__DOT__when_ApbTimer_l38));
        vcdp->chgBit(c+345,(vlTOPp->Phpa_Test__DOT__area_apbtimer__DOT__when_ApbTimer_l38));
        vcdp->chgBit(c+353,(vlTOPp->Phpa_Test__DOT__area_apbtimer__DOT__area_timerA__DOT__limitHit));
    }
}

void VPhpa_Test::traceChgThis__6(VPhpa_Test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPhpa_Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+361,(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__next_state),7);
    }
}

void VPhpa_Test::traceChgThis__7(VPhpa_Test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPhpa_Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+369,(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__next_state),7);
    }
}

void VPhpa_Test::traceChgThis__8(VPhpa_Test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPhpa_Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+377,(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__next_state),7);
    }
}

void VPhpa_Test::traceChgThis__9(VPhpa_Test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPhpa_Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+385,(((IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_triger_ad5544_tri) 
                             | (IData)(vlTOPp->Phpa_Test__DOT__area_interrupt_temp))));
        vcdp->chgBit(c+393,(vlTOPp->Phpa_Test__DOT__area_ad5544_triger_ad5544_tri));
    }
}

void VPhpa_Test::traceChgThis__10(VPhpa_Test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPhpa_Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+401,(vlTOPp->Phpa_Test__DOT__area_apbtimer__DOT__area_timerA_io_full));
    }
}

void VPhpa_Test::traceChgThis__11(VPhpa_Test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPhpa_Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+409,(vlTOPp->Phpa_Test__DOT__area_emif_interface__DOT__apb_PRDATA_regNextWhen),16);
        vcdp->chgBit(c+417,(vlTOPp->Phpa_Test__DOT__area_emif_interface__DOT__penable_regNext));
        vcdp->chgBus(c+425,(vlTOPp->Phpa_Test__DOT__area_apbtimer__DOT__area_timerA__DOT__counter),16);
        vcdp->chgBus(c+433,(vlTOPp->Phpa_Test__DOT__area_apbtimer__DOT__area_timerA_io_limit_driver),16);
        vcdp->chgBit(c+441,(vlTOPp->Phpa_Test__DOT__area_ad5544_triger__DOT__area_temp_delay_1));
        vcdp->chgBit(c+449,(vlTOPp->Phpa_Test__DOT__area_ad5544_triger__DOT__area_temp_delay_2));
        vcdp->chgBit(c+457,(vlTOPp->Phpa_Test__DOT__area_ad5544_triger__DOT__area_temp_delay_3));
        vcdp->chgBus(c+465,(vlTOPp->Phpa_Test__DOT__apb3Router_1__DOT__selIndex),3);
    }
}

void VPhpa_Test::traceChgThis__12(VPhpa_Test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPhpa_Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+473,(vlTOPp->Phpa_Test__DOT__area_ledtemp));
        vcdp->chgBus(c+481,(vlTOPp->Phpa_Test__DOT__area_counter_value),26);
        vcdp->chgBit(c+489,((0x2faf07fU == vlTOPp->Phpa_Test__DOT__area_counter_value)));
        vcdp->chgBit(c+497,(vlTOPp->Phpa_Test__DOT__area_emif_interface__DOT__penable));
        vcdp->chgBit(c+505,(vlTOPp->Phpa_Test__DOT__area_apbtimer__DOT__area_timerA__DOT__inhibitFull));
        vcdp->chgBit(c+513,(vlTOPp->Phpa_Test__DOT__area_ad5544_triger__DOT__area_temp));
        vcdp->chgBit(c+521,(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out));
        vcdp->chgBus(c+529,(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_dvidecnt),4);
        vcdp->chgBit(c+537,(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out));
        vcdp->chgBus(c+545,(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_dvidecnt),4);
        vcdp->chgBit(c+553,(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out));
        vcdp->chgBus(c+561,(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_dvidecnt),4);
        vcdp->chgBus(c+569,(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_pos_reg),32);
        vcdp->chgBus(c+577,(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_status_reg),16);
        vcdp->chgBit(c+585,(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__clk_out));
        vcdp->chgBus(c+593,(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__clk_dvidecnt),4);
        vcdp->chgBus(c+601,(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_data_temp_1),16);
        vcdp->chgBus(c+609,(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_data_temp_2),16);
        vcdp->chgBus(c+617,(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_data_temp_3),16);
        vcdp->chgBus(c+625,(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_data_temp_4),16);
        vcdp->chgBus(c+633,(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_data_temp_5),16);
        vcdp->chgBus(c+641,(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_data_temp_6),16);
        vcdp->chgBus(c+649,(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_data_temp_7),16);
        vcdp->chgBus(c+657,(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_data_temp_8),16);
    }
}

void VPhpa_Test::traceChgThis__13(VPhpa_Test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPhpa_Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+665,(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_cs));
        vcdp->chgBit(c+673,(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_rd));
        vcdp->chgBit(c+681,(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_reset));
        vcdp->chgBit(c+689,(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_convsta));
        vcdp->chgBit(c+697,(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_convstb));
        vcdp->chgBit(c+705,(vlTOPp->Phpa_Test__DOT__area_apbtimer__DOT___zz_io_tick));
        vcdp->chgBus(c+713,(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_ch1_o),16);
        vcdp->chgBus(c+721,(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_ch2_o),16);
        vcdp->chgBus(c+729,(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_ch3_o),16);
        vcdp->chgBus(c+737,(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_ch4_o),16);
        vcdp->chgBus(c+745,(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_ch5_o),16);
        vcdp->chgBus(c+753,(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_ch6_o),16);
        vcdp->chgBus(c+761,(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_ch7_o),16);
        vcdp->chgBus(c+769,(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_ch8_o),16);
        vcdp->chgBit(c+777,(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_data_valid_o));
        vcdp->chgBus(c+785,(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__cnt),8);
        vcdp->chgBus(c+793,(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i),8);
        vcdp->chgBus(c+801,(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__cnt5us),16);
        vcdp->chgBus(c+809,(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state),8);
    }
}

void VPhpa_Test::traceChgThis__14(VPhpa_Test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPhpa_Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+817,(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl_enc_clk));
        vcdp->chgQuad(c+825,(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl_enc_position_all),41);
        vcdp->chgBus(c+841,(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl_enc_position_out),32);
        vcdp->chgBit(c+849,(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl_erro_flag));
        vcdp->chgBit(c+857,(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl_warn_flag));
        vcdp->chgBit(c+865,((1U & (IData)(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT____Vcellout__area_bissc_ctrl__crc_flag))));
        vcdp->chgBus(c+873,(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT____Vcellout__area_bissc_ctrl__crc_flag),6);
        vcdp->chgBus(c+881,(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__CNT),12);
        vcdp->chgBus(c+889,(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__DATA_CNT),12);
        vcdp->chgBus(c+897,(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__start_flag),2);
        vcdp->chgBus(c+905,(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__Curr_State),8);
    }
}

void VPhpa_Test::traceChgThis__15(VPhpa_Test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPhpa_Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+913,(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_CS));
        vcdp->chgBit(c+921,(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC));
        vcdp->chgBit(c+929,(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_RS));
        vcdp->chgBit(c+937,(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK));
        vcdp->chgBit(c+945,(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN));
        vcdp->chgBus(c+953,(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt),10);
        vcdp->chgBus(c+961,(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg),18);
        vcdp->chgBus(c+969,(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__channel),4);
        vcdp->chgBus(c+977,(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state),7);
        vcdp->chgBit(c+985,(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__ad5544_trig_reg1));
        vcdp->chgBit(c+993,(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__ad5544_trig_reg2));
        vcdp->chgBit(c+1001,(((IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__ad5544_trig_reg1) 
                              & (~ (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__ad5544_trig_reg2)))));
    }
}

void VPhpa_Test::traceChgThis__16(VPhpa_Test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPhpa_Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1009,(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_CS));
        vcdp->chgBit(c+1017,(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC));
        vcdp->chgBit(c+1025,(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_RS));
        vcdp->chgBit(c+1033,(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK));
        vcdp->chgBit(c+1041,(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN));
        vcdp->chgBus(c+1049,(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt),10);
        vcdp->chgBus(c+1057,(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg),18);
        vcdp->chgBus(c+1065,(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__channel),4);
        vcdp->chgBus(c+1073,(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state),7);
        vcdp->chgBit(c+1081,(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__ad5544_trig_reg1));
        vcdp->chgBit(c+1089,(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__ad5544_trig_reg2));
        vcdp->chgBit(c+1097,(((IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__ad5544_trig_reg1) 
                              & (~ (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__ad5544_trig_reg2)))));
    }
}

void VPhpa_Test::traceChgThis__17(VPhpa_Test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPhpa_Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1105,(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_CS));
        vcdp->chgBit(c+1113,(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC));
        vcdp->chgBit(c+1121,(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_RS));
        vcdp->chgBit(c+1129,(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK));
        vcdp->chgBit(c+1137,(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN));
        vcdp->chgBus(c+1145,(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt),10);
        vcdp->chgBus(c+1153,(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg),18);
        vcdp->chgBus(c+1161,(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__channel),4);
        vcdp->chgBus(c+1169,(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state),7);
        vcdp->chgBit(c+1177,(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__ad5544_trig_reg1));
        vcdp->chgBit(c+1185,(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__ad5544_trig_reg2));
        vcdp->chgBit(c+1193,(((IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__ad5544_trig_reg1) 
                              & (~ (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__ad5544_trig_reg2)))));
    }
}

void VPhpa_Test::traceChgThis__18(VPhpa_Test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPhpa_Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1201,(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__ENC_SLO_1reg));
        vcdp->chgBit(c+1209,(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__ENC_SLO_2reg));
        vcdp->chgBit(c+1217,(((~ (IData)(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__ENC_SLO_1reg)) 
                              & (IData)(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__ENC_SLO_2reg))));
    }
}

void VPhpa_Test::traceChgThis__19(VPhpa_Test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPhpa_Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1225,(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN1_driver),16);
        vcdp->chgBus(c+1233,(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN2_driver),16);
        vcdp->chgBus(c+1241,(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN3_driver),16);
        vcdp->chgBus(c+1249,(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN4_driver),16);
        vcdp->chgBus(c+1257,(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN1_driver),18);
        vcdp->chgBus(c+1265,((0x10000U | (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN2_driver))),18);
        vcdp->chgBus(c+1273,((0x20000U | (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN3_driver))),18);
        vcdp->chgBus(c+1281,((0x30000U | (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN4_driver))),18);
        vcdp->chgBus(c+1289,(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN1_driver),16);
        vcdp->chgBus(c+1297,(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN2_driver),16);
        vcdp->chgBus(c+1305,(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN3_driver),16);
        vcdp->chgBus(c+1313,(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN4_driver),16);
        vcdp->chgBus(c+1321,(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN1_driver),18);
        vcdp->chgBus(c+1329,((0x10000U | (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN2_driver))),18);
        vcdp->chgBus(c+1337,((0x20000U | (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN3_driver))),18);
        vcdp->chgBus(c+1345,((0x30000U | (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN4_driver))),18);
        vcdp->chgBus(c+1353,(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN1_driver),16);
        vcdp->chgBus(c+1361,(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN2_driver),16);
        vcdp->chgBus(c+1369,(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN3_driver),16);
        vcdp->chgBus(c+1377,(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN4_driver),16);
        vcdp->chgBus(c+1385,(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN1_driver),18);
        vcdp->chgBus(c+1393,((0x10000U | (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN2_driver))),18);
        vcdp->chgBus(c+1401,((0x20000U | (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN3_driver))),18);
        vcdp->chgBus(c+1409,((0x30000U | (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN4_driver))),18);
    }
}

void VPhpa_Test::traceChgThis__21(VPhpa_Test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPhpa_Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1417,(vlTOPp->Phpa_Test__DOT__area_interrupt_temp));
    }
}

void VPhpa_Test::traceChgThis__22(VPhpa_Test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPhpa_Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1425,(vlTOPp->Phpa_Test__DOT__area_apbtimer_interrupt_delay_1));
        vcdp->chgBit(c+1433,(vlTOPp->Phpa_Test__DOT__area_apbtimer_interrupt_delay_2));
        vcdp->chgBit(c+1441,(vlTOPp->Phpa_Test__DOT__area_apbtimer_interrupt_delay_3));
    }
}

void VPhpa_Test::traceChgThis__23(VPhpa_Test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPhpa_Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1449,(vlTOPp->emif_emif_addr),20);
        vcdp->chgBus(c+1457,(vlTOPp->emif_emif_data_read),16);
        vcdp->chgBus(c+1465,(vlTOPp->emif_emif_data_write),16);
        vcdp->chgBit(c+1473,(vlTOPp->emif_emif_data_writeEnable));
        vcdp->chgBit(c+1481,(vlTOPp->emif_emif_cs));
        vcdp->chgBit(c+1489,(vlTOPp->emif_emif_we));
        vcdp->chgBit(c+1497,(vlTOPp->emif_emif_oe));
        vcdp->chgBit(c+1505,(vlTOPp->ad5544_A_AD5544_CS));
        vcdp->chgBit(c+1513,(vlTOPp->ad5544_A_AD5544_LDAC));
        vcdp->chgBit(c+1521,(vlTOPp->ad5544_A_AD5544_MSB));
        vcdp->chgBit(c+1529,(vlTOPp->ad5544_A_AD5544_RS));
        vcdp->chgBit(c+1537,(vlTOPp->ad5544_A_AD5544_SCLK));
        vcdp->chgBit(c+1545,(vlTOPp->ad5544_A_AD5544_SDIN));
        vcdp->chgBit(c+1553,(vlTOPp->ad5544_B_AD5544_CS));
        vcdp->chgBit(c+1561,(vlTOPp->ad5544_B_AD5544_LDAC));
        vcdp->chgBit(c+1569,(vlTOPp->ad5544_B_AD5544_MSB));
        vcdp->chgBit(c+1577,(vlTOPp->ad5544_B_AD5544_RS));
        vcdp->chgBit(c+1585,(vlTOPp->ad5544_B_AD5544_SCLK));
        vcdp->chgBit(c+1593,(vlTOPp->ad5544_B_AD5544_SDIN));
        vcdp->chgBit(c+1601,(vlTOPp->ad5544_C_AD5544_CS));
        vcdp->chgBit(c+1609,(vlTOPp->ad5544_C_AD5544_LDAC));
        vcdp->chgBit(c+1617,(vlTOPp->ad5544_C_AD5544_MSB));
        vcdp->chgBit(c+1625,(vlTOPp->ad5544_C_AD5544_RS));
        vcdp->chgBit(c+1633,(vlTOPp->ad5544_C_AD5544_SCLK));
        vcdp->chgBit(c+1641,(vlTOPp->ad5544_C_AD5544_SDIN));
        vcdp->chgBit(c+1649,(vlTOPp->biss_c_enc_clk));
        vcdp->chgBit(c+1657,(vlTOPp->biss_c_enc_data));
        vcdp->chgBus(c+1665,(vlTOPp->ad7606_ad_data),16);
        vcdp->chgBit(c+1673,(vlTOPp->ad7606_ad_busy));
        vcdp->chgBit(c+1681,(vlTOPp->ad7606_first_data));
        vcdp->chgBus(c+1689,(vlTOPp->ad7606_ad_os),3);
        vcdp->chgBit(c+1697,(vlTOPp->ad7606_ad_cs));
        vcdp->chgBit(c+1705,(vlTOPp->ad7606_ad_rd));
        vcdp->chgBit(c+1713,(vlTOPp->ad7606_ad_reset));
        vcdp->chgBit(c+1721,(vlTOPp->ad7606_ad_convsta));
        vcdp->chgBit(c+1729,(vlTOPp->ad7606_ad_convstb));
        vcdp->chgBit(c+1737,(vlTOPp->ad7606_ad_range));
        vcdp->chgBit(c+1745,(vlTOPp->clk));
        vcdp->chgBit(c+1753,(vlTOPp->reset));
        vcdp->chgBit(c+1761,(vlTOPp->led));
        vcdp->chgBus(c+1769,((0xfU & (vlTOPp->emif_emif_addr 
                                      << 1U))),4);
        vcdp->chgBit(c+1777,((1U & (~ (IData)(vlTOPp->emif_emif_oe)))));
        vcdp->chgBus(c+1785,((0xfffffU & (vlTOPp->emif_emif_addr 
                                          << 1U))),20);
        vcdp->chgBit(c+1793,((1U & (~ (IData)(vlTOPp->emif_emif_cs)))));
        vcdp->chgBus(c+1801,(((1U == (IData)(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__Curr_State))
                               ? 2U : ((2U == (IData)(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__Curr_State))
                                        ? ((IData)(vlTOPp->biss_c_enc_data)
                                            ? 4U : 2U)
                                        : ((4U == (IData)(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__Curr_State))
                                            ? ((0x64U 
                                                <= (IData)(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__CNT))
                                                ? 8U
                                                : 4U)
                                            : ((8U 
                                                == (IData)(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__Curr_State))
                                                ? (
                                                   (0x29U 
                                                    <= (IData)(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__DATA_CNT))
                                                    ? 0x10U
                                                    : 8U)
                                                : (
                                                   (0x10U 
                                                    == (IData)(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__Curr_State))
                                                    ? 0x20U
                                                    : 
                                                   ((0x20U 
                                                     == (IData)(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__Curr_State))
                                                     ? 
                                                    (((IData)(vlTOPp->biss_c_enc_data) 
                                                      & (0x7d0U 
                                                         <= (IData)(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__CNT)))
                                                      ? 2U
                                                      : 0x20U)
                                                     : 1U))))))),8);
    }
}
