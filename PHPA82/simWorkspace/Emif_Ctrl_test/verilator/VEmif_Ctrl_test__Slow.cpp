// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VEmif_Ctrl_test.h for the primary calling header

#include "VEmif_Ctrl_test.h"
#include "VEmif_Ctrl_test__Syms.h"

//==========
QData/*47:0*/ VEmif_Ctrl_test::__Vtable1_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__stateMachine_state_string[8];
CData/*0:0*/ VEmif_Ctrl_test::__Vtable2_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx_io_write_ready[64];
QData/*47:0*/ VEmif_Ctrl_test::__Vtable3_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_state_string[8];
CData/*0:0*/ VEmif_Ctrl_test::__Vtable4_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx_io_error[64];

VL_CTOR_IMP(VEmif_Ctrl_test) {
    VEmif_Ctrl_test__Syms* __restrict vlSymsp = __VlSymsp = new VEmif_Ctrl_test__Syms(this, name());
    VEmif_Ctrl_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VEmif_Ctrl_test::__Vconfigure(VEmif_Ctrl_test__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VEmif_Ctrl_test::~VEmif_Ctrl_test() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void VEmif_Ctrl_test::_settle__TOP__2(VEmif_Ctrl_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEmif_Ctrl_test::_settle__TOP__2\n"); );
    VEmif_Ctrl_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->top_emif_emif_data_writeEnable = (1U & 
                                              (~ (IData)(vlTOPp->top_emif_emif_oe)));
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_emif_interface_apb_PWRITE 
        = ((~ (IData)(vlTOPp->top_emif_emif_we)) & (IData)(vlTOPp->top_emif_emif_oe));
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__apb_decoder_io_output_PSEL 
        = ((2U & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__apb_decoder_io_output_PSEL)) 
           | ((0U == (0xfffff000U & vlTOPp->top_emif_emif_addr)) 
              & (~ (IData)(vlTOPp->top_emif_emif_cs))));
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__apb_decoder_io_output_PSEL 
        = ((1U & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__apb_decoder_io_output_PSEL)) 
           | (((0x10000U == (0xfffff000U & vlTOPp->top_emif_emif_addr)) 
               & (~ (IData)(vlTOPp->top_emif_emif_cs))) 
              << 1U));
    vlTOPp->top_emif_emif_data_write = vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_emif_interface__DOT__apb_PRDATA_regNextWhen;
    vlTOPp->top_gpioA_write = vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_gpioACtrl__DOT__io_gpio_write_driver;
    vlTOPp->top_gpioA_writeEnable = vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_gpioACtrl__DOT__io_gpio_writeEnable_driver;
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__when_UartCtrlTx_l73 
        = (7U == (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__tickCounter_value));
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__when_UartCtrlRx_l43 
        = (0U == (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__bitTimer_counter));
    vlTOPp->__Vtableidx1 = vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__stateMachine_state;
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__stateMachine_state_string 
        = vlTOPp->__Vtable1_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__stateMachine_state_string
        [vlTOPp->__Vtableidx1];
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
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__when_UartCtrlRx_l111 
        = (7U == (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__bitCounter_value));
    vlTOPp->__Vtableidx3 = vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_state;
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_state_string 
        = vlTOPp->__Vtable3_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_state_string
        [vlTOPp->__Vtableidx3];
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__bitTimer_tick = 0U;
    if (vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__sampler_tick) {
        if ((0U == (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__bitTimer_counter))) {
            vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__bitTimer_tick = 1U;
        }
    }
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_emif_interface_apb_PENABLE 
        = (((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_emif_interface__DOT__penable) 
            & (~ (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_emif_interface__DOT__penable_regNext))) 
           & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_emif_interface__DOT__penable));
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popPtr_value));
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_popPtr_value));
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__when_UartCtrlRx_l93 
        = (((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__sampler_tick) 
            & (~ (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__sampler_value))) 
           & (0x41U != (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__break_counter)));
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__when_UartCtrlRx_l125 
        = ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_parity) 
           == (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__sampler_value));
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__clockDivider_tick 
        = (0U == vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__clockDivider_counter);
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__when_UartCtrlRx_l69 
        = ((0U == vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__clockDivider_counter) 
           & (0x41U != (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__break_counter)));
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__clockDivider_counter_willIncrement = 0U;
    if ((0U == vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__clockDivider_counter)) {
        vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__clockDivider_counter_willIncrement = 1U;
    }
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
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_full 
        = ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_risingOccupancy));
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_full 
        = ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_risingOccupancy));
    vlTOPp->__Vtableidx4 = (((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__when_UartCtrlRx_l125) 
                             << 5U) | ((0x10U & ((~ (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__sampler_value)) 
                                                 << 4U)) 
                                       | (((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__bitTimer_tick) 
                                           << 3U) | (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_state))));
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx_io_error 
        = vlTOPp->__Vtable4_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx_io_error
        [vlTOPp->__Vtableidx4];
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__clockDivider_counter_willOverflow 
        = ((4U == (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__clockDivider_counter_value)) 
           & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__clockDivider_counter_willIncrement));
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__apb_decoder_io_input_PREADY = 1U;
    if (vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__apb_decoder__DOT__when_Apb3Decoder_l84) {
        vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__apb_decoder_io_input_PREADY = 1U;
    }
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__apb_decoder_io_input_PSLVERROR = 0U;
    if (vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__apb_decoder__DOT__when_Apb3Decoder_l84) {
        vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__apb_decoder_io_input_PSLVERROR = 1U;
    }
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy_io_pop_ready 
        = vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_read_streamBreaked_ready;
    if ((0x41U == (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__break_counter))) {
        vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy_io_pop_ready = 1U;
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
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__clockDivider_counter_valueNext 
        = ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__clockDivider_counter_willOverflow)
            ? 0U : (7U & ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__clockDivider_counter_value) 
                          + (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__clockDivider_counter_willIncrement))));
    vlTOPp->__Vtableidx2 = (((7U == (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__tickCounter_value)) 
                             << 5U) | (((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__clockDivider_counter_willOverflow) 
                                        << 4U) | (((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__stateMachine_state) 
                                                   << 1U) 
                                                  | (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_misc_doBreak))));
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx_io_write_ready 
        = vlTOPp->__Vtable2_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx_io_write_ready
        [vlTOPp->__Vtableidx2];
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushing 
        = ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT___zz_bridge_write_streamUnbuffered_valid) 
           & (~ (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_full)));
}

void VEmif_Ctrl_test::_settle__TOP__3(VEmif_Ctrl_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEmif_Ctrl_test::_settle__TOP__3\n"); );
    VEmif_Ctrl_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__io_write_thrown_valid 
        = vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy_io_pop_valid;
    if ((0x41U == (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__break_counter))) {
        vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__io_write_thrown_valid = 0U;
    }
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
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_popping 
        = ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy_io_pop_valid) 
           & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy_io_pop_ready));
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_read_streamBreaked_valid 
        = vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy_io_pop_valid;
    if ((0x41U == (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__break_counter))) {
        vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_read_streamBreaked_valid = 0U;
    }
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_write_ready 
        = vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx_io_write_ready;
    if ((0x41U == (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__break_counter))) {
        vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_write_ready = 1U;
    }
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT___zz_1 = 0U;
    if (vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushing) {
        vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT___zz_1 = 1U;
    }
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushing) {
        vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_pushPtr_valueNext 
        = (0xfU & ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_pushPtr_value) 
                   + (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_popping) {
        vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_interruptCtrl_readInt 
        = ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_interruptCtrl_readIntEnable) 
           & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_read_streamBreaked_valid));
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popping 
        = ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy_io_pop_valid) 
           & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_write_ready));
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushPtr_valueNext 
        = (0xfU & ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushPtr_value) 
                   + (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_popPtr_valueNext 
        = (0xfU & ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_popPtr_value) 
                   + (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_popPtr_willIncrement)));
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
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popping) {
        vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__apb3Router_1__DOT___zz_io_input_PRDATA 
        = ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__apb3Router_1__DOT__selIndex)
            ? vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl_io_apb_PRDATA
            : vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_gpioACtrl_io_apb_PRDATA);
    vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popPtr_valueNext 
        = (0xfU & ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popPtr_value) 
                   + (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popPtr_willIncrement)));
}

void VEmif_Ctrl_test::_eval_initial(VEmif_Ctrl_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEmif_Ctrl_test::_eval_initial\n"); );
    VEmif_Ctrl_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

void VEmif_Ctrl_test::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEmif_Ctrl_test::final\n"); );
    // Variables
    VEmif_Ctrl_test__Syms* __restrict vlSymsp = this->__VlSymsp;
    VEmif_Ctrl_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VEmif_Ctrl_test::_eval_settle(VEmif_Ctrl_test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEmif_Ctrl_test::_eval_settle\n"); );
    VEmif_Ctrl_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
    vlTOPp->_settle__TOP__3(vlSymsp);
}

void VEmif_Ctrl_test::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEmif_Ctrl_test::_ctor_var_reset\n"); );
    // Body
    top_emif_emif_addr = VL_RAND_RESET_I(32);
    top_emif_emif_data_read = VL_RAND_RESET_I(32);
    top_emif_emif_data_write = VL_RAND_RESET_I(32);
    top_emif_emif_data_writeEnable = VL_RAND_RESET_I(1);
    top_emif_emif_cs = VL_RAND_RESET_I(1);
    top_emif_emif_we = VL_RAND_RESET_I(1);
    top_emif_emif_oe = VL_RAND_RESET_I(1);
    top_gpioA_read = VL_RAND_RESET_I(16);
    top_gpioA_write = VL_RAND_RESET_I(16);
    top_gpioA_writeEnable = VL_RAND_RESET_I(16);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    Emif_Ctrl_test__DOT__area_tt = VL_RAND_RESET_I(1);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_emif_interface_apb_PENABLE = VL_RAND_RESET_I(1);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_emif_interface_apb_PWRITE = VL_RAND_RESET_I(1);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_gpioACtrl_io_apb_PRDATA = VL_RAND_RESET_I(32);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl_io_apb_PRDATA = VL_RAND_RESET_I(32);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__apb_decoder_io_input_PREADY = VL_RAND_RESET_I(1);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__apb_decoder_io_input_PSLVERROR = VL_RAND_RESET_I(1);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__apb_decoder_io_output_PSEL = VL_RAND_RESET_I(2);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_emif_interface__DOT__penable = VL_RAND_RESET_I(1);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_emif_interface__DOT__penable_regNext = VL_RAND_RESET_I(1);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_emif_interface__DOT__apb_PRDATA_regNextWhen = VL_RAND_RESET_I(32);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_gpioACtrl__DOT__ctrl_doWrite = VL_RAND_RESET_I(1);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_gpioACtrl__DOT__io_gpio_write_driver = VL_RAND_RESET_I(16);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_gpioACtrl__DOT__io_gpio_writeEnable_driver = VL_RAND_RESET_I(16);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_gpioACtrl__DOT__io_gpio_read_buffercc__DOT__buffers_0 = VL_RAND_RESET_I(16);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_gpioACtrl__DOT__io_gpio_read_buffercc__DOT__buffers_1 = VL_RAND_RESET_I(16);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy_io_pop_ready = VL_RAND_RESET_I(1);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_write_ready = VL_RAND_RESET_I(1);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy_io_pop_valid = VL_RAND_RESET_I(1);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy_io_pop_valid = VL_RAND_RESET_I(1);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__busCtrl_doWrite = VL_RAND_RESET_I(1);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT___zz_bridge_write_streamUnbuffered_valid = VL_RAND_RESET_I(1);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_read_streamBreaked_valid = VL_RAND_RESET_I(1);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_read_streamBreaked_ready = VL_RAND_RESET_I(1);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_interruptCtrl_writeIntEnable = VL_RAND_RESET_I(1);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_interruptCtrl_readIntEnable = VL_RAND_RESET_I(1);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_interruptCtrl_readInt = VL_RAND_RESET_I(1);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_interruptCtrl_writeInt = VL_RAND_RESET_I(1);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_misc_readError = VL_RAND_RESET_I(1);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__when_BusSlaveFactory_l335 = VL_RAND_RESET_I(1);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_misc_readOverflowError = VL_RAND_RESET_I(1);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__when_BusSlaveFactory_l335_1 = VL_RAND_RESET_I(1);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_misc_breakDetected = VL_RAND_RESET_I(1);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_readBreak_regNext = VL_RAND_RESET_I(1);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__when_BusSlaveFactory_l335_2 = VL_RAND_RESET_I(1);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_misc_doBreak = VL_RAND_RESET_I(1);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__when_BusSlaveFactory_l366 = VL_RAND_RESET_I(1);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__when_BusSlaveFactory_l335_3 = VL_RAND_RESET_I(1);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx_io_write_ready = VL_RAND_RESET_I(1);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx_io_error = VL_RAND_RESET_I(1);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__clockDivider_counter = VL_RAND_RESET_I(20);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__clockDivider_tick = VL_RAND_RESET_I(1);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__io_write_thrown_valid = VL_RAND_RESET_I(1);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__clockDivider_counter_willIncrement = VL_RAND_RESET_I(1);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__clockDivider_counter_valueNext = VL_RAND_RESET_I(3);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__clockDivider_counter_value = VL_RAND_RESET_I(3);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__clockDivider_counter_willOverflow = VL_RAND_RESET_I(1);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__tickCounter_value = VL_RAND_RESET_I(3);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__stateMachine_state = VL_RAND_RESET_I(3);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__stateMachine_parity = VL_RAND_RESET_I(1);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__stateMachine_txd = VL_RAND_RESET_I(1);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__when_UartCtrlTx_l73 = VL_RAND_RESET_I(1);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT___zz_io_txd = VL_RAND_RESET_I(1);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__stateMachine_state_string = VL_RAND_RESET_Q(48);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT___zz_io_rts = VL_RAND_RESET_I(1);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__sampler_samples_1 = VL_RAND_RESET_I(1);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__sampler_samples_2 = VL_RAND_RESET_I(1);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__sampler_value = VL_RAND_RESET_I(1);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__sampler_tick = VL_RAND_RESET_I(1);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__bitTimer_counter = VL_RAND_RESET_I(3);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__bitTimer_tick = VL_RAND_RESET_I(1);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__when_UartCtrlRx_l43 = VL_RAND_RESET_I(1);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__bitCounter_value = VL_RAND_RESET_I(3);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__break_counter = VL_RAND_RESET_I(7);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__when_UartCtrlRx_l69 = VL_RAND_RESET_I(1);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_state = VL_RAND_RESET_I(3);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_parity = VL_RAND_RESET_I(1);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_shifter = VL_RAND_RESET_I(8);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_validReg = VL_RAND_RESET_I(1);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__when_UartCtrlRx_l93 = VL_RAND_RESET_I(1);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__when_UartCtrlRx_l111 = VL_RAND_RESET_I(1);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__when_UartCtrlRx_l125 = VL_RAND_RESET_I(1);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_state_string = VL_RAND_RESET_Q(48);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_0 = VL_RAND_RESET_I(1);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_1 = VL_RAND_RESET_I(1);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT___zz_logic_ram_port0 = VL_RAND_RESET_I(8);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT___zz_1 = VL_RAND_RESET_I(1);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(4);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushPtr_value = VL_RAND_RESET_I(4);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(4);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popPtr_value = VL_RAND_RESET_I(4);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushing = VL_RAND_RESET_I(1);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popping = VL_RAND_RESET_I(1);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_full = VL_RAND_RESET_I(1);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<16; ++__Vi0) {
            Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ram[__Vi0] = VL_RAND_RESET_I(8);
    }}
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT___zz_logic_ram_port0 = VL_RAND_RESET_I(8);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT___zz_1 = VL_RAND_RESET_I(1);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(4);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_pushPtr_value = VL_RAND_RESET_I(4);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(4);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_popPtr_value = VL_RAND_RESET_I(4);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_pushing = VL_RAND_RESET_I(1);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_popping = VL_RAND_RESET_I(1);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_full = VL_RAND_RESET_I(1);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<16; ++__Vi0) {
            Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_ram[__Vi0] = VL_RAND_RESET_I(8);
    }}
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__apb_decoder__DOT__when_Apb3Decoder_l84 = VL_RAND_RESET_I(1);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__apb3Router_1__DOT___zz_io_input_PRDATA = VL_RAND_RESET_I(32);
    Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__apb3Router_1__DOT__selIndex = VL_RAND_RESET_I(1);
    __Vtableidx1 = 0;
    __Vtable1_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__stateMachine_state_string[0] = VL_ULL(0x49444c452020);
    __Vtable1_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__stateMachine_state_string[1] = VL_ULL(0x535441525420);
    __Vtable1_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__stateMachine_state_string[2] = VL_ULL(0x444154412020);
    __Vtable1_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__stateMachine_state_string[3] = VL_ULL(0x504152495459);
    __Vtable1_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__stateMachine_state_string[4] = VL_ULL(0x53544f502020);
    __Vtable1_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__stateMachine_state_string[5] = VL_ULL(0x3f3f3f3f3f3f);
    __Vtable1_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__stateMachine_state_string[6] = VL_ULL(0x3f3f3f3f3f3f);
    __Vtable1_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__stateMachine_state_string[7] = VL_ULL(0x3f3f3f3f3f3f);
    __Vtableidx2 = 0;
    __Vtable2_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx_io_write_ready[0] = 0U;
    __Vtable2_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx_io_write_ready[1] = 1U;
    __Vtable2_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx_io_write_ready[2] = 0U;
    __Vtable2_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx_io_write_ready[3] = 1U;
    __Vtable2_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx_io_write_ready[4] = 0U;
    __Vtable2_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx_io_write_ready[5] = 1U;
    __Vtable2_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx_io_write_ready[6] = 0U;
    __Vtable2_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx_io_write_ready[7] = 1U;
    __Vtable2_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx_io_write_ready[8] = 0U;
    __Vtable2_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx_io_write_ready[9] = 1U;
    __Vtable2_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx_io_write_ready[10] = 0U;
    __Vtable2_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx_io_write_ready[11] = 1U;
    __Vtable2_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx_io_write_ready[12] = 0U;
    __Vtable2_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx_io_write_ready[13] = 1U;
    __Vtable2_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx_io_write_ready[14] = 0U;
    __Vtable2_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx_io_write_ready[15] = 1U;
    __Vtable2_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx_io_write_ready[16] = 0U;
    __Vtable2_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx_io_write_ready[17] = 1U;
    __Vtable2_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx_io_write_ready[18] = 0U;
    __Vtable2_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx_io_write_ready[19] = 1U;
    __Vtable2_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx_io_write_ready[20] = 0U;
    __Vtable2_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx_io_write_ready[21] = 1U;
    __Vtable2_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx_io_write_ready[22] = 0U;
    __Vtable2_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx_io_write_ready[23] = 1U;
    __Vtable2_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx_io_write_ready[24] = 0U;
    __Vtable2_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx_io_write_ready[25] = 1U;
    __Vtable2_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx_io_write_ready[26] = 0U;
    __Vtable2_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx_io_write_ready[27] = 1U;
    __Vtable2_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx_io_write_ready[28] = 0U;
    __Vtable2_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx_io_write_ready[29] = 1U;
    __Vtable2_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx_io_write_ready[30] = 0U;
    __Vtable2_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx_io_write_ready[31] = 1U;
    __Vtable2_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx_io_write_ready[32] = 0U;
    __Vtable2_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx_io_write_ready[33] = 1U;
    __Vtable2_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx_io_write_ready[34] = 0U;
    __Vtable2_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx_io_write_ready[35] = 1U;
    __Vtable2_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx_io_write_ready[36] = 0U;
    __Vtable2_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx_io_write_ready[37] = 1U;
    __Vtable2_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx_io_write_ready[38] = 0U;
    __Vtable2_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx_io_write_ready[39] = 1U;
    __Vtable2_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx_io_write_ready[40] = 0U;
    __Vtable2_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx_io_write_ready[41] = 1U;
    __Vtable2_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx_io_write_ready[42] = 0U;
    __Vtable2_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx_io_write_ready[43] = 1U;
    __Vtable2_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx_io_write_ready[44] = 0U;
    __Vtable2_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx_io_write_ready[45] = 1U;
    __Vtable2_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx_io_write_ready[46] = 0U;
    __Vtable2_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx_io_write_ready[47] = 1U;
    __Vtable2_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx_io_write_ready[48] = 0U;
    __Vtable2_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx_io_write_ready[49] = 1U;
    __Vtable2_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx_io_write_ready[50] = 0U;
    __Vtable2_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx_io_write_ready[51] = 1U;
    __Vtable2_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx_io_write_ready[52] = 1U;
    __Vtable2_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx_io_write_ready[53] = 1U;
    __Vtable2_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx_io_write_ready[54] = 0U;
    __Vtable2_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx_io_write_ready[55] = 1U;
    __Vtable2_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx_io_write_ready[56] = 0U;
    __Vtable2_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx_io_write_ready[57] = 1U;
    __Vtable2_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx_io_write_ready[58] = 0U;
    __Vtable2_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx_io_write_ready[59] = 1U;
    __Vtable2_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx_io_write_ready[60] = 0U;
    __Vtable2_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx_io_write_ready[61] = 1U;
    __Vtable2_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx_io_write_ready[62] = 0U;
    __Vtable2_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx_io_write_ready[63] = 1U;
    __Vtableidx3 = 0;
    __Vtable3_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_state_string[0] = VL_ULL(0x49444c452020);
    __Vtable3_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_state_string[1] = VL_ULL(0x535441525420);
    __Vtable3_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_state_string[2] = VL_ULL(0x444154412020);
    __Vtable3_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_state_string[3] = VL_ULL(0x504152495459);
    __Vtable3_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_state_string[4] = VL_ULL(0x53544f502020);
    __Vtable3_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_state_string[5] = VL_ULL(0x3f3f3f3f3f3f);
    __Vtable3_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_state_string[6] = VL_ULL(0x3f3f3f3f3f3f);
    __Vtable3_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_state_string[7] = VL_ULL(0x3f3f3f3f3f3f);
    __Vtableidx4 = 0;
    __Vtable4_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx_io_error[0] = 0U;
    __Vtable4_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx_io_error[1] = 0U;
    __Vtable4_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx_io_error[2] = 0U;
    __Vtable4_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx_io_error[3] = 0U;
    __Vtable4_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx_io_error[4] = 0U;
    __Vtable4_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx_io_error[5] = 0U;
    __Vtable4_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx_io_error[6] = 0U;
    __Vtable4_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx_io_error[7] = 0U;
    __Vtable4_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx_io_error[8] = 0U;
    __Vtable4_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx_io_error[9] = 0U;
    __Vtable4_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx_io_error[10] = 0U;
    __Vtable4_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx_io_error[11] = 1U;
    __Vtable4_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx_io_error[12] = 0U;
    __Vtable4_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx_io_error[13] = 0U;
    __Vtable4_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx_io_error[14] = 0U;
    __Vtable4_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx_io_error[15] = 0U;
    __Vtable4_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx_io_error[16] = 0U;
    __Vtable4_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx_io_error[17] = 0U;
    __Vtable4_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx_io_error[18] = 0U;
    __Vtable4_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx_io_error[19] = 0U;
    __Vtable4_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx_io_error[20] = 0U;
    __Vtable4_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx_io_error[21] = 0U;
    __Vtable4_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx_io_error[22] = 0U;
    __Vtable4_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx_io_error[23] = 0U;
    __Vtable4_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx_io_error[24] = 0U;
    __Vtable4_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx_io_error[25] = 0U;
    __Vtable4_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx_io_error[26] = 0U;
    __Vtable4_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx_io_error[27] = 1U;
    __Vtable4_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx_io_error[28] = 1U;
    __Vtable4_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx_io_error[29] = 1U;
    __Vtable4_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx_io_error[30] = 1U;
    __Vtable4_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx_io_error[31] = 1U;
    __Vtable4_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx_io_error[32] = 0U;
    __Vtable4_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx_io_error[33] = 0U;
    __Vtable4_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx_io_error[34] = 0U;
    __Vtable4_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx_io_error[35] = 0U;
    __Vtable4_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx_io_error[36] = 0U;
    __Vtable4_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx_io_error[37] = 0U;
    __Vtable4_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx_io_error[38] = 0U;
    __Vtable4_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx_io_error[39] = 0U;
    __Vtable4_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx_io_error[40] = 0U;
    __Vtable4_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx_io_error[41] = 0U;
    __Vtable4_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx_io_error[42] = 0U;
    __Vtable4_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx_io_error[43] = 0U;
    __Vtable4_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx_io_error[44] = 0U;
    __Vtable4_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx_io_error[45] = 0U;
    __Vtable4_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx_io_error[46] = 0U;
    __Vtable4_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx_io_error[47] = 0U;
    __Vtable4_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx_io_error[48] = 0U;
    __Vtable4_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx_io_error[49] = 0U;
    __Vtable4_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx_io_error[50] = 0U;
    __Vtable4_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx_io_error[51] = 0U;
    __Vtable4_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx_io_error[52] = 0U;
    __Vtable4_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx_io_error[53] = 0U;
    __Vtable4_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx_io_error[54] = 0U;
    __Vtable4_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx_io_error[55] = 0U;
    __Vtable4_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx_io_error[56] = 0U;
    __Vtable4_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx_io_error[57] = 0U;
    __Vtable4_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx_io_error[58] = 0U;
    __Vtable4_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx_io_error[59] = 0U;
    __Vtable4_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx_io_error[60] = 1U;
    __Vtable4_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx_io_error[61] = 1U;
    __Vtable4_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx_io_error[62] = 1U;
    __Vtable4_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx_io_error[63] = 1U;
    __Vdly__Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__tickCounter_value = VL_RAND_RESET_I(3);
    __Vdly__Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__bitCounter_value = VL_RAND_RESET_I(3);
    __Vdlyvset__Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ram__v0 = 0;
    __Vdlyvset__Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_ram__v0 = 0;
    __Vdly__Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__clockDivider_counter = VL_RAND_RESET_I(20);
    __Vdly__Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_state = VL_RAND_RESET_I(3);
    __Vdly__Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__break_counter = VL_RAND_RESET_I(7);
    __Vdly__Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__sampler_samples_2 = VL_RAND_RESET_I(1);
    __Vm_traceActivity = 0;
}
