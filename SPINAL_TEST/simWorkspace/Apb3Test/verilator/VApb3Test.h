// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VAPB3TEST_H_
#define _VAPB3TEST_H_  // guard

#include "verilated.h"

//==========

class VApb3Test__Syms;
class VApb3Test_VerilatedVcd;


//----------

VL_MODULE(VApb3Test) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(apb3_PSEL,0,0);
    VL_IN8(apb3_PENABLE,0,0);
    VL_OUT8(apb3_PREADY,0,0);
    VL_IN8(apb3_PWRITE,0,0);
    VL_OUT8(apb3_PSLVERROR,0,0);
    VL_IN(apb3_PADDR,19,0);
    VL_IN(apb3_PWDATA,31,0);
    VL_OUT(apb3_PRDATA,31,0);
    VL_IN(gpio_read,31,0);
    VL_OUT(gpio_write,31,0);
    VL_OUT(gpio_writeEnable,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ Apb3Test__DOT__apb3_decoder_io_input_PREADY;
    CData/*0:0*/ Apb3Test__DOT__apb3_decoder_io_input_PSLVERROR;
    CData/*1:0*/ Apb3Test__DOT__apb3_decoder_io_output_PSEL;
    CData/*0:0*/ Apb3Test__DOT__apb3tobram_1__DOT__when_Apb3ToBram_l41;
    CData/*0:0*/ Apb3Test__DOT__gpioCtrl__DOT__ctrl_doWrite;
    CData/*0:0*/ Apb3Test__DOT__apb3_decoder__DOT__when_Apb3Decoder_l84;
    CData/*0:0*/ Apb3Test__DOT__apb3Router_1__DOT__selIndex;
    IData/*31:0*/ Apb3Test__DOT___zz_mem_port1;
    IData/*31:0*/ Apb3Test__DOT__gpioCtrl_io_apb_PRDATA;
    IData/*31:0*/ Apb3Test__DOT__gpioCtrl__DOT__io_gpio_write_driver;
    IData/*31:0*/ Apb3Test__DOT__gpioCtrl__DOT__io_gpio_writeEnable_driver;
    IData/*31:0*/ Apb3Test__DOT__gpioCtrl__DOT__io_gpio_read_buffercc__DOT__buffers_0;
    IData/*31:0*/ Apb3Test__DOT__gpioCtrl__DOT__io_gpio_read_buffercc__DOT__buffers_1;
    IData/*31:0*/ Apb3Test__DOT__mem[256];
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    IData/*31:0*/ __Vm_traceActivity;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VApb3Test__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VApb3Test);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VApb3Test(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VApb3Test();
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
    static void _eval_initial_loop(VApb3Test__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VApb3Test__Syms* symsp, bool first);
  private:
    static QData _change_request(VApb3Test__Syms* __restrict vlSymsp);
    static QData _change_request_1(VApb3Test__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__4(VApb3Test__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VApb3Test__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VApb3Test__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VApb3Test__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(VApb3Test__Syms* __restrict vlSymsp);
    static void _sequent__TOP__2(VApb3Test__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(VApb3Test__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VApb3Test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VApb3Test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VApb3Test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VApb3Test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(VApb3Test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__6(VApb3Test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VApb3Test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VApb3Test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VApb3Test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VApb3Test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
