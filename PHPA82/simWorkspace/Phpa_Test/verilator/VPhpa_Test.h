// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VPHPA_TEST_H_
#define _VPHPA_TEST_H_  // guard

#include "verilated.h"

//==========

class VPhpa_Test__Syms;
class VPhpa_Test_VerilatedVcd;


//----------

VL_MODULE(VPhpa_Test) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(emif_emif_data_writeEnable,0,0);
    VL_IN8(emif_emif_cs,0,0);
    VL_IN8(emif_emif_we,0,0);
    VL_IN8(emif_emif_oe,0,0);
    VL_OUT8(ad5544_A_AD5544_CS,0,0);
    VL_OUT8(ad5544_A_AD5544_LDAC,0,0);
    VL_OUT8(ad5544_A_AD5544_MSB,0,0);
    VL_OUT8(ad5544_A_AD5544_RS,0,0);
    VL_OUT8(ad5544_A_AD5544_SCLK,0,0);
    VL_OUT8(ad5544_A_AD5544_SDIN,0,0);
    VL_OUT8(ad5544_B_AD5544_CS,0,0);
    VL_OUT8(ad5544_B_AD5544_LDAC,0,0);
    VL_OUT8(ad5544_B_AD5544_MSB,0,0);
    VL_OUT8(ad5544_B_AD5544_RS,0,0);
    VL_OUT8(ad5544_B_AD5544_SCLK,0,0);
    VL_OUT8(ad5544_B_AD5544_SDIN,0,0);
    VL_OUT8(ad5544_C_AD5544_CS,0,0);
    VL_OUT8(ad5544_C_AD5544_LDAC,0,0);
    VL_OUT8(ad5544_C_AD5544_MSB,0,0);
    VL_OUT8(ad5544_C_AD5544_RS,0,0);
    VL_OUT8(ad5544_C_AD5544_SCLK,0,0);
    VL_OUT8(ad5544_C_AD5544_SDIN,0,0);
    VL_OUT8(biss_c_enc_clk,0,0);
    VL_IN8(biss_c_enc_data,0,0);
    VL_IN8(ad7606_ad_busy,0,0);
    VL_IN8(ad7606_first_data,0,0);
    VL_OUT8(ad7606_ad_os,2,0);
    VL_OUT8(ad7606_ad_cs,0,0);
    VL_OUT8(ad7606_ad_rd,0,0);
    VL_OUT8(ad7606_ad_reset,0,0);
    VL_OUT8(ad7606_ad_convsta,0,0);
    VL_OUT8(ad7606_ad_convstb,0,0);
    VL_OUT8(ad7606_ad_range,0,0);
    VL_OUT8(led,0,0);
    VL_IN16(emif_emif_data_read,15,0);
    VL_OUT16(emif_emif_data_write,15,0);
    VL_IN16(ad7606_ad_data,15,0);
    VL_IN(emif_emif_addr,19,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out;
        CData/*0:0*/ Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out;
        CData/*0:0*/ Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out;
        CData/*0:0*/ Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__clk_out;
        CData/*0:0*/ Phpa_Test__DOT__area_emif_interface_apb_PENABLE;
        CData/*0:0*/ Phpa_Test__DOT__area_emif_interface_apb_PWRITE;
        CData/*0:0*/ Phpa_Test__DOT__area_ad5544_triger_ad5544_tri;
        CData/*0:0*/ Phpa_Test__DOT__apb_decoder_io_input_PREADY;
        CData/*0:0*/ Phpa_Test__DOT__apb_decoder_io_input_PSLVERROR;
        CData/*6:0*/ Phpa_Test__DOT__apb_decoder_io_output_PSEL;
        CData/*0:0*/ Phpa_Test__DOT__area_interrupt_temp;
        CData/*0:0*/ Phpa_Test__DOT__area_apbtimer_interrupt_delay_1;
        CData/*0:0*/ Phpa_Test__DOT__area_apbtimer_interrupt_delay_2;
        CData/*0:0*/ Phpa_Test__DOT__area_apbtimer_interrupt_delay_3;
        CData/*0:0*/ Phpa_Test__DOT__area_ledtemp;
        CData/*0:0*/ Phpa_Test__DOT__area_counter_willClear;
        CData/*0:0*/ Phpa_Test__DOT__area_emif_interface__DOT__penable;
        CData/*0:0*/ Phpa_Test__DOT__area_emif_interface__DOT__penable_regNext;
        CData/*0:0*/ Phpa_Test__DOT__area_apbtimer__DOT__area_timerA_io_full;
        CData/*0:0*/ Phpa_Test__DOT__area_apbtimer__DOT__area_busCtrl_doWrite;
        CData/*0:0*/ Phpa_Test__DOT__area_apbtimer__DOT___zz_io_tick;
        CData/*0:0*/ Phpa_Test__DOT__area_apbtimer__DOT__when_ApbTimer_l38;
        CData/*0:0*/ Phpa_Test__DOT__area_apbtimer__DOT__area_timerA__DOT__limitHit;
        CData/*0:0*/ Phpa_Test__DOT__area_apbtimer__DOT__area_timerA__DOT__inhibitFull;
        CData/*0:0*/ Phpa_Test__DOT__area_ad5544_triger__DOT__area_temp;
        CData/*0:0*/ Phpa_Test__DOT__area_ad5544_triger__DOT__when_AD5544_l91;
        CData/*0:0*/ Phpa_Test__DOT__area_ad5544_triger__DOT__area_temp_delay_1;
        CData/*0:0*/ Phpa_Test__DOT__area_ad5544_triger__DOT__area_temp_delay_2;
        CData/*0:0*/ Phpa_Test__DOT__area_ad5544_triger__DOT__area_temp_delay_3;
        CData/*0:0*/ Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_CS;
        CData/*0:0*/ Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC;
        CData/*0:0*/ Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_RS;
        CData/*0:0*/ Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK;
        CData/*0:0*/ Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN;
        CData/*0:0*/ Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ctrl_doWrite;
        CData/*3:0*/ Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__channel;
        CData/*6:0*/ Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state;
        CData/*6:0*/ Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__next_state;
        CData/*3:0*/ Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_dvidecnt;
        CData/*0:0*/ Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__ad5544_trig_reg1;
        CData/*0:0*/ Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__ad5544_trig_reg2;
        CData/*0:0*/ Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_CS;
        CData/*0:0*/ Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC;
        CData/*0:0*/ Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_RS;
        CData/*0:0*/ Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK;
        CData/*0:0*/ Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN;
        CData/*0:0*/ Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ctrl_doWrite;
        CData/*3:0*/ Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__channel;
        CData/*6:0*/ Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state;
        CData/*6:0*/ Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__next_state;
        CData/*3:0*/ Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_dvidecnt;
        CData/*0:0*/ Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__ad5544_trig_reg1;
        CData/*0:0*/ Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__ad5544_trig_reg2;
        CData/*0:0*/ Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_CS;
        CData/*0:0*/ Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC;
        CData/*0:0*/ Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_RS;
        CData/*0:0*/ Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK;
        CData/*0:0*/ Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN;
        CData/*0:0*/ Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ctrl_doWrite;
        CData/*3:0*/ Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__channel;
        CData/*6:0*/ Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state;
        CData/*6:0*/ Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__next_state;
        CData/*3:0*/ Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_dvidecnt;
        CData/*0:0*/ Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__ad5544_trig_reg1;
    };
    struct {
        CData/*0:0*/ Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__ad5544_trig_reg2;
        CData/*0:0*/ Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl_enc_clk;
        CData/*0:0*/ Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl_erro_flag;
        CData/*0:0*/ Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl_warn_flag;
        CData/*1:0*/ Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__start_flag;
        CData/*7:0*/ Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__Next_State;
        CData/*7:0*/ Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__Curr_State;
        CData/*3:0*/ Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__clk_dvidecnt;
        CData/*0:0*/ Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__ENC_SLO_1reg;
        CData/*0:0*/ Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__ENC_SLO_2reg;
        CData/*0:0*/ Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_cs;
        CData/*0:0*/ Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_rd;
        CData/*0:0*/ Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_reset;
        CData/*0:0*/ Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_convsta;
        CData/*0:0*/ Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_convstb;
        CData/*0:0*/ Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_data_valid_o;
        CData/*7:0*/ Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__cnt;
        CData/*7:0*/ Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i;
        CData/*7:0*/ Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state;
        CData/*0:0*/ Phpa_Test__DOT__apb_decoder__DOT__when_Apb3Decoder_l84;
        CData/*2:0*/ Phpa_Test__DOT__apb3Router_1__DOT__selIndex;
        SData/*15:0*/ Phpa_Test__DOT__area_apbtimer_apb_PRDATA;
        SData/*15:0*/ Phpa_Test__DOT__area_ad5544_triger_apb_PRDATA;
        SData/*15:0*/ Phpa_Test__DOT__area_ad5544_A_Ctrl_apb_PRDATA;
        SData/*15:0*/ Phpa_Test__DOT__area_ad5544_B_Ctrl_apb_PRDATA;
        SData/*15:0*/ Phpa_Test__DOT__area_ad5544_C_Ctrl_apb_PRDATA;
        SData/*15:0*/ Phpa_Test__DOT__area_biss_c_ctrl_apb_PRDATA;
        SData/*15:0*/ Phpa_Test__DOT__area_ad7606_ctrl_apb_PRDATA;
        SData/*15:0*/ Phpa_Test__DOT__area_emif_interface__DOT__apb_PRDATA_regNextWhen;
        SData/*15:0*/ Phpa_Test__DOT__area_apbtimer__DOT__area_timerA_io_limit_driver;
        SData/*15:0*/ Phpa_Test__DOT__area_apbtimer__DOT__area_timerA__DOT__counter;
        SData/*15:0*/ Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN1_driver;
        SData/*15:0*/ Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN2_driver;
        SData/*15:0*/ Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN3_driver;
        SData/*15:0*/ Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN4_driver;
        SData/*9:0*/ Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt;
        SData/*15:0*/ Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN1_driver;
        SData/*15:0*/ Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN2_driver;
        SData/*15:0*/ Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN3_driver;
        SData/*15:0*/ Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN4_driver;
        SData/*9:0*/ Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt;
        SData/*15:0*/ Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN1_driver;
        SData/*15:0*/ Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN2_driver;
        SData/*15:0*/ Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN3_driver;
        SData/*15:0*/ Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN4_driver;
        SData/*9:0*/ Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt;
        SData/*15:0*/ Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_status_reg;
        SData/*11:0*/ Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__CNT;
        SData/*11:0*/ Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__DATA_CNT;
        SData/*15:0*/ Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_ch1_o;
        SData/*15:0*/ Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_ch2_o;
        SData/*15:0*/ Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_ch3_o;
        SData/*15:0*/ Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_ch4_o;
        SData/*15:0*/ Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_ch5_o;
        SData/*15:0*/ Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_ch6_o;
        SData/*15:0*/ Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_ch7_o;
        SData/*15:0*/ Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_ch8_o;
        SData/*15:0*/ Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_data_temp_1;
        SData/*15:0*/ Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_data_temp_2;
        SData/*15:0*/ Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_data_temp_3;
        SData/*15:0*/ Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_data_temp_4;
        SData/*15:0*/ Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_data_temp_5;
        SData/*15:0*/ Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_data_temp_6;
        SData/*15:0*/ Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_data_temp_7;
    };
    struct {
        SData/*15:0*/ Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_data_temp_8;
        SData/*15:0*/ Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__cnt5us;
        SData/*15:0*/ Phpa_Test__DOT__apb3Router_1__DOT___zz_io_input_PRDATA;
        IData/*25:0*/ Phpa_Test__DOT__area_counter_valueNext;
        IData/*25:0*/ Phpa_Test__DOT__area_counter_value;
        IData/*17:0*/ Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg;
        IData/*17:0*/ Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg;
        IData/*17:0*/ Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg;
        IData/*31:0*/ Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl_enc_position_out;
        IData/*31:0*/ Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_pos_reg;
        QData/*40:0*/ Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl_enc_position_all;
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*5:0*/ Phpa_Test__DOT__area_biss_c_ctrl__DOT____Vcellout__area_bissc_ctrl__crc_flag;
    CData/*0:0*/ __Vdly__Phpa_Test__DOT__area_ledtemp;
    CData/*3:0*/ __Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_dvidecnt;
    CData/*3:0*/ __Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_dvidecnt;
    CData/*3:0*/ __Vdly__Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__clk_dvidecnt;
    CData/*0:0*/ __Vdly__Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__clk_out;
    CData/*7:0*/ __Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i;
    CData/*7:0*/ __Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state;
    CData/*3:0*/ __Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__channel;
    CData/*3:0*/ __Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__channel;
    CData/*3:0*/ __Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__channel;
    CData/*1:0*/ __Vdly__Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__start_flag;
    CData/*0:0*/ __VinpClk__TOP__Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__clk_out;
    CData/*0:0*/ __VinpClk__TOP__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out;
    CData/*0:0*/ __VinpClk__TOP__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out;
    CData/*0:0*/ __VinpClk__TOP__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__clk_out;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out;
    CData/*0:0*/ __Vchglast__TOP__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out;
    CData/*0:0*/ __Vchglast__TOP__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out;
    CData/*0:0*/ __Vchglast__TOP__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out;
    CData/*0:0*/ __Vchglast__TOP__Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__clk_out;
    SData/*15:0*/ __Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__cnt5us;
    SData/*9:0*/ __Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt;
    SData/*9:0*/ __Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt;
    SData/*9:0*/ __Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt;
    SData/*11:0*/ __Vdly__Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__CNT;
    SData/*11:0*/ __Vdly__Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__DATA_CNT;
    IData/*17:0*/ __Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg;
    IData/*17:0*/ __Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg;
    IData/*17:0*/ __Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg;
    IData/*31:0*/ __Vm_traceActivity;
    QData/*40:0*/ __Vdly__Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl_enc_position_all;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VPhpa_Test__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VPhpa_Test);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VPhpa_Test(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VPhpa_Test();
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
    static void _eval_initial_loop(VPhpa_Test__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VPhpa_Test__Syms* symsp, bool first);
  private:
    static QData _change_request(VPhpa_Test__Syms* __restrict vlSymsp);
    static QData _change_request_1(VPhpa_Test__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__24(VPhpa_Test__Syms* __restrict vlSymsp);
    static void _combo__TOP__29(VPhpa_Test__Syms* __restrict vlSymsp);
    static void _combo__TOP__4(VPhpa_Test__Syms* __restrict vlSymsp);
    static void _combo__TOP__9(VPhpa_Test__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VPhpa_Test__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VPhpa_Test__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VPhpa_Test__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__10(VPhpa_Test__Syms* __restrict vlSymsp);
    static void _sequent__TOP__11(VPhpa_Test__Syms* __restrict vlSymsp);
    static void _sequent__TOP__13(VPhpa_Test__Syms* __restrict vlSymsp);
    static void _sequent__TOP__14(VPhpa_Test__Syms* __restrict vlSymsp);
    static void _sequent__TOP__16(VPhpa_Test__Syms* __restrict vlSymsp);
    static void _sequent__TOP__17(VPhpa_Test__Syms* __restrict vlSymsp);
    static void _sequent__TOP__19(VPhpa_Test__Syms* __restrict vlSymsp);
    static void _sequent__TOP__20(VPhpa_Test__Syms* __restrict vlSymsp);
    static void _sequent__TOP__22(VPhpa_Test__Syms* __restrict vlSymsp);
    static void _sequent__TOP__23(VPhpa_Test__Syms* __restrict vlSymsp);
    static void _sequent__TOP__25(VPhpa_Test__Syms* __restrict vlSymsp);
    static void _sequent__TOP__26(VPhpa_Test__Syms* __restrict vlSymsp);
    static void _sequent__TOP__28(VPhpa_Test__Syms* __restrict vlSymsp);
    static void _sequent__TOP__30(VPhpa_Test__Syms* __restrict vlSymsp);
    static void _sequent__TOP__31(VPhpa_Test__Syms* __restrict vlSymsp);
    static void _sequent__TOP__6(VPhpa_Test__Syms* __restrict vlSymsp);
    static void _sequent__TOP__7(VPhpa_Test__Syms* __restrict vlSymsp);
    static void _sequent__TOP__8(VPhpa_Test__Syms* __restrict vlSymsp);
    static void _settle__TOP__1(VPhpa_Test__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__2(VPhpa_Test__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__3(VPhpa_Test__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VPhpa_Test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__10(VPhpa_Test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__11(VPhpa_Test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__12(VPhpa_Test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__13(VPhpa_Test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__14(VPhpa_Test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__15(VPhpa_Test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__16(VPhpa_Test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__17(VPhpa_Test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__18(VPhpa_Test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__19(VPhpa_Test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VPhpa_Test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__21(VPhpa_Test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__22(VPhpa_Test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__23(VPhpa_Test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VPhpa_Test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VPhpa_Test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(VPhpa_Test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__6(VPhpa_Test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__7(VPhpa_Test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__8(VPhpa_Test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__9(VPhpa_Test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VPhpa_Test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VPhpa_Test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__20(VPhpa_Test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VPhpa_Test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VPhpa_Test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__2(VPhpa_Test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
