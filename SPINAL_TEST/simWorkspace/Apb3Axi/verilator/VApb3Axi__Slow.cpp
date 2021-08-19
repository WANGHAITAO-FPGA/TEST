// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VApb3Axi.h for the primary calling header

#include "VApb3Axi.h"
#include "VApb3Axi__Syms.h"

//==========

VL_CTOR_IMP(VApb3Axi) {
    VApb3Axi__Syms* __restrict vlSymsp = __VlSymsp = new VApb3Axi__Syms(this, name());
    VApb3Axi* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VApb3Axi::__Vconfigure(VApb3Axi__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VApb3Axi::~VApb3Axi() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void VApb3Axi::_initial__TOP__1(VApb3Axi__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VApb3Axi::_initial__TOP__1\n"); );
    VApb3Axi* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->apb_PREADY = 1U;
}

void VApb3Axi::_settle__TOP__9(VApb3Axi__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VApb3Axi::_settle__TOP__9\n"); );
    VApb3Axi* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->inter = vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_axictrlrx__DOT__axir_payload_last_regNext;
    vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT___zz_io_popOccupancy_6 
        = (1U & (((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__pushToPopGray_buffercc__DOT__buffers_1) 
                  >> 7U) ^ ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__pushToPopGray_buffercc__DOT__buffers_1) 
                            >> 8U)));
    vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT___zz_io_popOccupancy_6 
        = (1U & (((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__pushToPopGray_buffercc__DOT__buffers_1) 
                  >> 7U) ^ ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__pushToPopGray_buffercc__DOT__buffers_1) 
                            >> 8U)));
    vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__pushCC_full 
        = (((3U & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__pushCC_pushPtrGray) 
                   >> 7U)) == (3U & (~ ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                        >> 7U)))) & 
           ((0x7fU & (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__pushCC_pushPtrGray)) 
            == (0x7fU & (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1))));
    vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__pushCC_full 
        = (((3U & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__pushCC_pushPtrGray) 
                   >> 7U)) == (3U & (~ ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                        >> 7U)))) & 
           ((0x7fU & (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__pushCC_pushPtrGray)) 
            == (0x7fU & (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1))));
    vlTOPp->Apb3Axi__DOT__axictrl__DOT__txBackend_axictrltx_write_ready 
        = ((IData)(vlTOPp->axiwready) & (0U != (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txBackend_axictrltx__DOT__stateMachine_state)));
    vlTOPp->Apb3Axi__DOT__axictrl_axictrl_rx_stream_ready = 0U;
    if ((0x20U == vlTOPp->apb_PADDR)) {
        if ((((IData)(vlTOPp->apb_PSEL) & (IData)(vlTOPp->apb_PENABLE)) 
             & (~ (IData)(vlTOPp->apb_PWRITE)))) {
            vlTOPp->Apb3Axi__DOT__axictrl_axictrl_rx_stream_ready = 1U;
        }
    }
    vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popCC_empty 
        = ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popCC_popPtrGray) 
           == (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__pushToPopGray_buffercc__DOT__buffers_1));
    vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popCC_empty 
        = ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popCC_popPtrGray) 
           == (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__pushToPopGray_buffercc__DOT__buffers_1));
    vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__pushCC_pushPtrPlus 
        = (0x1ffU & ((IData)(1U) + (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__pushCC_pushPtr)));
    vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popCC_popPtrPlus 
        = (0x1ffU & ((IData)(1U) + (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popCC_popPtr)));
    vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__pushCC_pushPtrPlus 
        = (0x1ffU & ((IData)(1U) + (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__pushCC_pushPtr)));
    vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popCC_popPtrPlus 
        = (0x1ffU & ((IData)(1U) + (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popCC_popPtr)));
    vlTOPp->Apb3Axi__DOT__busCtrl_doWrite = (((IData)(vlTOPp->apb_PSEL) 
                                              & (IData)(vlTOPp->apb_PENABLE)) 
                                             & (IData)(vlTOPp->apb_PWRITE));
    vlTOPp->Apb3Axi__DOT__axictrl__DOT___zz_1 = ((IData)(vlTOPp->reset) 
                                                 | (IData)(vlTOPp->Apb3Axi__DOT__axictrl_axictrl_rx_flush_driver));
    vlTOPp->Apb3Axi__DOT__axictrl__DOT___zz_2 = ((IData)(vlTOPp->reset) 
                                                 | (IData)(vlTOPp->Apb3Axi__DOT__axictrl_axictrl_tx_flush_driver));
    vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT___zz_io_popOccupancy_5 
        = (1U & (((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__pushToPopGray_buffercc__DOT__buffers_1) 
                  >> 6U) ^ (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT___zz_io_popOccupancy_6)));
    vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT___zz_io_popOccupancy_5 
        = (1U & (((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__pushToPopGray_buffercc__DOT__buffers_1) 
                  >> 6U) ^ (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT___zz_io_popOccupancy_6)));
    vlTOPp->Apb3Axi__DOT__axictrl__DOT__txBackend_axictrltx_axiw_valid 
        = (((IData)(vlTOPp->axiwready) & (0U != (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txBackend_axictrltx__DOT__stateMachine_state))) 
           & (~ (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popCC_empty)));
    vlTOPp->Apb3Axi__DOT___zz_axictrl_tx_stream_valid = 0U;
    if ((0x10U == vlTOPp->apb_PADDR)) {
        if (vlTOPp->Apb3Axi__DOT__busCtrl_doWrite) {
            vlTOPp->Apb3Axi__DOT___zz_axictrl_tx_stream_valid = 1U;
        }
    }
    vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT___zz_io_popOccupancy_4 
        = (1U & (((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__pushToPopGray_buffercc__DOT__buffers_1) 
                  >> 5U) ^ (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT___zz_io_popOccupancy_5)));
    vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT___zz_io_popOccupancy_4 
        = (1U & (((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__pushToPopGray_buffercc__DOT__buffers_1) 
                  >> 5U) ^ (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT___zz_io_popOccupancy_5)));
    vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__io_push_fire_1 
        = ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txBackend_axictrltx_axiw_valid) 
           & (~ (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__pushCC_full)));
    vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__io_push_fire_1 
        = ((IData)(vlTOPp->Apb3Axi__DOT___zz_axictrl_tx_stream_valid) 
           & (~ (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__pushCC_full)));
    vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT___zz_io_popOccupancy_3 
        = (1U & (((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__pushToPopGray_buffercc__DOT__buffers_1) 
                  >> 4U) ^ (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT___zz_io_popOccupancy_4)));
    vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT___zz_io_popOccupancy_3 
        = (1U & (((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__pushToPopGray_buffercc__DOT__buffers_1) 
                  >> 4U) ^ (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT___zz_io_popOccupancy_4)));
    vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT___zz_1 = 0U;
    if (vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__io_push_fire_1) {
        vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT___zz_1 = 1U;
    }
    vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT___zz_1 = 0U;
    if (vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__io_push_fire_1) {
        vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT___zz_1 = 1U;
    }
    vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT___zz_io_popOccupancy_2 
        = (1U & (((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__pushToPopGray_buffercc__DOT__buffers_1) 
                  >> 3U) ^ (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT___zz_io_popOccupancy_3)));
    vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT___zz_io_popOccupancy_2 
        = (1U & (((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__pushToPopGray_buffercc__DOT__buffers_1) 
                  >> 3U) ^ (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT___zz_io_popOccupancy_3)));
    vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT___zz_io_popOccupancy_1 
        = (1U & (((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__pushToPopGray_buffercc__DOT__buffers_1) 
                  >> 2U) ^ (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT___zz_io_popOccupancy_2)));
    vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT___zz_io_popOccupancy_1 
        = (1U & (((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__pushToPopGray_buffercc__DOT__buffers_1) 
                  >> 2U) ^ (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT___zz_io_popOccupancy_2)));
    vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT___zz_io_popOccupancy 
        = (1U & (((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__pushToPopGray_buffercc__DOT__buffers_1) 
                  >> 1U) ^ (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT___zz_io_popOccupancy_1)));
    vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT___zz_io_popOccupancy 
        = (1U & (((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__pushToPopGray_buffercc__DOT__buffers_1) 
                  >> 1U) ^ (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT___zz_io_popOccupancy_1)));
    vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer_io_popOccupancy 
        = (0x1ffU & (((0x100U & (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__pushToPopGray_buffercc__DOT__buffers_1)) 
                      | (((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT___zz_io_popOccupancy_6) 
                          << 7U) | (((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT___zz_io_popOccupancy_5) 
                                     << 6U) | (((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT___zz_io_popOccupancy_4) 
                                                << 5U) 
                                               | (((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT___zz_io_popOccupancy_3) 
                                                   << 4U) 
                                                  | (((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT___zz_io_popOccupancy_2) 
                                                      << 3U) 
                                                     | (((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT___zz_io_popOccupancy_1) 
                                                         << 2U) 
                                                        | (((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT___zz_io_popOccupancy) 
                                                            << 1U) 
                                                           | (1U 
                                                              & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__pushToPopGray_buffercc__DOT__buffers_1) 
                                                                 ^ (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT___zz_io_popOccupancy))))))))))) 
                     - (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popCC_popPtr)));
    vlTOPp->apb_PRDATA = 0U;
    if ((0U == vlTOPp->apb_PADDR)) {
        vlTOPp->apb_PRDATA = ((0xfffffffeU & vlTOPp->apb_PRDATA) 
                              | (IData)(vlTOPp->Apb3Axi__DOT__axictrl_axictrl_tx_flush_driver));
        vlTOPp->apb_PRDATA = ((0xfffffffdU & vlTOPp->apb_PRDATA) 
                              | (2U & ((~ (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__pushCC_full)) 
                                       << 1U)));
        vlTOPp->apb_PRDATA = ((0xfffffffbU & vlTOPp->apb_PRDATA) 
                              | ((IData)(vlTOPp->Apb3Axi__DOT__axictrl_axictrl_tx_txstart_driver) 
                                 << 2U));
        vlTOPp->apb_PRDATA = ((0xffffffefU & vlTOPp->apb_PRDATA) 
                              | ((IData)(vlTOPp->Apb3Axi__DOT__axictrl_axictrl_rx_flush_driver) 
                                 << 4U));
        vlTOPp->apb_PRDATA = ((0xffffffdfU & vlTOPp->apb_PRDATA) 
                              | (0x20U & ((~ (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popCC_empty)) 
                                          << 5U)));
    } else {
        if ((4U == vlTOPp->apb_PADDR)) {
            vlTOPp->apb_PRDATA = ((0xfffffe00U & vlTOPp->apb_PRDATA) 
                                  | (0x1ffU & (((0x100U 
                                                 & (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__pushToPopGray_buffercc__DOT__buffers_1)) 
                                                | (((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT___zz_io_popOccupancy_6) 
                                                    << 7U) 
                                                   | (((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT___zz_io_popOccupancy_5) 
                                                       << 6U) 
                                                      | (((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT___zz_io_popOccupancy_4) 
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
                                               - (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popCC_popPtr))));
        } else {
            if ((0x20U == vlTOPp->apb_PADDR)) {
                vlTOPp->apb_PRDATA = vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT___zz_ram_port1;
            }
        }
    }
}

void VApb3Axi::_eval_initial(VApb3Axi__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VApb3Axi::_eval_initial\n"); );
    VApb3Axi* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__Apb3Axi__DOT__axictrl__DOT___zz_1 
        = vlTOPp->__VinpClk__TOP__Apb3Axi__DOT__axictrl__DOT___zz_1;
    vlTOPp->__Vclklast__TOP__axiclk = vlTOPp->axiclk;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__Apb3Axi__DOT__axictrl__DOT___zz_2 
        = vlTOPp->__VinpClk__TOP__Apb3Axi__DOT__axictrl__DOT___zz_2;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__Apb3Axi__DOT__axictrl__DOT__bufferCC_7__DOT__buffers_1 
        = vlTOPp->__VinpClk__TOP__Apb3Axi__DOT__axictrl__DOT__bufferCC_7__DOT__buffers_1;
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__Apb3Axi__DOT__axictrl__DOT__bufferCC_8__DOT__buffers_1 
        = vlTOPp->__VinpClk__TOP__Apb3Axi__DOT__axictrl__DOT__bufferCC_8__DOT__buffers_1;
}

void VApb3Axi::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VApb3Axi::final\n"); );
    // Variables
    VApb3Axi__Syms* __restrict vlSymsp = this->__VlSymsp;
    VApb3Axi* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VApb3Axi::_eval_settle(VApb3Axi__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VApb3Axi::_eval_settle\n"); );
    VApb3Axi* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__9(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

void VApb3Axi::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VApb3Axi::_ctor_var_reset\n"); );
    // Body
    apb_PADDR = VL_RAND_RESET_I(20);
    apb_PSEL = VL_RAND_RESET_I(1);
    apb_PENABLE = VL_RAND_RESET_I(1);
    apb_PREADY = VL_RAND_RESET_I(1);
    apb_PWRITE = VL_RAND_RESET_I(1);
    apb_PWDATA = VL_RAND_RESET_I(32);
    apb_PRDATA = VL_RAND_RESET_I(32);
    axiclk = VL_RAND_RESET_I(1);
    axiwready = VL_RAND_RESET_I(1);
    inter = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    clk = VL_RAND_RESET_I(1);
    Apb3Axi__DOT__axictrl_axictrl_rx_stream_ready = VL_RAND_RESET_I(1);
    Apb3Axi__DOT__busCtrl_doWrite = VL_RAND_RESET_I(1);
    Apb3Axi__DOT__axictrl_axictrl_tx_flush_driver = VL_RAND_RESET_I(1);
    Apb3Axi__DOT__axictrl_axictrl_tx_txstart_driver = VL_RAND_RESET_I(1);
    Apb3Axi__DOT__axictrl_axictrl_rx_flush_driver = VL_RAND_RESET_I(1);
    Apb3Axi__DOT___zz_axictrl_tx_stream_valid = VL_RAND_RESET_I(1);
    Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer_io_popOccupancy = VL_RAND_RESET_I(9);
    Apb3Axi__DOT__axictrl__DOT__txBackend_axictrltx_axiw_valid = VL_RAND_RESET_I(1);
    Apb3Axi__DOT__axictrl__DOT__txBackend_axictrltx_write_ready = VL_RAND_RESET_I(1);
    Apb3Axi__DOT__axictrl__DOT___zz_1 = VL_RAND_RESET_I(1);
    Apb3Axi__DOT__axictrl__DOT___zz_2 = VL_RAND_RESET_I(1);
    Apb3Axi__DOT__axictrl__DOT__bufferCC_7__DOT__buffers_0 = VL_RAND_RESET_I(1);
    Apb3Axi__DOT__axictrl__DOT__bufferCC_7__DOT__buffers_1 = VL_RAND_RESET_I(1);
    Apb3Axi__DOT__axictrl__DOT__bufferCC_8__DOT__buffers_0 = VL_RAND_RESET_I(1);
    Apb3Axi__DOT__axictrl__DOT__bufferCC_8__DOT__buffers_1 = VL_RAND_RESET_I(1);
    Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT___zz_ram_port1 = VL_RAND_RESET_I(32);
    Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT___zz_1 = VL_RAND_RESET_I(1);
    Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__pushCC_pushPtr = VL_RAND_RESET_I(9);
    Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__pushCC_pushPtrPlus = VL_RAND_RESET_I(9);
    Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__pushCC_pushPtrGray = VL_RAND_RESET_I(9);
    Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__pushCC_full = VL_RAND_RESET_I(1);
    Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__io_push_fire_1 = VL_RAND_RESET_I(1);
    Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popCC_popPtr = VL_RAND_RESET_I(9);
    Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popCC_popPtrPlus = VL_RAND_RESET_I(9);
    Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popCC_popPtrGray = VL_RAND_RESET_I(9);
    Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popCC_empty = VL_RAND_RESET_I(1);
    Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT___zz_io_popOccupancy = VL_RAND_RESET_I(1);
    Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT___zz_io_popOccupancy_1 = VL_RAND_RESET_I(1);
    Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT___zz_io_popOccupancy_2 = VL_RAND_RESET_I(1);
    Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT___zz_io_popOccupancy_3 = VL_RAND_RESET_I(1);
    Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT___zz_io_popOccupancy_4 = VL_RAND_RESET_I(1);
    Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT___zz_io_popOccupancy_5 = VL_RAND_RESET_I(1);
    Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT___zz_io_popOccupancy_6 = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<256; ++__Vi0) {
            Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }}
    Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_0 = VL_RAND_RESET_I(9);
    Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1 = VL_RAND_RESET_I(9);
    Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__pushToPopGray_buffercc__DOT__buffers_0 = VL_RAND_RESET_I(9);
    Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__pushToPopGray_buffercc__DOT__buffers_1 = VL_RAND_RESET_I(9);
    Apb3Axi__DOT__axictrl__DOT__txBackend_axictrltx__DOT__stateMachine_state = VL_RAND_RESET_I(2);
    Apb3Axi__DOT__axictrl__DOT__axictrl_tx_txstart_buffercc__DOT__buffers_0 = VL_RAND_RESET_I(1);
    Apb3Axi__DOT__axictrl__DOT__axictrl_tx_txstart_buffercc__DOT__buffers_1 = VL_RAND_RESET_I(1);
    Apb3Axi__DOT__axictrl__DOT__rxFrontend_axictrlrx__DOT__axir_payload_last_regNext = VL_RAND_RESET_I(1);
    Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT___zz_ram_port1 = VL_RAND_RESET_I(32);
    Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT___zz_1 = VL_RAND_RESET_I(1);
    Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__pushCC_pushPtr = VL_RAND_RESET_I(9);
    Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__pushCC_pushPtrPlus = VL_RAND_RESET_I(9);
    Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__pushCC_pushPtrGray = VL_RAND_RESET_I(9);
    Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__pushCC_full = VL_RAND_RESET_I(1);
    Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__io_push_fire_1 = VL_RAND_RESET_I(1);
    Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popCC_popPtr = VL_RAND_RESET_I(9);
    Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popCC_popPtrPlus = VL_RAND_RESET_I(9);
    Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popCC_popPtrGray = VL_RAND_RESET_I(9);
    Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popCC_empty = VL_RAND_RESET_I(1);
    Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT___zz_io_popOccupancy = VL_RAND_RESET_I(1);
    Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT___zz_io_popOccupancy_1 = VL_RAND_RESET_I(1);
    Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT___zz_io_popOccupancy_2 = VL_RAND_RESET_I(1);
    Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT___zz_io_popOccupancy_3 = VL_RAND_RESET_I(1);
    Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT___zz_io_popOccupancy_4 = VL_RAND_RESET_I(1);
    Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT___zz_io_popOccupancy_5 = VL_RAND_RESET_I(1);
    Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT___zz_io_popOccupancy_6 = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<256; ++__Vi0) {
            Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }}
    Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_0 = VL_RAND_RESET_I(9);
    Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1 = VL_RAND_RESET_I(9);
    Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__pushToPopGray_buffercc__DOT__buffers_0 = VL_RAND_RESET_I(9);
    Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__pushToPopGray_buffercc__DOT__buffers_1 = VL_RAND_RESET_I(9);
    __Vdlyvdim0__Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__ram__v0 = 0;
    __Vdlyvval__Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__ram__v0 = VL_RAND_RESET_I(32);
    __Vdlyvset__Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__ram__v0 = 0;
    __VinpClk__TOP__Apb3Axi__DOT__axictrl__DOT___zz_1 = VL_RAND_RESET_I(1);
    __VinpClk__TOP__Apb3Axi__DOT__axictrl__DOT___zz_2 = VL_RAND_RESET_I(1);
    __VinpClk__TOP__Apb3Axi__DOT__axictrl__DOT__bufferCC_7__DOT__buffers_1 = VL_RAND_RESET_I(1);
    __VinpClk__TOP__Apb3Axi__DOT__axictrl__DOT__bufferCC_8__DOT__buffers_1 = VL_RAND_RESET_I(1);
    __Vchglast__TOP__Apb3Axi__DOT__axictrl__DOT___zz_1 = VL_RAND_RESET_I(1);
    __Vchglast__TOP__Apb3Axi__DOT__axictrl__DOT___zz_2 = VL_RAND_RESET_I(1);
    __Vchglast__TOP__Apb3Axi__DOT__axictrl__DOT__bufferCC_7__DOT__buffers_1 = VL_RAND_RESET_I(1);
    __Vchglast__TOP__Apb3Axi__DOT__axictrl__DOT__bufferCC_8__DOT__buffers_1 = VL_RAND_RESET_I(1);
    __Vm_traceActivity = 0;
}
