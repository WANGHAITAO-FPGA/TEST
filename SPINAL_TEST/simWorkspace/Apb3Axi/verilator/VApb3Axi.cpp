// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VApb3Axi.h for the primary calling header

#include "VApb3Axi.h"
#include "VApb3Axi__Syms.h"

//==========

void VApb3Axi::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VApb3Axi::eval\n"); );
    VApb3Axi__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VApb3Axi* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
#ifdef VM_TRACE
    // Tracing
#endif  // VM_TRACE
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("D:/CODE_LIB/TEST/SPINAL_TEST/tmp/job_1/Apb3Axi.v", 12, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VApb3Axi::_eval_initial_loop(VApb3Axi__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("D:/CODE_LIB/TEST/SPINAL_TEST/tmp/job_1/Apb3Axi.v", 12, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VApb3Axi::_sequent__TOP__4(VApb3Axi__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VApb3Axi::_sequent__TOP__4\n"); );
    VApb3Axi* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__ram__v0 = 0U;
    vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_axictrlrx__DOT__axir_payload_last_regNext 
        = ((1U == (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer_io_popOccupancy)) 
           & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txBackend_axictrltx_axiw_valid) 
              & (IData)(vlTOPp->axiwready)));
    if (vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT___zz_1) {
        vlTOPp->__Vdlyvval__Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__ram__v0 
            = vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT___zz_ram_port1;
        vlTOPp->__Vdlyvset__Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__ram__v0 
            = (0xffU & (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__pushCC_pushPtr));
    }
    vlTOPp->inter = vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_axictrlrx__DOT__axir_payload_last_regNext;
    vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT___zz_ram_port1 
        = vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__ram
        [(0xffU & (((~ (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popCC_empty)) 
                    & (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txBackend_axictrltx_write_ready))
                    ? ((IData)(1U) + (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popCC_popPtr))
                    : (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popCC_popPtr)))];
}

VL_INLINE_OPT void VApb3Axi::_sequent__TOP__5(VApb3Axi__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VApb3Axi::_sequent__TOP__5\n"); );
    VApb3Axi* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1 
        = ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__bufferCC_7__DOT__buffers_1)
            ? 0U : (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_0));
    vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_0 
        = ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__bufferCC_7__DOT__buffers_1)
            ? 0U : (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popCC_popPtrGray));
}

VL_INLINE_OPT void VApb3Axi::_sequent__TOP__6(VApb3Axi__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VApb3Axi::_sequent__TOP__6\n"); );
    VApb3Axi* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->Apb3Axi__DOT__axictrl_axictrl_rx_flush_driver = 1U;
    } else {
        if ((0U == vlTOPp->apb_PADDR)) {
            if (vlTOPp->Apb3Axi__DOT__busCtrl_doWrite) {
                vlTOPp->Apb3Axi__DOT__axictrl_axictrl_rx_flush_driver 
                    = (1U & (vlTOPp->apb_PWDATA >> 4U));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popCC_popPtrGray = 0U;
    } else {
        if (vlTOPp->Apb3Axi__DOT__axictrl_axictrl_tx_flush_driver) {
            vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popCC_popPtrGray = 0U;
        } else {
            if (((~ (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popCC_empty)) 
                 & (IData)(vlTOPp->Apb3Axi__DOT__axictrl_axictrl_rx_stream_ready))) {
                vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popCC_popPtrGray 
                    = (0x1ffU & ((0xffU & (((IData)(1U) 
                                            + (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popCC_popPtr)) 
                                           >> 1U)) 
                                 ^ ((IData)(1U) + (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popCC_popPtr))));
            }
        }
    }
    vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->Apb3Axi__DOT__axictrl_axictrl_tx_flush_driver)
                                           ? 0U : (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_0)));
    vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__pushToPopGray_buffercc__DOT__buffers_1 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->Apb3Axi__DOT__axictrl_axictrl_tx_flush_driver)
                                           ? 0U : (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__pushToPopGray_buffercc__DOT__buffers_0)));
    vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_0 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->Apb3Axi__DOT__axictrl_axictrl_tx_flush_driver)
                                           ? 0U : (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popCC_popPtrGray)));
    vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__pushToPopGray_buffercc__DOT__buffers_0 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->Apb3Axi__DOT__axictrl_axictrl_tx_flush_driver)
                                           ? 0U : (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__pushCC_pushPtrGray)));
    vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT___zz_io_popOccupancy_6 
        = (1U & (((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__pushToPopGray_buffercc__DOT__buffers_1) 
                  >> 7U) ^ ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__pushToPopGray_buffercc__DOT__buffers_1) 
                            >> 8U)));
    vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT___zz_io_popOccupancy_5 
        = (1U & (((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__pushToPopGray_buffercc__DOT__buffers_1) 
                  >> 6U) ^ (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT___zz_io_popOccupancy_6)));
    vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT___zz_io_popOccupancy_4 
        = (1U & (((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__pushToPopGray_buffercc__DOT__buffers_1) 
                  >> 5U) ^ (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT___zz_io_popOccupancy_5)));
    vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT___zz_io_popOccupancy_3 
        = (1U & (((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__pushToPopGray_buffercc__DOT__buffers_1) 
                  >> 4U) ^ (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT___zz_io_popOccupancy_4)));
    vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT___zz_io_popOccupancy_2 
        = (1U & (((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__pushToPopGray_buffercc__DOT__buffers_1) 
                  >> 3U) ^ (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT___zz_io_popOccupancy_3)));
    vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT___zz_io_popOccupancy_1 
        = (1U & (((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__pushToPopGray_buffercc__DOT__buffers_1) 
                  >> 2U) ^ (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT___zz_io_popOccupancy_2)));
    vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT___zz_io_popOccupancy 
        = (1U & (((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__pushToPopGray_buffercc__DOT__buffers_1) 
                  >> 1U) ^ (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT___zz_io_popOccupancy_1)));
}

VL_INLINE_OPT void VApb3Axi::_sequent__TOP__7(VApb3Axi__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VApb3Axi::_sequent__TOP__7\n"); );
    VApb3Axi* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__Apb3Axi__DOT__axictrl__DOT__txBackend_axictrltx__DOT__stateMachine_state;
    // Body
    __Vdly__Apb3Axi__DOT__axictrl__DOT__txBackend_axictrltx__DOT__stateMachine_state 
        = vlTOPp->Apb3Axi__DOT__axictrl__DOT__txBackend_axictrltx__DOT__stateMachine_state;
    if (vlTOPp->Apb3Axi__DOT__axictrl__DOT__bufferCC_8__DOT__buffers_1) {
        __Vdly__Apb3Axi__DOT__axictrl__DOT__txBackend_axictrltx__DOT__stateMachine_state = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txBackend_axictrltx__DOT__stateMachine_state))) {
            if (vlTOPp->Apb3Axi__DOT__axictrl__DOT__axictrl_tx_txstart_buffercc__DOT__buffers_1) {
                __Vdly__Apb3Axi__DOT__axictrl__DOT__txBackend_axictrltx__DOT__stateMachine_state = 1U;
            }
        } else {
            if ((1U == (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txBackend_axictrltx__DOT__stateMachine_state))) {
                if (((1U == (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer_io_popOccupancy)) 
                     & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txBackend_axictrltx_axiw_valid) 
                        & (IData)(vlTOPp->axiwready)))) {
                    __Vdly__Apb3Axi__DOT__axictrl__DOT__txBackend_axictrltx__DOT__stateMachine_state = 2U;
                }
            } else {
                __Vdly__Apb3Axi__DOT__axictrl__DOT__txBackend_axictrltx__DOT__stateMachine_state = 0U;
            }
        }
    }
    if (vlTOPp->Apb3Axi__DOT__axictrl__DOT__bufferCC_8__DOT__buffers_1) {
        vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popCC_popPtrGray = 0U;
    } else {
        if (((~ (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popCC_empty)) 
             & (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txBackend_axictrltx_write_ready))) {
            vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popCC_popPtrGray 
                = (0x1ffU & ((0xffU & (((IData)(1U) 
                                        + (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popCC_popPtr)) 
                                       >> 1U)) ^ ((IData)(1U) 
                                                  + (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popCC_popPtr))));
        }
    }
    vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__pushToPopGray_buffercc__DOT__buffers_1 
        = ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__bufferCC_8__DOT__buffers_1)
            ? 0U : (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__pushToPopGray_buffercc__DOT__buffers_0));
    vlTOPp->Apb3Axi__DOT__axictrl__DOT__txBackend_axictrltx__DOT__stateMachine_state 
        = __Vdly__Apb3Axi__DOT__axictrl__DOT__txBackend_axictrltx__DOT__stateMachine_state;
    if (vlTOPp->Apb3Axi__DOT__axictrl__DOT__bufferCC_8__DOT__buffers_1) {
        vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popCC_popPtr = 0U;
    } else {
        if (((~ (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popCC_empty)) 
             & (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txBackend_axictrltx_write_ready))) {
            vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popCC_popPtr 
                = vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popCC_popPtrPlus;
        }
    }
    vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__pushToPopGray_buffercc__DOT__buffers_0 
        = ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__bufferCC_8__DOT__buffers_1)
            ? 0U : (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__pushCC_pushPtrGray));
    vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT___zz_io_popOccupancy_6 
        = (1U & (((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__pushToPopGray_buffercc__DOT__buffers_1) 
                  >> 7U) ^ ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__pushToPopGray_buffercc__DOT__buffers_1) 
                            >> 8U)));
    vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popCC_empty 
        = ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popCC_popPtrGray) 
           == (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__pushToPopGray_buffercc__DOT__buffers_1));
    vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT___zz_io_popOccupancy_5 
        = (1U & (((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__pushToPopGray_buffercc__DOT__buffers_1) 
                  >> 6U) ^ (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT___zz_io_popOccupancy_6)));
    vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popCC_popPtrPlus 
        = (0x1ffU & ((IData)(1U) + (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popCC_popPtr)));
    vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT___zz_io_popOccupancy_4 
        = (1U & (((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__pushToPopGray_buffercc__DOT__buffers_1) 
                  >> 5U) ^ (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT___zz_io_popOccupancy_5)));
    vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT___zz_io_popOccupancy_3 
        = (1U & (((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__pushToPopGray_buffercc__DOT__buffers_1) 
                  >> 4U) ^ (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT___zz_io_popOccupancy_4)));
    vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT___zz_io_popOccupancy_2 
        = (1U & (((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__pushToPopGray_buffercc__DOT__buffers_1) 
                  >> 3U) ^ (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT___zz_io_popOccupancy_3)));
    vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT___zz_io_popOccupancy_1 
        = (1U & (((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__pushToPopGray_buffercc__DOT__buffers_1) 
                  >> 2U) ^ (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT___zz_io_popOccupancy_2)));
    vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT___zz_io_popOccupancy 
        = (1U & (((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__pushToPopGray_buffercc__DOT__buffers_1) 
                  >> 1U) ^ (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT___zz_io_popOccupancy_1)));
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
}

VL_INLINE_OPT void VApb3Axi::_sequent__TOP__8(VApb3Axi__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VApb3Axi::_sequent__TOP__8\n"); );
    VApb3Axi* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdlyvdim0__Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__ram__v0;
    IData/*31:0*/ __Vdlyvval__Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__ram__v0;
    // Body
    __Vdlyvset__Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__ram__v0 = 0U;
    if (vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT___zz_1) {
        __Vdlyvval__Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__ram__v0 
            = vlTOPp->apb_PWDATA;
        __Vdlyvset__Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__ram__v0 = 1U;
        __Vdlyvdim0__Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__ram__v0 
            = (0xffU & (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__pushCC_pushPtr));
    }
    vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT___zz_ram_port1 
        = vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__ram
        [(0xffU & (((~ (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popCC_empty)) 
                    & (IData)(vlTOPp->Apb3Axi__DOT__axictrl_axictrl_rx_stream_ready))
                    ? ((IData)(1U) + (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popCC_popPtr))
                    : (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popCC_popPtr)))];
    if (__Vdlyvset__Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__ram__v0) {
        vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__ram[__Vdlyvdim0__Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__ram__v0] 
            = __Vdlyvval__Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__ram__v0;
    }
}

VL_INLINE_OPT void VApb3Axi::_sequent__TOP__10(VApb3Axi__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VApb3Axi::_sequent__TOP__10\n"); );
    VApb3Axi* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->Apb3Axi__DOT__axictrl__DOT__bufferCC_7__DOT__buffers_1) {
        vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__pushCC_pushPtrGray = 0U;
    } else {
        if (((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txBackend_axictrltx_axiw_valid) 
             & (~ (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__pushCC_full)))) {
            vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__pushCC_pushPtrGray 
                = (0x1ffU & ((0xffU & (((IData)(1U) 
                                        + (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__pushCC_pushPtr)) 
                                       >> 1U)) ^ ((IData)(1U) 
                                                  + (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__pushCC_pushPtr))));
        }
    }
    vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__pushCC_full 
        = (((3U & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__pushCC_pushPtrGray) 
                   >> 7U)) == (3U & (~ ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                        >> 7U)))) & 
           ((0x7fU & (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__pushCC_pushPtrGray)) 
            == (0x7fU & (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1))));
    if (vlTOPp->Apb3Axi__DOT__axictrl__DOT__bufferCC_7__DOT__buffers_1) {
        vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__pushCC_pushPtr = 0U;
    } else {
        if (vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__io_push_fire_1) {
            vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__pushCC_pushPtr 
                = vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__pushCC_pushPtrPlus;
        }
    }
    vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__pushCC_pushPtrPlus 
        = (0x1ffU & ((IData)(1U) + (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__pushCC_pushPtr)));
}

VL_INLINE_OPT void VApb3Axi::_sequent__TOP__11(VApb3Axi__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VApb3Axi::_sequent__TOP__11\n"); );
    VApb3Axi* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->__Vdlyvset__Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__ram__v0) {
        vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__ram[vlTOPp->__Vdlyvdim0__Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__ram__v0] 
            = vlTOPp->__Vdlyvval__Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__ram__v0;
    }
    vlTOPp->Apb3Axi__DOT__axictrl__DOT__axictrl_tx_txstart_buffercc__DOT__buffers_1 
        = vlTOPp->Apb3Axi__DOT__axictrl__DOT__axictrl_tx_txstart_buffercc__DOT__buffers_0;
    vlTOPp->Apb3Axi__DOT__axictrl__DOT__axictrl_tx_txstart_buffercc__DOT__buffers_0 
        = vlTOPp->Apb3Axi__DOT__axictrl_axictrl_tx_txstart_driver;
}

VL_INLINE_OPT void VApb3Axi::_combo__TOP__12(VApb3Axi__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VApb3Axi::_combo__TOP__12\n"); );
    VApb3Axi* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Apb3Axi__DOT__axictrl__DOT__txBackend_axictrltx_write_ready 
        = ((IData)(vlTOPp->axiwready) & (0U != (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txBackend_axictrltx__DOT__stateMachine_state)));
    vlTOPp->Apb3Axi__DOT__axictrl__DOT__txBackend_axictrltx_axiw_valid 
        = (((IData)(vlTOPp->axiwready) & (0U != (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txBackend_axictrltx__DOT__stateMachine_state))) 
           & (~ (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popCC_empty)));
    vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__io_push_fire_1 
        = ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txBackend_axictrltx_axiw_valid) 
           & (~ (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__pushCC_full)));
    vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT___zz_1 = 0U;
    if (vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__io_push_fire_1) {
        vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT___zz_1 = 1U;
    }
}

VL_INLINE_OPT void VApb3Axi::_sequent__TOP__13(VApb3Axi__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VApb3Axi::_sequent__TOP__13\n"); );
    VApb3Axi* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__pushCC_pushPtrGray = 0U;
    } else {
        if (vlTOPp->Apb3Axi__DOT__axictrl_axictrl_tx_flush_driver) {
            vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__pushCC_pushPtrGray = 0U;
        } else {
            if (((IData)(vlTOPp->Apb3Axi__DOT___zz_axictrl_tx_stream_valid) 
                 & (~ (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__pushCC_full)))) {
                vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__pushCC_pushPtrGray 
                    = (0x1ffU & ((0xffU & (((IData)(1U) 
                                            + (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__pushCC_pushPtr)) 
                                           >> 1U)) 
                                 ^ ((IData)(1U) + (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__pushCC_pushPtr))));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popCC_popPtr = 0U;
    } else {
        if (vlTOPp->Apb3Axi__DOT__axictrl_axictrl_tx_flush_driver) {
            vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popCC_popPtr = 0U;
        } else {
            if (((~ (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popCC_empty)) 
                 & (IData)(vlTOPp->Apb3Axi__DOT__axictrl_axictrl_rx_stream_ready))) {
                vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popCC_popPtr 
                    = vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popCC_popPtrPlus;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Apb3Axi__DOT__axictrl_axictrl_tx_txstart_driver = 0U;
    } else {
        if ((0U == vlTOPp->apb_PADDR)) {
            if (vlTOPp->Apb3Axi__DOT__busCtrl_doWrite) {
                vlTOPp->Apb3Axi__DOT__axictrl_axictrl_tx_txstart_driver 
                    = (1U & (vlTOPp->apb_PWDATA >> 2U));
            }
        }
    }
    vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popCC_empty 
        = ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popCC_popPtrGray) 
           == (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__pushToPopGray_buffercc__DOT__buffers_1));
    vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__pushCC_full 
        = (((3U & ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__pushCC_pushPtrGray) 
                   >> 7U)) == (3U & (~ ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1) 
                                        >> 7U)))) & 
           ((0x7fU & (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__pushCC_pushPtrGray)) 
            == (0x7fU & (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1))));
    if (vlTOPp->reset) {
        vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__pushCC_pushPtr = 0U;
    } else {
        if (vlTOPp->Apb3Axi__DOT__axictrl_axictrl_tx_flush_driver) {
            vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__pushCC_pushPtr = 0U;
        } else {
            if (vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__io_push_fire_1) {
                vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__pushCC_pushPtr 
                    = vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__pushCC_pushPtrPlus;
            }
        }
    }
    vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popCC_popPtrPlus 
        = (0x1ffU & ((IData)(1U) + (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popCC_popPtr)));
    vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__pushCC_pushPtrPlus 
        = (0x1ffU & ((IData)(1U) + (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__pushCC_pushPtr)));
    if (vlTOPp->reset) {
        vlTOPp->Apb3Axi__DOT__axictrl_axictrl_tx_flush_driver = 1U;
    } else {
        if ((0U == vlTOPp->apb_PADDR)) {
            if (vlTOPp->Apb3Axi__DOT__busCtrl_doWrite) {
                vlTOPp->Apb3Axi__DOT__axictrl_axictrl_tx_flush_driver 
                    = (1U & vlTOPp->apb_PWDATA);
            }
        }
    }
}

VL_INLINE_OPT void VApb3Axi::_sequent__TOP__14(VApb3Axi__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VApb3Axi::_sequent__TOP__14\n"); );
    VApb3Axi* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Apb3Axi__DOT__axictrl__DOT__bufferCC_8__DOT__buffers_1 
        = ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT___zz_2) 
           | (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__bufferCC_8__DOT__buffers_0));
    vlTOPp->Apb3Axi__DOT__axictrl__DOT__bufferCC_8__DOT__buffers_0 
        = vlTOPp->Apb3Axi__DOT__axictrl__DOT___zz_2;
}

VL_INLINE_OPT void VApb3Axi::_sequent__TOP__15(VApb3Axi__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VApb3Axi::_sequent__TOP__15\n"); );
    VApb3Axi* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Apb3Axi__DOT__axictrl__DOT__bufferCC_7__DOT__buffers_1 
        = ((IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT___zz_1) 
           | (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__bufferCC_7__DOT__buffers_0));
    vlTOPp->Apb3Axi__DOT__axictrl__DOT__bufferCC_7__DOT__buffers_0 
        = vlTOPp->Apb3Axi__DOT__axictrl__DOT___zz_1;
}

VL_INLINE_OPT void VApb3Axi::_combo__TOP__16(VApb3Axi__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VApb3Axi::_combo__TOP__16\n"); );
    VApb3Axi* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Apb3Axi__DOT__axictrl_axictrl_rx_stream_ready = 0U;
    if ((0x20U == vlTOPp->apb_PADDR)) {
        if ((((IData)(vlTOPp->apb_PSEL) & (IData)(vlTOPp->apb_PENABLE)) 
             & (~ (IData)(vlTOPp->apb_PWRITE)))) {
            vlTOPp->Apb3Axi__DOT__axictrl_axictrl_rx_stream_ready = 1U;
        }
    }
    vlTOPp->Apb3Axi__DOT__busCtrl_doWrite = (((IData)(vlTOPp->apb_PSEL) 
                                              & (IData)(vlTOPp->apb_PENABLE)) 
                                             & (IData)(vlTOPp->apb_PWRITE));
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
    vlTOPp->Apb3Axi__DOT__axictrl__DOT___zz_2 = ((IData)(vlTOPp->reset) 
                                                 | (IData)(vlTOPp->Apb3Axi__DOT__axictrl_axictrl_tx_flush_driver));
    vlTOPp->Apb3Axi__DOT__axictrl__DOT___zz_1 = ((IData)(vlTOPp->reset) 
                                                 | (IData)(vlTOPp->Apb3Axi__DOT__axictrl_axictrl_rx_flush_driver));
    vlTOPp->Apb3Axi__DOT___zz_axictrl_tx_stream_valid = 0U;
    if ((0x10U == vlTOPp->apb_PADDR)) {
        if (vlTOPp->Apb3Axi__DOT__busCtrl_doWrite) {
            vlTOPp->Apb3Axi__DOT___zz_axictrl_tx_stream_valid = 1U;
        }
    }
    vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__io_push_fire_1 
        = ((IData)(vlTOPp->Apb3Axi__DOT___zz_axictrl_tx_stream_valid) 
           & (~ (IData)(vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__pushCC_full)));
    vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT___zz_1 = 0U;
    if (vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__io_push_fire_1) {
        vlTOPp->Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT___zz_1 = 1U;
    }
}

void VApb3Axi::_eval(VApb3Axi__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VApb3Axi::_eval\n"); );
    VApb3Axi* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->axiclk) & (~ (IData)(vlTOPp->__Vclklast__TOP__axiclk)))) {
        vlTOPp->_sequent__TOP__4(vlSymsp);
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__Apb3Axi__DOT__axictrl__DOT__bufferCC_7__DOT__buffers_1) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Apb3Axi__DOT__axictrl__DOT__bufferCC_7__DOT__buffers_1))) 
         | ((IData)(vlTOPp->axiclk) & (~ (IData)(vlTOPp->__Vclklast__TOP__axiclk))))) {
        vlTOPp->_sequent__TOP__5(vlSymsp);
        vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__6(vlSymsp);
        vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__Apb3Axi__DOT__axictrl__DOT__bufferCC_8__DOT__buffers_1) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Apb3Axi__DOT__axictrl__DOT__bufferCC_8__DOT__buffers_1))) 
         | ((IData)(vlTOPp->axiclk) & (~ (IData)(vlTOPp->__Vclklast__TOP__axiclk))))) {
        vlTOPp->_sequent__TOP__7(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x10U | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__8(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x20U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__Apb3Axi__DOT__axictrl__DOT__bufferCC_7__DOT__buffers_1) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Apb3Axi__DOT__axictrl__DOT__bufferCC_7__DOT__buffers_1))) 
         | ((IData)(vlTOPp->axiclk) & (~ (IData)(vlTOPp->__Vclklast__TOP__axiclk))))) {
        vlTOPp->_sequent__TOP__10(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x40U | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->axiclk) & (~ (IData)(vlTOPp->__Vclklast__TOP__axiclk)))) {
        vlTOPp->_sequent__TOP__11(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x80U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__12(vlSymsp);
    vlTOPp->__Vm_traceActivity = (0x100U | vlTOPp->__Vm_traceActivity);
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__13(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x200U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__Apb3Axi__DOT__axictrl__DOT___zz_2) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Apb3Axi__DOT__axictrl__DOT___zz_2))) 
         | ((IData)(vlTOPp->axiclk) & (~ (IData)(vlTOPp->__Vclklast__TOP__axiclk))))) {
        vlTOPp->_sequent__TOP__14(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x400U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__Apb3Axi__DOT__axictrl__DOT___zz_1) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Apb3Axi__DOT__axictrl__DOT___zz_1))) 
         | ((IData)(vlTOPp->axiclk) & (~ (IData)(vlTOPp->__Vclklast__TOP__axiclk))))) {
        vlTOPp->_sequent__TOP__15(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x800U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__16(vlSymsp);
    // Final
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
    vlTOPp->__VinpClk__TOP__Apb3Axi__DOT__axictrl__DOT___zz_1 
        = vlTOPp->Apb3Axi__DOT__axictrl__DOT___zz_1;
    vlTOPp->__VinpClk__TOP__Apb3Axi__DOT__axictrl__DOT___zz_2 
        = vlTOPp->Apb3Axi__DOT__axictrl__DOT___zz_2;
    vlTOPp->__VinpClk__TOP__Apb3Axi__DOT__axictrl__DOT__bufferCC_7__DOT__buffers_1 
        = vlTOPp->Apb3Axi__DOT__axictrl__DOT__bufferCC_7__DOT__buffers_1;
    vlTOPp->__VinpClk__TOP__Apb3Axi__DOT__axictrl__DOT__bufferCC_8__DOT__buffers_1 
        = vlTOPp->Apb3Axi__DOT__axictrl__DOT__bufferCC_8__DOT__buffers_1;
}

VL_INLINE_OPT QData VApb3Axi::_change_request(VApb3Axi__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VApb3Axi::_change_request\n"); );
    VApb3Axi* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VApb3Axi::_change_request_1(VApb3Axi__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VApb3Axi::_change_request_1\n"); );
    VApb3Axi* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlTOPp->Apb3Axi__DOT__axictrl__DOT___zz_1 ^ vlTOPp->__Vchglast__TOP__Apb3Axi__DOT__axictrl__DOT___zz_1)
         | (vlTOPp->Apb3Axi__DOT__axictrl__DOT___zz_2 ^ vlTOPp->__Vchglast__TOP__Apb3Axi__DOT__axictrl__DOT___zz_2)
         | (vlTOPp->Apb3Axi__DOT__axictrl__DOT__bufferCC_7__DOT__buffers_1 ^ vlTOPp->__Vchglast__TOP__Apb3Axi__DOT__axictrl__DOT__bufferCC_7__DOT__buffers_1)
         | (vlTOPp->Apb3Axi__DOT__axictrl__DOT__bufferCC_8__DOT__buffers_1 ^ vlTOPp->__Vchglast__TOP__Apb3Axi__DOT__axictrl__DOT__bufferCC_8__DOT__buffers_1));
    VL_DEBUG_IF( if(__req && ((vlTOPp->Apb3Axi__DOT__axictrl__DOT___zz_1 ^ vlTOPp->__Vchglast__TOP__Apb3Axi__DOT__axictrl__DOT___zz_1))) VL_DBG_MSGF("        CHANGE: D:/CODE_LIB/TEST/SPINAL_TEST/tmp/job_1/Apb3Axi.v:192: Apb3Axi.axictrl._zz_1\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->Apb3Axi__DOT__axictrl__DOT___zz_2 ^ vlTOPp->__Vchglast__TOP__Apb3Axi__DOT__axictrl__DOT___zz_2))) VL_DBG_MSGF("        CHANGE: D:/CODE_LIB/TEST/SPINAL_TEST/tmp/job_1/Apb3Axi.v:194: Apb3Axi.axictrl._zz_2\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->Apb3Axi__DOT__axictrl__DOT__bufferCC_7__DOT__buffers_1 ^ vlTOPp->__Vchglast__TOP__Apb3Axi__DOT__axictrl__DOT__bufferCC_7__DOT__buffers_1))) VL_DBG_MSGF("        CHANGE: D:/CODE_LIB/TEST/SPINAL_TEST/tmp/job_1/Apb3Axi.v:743: Apb3Axi.axictrl.bufferCC_7.buffers_1\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->Apb3Axi__DOT__axictrl__DOT__bufferCC_8__DOT__buffers_1 ^ vlTOPp->__Vchglast__TOP__Apb3Axi__DOT__axictrl__DOT__bufferCC_8__DOT__buffers_1))) VL_DBG_MSGF("        CHANGE: D:/CODE_LIB/TEST/SPINAL_TEST/tmp/job_1/Apb3Axi.v:743: Apb3Axi.axictrl.bufferCC_8.buffers_1\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__Apb3Axi__DOT__axictrl__DOT___zz_1 
        = vlTOPp->Apb3Axi__DOT__axictrl__DOT___zz_1;
    vlTOPp->__Vchglast__TOP__Apb3Axi__DOT__axictrl__DOT___zz_2 
        = vlTOPp->Apb3Axi__DOT__axictrl__DOT___zz_2;
    vlTOPp->__Vchglast__TOP__Apb3Axi__DOT__axictrl__DOT__bufferCC_7__DOT__buffers_1 
        = vlTOPp->Apb3Axi__DOT__axictrl__DOT__bufferCC_7__DOT__buffers_1;
    vlTOPp->__Vchglast__TOP__Apb3Axi__DOT__axictrl__DOT__bufferCC_8__DOT__buffers_1 
        = vlTOPp->Apb3Axi__DOT__axictrl__DOT__bufferCC_8__DOT__buffers_1;
    return __req;
}

#ifdef VL_DEBUG
void VApb3Axi::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VApb3Axi::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((apb_PADDR & 0xfff00000U))) {
        Verilated::overWidthError("apb_PADDR");}
    if (VL_UNLIKELY((apb_PSEL & 0xfeU))) {
        Verilated::overWidthError("apb_PSEL");}
    if (VL_UNLIKELY((apb_PENABLE & 0xfeU))) {
        Verilated::overWidthError("apb_PENABLE");}
    if (VL_UNLIKELY((apb_PWRITE & 0xfeU))) {
        Verilated::overWidthError("apb_PWRITE");}
    if (VL_UNLIKELY((axiclk & 0xfeU))) {
        Verilated::overWidthError("axiclk");}
    if (VL_UNLIKELY((axiwready & 0xfeU))) {
        Verilated::overWidthError("axiwready");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
