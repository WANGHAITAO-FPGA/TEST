// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VApb3Axi__Syms.h"


//======================

void VApb3Axi::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VApb3Axi* t = (VApb3Axi*)userthis;
    VApb3Axi__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VApb3Axi::traceChgThis(VApb3Axi__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VApb3Axi* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 3U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 9U))))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 4U))))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 4U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 8U))))) {
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 6U))))) {
            vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 6U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 8U))))) {
            vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 8U))))) {
            vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 8U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 9U))))) {
            vlTOPp->traceChgThis__8(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 9U))))) {
            vlTOPp->traceChgThis__9(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__10(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__11(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                >> 2U) | (vlTOPp->__Vm_traceActivity 
                                          >> 6U))))) {
            vlTOPp->traceChgThis__12(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((8U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__13(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                >> 3U) | (vlTOPp->__Vm_traceActivity 
                                          >> 9U))))) {
            vlTOPp->traceChgThis__14(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((0x10U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__16(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((0x20U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__17(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((0x40U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__18(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((0x80U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__19(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((0x200U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__20(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((0x400U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__21(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((0x800U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__22(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__23(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VApb3Axi::traceChgThis__2(VApb3Axi__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VApb3Axi* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1,((0x1ffU & (((0x100U & (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__pushToPopGray_buffercc__DOT__buffers_1)) 
                                      | (((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT___zz_io_popOccupancy_6) 
                                          << 7U) | 
                                         (((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT___zz_io_popOccupancy_5) 
                                           << 6U) | 
                                          (((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT___zz_io_popOccupancy_4) 
                                            << 5U) 
                                           | (((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT___zz_io_popOccupancy_3) 
                                               << 4U) 
                                              | (((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT___zz_io_popOccupancy_2) 
                                                  << 3U) 
                                                 | (((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT___zz_io_popOccupancy_1) 
                                                     << 2U) 
                                                    | (((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT___zz_io_popOccupancy) 
                                                        << 1U) 
                                                       | (1U 
                                                          & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__pushToPopGray_buffercc__DOT__buffers_1) 
                                                             ^ (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT___zz_io_popOccupancy))))))))))) 
                                     - (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popCC_popPtr)))),9);
    }
}

void VApb3Axi::traceChgThis__3(VApb3Axi__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VApb3Axi* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+9,((1U & (~ (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popCC_empty)))));
        vcdp->chgBus(c+17,(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer_io_popOccupancy),9);
        vcdp->chgBit(c+25,(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popCC_empty));
    }
}

void VApb3Axi::traceChgThis__4(VApb3Axi__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VApb3Axi* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+33,(((~ (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popCC_empty)) 
                            & (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txBackend_axictrltx_write_ready))));
    }
}

void VApb3Axi::traceChgThis__5(VApb3Axi__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VApb3Axi* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+41,((1U & (~ (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__pushCC_full)))));
        vcdp->chgBit(c+49,(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__pushCC_full));
    }
}

void VApb3Axi::traceChgThis__6(VApb3Axi__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VApb3Axi* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+57,(((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txBackend_axictrltx_axiw_valid) 
                            & (~ (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__pushCC_full)))));
    }
}

void VApb3Axi::traceChgThis__7(VApb3Axi__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VApb3Axi* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+65,(vlTOPp->Apb3Axi__DOT__axictrl_axictrl_rx_stream_ready));
        vcdp->chgBit(c+73,(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txBackend_axictrltx_axiw_valid));
        vcdp->chgBit(c+81,(vlTOPp->Apb3Axi__DOT__busCtrl_doWrite));
        vcdp->chgBit(c+89,(vlTOPp->Apb3Axi__DOT___zz_axictrl_tx_stream_valid));
        vcdp->chgBit(c+97,(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txBackend_axictrltx_write_ready));
        vcdp->chgBit(c+105,(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__io_push_fire_1));
        vcdp->chgBit(c+113,(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__io_push_fire_1));
    }
}

void VApb3Axi::traceChgThis__8(VApb3Axi__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VApb3Axi* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+121,(((IData)(vlTOPp->Apb3Axi__DOT___zz_axictrl_tx_stream_valid) 
                             & (~ (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__pushCC_full)))));
        vcdp->chgBit(c+129,(((~ (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popCC_empty)) 
                             & (IData)(vlTOPp->Apb3Axi__DOT__axictrl_axictrl_rx_stream_ready))));
    }
}

void VApb3Axi::traceChgThis__9(VApb3Axi__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VApb3Axi* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+137,((1U & (~ (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popCC_empty)))));
        vcdp->chgBit(c+145,((1U & (~ (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__pushCC_full)))));
        vcdp->chgBit(c+153,(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__pushCC_full));
        vcdp->chgBit(c+161,(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popCC_empty));
    }
}

void VApb3Axi::traceChgThis__10(VApb3Axi__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VApb3Axi* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+169,(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT___zz_ram_port1),32);
        vcdp->chgBit(c+177,(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_axictrlrx__DOT__axir_payload_last_regNext));
    }
}

void VApb3Axi::traceChgThis__11(VApb3Axi__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VApb3Axi* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+185,(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1),9);
        vcdp->chgBus(c+193,(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_0),9);
    }
}

void VApb3Axi::traceChgThis__12(VApb3Axi__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VApb3Axi* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+201,((0x1ffU & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__pushCC_pushPtr) 
                                       - ((0x100U & (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1)) 
                                          | ((0x80U 
                                              & ((0xffffff80U 
                                                  & (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1)) 
                                                 ^ 
                                                 (0x7fffff80U 
                                                  & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                     >> 1U)))) 
                                             | ((0x40U 
                                                 & ((0xffffffc0U 
                                                     & (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1)) 
                                                    ^ 
                                                    ((0x7fffffc0U 
                                                      & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                         >> 1U)) 
                                                     ^ 
                                                     (0x3fffffc0U 
                                                      & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                         >> 2U))))) 
                                                | ((0x20U 
                                                    & ((0xffffffe0U 
                                                        & (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1)) 
                                                       ^ 
                                                       ((0x7fffffe0U 
                                                         & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                            >> 1U)) 
                                                        ^ 
                                                        ((0x3fffffe0U 
                                                          & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                             >> 2U)) 
                                                         ^ 
                                                         (0x1fffffe0U 
                                                          & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                             >> 3U)))))) 
                                                   | ((0x10U 
                                                       & ((0xfffffff0U 
                                                           & (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1)) 
                                                          ^ 
                                                          ((0x7ffffff0U 
                                                            & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                               >> 1U)) 
                                                           ^ 
                                                           ((0x3ffffff0U 
                                                             & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                >> 2U)) 
                                                            ^ 
                                                            ((0x1ffffff0U 
                                                              & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                 >> 3U)) 
                                                             ^ 
                                                             (0xffffff0U 
                                                              & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                 >> 4U))))))) 
                                                      | ((8U 
                                                          & ((0xfffffff8U 
                                                              & (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1)) 
                                                             ^ 
                                                             ((0x7ffffff8U 
                                                               & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                  >> 1U)) 
                                                              ^ 
                                                              ((0x3ffffff8U 
                                                                & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                   >> 2U)) 
                                                               ^ 
                                                               ((0x1ffffff8U 
                                                                 & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                    >> 3U)) 
                                                                ^ 
                                                                ((0xffffff8U 
                                                                  & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                     >> 4U)) 
                                                                 ^ 
                                                                 (0x7fffff8U 
                                                                  & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                     >> 5U)))))))) 
                                                         | ((4U 
                                                             & ((0xfffffffcU 
                                                                 & (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1)) 
                                                                ^ 
                                                                ((0x7ffffffcU 
                                                                  & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                     >> 1U)) 
                                                                 ^ 
                                                                 ((0x3ffffffcU 
                                                                   & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                      >> 2U)) 
                                                                  ^ 
                                                                  ((0x1ffffffcU 
                                                                    & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                       >> 3U)) 
                                                                   ^ 
                                                                   ((0xffffffcU 
                                                                     & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                        >> 4U)) 
                                                                    ^ 
                                                                    ((0x7fffffcU 
                                                                      & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                         >> 5U)) 
                                                                     ^ 
                                                                     (0x3fffffcU 
                                                                      & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                         >> 6U))))))))) 
                                                            | ((2U 
                                                                & ((0xfffffffeU 
                                                                    & (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1)) 
                                                                   ^ 
                                                                   ((0x7ffffffeU 
                                                                     & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                        >> 1U)) 
                                                                    ^ 
                                                                    ((0x3ffffffeU 
                                                                      & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                         >> 2U)) 
                                                                     ^ 
                                                                     ((0x1ffffffeU 
                                                                       & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                          >> 3U)) 
                                                                      ^ 
                                                                      ((0xffffffeU 
                                                                        & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                           >> 4U)) 
                                                                       ^ 
                                                                       ((0x7fffffeU 
                                                                         & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                            >> 5U)) 
                                                                        ^ 
                                                                        ((0x3fffffeU 
                                                                          & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                             >> 6U)) 
                                                                         ^ 
                                                                         (0x1fffffeU 
                                                                          & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                             >> 7U)))))))))) 
                                                               | (1U 
                                                                  & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                     ^ 
                                                                     (((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                       >> 1U) 
                                                                      ^ 
                                                                      (((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                        >> 2U) 
                                                                       ^ 
                                                                       (((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                         >> 3U) 
                                                                        ^ 
                                                                        (((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                          >> 4U) 
                                                                         ^ 
                                                                         (((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                           >> 5U) 
                                                                          ^ 
                                                                          (((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                            >> 6U) 
                                                                           ^ 
                                                                           (((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                             >> 7U) 
                                                                            ^ 
                                                                            ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                             >> 8U))))))))))))))))))))),9);
    }
}

void VApb3Axi::traceChgThis__13(VApb3Axi__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VApb3Axi* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+209,(vlTOPp->Apb3Axi__DOT__axictrl_axictrl_rx_flush_driver));
        vcdp->chgBus(c+217,(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1),9);
        vcdp->chgBus(c+225,(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_0),9);
        vcdp->chgBus(c+233,(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__pushToPopGray_buffercc__DOT__buffers_1),9);
        vcdp->chgBus(c+241,(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popCC_popPtrGray),9);
        vcdp->chgBus(c+249,(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__pushToPopGray_buffercc__DOT__buffers_0),9);
    }
}

void VApb3Axi::traceChgThis__14(VApb3Axi__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VApb3Axi* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+257,((0x1ffU & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__pushCC_pushPtr) 
                                       - ((0x100U & (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1)) 
                                          | ((0x80U 
                                              & ((0xffffff80U 
                                                  & (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1)) 
                                                 ^ 
                                                 (0x7fffff80U 
                                                  & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                     >> 1U)))) 
                                             | ((0x40U 
                                                 & ((0xffffffc0U 
                                                     & (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1)) 
                                                    ^ 
                                                    ((0x7fffffc0U 
                                                      & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                         >> 1U)) 
                                                     ^ 
                                                     (0x3fffffc0U 
                                                      & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                         >> 2U))))) 
                                                | ((0x20U 
                                                    & ((0xffffffe0U 
                                                        & (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1)) 
                                                       ^ 
                                                       ((0x7fffffe0U 
                                                         & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                            >> 1U)) 
                                                        ^ 
                                                        ((0x3fffffe0U 
                                                          & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                             >> 2U)) 
                                                         ^ 
                                                         (0x1fffffe0U 
                                                          & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                             >> 3U)))))) 
                                                   | ((0x10U 
                                                       & ((0xfffffff0U 
                                                           & (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1)) 
                                                          ^ 
                                                          ((0x7ffffff0U 
                                                            & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                               >> 1U)) 
                                                           ^ 
                                                           ((0x3ffffff0U 
                                                             & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                >> 2U)) 
                                                            ^ 
                                                            ((0x1ffffff0U 
                                                              & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                 >> 3U)) 
                                                             ^ 
                                                             (0xffffff0U 
                                                              & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                 >> 4U))))))) 
                                                      | ((8U 
                                                          & ((0xfffffff8U 
                                                              & (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1)) 
                                                             ^ 
                                                             ((0x7ffffff8U 
                                                               & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                  >> 1U)) 
                                                              ^ 
                                                              ((0x3ffffff8U 
                                                                & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                   >> 2U)) 
                                                               ^ 
                                                               ((0x1ffffff8U 
                                                                 & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                    >> 3U)) 
                                                                ^ 
                                                                ((0xffffff8U 
                                                                  & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                     >> 4U)) 
                                                                 ^ 
                                                                 (0x7fffff8U 
                                                                  & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                     >> 5U)))))))) 
                                                         | ((4U 
                                                             & ((0xfffffffcU 
                                                                 & (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1)) 
                                                                ^ 
                                                                ((0x7ffffffcU 
                                                                  & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                     >> 1U)) 
                                                                 ^ 
                                                                 ((0x3ffffffcU 
                                                                   & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                      >> 2U)) 
                                                                  ^ 
                                                                  ((0x1ffffffcU 
                                                                    & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                       >> 3U)) 
                                                                   ^ 
                                                                   ((0xffffffcU 
                                                                     & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                        >> 4U)) 
                                                                    ^ 
                                                                    ((0x7fffffcU 
                                                                      & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                         >> 5U)) 
                                                                     ^ 
                                                                     (0x3fffffcU 
                                                                      & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                         >> 6U))))))))) 
                                                            | ((2U 
                                                                & ((0xfffffffeU 
                                                                    & (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1)) 
                                                                   ^ 
                                                                   ((0x7ffffffeU 
                                                                     & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                        >> 1U)) 
                                                                    ^ 
                                                                    ((0x3ffffffeU 
                                                                      & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                         >> 2U)) 
                                                                     ^ 
                                                                     ((0x1ffffffeU 
                                                                       & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                          >> 3U)) 
                                                                      ^ 
                                                                      ((0xffffffeU 
                                                                        & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                           >> 4U)) 
                                                                       ^ 
                                                                       ((0x7fffffeU 
                                                                         & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                            >> 5U)) 
                                                                        ^ 
                                                                        ((0x3fffffeU 
                                                                          & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                             >> 6U)) 
                                                                         ^ 
                                                                         (0x1fffffeU 
                                                                          & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                             >> 7U)))))))))) 
                                                               | (1U 
                                                                  & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                     ^ 
                                                                     (((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                       >> 1U) 
                                                                      ^ 
                                                                      (((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                        >> 2U) 
                                                                       ^ 
                                                                       (((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                         >> 3U) 
                                                                        ^ 
                                                                        (((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                          >> 4U) 
                                                                         ^ 
                                                                         (((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                           >> 5U) 
                                                                          ^ 
                                                                          (((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                            >> 6U) 
                                                                           ^ 
                                                                           (((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                             >> 7U) 
                                                                            ^ 
                                                                            ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                                                             >> 8U))))))))))))))))))))),9);
    }
}

void VApb3Axi::traceChgThis__16(VApb3Axi__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VApb3Axi* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+265,(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__pushToPopGray_buffercc__DOT__buffers_1),9);
        vcdp->chgBus(c+273,(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popCC_popPtrGray),9);
        vcdp->chgBus(c+281,(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popCC_popPtr),9);
        vcdp->chgBus(c+289,((0x1ffU & ((IData)(1U) 
                                       + (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popCC_popPtr)))),9);
        vcdp->chgBus(c+297,(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__pushToPopGray_buffercc__DOT__buffers_0),9);
        vcdp->chgBus(c+305,(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txBackend_axictrltx__DOT__stateMachine_state),2);
        vcdp->chgBus(c+313,(((0U == (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txBackend_axictrltx__DOT__stateMachine_state))
                              ? 0x49444c45U : ((1U 
                                                == (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txBackend_axictrltx__DOT__stateMachine_state))
                                                ? 0x44415441U
                                                : (
                                                   (2U 
                                                    == (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txBackend_axictrltx__DOT__stateMachine_state))
                                                    ? 0x53544f50U
                                                    : 0x3f3f3f3fU)))),32);
    }
}

void VApb3Axi::traceChgThis__17(VApb3Axi__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VApb3Axi* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+321,(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT___zz_ram_port1),32);
    }
}

void VApb3Axi::traceChgThis__18(VApb3Axi__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VApb3Axi* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+329,(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__pushCC_pushPtrGray),9);
        vcdp->chgBus(c+337,(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__pushCC_pushPtr),9);
        vcdp->chgBus(c+345,((0x1ffU & ((IData)(1U) 
                                       + (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__pushCC_pushPtr)))),9);
    }
}

void VApb3Axi::traceChgThis__19(VApb3Axi__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VApb3Axi* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+353,(vlTOPp->Apb3Axi__DOT__axictrl__DOT__axictrl_tx_txstart_buffercc__DOT__buffers_1));
        vcdp->chgBit(c+361,(vlTOPp->Apb3Axi__DOT__axictrl__DOT__axictrl_tx_txstart_buffercc__DOT__buffers_0));
    }
}

void VApb3Axi::traceChgThis__20(VApb3Axi__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VApb3Axi* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+369,(vlTOPp->Apb3Axi__DOT__axictrl_axictrl_tx_flush_driver));
        vcdp->chgBit(c+377,(vlTOPp->Apb3Axi__DOT__axictrl_axictrl_tx_txstart_driver));
        vcdp->chgBus(c+385,(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__pushCC_pushPtrGray),9);
        vcdp->chgBus(c+393,(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__pushCC_pushPtr),9);
        vcdp->chgBus(c+401,((0x1ffU & ((IData)(1U) 
                                       + (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__pushCC_pushPtr)))),9);
        vcdp->chgBus(c+409,(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popCC_popPtr),9);
        vcdp->chgBus(c+417,((0x1ffU & ((IData)(1U) 
                                       + (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popCC_popPtr)))),9);
    }
}

void VApb3Axi::traceChgThis__21(VApb3Axi__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VApb3Axi* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+425,(vlTOPp->Apb3Axi__DOT__axictrl__DOT__bufferCC_8__DOT__buffers_1));
        vcdp->chgBit(c+433,(vlTOPp->Apb3Axi__DOT__axictrl__DOT__bufferCC_8__DOT__buffers_0));
    }
}

void VApb3Axi::traceChgThis__22(VApb3Axi__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VApb3Axi* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+441,(vlTOPp->Apb3Axi__DOT__axictrl__DOT__bufferCC_7__DOT__buffers_1));
        vcdp->chgBit(c+449,(vlTOPp->Apb3Axi__DOT__axictrl__DOT__bufferCC_7__DOT__buffers_0));
    }
}

void VApb3Axi::traceChgThis__23(VApb3Axi__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VApb3Axi* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+457,(vlTOPp->apb_PADDR),20);
        vcdp->chgBit(c+465,(vlTOPp->apb_PSEL));
        vcdp->chgBit(c+473,(vlTOPp->apb_PENABLE));
        vcdp->chgBit(c+481,(vlTOPp->apb_PREADY));
        vcdp->chgBit(c+489,(vlTOPp->apb_PWRITE));
        vcdp->chgBus(c+497,(vlTOPp->apb_PWDATA),32);
        vcdp->chgBus(c+505,(vlTOPp->apb_PRDATA),32);
        vcdp->chgBit(c+513,(vlTOPp->axiclk));
        vcdp->chgBit(c+521,(vlTOPp->axiwready));
        vcdp->chgBit(c+529,(vlTOPp->inter));
        vcdp->chgBit(c+537,(vlTOPp->reset));
        vcdp->chgBit(c+545,(vlTOPp->clk));
        vcdp->chgBit(c+553,(((1U == (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer_io_popOccupancy)) 
                             & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txBackend_axictrltx_axiw_valid) 
                                & (IData)(vlTOPp->axiwready)))));
        vcdp->chgBit(c+561,((((IData)(vlTOPp->apb_PSEL) 
                              & (IData)(vlTOPp->apb_PENABLE)) 
                             & (IData)(vlTOPp->apb_PWRITE))));
        vcdp->chgBit(c+569,((((IData)(vlTOPp->apb_PSEL) 
                              & (IData)(vlTOPp->apb_PENABLE)) 
                             & (~ (IData)(vlTOPp->apb_PWRITE)))));
        vcdp->chgBit(c+577,(((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txBackend_axictrltx_axiw_valid) 
                             & (IData)(vlTOPp->axiwready))));
    }
}
