// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VAURORATOP_H_
#define _VAURORATOP_H_  // guard

#include "verilated.h"

//==========

class VAuroraTop__Syms;
class VAuroraTop_VerilatedVcd;


//----------

VL_MODULE(VAuroraTop) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(aurora_userclk,0,0);
    VL_IN8(apb_PSEL,0,0);
    VL_IN8(apb_PENABLE,0,0);
    VL_OUT8(apb_PREADY,0,0);
    VL_IN8(apb_PWRITE,0,0);
    VL_OUT8(apb_PSLVERROR,0,0);
    VL_IN8(tx_bram_en,0,0);
    VL_IN8(tx_bram_we,3,0);
    VL_IN8(tx_bram_addr,7,0);
    VL_IN8(rx_bram_en,0,0);
    VL_IN8(rx_bram_we,3,0);
    VL_IN8(rx_bram_addr,7,0);
    VL_IN(apb_PADDR,19,0);
    VL_IN(apb_PWDATA,31,0);
    VL_OUT(apb_PRDATA,31,0);
    VL_IN(tx_bram_wrdata,31,0);
    VL_OUT(tx_bram_rddata,31,0);
    VL_IN(rx_bram_wrdata,31,0);
    VL_OUT(rx_bram_rddata,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ AuroraTop__DOT__auroraArea_auroratxcore_axiw_valid;
    CData/*0:0*/ AuroraTop__DOT__toparea_ctrl_doWrite;
    CData/*0:0*/ AuroraTop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_mem_wren;
    CData/*7:0*/ AuroraTop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_mem_addr;
    CData/*3:0*/ AuroraTop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_mem_wrwe;
    CData/*7:0*/ AuroraTop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_length;
    CData/*7:0*/ AuroraTop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_data_cnt;
    CData/*0:0*/ AuroraTop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_status;
    CData/*2:0*/ AuroraTop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state;
    CData/*0:0*/ AuroraTop__DOT__auroraArea_aurorarxcore__DOT__when_Gtx_Rx_l66;
    CData/*0:0*/ AuroraTop__DOT__auroraArea_aurorarxcore__DOT__when_Gtx_Rx_l99;
    CData/*0:0*/ AuroraTop__DOT__auroraArea_aurorarxcore__DOT__when_Gtx_Rx_l104;
    CData/*0:0*/ AuroraTop__DOT__auroraArea_aurorarxcore__DOT__when_Gtx_Rx_l113;
    CData/*0:0*/ AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_last_2;
    CData/*0:0*/ AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_last_1;
    CData/*0:0*/ AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_last;
    CData/*7:0*/ AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_length;
    CData/*0:0*/ AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_mem_rden;
    CData/*7:0*/ AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_mem_addrtemp;
    CData/*7:0*/ AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_data_cnt;
    CData/*2:0*/ AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state;
    CData/*0:0*/ AuroraTop__DOT__auroraArea_auroratxcore__DOT__when_Gtx_Tx_l140;
    SData/*8:0*/ AuroraTop__DOT__auroraArea_auroraTxBlockRam__DOT__i;
    SData/*8:0*/ AuroraTop__DOT__auroraArea_auroraRxBlockRam__DOT__i;
    IData/*31:0*/ AuroraTop__DOT__toparea_tx_headtemp;
    IData/*31:0*/ AuroraTop__DOT__toparea_tx_ctrl;
    IData/*31:0*/ AuroraTop__DOT__auroraArea_aurorarxcore__DOT__crc32_2_crc_o;
    IData/*31:0*/ AuroraTop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_mem_data;
    IData/*31:0*/ AuroraTop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_crc_data;
    IData/*31:0*/ AuroraTop__DOT__auroraArea_auroratxcore__DOT__crc32_2_crc_o;
    IData/*31:0*/ AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_7;
    IData/*31:0*/ AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_6;
    IData/*31:0*/ AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_5;
    IData/*31:0*/ AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_4;
    IData/*31:0*/ AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_3;
    IData/*31:0*/ AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_2;
    IData/*31:0*/ AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txdata_1;
    IData/*31:0*/ AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_axi_txhead;
    IData/*31:0*/ AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_crc_data;
    IData/*31:0*/ AuroraTop__DOT__auroraArea_auroraTxBlockRam__DOT___zz_bram_port0;
    IData/*31:0*/ AuroraTop__DOT__auroraArea_auroraTxBlockRam__DOT___zz_bram_port1;
    IData/*31:0*/ AuroraTop__DOT__auroraArea_auroraRxBlockRam__DOT___zz_bram_port0;
    IData/*31:0*/ AuroraTop__DOT__auroraArea_auroraRxBlockRam__DOT___zz_bram_port1;
    QData/*63:0*/ AuroraTop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state_string;
    QData/*63:0*/ AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state_string;
    IData/*31:0*/ AuroraTop__DOT__auroraArea_auroraTxBlockRam__DOT__bram[256];
    IData/*31:0*/ AuroraTop__DOT__auroraArea_auroraRxBlockRam__DOT__bram[256];
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*2:0*/ __Vtableidx1;
    CData/*2:0*/ __Vtableidx2;
    CData/*7:0*/ __Vdlyvdim0__AuroraTop__DOT__auroraArea_auroraTxBlockRam__DOT__bram__v0;
    CData/*0:0*/ __Vdlyvset__AuroraTop__DOT__auroraArea_auroraTxBlockRam__DOT__bram__v0;
    CData/*2:0*/ __Vdly__AuroraTop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state;
    CData/*7:0*/ __Vdly__AuroraTop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_mem_addr;
    CData/*7:0*/ __Vdly__AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_mem_addrtemp;
    CData/*2:0*/ __Vdly__AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state;
    CData/*7:0*/ __Vdly__AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_data_cnt;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    CData/*0:0*/ __Vclklast__TOP__aurora_userclk;
    IData/*31:0*/ __Vdlyvval__AuroraTop__DOT__auroraArea_auroraTxBlockRam__DOT__bram__v0;
    IData/*31:0*/ __Vm_traceActivity;
    static QData/*63:0*/ __Vtable1_AuroraTop__DOT__auroraArea_aurorarxcore__DOT__auroraRxArea_stateMachine_state_string[8];
    static QData/*63:0*/ __Vtable2_AuroraTop__DOT__auroraArea_auroratxcore__DOT__auroraTxArea_stateMachine_state_string[8];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VAuroraTop__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VAuroraTop);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VAuroraTop(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VAuroraTop();
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
    static void _eval_initial_loop(VAuroraTop__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VAuroraTop__Syms* symsp, bool first);
  private:
    static QData _change_request(VAuroraTop__Syms* __restrict vlSymsp);
    static QData _change_request_1(VAuroraTop__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__15(VAuroraTop__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VAuroraTop__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VAuroraTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VAuroraTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(VAuroraTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _multiclk__TOP__16(VAuroraTop__Syms* __restrict vlSymsp);
    static void _sequent__TOP__10(VAuroraTop__Syms* __restrict vlSymsp);
    static void _sequent__TOP__11(VAuroraTop__Syms* __restrict vlSymsp);
    static void _sequent__TOP__12(VAuroraTop__Syms* __restrict vlSymsp);
    static void _sequent__TOP__13(VAuroraTop__Syms* __restrict vlSymsp);
    static void _sequent__TOP__14(VAuroraTop__Syms* __restrict vlSymsp);
    static void _sequent__TOP__2(VAuroraTop__Syms* __restrict vlSymsp);
    static void _sequent__TOP__4(VAuroraTop__Syms* __restrict vlSymsp);
    static void _sequent__TOP__6(VAuroraTop__Syms* __restrict vlSymsp);
    static void _sequent__TOP__9(VAuroraTop__Syms* __restrict vlSymsp);
    static void _settle__TOP__7(VAuroraTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__8(VAuroraTop__Syms* __restrict vlSymsp);
    static void traceChgThis(VAuroraTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__10(VAuroraTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__11(VAuroraTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__12(VAuroraTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__13(VAuroraTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__14(VAuroraTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__15(VAuroraTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__16(VAuroraTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__17(VAuroraTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__18(VAuroraTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VAuroraTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VAuroraTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VAuroraTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(VAuroraTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__6(VAuroraTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__7(VAuroraTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__8(VAuroraTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__9(VAuroraTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VAuroraTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VAuroraTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VAuroraTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VAuroraTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
