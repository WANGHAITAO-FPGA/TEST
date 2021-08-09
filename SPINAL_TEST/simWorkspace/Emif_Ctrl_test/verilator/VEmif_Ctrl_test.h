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
    VL_OUT8(emif_emif_data_writeEnable,0,0);
    VL_IN8(emif_emif_cs,0,0);
    VL_IN8(emif_emif_we,0,0);
    VL_IN8(emif_emif_oe,0,0);
    VL_OUT8(apb_PSEL,0,0);
    VL_OUT8(apb_PENABLE,0,0);
    VL_IN8(apb_PREADY,0,0);
    VL_OUT8(apb_PWRITE,0,0);
    VL_IN8(apb_PSLVERROR,0,0);
    VL_IN(emif_emif_addr,23,0);
    VL_IN(emif_emif_data_read,31,0);
    VL_OUT(emif_emif_data_write,31,0);
    VL_OUT(apb_PADDR,19,0);
    VL_OUT(apb_PWDATA,31,0);
    VL_IN(apb_PRDATA,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ Emif_Ctrl_test__DOT__penable;
    CData/*0:0*/ Emif_Ctrl_test__DOT__penable_regNext;
    IData/*31:0*/ Emif_Ctrl_test__DOT__emifdatatemp;
    IData/*31:0*/ Emif_Ctrl_test__DOT__apb_PRDATA_regNextWhen;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    IData/*31:0*/ __Vm_traceActivity;
    
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
    static void _sequent__TOP__4(VEmif_Ctrl_test__Syms* __restrict vlSymsp);
    static void _sequent__TOP__5(VEmif_Ctrl_test__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(VEmif_Ctrl_test__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VEmif_Ctrl_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VEmif_Ctrl_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VEmif_Ctrl_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VEmif_Ctrl_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VEmif_Ctrl_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VEmif_Ctrl_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VEmif_Ctrl_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VEmif_Ctrl_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
