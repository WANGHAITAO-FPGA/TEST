// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VGTX_TOP_H_
#define _VGTX_TOP_H_  // guard

#include "verilated_heavy.h"

//==========

class VGtx_Top__Syms;
class VGtx_Top_VerilatedVcd;


//----------

VL_MODULE(VGtx_Top) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(axiw_valid,0,0);
    VL_IN8(axiw_ready,0,0);
    VL_OUT8(axiw_payload_last,0,0);
    VL_IN8(tx_packet_req,0,0);
    VL_IN8(tx_packet_trigger,0,0);
    VL_OUT(axiw_payload_data,31,0);
    VL_IN(tx_head,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ Gtx_Top__DOT__gtxtx_s_axi_tx_tlast;
    CData/*0:0*/ Gtx_Top__DOT__gtxtx_s_axi_tx_tvalid;
    CData/*0:0*/ Gtx_Top__DOT__gtxtx__DOT__ireq_advance_condition;
    CData/*5:0*/ Gtx_Top__DOT__gtxtx__DOT__current_beat_cnt;
    CData/*7:0*/ Gtx_Top__DOT__gtxtx__DOT__tx_addr_temp;
    SData/*8:0*/ Gtx_Top__DOT__gtxtx__DOT__current_state;
    SData/*8:0*/ Gtx_Top__DOT__gtxtx__DOT__next_state;
    IData/*31:0*/ Gtx_Top__DOT___zz_area_mem_port0;
    IData/*31:0*/ Gtx_Top__DOT__gtxtx_s_axi_tx_tdata;
    IData/*31:0*/ Gtx_Top__DOT__gtxtx_crc_data;
    IData/*31:0*/ Gtx_Top__DOT__area_mem[256];
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*5:0*/ __Vdly__Gtx_Top__DOT__gtxtx__DOT__current_beat_cnt;
    CData/*7:0*/ __Vdly__Gtx_Top__DOT__gtxtx__DOT__tx_addr_temp;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    IData/*31:0*/ __Vm_traceActivity;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VGtx_Top__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VGtx_Top);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VGtx_Top(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VGtx_Top();
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
    static void _eval_initial_loop(VGtx_Top__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VGtx_Top__Syms* symsp, bool first);
  private:
    static QData _change_request(VGtx_Top__Syms* __restrict vlSymsp);
    static QData _change_request_1(VGtx_Top__Syms* __restrict vlSymsp);
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VGtx_Top__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VGtx_Top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VGtx_Top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__5(VGtx_Top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__2(VGtx_Top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__3(VGtx_Top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__4(VGtx_Top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__7(VGtx_Top__Syms* __restrict vlSymsp);
    static void _settle__TOP__6(VGtx_Top__Syms* __restrict vlSymsp);
    static void traceChgThis(VGtx_Top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VGtx_Top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VGtx_Top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VGtx_Top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(VGtx_Top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__6(VGtx_Top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__7(VGtx_Top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__8(VGtx_Top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VGtx_Top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VGtx_Top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VGtx_Top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VGtx_Top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
