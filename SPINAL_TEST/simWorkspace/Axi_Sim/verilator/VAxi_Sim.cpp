// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAxi_Sim.h for the primary calling header

#include "VAxi_Sim.h"
#include "VAxi_Sim__Syms.h"

//==========

void VAxi_Sim::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VAxi_Sim::eval\n"); );
    VAxi_Sim__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VAxi_Sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
#ifdef VM_TRACE
    // Tracing
#endif  // VM_TRACE
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("D:/CODE_LIB/TEST/SPINAL_TEST/tmp/job_1/Axi_Sim.v", 18, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VAxi_Sim::_eval_initial_loop(VAxi_Sim__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("D:/CODE_LIB/TEST/SPINAL_TEST/tmp/job_1/Axi_Sim.v", 18, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VAxi_Sim::_sequent__TOP__2(VAxi_Sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxi_Sim::_sequent__TOP__2\n"); );
    VAxi_Sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdlyvdim0__Axi_Sim__DOT__area_blockram__DOT__bram__v0;
    CData/*0:0*/ __Vdlyvset__Axi_Sim__DOT__area_blockram__DOT__bram__v0;
    CData/*7:0*/ __Vdlyvdim0__Axi_Sim__DOT__area_blockram__DOT__bram__v1;
    CData/*0:0*/ __Vdlyvset__Axi_Sim__DOT__area_blockram__DOT__bram__v1;
    IData/*31:0*/ __Vdlyvval__Axi_Sim__DOT__area_blockram__DOT__bram__v0;
    IData/*31:0*/ __Vdlyvval__Axi_Sim__DOT__area_blockram__DOT__bram__v1;
    // Body
    vlTOPp->__Vdly__Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder__DOT__errorSlave__DOT__remaining 
        = vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder__DOT__errorSlave__DOT__remaining;
    vlTOPp->__Vdly__Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__lenBurst 
        = vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__lenBurst;
    __Vdlyvset__Axi_Sim__DOT__area_blockram__DOT__bram__v1 = 0U;
    __Vdlyvset__Axi_Sim__DOT__area_blockram__DOT__bram__v0 = 0U;
    if (((IData)(vlTOPp->bram_en) & (0U == (IData)(vlTOPp->bram_we)))) {
        vlTOPp->Axi_Sim__DOT__area_blockram__DOT___zz_bram_port2 
            = vlTOPp->Axi_Sim__DOT__area_blockram__DOT__bram
            [vlTOPp->bram_addr];
    }
    if (vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__errorSlave__DOT__io_axi_aw_fire) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__errorSlave__DOT__id 
            = vlTOPp->axi_aw_payload_id;
    }
    if (vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder__DOT__errorSlave__DOT__io_axi_ar_fire) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder__DOT__errorSlave__DOT__id 
            = vlTOPp->axi_ar_payload_id;
    }
    if (vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder__DOT__errorSlave__DOT__io_axi_ar_fire) {
        vlTOPp->__Vdly__Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder__DOT__errorSlave__DOT__remaining 
            = vlTOPp->axi_ar_payload_len;
    }
    if (vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder__DOT__errorSlave__DOT__sendRsp) {
        if (vlTOPp->axi_r_ready) {
            vlTOPp->__Vdly__Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder__DOT__errorSlave__DOT__remaining 
                = (0xffU & ((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder__DOT__errorSlave__DOT__remaining) 
                            - (IData)(1U)));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter_io_output_w_rValid)))) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter_io_output_w_rData_last 
            = vlTOPp->axi_w_payload_last;
    }
    if ((1U & (~ (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter_io_output_w_rValid)))) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter_io_output_w_rData_strb 
            = vlTOPp->axi_w_payload_strb;
    }
    if (vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_w_s2mPipe_ready) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_w_s2mPipe_rData_strb 
            = ((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_w_rValid)
                ? (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_w_rData_strb)
                : (IData)(vlTOPp->axi_w_payload_strb));
    }
    if ((1U & (~ (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter_io_output_arw_rValid)))) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter_io_output_arw_rData_burst 
            = ((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter__DOT__maskRouted_0)
                ? (IData)(vlTOPp->axi_ar_payload_burst)
                : (IData)(vlTOPp->axi_aw_payload_burst));
    }
    if ((1U & (~ (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter_io_output_arw_rValid)))) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter_io_output_arw_rData_size 
            = ((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter__DOT__maskRouted_0)
                ? (IData)(vlTOPp->axi_ar_payload_size)
                : (IData)(vlTOPp->axi_aw_payload_size));
    }
    if ((1U & (~ (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter_io_output_arw_rValid)))) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter_io_output_arw_rData_len 
            = ((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter__DOT__maskRouted_0)
                ? (IData)(vlTOPp->axi_ar_payload_len)
                : (IData)(vlTOPp->axi_aw_payload_len));
    }
    if ((0U == (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__phase))) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__arw_burst 
            = vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_arw_rData_burst;
    }
    if ((0U == (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__phase))) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__arw_id 
            = vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_arw_rData_id;
    }
    if ((0U == (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge__DOT__phase))) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge__DOT__id 
            = vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter_io_output_arw_rData_id;
    }
    if ((0U == (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__phase))) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__arw_size 
            = vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_arw_rData_size;
    }
    if ((0U == (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__phase))) {
        vlTOPp->__Vdly__Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__lenBurst 
            = vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_arw_rData_len;
    } else {
        if ((1U != (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__phase))) {
            if ((2U != (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__phase))) {
                if ((1U & (~ (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__arw_write)))) {
                    if (vlTOPp->axi_r_ready) {
                        if ((1U & (~ (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__when_Axi4SharedToBRAM_l149)))) {
                            vlTOPp->__Vdly__Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__lenBurst 
                                = (0xffU & ((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__lenBurst) 
                                            - (IData)(1U)));
                        }
                    }
                }
            }
        }
    }
    if ((0U != (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__phase))) {
        if ((1U != (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__phase))) {
            if ((2U == (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__phase))) {
                vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__readData 
                    = vlTOPp->Axi_Sim__DOT__area_blockram__DOT___zz_bram_port0;
            }
        }
    }
    if (((IData)(vlTOPp->bram_en) & (0xfU == (IData)(vlTOPp->bram_we)))) {
        __Vdlyvval__Axi_Sim__DOT__area_blockram__DOT__bram__v1 
            = vlTOPp->bram_wrdata;
        __Vdlyvset__Axi_Sim__DOT__area_blockram__DOT__bram__v1 = 1U;
        __Vdlyvdim0__Axi_Sim__DOT__area_blockram__DOT__bram__v1 
            = vlTOPp->bram_addr;
    }
    if (((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_bram_en) 
         & (0xfU == ((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__arw_write)
                      ? 0xfU : 0U)))) {
        __Vdlyvval__Axi_Sim__DOT__area_blockram__DOT__bram__v0 
            = vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_w_s2mPipe_rData_data;
        __Vdlyvset__Axi_Sim__DOT__area_blockram__DOT__bram__v0 = 1U;
        __Vdlyvdim0__Axi_Sim__DOT__area_blockram__DOT__bram__v0 
            = (0xffU & vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__arw_addr);
    }
    if ((0U != (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge__DOT__phase))) {
        if ((1U == (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge__DOT__phase))) {
            vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge__DOT__readedData 
                = vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apb3busif_readData;
        }
    }
    vlTOPp->bram_rddata = vlTOPp->Axi_Sim__DOT__area_blockram__DOT___zz_bram_port2;
    if ((1U & (~ (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_w_rValid)))) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_w_rData_strb 
            = vlTOPp->axi_w_payload_strb;
    }
    if ((1U & (~ (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_arw_rValid)))) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_arw_rData_burst 
            = ((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter__DOT__maskRouted_0)
                ? (IData)(vlTOPp->axi_ar_payload_burst)
                : (IData)(vlTOPp->axi_aw_payload_burst));
    }
    if ((1U & (~ (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_arw_rValid)))) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_arw_rData_id 
            = ((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter__DOT__maskRouted_0)
                ? (IData)(vlTOPp->axi_ar_payload_id)
                : (IData)(vlTOPp->axi_aw_payload_id));
    }
    if ((1U & (~ (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter_io_output_arw_rValid)))) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter_io_output_arw_rData_id 
            = ((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter__DOT__maskRouted_0)
                ? (IData)(vlTOPp->axi_ar_payload_id)
                : (IData)(vlTOPp->axi_aw_payload_id));
    }
    if ((1U & (~ (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_arw_rValid)))) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_arw_rData_size 
            = ((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter__DOT__maskRouted_0)
                ? (IData)(vlTOPp->axi_ar_payload_size)
                : (IData)(vlTOPp->axi_aw_payload_size));
    }
    if (((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_bram_en) 
         & (0U == ((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__arw_write)
                    ? 0xfU : 0U)))) {
        vlTOPp->Axi_Sim__DOT__area_blockram__DOT___zz_bram_port0 
            = vlTOPp->Axi_Sim__DOT__area_blockram__DOT__bram
            [(0xffU & vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__arw_addr)];
    }
    if (vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_w_s2mPipe_ready) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_w_s2mPipe_rData_data 
            = ((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_w_rValid)
                ? vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_w_rData_data
                : vlTOPp->axi_w_payload_data);
    }
    if (__Vdlyvset__Axi_Sim__DOT__area_blockram__DOT__bram__v0) {
        vlTOPp->Axi_Sim__DOT__area_blockram__DOT__bram[__Vdlyvdim0__Axi_Sim__DOT__area_blockram__DOT__bram__v0] 
            = __Vdlyvval__Axi_Sim__DOT__area_blockram__DOT__bram__v0;
    }
    if (__Vdlyvset__Axi_Sim__DOT__area_blockram__DOT__bram__v1) {
        vlTOPp->Axi_Sim__DOT__area_blockram__DOT__bram[__Vdlyvdim0__Axi_Sim__DOT__area_blockram__DOT__bram__v1] 
            = __Vdlyvval__Axi_Sim__DOT__area_blockram__DOT__bram__v1;
    }
    if ((0U == (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__phase))) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__arw_addr 
            = vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_arw_rData_addr;
    } else {
        if ((1U == (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__phase))) {
            if (vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__when_Axi4SharedToBRAM_l121) {
                vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__arw_addr 
                    = vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__Axi4Incr_result;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_w_rValid)))) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_w_rData_data 
            = vlTOPp->axi_w_payload_data;
    }
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__Axi4Incr_base 
        = (0xfffU & (vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__arw_addr 
                     & (~ (((1U < (3U & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__arw_size))) 
                            << 1U) | (0U < (3U & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__arw_size)))))));
}

VL_INLINE_OPT void VAxi_Sim::_sequent__TOP__3(VAxi_Sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxi_Sim::_sequent__TOP__3\n"); );
    VAxi_Sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_arw_rValid)))) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_arw_rData_addr 
            = ((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter__DOT__maskRouted_0)
                ? vlTOPp->axi_ar_payload_addr : vlTOPp->axi_aw_payload_addr);
    }
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__Axi4Incr_baseIncr 
        = (0xfffU & ((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__Axi4Incr_base) 
                     + (((2U == (3U & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__arw_size))) 
                         << 2U) | (((1U == (3U & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__arw_size))) 
                                    << 1U) | (0U == 
                                              (3U & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__arw_size)))))));
}

VL_INLINE_OPT void VAxi_Sim::_sequent__TOP__5(VAxi_Sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxi_Sim::_sequent__TOP__5\n"); );
    VAxi_Sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx1;
    // Body
    vlTOPp->__Vdly__Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder__DOT__errorSlave__DOT__sendRsp 
        = vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder__DOT__errorSlave__DOT__sendRsp;
    vlTOPp->__Vdly__Axi_Sim__DOT__area_axi4top__DOT__apbBridge__DOT__phase 
        = vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge__DOT__phase;
    vlTOPp->__Vdly__Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__phase 
        = vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__phase;
    if (vlTOPp->reset) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT___zz_cmdAllowedStart = 1U;
    } else {
        if (vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__cmdAllowedStart) {
            vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT___zz_cmdAllowedStart = 0U;
        }
        if (vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder_io_input_aw_ready) {
            vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT___zz_cmdAllowedStart = 1U;
        }
    }
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder__DOT__pendingCmdCounter_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder__DOT__pendingCmdCounter_valueNext));
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder__DOT__errorSlave__DOT__sendRsp = 0U;
    } else {
        if (vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder__DOT__errorSlave__DOT__io_axi_ar_fire) {
            vlTOPp->__Vdly__Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder__DOT__errorSlave__DOT__sendRsp = 1U;
        }
        if (vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder__DOT__errorSlave__DOT__sendRsp) {
            if (vlTOPp->axi_r_ready) {
                if ((0U == (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder__DOT__errorSlave__DOT__remaining))) {
                    vlTOPp->__Vdly__Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder__DOT__errorSlave__DOT__sendRsp = 0U;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__errorSlave__DOT__sendRsp = 0U;
    } else {
        if (vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__errorSlave__DOT__when_Axi4ErrorSlave_l24) {
            vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__errorSlave__DOT__sendRsp = 1U;
        }
        if (vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__errorSlave__DOT__io_axi_b_fire) {
            vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__errorSlave__DOT__sendRsp = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__errorSlave__DOT__consumeData = 0U;
    } else {
        if (vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__errorSlave__DOT__io_axi_aw_fire) {
            vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__errorSlave__DOT__consumeData = 1U;
        }
        if (vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__errorSlave__DOT__when_Axi4ErrorSlave_l24) {
            vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__errorSlave__DOT__consumeData = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_w_s2mPipe_rValid = 0U;
    } else {
        if (vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_w_s2mPipe_ready) {
            vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_w_s2mPipe_rValid 
                = ((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_w_valid) 
                   | (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_w_rValid));
        }
    }
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__pendingCmdCounter_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__pendingCmdCounter_valueNext));
    if (vlTOPp->reset) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder__DOT__pendingError = 0U;
    } else {
        if (vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder_io_input_ar_ready) {
            vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder__DOT__pendingError 
                = (0U == (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder__DOT__decodedCmdSels));
        }
    }
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__pendingDataCounter_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__pendingDataCounter_valueNext));
    if (vlTOPp->reset) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__pendingError = 0U;
    } else {
        if (vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__cmdAllowedStart) {
            vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__pendingError 
                = (0U == (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__decodedCmdSels));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder__DOT__pendingSels = 0U;
    } else {
        if (vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder_io_input_ar_ready) {
            vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder__DOT__pendingSels 
                = vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder__DOT__decodedCmdSels;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__pendingSels = 0U;
    } else {
        if (vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__cmdAllowedStart) {
            vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__pendingSels 
                = vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__decodedCmdSels;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork__DOT___zz_io_outputs_0_valid = 1U;
    } else {
        if (((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_0_valid) 
             & (~ (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_arw_rValid)))) {
            vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork__DOT___zz_io_outputs_0_valid = 0U;
        }
        if (vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_input_ready) {
            vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork__DOT___zz_io_outputs_0_valid = 1U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork__DOT___zz_io_outputs_0_valid = 1U;
    } else {
        if (((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_0_valid) 
             & (~ (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter_io_output_arw_rValid)))) {
            vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork__DOT___zz_io_outputs_0_valid = 0U;
        }
        if (vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_input_ready) {
            vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork__DOT___zz_io_outputs_0_valid = 1U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__risingOccupancy = 0U;
    } else {
        if (((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__pushing) 
             != (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__popping))) {
            vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__risingOccupancy 
                = vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__pushing;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__risingOccupancy = 0U;
    } else {
        if (((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__pushing) 
             != (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__popping))) {
            vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__risingOccupancy 
                = vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__pushing;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork__DOT___zz_io_outputs_1_valid = 1U;
    } else {
        if (((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_valid) 
             & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_ready))) {
            vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork__DOT___zz_io_outputs_1_valid = 0U;
        }
        if (vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_input_ready) {
            vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork__DOT___zz_io_outputs_1_valid = 1U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork__DOT___zz_io_outputs_1_valid = 1U;
    } else {
        if (((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_valid) 
             & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_ready))) {
            vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork__DOT___zz_io_outputs_1_valid = 0U;
        }
        if (vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_input_ready) {
            vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork__DOT___zz_io_outputs_1_valid = 1U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apb3busif_readError = 0U;
    } else {
        if (vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apb3busif_doRead) {
            vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apb3busif_readError 
                = ((0U != vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter_io_output_arw_rData_addr) 
                   & ((4U != vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter_io_output_arw_rData_addr) 
                      & ((0x1010U != vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter_io_output_arw_rData_addr) 
                         & (0x1014U != vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter_io_output_arw_rData_addr))));
        }
    }
    __Vtableidx1 = (((IData)(vlTOPp->axi_r_ready) << 6U) 
                    | (((IData)(vlTOPp->axi_b_ready) 
                        << 5U) | (((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge__DOT__write) 
                                   << 4U) | (((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge__DOT__when_Axi4SharedToApb3Bridge_l91) 
                                              << 3U) 
                                             | (((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge__DOT__phase) 
                                                 << 1U) 
                                                | (IData)(vlTOPp->reset))))));
    if (vlTOPp->__Vtablechg1[__Vtableidx1]) {
        vlTOPp->__Vdly__Axi_Sim__DOT__area_axi4top__DOT__apbBridge__DOT__phase 
            = vlTOPp->__Vtable1_Axi_Sim__DOT__area_axi4top__DOT__apbBridge__DOT__phase
            [__Vtableidx1];
    }
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__popPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__popPtr_valueNext));
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__pushPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__pushPtr_valueNext));
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__popPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__popPtr_valueNext));
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__pushPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__pushPtr_valueNext));
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__phase = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__phase))) {
            if (vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_arw_rValid) {
                vlTOPp->__Vdly__Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__phase = 1U;
            }
        } else {
            if ((1U == (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__phase))) {
                if (((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__arw_write) 
                     & ((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_w_s2mPipe_rData_last) 
                        | (0U == (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__arw_len))))) {
                    vlTOPp->__Vdly__Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__phase = 3U;
                }
                if ((1U & (~ (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__arw_write)))) {
                    vlTOPp->__Vdly__Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__phase = 2U;
                }
            } else {
                if ((2U == (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__phase))) {
                    vlTOPp->__Vdly__Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__phase = 3U;
                } else {
                    if (vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__arw_write) {
                        if (vlTOPp->axi_b_ready) {
                            vlTOPp->__Vdly__Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__phase = 0U;
                        }
                    } else {
                        if (vlTOPp->axi_r_ready) {
                            vlTOPp->__Vdly__Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__phase 
                                = ((0U == (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__lenBurst))
                                    ? 0U : 1U);
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter__DOT__locked = 0U;
    } else {
        if (vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_valid) {
            vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter__DOT__locked = 1U;
        }
        if (((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_valid) 
             & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_input_ready))) {
            vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter__DOT__locked = 0U;
        }
    }
}

VL_INLINE_OPT void VAxi_Sim::_sequent__TOP__6(VAxi_Sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxi_Sim::_sequent__TOP__6\n"); );
    VAxi_Sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter__DOT__locked = 0U;
    } else {
        if (vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_valid) {
            vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter__DOT__locked = 1U;
        }
        if (((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_valid) 
             & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_input_ready))) {
            vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter__DOT__locked = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apb3busif_readData = 0U;
    } else {
        if (vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apb3busif_doRead) {
            vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apb3busif_readData 
                = ((0U == vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter_io_output_arw_rData_addr)
                    ? vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__Apb3_reg0
                    : ((4U == vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter_io_output_arw_rData_addr)
                        ? vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__Apb3_reg1
                        : ((0x1010U == vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter_io_output_arw_rData_addr)
                            ? vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__Apb3_reg2
                            : ((0x1014U == vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter_io_output_arw_rData_addr)
                                ? vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__Apb3_reg3
                                : 0U))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter__DOT__maskLocked_1 = 1U;
    } else {
        if (vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_valid) {
            vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter__DOT__maskLocked_1 
                = vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter__DOT__maskRouted_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter__DOT__maskLocked_1 = 1U;
    } else {
        if (vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_valid) {
            vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter__DOT__maskLocked_1 
                = vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter__DOT__maskRouted_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter__DOT__maskLocked_0 = 0U;
    } else {
        if (vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_valid) {
            vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter__DOT__maskLocked_0 
                = vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter__DOT__maskRouted_0;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter__DOT__maskLocked_0 = 0U;
    } else {
        if (vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_valid) {
            vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter__DOT__maskLocked_0 
                = vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter__DOT__maskRouted_0;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder_io_outputs_0_ar_rValid = 0U;
    } else {
        if ((((IData)(vlTOPp->axi_ar_valid) & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder__DOT__decodedCmdSels)) 
             & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder__DOT__allowCmd))) {
            vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder_io_outputs_0_ar_rValid = 1U;
        }
        if (vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder_io_outputs_0_ar_validPipe_fire) {
            vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder_io_outputs_0_ar_rValid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder_io_outputs_1_ar_rValid = 0U;
    } else {
        if ((((IData)(vlTOPp->axi_ar_valid) & ((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder__DOT__decodedCmdSels) 
                                               >> 1U)) 
             & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder__DOT__allowCmd))) {
            vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder_io_outputs_1_ar_rValid = 1U;
        }
        if (vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder_io_outputs_1_ar_validPipe_fire) {
            vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder_io_outputs_1_ar_rValid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder_io_outputs_0_aw_rValid = 0U;
    } else {
        if ((((IData)(vlTOPp->axi_aw_valid) & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__decodedCmdSels)) 
             & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__allowCmd))) {
            vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder_io_outputs_0_aw_rValid = 1U;
        }
        if (vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder_io_outputs_0_aw_validPipe_fire) {
            vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder_io_outputs_0_aw_rValid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder_io_outputs_1_aw_rValid = 0U;
    } else {
        if ((((IData)(vlTOPp->axi_aw_valid) & ((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__decodedCmdSels) 
                                               >> 1U)) 
             & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__allowCmd))) {
            vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder_io_outputs_1_aw_rValid = 1U;
        }
        if (vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder_io_outputs_1_aw_validPipe_fire) {
            vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder_io_outputs_1_aw_rValid = 0U;
        }
    }
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder__DOT__errorSlave__DOT__sendRsp 
        = vlTOPp->__Vdly__Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder__DOT__errorSlave__DOT__sendRsp;
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__errorSlave_io_axi_aw_ready 
        = (1U & (~ ((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__errorSlave__DOT__consumeData) 
                    | (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__errorSlave__DOT__sendRsp))));
    vlTOPp->axi_r_payload_data = ((1U & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder__DOT__pendingSels))
                                   ? vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge__DOT__readedData
                                   : vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__readData);
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder_io_input_r_payload_id 
        = ((1U & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder__DOT__pendingSels))
            ? (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge__DOT__id)
            : (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__arw_id));
    if (vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder__DOT__pendingError) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder_io_input_r_payload_id 
            = vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder__DOT__errorSlave__DOT__id;
    }
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder_io_input_b_payload_id 
        = ((1U & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__pendingSels))
            ? (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge__DOT__id)
            : (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__arw_id));
    if (vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__pendingError) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder_io_input_b_payload_id 
            = vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__errorSlave__DOT__id;
    }
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder_io_input_r_payload_resp 
        = ((1U & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder__DOT__pendingSels))
            ? ((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apb3busif_readError) 
               << 1U) : 0U);
    if (vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder__DOT__pendingError) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder_io_input_r_payload_resp = 3U;
    }
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder_io_input_b_payload_resp 
        = ((1U & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__pendingSels))
            ? ((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apb3busif_readError) 
               << 1U) : 0U);
    if (vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__pendingError) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder_io_input_b_payload_resp = 3U;
    }
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__ptrMatch 
        = ((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__pushPtr_value) 
           == (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__popPtr_value));
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__ptrMatch 
        = ((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__pushPtr_value) 
           == (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__popPtr_value));
    if (vlTOPp->reset) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__Apb3_reg0 = 0U;
    } else {
        if (((0U == vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter_io_output_arw_rData_addr) 
             & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apb3busif_doWrite))) {
            vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__Apb3_reg0 
                = vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter_io_output_w_rData_data;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__Apb3_reg1 = 0U;
    } else {
        if (((4U == vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter_io_output_arw_rData_addr) 
             & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apb3busif_doWrite))) {
            vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__Apb3_reg1 
                = vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter_io_output_w_rData_data;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__Apb3_reg2 = 0U;
    } else {
        if (((0x1010U == vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter_io_output_arw_rData_addr) 
             & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apb3busif_doWrite))) {
            vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__Apb3_reg2 
                = vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter_io_output_w_rData_data;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__Apb3_reg3 = 0U;
    } else {
        if (((0x1014U == vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter_io_output_arw_rData_addr) 
             & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apb3busif_doWrite))) {
            vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__Apb3_reg3 
                = vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter_io_output_w_rData_data;
        }
    }
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter__DOT___zz_maskProposal_0 
        = (((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder_io_outputs_0_aw_rValid) 
            << 1U) | (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder_io_outputs_0_ar_rValid));
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter__DOT___zz_maskProposal_0 
        = (((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder_io_outputs_1_aw_rValid) 
            << 1U) | (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder_io_outputs_1_ar_rValid));
    vlTOPp->axi_r_payload_id = vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder_io_input_r_payload_id;
    vlTOPp->axi_b_payload_id = vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder_io_input_b_payload_id;
    vlTOPp->axi_r_payload_resp = vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder_io_input_r_payload_resp;
    vlTOPp->axi_b_payload_resp = vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder_io_input_b_payload_resp;
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__full 
        = ((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__ptrMatch) 
           & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__risingOccupancy));
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__full 
        = ((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__ptrMatch) 
           & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__risingOccupancy));
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter__DOT___zz_maskProposal_0_2 
        = (0xfU & ((((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter__DOT___zz_maskProposal_0) 
                     << 2U) | (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter__DOT___zz_maskProposal_0)) 
                   & (~ ((((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter__DOT___zz_maskProposal_0) 
                           << 2U) | (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter__DOT___zz_maskProposal_0)) 
                         - (((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter__DOT__maskLocked_0) 
                             << 1U) | (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter__DOT__maskLocked_1))))));
}

VL_INLINE_OPT void VAxi_Sim::_sequent__TOP__7(VAxi_Sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxi_Sim::_sequent__TOP__7\n"); );
    VAxi_Sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter__DOT___zz_maskProposal_0_2 
        = (0xfU & ((((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter__DOT___zz_maskProposal_0) 
                     << 2U) | (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter__DOT___zz_maskProposal_0)) 
                   & (~ ((((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter__DOT___zz_maskProposal_0) 
                           << 2U) | (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter__DOT___zz_maskProposal_0)) 
                         - (((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter__DOT__maskLocked_0) 
                             << 1U) | (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter__DOT__maskLocked_1))))));
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter__DOT___zz_maskProposal_0_3 
        = (3U & (((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter__DOT___zz_maskProposal_0_2) 
                  >> 2U) | (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter__DOT___zz_maskProposal_0_2)));
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter__DOT___zz_maskProposal_0_3 
        = (3U & (((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter__DOT___zz_maskProposal_0_2) 
                  >> 2U) | (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter__DOT___zz_maskProposal_0_2)));
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter__DOT__maskRouted_1 
        = (1U & ((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter__DOT__locked)
                  ? (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter__DOT__maskLocked_1)
                  : ((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter__DOT___zz_maskProposal_0_3) 
                     >> 1U)));
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter__DOT__maskRouted_1 
        = (1U & ((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter__DOT__locked)
                  ? (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter__DOT__maskLocked_1)
                  : ((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter__DOT___zz_maskProposal_0_3) 
                     >> 1U)));
}

VL_INLINE_OPT void VAxi_Sim::_sequent__TOP__11(VAxi_Sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxi_Sim::_sequent__TOP__11\n"); );
    VAxi_Sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder__DOT__errorSlave__DOT__remaining 
        = vlTOPp->__Vdly__Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder__DOT__errorSlave__DOT__remaining;
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__lenBurst 
        = vlTOPp->__Vdly__Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__lenBurst;
    if ((0U == (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge__DOT__phase))) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge__DOT__write 
            = vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter_io_output_arw_rData_write;
    }
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__when_Axi4SharedToBRAM_l149 
        = (0U == (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__lenBurst));
    if (vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_w_s2mPipe_ready) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_w_s2mPipe_rData_last 
            = ((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_w_rValid)
                ? (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_w_rData_last)
                : (IData)(vlTOPp->axi_w_payload_last));
    }
    if ((0U == (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__phase))) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__arw_len 
            = vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_arw_rData_len;
    }
    if ((0U == (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__phase))) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__arw_write 
            = vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_arw_rData_write;
    }
    if ((1U & (~ (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter_io_output_w_rValid)))) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter_io_output_w_rData_data 
            = vlTOPp->axi_w_payload_data;
    }
    if ((1U & (~ (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter_io_output_arw_rValid)))) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter_io_output_arw_rData_addr 
            = ((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter__DOT__maskRouted_0)
                ? vlTOPp->axi_ar_payload_addr : vlTOPp->axi_aw_payload_addr);
    }
    if ((1U & (~ (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter_io_output_arw_rValid)))) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter_io_output_arw_rData_write 
            = (1U & (~ (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter__DOT__maskRouted_0)));
    }
    if ((1U & (~ (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_w_rValid)))) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_w_rData_last 
            = vlTOPp->axi_w_payload_last;
    }
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__Axi4Incr_wrapCase 
        = (7U & ((3U & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__arw_size)) 
                 + ((8U == (8U & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__arw_len)))
                     ? 3U : ((4U == (0xcU & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__arw_len)))
                              ? 2U : ((2U == (0xeU 
                                              & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__arw_len)))
                                       ? 1U : 0U)))));
    if ((1U & (~ (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_arw_rValid)))) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_arw_rData_len 
            = ((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter__DOT__maskRouted_0)
                ? (IData)(vlTOPp->axi_ar_payload_len)
                : (IData)(vlTOPp->axi_aw_payload_len));
    }
    if ((1U & (~ (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_arw_rValid)))) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_arw_rData_write 
            = (1U & (~ (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter__DOT__maskRouted_0)));
    }
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__Axi4Incr_result 
        = ((0U == (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__arw_burst))
            ? vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__arw_addr
            : ((2U == (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__arw_burst))
                ? ((0xff000U & vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__arw_addr) 
                   | ((4U & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__Axi4Incr_wrapCase))
                       ? ((2U & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__Axi4Incr_wrapCase))
                           ? ((0xfc0U & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__Axi4Incr_base)) 
                              | (0x3fU & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__Axi4Incr_baseIncr)))
                           : ((1U & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__Axi4Incr_wrapCase))
                               ? ((0xfc0U & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__Axi4Incr_base)) 
                                  | (0x3fU & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__Axi4Incr_baseIncr)))
                               : ((0xfe0U & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__Axi4Incr_base)) 
                                  | (0x1fU & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__Axi4Incr_baseIncr)))))
                       : ((2U & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__Axi4Incr_wrapCase))
                           ? ((1U & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__Axi4Incr_wrapCase))
                               ? ((0xff0U & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__Axi4Incr_base)) 
                                  | (0xfU & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__Axi4Incr_baseIncr)))
                               : ((0xff8U & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__Axi4Incr_base)) 
                                  | (7U & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__Axi4Incr_baseIncr))))
                           : ((1U & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__Axi4Incr_wrapCase))
                               ? ((0xffcU & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__Axi4Incr_base)) 
                                  | (3U & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__Axi4Incr_baseIncr)))
                               : ((0xffeU & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__Axi4Incr_base)) 
                                  | (1U & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__Axi4Incr_baseIncr)))))))
                : ((0xff000U & vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__arw_addr) 
                   | (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__Axi4Incr_baseIncr))));
}

VL_INLINE_OPT void VAxi_Sim::_combo__TOP__12(VAxi_Sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxi_Sim::_combo__TOP__12\n"); );
    VAxi_Sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder__DOT__decodedCmdSels 
        = ((((0U == (0xff000U & vlTOPp->axi_ar_payload_addr)) 
             & (IData)(vlTOPp->axi_ar_valid)) << 1U) 
           | ((0x2000U == (0xff000U & vlTOPp->axi_ar_payload_addr)) 
              & (IData)(vlTOPp->axi_ar_valid)));
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__decodedCmdSels 
        = ((((0U == (0xff000U & vlTOPp->axi_aw_payload_addr)) 
             & (IData)(vlTOPp->axi_aw_valid)) << 1U) 
           | ((0x2000U == (0xff000U & vlTOPp->axi_aw_payload_addr)) 
              & (IData)(vlTOPp->axi_aw_valid)));
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__errorSlave__DOT__io_axi_b_fire 
        = ((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__errorSlave__DOT__sendRsp) 
           & (IData)(vlTOPp->axi_b_ready));
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__errorSlave__DOT__when_Axi4ErrorSlave_l24 
        = (((((IData)(vlTOPp->axi_w_valid) & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__pendingError)) 
             & (0U != (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__pendingDataCounter_value))) 
            & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__errorSlave__DOT__consumeData)) 
           & (IData)(vlTOPp->axi_w_payload_last));
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder__DOT__allowCmd 
        = ((0U == (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder__DOT__pendingCmdCounter_value)) 
           | ((7U != (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder__DOT__pendingCmdCounter_value)) 
              & ((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder__DOT__pendingSels) 
                 == (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder__DOT__decodedCmdSels))));
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__allowCmd 
        = ((0U == (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__pendingCmdCounter_value)) 
           | ((7U != (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__pendingCmdCounter_value)) 
              & ((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__pendingSels) 
                 == (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__decodedCmdSels))));
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder__DOT__errorSlave__DOT__io_axi_ar_fire 
        = ((((IData)(vlTOPp->axi_ar_valid) & (0U == (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder__DOT__decodedCmdSels))) 
            & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder__DOT__allowCmd)) 
           & (~ (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder__DOT__errorSlave__DOT__sendRsp)));
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__errorSlave__DOT__io_axi_aw_fire 
        = ((((IData)(vlTOPp->axi_aw_valid) & (0U == (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__decodedCmdSels))) 
            & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__allowCmd)) 
           & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__errorSlave_io_axi_aw_ready));
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__cmdAllowedStart 
        = (((IData)(vlTOPp->axi_aw_valid) & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__allowCmd)) 
           & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT___zz_cmdAllowedStart));
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__pendingDataCounter_incrementIt = 0U;
    if (vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__cmdAllowedStart) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__pendingDataCounter_incrementIt = 1U;
    }
}

VL_INLINE_OPT void VAxi_Sim::_sequent__TOP__13(VAxi_Sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxi_Sim::_sequent__TOP__13\n"); );
    VAxi_Sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge__DOT__phase 
        = vlTOPp->__Vdly__Axi_Sim__DOT__area_axi4top__DOT__apbBridge__DOT__phase;
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__phase 
        = vlTOPp->__Vdly__Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__phase;
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__when_Axi4SharedToBRAM_l121 
        = (1U & ((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_w_s2mPipe_rValid) 
                 | (~ (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__arw_write))));
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder_io_input_r_payload_last 
        = (1U & ((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder__DOT__pendingSels) 
                 | ((0U == (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__lenBurst)) 
                    & (~ (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__arw_write)))));
    if (vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder__DOT__pendingError) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder_io_input_r_payload_last 
            = (0U == (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder__DOT__errorSlave__DOT__remaining));
    }
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter__DOT__maskRouted_0 
        = (1U & ((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter__DOT__locked)
                  ? (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter__DOT__maskLocked_0)
                  : (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter__DOT___zz_maskProposal_0_3)));
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter__DOT__maskRouted_0 
        = (1U & ((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter__DOT__locked)
                  ? (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter__DOT__maskLocked_0)
                  : (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter__DOT___zz_maskProposal_0_3)));
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arw_ready = 0U;
    if ((0U != (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge__DOT__phase))) {
        if ((1U == (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge__DOT__phase))) {
            vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arw_ready = 1U;
        }
    }
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_w_ready = 0U;
    if ((0U != (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge__DOT__phase))) {
        if ((1U == (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge__DOT__phase))) {
            vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_w_ready 
                = vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge__DOT__write;
        }
    }
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_apb_PENABLE = 0U;
    if ((0U != (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge__DOT__phase))) {
        if ((1U == (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge__DOT__phase))) {
            vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_apb_PENABLE = 1U;
        }
    }
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_b_valid = 0U;
    if ((0U != (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge__DOT__phase))) {
        if ((1U != (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge__DOT__phase))) {
            if (vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge__DOT__write) {
                vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_b_valid = 1U;
            }
        }
    }
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_r_valid = 0U;
    if ((0U != (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge__DOT__phase))) {
        if ((1U != (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge__DOT__phase))) {
            if ((1U & (~ (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge__DOT__write)))) {
                vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_r_valid = 1U;
            }
        }
    }
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_w_ready = 0U;
    if ((0U != (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__phase))) {
        if ((1U == (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__phase))) {
            vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_w_ready 
                = ((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_w_s2mPipe_rValid) 
                   & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__arw_write));
        }
    }
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_b_valid = 0U;
    if ((0U != (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__phase))) {
        if ((1U != (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__phase))) {
            if ((2U != (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__phase))) {
                if (vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__arw_write) {
                    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_b_valid = 1U;
                }
            }
        }
    }
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_r_valid = 0U;
    if ((0U != (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__phase))) {
        if ((1U != (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__phase))) {
            if ((2U != (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__phase))) {
                if ((1U & (~ (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__arw_write)))) {
                    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_r_valid = 1U;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter_io_output_w_rValid = 0U;
    } else {
        if (vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter_io_output_w_valid) {
            vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter_io_output_w_rValid = 1U;
        }
        if (vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter_io_output_w_halfPipe_fire) {
            vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter_io_output_w_rValid = 0U;
        }
    }
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_bram_en = 0U;
    if ((0U != (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__phase))) {
        if ((1U == (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__phase))) {
            if (vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__when_Axi4SharedToBRAM_l121) {
                vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_bram_en = 1U;
            }
        }
    }
    vlTOPp->axi_r_payload_last = vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder_io_input_r_payload_last;
    if (vlTOPp->reset) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter_io_output_arw_rValid = 0U;
    } else {
        if (vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_0_valid) {
            vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter_io_output_arw_rValid = 1U;
        }
        if (vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter_io_output_arw_halfPipe_fire) {
            vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter_io_output_arw_rValid = 0U;
        }
    }
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_ready 
        = (1U & (~ (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__full)));
    if (vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter__DOT__maskRouted_0) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_ready = 1U;
    }
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_valid 
        = (((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder_io_outputs_0_ar_rValid) 
            & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter__DOT__maskRouted_0)) 
           | ((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder_io_outputs_0_aw_rValid) 
              & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter__DOT__maskRouted_1)));
    if (vlTOPp->reset) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_w_rValid = 0U;
    } else {
        if (vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_w_valid) {
            vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_w_rValid = 1U;
        }
        if (vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_w_s2mPipe_ready) {
            vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_w_rValid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_arw_rValid = 0U;
    } else {
        if (vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_0_valid) {
            vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_arw_rValid = 1U;
        }
        if (vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_arw_halfPipe_fire) {
            vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_arw_rValid = 0U;
        }
    }
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_ready 
        = (1U & (~ (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__full)));
    if (vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter__DOT__maskRouted_0) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_ready = 1U;
    }
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_valid 
        = (((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder_io_outputs_1_ar_rValid) 
            & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter__DOT__maskRouted_0)) 
           | ((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder_io_outputs_1_aw_rValid) 
              & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter__DOT__maskRouted_1)));
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder_io_input_b_valid 
        = ((0U != (((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_b_valid) 
                    << 1U) | (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_b_valid))) 
           | (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__errorSlave__DOT__sendRsp));
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder_io_input_r_valid 
        = (0U != (((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_r_valid) 
                   << 1U) | (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_r_valid)));
    if (vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder__DOT__errorSlave__DOT__sendRsp) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder_io_input_r_valid = 1U;
    }
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_0_valid 
        = ((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_valid) 
           & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork__DOT___zz_io_outputs_0_valid));
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_valid 
        = ((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_valid) 
           & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork__DOT___zz_io_outputs_1_valid));
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_w_s2mPipe_ready 
        = vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_w_ready;
    if ((1U & (~ (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_w_s2mPipe_rValid)))) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_w_s2mPipe_ready = 1U;
    }
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_0_valid 
        = ((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_valid) 
           & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork__DOT___zz_io_outputs_0_valid));
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_valid 
        = ((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_valid) 
           & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork__DOT___zz_io_outputs_1_valid));
    vlTOPp->axi_b_valid = vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder_io_input_b_valid;
    vlTOPp->axi_r_valid = vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder_io_input_r_valid;
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter_io_output_w_halfPipe_fire 
        = ((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter_io_output_w_rValid) 
           & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_w_ready));
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter_io_output_arw_halfPipe_fire 
        = ((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter_io_output_arw_rValid) 
           & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arw_ready));
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge__DOT__when_Axi4SharedToApb3Bridge_l91 
        = ((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter_io_output_arw_rValid) 
           & ((~ (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter_io_output_arw_rData_write)) 
              | (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter_io_output_w_rValid)));
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_input_ready = 1U;
    if (((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter_io_output_arw_rValid) 
         & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork__DOT___zz_io_outputs_0_valid))) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_input_ready = 0U;
    }
    if (((~ (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_ready)) 
         & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork__DOT___zz_io_outputs_1_valid))) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_input_ready = 0U;
    }
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_valid 
        = vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_valid;
    if (vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter__DOT__maskRouted_0) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_valid = 0U;
    }
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arw_ready = 0U;
    if ((0U == (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram__DOT__phase))) {
        if (vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_arw_rValid) {
            vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arw_ready = 1U;
        }
    }
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_input_ready = 1U;
    if (((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_arw_rValid) 
         & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork__DOT___zz_io_outputs_0_valid))) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_input_ready = 0U;
    }
    if (((~ (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_ready)) 
         & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork__DOT___zz_io_outputs_1_valid))) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_input_ready = 0U;
    }
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_valid 
        = vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_valid;
    if (vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter__DOT__maskRouted_0) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_valid = 0U;
    }
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_apb_PSEL = 0U;
    if ((0U == (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge__DOT__phase))) {
        if (vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge__DOT__when_Axi4SharedToApb3Bridge_l91) {
            vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_apb_PSEL = 1U;
        }
    } else {
        if ((1U == (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge__DOT__phase))) {
            vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_apb_PSEL = 1U;
        }
    }
}

VL_INLINE_OPT void VAxi_Sim::_sequent__TOP__14(VAxi_Sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxi_Sim::_sequent__TOP__14\n"); );
    VAxi_Sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_inputs_0_ready 
        = ((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter__DOT__maskRouted_0) 
           & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_input_ready));
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_inputs_1_ready 
        = ((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter__DOT__maskRouted_1) 
           & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_input_ready));
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__pushing 
        = ((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_valid) 
           & (~ (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__full)));
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__ptrMatch) 
                     & (~ (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__risingOccupancy)))) 
                 | (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_valid)));
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_arw_halfPipe_fire 
        = ((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_arw_rValid) 
           & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arw_ready));
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_inputs_0_ready 
        = ((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter__DOT__maskRouted_0) 
           & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_input_ready));
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_inputs_1_ready 
        = ((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter__DOT__maskRouted_1) 
           & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_input_ready));
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__pushing 
        = ((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_valid) 
           & (~ (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__full)));
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__ptrMatch) 
                     & (~ (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__risingOccupancy)))) 
                 | (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_valid)));
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apb3busif_doWrite 
        = (((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_apb_PSEL) 
            & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_apb_PENABLE)) 
           & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter_io_output_arw_rData_write));
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apb3busif_doRead 
        = (((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_apb_PSEL) 
            & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_apb_PENABLE)) 
           & (~ (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter_io_output_arw_rData_write)));
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder_io_outputs_0_ar_validPipe_fire 
        = ((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder_io_outputs_0_ar_rValid) 
           & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_inputs_0_ready));
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder_io_outputs_0_aw_validPipe_fire 
        = ((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder_io_outputs_0_aw_rValid) 
           & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_inputs_1_ready));
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__pushPtr_willIncrement = 0U;
    if (vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__pushing) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__pushPtr_willIncrement = 1U;
    }
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder_io_outputs_1_ar_validPipe_fire 
        = ((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder_io_outputs_1_ar_rValid) 
           & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_inputs_0_ready));
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder_io_outputs_1_aw_validPipe_fire 
        = ((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder_io_outputs_1_aw_rValid) 
           & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_inputs_1_ready));
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__pushPtr_willIncrement = 0U;
    if (vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__pushing) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__pushPtr_willIncrement = 1U;
    }
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder_io_input_w_ready 
        = (((0U != ((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__pendingSels) 
                    & ((((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo_io_pop_valid) 
                         & (~ (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_w_rValid))) 
                        << 1U) | ((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo_io_pop_valid) 
                                  & (~ (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter_io_output_w_rValid)))))) 
            | ((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__pendingError) 
               & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__errorSlave__DOT__consumeData))) 
           & (0U != (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__pendingDataCounter_value)));
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__pushPtr_valueNext 
        = (3U & ((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__pushPtr_value) 
                 + (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__pushPtr_willIncrement)));
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__pushPtr_valueNext 
        = (3U & ((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__pushPtr_value) 
                 + (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__pushPtr_willIncrement)));
    vlTOPp->axi_w_ready = vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder_io_input_w_ready;
}

VL_INLINE_OPT void VAxi_Sim::_combo__TOP__15(VAxi_Sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxi_Sim::_combo__TOP__15\n"); );
    VAxi_Sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__pendingCmdCounter_decrementIt = 0U;
    if (((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder_io_input_b_valid) 
         & (IData)(vlTOPp->axi_b_ready))) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__pendingCmdCounter_decrementIt = 1U;
    }
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder__DOT__pendingCmdCounter_decrementIt = 0U;
    if ((((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder_io_input_r_valid) 
          & (IData)(vlTOPp->axi_r_ready)) & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder_io_input_r_payload_last))) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder__DOT__pendingCmdCounter_decrementIt = 1U;
    }
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter_io_output_w_valid 
        = ((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo_io_pop_valid) 
           & (((IData)(vlTOPp->axi_w_valid) & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__pendingSels)) 
              & (0U != (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__pendingDataCounter_value))));
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder_io_input_ar_ready 
        = (((0U != ((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder__DOT__decodedCmdSels) 
                    & ((((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder_io_outputs_1_ar_rValid) 
                         & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_inputs_0_ready)) 
                        << 1U) | ((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder_io_outputs_0_ar_rValid) 
                                  & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_inputs_0_ready))))) 
            | ((0U == (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder__DOT__decodedCmdSels)) 
               & (~ (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder__DOT__errorSlave__DOT__sendRsp)))) 
           & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder__DOT__allowCmd));
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder_io_input_aw_ready 
        = (((0U != ((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__decodedCmdSels) 
                    & ((((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder_io_outputs_1_aw_rValid) 
                         & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_inputs_1_ready)) 
                        << 1U) | ((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder_io_outputs_0_aw_rValid) 
                                  & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_inputs_1_ready))))) 
            | ((0U == (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__decodedCmdSels)) 
               & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__errorSlave_io_axi_aw_ready))) 
           & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__allowCmd));
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_w_valid 
        = ((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo_io_pop_valid) 
           & (((IData)(vlTOPp->axi_w_valid) & ((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__pendingSels) 
                                               >> 1U)) 
              & (0U != (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__pendingDataCounter_value))));
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__pendingDataCounter_decrementIt = 0U;
    if ((((IData)(vlTOPp->axi_w_valid) & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder_io_input_w_ready)) 
         & (IData)(vlTOPp->axi_w_payload_last))) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__pendingDataCounter_decrementIt = 1U;
    }
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__popping 
        = ((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo_io_pop_valid) 
           & (((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter_io_output_w_valid) 
               & (~ (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter_io_output_w_rValid))) 
              & (IData)(vlTOPp->axi_w_payload_last)));
    vlTOPp->axi_ar_ready = vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder_io_input_ar_ready;
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder__DOT__pendingCmdCounter_incrementIt = 0U;
    if (((IData)(vlTOPp->axi_ar_valid) & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder_io_input_ar_ready))) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder__DOT__pendingCmdCounter_incrementIt = 1U;
    }
    vlTOPp->axi_aw_ready = vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder_io_input_aw_ready;
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__pendingCmdCounter_incrementIt = 0U;
    if (((IData)(vlTOPp->axi_aw_valid) & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder_io_input_aw_ready))) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__pendingCmdCounter_incrementIt = 1U;
    }
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__popping 
        = ((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo_io_pop_valid) 
           & (((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_w_valid) 
               & (~ (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter_io_output_w_rValid))) 
              & (IData)(vlTOPp->axi_w_payload_last)));
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__pendingDataCounter_valueNext 
        = (7U & ((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__pendingDataCounter_value) 
                 + (((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__pendingDataCounter_incrementIt) 
                     & (~ (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__pendingDataCounter_decrementIt)))
                     ? 1U : (((~ (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__pendingDataCounter_incrementIt)) 
                              & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__pendingDataCounter_decrementIt))
                              ? 7U : 0U))));
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__popPtr_willIncrement = 0U;
    if (vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__popping) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__popPtr_willIncrement = 1U;
    }
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder__DOT__pendingCmdCounter_valueNext 
        = (7U & ((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder__DOT__pendingCmdCounter_value) 
                 + (((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder__DOT__pendingCmdCounter_incrementIt) 
                     & (~ (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder__DOT__pendingCmdCounter_decrementIt)))
                     ? 1U : (((~ (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder__DOT__pendingCmdCounter_incrementIt)) 
                              & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_readOnly_decoder__DOT__pendingCmdCounter_decrementIt))
                              ? 7U : 0U))));
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__pendingCmdCounter_valueNext 
        = (7U & ((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__pendingCmdCounter_value) 
                 + (((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__pendingCmdCounter_incrementIt) 
                     & (~ (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__pendingCmdCounter_decrementIt)))
                     ? 1U : (((~ (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__pendingCmdCounter_incrementIt)) 
                              & (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__axi_writeOnly_decoder__DOT__pendingCmdCounter_decrementIt))
                              ? 7U : 0U))));
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__popPtr_willIncrement = 0U;
    if (vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__popping) {
        vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__popPtr_willIncrement = 1U;
    }
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__popPtr_valueNext 
        = (3U & ((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__popPtr_value) 
                 + (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__apbBridge_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__popPtr_willIncrement)));
    vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__popPtr_valueNext 
        = (3U & ((IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__popPtr_value) 
                 + (IData)(vlTOPp->Axi_Sim__DOT__area_axi4top__DOT__ram_io_axi_arbiter__DOT__cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo__DOT__popPtr_willIncrement)));
}

void VAxi_Sim::_eval(VAxi_Sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxi_Sim::_eval\n"); );
    VAxi_Sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__2(vlSymsp);
        vlTOPp->_sequent__TOP__3(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__5(vlSymsp);
        vlTOPp->_sequent__TOP__6(vlSymsp);
        vlTOPp->_sequent__TOP__7(vlSymsp);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__11(vlSymsp);
        vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__12(vlSymsp);
    vlTOPp->__Vm_traceActivity = (0x10U | vlTOPp->__Vm_traceActivity);
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__13(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x20U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__14(vlSymsp);
    }
    vlTOPp->_combo__TOP__15(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VAxi_Sim::_change_request(VAxi_Sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxi_Sim::_change_request\n"); );
    VAxi_Sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VAxi_Sim::_change_request_1(VAxi_Sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxi_Sim::_change_request_1\n"); );
    VAxi_Sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VAxi_Sim::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxi_Sim::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((axi_aw_valid & 0xfeU))) {
        Verilated::overWidthError("axi_aw_valid");}
    if (VL_UNLIKELY((axi_aw_payload_addr & 0xfff00000U))) {
        Verilated::overWidthError("axi_aw_payload_addr");}
    if (VL_UNLIKELY((axi_aw_payload_id & 0xf0U))) {
        Verilated::overWidthError("axi_aw_payload_id");}
    if (VL_UNLIKELY((axi_aw_payload_size & 0xf8U))) {
        Verilated::overWidthError("axi_aw_payload_size");}
    if (VL_UNLIKELY((axi_aw_payload_burst & 0xfcU))) {
        Verilated::overWidthError("axi_aw_payload_burst");}
    if (VL_UNLIKELY((axi_w_valid & 0xfeU))) {
        Verilated::overWidthError("axi_w_valid");}
    if (VL_UNLIKELY((axi_w_payload_strb & 0xf0U))) {
        Verilated::overWidthError("axi_w_payload_strb");}
    if (VL_UNLIKELY((axi_w_payload_last & 0xfeU))) {
        Verilated::overWidthError("axi_w_payload_last");}
    if (VL_UNLIKELY((axi_b_ready & 0xfeU))) {
        Verilated::overWidthError("axi_b_ready");}
    if (VL_UNLIKELY((axi_ar_valid & 0xfeU))) {
        Verilated::overWidthError("axi_ar_valid");}
    if (VL_UNLIKELY((axi_ar_payload_addr & 0xfff00000U))) {
        Verilated::overWidthError("axi_ar_payload_addr");}
    if (VL_UNLIKELY((axi_ar_payload_id & 0xf0U))) {
        Verilated::overWidthError("axi_ar_payload_id");}
    if (VL_UNLIKELY((axi_ar_payload_size & 0xf8U))) {
        Verilated::overWidthError("axi_ar_payload_size");}
    if (VL_UNLIKELY((axi_ar_payload_burst & 0xfcU))) {
        Verilated::overWidthError("axi_ar_payload_burst");}
    if (VL_UNLIKELY((axi_r_ready & 0xfeU))) {
        Verilated::overWidthError("axi_r_ready");}
    if (VL_UNLIKELY((bram_en & 0xfeU))) {
        Verilated::overWidthError("bram_en");}
    if (VL_UNLIKELY((bram_we & 0xf0U))) {
        Verilated::overWidthError("bram_we");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
