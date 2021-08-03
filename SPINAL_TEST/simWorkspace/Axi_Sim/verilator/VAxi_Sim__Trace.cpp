// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAxi_Sim__Syms.h"


//======================

void VAxi_Sim::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VAxi_Sim* t = (VAxi_Sim*)userthis;
    VAxi_Sim__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VAxi_Sim::traceChgThis(VAxi_Sim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxi_Sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
                                  >> 2U))))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 2U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 4U))))) {
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 2U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 5U))))) {
            vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 3U))))) {
            vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 3U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 5U))))) {
            vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 4U))))) {
            vlTOPp->traceChgThis__8(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 4U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 5U))))) {
            vlTOPp->traceChgThis__9(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 5U))))) {
            vlTOPp->traceChgThis__10(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__12(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                >> 1U) | (vlTOPp->__Vm_traceActivity 
                                          >> 2U))))) {
            vlTOPp->traceChgThis__13(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__14(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                >> 2U) | (vlTOPp->__Vm_traceActivity 
                                          >> 5U))))) {
            vlTOPp->traceChgThis__15(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((8U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__16(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((0x20U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__17(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__18(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VAxi_Sim::traceChgThis__2(VAxi_Sim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxi_Sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1,(vlTOPp->Axi_Sim__DOT__ram__DOT__Axi4Incr_base),12);
        vcdp->chgBus(c+9,(vlTOPp->Axi_Sim__DOT__ram__DOT__Axi4Incr_baseIncr),12);
    }
}

void VAxi_Sim::traceChgThis__3(VAxi_Sim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxi_Sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+17,(vlTOPp->Axi_Sim__DOT__axi_readOnly_decoder_io_input_r_payload_id),4);
        vcdp->chgBus(c+25,(vlTOPp->Axi_Sim__DOT__axi_readOnly_decoder_io_input_r_payload_resp),2);
        vcdp->chgBus(c+33,(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder_io_input_b_payload_id),4);
        vcdp->chgBus(c+41,(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder_io_input_b_payload_resp),2);
        vcdp->chgBit(c+49,(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder__DOT__errorSlave_io_axi_aw_ready));
        vcdp->chgBit(c+57,(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter__DOT__cmdArbiter__DOT__maskRouted_1));
        vcdp->chgBit(c+65,((1U & (~ (IData)(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__full)))));
        vcdp->chgBus(c+73,(((((IData)(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__risingOccupancy) 
                              & (IData)(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__ptrMatch)) 
                             << 2U) | (3U & ((IData)(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__pushPtr_value) 
                                             - (IData)(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__popPtr_value))))),3);
        vcdp->chgBit(c+81,((1U & (IData)(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter__DOT__cmdArbiter__DOT___zz_maskProposal_0_3))));
        vcdp->chgBit(c+89,((1U & ((IData)(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter__DOT__cmdArbiter__DOT___zz_maskProposal_0_3) 
                                  >> 1U))));
        vcdp->chgBit(c+97,(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__ptrMatch));
        vcdp->chgBit(c+105,(((IData)(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__ptrMatch) 
                             & (~ (IData)(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__risingOccupancy)))));
        vcdp->chgBit(c+113,(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__full));
        vcdp->chgBit(c+121,((1U & (~ ((IData)(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__ptrMatch) 
                                      & (~ (IData)(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__risingOccupancy)))))));
        vcdp->chgBit(c+129,(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter__DOT__maskRouted_1));
        vcdp->chgBit(c+137,((1U & (~ (IData)(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__full)))));
        vcdp->chgBus(c+145,(((((IData)(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__risingOccupancy) 
                               & (IData)(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__ptrMatch)) 
                              << 2U) | (3U & ((IData)(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__pushPtr_value) 
                                              - (IData)(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__popPtr_value))))),3);
        vcdp->chgBit(c+153,((1U & (IData)(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter__DOT___zz_maskProposal_0_3))));
        vcdp->chgBit(c+161,((1U & ((IData)(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter__DOT___zz_maskProposal_0_3) 
                                   >> 1U))));
        vcdp->chgBit(c+169,(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__ptrMatch));
        vcdp->chgBit(c+177,(((IData)(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__ptrMatch) 
                             & (~ (IData)(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__risingOccupancy)))));
        vcdp->chgBit(c+185,(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__full));
        vcdp->chgBit(c+193,((1U & (~ ((IData)(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__ptrMatch) 
                                      & (~ (IData)(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__risingOccupancy)))))));
    }
}

void VAxi_Sim::traceChgThis__4(VAxi_Sim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxi_Sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+201,((7U & ((IData)(vlTOPp->Axi_Sim__DOT__axi_readOnly_decoder__DOT__pendingCmdCounter_value) 
                                   + (((IData)(vlTOPp->Axi_Sim__DOT__axi_readOnly_decoder__DOT__pendingCmdCounter_incrementIt) 
                                       & (~ (IData)(vlTOPp->Axi_Sim__DOT__axi_readOnly_decoder__DOT__pendingCmdCounter_decrementIt)))
                                       ? 1U : (((~ (IData)(vlTOPp->Axi_Sim__DOT__axi_readOnly_decoder__DOT__pendingCmdCounter_incrementIt)) 
                                                & (IData)(vlTOPp->Axi_Sim__DOT__axi_readOnly_decoder__DOT__pendingCmdCounter_decrementIt))
                                                ? 7U
                                                : 0U))))),3);
        vcdp->chgBit(c+209,(((7U == (IData)(vlTOPp->Axi_Sim__DOT__axi_readOnly_decoder__DOT__pendingCmdCounter_value)) 
                             & (~ (IData)(vlTOPp->Axi_Sim__DOT__axi_readOnly_decoder__DOT__pendingCmdCounter_decrementIt)))));
        vcdp->chgBit(c+217,((((7U == (IData)(vlTOPp->Axi_Sim__DOT__axi_readOnly_decoder__DOT__pendingCmdCounter_value)) 
                              & (~ (IData)(vlTOPp->Axi_Sim__DOT__axi_readOnly_decoder__DOT__pendingCmdCounter_decrementIt))) 
                             & (IData)(vlTOPp->Axi_Sim__DOT__axi_readOnly_decoder__DOT__pendingCmdCounter_incrementIt))));
        vcdp->chgBus(c+225,((7U & ((IData)(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder__DOT__pendingCmdCounter_value) 
                                   + (((IData)(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder__DOT__pendingCmdCounter_incrementIt) 
                                       & (~ (IData)(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder__DOT__pendingCmdCounter_decrementIt)))
                                       ? 1U : (((~ (IData)(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder__DOT__pendingCmdCounter_incrementIt)) 
                                                & (IData)(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder__DOT__pendingCmdCounter_decrementIt))
                                                ? 7U
                                                : 0U))))),3);
        vcdp->chgBit(c+233,(((7U == (IData)(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder__DOT__pendingCmdCounter_value)) 
                             & (~ (IData)(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder__DOT__pendingCmdCounter_decrementIt)))));
        vcdp->chgBit(c+241,((((7U == (IData)(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder__DOT__pendingCmdCounter_value)) 
                              & (~ (IData)(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder__DOT__pendingCmdCounter_decrementIt))) 
                             & (IData)(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder__DOT__pendingCmdCounter_incrementIt))));
        vcdp->chgBus(c+249,((7U & ((IData)(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder__DOT__pendingDataCounter_value) 
                                   + (((IData)(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder__DOT__pendingDataCounter_incrementIt) 
                                       & (~ (IData)(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder__DOT__pendingDataCounter_decrementIt)))
                                       ? 1U : (((~ (IData)(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder__DOT__pendingDataCounter_incrementIt)) 
                                                & (IData)(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder__DOT__pendingDataCounter_decrementIt))
                                                ? 7U
                                                : 0U))))),3);
        vcdp->chgBit(c+257,(((7U == (IData)(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder__DOT__pendingDataCounter_value)) 
                             & (~ (IData)(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder__DOT__pendingDataCounter_decrementIt)))));
        vcdp->chgBit(c+265,((((7U == (IData)(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder__DOT__pendingDataCounter_value)) 
                              & (~ (IData)(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder__DOT__pendingDataCounter_decrementIt))) 
                             & (IData)(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder__DOT__pendingDataCounter_incrementIt))));
        vcdp->chgBit(c+273,(((3U == (IData)(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__popPtr_value)) 
                             & (IData)(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__popPtr_willIncrement))));
        vcdp->chgBit(c+281,(((3U == (IData)(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__popPtr_value)) 
                             & (IData)(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__popPtr_willIncrement))));
    }
}

void VAxi_Sim::traceChgThis__5(VAxi_Sim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxi_Sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+289,(((IData)(vlTOPp->Axi_Sim__DOT__axi_readOnly_decoder_io_outputs_0_ar_rValid) 
                             & (IData)(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_inputs_0_ready))));
        vcdp->chgBit(c+297,(((IData)(vlTOPp->Axi_Sim__DOT__axi_readOnly_decoder_io_outputs_1_ar_rValid) 
                             & (IData)(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_inputs_0_ready))));
        vcdp->chgBit(c+305,(((IData)(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder_io_outputs_0_aw_rValid) 
                             & (IData)(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_inputs_1_ready))));
        vcdp->chgBit(c+313,(((IData)(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder_io_outputs_1_aw_rValid) 
                             & (IData)(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_inputs_1_ready))));
        vcdp->chgBus(c+321,((((IData)(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter__DOT__cmdArbiter__DOT__maskRouted_1) 
                              << 1U) | (IData)(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter__DOT__cmdArbiter__DOT__maskRouted_0))),2);
        vcdp->chgBit(c+329,(((~ (IData)(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_ready)) 
                             & (IData)(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork__DOT___zz_io_outputs_1_valid))));
        vcdp->chgBit(c+337,(((3U == (IData)(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__pushPtr_value)) 
                             & (IData)(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__pushPtr_willIncrement))));
        vcdp->chgBus(c+345,((((IData)(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter__DOT__maskRouted_1) 
                              << 1U) | (IData)(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter__DOT__maskRouted_0))),2);
        vcdp->chgBit(c+353,(((~ (IData)(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_ready)) 
                             & (IData)(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork__DOT___zz_io_outputs_1_valid))));
        vcdp->chgBit(c+361,(((3U == (IData)(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__pushPtr_value)) 
                             & (IData)(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__pushPtr_willIncrement))));
    }
}

void VAxi_Sim::traceChgThis__6(VAxi_Sim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxi_Sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+369,(vlTOPp->Axi_Sim__DOT__ram__DOT__Axi4Incr_result),20);
        vcdp->chgBus(c+377,(vlTOPp->Axi_Sim__DOT__ram__DOT__Axi4Incr_wrapCase),3);
    }
}

void VAxi_Sim::traceChgThis__7(VAxi_Sim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxi_Sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+385,((((IData)(vlTOPp->Axi_Sim__DOT__apbBridge_io_apb_PSEL) 
                              & (IData)(vlTOPp->Axi_Sim__DOT__apbBridge_io_apb_PENABLE)) 
                             & (IData)(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter_io_output_arw_rData_write))));
        vcdp->chgBit(c+393,((((IData)(vlTOPp->Axi_Sim__DOT__apbBridge_io_apb_PSEL) 
                              & (IData)(vlTOPp->Axi_Sim__DOT__apbBridge_io_apb_PENABLE)) 
                             & (~ (IData)(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter_io_output_arw_rData_write)))));
        vcdp->chgBit(c+401,(((0U == vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter_io_output_arw_rData_addr) 
                             & (IData)(vlTOPp->Axi_Sim__DOT__apb3busif_doWrite))));
        vcdp->chgBit(c+409,(((4U == vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter_io_output_arw_rData_addr) 
                             & (IData)(vlTOPp->Axi_Sim__DOT__apb3busif_doWrite))));
        vcdp->chgBit(c+417,(((0x1010U == vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter_io_output_arw_rData_addr) 
                             & (IData)(vlTOPp->Axi_Sim__DOT__apb3busif_doWrite))));
        vcdp->chgBit(c+425,(((0x1014U == vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter_io_output_arw_rData_addr) 
                             & (IData)(vlTOPp->Axi_Sim__DOT__apb3busif_doWrite))));
    }
}

void VAxi_Sim::traceChgThis__8(VAxi_Sim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxi_Sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+433,(vlTOPp->Axi_Sim__DOT__axi_readOnly_decoder_io_input_ar_ready));
        vcdp->chgBit(c+441,(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder_io_input_aw_ready));
        vcdp->chgBit(c+449,(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter_io_output_w_valid));
        vcdp->chgBit(c+457,(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter_io_output_w_valid));
        vcdp->chgBit(c+465,(vlTOPp->Axi_Sim__DOT__axi_readOnly_decoder__DOT__pendingCmdCounter_incrementIt));
        vcdp->chgBit(c+473,(vlTOPp->Axi_Sim__DOT__axi_readOnly_decoder__DOT__pendingCmdCounter_decrementIt));
        vcdp->chgBus(c+481,((((IData)(vlTOPp->Axi_Sim__DOT__axi_readOnly_decoder__DOT__pendingCmdCounter_incrementIt) 
                              & (~ (IData)(vlTOPp->Axi_Sim__DOT__axi_readOnly_decoder__DOT__pendingCmdCounter_decrementIt)))
                              ? 1U : (((~ (IData)(vlTOPp->Axi_Sim__DOT__axi_readOnly_decoder__DOT__pendingCmdCounter_incrementIt)) 
                                       & (IData)(vlTOPp->Axi_Sim__DOT__axi_readOnly_decoder__DOT__pendingCmdCounter_decrementIt))
                                       ? 7U : 0U))),3);
        vcdp->chgBit(c+489,(((IData)(vlTOPp->Axi_Sim__DOT__axi_readOnly_decoder__DOT__pendingCmdCounter_incrementIt) 
                             & (~ (IData)(vlTOPp->Axi_Sim__DOT__axi_readOnly_decoder__DOT__pendingCmdCounter_decrementIt)))));
        vcdp->chgBit(c+497,(((~ (IData)(vlTOPp->Axi_Sim__DOT__axi_readOnly_decoder__DOT__pendingCmdCounter_incrementIt)) 
                             & (IData)(vlTOPp->Axi_Sim__DOT__axi_readOnly_decoder__DOT__pendingCmdCounter_decrementIt))));
        vcdp->chgBus(c+505,(vlTOPp->Axi_Sim__DOT__axi_readOnly_decoder__DOT__decodedCmdSels),2);
        vcdp->chgBit(c+513,((0U == (IData)(vlTOPp->Axi_Sim__DOT__axi_readOnly_decoder__DOT__decodedCmdSels))));
        vcdp->chgBit(c+521,(vlTOPp->Axi_Sim__DOT__axi_readOnly_decoder__DOT__allowCmd));
        vcdp->chgBit(c+529,(vlTOPp->Axi_Sim__DOT__axi_readOnly_decoder__DOT__errorSlave__DOT__io_axi_ar_fire));
        vcdp->chgBit(c+537,(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder__DOT__cmdAllowedStart));
        vcdp->chgBit(c+545,(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder__DOT__pendingCmdCounter_incrementIt));
        vcdp->chgBit(c+553,(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder__DOT__pendingCmdCounter_decrementIt));
        vcdp->chgBus(c+561,((((IData)(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder__DOT__pendingCmdCounter_incrementIt) 
                              & (~ (IData)(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder__DOT__pendingCmdCounter_decrementIt)))
                              ? 1U : (((~ (IData)(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder__DOT__pendingCmdCounter_incrementIt)) 
                                       & (IData)(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder__DOT__pendingCmdCounter_decrementIt))
                                       ? 7U : 0U))),3);
        vcdp->chgBit(c+569,(((IData)(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder__DOT__pendingCmdCounter_incrementIt) 
                             & (~ (IData)(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder__DOT__pendingCmdCounter_decrementIt)))));
        vcdp->chgBit(c+577,(((~ (IData)(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder__DOT__pendingCmdCounter_incrementIt)) 
                             & (IData)(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder__DOT__pendingCmdCounter_decrementIt))));
        vcdp->chgBit(c+585,(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder__DOT__pendingDataCounter_incrementIt));
        vcdp->chgBit(c+593,(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder__DOT__pendingDataCounter_decrementIt));
        vcdp->chgBus(c+601,((((IData)(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder__DOT__pendingDataCounter_incrementIt) 
                              & (~ (IData)(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder__DOT__pendingDataCounter_decrementIt)))
                              ? 1U : (((~ (IData)(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder__DOT__pendingDataCounter_incrementIt)) 
                                       & (IData)(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder__DOT__pendingDataCounter_decrementIt))
                                       ? 7U : 0U))),3);
        vcdp->chgBit(c+609,(((IData)(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder__DOT__pendingDataCounter_incrementIt) 
                             & (~ (IData)(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder__DOT__pendingDataCounter_decrementIt)))));
        vcdp->chgBit(c+617,(((~ (IData)(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder__DOT__pendingDataCounter_incrementIt)) 
                             & (IData)(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder__DOT__pendingDataCounter_decrementIt))));
        vcdp->chgBus(c+625,(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder__DOT__decodedCmdSels),2);
        vcdp->chgBit(c+633,((0U == (IData)(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder__DOT__decodedCmdSels))));
        vcdp->chgBit(c+641,(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder__DOT__allowCmd));
        vcdp->chgBit(c+649,(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder__DOT__errorSlave__DOT__io_axi_aw_fire));
        vcdp->chgBit(c+657,(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder__DOT__errorSlave__DOT__when_Axi4ErrorSlave_l24));
        vcdp->chgBit(c+665,(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__popPtr_willIncrement));
        vcdp->chgBus(c+673,(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__popPtr_valueNext),2);
        vcdp->chgBit(c+681,(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__popping));
        vcdp->chgBit(c+689,(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__popPtr_willIncrement));
        vcdp->chgBus(c+697,(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__popPtr_valueNext),2);
        vcdp->chgBit(c+705,(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__popping));
    }
}

void VAxi_Sim::traceChgThis__9(VAxi_Sim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxi_Sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+713,(((IData)(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter_io_output_w_valid) 
                             | (IData)(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter_io_output_w_rValid))));
        vcdp->chgBit(c+721,(((IData)(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter_io_output_w_valid) 
                             & (~ (IData)(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter_io_output_w_rValid)))));
        vcdp->chgBit(c+729,(((IData)(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__pushing) 
                             != (IData)(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__popping))));
        vcdp->chgBit(c+737,(((IData)(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter_io_output_w_valid) 
                             & (~ (IData)(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter_io_output_w_rValid)))));
        vcdp->chgBit(c+745,(((IData)(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__pushing) 
                             != (IData)(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__popping))));
    }
}

void VAxi_Sim::traceChgThis__10(VAxi_Sim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxi_Sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+753,(vlTOPp->Axi_Sim__DOT__ram_io_axi_arw_ready));
        vcdp->chgBit(c+761,(vlTOPp->Axi_Sim__DOT__ram_io_axi_w_ready));
        vcdp->chgBit(c+769,(vlTOPp->Axi_Sim__DOT__ram_io_axi_b_valid));
        vcdp->chgBit(c+777,(vlTOPp->Axi_Sim__DOT__ram_io_axi_r_valid));
        vcdp->chgBit(c+785,(vlTOPp->Axi_Sim__DOT__ram_io_bram_en));
        vcdp->chgBit(c+793,(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arw_ready));
        vcdp->chgBit(c+801,(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_w_ready));
        vcdp->chgBit(c+809,(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_b_valid));
        vcdp->chgBit(c+817,(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_r_valid));
        vcdp->chgBit(c+825,(vlTOPp->Axi_Sim__DOT__apbBridge_io_apb_PSEL));
        vcdp->chgBit(c+833,(vlTOPp->Axi_Sim__DOT__apbBridge_io_apb_PENABLE));
        vcdp->chgBit(c+841,(vlTOPp->Axi_Sim__DOT__axi_readOnly_decoder_io_input_r_valid));
        vcdp->chgBit(c+849,(vlTOPp->Axi_Sim__DOT__axi_readOnly_decoder_io_input_r_payload_last));
        vcdp->chgBit(c+857,(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder_io_input_w_ready));
        vcdp->chgBit(c+865,(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder_io_input_b_valid));
        vcdp->chgBit(c+873,(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_inputs_0_ready));
        vcdp->chgBit(c+881,(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_inputs_1_ready));
        vcdp->chgBit(c+889,(((IData)(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo_io_pop_valid) 
                             & (~ (IData)(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter_io_output_w_rValid)))));
        vcdp->chgBit(c+897,(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_0_valid));
        vcdp->chgBit(c+905,((1U & (~ (IData)(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter__DOT__cmdArbiter__DOT__maskRouted_0)))));
        vcdp->chgBit(c+913,(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_inputs_0_ready));
        vcdp->chgBit(c+921,(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_inputs_1_ready));
        vcdp->chgBit(c+929,(((IData)(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo_io_pop_valid) 
                             & (~ (IData)(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter_io_output_w_rValid)))));
        vcdp->chgBit(c+937,(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_0_valid));
        vcdp->chgBit(c+945,((1U & (~ (IData)(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter__DOT__maskRouted_0)))));
        vcdp->chgBit(c+953,(((IData)(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter_io_output_arw_rValid) 
                             & (IData)(vlTOPp->Axi_Sim__DOT__ram_io_axi_arw_ready))));
        vcdp->chgBit(c+961,(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter_io_output_w_s2mPipe_ready));
        vcdp->chgBit(c+969,(((IData)(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter_io_output_arw_rValid) 
                             & (IData)(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arw_ready))));
        vcdp->chgBit(c+977,(((IData)(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter_io_output_w_rValid) 
                             & (IData)(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_w_ready))));
        vcdp->chgBit(c+985,(vlTOPp->Axi_Sim__DOT__apb3busif_doWrite));
        vcdp->chgBit(c+993,(vlTOPp->Axi_Sim__DOT__apb3busif_doRead));
        vcdp->chgBit(c+1001,(vlTOPp->Axi_Sim__DOT__ram__DOT__when_Axi4SharedToBRAM_l121));
        vcdp->chgBit(c+1009,(vlTOPp->Axi_Sim__DOT__apbBridge__DOT__when_Axi4SharedToApb3Bridge_l91));
        vcdp->chgBit(c+1017,(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_ready));
        vcdp->chgBit(c+1025,(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_valid));
        vcdp->chgBit(c+1033,(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_input_ready));
        vcdp->chgBit(c+1041,(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_valid));
        vcdp->chgBit(c+1049,(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo_io_pop_valid));
        vcdp->chgBit(c+1057,(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter__DOT__cmdArbiter__DOT__maskRouted_0));
        vcdp->chgBit(c+1065,(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_valid));
        vcdp->chgBit(c+1073,(((IData)(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_valid) 
                              & (IData)(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_input_ready))));
        vcdp->chgBit(c+1081,(((IData)(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_0_valid) 
                              & (~ (IData)(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter_io_output_arw_rValid)))));
        vcdp->chgBit(c+1089,(((IData)(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_valid) 
                              & (IData)(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_ready))));
        vcdp->chgBit(c+1097,(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__pushPtr_willIncrement));
        vcdp->chgBus(c+1105,(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__pushPtr_valueNext),2);
        vcdp->chgBit(c+1113,(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__pushing));
        vcdp->chgBit(c+1121,(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_ready));
        vcdp->chgBit(c+1129,(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_valid));
        vcdp->chgBit(c+1137,(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_input_ready));
        vcdp->chgBit(c+1145,(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_valid));
        vcdp->chgBit(c+1153,(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo_io_pop_valid));
        vcdp->chgBit(c+1161,(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter__DOT__maskRouted_0));
        vcdp->chgBit(c+1169,(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_valid));
        vcdp->chgBit(c+1177,(((IData)(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_valid) 
                              & (IData)(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_input_ready))));
        vcdp->chgBit(c+1185,(((IData)(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_0_valid) 
                              & (~ (IData)(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter_io_output_arw_rValid)))));
        vcdp->chgBit(c+1193,(((IData)(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_valid) 
                              & (IData)(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_ready))));
        vcdp->chgBit(c+1201,(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__pushPtr_willIncrement));
        vcdp->chgBus(c+1209,(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__pushPtr_valueNext),2);
        vcdp->chgBit(c+1217,(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__pushing));
    }
}

void VAxi_Sim::traceChgThis__12(VAxi_Sim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxi_Sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1225,(vlTOPp->Axi_Sim__DOT___zz_mem_port1),32);
        vcdp->chgBus(c+1233,(vlTOPp->Axi_Sim__DOT__ram__DOT__arw_id),4);
        vcdp->chgBus(c+1241,(vlTOPp->Axi_Sim__DOT__ram__DOT__readData),32);
        vcdp->chgBus(c+1249,((0xffU & vlTOPp->Axi_Sim__DOT__ram__DOT__arw_addr)),8);
        vcdp->chgBus(c+1257,(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter_io_output_w_s2mPipe_rData_data),32);
        vcdp->chgBus(c+1265,(vlTOPp->Axi_Sim__DOT__apbBridge__DOT__id),4);
        vcdp->chgBus(c+1273,(vlTOPp->Axi_Sim__DOT__apbBridge__DOT__readedData),32);
        vcdp->chgBus(c+1281,(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter_io_output_arw_rData_addr),20);
        vcdp->chgBus(c+1289,(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter_io_output_arw_rData_id),4);
        vcdp->chgBus(c+1297,(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter_io_output_arw_rData_size),3);
        vcdp->chgBus(c+1305,(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter_io_output_arw_rData_burst),2);
        vcdp->chgBus(c+1313,(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter_io_output_w_rData_data),32);
        vcdp->chgBus(c+1321,(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter_io_output_w_rData_strb),4);
        vcdp->chgBus(c+1329,(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter_io_output_w_s2mPipe_rData_strb),4);
        vcdp->chgBus(c+1337,(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter_io_output_arw_rData_id),4);
        vcdp->chgBus(c+1345,(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter_io_output_arw_rData_len),8);
        vcdp->chgBus(c+1353,(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter_io_output_arw_rData_size),3);
        vcdp->chgBus(c+1361,(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter_io_output_arw_rData_burst),2);
        vcdp->chgBus(c+1369,(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter_io_output_w_rData_strb),4);
        vcdp->chgBit(c+1377,(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter_io_output_w_rData_last));
        vcdp->chgBus(c+1385,(vlTOPp->Axi_Sim__DOT__ram__DOT__arw_addr),20);
        vcdp->chgBus(c+1393,(vlTOPp->Axi_Sim__DOT__ram__DOT__arw_size),3);
        vcdp->chgBus(c+1401,(vlTOPp->Axi_Sim__DOT__ram__DOT__arw_burst),2);
        vcdp->chgBus(c+1409,((3U & (IData)(vlTOPp->Axi_Sim__DOT__ram__DOT__arw_size))),2);
        vcdp->chgBus(c+1417,((0xffU & (vlTOPp->Axi_Sim__DOT__ram__DOT__arw_addr 
                                       >> 0xcU))),8);
        vcdp->chgBus(c+1425,((((2U == (3U & (IData)(vlTOPp->Axi_Sim__DOT__ram__DOT__arw_size))) 
                               << 2U) | (((1U == (3U 
                                                  & (IData)(vlTOPp->Axi_Sim__DOT__ram__DOT__arw_size))) 
                                          << 1U) | 
                                         (0U == (3U 
                                                 & (IData)(vlTOPp->Axi_Sim__DOT__ram__DOT__arw_size)))))),3);
        vcdp->chgBus(c+1433,((((1U < (3U & (IData)(vlTOPp->Axi_Sim__DOT__ram__DOT__arw_size))) 
                               << 1U) | (0U < (3U & (IData)(vlTOPp->Axi_Sim__DOT__ram__DOT__arw_size))))),12);
        vcdp->chgBus(c+1441,(vlTOPp->Axi_Sim__DOT__axi_readOnly_decoder__DOT__errorSlave__DOT__id),4);
        vcdp->chgBus(c+1449,(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder__DOT__errorSlave__DOT__id),4);
    }
}

void VAxi_Sim::traceChgThis__13(VAxi_Sim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxi_Sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1457,(((1U & (IData)(vlTOPp->Axi_Sim__DOT__axi_readOnly_decoder__DOT__pendingSels))
                               ? vlTOPp->Axi_Sim__DOT__apbBridge__DOT__readedData
                               : vlTOPp->Axi_Sim__DOT__ram__DOT__readData)),32);
    }
}

void VAxi_Sim::traceChgThis__14(VAxi_Sim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxi_Sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1465,(((IData)(vlTOPp->Axi_Sim__DOT__apb3busif_readError) 
                              << 1U)),2);
        vcdp->chgBit(c+1473,(vlTOPp->Axi_Sim__DOT__axi_readOnly_decoder_io_outputs_0_ar_rValid));
        vcdp->chgBit(c+1481,(vlTOPp->Axi_Sim__DOT__axi_readOnly_decoder_io_outputs_1_ar_rValid));
        vcdp->chgBit(c+1489,(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder_io_outputs_0_aw_rValid));
        vcdp->chgBit(c+1497,(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder_io_outputs_1_aw_rValid));
        vcdp->chgBit(c+1505,(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter_io_output_w_s2mPipe_rValid));
        vcdp->chgBit(c+1513,((1U & (~ (IData)(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter_io_output_w_s2mPipe_rValid)))));
        vcdp->chgBit(c+1521,(vlTOPp->Axi_Sim__DOT__apb3busif_readError));
        vcdp->chgBus(c+1529,(vlTOPp->Axi_Sim__DOT__apb3busif_readData),32);
        vcdp->chgBus(c+1537,(vlTOPp->Axi_Sim__DOT__Apb3_reg0),32);
        vcdp->chgBus(c+1545,(vlTOPp->Axi_Sim__DOT__Apb3_reg1),32);
        vcdp->chgBus(c+1553,(vlTOPp->Axi_Sim__DOT__Apb3_reg2),32);
        vcdp->chgBus(c+1561,(vlTOPp->Axi_Sim__DOT__Apb3_reg3),32);
        vcdp->chgBit(c+1569,((1U & (~ (IData)(vlTOPp->Axi_Sim__DOT__axi_readOnly_decoder__DOT__errorSlave__DOT__sendRsp)))));
        vcdp->chgBit(c+1577,(vlTOPp->Axi_Sim__DOT__axi_readOnly_decoder__DOT__errorSlave__DOT__sendRsp));
        vcdp->chgBus(c+1585,(vlTOPp->Axi_Sim__DOT__axi_readOnly_decoder__DOT__pendingCmdCounter_value),3);
        vcdp->chgBus(c+1593,(vlTOPp->Axi_Sim__DOT__axi_readOnly_decoder__DOT__pendingSels),2);
        vcdp->chgBit(c+1601,(vlTOPp->Axi_Sim__DOT__axi_readOnly_decoder__DOT__pendingError));
        vcdp->chgBit(c+1609,((1U & ((IData)(vlTOPp->Axi_Sim__DOT__axi_readOnly_decoder__DOT__pendingSels) 
                                    >> 1U))));
        vcdp->chgBit(c+1617,(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder__DOT__errorSlave__DOT__consumeData));
        vcdp->chgBit(c+1625,(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder__DOT__errorSlave__DOT__sendRsp));
        vcdp->chgBus(c+1633,(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder__DOT__pendingCmdCounter_value),3);
        vcdp->chgBus(c+1641,(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder__DOT__pendingDataCounter_value),3);
        vcdp->chgBus(c+1649,(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder__DOT__pendingSels),2);
        vcdp->chgBit(c+1657,(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder__DOT__pendingError));
        vcdp->chgBit(c+1665,((0U != (IData)(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder__DOT__pendingDataCounter_value))));
        vcdp->chgBit(c+1673,((1U & ((IData)(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder__DOT__pendingSels) 
                                    >> 1U))));
        vcdp->chgBit(c+1681,(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter__DOT__cmdArbiter__DOT__locked));
        vcdp->chgBit(c+1689,(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter__DOT__cmdArbiter__DOT__maskLocked_0));
        vcdp->chgBit(c+1697,(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter__DOT__cmdArbiter__DOT__maskLocked_1));
        vcdp->chgBus(c+1705,(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__pushPtr_value),2);
        vcdp->chgBit(c+1713,((3U == (IData)(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__pushPtr_value))));
        vcdp->chgBus(c+1721,(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__popPtr_value),2);
        vcdp->chgBit(c+1729,((3U == (IData)(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__popPtr_value))));
        vcdp->chgBit(c+1737,(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__risingOccupancy));
        vcdp->chgBus(c+1745,((3U & ((IData)(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__pushPtr_value) 
                                    - (IData)(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__popPtr_value)))),2);
        vcdp->chgBit(c+1753,(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter__DOT__locked));
        vcdp->chgBit(c+1761,(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter__DOT__maskLocked_0));
        vcdp->chgBit(c+1769,(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter__DOT__maskLocked_1));
        vcdp->chgBus(c+1777,(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__pushPtr_value),2);
        vcdp->chgBit(c+1785,((3U == (IData)(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__pushPtr_value))));
        vcdp->chgBus(c+1793,(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__popPtr_value),2);
        vcdp->chgBit(c+1801,((3U == (IData)(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__popPtr_value))));
        vcdp->chgBit(c+1809,(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__risingOccupancy));
        vcdp->chgBus(c+1817,((3U & ((IData)(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__pushPtr_value) 
                                    - (IData)(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__popPtr_value)))),2);
    }
}

void VAxi_Sim::traceChgThis__15(VAxi_Sim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxi_Sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1825,(((IData)(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter_io_output_arw_rValid) 
                              & (IData)(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork__DOT___zz_io_outputs_0_valid))));
        vcdp->chgBit(c+1833,(((IData)(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter_io_output_arw_rValid) 
                              & (IData)(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork__DOT___zz_io_outputs_0_valid))));
    }
}

void VAxi_Sim::traceChgThis__16(VAxi_Sim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxi_Sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1841,(((0U == (IData)(vlTOPp->Axi_Sim__DOT__ram__DOT__lenBurst)) 
                              & (~ (IData)(vlTOPp->Axi_Sim__DOT__ram__DOT__arw_write)))));
        vcdp->chgBus(c+1849,(((IData)(vlTOPp->Axi_Sim__DOT__ram__DOT__arw_write)
                               ? 0xfU : 0U)),4);
        vcdp->chgBus(c+1857,(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter_io_output_arw_rData_addr),20);
        vcdp->chgBit(c+1865,(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter_io_output_arw_rData_write));
        vcdp->chgBus(c+1873,(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter_io_output_w_rData_data),32);
        vcdp->chgBus(c+1881,(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter_io_output_arw_rData_len),8);
        vcdp->chgBit(c+1889,(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter_io_output_arw_rData_write));
        vcdp->chgBit(c+1897,(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter_io_output_w_rData_last));
        vcdp->chgBit(c+1905,(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter_io_output_w_s2mPipe_rData_last));
        vcdp->chgBus(c+1913,(vlTOPp->Axi_Sim__DOT__ram__DOT__lenBurst),8);
        vcdp->chgBus(c+1921,(vlTOPp->Axi_Sim__DOT__ram__DOT__arw_len),8);
        vcdp->chgBit(c+1929,(vlTOPp->Axi_Sim__DOT__ram__DOT__arw_write));
        vcdp->chgBit(c+1937,(((IData)(vlTOPp->Axi_Sim__DOT__ram__DOT__arw_write) 
                              & ((IData)(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter_io_output_w_s2mPipe_rData_last) 
                                 | (0U == (IData)(vlTOPp->Axi_Sim__DOT__ram__DOT__arw_len))))));
        vcdp->chgBit(c+1945,((1U & (~ (IData)(vlTOPp->Axi_Sim__DOT__ram__DOT__arw_write)))));
        vcdp->chgBit(c+1953,((0U == (IData)(vlTOPp->Axi_Sim__DOT__ram__DOT__lenBurst))));
        vcdp->chgBit(c+1961,(vlTOPp->Axi_Sim__DOT__apbBridge__DOT__write));
        vcdp->chgBit(c+1969,((0U == (IData)(vlTOPp->Axi_Sim__DOT__axi_readOnly_decoder__DOT__errorSlave__DOT__remaining))));
        vcdp->chgBus(c+1977,(vlTOPp->Axi_Sim__DOT__axi_readOnly_decoder__DOT__errorSlave__DOT__remaining),8);
    }
}

void VAxi_Sim::traceChgThis__17(VAxi_Sim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxi_Sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1985,((1U & (~ (IData)(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter_io_output_arw_rValid)))));
        vcdp->chgBit(c+1993,((1U & (~ (IData)(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter_io_output_w_rValid)))));
        vcdp->chgBit(c+2001,((1U & (~ (IData)(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter_io_output_arw_rValid)))));
        vcdp->chgBit(c+2009,((1U & (~ (IData)(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter_io_output_w_rValid)))));
        vcdp->chgBit(c+2017,(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter_io_output_arw_rValid));
        vcdp->chgBit(c+2025,(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter_io_output_w_rValid));
        vcdp->chgBit(c+2033,(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter_io_output_arw_rValid));
        vcdp->chgBit(c+2041,(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter_io_output_w_rValid));
        vcdp->chgBus(c+2049,(vlTOPp->Axi_Sim__DOT__ram__DOT__phase),2);
        vcdp->chgQuad(c+2057,(((2U & (IData)(vlTOPp->Axi_Sim__DOT__ram__DOT__phase))
                                ? ((1U & (IData)(vlTOPp->Axi_Sim__DOT__ram__DOT__phase))
                                    ? VL_ULL(0x524553504f4e5345)
                                    : VL_ULL(0x5245414420202020))
                                : ((1U & (IData)(vlTOPp->Axi_Sim__DOT__ram__DOT__phase))
                                    ? VL_ULL(0x4143434553535f31)
                                    : VL_ULL(0x5345545550202020)))),64);
        vcdp->chgBus(c+2073,(vlTOPp->Axi_Sim__DOT__apbBridge__DOT__phase),2);
        vcdp->chgQuad(c+2081,(((0U == (IData)(vlTOPp->Axi_Sim__DOT__apbBridge__DOT__phase))
                                ? VL_ULL(0x5345545550202020)
                                : ((1U == (IData)(vlTOPp->Axi_Sim__DOT__apbBridge__DOT__phase))
                                    ? VL_ULL(0x4143434553535f31)
                                    : ((2U == (IData)(vlTOPp->Axi_Sim__DOT__apbBridge__DOT__phase))
                                        ? VL_ULL(0x524553504f4e5345)
                                        : VL_ULL(0x3f3f3f3f3f3f3f3f))))),64);
    }
}

void VAxi_Sim::traceChgThis__18(VAxi_Sim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxi_Sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+2097,(vlTOPp->axi_aw_valid));
        vcdp->chgBit(c+2105,(vlTOPp->axi_aw_ready));
        vcdp->chgBus(c+2113,(vlTOPp->axi_aw_payload_addr),20);
        vcdp->chgBus(c+2121,(vlTOPp->axi_aw_payload_id),4);
        vcdp->chgBus(c+2129,(vlTOPp->axi_aw_payload_len),8);
        vcdp->chgBus(c+2137,(vlTOPp->axi_aw_payload_size),3);
        vcdp->chgBus(c+2145,(vlTOPp->axi_aw_payload_burst),2);
        vcdp->chgBit(c+2153,(vlTOPp->axi_w_valid));
        vcdp->chgBit(c+2161,(vlTOPp->axi_w_ready));
        vcdp->chgBus(c+2169,(vlTOPp->axi_w_payload_data),32);
        vcdp->chgBus(c+2177,(vlTOPp->axi_w_payload_strb),4);
        vcdp->chgBit(c+2185,(vlTOPp->axi_w_payload_last));
        vcdp->chgBit(c+2193,(vlTOPp->axi_b_valid));
        vcdp->chgBit(c+2201,(vlTOPp->axi_b_ready));
        vcdp->chgBus(c+2209,(vlTOPp->axi_b_payload_id),4);
        vcdp->chgBus(c+2217,(vlTOPp->axi_b_payload_resp),2);
        vcdp->chgBit(c+2225,(vlTOPp->axi_ar_valid));
        vcdp->chgBit(c+2233,(vlTOPp->axi_ar_ready));
        vcdp->chgBus(c+2241,(vlTOPp->axi_ar_payload_addr),20);
        vcdp->chgBus(c+2249,(vlTOPp->axi_ar_payload_id),4);
        vcdp->chgBus(c+2257,(vlTOPp->axi_ar_payload_len),8);
        vcdp->chgBus(c+2265,(vlTOPp->axi_ar_payload_size),3);
        vcdp->chgBus(c+2273,(vlTOPp->axi_ar_payload_burst),2);
        vcdp->chgBit(c+2281,(vlTOPp->axi_r_valid));
        vcdp->chgBit(c+2289,(vlTOPp->axi_r_ready));
        vcdp->chgBus(c+2297,(vlTOPp->axi_r_payload_data),32);
        vcdp->chgBus(c+2305,(vlTOPp->axi_r_payload_id),4);
        vcdp->chgBus(c+2313,(vlTOPp->axi_r_payload_resp),2);
        vcdp->chgBit(c+2321,(vlTOPp->axi_r_payload_last));
        vcdp->chgBit(c+2329,(vlTOPp->clk));
        vcdp->chgBit(c+2337,(vlTOPp->reset));
        vcdp->chgBit(c+2345,((((IData)(vlTOPp->axi_ar_valid) 
                               & (IData)(vlTOPp->Axi_Sim__DOT__axi_readOnly_decoder__DOT__decodedCmdSels)) 
                              & (IData)(vlTOPp->Axi_Sim__DOT__axi_readOnly_decoder__DOT__allowCmd))));
        vcdp->chgBit(c+2353,((((IData)(vlTOPp->axi_ar_valid) 
                               & ((IData)(vlTOPp->Axi_Sim__DOT__axi_readOnly_decoder__DOT__decodedCmdSels) 
                                  >> 1U)) & (IData)(vlTOPp->Axi_Sim__DOT__axi_readOnly_decoder__DOT__allowCmd))));
        vcdp->chgBit(c+2361,((((IData)(vlTOPp->axi_aw_valid) 
                               & (IData)(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder__DOT__decodedCmdSels)) 
                              & (IData)(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder__DOT__allowCmd))));
        vcdp->chgBit(c+2369,((((IData)(vlTOPp->axi_w_valid) 
                               & (IData)(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder__DOT__pendingSels)) 
                              & (0U != (IData)(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder__DOT__pendingDataCounter_value)))));
        vcdp->chgBit(c+2377,((((IData)(vlTOPp->axi_aw_valid) 
                               & ((IData)(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder__DOT__decodedCmdSels) 
                                  >> 1U)) & (IData)(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder__DOT__allowCmd))));
        vcdp->chgBit(c+2385,((((IData)(vlTOPp->axi_w_valid) 
                               & ((IData)(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder__DOT__pendingSels) 
                                  >> 1U)) & (0U != (IData)(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder__DOT__pendingDataCounter_value)))));
        vcdp->chgBus(c+2393,(((IData)(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter__DOT__cmdArbiter__DOT__maskRouted_0)
                               ? vlTOPp->axi_ar_payload_addr
                               : vlTOPp->axi_aw_payload_addr)),20);
        vcdp->chgBus(c+2401,(((IData)(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter__DOT__cmdArbiter__DOT__maskRouted_0)
                               ? (IData)(vlTOPp->axi_ar_payload_id)
                               : (IData)(vlTOPp->axi_aw_payload_id))),4);
        vcdp->chgBus(c+2409,(((IData)(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter__DOT__cmdArbiter__DOT__maskRouted_0)
                               ? (IData)(vlTOPp->axi_ar_payload_len)
                               : (IData)(vlTOPp->axi_aw_payload_len))),8);
        vcdp->chgBus(c+2417,(((IData)(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter__DOT__cmdArbiter__DOT__maskRouted_0)
                               ? (IData)(vlTOPp->axi_ar_payload_size)
                               : (IData)(vlTOPp->axi_aw_payload_size))),3);
        vcdp->chgBus(c+2425,(((IData)(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter__DOT__cmdArbiter__DOT__maskRouted_0)
                               ? (IData)(vlTOPp->axi_ar_payload_burst)
                               : (IData)(vlTOPp->axi_aw_payload_burst))),2);
        vcdp->chgBus(c+2433,(((IData)(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter__DOT__maskRouted_0)
                               ? vlTOPp->axi_ar_payload_addr
                               : vlTOPp->axi_aw_payload_addr)),20);
        vcdp->chgBus(c+2441,(((IData)(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter__DOT__maskRouted_0)
                               ? (IData)(vlTOPp->axi_ar_payload_id)
                               : (IData)(vlTOPp->axi_aw_payload_id))),4);
        vcdp->chgBus(c+2449,(((IData)(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter__DOT__maskRouted_0)
                               ? (IData)(vlTOPp->axi_ar_payload_len)
                               : (IData)(vlTOPp->axi_aw_payload_len))),8);
        vcdp->chgBus(c+2457,(((IData)(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter__DOT__maskRouted_0)
                               ? (IData)(vlTOPp->axi_ar_payload_size)
                               : (IData)(vlTOPp->axi_aw_payload_size))),3);
        vcdp->chgBus(c+2465,(((IData)(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter__DOT__maskRouted_0)
                               ? (IData)(vlTOPp->axi_ar_payload_burst)
                               : (IData)(vlTOPp->axi_aw_payload_burst))),2);
        vcdp->chgBus(c+2473,(((IData)(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter_io_output_w_rValid)
                               ? vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter_io_output_w_rData_data
                               : vlTOPp->axi_w_payload_data)),32);
        vcdp->chgBus(c+2481,(((IData)(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter_io_output_w_rValid)
                               ? (IData)(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter_io_output_w_rData_strb)
                               : (IData)(vlTOPp->axi_w_payload_strb))),4);
        vcdp->chgBit(c+2489,(((IData)(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter_io_output_w_rValid)
                               ? (IData)(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter_io_output_w_rData_last)
                               : (IData)(vlTOPp->axi_w_payload_last))));
        vcdp->chgBit(c+2497,((((IData)(vlTOPp->axi_ar_valid) 
                               & (0U == (IData)(vlTOPp->Axi_Sim__DOT__axi_readOnly_decoder__DOT__decodedCmdSels))) 
                              & (IData)(vlTOPp->Axi_Sim__DOT__axi_readOnly_decoder__DOT__allowCmd))));
        vcdp->chgBit(c+2505,(((IData)(vlTOPp->axi_ar_valid) 
                              & (IData)(vlTOPp->Axi_Sim__DOT__axi_readOnly_decoder_io_input_ar_ready))));
        vcdp->chgBit(c+2513,(((IData)(vlTOPp->Axi_Sim__DOT__axi_readOnly_decoder_io_input_r_valid) 
                              & (IData)(vlTOPp->axi_r_ready))));
        vcdp->chgBit(c+2521,((((IData)(vlTOPp->Axi_Sim__DOT__axi_readOnly_decoder_io_input_r_valid) 
                               & (IData)(vlTOPp->axi_r_ready)) 
                              & (IData)(vlTOPp->Axi_Sim__DOT__axi_readOnly_decoder_io_input_r_payload_last))));
        vcdp->chgBit(c+2529,((((IData)(vlTOPp->axi_aw_valid) 
                               & (0U == (IData)(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder__DOT__decodedCmdSels))) 
                              & (IData)(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder__DOT__allowCmd))));
        vcdp->chgBit(c+2537,((((IData)(vlTOPp->axi_w_valid) 
                               & (IData)(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder__DOT__pendingError)) 
                              & (0U != (IData)(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder__DOT__pendingDataCounter_value)))));
        vcdp->chgBit(c+2545,(((IData)(vlTOPp->axi_aw_valid) 
                              & (IData)(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder_io_input_aw_ready))));
        vcdp->chgBit(c+2553,(((IData)(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder_io_input_b_valid) 
                              & (IData)(vlTOPp->axi_b_ready))));
        vcdp->chgBit(c+2561,(((IData)(vlTOPp->axi_w_valid) 
                              & (IData)(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder_io_input_w_ready))));
        vcdp->chgBit(c+2569,((((IData)(vlTOPp->axi_w_valid) 
                               & (IData)(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder_io_input_w_ready)) 
                              & (IData)(vlTOPp->axi_w_payload_last))));
        vcdp->chgBit(c+2577,(((((IData)(vlTOPp->axi_w_valid) 
                                & (IData)(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder__DOT__pendingError)) 
                               & (0U != (IData)(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder__DOT__pendingDataCounter_value))) 
                              & (IData)(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder__DOT__errorSlave__DOT__consumeData))));
        vcdp->chgBit(c+2585,(((IData)(vlTOPp->Axi_Sim__DOT__axi_writeOnly_decoder__DOT__errorSlave__DOT__sendRsp) 
                              & (IData)(vlTOPp->axi_b_ready))));
        vcdp->chgBit(c+2593,((((IData)(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter_io_output_w_valid) 
                               & (~ (IData)(vlTOPp->Axi_Sim__DOT__ram_io_axi_arbiter_io_output_w_rValid))) 
                              & (IData)(vlTOPp->axi_w_payload_last))));
        vcdp->chgBit(c+2601,((((IData)(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter_io_output_w_valid) 
                               & (~ (IData)(vlTOPp->Axi_Sim__DOT__apbBridge_io_axi_arbiter_io_output_w_rValid))) 
                              & (IData)(vlTOPp->axi_w_payload_last))));
    }
}
