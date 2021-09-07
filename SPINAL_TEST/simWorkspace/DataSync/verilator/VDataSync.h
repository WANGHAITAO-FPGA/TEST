// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VDATASYNC_H_
#define _VDATASYNC_H_  // guard

#include "verilated.h"

//==========

class VDataSync__Syms;
class VDataSync_VerilatedVcd;


//----------

VL_MODULE(VDataSync) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk_in,0,0);
    VL_IN8(clk_out,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(datain_valid,0,0);
    VL_OUT8(datain_ready,0,0);
    VL_IN16(datain_payload,15,0);
    VL_OUT16(dataout,15,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ DataSync__DOT__streamCCByToggle_1_io_input_ready;
    CData/*0:0*/ DataSync__DOT__streamCCByToggle_1__DOT__pushArea_target;
    CData/*0:0*/ DataSync__DOT__streamCCByToggle_1__DOT__io_input_fire;
    CData/*0:0*/ DataSync__DOT__streamCCByToggle_1__DOT__popArea_stream_valid;
    CData/*0:0*/ DataSync__DOT__streamCCByToggle_1__DOT__popArea_stream_ready;
    CData/*0:0*/ DataSync__DOT__streamCCByToggle_1__DOT__popArea_hit;
    CData/*0:0*/ DataSync__DOT__streamCCByToggle_1__DOT__popArea_stream_rValid;
    CData/*0:0*/ DataSync__DOT__streamCCByToggle_1__DOT__outHitSignal_buffercc__DOT__buffers_0;
    CData/*0:0*/ DataSync__DOT__streamCCByToggle_1__DOT__outHitSignal_buffercc__DOT__buffers_1;
    CData/*0:0*/ DataSync__DOT__streamCCByToggle_1__DOT__pushArea_target_buffercc__DOT__buffers_0;
    CData/*0:0*/ DataSync__DOT__streamCCByToggle_1__DOT__pushArea_target_buffercc__DOT__buffers_1;
    SData/*15:0*/ DataSync__DOT__streamCCByToggle_1__DOT__pushArea_data;
    SData/*15:0*/ DataSync__DOT__streamCCByToggle_1__DOT__popArea_stream_rData;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vdly__DataSync__DOT__streamCCByToggle_1__DOT__pushArea_target;
    CData/*0:0*/ __Vclklast__TOP__clk_in;
    CData/*0:0*/ __Vclklast__TOP__clk_out;
    CData/*0:0*/ __Vclklast__TOP__reset;
    IData/*31:0*/ __Vm_traceActivity;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VDataSync__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VDataSync);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VDataSync(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VDataSync();
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
    static void _eval_initial_loop(VDataSync__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VDataSync__Syms* symsp, bool first);
  private:
    static QData _change_request(VDataSync__Syms* __restrict vlSymsp);
    static QData _change_request_1(VDataSync__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__9(VDataSync__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VDataSync__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VDataSync__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VDataSync__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__2(VDataSync__Syms* __restrict vlSymsp);
    static void _sequent__TOP__3(VDataSync__Syms* __restrict vlSymsp);
    static void _sequent__TOP__4(VDataSync__Syms* __restrict vlSymsp);
    static void _sequent__TOP__6(VDataSync__Syms* __restrict vlSymsp);
    static void _sequent__TOP__7(VDataSync__Syms* __restrict vlSymsp);
    static void _sequent__TOP__8(VDataSync__Syms* __restrict vlSymsp);
    static void _settle__TOP__5(VDataSync__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VDataSync__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__10(VDataSync__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__11(VDataSync__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VDataSync__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VDataSync__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VDataSync__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(VDataSync__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__6(VDataSync__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__7(VDataSync__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__8(VDataSync__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__9(VDataSync__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VDataSync__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VDataSync__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VDataSync__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VDataSync__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
