// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VEmif_Ctrl_test.h for the primary calling header

#include "VEmif_Ctrl_test.h"
#include "VEmif_Ctrl_test__Syms.h"

//==========

void VEmif_Ctrl_test::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VEmif_Ctrl_test::eval\n"); );
    VEmif_Ctrl_test__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VEmif_Ctrl_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("D:/SCALA/EMIF_Test/tmp/job_1/Emif_Ctrl_test.v", 29, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VEmif_Ctrl_test::_eval_initial_loop(VEmif_Ctrl_test__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("D:/SCALA/EMIF_Test/tmp/job_1/Emif_Ctrl_test.v", 29, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VEmif_Ctrl_test::_combo__TOP__1(VEmif_Ctrl_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEmif_Ctrl_test::_combo__TOP__1\n"); );
    VEmif_Ctrl_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->top_emif_emif_data_writeEnable = (1U & 
                                              (~ (IData)(vlTOPp->top_emif_emif_oe)));
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_emif_interface_apb_PWRITE 
        = ((~ (IData)(vlTOPp->top_emif_emif_we)) & (IData)(vlTOPp->top_emif_emif_oe));
}

VL_INLINE_OPT void VEmif_Ctrl_test::_sequent__TOP__4(VEmif_Ctrl_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEmif_Ctrl_test::_sequent__TOP__4\n"); );
    VEmif_Ctrl_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__tickCounter_value 
        = vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__tickCounter_value;
    vlTOPp->__Vdly__Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__bitCounter_value 
        = vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__bitCounter_value;
    vlTOPp->__Vdlyvset__Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ram__v0 = 0U;
    vlTOPp->__Vdlyvset__Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_ram__v0 = 0U;
    vlTOPp->Emif_Ctrl_test__DOT__area_tt = (1U & (~ (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_tt)));
    if ((1U & (~ (IData)(vlTOPp->top_emif_emif_oe)))) {
        vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_emif_interface__DOT__apb_PRDATA_regNextWhen 
            = vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__apb3Router_1__DOT___zz_io_input_PRDATA;
    }
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT___zz_logic_ram_port0 
        = vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ram
        [vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popPtr_valueNext];
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_gpioACtrl__DOT__io_gpio_read_buffercc__DOT__buffers_1 
        = vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_gpioACtrl__DOT__io_gpio_read_buffercc__DOT__buffers_0;
    if ((4U == (0xfU & vlTOPp->top_emif_emif_addr))) {
        if (vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_gpioACtrl__DOT__ctrl_doWrite) {
            vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_gpioACtrl__DOT__io_gpio_write_driver 
                = (0xffffU & vlTOPp->top_emif_emif_data_read);
        }
    }
}

VL_INLINE_OPT void VEmif_Ctrl_test::_sequent__TOP__5(VEmif_Ctrl_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEmif_Ctrl_test::_sequent__TOP__5\n"); );
    VEmif_Ctrl_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*3:0*/ __Vdlyvdim0__Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ram__v0;
    CData/*7:0*/ __Vdlyvval__Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ram__v0;
    CData/*3:0*/ __Vdlyvdim0__Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_ram__v0;
    CData/*7:0*/ __Vdlyvval__Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_ram__v0;
    // Body
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT___zz_logic_ram_port0 
        = vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_ram
        [vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_popPtr_valueNext];
    if (vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__clockDivider_counter_willOverflow) {
        vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__stateMachine_parity 
            = ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__stateMachine_parity) 
               ^ (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__stateMachine_txd));
    }
    if ((1U & (~ ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__stateMachine_state) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__stateMachine_state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__stateMachine_state))) {
                if (vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__clockDivider_counter_willOverflow) {
                    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__stateMachine_parity = 0U;
                }
            }
        }
    }
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__apb3Router_1__DOT__selIndex 
        = (1U & ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__apb_decoder_io_output_PSEL) 
                 >> 1U));
    if (vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__sampler_tick) {
        vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__bitTimer_counter 
            = (7U & ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__bitTimer_counter) 
                     - (IData)(1U)));
        if (vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__when_UartCtrlRx_l43) {
            vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__bitTimer_counter = 4U;
        }
    }
    if ((1U & (~ ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_state) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_state)))) {
                if (vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__when_UartCtrlRx_l93) {
                    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__bitTimer_counter = 1U;
                }
            }
        }
    }
    if (vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__clockDivider_counter_willOverflow) {
        vlTOPp->__Vdly__Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__tickCounter_value 
            = (7U & ((IData)(1U) + (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__tickCounter_value)));
    }
    if ((1U & (~ ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__stateMachine_state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__stateMachine_state))) {
            if ((1U & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__stateMachine_state))) {
                if (vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__clockDivider_counter_willOverflow) {
                    vlTOPp->__Vdly__Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__tickCounter_value = 0U;
                }
            } else {
                if (vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__clockDivider_counter_willOverflow) {
                    if (vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__when_UartCtrlTx_l73) {
                        vlTOPp->__Vdly__Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__tickCounter_value = 0U;
                    }
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__stateMachine_state))) {
                if (vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__clockDivider_counter_willOverflow) {
                    vlTOPp->__Vdly__Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__tickCounter_value = 0U;
                }
            }
        }
    }
    if (vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__bitTimer_tick) {
        vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_parity 
            = ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_parity) 
               ^ (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__sampler_value));
    }
    if ((1U & (~ ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_state) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_state))) {
                if (vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__bitTimer_tick) {
                    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_parity = 0U;
                }
            }
        }
    }
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_emif_interface__DOT__penable_regNext 
        = vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_emif_interface__DOT__penable;
    if (vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT___zz_1) {
        __Vdlyvval__Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ram__v0 
            = (0xffU & vlTOPp->top_emif_emif_data_read);
        vlTOPp->__Vdlyvset__Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ram__v0 = 1U;
        __Vdlyvdim0__Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ram__v0 
            = vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushPtr_value;
    }
    if (vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT___zz_1) {
        __Vdlyvval__Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_ram__v0 
            = vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_shifter;
        vlTOPp->__Vdlyvset__Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_ram__v0 = 1U;
        __Vdlyvdim0__Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_ram__v0 
            = vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_pushPtr_value;
    }
    if (vlTOPp->__Vdlyvset__Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ram__v0) {
        vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ram[__Vdlyvdim0__Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ram__v0] 
            = __Vdlyvval__Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ram__v0;
    }
    if (vlTOPp->__Vdlyvset__Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_ram__v0) {
        vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_ram[__Vdlyvdim0__Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_ram__v0] 
            = __Vdlyvval__Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_ram__v0;
    }
    vlTOPp->top_emif_emif_data_write = vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_emif_interface__DOT__apb_PRDATA_regNextWhen;
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_gpioACtrl__DOT__io_gpio_read_buffercc__DOT__buffers_0 
        = vlTOPp->top_gpioA_read;
    vlTOPp->top_gpioA_write = vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_gpioACtrl__DOT__io_gpio_write_driver;
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__when_UartCtrlRx_l43 
        = (0U == (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__bitTimer_counter));
    if (vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__bitTimer_tick) {
        vlTOPp->__Vdly__Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__bitCounter_value 
            = (7U & ((IData)(1U) + (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__bitCounter_value)));
    }
    if ((1U & (~ ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_state))) {
            if ((1U & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_state))) {
                if (vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__bitTimer_tick) {
                    vlTOPp->__Vdly__Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__bitCounter_value = 0U;
                }
            } else {
                if (vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__bitTimer_tick) {
                    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_shifter 
                        = (((~ ((IData)(1U) << (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__bitCounter_value))) 
                            & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_shifter)) 
                           | ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__sampler_value) 
                              << (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__bitCounter_value)));
                    if (vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__when_UartCtrlRx_l111) {
                        vlTOPp->__Vdly__Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__bitCounter_value = 0U;
                    }
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_state))) {
                if (vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__bitTimer_tick) {
                    vlTOPp->__Vdly__Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__bitCounter_value = 0U;
                }
            }
        }
    }
}

VL_INLINE_OPT void VEmif_Ctrl_test::_sequent__TOP__7(VEmif_Ctrl_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEmif_Ctrl_test::_sequent__TOP__7\n"); );
    VEmif_Ctrl_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*2:0*/ __Vdly__Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__stateMachine_state;
    // Body
    __Vdly__Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__stateMachine_state 
        = vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__stateMachine_state;
    vlTOPp->__Vdly__Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__clockDivider_counter 
        = vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__clockDivider_counter;
    vlTOPp->__Vdly__Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__sampler_samples_2 
        = vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__sampler_samples_2;
    vlTOPp->__Vdly__Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_state 
        = vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_state;
    vlTOPp->__Vdly__Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__break_counter 
        = vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__break_counter;
    if (vlTOPp->reset) {
        vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_gpioACtrl__DOT__io_gpio_writeEnable_driver = 0U;
    } else {
        if ((8U == (0xfU & vlTOPp->top_emif_emif_addr))) {
            if (vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_gpioACtrl__DOT__ctrl_doWrite) {
                vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_gpioACtrl__DOT__io_gpio_writeEnable_driver 
                    = (0xffffU & vlTOPp->top_emif_emif_data_read);
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_misc_readError = 0U;
    } else {
        if (vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__when_BusSlaveFactory_l335) {
            if ((1U & vlTOPp->top_emif_emif_data_read)) {
                vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_misc_readError = 0U;
            }
        }
        if (vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx_io_error) {
            vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_misc_readError = 1U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_interruptCtrl_writeIntEnable = 0U;
    } else {
        if ((4U == (0x1fU & vlTOPp->top_emif_emif_addr))) {
            if (vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__busCtrl_doWrite) {
                vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_interruptCtrl_writeIntEnable 
                    = (1U & vlTOPp->top_emif_emif_data_read);
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_interruptCtrl_readIntEnable = 0U;
    } else {
        if ((4U == (0x1fU & vlTOPp->top_emif_emif_addr))) {
            if (vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__busCtrl_doWrite) {
                vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_interruptCtrl_readIntEnable 
                    = (1U & (vlTOPp->top_emif_emif_data_read 
                             >> 1U));
            }
        }
    }
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__sampler_tick 
        = ((~ (IData)(vlTOPp->reset)) & (0U == vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__clockDivider_counter));
    if (vlTOPp->reset) {
        vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_misc_breakDetected = 0U;
    } else {
        if (((0x41U == (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__break_counter)) 
             & (~ (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_readBreak_regNext)))) {
            vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_misc_breakDetected = 1U;
        }
        if (vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__when_BusSlaveFactory_l335_2) {
            if ((0x200U & vlTOPp->top_emif_emif_data_read)) {
                vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_misc_breakDetected = 0U;
            }
        }
    }
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__clockDivider_counter_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__clockDivider_counter_valueNext));
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT___zz_io_rts 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_full));
    if (vlTOPp->reset) {
        __Vdly__Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__stateMachine_state = 0U;
    } else {
        if ((4U & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__stateMachine_state))) {
            if (vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__clockDivider_counter_willOverflow) {
                if ((0U == (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__tickCounter_value))) {
                    __Vdly__Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__stateMachine_state 
                        = ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__io_write_thrown_valid)
                            ? 1U : 0U);
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__stateMachine_state))) {
                if ((1U & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__stateMachine_state))) {
                    if (vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__clockDivider_counter_willOverflow) {
                        __Vdly__Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__stateMachine_state = 4U;
                    }
                } else {
                    if (vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__clockDivider_counter_willOverflow) {
                        if ((7U == (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__tickCounter_value))) {
                            __Vdly__Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__stateMachine_state = 4U;
                        }
                    }
                }
            } else {
                if ((1U & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__stateMachine_state))) {
                    if (vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__clockDivider_counter_willOverflow) {
                        __Vdly__Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__stateMachine_state = 2U;
                    }
                } else {
                    if (((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__io_write_thrown_valid) 
                         & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__clockDivider_counter_willOverflow))) {
                        __Vdly__Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__stateMachine_state = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_emif_interface__DOT__penable 
        = (1U & ((~ (IData)(vlTOPp->reset)) & ((~ (IData)(vlTOPp->top_emif_emif_oe)) 
                                               | (~ (IData)(vlTOPp->top_emif_emif_we)))));
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__clockDivider_counter = 0U;
    } else {
        vlTOPp->__Vdly__Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__clockDivider_counter 
            = (0xfffffU & (vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__clockDivider_counter 
                           - (IData)(1U)));
        if (vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__clockDivider_tick) {
            vlTOPp->__Vdly__Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__clockDivider_counter = 5U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_risingOccupancy = 0U;
    } else {
        if (((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushing) 
             != (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popping))) {
            vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_risingOccupancy 
                = vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushing;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_misc_readOverflowError = 0U;
    } else {
        if (vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__when_BusSlaveFactory_l335_1) {
            if ((2U & vlTOPp->top_emif_emif_data_read)) {
                vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_misc_readOverflowError = 0U;
            }
        }
        if (((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_validReg) 
             & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_full))) {
            vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_misc_readOverflowError = 1U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__break_counter = 0U;
    } else {
        if (vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__sampler_value) {
            vlTOPp->__Vdly__Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__break_counter = 0U;
        } else {
            if (vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__when_UartCtrlRx_l69) {
                vlTOPp->__Vdly__Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__break_counter 
                    = (0x7fU & ((IData)(1U) + (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__break_counter)));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_risingOccupancy = 0U;
    } else {
        if (((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_pushing) 
             != (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_popping))) {
            vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_risingOccupancy 
                = vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_pushing;
        }
    }
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popPtr_valueNext));
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT___zz_io_pop_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popPtr_valueNext) 
                                         == (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushPtr_value)));
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_popPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_popPtr_valueNext));
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT___zz_io_pop_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_popPtr_valueNext) 
                                         == (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_pushPtr_value)));
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__stateMachine_state 
        = __Vdly__Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__stateMachine_state;
    vlTOPp->top_gpioA_writeEnable = vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_gpioACtrl__DOT__io_gpio_writeEnable_driver;
    vlTOPp->__Vtableidx1 = vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__stateMachine_state;
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__stateMachine_state_string 
        = vlTOPp->__Vtable1_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__stateMachine_state_string
        [vlTOPp->__Vtableidx1];
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_emif_interface_apb_PENABLE 
        = (((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_emif_interface__DOT__penable) 
            & (~ (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_emif_interface__DOT__penable_regNext))) 
           & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_emif_interface__DOT__penable));
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_state = 0U;
        vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_validReg = 0U;
    } else {
        vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_validReg = 0U;
        if ((4U & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_state))) {
            if (vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__bitTimer_tick) {
                if (vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__sampler_value) {
                    if ((0U == (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__bitCounter_value))) {
                        vlTOPp->__Vdly__Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_state = 0U;
                    }
                } else {
                    vlTOPp->__Vdly__Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_state = 0U;
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_state))) {
                if ((1U & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_state))) {
                    if (vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__bitTimer_tick) {
                        if (vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__when_UartCtrlRx_l125) {
                            vlTOPp->__Vdly__Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_state = 4U;
                            vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_validReg = 1U;
                        } else {
                            vlTOPp->__Vdly__Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_state = 0U;
                        }
                    }
                } else {
                    if (vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__bitTimer_tick) {
                        if ((7U == (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__bitCounter_value))) {
                            vlTOPp->__Vdly__Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_state = 4U;
                            vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_validReg = 1U;
                        }
                    }
                }
            } else {
                if ((1U & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_state))) {
                    if (vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__bitTimer_tick) {
                        vlTOPp->__Vdly__Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_state = 2U;
                        if (vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__sampler_value) {
                            vlTOPp->__Vdly__Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_state = 0U;
                        }
                    }
                } else {
                    if (vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__when_UartCtrlRx_l93) {
                        vlTOPp->__Vdly__Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_state = 1U;
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void VEmif_Ctrl_test::_sequent__TOP__8(VEmif_Ctrl_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEmif_Ctrl_test::_sequent__TOP__8\n"); );
    VEmif_Ctrl_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushPtr_valueNext));
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_pushPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_pushPtr_valueNext));
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_state 
        = vlTOPp->__Vdly__Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_state;
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__bitTimer_tick = 0U;
    if (vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__sampler_tick) {
        if ((0U == (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__bitTimer_counter))) {
            vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__bitTimer_tick = 1U;
        }
    }
    vlTOPp->__Vtableidx3 = vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_state;
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_state_string 
        = vlTOPp->__Vtable3_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_state_string
        [vlTOPp->__Vtableidx3];
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__sampler_samples_2 = 1U;
        vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__sampler_value = 1U;
    } else {
        vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__sampler_value 
            = (((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_1) 
                & ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__sampler_samples_1) 
                   | (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__sampler_samples_2))) 
               | ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__sampler_samples_1) 
                  & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__sampler_samples_2)));
        if ((0U == vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__clockDivider_counter)) {
            vlTOPp->__Vdly__Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__sampler_samples_2 
                = vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__sampler_samples_1;
        }
    }
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popPtr_value));
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_popPtr_value));
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__sampler_samples_2 
        = vlTOPp->__Vdly__Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__sampler_samples_2;
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_full 
        = ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_risingOccupancy));
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_full 
        = ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_risingOccupancy));
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__when_UartCtrlRx_l125 
        = ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_parity) 
           == (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__sampler_value));
    if (vlTOPp->reset) {
        vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__sampler_samples_1 = 1U;
    } else {
        if ((0U == vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__clockDivider_counter)) {
            vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__sampler_samples_1 
                = vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_1;
        }
    }
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_full))))));
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_pushing 
        = ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_validReg) 
           & (~ (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_full)));
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_full))))));
    vlTOPp->__Vtableidx4 = (((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__when_UartCtrlRx_l125) 
                             << 5U) | ((0x10U & ((~ (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__sampler_value)) 
                                                 << 4U)) 
                                       | (((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__bitTimer_tick) 
                                           << 3U) | (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_state))));
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx_io_error 
        = vlTOPp->__Vtable4_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx_io_error
        [vlTOPp->__Vtableidx4];
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__clockDivider_counter 
        = vlTOPp->__Vdly__Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__clockDivider_counter;
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_interruptCtrl_writeInt 
        = ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_interruptCtrl_writeIntEnable) 
           & (~ (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy_io_pop_valid)));
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT___zz_1 = 0U;
    if (vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_pushing) {
        vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT___zz_1 = 1U;
    }
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_pushing) {
        vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_0));
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__clockDivider_tick 
        = (0U == vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__clockDivider_counter);
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__clockDivider_counter_willIncrement = 0U;
    if ((0U == vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__clockDivider_counter)) {
        vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__clockDivider_counter_willIncrement = 1U;
    }
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_pushPtr_valueNext 
        = (0xfU & ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_pushPtr_value) 
                   + (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__clockDivider_counter_willOverflow 
        = ((4U == (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__clockDivider_counter_value)) 
           & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__clockDivider_counter_willIncrement));
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_0 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT___zz_io_txd));
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__clockDivider_counter_valueNext 
        = ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__clockDivider_counter_willOverflow)
            ? 0U : (7U & ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__clockDivider_counter_value) 
                          + (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__clockDivider_counter_willIncrement))));
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT___zz_io_txd 
        = ((IData)(vlTOPp->reset) | ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__stateMachine_txd) 
                                     & (~ (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_misc_doBreak))));
    if (vlTOPp->reset) {
        vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_misc_doBreak = 0U;
    } else {
        if (vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__when_BusSlaveFactory_l366) {
            if ((0x400U & vlTOPp->top_emif_emif_data_read)) {
                vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_misc_doBreak = 1U;
            }
        }
        if (vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__when_BusSlaveFactory_l335_3) {
            if ((0x800U & vlTOPp->top_emif_emif_data_read)) {
                vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_misc_doBreak = 0U;
            }
        }
    }
}

VL_INLINE_OPT void VEmif_Ctrl_test::_combo__TOP__9(VEmif_Ctrl_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEmif_Ctrl_test::_combo__TOP__9\n"); );
    VEmif_Ctrl_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__apb_decoder_io_output_PSEL 
        = ((2U & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__apb_decoder_io_output_PSEL)) 
           | ((0U == (0xfffff000U & vlTOPp->top_emif_emif_addr)) 
              & (~ (IData)(vlTOPp->top_emif_emif_cs))));
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__apb_decoder_io_output_PSEL 
        = ((1U & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__apb_decoder_io_output_PSEL)) 
           | (((0x10000U == (0xfffff000U & vlTOPp->top_emif_emif_addr)) 
               & (~ (IData)(vlTOPp->top_emif_emif_cs))) 
              << 1U));
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_gpioACtrl_io_apb_PRDATA = 0U;
    if ((0U == (0xfU & vlTOPp->top_emif_emif_addr))) {
        vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_gpioACtrl_io_apb_PRDATA 
            = ((0xffff0000U & vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_gpioACtrl_io_apb_PRDATA) 
               | (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_gpioACtrl__DOT__io_gpio_read_buffercc__DOT__buffers_1));
    } else {
        if ((4U == (0xfU & vlTOPp->top_emif_emif_addr))) {
            vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_gpioACtrl_io_apb_PRDATA 
                = ((0xffff0000U & vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_gpioACtrl_io_apb_PRDATA) 
                   | (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_gpioACtrl__DOT__io_gpio_write_driver));
        } else {
            if ((8U == (0xfU & vlTOPp->top_emif_emif_addr))) {
                vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_gpioACtrl_io_apb_PRDATA 
                    = ((0xffff0000U & vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_gpioACtrl_io_apb_PRDATA) 
                       | (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_gpioACtrl__DOT__io_gpio_writeEnable_driver));
            }
        }
    }
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__apb_decoder__DOT__when_Apb3Decoder_l84 
        = ((~ (IData)(vlTOPp->top_emif_emif_cs)) & 
           (0U == (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__apb_decoder_io_output_PSEL)));
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_gpioACtrl__DOT__ctrl_doWrite 
        = (((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__apb_decoder_io_output_PSEL) 
            & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_emif_interface_apb_PENABLE)) 
           & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_emif_interface_apb_PWRITE));
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_read_streamBreaked_ready = 0U;
    if ((0U == (0x1fU & vlTOPp->top_emif_emif_addr))) {
        if (((((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__apb_decoder_io_output_PSEL) 
               >> 1U) & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_emif_interface_apb_PENABLE)) 
             & (~ (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_emif_interface_apb_PWRITE)))) {
            vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_read_streamBreaked_ready = 1U;
        }
    }
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__busCtrl_doWrite 
        = ((((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__apb_decoder_io_output_PSEL) 
             >> 1U) & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_emif_interface_apb_PENABLE)) 
           & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_emif_interface_apb_PWRITE));
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__apb_decoder_io_input_PREADY = 1U;
    if (vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__apb_decoder__DOT__when_Apb3Decoder_l84) {
        vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__apb_decoder_io_input_PREADY = 1U;
    }
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__apb_decoder_io_input_PSLVERROR = 0U;
    if (vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__apb_decoder__DOT__when_Apb3Decoder_l84) {
        vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__apb_decoder_io_input_PSLVERROR = 1U;
    }
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__when_BusSlaveFactory_l335 = 0U;
    if ((0x10U == (0x1fU & vlTOPp->top_emif_emif_addr))) {
        if (vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__busCtrl_doWrite) {
            vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__when_BusSlaveFactory_l335 = 1U;
        }
    }
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__when_BusSlaveFactory_l335_1 = 0U;
    if ((0x10U == (0x1fU & vlTOPp->top_emif_emif_addr))) {
        if (vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__busCtrl_doWrite) {
            vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__when_BusSlaveFactory_l335_1 = 1U;
        }
    }
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__when_BusSlaveFactory_l335_2 = 0U;
    if ((0x10U == (0x1fU & vlTOPp->top_emif_emif_addr))) {
        if (vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__busCtrl_doWrite) {
            vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__when_BusSlaveFactory_l335_2 = 1U;
        }
    }
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT___zz_bridge_write_streamUnbuffered_valid = 0U;
    if ((0U == (0x1fU & vlTOPp->top_emif_emif_addr))) {
        if (vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__busCtrl_doWrite) {
            vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT___zz_bridge_write_streamUnbuffered_valid = 1U;
        }
    }
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__when_BusSlaveFactory_l366 = 0U;
    if ((0x10U == (0x1fU & vlTOPp->top_emif_emif_addr))) {
        if (vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__busCtrl_doWrite) {
            vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__when_BusSlaveFactory_l366 = 1U;
        }
    }
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__when_BusSlaveFactory_l335_3 = 0U;
    if ((0x10U == (0x1fU & vlTOPp->top_emif_emif_addr))) {
        if (vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__busCtrl_doWrite) {
            vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__when_BusSlaveFactory_l335_3 = 1U;
        }
    }
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushing 
        = ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT___zz_bridge_write_streamUnbuffered_valid) 
           & (~ (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_full)));
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT___zz_1 = 0U;
    if (vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushing) {
        vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT___zz_1 = 1U;
    }
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushing) {
        vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushPtr_valueNext 
        = (0xfU & ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushPtr_value) 
                   + (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushPtr_willIncrement)));
}

VL_INLINE_OPT void VEmif_Ctrl_test::_sequent__TOP__10(VEmif_Ctrl_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEmif_Ctrl_test::_sequent__TOP__10\n"); );
    VEmif_Ctrl_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__tickCounter_value 
        = vlTOPp->__Vdly__Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__tickCounter_value;
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__bitCounter_value 
        = vlTOPp->__Vdly__Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__bitCounter_value;
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_readBreak_regNext 
        = (0x41U == (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__break_counter));
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__when_UartCtrlTx_l73 
        = (7U == (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__tickCounter_value));
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__when_UartCtrlRx_l111 
        = (7U == (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__bitCounter_value));
}

VL_INLINE_OPT void VEmif_Ctrl_test::_sequent__TOP__11(VEmif_Ctrl_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEmif_Ctrl_test::_sequent__TOP__11\n"); );
    VEmif_Ctrl_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__stateMachine_txd = 1U;
    if ((1U & (~ ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__stateMachine_state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__stateMachine_state))) {
            vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__stateMachine_txd 
                = (1U & ((1U & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__stateMachine_state))
                          ? (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__stateMachine_parity)
                          : ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT___zz_logic_ram_port0) 
                             >> (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__tickCounter_value))));
        } else {
            if ((1U & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__stateMachine_state))) {
                vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__stateMachine_txd = 0U;
            }
        }
    }
    vlTOPp->__Vtableidx2 = (((7U == (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__tickCounter_value)) 
                             << 5U) | (((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__clockDivider_counter_willOverflow) 
                                        << 4U) | (((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__stateMachine_state) 
                                                   << 1U) 
                                                  | (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_misc_doBreak))));
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx_io_write_ready 
        = vlTOPp->__Vtable2_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx_io_write_ready
        [vlTOPp->__Vtableidx2];
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__break_counter 
        = vlTOPp->__Vdly__Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__break_counter;
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__when_UartCtrlRx_l93 
        = (((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__sampler_tick) 
            & (~ (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__sampler_value))) 
           & (0x41U != (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__break_counter)));
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__io_write_thrown_valid 
        = vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy_io_pop_valid;
    if ((0x41U == (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__break_counter))) {
        vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__io_write_thrown_valid = 0U;
    }
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_read_streamBreaked_valid 
        = vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy_io_pop_valid;
    if ((0x41U == (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__break_counter))) {
        vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_read_streamBreaked_valid = 0U;
    }
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__when_UartCtrlRx_l69 
        = ((0U == vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__clockDivider_counter) 
           & (0x41U != (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__break_counter)));
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_write_ready 
        = vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx_io_write_ready;
    if ((0x41U == (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__break_counter))) {
        vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_write_ready = 1U;
    }
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_interruptCtrl_readInt 
        = ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_interruptCtrl_readIntEnable) 
           & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_read_streamBreaked_valid));
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popping 
        = ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy_io_pop_valid) 
           & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_write_ready));
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popping) {
        vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popPtr_valueNext 
        = (0xfU & ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popPtr_value) 
                   + (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popPtr_willIncrement)));
}

VL_INLINE_OPT void VEmif_Ctrl_test::_combo__TOP__12(VEmif_Ctrl_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEmif_Ctrl_test::_combo__TOP__12\n"); );
    VEmif_Ctrl_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy_io_pop_ready 
        = vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_read_streamBreaked_ready;
    if ((0x41U == (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__break_counter))) {
        vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy_io_pop_ready = 1U;
    }
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl_io_apb_PRDATA = 0U;
    if ((0U == (0x1fU & vlTOPp->top_emif_emif_addr))) {
        vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl_io_apb_PRDATA 
            = ((0xfffeffffU & vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl_io_apb_PRDATA) 
               | ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_read_streamBreaked_valid) 
                  << 0x10U));
        vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl_io_apb_PRDATA 
            = ((0xffffff00U & vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl_io_apb_PRDATA) 
               | (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT___zz_logic_ram_port0));
    } else {
        if ((4U == (0x1fU & vlTOPp->top_emif_emif_addr))) {
            vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl_io_apb_PRDATA 
                = ((0xffe0ffffU & vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl_io_apb_PRDATA) 
                   | (0x1f0000U & (((IData)(0x10U) 
                                    - ((((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_risingOccupancy) 
                                         & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ptrMatch)) 
                                        << 4U) | (0xfU 
                                                  & ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushPtr_value) 
                                                     - (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popPtr_value))))) 
                                   << 0x10U)));
            vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl_io_apb_PRDATA 
                = ((0xffff7fffU & vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl_io_apb_PRDATA) 
                   | ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy_io_pop_valid) 
                      << 0xfU));
            vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl_io_apb_PRDATA 
                = ((0xe0ffffffU & vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl_io_apb_PRDATA) 
                   | ((((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_risingOccupancy) 
                        & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_ptrMatch)) 
                       << 0x1cU) | (0xf000000U & (((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_pushPtr_value) 
                                                   - (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_popPtr_value)) 
                                                  << 0x18U))));
            vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl_io_apb_PRDATA 
                = ((0xfffffffeU & vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl_io_apb_PRDATA) 
                   | (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_interruptCtrl_writeIntEnable));
            vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl_io_apb_PRDATA 
                = ((0xfffffffdU & vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl_io_apb_PRDATA) 
                   | ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_interruptCtrl_readIntEnable) 
                      << 1U));
            vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl_io_apb_PRDATA 
                = ((0xfffffeffU & vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl_io_apb_PRDATA) 
                   | ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_interruptCtrl_writeInt) 
                      << 8U));
            vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl_io_apb_PRDATA 
                = ((0xfffffdffU & vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl_io_apb_PRDATA) 
                   | ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_interruptCtrl_readInt) 
                      << 9U));
        } else {
            if ((0x10U == (0x1fU & vlTOPp->top_emif_emif_addr))) {
                vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl_io_apb_PRDATA 
                    = ((0xfffffffeU & vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl_io_apb_PRDATA) 
                       | (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_misc_readError));
                vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl_io_apb_PRDATA 
                    = ((0xfffffffdU & vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl_io_apb_PRDATA) 
                       | ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_misc_readOverflowError) 
                          << 1U));
                vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl_io_apb_PRDATA 
                    = ((0xfffffeffU & vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl_io_apb_PRDATA) 
                       | ((0x41U == (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__break_counter)) 
                          << 8U));
                vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl_io_apb_PRDATA 
                    = ((0xfffffdffU & vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl_io_apb_PRDATA) 
                       | ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_misc_breakDetected) 
                          << 9U));
            }
        }
    }
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_popping 
        = ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy_io_pop_valid) 
           & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy_io_pop_ready));
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__apb3Router_1__DOT___zz_io_input_PRDATA 
        = ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__apb3Router_1__DOT__selIndex)
            ? vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl_io_apb_PRDATA
            : vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_gpioACtrl_io_apb_PRDATA);
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_popping) {
        vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_popPtr_valueNext 
        = (0xfU & ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_popPtr_value) 
                   + (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_popPtr_willIncrement)));
}

void VEmif_Ctrl_test::_eval(VEmif_Ctrl_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEmif_Ctrl_test::_eval\n"); );
    VEmif_Ctrl_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__4(vlSymsp);
        vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__5(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__7(vlSymsp);
        vlTOPp->_sequent__TOP__8(vlSymsp);
    }
    vlTOPp->_combo__TOP__9(vlSymsp);
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__10(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x10U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__11(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x20U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__12(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VEmif_Ctrl_test::_change_request(VEmif_Ctrl_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEmif_Ctrl_test::_change_request\n"); );
    VEmif_Ctrl_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VEmif_Ctrl_test::_change_request_1(VEmif_Ctrl_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEmif_Ctrl_test::_change_request_1\n"); );
    VEmif_Ctrl_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VEmif_Ctrl_test::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEmif_Ctrl_test::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((top_emif_emif_cs & 0xfeU))) {
        Verilated::overWidthError("top_emif_emif_cs");}
    if (VL_UNLIKELY((top_emif_emif_we & 0xfeU))) {
        Verilated::overWidthError("top_emif_emif_we");}
    if (VL_UNLIKELY((top_emif_emif_oe & 0xfeU))) {
        Verilated::overWidthError("top_emif_emif_oe");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
