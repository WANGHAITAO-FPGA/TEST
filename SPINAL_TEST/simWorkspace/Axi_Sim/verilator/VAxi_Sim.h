// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VAXI_SIM_H_
#define _VAXI_SIM_H_  // guard

#include "verilated.h"

//==========

class VAxi_Sim__Syms;
class VAxi_Sim_VerilatedVcd;


//----------

VL_MODULE(VAxi_Sim) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(clkb,0,0);
    VL_IN8(axi_aw_valid,0,0);
    VL_OUT8(axi_aw_ready,0,0);
    VL_IN8(axi_aw_payload_id,3,0);
    VL_IN8(axi_aw_payload_len,7,0);
    VL_IN8(axi_aw_payload_size,2,0);
    VL_IN8(axi_aw_payload_burst,1,0);
    VL_IN8(axi_w_valid,0,0);
    VL_OUT8(axi_w_ready,0,0);
    VL_IN8(axi_w_payload_strb,3,0);
    VL_IN8(axi_w_payload_last,0,0);
    VL_OUT8(axi_b_valid,0,0);
    VL_IN8(axi_b_ready,0,0);
    VL_OUT8(axi_b_payload_id,3,0);
    VL_OUT8(axi_b_payload_resp,1,0);
    VL_IN8(axi_ar_valid,0,0);
    VL_OUT8(axi_ar_ready,0,0);
    VL_IN8(axi_ar_payload_id,3,0);
    VL_IN8(axi_ar_payload_len,7,0);
    VL_IN8(axi_ar_payload_size,2,0);
    VL_IN8(axi_ar_payload_burst,1,0);
    VL_OUT8(axi_r_valid,0,0);
    VL_IN8(axi_r_ready,0,0);
    VL_OUT8(axi_r_payload_id,3,0);
    VL_OUT8(axi_r_payload_resp,1,0);
    VL_OUT8(axi_r_payload_last,0,0);
    VL_IN8(bram_en,0,0);
    VL_IN8(bram_we,3,0);
    VL_IN8(bram_addr,7,0);
    VL_IN8(resetb,0,0);
    VL_IN(axi_aw_payload_addr,19,0);
    VL_IN(axi_w_payload_data,31,0);
    VL_IN(axi_ar_payload_addr,19,0);
    VL_OUT(axi_r_payload_data,31,0);
    VL_IN(bram_wrdata,31,0);
    VL_OUT(bram_rddata,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arw_ready;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_w_ready;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_b_valid;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_r_valid;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__ram_io_bram_en;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arw_ready;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_w_ready;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_b_valid;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_r_valid;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_apb_PSEL;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_apb_PENABLE;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder_io_input_ar_ready;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder_io_input_r_valid;
        CData/*3:0*/ Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder_io_input_r_payload_id;
        CData/*1:0*/ Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder_io_input_r_payload_resp;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder_io_input_r_payload_last;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder_io_input_aw_ready;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder_io_input_w_ready;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder_io_input_b_valid;
        CData/*3:0*/ Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder_io_input_b_payload_id;
        CData/*1:0*/ Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder_io_input_b_payload_resp;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_w_valid;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter_io_output_w_valid;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder_io_outputs_0_ar_rValid;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder_io_outputs_0_ar_validPipe_fire;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder_io_outputs_1_ar_rValid;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder_io_outputs_1_ar_validPipe_fire;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder_io_outputs_0_aw_rValid;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder_io_outputs_0_aw_validPipe_fire;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder_io_outputs_1_aw_rValid;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder_io_outputs_1_aw_validPipe_fire;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_arw_rValid;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_arw_halfPipe_fire;
        CData/*3:0*/ Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_arw_rData_id;
        CData/*7:0*/ Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_arw_rData_len;
        CData/*2:0*/ Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_arw_rData_size;
        CData/*1:0*/ Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_arw_rData_burst;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_arw_rData_write;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_w_s2mPipe_ready;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_w_rValid;
        CData/*3:0*/ Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_w_rData_strb;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_w_rData_last;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_w_s2mPipe_rValid;
        CData/*3:0*/ Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_w_s2mPipe_rData_strb;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_w_s2mPipe_rData_last;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter_io_output_arw_rValid;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter_io_output_arw_halfPipe_fire;
        CData/*3:0*/ Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter_io_output_arw_rData_id;
        CData/*7:0*/ Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter_io_output_arw_rData_len;
        CData/*2:0*/ Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter_io_output_arw_rData_size;
        CData/*1:0*/ Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter_io_output_arw_rData_burst;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter_io_output_arw_rData_write;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter_io_output_w_rValid;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter_io_output_w_halfPipe_fire;
        CData/*3:0*/ Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter_io_output_w_rData_strb;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter_io_output_w_rData_last;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__apb3busif_readError;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__apb3busif_doWrite;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__apb3busif_doRead;
        CData/*1:0*/ Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__phase;
        CData/*7:0*/ Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__lenBurst;
        CData/*3:0*/ Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__arw_id;
        CData/*7:0*/ Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__arw_len;
        CData/*2:0*/ Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__arw_size;
    };
    struct {
        CData/*1:0*/ Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__arw_burst;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__arw_write;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__when_Axi4SharedToBRAM_l121;
        CData/*2:0*/ Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__Axi4Incr_wrapCase;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__when_Axi4SharedToBRAM_l149;
        CData/*1:0*/ Axi_Sim__DOT__area_axi4top__DOT__apbBridge__DOT__phase;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__apbBridge__DOT__write;
        CData/*3:0*/ Axi_Sim__DOT__area_axi4top__DOT__apbBridge__DOT__id;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__apbBridge__DOT__when_Axi4SharedToApb3Bridge_l91;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder__DOT__pendingCmdCounter_incrementIt;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder__DOT__pendingCmdCounter_decrementIt;
        CData/*2:0*/ Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder__DOT__pendingCmdCounter_valueNext;
        CData/*2:0*/ Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder__DOT__pendingCmdCounter_value;
        CData/*1:0*/ Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder__DOT__decodedCmdSels;
        CData/*1:0*/ Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder__DOT__pendingSels;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder__DOT__pendingError;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder__DOT__allowCmd;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder__DOT__errorSlave__DOT__sendRsp;
        CData/*3:0*/ Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder__DOT__errorSlave__DOT__id;
        CData/*7:0*/ Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder__DOT__errorSlave__DOT__remaining;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder__DOT__errorSlave__DOT__io_axi_ar_fire;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__errorSlave_io_axi_aw_ready;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__cmdAllowedStart;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__pendingCmdCounter_incrementIt;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__pendingCmdCounter_decrementIt;
        CData/*2:0*/ Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__pendingCmdCounter_valueNext;
        CData/*2:0*/ Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__pendingCmdCounter_value;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__pendingDataCounter_incrementIt;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__pendingDataCounter_decrementIt;
        CData/*2:0*/ Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__pendingDataCounter_valueNext;
        CData/*2:0*/ Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__pendingDataCounter_value;
        CData/*1:0*/ Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__decodedCmdSels;
        CData/*1:0*/ Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__pendingSels;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__pendingError;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__allowCmd;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT___zz_cmdAllowedStart;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__errorSlave__DOT__consumeData;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__errorSlave__DOT__sendRsp;
        CData/*3:0*/ Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__errorSlave__DOT__id;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__errorSlave__DOT__io_axi_aw_fire;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__errorSlave__DOT__when_Axi4ErrorSlave_l24;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__errorSlave__DOT__io_axi_b_fire;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_ready;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_inputs_0_ready;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_inputs_1_ready;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_valid;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_input_ready;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_0_valid;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_valid;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo_io_pop_valid;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_valid;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter__DOT__locked;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter__DOT__maskLocked_0;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter__DOT__maskLocked_1;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter__DOT__maskRouted_0;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter__DOT__maskRouted_1;
        CData/*1:0*/ Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter__DOT___zz_maskProposal_0;
        CData/*3:0*/ Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter__DOT___zz_maskProposal_0_2;
        CData/*1:0*/ Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter__DOT___zz_maskProposal_0_3;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork__DOT___zz_io_outputs_0_valid;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork__DOT___zz_io_outputs_1_valid;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__pushPtr_willIncrement;
        CData/*1:0*/ Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__pushPtr_valueNext;
        CData/*1:0*/ Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__pushPtr_value;
    };
    struct {
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__popPtr_willIncrement;
        CData/*1:0*/ Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__popPtr_valueNext;
        CData/*1:0*/ Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__popPtr_value;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__ptrMatch;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__risingOccupancy;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__full;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__pushing;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__popping;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_ready;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_inputs_0_ready;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_inputs_1_ready;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_valid;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_input_ready;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_0_valid;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_valid;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo_io_pop_valid;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_valid;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter__DOT__locked;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter__DOT__maskLocked_0;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter__DOT__maskLocked_1;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter__DOT__maskRouted_0;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter__DOT__maskRouted_1;
        CData/*1:0*/ Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter__DOT___zz_maskProposal_0;
        CData/*3:0*/ Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter__DOT___zz_maskProposal_0_2;
        CData/*1:0*/ Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter__DOT___zz_maskProposal_0_3;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork__DOT___zz_io_outputs_0_valid;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork__DOT___zz_io_outputs_1_valid;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__pushPtr_willIncrement;
        CData/*1:0*/ Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__pushPtr_valueNext;
        CData/*1:0*/ Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__pushPtr_value;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__popPtr_willIncrement;
        CData/*1:0*/ Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__popPtr_valueNext;
        CData/*1:0*/ Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__popPtr_value;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__ptrMatch;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__risingOccupancy;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__full;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__pushing;
        CData/*0:0*/ Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__popping;
        SData/*11:0*/ Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__Axi4Incr_base;
        SData/*11:0*/ Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__Axi4Incr_baseIncr;
        SData/*8:0*/ Axi_Sim__DOT__area_blockram__DOT__i;
        IData/*19:0*/ Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_arw_rData_addr;
        IData/*31:0*/ Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_w_rData_data;
        IData/*31:0*/ Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_w_s2mPipe_rData_data;
        IData/*19:0*/ Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter_io_output_arw_rData_addr;
        IData/*31:0*/ Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter_io_output_w_rData_data;
        IData/*31:0*/ Axi_Sim__DOT__area_axi4top__DOT__apb3busif_readData;
        IData/*31:0*/ Axi_Sim__DOT__area_axi4top__DOT__Apb3_reg0;
        IData/*31:0*/ Axi_Sim__DOT__area_axi4top__DOT__Apb3_reg1;
        IData/*31:0*/ Axi_Sim__DOT__area_axi4top__DOT__Apb3_reg2;
        IData/*31:0*/ Axi_Sim__DOT__area_axi4top__DOT__Apb3_reg3;
        IData/*19:0*/ Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__arw_addr;
        IData/*31:0*/ Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__readData;
        IData/*19:0*/ Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__Axi4Incr_result;
        IData/*31:0*/ Axi_Sim__DOT__area_axi4top__DOT__apbBridge__DOT__readedData;
        IData/*31:0*/ Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder__DOT__errorSlave_io_axi_r_payload_data;
        IData/*31:0*/ Axi_Sim__DOT__area_blockram__DOT___zz_bram_port0;
        IData/*31:0*/ Axi_Sim__DOT__area_blockram__DOT___zz_bram_port1;
        IData/*31:0*/ Axi_Sim__DOT__area_blockram__DOT__bram[256];
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*1:0*/ __Vdly__Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__phase;
    CData/*1:0*/ __Vdly__Axi_Sim__DOT__area_axi4top__DOT__apbBridge__DOT__phase;
    CData/*0:0*/ __Vdly__Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder__DOT__errorSlave__DOT__sendRsp;
    CData/*7:0*/ __Vdly__Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__lenBurst;
    CData/*7:0*/ __Vdly__Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder__DOT__errorSlave__DOT__remaining;
    CData/*7:0*/ __Vdlyvdim0__Axi_Sim__DOT__area_blockram__DOT__bram__v0;
    CData/*0:0*/ __Vdlyvset__Axi_Sim__DOT__area_blockram__DOT__bram__v0;
    CData/*0:0*/ __Vclklast__TOP__clkb;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    IData/*31:0*/ __Vdlyvval__Axi_Sim__DOT__area_blockram__DOT__bram__v0;
    IData/*31:0*/ __Vm_traceActivity;
    CData/*0:0*/ __Vtablechg1[128];
    static CData/*1:0*/ __Vtable1_Axi_Sim__DOT__area_axi4top__DOT__apbBridge__DOT__phase[128];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VAxi_Sim__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VAxi_Sim);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VAxi_Sim(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VAxi_Sim();
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
    static void _eval_initial_loop(VAxi_Sim__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VAxi_Sim__Syms* symsp, bool first);
  private:
    static QData _change_request(VAxi_Sim__Syms* __restrict vlSymsp);
    static QData _change_request_1(VAxi_Sim__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__13(VAxi_Sim__Syms* __restrict vlSymsp);
    static void _combo__TOP__16(VAxi_Sim__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VAxi_Sim__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VAxi_Sim__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VAxi_Sim__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(VAxi_Sim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__11(VAxi_Sim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__12(VAxi_Sim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__14(VAxi_Sim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__15(VAxi_Sim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__3(VAxi_Sim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__5(VAxi_Sim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__6(VAxi_Sim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__7(VAxi_Sim__Syms* __restrict vlSymsp);
    static void _settle__TOP__10(VAxi_Sim__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__8(VAxi_Sim__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__9(VAxi_Sim__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VAxi_Sim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__10(VAxi_Sim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__12(VAxi_Sim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__13(VAxi_Sim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__14(VAxi_Sim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__15(VAxi_Sim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__16(VAxi_Sim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__17(VAxi_Sim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__18(VAxi_Sim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__19(VAxi_Sim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VAxi_Sim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VAxi_Sim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VAxi_Sim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(VAxi_Sim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__6(VAxi_Sim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__7(VAxi_Sim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__8(VAxi_Sim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__9(VAxi_Sim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VAxi_Sim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VAxi_Sim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__11(VAxi_Sim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__20(VAxi_Sim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VAxi_Sim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VAxi_Sim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__2(VAxi_Sim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__3(VAxi_Sim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
