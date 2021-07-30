// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VEMIF_CTRL_TEST_H_
#define _VEMIF_CTRL_TEST_H_  // guard

#include "verilated.h"

//==========

class VEmif_Ctrl_test__Syms;
class VEmif_Ctrl_test_VerilatedVcd;


//----------

VL_MODULE(VEmif_Ctrl_test) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(top_emif_emif_data_writeEnable,0,0);
    VL_IN8(top_emif_emif_cs,0,0);
    VL_IN8(top_emif_emif_we,0,0);
    VL_IN8(top_emif_emif_oe,0,0);
    VL_IN16(top_gpioA_read,15,0);
    VL_OUT16(top_gpioA_write,15,0);
    VL_OUT16(top_gpioA_writeEnable,15,0);
    VL_IN(top_emif_emif_addr,31,0);
    VL_IN(top_emif_emif_data_read,31,0);
    VL_OUT(top_emif_emif_data_write,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ Emif_Ctrl_test__DOT__area_tt;
        CData/*0:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_emif_interface_apb_PENABLE;
        CData/*0:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_emif_interface_apb_PWRITE;
        CData/*0:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__apb_decoder_io_input_PREADY;
        CData/*0:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__apb_decoder_io_input_PSLVERROR;
        CData/*1:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__apb_decoder_io_output_PSEL;
        CData/*0:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_emif_interface__DOT__penable;
        CData/*0:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_emif_interface__DOT__penable_regNext;
        CData/*0:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_gpioACtrl__DOT__ctrl_doWrite;
        CData/*0:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy_io_pop_ready;
        CData/*0:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_write_ready;
        CData/*0:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy_io_pop_valid;
        CData/*0:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy_io_pop_valid;
        CData/*0:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__busCtrl_doWrite;
        CData/*0:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT___zz_bridge_write_streamUnbuffered_valid;
        CData/*0:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_read_streamBreaked_valid;
        CData/*0:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_read_streamBreaked_ready;
        CData/*0:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_interruptCtrl_writeIntEnable;
        CData/*0:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_interruptCtrl_readIntEnable;
        CData/*0:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_interruptCtrl_readInt;
        CData/*0:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_interruptCtrl_writeInt;
        CData/*0:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_misc_readError;
        CData/*0:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__when_BusSlaveFactory_l335;
        CData/*0:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_misc_readOverflowError;
        CData/*0:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__when_BusSlaveFactory_l335_1;
        CData/*0:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_misc_breakDetected;
        CData/*0:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_readBreak_regNext;
        CData/*0:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__when_BusSlaveFactory_l335_2;
        CData/*0:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_misc_doBreak;
        CData/*0:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__when_BusSlaveFactory_l366;
        CData/*0:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__when_BusSlaveFactory_l335_3;
        CData/*0:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx_io_write_ready;
        CData/*0:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx_io_error;
        CData/*0:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__clockDivider_tick;
        CData/*0:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__io_write_thrown_valid;
        CData/*0:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__clockDivider_counter_willIncrement;
        CData/*2:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__clockDivider_counter_valueNext;
        CData/*2:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__clockDivider_counter_value;
        CData/*0:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__clockDivider_counter_willOverflow;
        CData/*2:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__tickCounter_value;
        CData/*2:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__stateMachine_state;
        CData/*0:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__stateMachine_parity;
        CData/*0:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__stateMachine_txd;
        CData/*0:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__when_UartCtrlTx_l73;
        CData/*0:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT___zz_io_txd;
        CData/*0:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT___zz_io_rts;
        CData/*0:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__sampler_samples_1;
        CData/*0:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__sampler_samples_2;
        CData/*0:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__sampler_value;
        CData/*0:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__sampler_tick;
        CData/*2:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__bitTimer_counter;
        CData/*0:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__bitTimer_tick;
        CData/*0:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__when_UartCtrlRx_l43;
        CData/*2:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__bitCounter_value;
        CData/*6:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__break_counter;
        CData/*0:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__when_UartCtrlRx_l69;
        CData/*2:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_state;
        CData/*0:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_parity;
        CData/*7:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_shifter;
        CData/*0:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_validReg;
        CData/*0:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__when_UartCtrlRx_l93;
        CData/*0:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__when_UartCtrlRx_l111;
        CData/*0:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__when_UartCtrlRx_l125;
        CData/*0:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_0;
    };
    struct {
        CData/*0:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_1;
        CData/*7:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT___zz_logic_ram_port0;
        CData/*0:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT___zz_1;
        CData/*0:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushPtr_willIncrement;
        CData/*3:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushPtr_valueNext;
        CData/*3:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushPtr_value;
        CData/*0:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popPtr_willIncrement;
        CData/*3:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popPtr_valueNext;
        CData/*3:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popPtr_value;
        CData/*0:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ptrMatch;
        CData/*0:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_risingOccupancy;
        CData/*0:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushing;
        CData/*0:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popping;
        CData/*0:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_full;
        CData/*0:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT___zz_io_pop_valid;
        CData/*7:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT___zz_logic_ram_port0;
        CData/*0:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT___zz_1;
        CData/*0:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_pushPtr_willIncrement;
        CData/*3:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_pushPtr_valueNext;
        CData/*3:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_pushPtr_value;
        CData/*0:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_popPtr_willIncrement;
        CData/*3:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_popPtr_valueNext;
        CData/*3:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_popPtr_value;
        CData/*0:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_ptrMatch;
        CData/*0:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_risingOccupancy;
        CData/*0:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_pushing;
        CData/*0:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_popping;
        CData/*0:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_full;
        CData/*0:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT___zz_io_pop_valid;
        CData/*0:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__apb_decoder__DOT__when_Apb3Decoder_l84;
        CData/*0:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__apb3Router_1__DOT__selIndex;
        SData/*15:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_gpioACtrl__DOT__io_gpio_write_driver;
        SData/*15:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_gpioACtrl__DOT__io_gpio_writeEnable_driver;
        SData/*15:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_gpioACtrl__DOT__io_gpio_read_buffercc__DOT__buffers_0;
        SData/*15:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_gpioACtrl__DOT__io_gpio_read_buffercc__DOT__buffers_1;
        IData/*31:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_gpioACtrl_io_apb_PRDATA;
        IData/*31:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl_io_apb_PRDATA;
        IData/*31:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_emif_interface__DOT__apb_PRDATA_regNextWhen;
        IData/*19:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__clockDivider_counter;
        IData/*31:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__apb3Router_1__DOT___zz_io_input_PRDATA;
        QData/*47:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__stateMachine_state_string;
        QData/*47:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_state_string;
        CData/*7:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ram[16];
        CData/*7:0*/ Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_ram[16];
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*2:0*/ __Vtableidx1;
    CData/*5:0*/ __Vtableidx2;
    CData/*2:0*/ __Vtableidx3;
    CData/*5:0*/ __Vtableidx4;
    CData/*2:0*/ __Vdly__Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__tickCounter_value;
    CData/*2:0*/ __Vdly__Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__bitCounter_value;
    CData/*0:0*/ __Vdlyvset__Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ram__v0;
    CData/*0:0*/ __Vdlyvset__Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_ram__v0;
    CData/*2:0*/ __Vdly__Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_state;
    CData/*6:0*/ __Vdly__Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__break_counter;
    CData/*0:0*/ __Vdly__Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__sampler_samples_2;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    IData/*19:0*/ __Vdly__Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__clockDivider_counter;
    IData/*31:0*/ __Vm_traceActivity;
    static QData/*47:0*/ __Vtable1_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__stateMachine_state_string[8];
    static CData/*0:0*/ __Vtable2_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx_io_write_ready[64];
    static QData/*47:0*/ __Vtable3_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_state_string[8];
    static CData/*0:0*/ __Vtable4_Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx_io_error[64];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VEmif_Ctrl_test__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VEmif_Ctrl_test);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VEmif_Ctrl_test(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VEmif_Ctrl_test();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VEmif_Ctrl_test__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VEmif_Ctrl_test__Syms* symsp, bool first);
  private:
    static QData _change_request(VEmif_Ctrl_test__Syms* __restrict vlSymsp);
    static QData _change_request_1(VEmif_Ctrl_test__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__1(VEmif_Ctrl_test__Syms* __restrict vlSymsp);
    static void _combo__TOP__12(VEmif_Ctrl_test__Syms* __restrict vlSymsp);
    static void _combo__TOP__9(VEmif_Ctrl_test__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VEmif_Ctrl_test__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VEmif_Ctrl_test__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VEmif_Ctrl_test__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__10(VEmif_Ctrl_test__Syms* __restrict vlSymsp);
    static void _sequent__TOP__11(VEmif_Ctrl_test__Syms* __restrict vlSymsp);
    static void _sequent__TOP__4(VEmif_Ctrl_test__Syms* __restrict vlSymsp);
    static void _sequent__TOP__5(VEmif_Ctrl_test__Syms* __restrict vlSymsp);
    static void _sequent__TOP__7(VEmif_Ctrl_test__Syms* __restrict vlSymsp);
    static void _sequent__TOP__8(VEmif_Ctrl_test__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(VEmif_Ctrl_test__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__3(VEmif_Ctrl_test__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VEmif_Ctrl_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__10(VEmif_Ctrl_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__11(VEmif_Ctrl_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__12(VEmif_Ctrl_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__13(VEmif_Ctrl_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__14(VEmif_Ctrl_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VEmif_Ctrl_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VEmif_Ctrl_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VEmif_Ctrl_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(VEmif_Ctrl_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__6(VEmif_Ctrl_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__7(VEmif_Ctrl_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__8(VEmif_Ctrl_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__9(VEmif_Ctrl_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VEmif_Ctrl_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VEmif_Ctrl_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__15(VEmif_Ctrl_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VEmif_Ctrl_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VEmif_Ctrl_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
