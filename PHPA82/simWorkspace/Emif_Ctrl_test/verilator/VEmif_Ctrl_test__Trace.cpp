// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VEmif_Ctrl_test__Syms.h"


//======================

void VEmif_Ctrl_test::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VEmif_Ctrl_test* t = (VEmif_Ctrl_test*)userthis;
    VEmif_Ctrl_test__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VEmif_Ctrl_test::traceChgThis(VEmif_Ctrl_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VEmif_Ctrl_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 1U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 5U))))) {
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 3U))))) {
            vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 3U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 5U))))) {
            vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 5U))))) {
            vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__8(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((8U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__9(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                >> 3U) | (vlTOPp->__Vm_traceActivity 
                                          >> 5U))))) {
            vlTOPp->traceChgThis__10(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((0x10U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__11(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                >> 4U) | (vlTOPp->__Vm_traceActivity 
                                          >> 5U))))) {
            vlTOPp->traceChgThis__12(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((0x20U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__13(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__14(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VEmif_Ctrl_test::traceChgThis__2(VEmif_Ctrl_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VEmif_Ctrl_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_emif_interface_apb_PWRITE));
        vcdp->chgBus(c+9,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_gpioACtrl_io_apb_PRDATA),32);
        vcdp->chgBus(c+17,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl_io_apb_PRDATA),32);
        vcdp->chgBit(c+25,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__apb_decoder_io_input_PREADY));
        vcdp->chgBus(c+33,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__apb3Router_1__DOT___zz_io_input_PRDATA),32);
        vcdp->chgBit(c+41,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__apb_decoder_io_input_PSLVERROR));
        vcdp->chgBus(c+49,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__apb_decoder_io_output_PSEL),2);
        vcdp->chgBit(c+57,((1U & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__apb_decoder_io_output_PSEL))));
        vcdp->chgBit(c+65,((1U & ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__apb_decoder_io_output_PSEL) 
                                  >> 1U))));
        vcdp->chgBit(c+73,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_gpioACtrl__DOT__ctrl_doWrite));
        vcdp->chgBit(c+81,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy_io_pop_ready));
        vcdp->chgBit(c+89,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__busCtrl_doWrite));
        vcdp->chgBit(c+97,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT___zz_bridge_write_streamUnbuffered_valid));
        vcdp->chgBit(c+105,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_read_streamBreaked_ready));
        vcdp->chgBit(c+113,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__when_BusSlaveFactory_l335));
        vcdp->chgBit(c+121,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__when_BusSlaveFactory_l335_1));
        vcdp->chgBit(c+129,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__when_BusSlaveFactory_l335_2));
        vcdp->chgBit(c+137,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__when_BusSlaveFactory_l366));
        vcdp->chgBit(c+145,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__when_BusSlaveFactory_l335_3));
        vcdp->chgBit(c+153,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+161,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushPtr_valueNext),4);
        vcdp->chgBit(c+169,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushing));
        vcdp->chgBit(c+177,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_popPtr_willIncrement));
        vcdp->chgBus(c+185,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_popPtr_valueNext),4);
        vcdp->chgBit(c+193,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_popping));
        vcdp->chgBit(c+201,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__apb_decoder__DOT__when_Apb3Decoder_l84));
    }
}

void VEmif_Ctrl_test::traceChgThis__3(VEmif_Ctrl_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VEmif_Ctrl_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+209,((((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__apb_decoder_io_output_PSEL) 
                              & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_emif_interface_apb_PENABLE)) 
                             & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_emif_interface_apb_PWRITE))));
        vcdp->chgBit(c+217,((((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__apb_decoder_io_output_PSEL) 
                              & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_emif_interface_apb_PENABLE)) 
                             & (~ (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_emif_interface_apb_PWRITE)))));
        vcdp->chgBit(c+225,(((((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__apb_decoder_io_output_PSEL) 
                               >> 1U) & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_emif_interface_apb_PENABLE)) 
                             & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_emif_interface_apb_PWRITE))));
        vcdp->chgBit(c+233,(((((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__apb_decoder_io_output_PSEL) 
                               >> 1U) & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_emif_interface_apb_PENABLE)) 
                             & (~ (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_emif_interface_apb_PWRITE)))));
        vcdp->chgBit(c+241,(((0xfU == (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushPtr_value)) 
                             & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+249,(((0xfU == (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_popPtr_value)) 
                             & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+257,(((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_pushing) 
                             != (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_popping))));
    }
}

void VEmif_Ctrl_test::traceChgThis__4(VEmif_Ctrl_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VEmif_Ctrl_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+265,(((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushing) 
                             != (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popping))));
    }
}

void VEmif_Ctrl_test::traceChgThis__5(VEmif_Ctrl_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VEmif_Ctrl_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+273,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_emif_interface_apb_PENABLE));
        vcdp->chgBit(c+281,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx_io_error));
        vcdp->chgBit(c+289,((1U & (~ (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_full)))));
        vcdp->chgBit(c+297,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy_io_pop_valid));
        vcdp->chgBus(c+305,(((((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_risingOccupancy) 
                               & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ptrMatch)) 
                              << 4U) | (0xfU & ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushPtr_value) 
                                                - (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popPtr_value))))),5);
        vcdp->chgBus(c+313,(((((~ (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_risingOccupancy)) 
                               & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ptrMatch)) 
                              << 4U) | (0xfU & ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popPtr_value) 
                                                - (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushPtr_value))))),5);
        vcdp->chgBit(c+321,((1U & (~ (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_full)))));
        vcdp->chgBit(c+329,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy_io_pop_valid));
        vcdp->chgBus(c+337,(((((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_risingOccupancy) 
                               & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_ptrMatch)) 
                              << 4U) | (0xfU & ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_pushPtr_value) 
                                                - (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_popPtr_value))))),5);
        vcdp->chgBus(c+345,(((((~ (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_risingOccupancy)) 
                               & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_ptrMatch)) 
                              << 4U) | (0xfU & ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_popPtr_value) 
                                                - (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_pushPtr_value))))),5);
        vcdp->chgBit(c+353,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_interruptCtrl_writeInt));
        vcdp->chgBit(c+361,(((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_validReg) 
                             & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_full))));
        vcdp->chgBit(c+369,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__clockDivider_counter_willIncrement));
        vcdp->chgBus(c+377,(((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__clockDivider_counter_willOverflow)
                              ? 0U : (7U & ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__clockDivider_counter_value) 
                                            + (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__clockDivider_counter_willIncrement))))),3);
        vcdp->chgBit(c+385,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__clockDivider_counter_willOverflow));
        vcdp->chgQuad(c+393,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__stateMachine_state_string),48);
        vcdp->chgBit(c+409,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__bitTimer_tick));
        vcdp->chgBit(c+417,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__when_UartCtrlRx_l125));
        vcdp->chgQuad(c+425,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_state_string),48);
        vcdp->chgBit(c+441,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ptrMatch));
        vcdp->chgBit(c+449,(((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ptrMatch) 
                             & (~ (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+457,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_full));
        vcdp->chgBit(c+465,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+473,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_pushPtr_valueNext),4);
        vcdp->chgBit(c+481,(((0xfU == (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_pushPtr_value)) 
                             & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+489,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_ptrMatch));
        vcdp->chgBit(c+497,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_pushing));
        vcdp->chgBit(c+505,(((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_ptrMatch) 
                             & (~ (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+513,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_full));
    }
}

void VEmif_Ctrl_test::traceChgThis__6(VEmif_Ctrl_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VEmif_Ctrl_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+521,(((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_interruptCtrl_readInt) 
                             | (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_interruptCtrl_writeInt))));
        vcdp->chgBit(c+529,(((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__io_write_thrown_valid) 
                             & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__clockDivider_counter_willOverflow))));
        vcdp->chgBit(c+537,(((0xfU == (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popPtr_value)) 
                             & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popPtr_willIncrement))));
    }
}

void VEmif_Ctrl_test::traceChgThis__7(VEmif_Ctrl_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VEmif_Ctrl_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+545,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_write_ready));
        vcdp->chgBit(c+553,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_read_streamBreaked_valid));
        vcdp->chgBit(c+561,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_interruptCtrl_readInt));
        vcdp->chgBit(c+569,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx_io_write_ready));
        vcdp->chgBit(c+577,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__io_write_thrown_valid));
        vcdp->chgBit(c+585,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__stateMachine_txd));
        vcdp->chgBit(c+593,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__when_UartCtrlRx_l93));
        vcdp->chgBit(c+601,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popPtr_willIncrement));
        vcdp->chgBus(c+609,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popPtr_valueNext),4);
        vcdp->chgBit(c+617,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popping));
    }
}

void VEmif_Ctrl_test::traceChgThis__8(VEmif_Ctrl_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VEmif_Ctrl_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+625,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_emif_interface__DOT__apb_PRDATA_regNextWhen),32);
        vcdp->chgBus(c+633,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_gpioACtrl__DOT__io_gpio_write_driver),16);
        vcdp->chgBit(c+641,(vlTOPp->Emif_Ctrl_test__DOT__area_tt));
        vcdp->chgBus(c+649,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_gpioACtrl__DOT__io_gpio_read_buffercc__DOT__buffers_1),16);
        vcdp->chgBit(c+657,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_emif_interface__DOT__penable_regNext));
        vcdp->chgBus(c+665,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_gpioACtrl__DOT__io_gpio_read_buffercc__DOT__buffers_0),16);
        vcdp->chgBus(c+673,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_shifter),8);
        vcdp->chgBus(c+681,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT___zz_logic_ram_port0),8);
        vcdp->chgBus(c+689,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT___zz_logic_ram_port0),8);
        vcdp->chgBit(c+697,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__stateMachine_parity));
        vcdp->chgBus(c+705,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__bitTimer_counter),3);
        vcdp->chgBit(c+713,((0U == (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__bitTimer_counter))));
        vcdp->chgBit(c+721,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_parity));
        vcdp->chgBus(c+729,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ram[0]),8);
        vcdp->chgBus(c+730,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ram[1]),8);
        vcdp->chgBus(c+731,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ram[2]),8);
        vcdp->chgBus(c+732,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ram[3]),8);
        vcdp->chgBus(c+733,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ram[4]),8);
        vcdp->chgBus(c+734,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ram[5]),8);
        vcdp->chgBus(c+735,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ram[6]),8);
        vcdp->chgBus(c+736,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ram[7]),8);
        vcdp->chgBus(c+737,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ram[8]),8);
        vcdp->chgBus(c+738,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ram[9]),8);
        vcdp->chgBus(c+739,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ram[10]),8);
        vcdp->chgBus(c+740,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ram[11]),8);
        vcdp->chgBus(c+741,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ram[12]),8);
        vcdp->chgBus(c+742,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ram[13]),8);
        vcdp->chgBus(c+743,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ram[14]),8);
        vcdp->chgBus(c+744,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ram[15]),8);
        vcdp->chgBus(c+857,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_ram[0]),8);
        vcdp->chgBus(c+858,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_ram[1]),8);
        vcdp->chgBus(c+859,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_ram[2]),8);
        vcdp->chgBus(c+860,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_ram[3]),8);
        vcdp->chgBus(c+861,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_ram[4]),8);
        vcdp->chgBus(c+862,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_ram[5]),8);
        vcdp->chgBus(c+863,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_ram[6]),8);
        vcdp->chgBus(c+864,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_ram[7]),8);
        vcdp->chgBus(c+865,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_ram[8]),8);
        vcdp->chgBus(c+866,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_ram[9]),8);
        vcdp->chgBus(c+867,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_ram[10]),8);
        vcdp->chgBus(c+868,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_ram[11]),8);
        vcdp->chgBus(c+869,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_ram[12]),8);
        vcdp->chgBus(c+870,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_ram[13]),8);
        vcdp->chgBus(c+871,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_ram[14]),8);
        vcdp->chgBus(c+872,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_ram[15]),8);
        vcdp->chgBit(c+985,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__apb3Router_1__DOT__selIndex));
    }
}

void VEmif_Ctrl_test::traceChgThis__9(VEmif_Ctrl_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VEmif_Ctrl_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+993,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_gpioACtrl__DOT__io_gpio_writeEnable_driver),16);
        vcdp->chgBit(c+1001,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT___zz_io_txd));
        vcdp->chgBit(c+1009,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_emif_interface__DOT__penable));
        vcdp->chgBit(c+1017,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_validReg));
        vcdp->chgBit(c+1025,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_interruptCtrl_writeIntEnable));
        vcdp->chgBit(c+1033,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_interruptCtrl_readIntEnable));
        vcdp->chgBit(c+1041,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_misc_readError));
        vcdp->chgBit(c+1049,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_misc_readOverflowError));
        vcdp->chgBit(c+1057,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_misc_breakDetected));
        vcdp->chgBit(c+1065,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_misc_doBreak));
        vcdp->chgBit(c+1073,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT___zz_io_rts));
        vcdp->chgBus(c+1081,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__clockDivider_counter),20);
        vcdp->chgBit(c+1089,((0U == vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__clockDivider_counter)));
        vcdp->chgBus(c+1097,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__clockDivider_counter_value),3);
        vcdp->chgBit(c+1105,((4U == (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__clockDivider_counter_value))));
        vcdp->chgBus(c+1113,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__stateMachine_state),3);
        vcdp->chgBit(c+1121,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_1));
        vcdp->chgBit(c+1129,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__sampler_samples_1));
        vcdp->chgBit(c+1137,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__sampler_samples_2));
        vcdp->chgBit(c+1145,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__sampler_value));
        vcdp->chgBit(c+1153,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__sampler_tick));
        vcdp->chgBus(c+1161,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_state),3);
        vcdp->chgBit(c+1169,((1U & (~ (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__sampler_value)))));
        vcdp->chgBit(c+1177,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_0));
        vcdp->chgBus(c+1185,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushPtr_value),4);
        vcdp->chgBit(c+1193,((0xfU == (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+1201,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popPtr_value),4);
        vcdp->chgBit(c+1209,((0xfU == (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+1217,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+1225,((0xfU & ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushPtr_value) 
                                      - (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popPtr_value)))),4);
        vcdp->chgBus(c+1233,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_pushPtr_value),4);
        vcdp->chgBit(c+1241,((0xfU == (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+1249,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_popPtr_value),4);
        vcdp->chgBit(c+1257,((0xfU == (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+1265,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+1273,((0xfU & ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_pushPtr_value) 
                                      - (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_popPtr_value)))),4);
    }
}

void VEmif_Ctrl_test::traceChgThis__10(VEmif_Ctrl_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VEmif_Ctrl_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1281,(((0U == vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__clockDivider_counter) 
                              & (0x41U != (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__break_counter)))));
    }
}

void VEmif_Ctrl_test::traceChgThis__11(VEmif_Ctrl_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VEmif_Ctrl_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1289,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_readBreak_regNext));
        vcdp->chgBus(c+1297,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__tickCounter_value),3);
        vcdp->chgBit(c+1305,((7U == (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__tickCounter_value))));
        vcdp->chgBit(c+1313,((0U == (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__tickCounter_value))));
        vcdp->chgBus(c+1321,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__bitCounter_value),3);
        vcdp->chgBit(c+1329,((7U == (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__bitCounter_value))));
        vcdp->chgBit(c+1337,((0U == (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__bitCounter_value))));
    }
}

void VEmif_Ctrl_test::traceChgThis__12(VEmif_Ctrl_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VEmif_Ctrl_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1345,(((0x41U == (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__break_counter)) 
                              & (~ (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_readBreak_regNext)))));
    }
}

void VEmif_Ctrl_test::traceChgThis__13(VEmif_Ctrl_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VEmif_Ctrl_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1353,((0x41U == (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__break_counter))));
        vcdp->chgBus(c+1361,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__break_counter),7);
    }
}

void VEmif_Ctrl_test::traceChgThis__14(VEmif_Ctrl_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VEmif_Ctrl_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1369,(vlTOPp->top_emif_emif_addr),32);
        vcdp->chgBus(c+1377,(vlTOPp->top_emif_emif_data_read),32);
        vcdp->chgBus(c+1385,(vlTOPp->top_emif_emif_data_write),32);
        vcdp->chgBit(c+1393,(vlTOPp->top_emif_emif_data_writeEnable));
        vcdp->chgBit(c+1401,(vlTOPp->top_emif_emif_cs));
        vcdp->chgBit(c+1409,(vlTOPp->top_emif_emif_we));
        vcdp->chgBit(c+1417,(vlTOPp->top_emif_emif_oe));
        vcdp->chgBus(c+1425,(vlTOPp->top_gpioA_read),16);
        vcdp->chgBus(c+1433,(vlTOPp->top_gpioA_write),16);
        vcdp->chgBus(c+1441,(vlTOPp->top_gpioA_writeEnable),16);
        vcdp->chgBit(c+1449,(vlTOPp->clk));
        vcdp->chgBit(c+1457,(vlTOPp->reset));
        vcdp->chgBit(c+1465,((1U & (~ (IData)(vlTOPp->top_emif_emif_oe)))));
        vcdp->chgBus(c+1473,((0xfU & vlTOPp->top_emif_emif_addr)),4);
        vcdp->chgBus(c+1481,((0x1fU & vlTOPp->top_emif_emif_addr)),5);
        vcdp->chgBit(c+1489,((1U & (~ (IData)(vlTOPp->top_emif_emif_cs)))));
        vcdp->chgBus(c+1497,((0xffU & vlTOPp->top_emif_emif_data_read)),8);
        vcdp->chgBit(c+1505,((1U & vlTOPp->top_emif_emif_data_read)));
        vcdp->chgBit(c+1513,((1U & (vlTOPp->top_emif_emif_data_read 
                                    >> 1U))));
        vcdp->chgBit(c+1521,((1U & (vlTOPp->top_emif_emif_data_read 
                                    >> 9U))));
        vcdp->chgBit(c+1529,((1U & (vlTOPp->top_emif_emif_data_read 
                                    >> 0xaU))));
        vcdp->chgBit(c+1537,((1U & (vlTOPp->top_emif_emif_data_read 
                                    >> 0xbU))));
    }
}
