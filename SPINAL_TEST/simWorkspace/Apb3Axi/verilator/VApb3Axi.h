// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VAPB3AXI_H_
#define _VAPB3AXI_H_  // guard

#include "verilated.h"

//==========

class VApb3Axi__Syms;
class VApb3Axi_VerilatedVcd;


//----------

VL_MODULE(VApb3Axi) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(axiclk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(clk,0,0);
    VL_IN8(apb_PSEL,0,0);
    VL_IN8(apb_PENABLE,0,0);
    VL_OUT8(apb_PREADY,0,0);
    VL_IN8(apb_PWRITE,0,0);
    VL_IN8(axiwready,0,0);
    VL_OUT8(inter,0,0);
    VL_IN(apb_PADDR,19,0);
    VL_IN(apb_PWDATA,31,0);
    VL_OUT(apb_PRDATA,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ Apb3Axi__DOT__axictrl__DOT___zz_1;
        CData/*0:0*/ Apb3Axi__DOT__axictrl__DOT___zz_2;
        CData/*0:0*/ Apb3Axi__DOT__axictrl__DOT__bufferCC_7__DOT__buffers_1;
        CData/*0:0*/ Apb3Axi__DOT__axictrl__DOT__bufferCC_8__DOT__buffers_1;
        CData/*0:0*/ Apb3Axi__DOT__axictrl_axictrl_rx_stream_ready;
        CData/*0:0*/ Apb3Axi__DOT__busCtrl_doWrite;
        CData/*0:0*/ Apb3Axi__DOT__axictrl_axictrl_tx_flush_driver;
        CData/*0:0*/ Apb3Axi__DOT__axictrl_axictrl_tx_txstart_driver;
        CData/*0:0*/ Apb3Axi__DOT__axictrl_axictrl_rx_flush_driver;
        CData/*0:0*/ Apb3Axi__DOT___zz_axictrl_tx_stream_valid;
        CData/*0:0*/ Apb3Axi__DOT__axictrl__DOT__txBackend_axictrltx_axiw_valid;
        CData/*0:0*/ Apb3Axi__DOT__axictrl__DOT__txBackend_axictrltx_write_ready;
        CData/*0:0*/ Apb3Axi__DOT__axictrl__DOT__bufferCC_7__DOT__buffers_0;
        CData/*0:0*/ Apb3Axi__DOT__axictrl__DOT__bufferCC_8__DOT__buffers_0;
        CData/*0:0*/ Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT___zz_1;
        CData/*0:0*/ Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__pushCC_full;
        CData/*0:0*/ Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__io_push_fire_1;
        CData/*0:0*/ Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popCC_empty;
        CData/*0:0*/ Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT___zz_io_popOccupancy;
        CData/*0:0*/ Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT___zz_io_popOccupancy_1;
        CData/*0:0*/ Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT___zz_io_popOccupancy_2;
        CData/*0:0*/ Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT___zz_io_popOccupancy_3;
        CData/*0:0*/ Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT___zz_io_popOccupancy_4;
        CData/*0:0*/ Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT___zz_io_popOccupancy_5;
        CData/*0:0*/ Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT___zz_io_popOccupancy_6;
        CData/*1:0*/ Apb3Axi__DOT__axictrl__DOT__txBackend_axictrltx__DOT__stateMachine_state;
        CData/*0:0*/ Apb3Axi__DOT__axictrl__DOT__axictrl_tx_txstart_buffercc__DOT__buffers_0;
        CData/*0:0*/ Apb3Axi__DOT__axictrl__DOT__axictrl_tx_txstart_buffercc__DOT__buffers_1;
        CData/*0:0*/ Apb3Axi__DOT__axictrl__DOT__rxFrontend_axictrlrx__DOT__axir_payload_last_regNext;
        CData/*0:0*/ Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT___zz_1;
        CData/*0:0*/ Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__pushCC_full;
        CData/*0:0*/ Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__io_push_fire_1;
        CData/*0:0*/ Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popCC_empty;
        CData/*0:0*/ Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT___zz_io_popOccupancy;
        CData/*0:0*/ Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT___zz_io_popOccupancy_1;
        CData/*0:0*/ Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT___zz_io_popOccupancy_2;
        CData/*0:0*/ Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT___zz_io_popOccupancy_3;
        CData/*0:0*/ Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT___zz_io_popOccupancy_4;
        CData/*0:0*/ Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT___zz_io_popOccupancy_5;
        CData/*0:0*/ Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT___zz_io_popOccupancy_6;
        SData/*8:0*/ Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer_io_popOccupancy;
        SData/*8:0*/ Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__pushCC_pushPtr;
        SData/*8:0*/ Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__pushCC_pushPtrPlus;
        SData/*8:0*/ Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__pushCC_pushPtrGray;
        SData/*8:0*/ Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popCC_popPtr;
        SData/*8:0*/ Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popCC_popPtrPlus;
        SData/*8:0*/ Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popCC_popPtrGray;
        SData/*8:0*/ Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_0;
        SData/*8:0*/ Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1;
        SData/*8:0*/ Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__pushToPopGray_buffercc__DOT__buffers_0;
        SData/*8:0*/ Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__pushToPopGray_buffercc__DOT__buffers_1;
        SData/*8:0*/ Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__pushCC_pushPtr;
        SData/*8:0*/ Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__pushCC_pushPtrPlus;
        SData/*8:0*/ Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__pushCC_pushPtrGray;
        SData/*8:0*/ Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popCC_popPtr;
        SData/*8:0*/ Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popCC_popPtrPlus;
        SData/*8:0*/ Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popCC_popPtrGray;
        SData/*8:0*/ Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_0;
        SData/*8:0*/ Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__popToPushGray_buffercc__DOT__buffers_1;
        SData/*8:0*/ Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__pushToPopGray_buffercc__DOT__buffers_0;
        SData/*8:0*/ Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__pushToPopGray_buffercc__DOT__buffers_1;
        IData/*31:0*/ Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT___zz_ram_port1;
        IData/*31:0*/ Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT___zz_ram_port1;
        IData/*31:0*/ Apb3Axi__DOT__axictrl__DOT__txFrontend_buffer__DOT__ram[256];
    };
    struct {
        IData/*31:0*/ Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__ram[256];
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*7:0*/ __Vdlyvdim0__Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__ram__v0;
    CData/*0:0*/ __VinpClk__TOP__Apb3Axi__DOT__axictrl__DOT___zz_1;
    CData/*0:0*/ __VinpClk__TOP__Apb3Axi__DOT__axictrl__DOT___zz_2;
    CData/*0:0*/ __VinpClk__TOP__Apb3Axi__DOT__axictrl__DOT__bufferCC_7__DOT__buffers_1;
    CData/*0:0*/ __VinpClk__TOP__Apb3Axi__DOT__axictrl__DOT__bufferCC_8__DOT__buffers_1;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__Apb3Axi__DOT__axictrl__DOT___zz_1;
    CData/*0:0*/ __Vclklast__TOP__axiclk;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__Apb3Axi__DOT__axictrl__DOT___zz_2;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__Apb3Axi__DOT__axictrl__DOT__bufferCC_7__DOT__buffers_1;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__Apb3Axi__DOT__axictrl__DOT__bufferCC_8__DOT__buffers_1;
    CData/*0:0*/ __Vchglast__TOP__Apb3Axi__DOT__axictrl__DOT___zz_1;
    CData/*0:0*/ __Vchglast__TOP__Apb3Axi__DOT__axictrl__DOT___zz_2;
    CData/*0:0*/ __Vchglast__TOP__Apb3Axi__DOT__axictrl__DOT__bufferCC_7__DOT__buffers_1;
    CData/*0:0*/ __Vchglast__TOP__Apb3Axi__DOT__axictrl__DOT__bufferCC_8__DOT__buffers_1;
    IData/*31:0*/ __Vdlyvval__Apb3Axi__DOT__axictrl__DOT__rxFrontend_buffer__DOT__ram__v0;
    IData/*31:0*/ __Vm_traceActivity;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VApb3Axi__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VApb3Axi);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VApb3Axi(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VApb3Axi();
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
    static void _eval_initial_loop(VApb3Axi__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VApb3Axi__Syms* symsp, bool first);
  private:
    static QData _change_request(VApb3Axi__Syms* __restrict vlSymsp);
    static QData _change_request_1(VApb3Axi__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__12(VApb3Axi__Syms* __restrict vlSymsp);
    static void _combo__TOP__16(VApb3Axi__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VApb3Axi__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VApb3Axi__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VApb3Axi__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(VApb3Axi__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__10(VApb3Axi__Syms* __restrict vlSymsp);
    static void _sequent__TOP__11(VApb3Axi__Syms* __restrict vlSymsp);
    static void _sequent__TOP__13(VApb3Axi__Syms* __restrict vlSymsp);
    static void _sequent__TOP__14(VApb3Axi__Syms* __restrict vlSymsp);
    static void _sequent__TOP__15(VApb3Axi__Syms* __restrict vlSymsp);
    static void _sequent__TOP__4(VApb3Axi__Syms* __restrict vlSymsp);
    static void _sequent__TOP__5(VApb3Axi__Syms* __restrict vlSymsp);
    static void _sequent__TOP__6(VApb3Axi__Syms* __restrict vlSymsp);
    static void _sequent__TOP__7(VApb3Axi__Syms* __restrict vlSymsp);
    static void _sequent__TOP__8(VApb3Axi__Syms* __restrict vlSymsp);
    static void _settle__TOP__9(VApb3Axi__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VApb3Axi__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__10(VApb3Axi__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__11(VApb3Axi__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__12(VApb3Axi__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__13(VApb3Axi__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__14(VApb3Axi__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__16(VApb3Axi__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__17(VApb3Axi__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__18(VApb3Axi__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__19(VApb3Axi__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VApb3Axi__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__20(VApb3Axi__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__21(VApb3Axi__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__22(VApb3Axi__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__23(VApb3Axi__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VApb3Axi__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VApb3Axi__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(VApb3Axi__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__6(VApb3Axi__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__7(VApb3Axi__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__8(VApb3Axi__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__9(VApb3Axi__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VApb3Axi__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VApb3Axi__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__15(VApb3Axi__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VApb3Axi__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VApb3Axi__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
