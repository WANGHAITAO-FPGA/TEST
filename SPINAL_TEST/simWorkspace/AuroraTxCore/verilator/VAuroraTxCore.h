// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VAURORATXCORE_H_
#define _VAURORATXCORE_H_  // guard

#include "verilated_heavy.h"

//==========

class VAuroraTxCore__Syms;
class VAuroraTxCore_VerilatedVcd;


//----------

VL_MODULE(VAuroraTxCore) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(axiw_valid,0,0);
    VL_IN8(axiw_ready,0,0);
    VL_OUT8(axiw_payload_last,0,0);
    VL_IN8(tx_start,0,0);
    VL_IN8(tx_trigger,0,0);
    VL_OUT8(bram_en,0,0);
    VL_OUT8(bram_we,3,0);
    VL_OUT8(bram_addr,7,0);
    VL_OUT(axiw_payload_data,31,0);
    VL_IN(tx_head,31,0);
    VL_OUT(bram_wrdata,31,0);
    VL_IN(bram_rddata,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ AuroraTxCore__DOT__axi_last_2;
    CData/*0:0*/ AuroraTxCore__DOT__axi_last_1;
    CData/*0:0*/ AuroraTxCore__DOT__axi_last;
    CData/*7:0*/ AuroraTxCore__DOT__length;
    CData/*0:0*/ AuroraTxCore__DOT__mem_rden;
    CData/*7:0*/ AuroraTxCore__DOT__mem_addrtemp;
    CData/*7:0*/ AuroraTxCore__DOT__data_cnt;
    CData/*2:0*/ AuroraTxCore__DOT__stateMachine_state;
    CData/*0:0*/ AuroraTxCore__DOT__axiw_fire_3;
    CData/*0:0*/ AuroraTxCore__DOT__when_Gtx_Tx_l134;
    CData/*7:0*/ AuroraTxCore__DOT__mem_addr;
    IData/*31:0*/ AuroraTxCore__DOT___zz_mem_port0;
    IData/*31:0*/ AuroraTxCore__DOT__crc32_1_crc_o;
    IData/*31:0*/ AuroraTxCore__DOT__axi_txdata_7;
    IData/*31:0*/ AuroraTxCore__DOT__axi_txdata_6;
    IData/*31:0*/ AuroraTxCore__DOT__axi_txdata_5;
    IData/*31:0*/ AuroraTxCore__DOT__axi_txdata_4;
    IData/*31:0*/ AuroraTxCore__DOT__axi_txdata_3;
    IData/*31:0*/ AuroraTxCore__DOT__axi_txdata_2;
    IData/*31:0*/ AuroraTxCore__DOT__axi_txdata_1;
    IData/*31:0*/ AuroraTxCore__DOT__axi_txhead;
    IData/*31:0*/ AuroraTxCore__DOT__crc_data;
    QData/*63:0*/ AuroraTxCore__DOT__stateMachine_state_string;
    IData/*31:0*/ AuroraTxCore__DOT__mem[256];
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*2:0*/ __Vtableidx1;
    CData/*7:0*/ __Vdly__AuroraTxCore__DOT__data_cnt;
    CData/*2:0*/ __Vdly__AuroraTxCore__DOT__stateMachine_state;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    IData/*31:0*/ __Vm_traceActivity;
    static QData/*63:0*/ __Vtable1_AuroraTxCore__DOT__stateMachine_state_string[8];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VAuroraTxCore__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VAuroraTxCore);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VAuroraTxCore(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VAuroraTxCore();
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
    static void _eval_initial_loop(VAuroraTxCore__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VAuroraTxCore__Syms* symsp, bool first);
  private:
    static QData _change_request(VAuroraTxCore__Syms* __restrict vlSymsp);
    static QData _change_request_1(VAuroraTxCore__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__7(VAuroraTxCore__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VAuroraTxCore__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VAuroraTxCore__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VAuroraTxCore__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(VAuroraTxCore__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__2(VAuroraTxCore__Syms* __restrict vlSymsp);
    static void _sequent__TOP__3(VAuroraTxCore__Syms* __restrict vlSymsp);
    static void _sequent__TOP__5(VAuroraTxCore__Syms* __restrict vlSymsp);
    static void _sequent__TOP__6(VAuroraTxCore__Syms* __restrict vlSymsp);
    static void _settle__TOP__4(VAuroraTxCore__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VAuroraTxCore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VAuroraTxCore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VAuroraTxCore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VAuroraTxCore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(VAuroraTxCore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__6(VAuroraTxCore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__7(VAuroraTxCore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__8(VAuroraTxCore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VAuroraTxCore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VAuroraTxCore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VAuroraTxCore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VAuroraTxCore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
