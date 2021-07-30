// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VPOST_CIR_CORDIC_H_
#define _VPOST_CIR_CORDIC_H_  // guard

#include "verilated.h"

//==========

class Vpost_cir_cordic__Syms;
class Vpost_cir_cordic_VerilatedVcd;


//----------

VL_MODULE(Vpost_cir_cordic) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_OUT16(sin_out,15,0);
    VL_OUT16(cos_out,15,0);
    VL_IN(data_in,16,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*1:0*/ post_cir_cordic__DOT__pre_cir_cordic_1__DOT__flag_temp;
        CData/*0:0*/ post_cir_cordic__DOT__pre_cir_cordic_1__DOT__when_SinTest_l30;
        CData/*0:0*/ post_cir_cordic__DOT__pre_cir_cordic_1__DOT__when_SinTest_l33;
        CData/*1:0*/ post_cir_cordic__DOT__cir_cordic_calculate_1__DOT__flag_temp_0;
        CData/*1:0*/ post_cir_cordic__DOT__cir_cordic_calculate_1__DOT__flag_temp_1;
        CData/*1:0*/ post_cir_cordic__DOT__cir_cordic_calculate_1__DOT__flag_temp_2;
        CData/*1:0*/ post_cir_cordic__DOT__cir_cordic_calculate_1__DOT__flag_temp_3;
        CData/*1:0*/ post_cir_cordic__DOT__cir_cordic_calculate_1__DOT__flag_temp_4;
        CData/*1:0*/ post_cir_cordic__DOT__cir_cordic_calculate_1__DOT__flag_temp_5;
        CData/*1:0*/ post_cir_cordic__DOT__cir_cordic_calculate_1__DOT__flag_temp_6;
        CData/*1:0*/ post_cir_cordic__DOT__cir_cordic_calculate_1__DOT__flag_temp_7;
        CData/*1:0*/ post_cir_cordic__DOT__cir_cordic_calculate_1__DOT__flag_temp_8;
        CData/*1:0*/ post_cir_cordic__DOT__cir_cordic_calculate_1__DOT__flag_temp_9;
        CData/*1:0*/ post_cir_cordic__DOT__cir_cordic_calculate_1__DOT__flag_temp_10;
        CData/*1:0*/ post_cir_cordic__DOT__cir_cordic_calculate_1__DOT__flag_temp_11;
        CData/*1:0*/ post_cir_cordic__DOT__cir_cordic_calculate_1__DOT__flag_temp_12;
        CData/*1:0*/ post_cir_cordic__DOT__cir_cordic_calculate_1__DOT__flag_temp_13;
        CData/*1:0*/ post_cir_cordic__DOT__cir_cordic_calculate_1__DOT__flag_temp_14;
        SData/*15:0*/ post_cir_cordic__DOT__sin_temp;
        SData/*15:0*/ post_cir_cordic__DOT__cos_temp;
        SData/*15:0*/ post_cir_cordic__DOT__cir_cordic_calculate_1__DOT__Xi_temp_0;
        SData/*15:0*/ post_cir_cordic__DOT__cir_cordic_calculate_1__DOT__Xi_temp_1;
        SData/*15:0*/ post_cir_cordic__DOT__cir_cordic_calculate_1__DOT__Xi_temp_2;
        SData/*15:0*/ post_cir_cordic__DOT__cir_cordic_calculate_1__DOT__Xi_temp_3;
        SData/*15:0*/ post_cir_cordic__DOT__cir_cordic_calculate_1__DOT__Xi_temp_4;
        SData/*15:0*/ post_cir_cordic__DOT__cir_cordic_calculate_1__DOT__Xi_temp_5;
        SData/*15:0*/ post_cir_cordic__DOT__cir_cordic_calculate_1__DOT__Xi_temp_6;
        SData/*15:0*/ post_cir_cordic__DOT__cir_cordic_calculate_1__DOT__Xi_temp_7;
        SData/*15:0*/ post_cir_cordic__DOT__cir_cordic_calculate_1__DOT__Xi_temp_8;
        SData/*15:0*/ post_cir_cordic__DOT__cir_cordic_calculate_1__DOT__Xi_temp_9;
        SData/*15:0*/ post_cir_cordic__DOT__cir_cordic_calculate_1__DOT__Xi_temp_10;
        SData/*15:0*/ post_cir_cordic__DOT__cir_cordic_calculate_1__DOT__Xi_temp_11;
        SData/*15:0*/ post_cir_cordic__DOT__cir_cordic_calculate_1__DOT__Xi_temp_12;
        SData/*15:0*/ post_cir_cordic__DOT__cir_cordic_calculate_1__DOT__Xi_temp_13;
        SData/*15:0*/ post_cir_cordic__DOT__cir_cordic_calculate_1__DOT__Xi_temp_14;
        SData/*15:0*/ post_cir_cordic__DOT__cir_cordic_calculate_1__DOT__Yi_temp_0;
        SData/*15:0*/ post_cir_cordic__DOT__cir_cordic_calculate_1__DOT__Yi_temp_1;
        SData/*15:0*/ post_cir_cordic__DOT__cir_cordic_calculate_1__DOT__Yi_temp_2;
        SData/*15:0*/ post_cir_cordic__DOT__cir_cordic_calculate_1__DOT__Yi_temp_3;
        SData/*15:0*/ post_cir_cordic__DOT__cir_cordic_calculate_1__DOT__Yi_temp_4;
        SData/*15:0*/ post_cir_cordic__DOT__cir_cordic_calculate_1__DOT__Yi_temp_5;
        SData/*15:0*/ post_cir_cordic__DOT__cir_cordic_calculate_1__DOT__Yi_temp_6;
        SData/*15:0*/ post_cir_cordic__DOT__cir_cordic_calculate_1__DOT__Yi_temp_7;
        SData/*15:0*/ post_cir_cordic__DOT__cir_cordic_calculate_1__DOT__Yi_temp_8;
        SData/*15:0*/ post_cir_cordic__DOT__cir_cordic_calculate_1__DOT__Yi_temp_9;
        SData/*15:0*/ post_cir_cordic__DOT__cir_cordic_calculate_1__DOT__Yi_temp_10;
        SData/*15:0*/ post_cir_cordic__DOT__cir_cordic_calculate_1__DOT__Yi_temp_11;
        SData/*15:0*/ post_cir_cordic__DOT__cir_cordic_calculate_1__DOT__Yi_temp_12;
        SData/*15:0*/ post_cir_cordic__DOT__cir_cordic_calculate_1__DOT__Yi_temp_13;
        SData/*15:0*/ post_cir_cordic__DOT__cir_cordic_calculate_1__DOT__Yi_temp_14;
        IData/*16:0*/ post_cir_cordic__DOT__pre_cir_cordic_1__DOT__compare_data;
        IData/*16:0*/ post_cir_cordic__DOT__pre_cir_cordic_1__DOT__zero;
        IData/*16:0*/ post_cir_cordic__DOT__pre_cir_cordic_1__DOT__input_data;
        IData/*16:0*/ post_cir_cordic__DOT__pre_cir_cordic_1__DOT__temp;
        IData/*16:0*/ post_cir_cordic__DOT__pre_cir_cordic_1__DOT__Pi_data;
        IData/*16:0*/ post_cir_cordic__DOT__pre_cir_cordic_1__DOT__NgPi_data;
        IData/*16:0*/ post_cir_cordic__DOT__cir_cordic_calculate_1__DOT__Zi_temp_0;
        IData/*16:0*/ post_cir_cordic__DOT__cir_cordic_calculate_1__DOT__Zi_temp_1;
        IData/*16:0*/ post_cir_cordic__DOT__cir_cordic_calculate_1__DOT__Zi_temp_2;
        IData/*16:0*/ post_cir_cordic__DOT__cir_cordic_calculate_1__DOT__Zi_temp_3;
        IData/*16:0*/ post_cir_cordic__DOT__cir_cordic_calculate_1__DOT__Zi_temp_4;
        IData/*16:0*/ post_cir_cordic__DOT__cir_cordic_calculate_1__DOT__Zi_temp_5;
        IData/*16:0*/ post_cir_cordic__DOT__cir_cordic_calculate_1__DOT__Zi_temp_6;
        IData/*16:0*/ post_cir_cordic__DOT__cir_cordic_calculate_1__DOT__Zi_temp_7;
    };
    struct {
        IData/*16:0*/ post_cir_cordic__DOT__cir_cordic_calculate_1__DOT__Zi_temp_8;
        IData/*16:0*/ post_cir_cordic__DOT__cir_cordic_calculate_1__DOT__Zi_temp_9;
        IData/*16:0*/ post_cir_cordic__DOT__cir_cordic_calculate_1__DOT__Zi_temp_10;
        IData/*16:0*/ post_cir_cordic__DOT__cir_cordic_calculate_1__DOT__Zi_temp_11;
        IData/*16:0*/ post_cir_cordic__DOT__cir_cordic_calculate_1__DOT__Zi_temp_12;
        IData/*16:0*/ post_cir_cordic__DOT__cir_cordic_calculate_1__DOT__Zi_temp_13;
        IData/*16:0*/ post_cir_cordic__DOT__cir_cordic_calculate_1__DOT__Zi_temp_14;
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk;
    IData/*31:0*/ __Vm_traceActivity;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vpost_cir_cordic__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vpost_cir_cordic);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vpost_cir_cordic(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vpost_cir_cordic();
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
    static void _eval_initial_loop(Vpost_cir_cordic__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vpost_cir_cordic__Syms* symsp, bool first);
  private:
    static QData _change_request(Vpost_cir_cordic__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vpost_cir_cordic__Syms* __restrict vlSymsp);
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vpost_cir_cordic__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vpost_cir_cordic__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vpost_cir_cordic__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__2(Vpost_cir_cordic__Syms* __restrict vlSymsp);
    static void _sequent__TOP__3(Vpost_cir_cordic__Syms* __restrict vlSymsp);
    static void _sequent__TOP__4(Vpost_cir_cordic__Syms* __restrict vlSymsp);
    static void _sequent__TOP__5(Vpost_cir_cordic__Syms* __restrict vlSymsp);
    static void _settle__TOP__6(Vpost_cir_cordic__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(Vpost_cir_cordic__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(Vpost_cir_cordic__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(Vpost_cir_cordic__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(Vpost_cir_cordic__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(Vpost_cir_cordic__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(Vpost_cir_cordic__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(Vpost_cir_cordic__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(Vpost_cir_cordic__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
