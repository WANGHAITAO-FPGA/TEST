// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VEMIFTOAURORA_TEST_H_
#define _VEMIFTOAURORA_TEST_H_  // guard

#include "verilated.h"

//==========

class VEmifToAurora_test__Syms;
class VEmifToAurora_test_VerilatedVcd;


//----------

VL_MODULE(VEmifToAurora_test) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(aurora_userclk,0,0);
    VL_OUT8(emif_emif_data_writeEnable,0,0);
    VL_IN8(emif_emif_cs,0,0);
    VL_IN8(emif_emif_we,0,0);
    VL_IN8(emif_emif_oe,0,0);
    VL_OUT8(intrrupt,0,0);
    VL_IN16(emif_emif_data_read,15,0);
    VL_OUT16(emif_emif_data_write,15,0);
    VL_IN(emif_emif_addr,23,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ EmifToAurora_test__DOT__area_emiftoapb_apb_PENABLE;
        CData/*0:0*/ EmifToAurora_test__DOT__area_emiftoapb_apb_PWRITE;
        CData/*0:0*/ EmifToAurora_test__DOT__apb_decoder_io_input_PREADY;
        CData/*0:0*/ EmifToAurora_test__DOT__apb_decoder_io_input_PSLVERROR;
        CData/*2:0*/ EmifToAurora_test__DOT__apb_decoder_io_output_PSEL;
        CData/*0:0*/ EmifToAurora_test__DOT__resetCtrl_axiResetUnbuffered;
        CData/*5:0*/ EmifToAurora_test__DOT__resetCtrl_axiResetCounter;
        CData/*0:0*/ EmifToAurora_test__DOT__when_EmifToAurora_l38;
        CData/*0:0*/ EmifToAurora_test__DOT__resetCtrl_axiReset;
        CData/*0:0*/ EmifToAurora_test__DOT__area_emiftoapb__DOT__penable;
        CData/*0:0*/ EmifToAurora_test__DOT__area_emiftoapb__DOT__penable_regNext;
        CData/*0:0*/ EmifToAurora_test__DOT__area_apb3toTxBram__DOT__when_Apb3ToBram_l41;
        CData/*0:0*/ EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore_axiw_valid;
        CData/*0:0*/ EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_ctrl;
        CData/*0:0*/ EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_triger;
        CData/*0:0*/ EmifToAurora_test__DOT__area_auroratop__DOT__toparea_ctrl_doWrite;
        CData/*0:0*/ EmifToAurora_test__DOT__area_auroratop__DOT__toparea_triger;
        CData/*0:0*/ EmifToAurora_test__DOT__area_auroratop__DOT__when_AuroraTop_l46;
        CData/*0:0*/ EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_ctrl_temp;
        CData/*0:0*/ EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_triger_temp;
        CData/*0:0*/ EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_senddatatriger;
        CData/*0:0*/ EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_sendtriger;
        CData/*0:0*/ EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_ctrl_temp_delay_1;
        CData/*0:0*/ EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_ctrl_temp_delay_2;
        CData/*0:0*/ EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_ctrl_temp_delay_3;
        CData/*0:0*/ EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_triger_temp_delay_1;
        CData/*0:0*/ EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_triger_temp_delay_1_1;
        CData/*0:0*/ EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_triger_temp_delay_2;
        CData/*0:0*/ EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_triger_temp_delay_1_2;
        CData/*0:0*/ EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_triger_temp_delay_2_1;
        CData/*0:0*/ EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_triger_temp_delay_3;
        CData/*0:0*/ EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_mem_wren;
        CData/*7:0*/ EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_mem_addr;
        CData/*3:0*/ EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_mem_wrwe;
        CData/*7:0*/ EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_length;
        CData/*7:0*/ EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_data_cnt;
        CData/*0:0*/ EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_status;
        CData/*0:0*/ EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_aurora_intrrupt;
        CData/*2:0*/ EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state;
        CData/*0:0*/ EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__when_Gtx_Rx_l70;
        CData/*0:0*/ EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__when_Gtx_Rx_l89;
        CData/*0:0*/ EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__when_Gtx_Rx_l106;
        CData/*0:0*/ EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__when_Gtx_Rx_l111;
        CData/*0:0*/ EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__when_Gtx_Rx_l120;
        CData/*0:0*/ EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_last_2;
        CData/*0:0*/ EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_last_1;
        CData/*0:0*/ EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_last;
        CData/*7:0*/ EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_length;
        CData/*0:0*/ EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_mem_rden;
        CData/*7:0*/ EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_mem_addrtemp;
        CData/*7:0*/ EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_data_cnt;
        CData/*2:0*/ EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state;
        CData/*0:0*/ EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__when_Gtx_Tx_l140;
        CData/*0:0*/ EmifToAurora_test__DOT__apb_decoder__DOT__when_Apb3Decoder_l84;
        CData/*1:0*/ EmifToAurora_test__DOT__apb3Router_1__DOT__selIndex;
        SData/*15:0*/ EmifToAurora_test__DOT__area_emiftoapb__DOT__emifdatatemp;
        SData/*15:0*/ EmifToAurora_test__DOT__area_emiftoapb__DOT___zz_emif_emif_data_write;
        SData/*15:0*/ EmifToAurora_test__DOT__area_emiftoapb__DOT___zz_emif_emif_data_write_1;
        SData/*8:0*/ EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroraTxBlockRam__DOT__i;
        SData/*8:0*/ EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroraRxBlockRam__DOT__i;
        IData/*31:0*/ EmifToAurora_test__DOT__area_emiftoapb_apb_PWDATA;
        IData/*31:0*/ EmifToAurora_test__DOT__area_auroratop_apb_PRDATA;
        IData/*31:0*/ EmifToAurora_test__DOT__area_auroratop__DOT__toparea_tx_headtemp;
        IData/*31:0*/ EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__crc32_2_crc_o;
    };
    struct {
        IData/*31:0*/ EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_mem_data;
        IData/*31:0*/ EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data;
        IData/*31:0*/ EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__crc32_2_crc_o;
        IData/*31:0*/ EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7;
        IData/*31:0*/ EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_6;
        IData/*31:0*/ EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_5;
        IData/*31:0*/ EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_4;
        IData/*31:0*/ EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_3;
        IData/*31:0*/ EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_2;
        IData/*31:0*/ EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_1;
        IData/*31:0*/ EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txhead;
        IData/*31:0*/ EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data;
        IData/*31:0*/ EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroraTxBlockRam__DOT___zz_bram_port0;
        IData/*31:0*/ EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroraTxBlockRam__DOT___zz_bram_port1;
        IData/*31:0*/ EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroraRxBlockRam__DOT___zz_bram_port0;
        IData/*31:0*/ EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroraRxBlockRam__DOT___zz_bram_port1;
        IData/*31:0*/ EmifToAurora_test__DOT__apb3Router_1__DOT___zz_io_input_PRDATA;
        QData/*63:0*/ EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state_string;
        QData/*63:0*/ EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state_string;
        IData/*31:0*/ EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroraTxBlockRam__DOT__bram[256];
        IData/*31:0*/ EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroraRxBlockRam__DOT__bram[256];
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*2:0*/ __Vtableidx1;
    CData/*2:0*/ __Vtableidx2;
    CData/*7:0*/ __Vdlyvdim0__EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroraTxBlockRam__DOT__bram__v0;
    CData/*0:0*/ __Vdlyvset__EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroraTxBlockRam__DOT__bram__v0;
    CData/*7:0*/ __Vdly__EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_mem_addr;
    CData/*2:0*/ __Vdly__EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state;
    CData/*7:0*/ __Vdly__EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_mem_addrtemp;
    CData/*2:0*/ __Vdly__EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state;
    CData/*7:0*/ __Vdly__EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_data_cnt;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__aurora_userclk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    IData/*31:0*/ __Vdlyvval__EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroraTxBlockRam__DOT__bram__v0;
    IData/*31:0*/ __Vm_traceActivity;
    static QData/*63:0*/ __Vtable1_EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state_string[8];
    static QData/*63:0*/ __Vtable2_EmifToAurora_test__DOT__area_auroratop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state_string[8];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VEmifToAurora_test__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VEmifToAurora_test);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VEmifToAurora_test(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VEmifToAurora_test();
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
    static void _eval_initial_loop(VEmifToAurora_test__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VEmifToAurora_test__Syms* symsp, bool first);
  private:
    static QData _change_request(VEmifToAurora_test__Syms* __restrict vlSymsp);
    static QData _change_request_1(VEmifToAurora_test__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__1(VEmifToAurora_test__Syms* __restrict vlSymsp);
    static void _combo__TOP__11(VEmifToAurora_test__Syms* __restrict vlSymsp);
    static void _combo__TOP__19(VEmifToAurora_test__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VEmifToAurora_test__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VEmifToAurora_test__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VEmifToAurora_test__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__10(VEmifToAurora_test__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _multiclk__TOP__21(VEmifToAurora_test__Syms* __restrict vlSymsp);
    static void _sequent__TOP__12(VEmifToAurora_test__Syms* __restrict vlSymsp);
    static void _sequent__TOP__13(VEmifToAurora_test__Syms* __restrict vlSymsp);
    static void _sequent__TOP__15(VEmifToAurora_test__Syms* __restrict vlSymsp);
    static void _sequent__TOP__16(VEmifToAurora_test__Syms* __restrict vlSymsp);
    static void _sequent__TOP__17(VEmifToAurora_test__Syms* __restrict vlSymsp);
    static void _sequent__TOP__18(VEmifToAurora_test__Syms* __restrict vlSymsp);
    static void _sequent__TOP__20(VEmifToAurora_test__Syms* __restrict vlSymsp);
    static void _sequent__TOP__4(VEmifToAurora_test__Syms* __restrict vlSymsp);
    static void _sequent__TOP__5(VEmifToAurora_test__Syms* __restrict vlSymsp);
    static void _sequent__TOP__6(VEmifToAurora_test__Syms* __restrict vlSymsp);
    static void _sequent__TOP__7(VEmifToAurora_test__Syms* __restrict vlSymsp);
    static void _sequent__TOP__8(VEmifToAurora_test__Syms* __restrict vlSymsp);
    static void _sequent__TOP__9(VEmifToAurora_test__Syms* __restrict vlSymsp);
    static void _settle__TOP__14(VEmifToAurora_test__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__2(VEmifToAurora_test__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__3(VEmifToAurora_test__Syms* __restrict vlSymsp);
    static void traceChgThis(VEmifToAurora_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__10(VEmifToAurora_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__11(VEmifToAurora_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__12(VEmifToAurora_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__13(VEmifToAurora_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__14(VEmifToAurora_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__15(VEmifToAurora_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__16(VEmifToAurora_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__17(VEmifToAurora_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__18(VEmifToAurora_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__19(VEmifToAurora_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VEmifToAurora_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__20(VEmifToAurora_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__21(VEmifToAurora_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__22(VEmifToAurora_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__23(VEmifToAurora_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__24(VEmifToAurora_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__25(VEmifToAurora_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__26(VEmifToAurora_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VEmifToAurora_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VEmifToAurora_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(VEmifToAurora_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__6(VEmifToAurora_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__7(VEmifToAurora_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__8(VEmifToAurora_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__9(VEmifToAurora_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VEmifToAurora_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VEmifToAurora_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VEmifToAurora_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VEmifToAurora_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
