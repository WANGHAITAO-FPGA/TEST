// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPhpa_Test.h for the primary calling header

#include "VPhpa_Test.h"
#include "VPhpa_Test__Syms.h"

//==========

void VPhpa_Test::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VPhpa_Test::eval\n"); );
    VPhpa_Test__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VPhpa_Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("D:/SCALAWORK/EMIF_Test/tmp/job_1/Phpa_Test.v", 7, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VPhpa_Test::_eval_initial_loop(VPhpa_Test__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("D:/SCALAWORK/EMIF_Test/tmp/job_1/Phpa_Test.v", 7, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VPhpa_Test::_combo__TOP__4(VPhpa_Test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPhpa_Test::_combo__TOP__4\n"); );
    VPhpa_Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->emif_emif_data_writeEnable = (1U & (~ (IData)(vlTOPp->emif_emif_oe)));
    vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PWRITE 
        = ((~ (IData)(vlTOPp->emif_emif_we)) & (IData)(vlTOPp->emif_emif_oe));
}

VL_INLINE_OPT void VPhpa_Test::_sequent__TOP__6(VPhpa_Test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPhpa_Test::_sequent__TOP__6\n"); );
    VPhpa_Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__cnt5us 
        = vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__cnt5us;
    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state 
        = vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state;
    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i 
        = vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i;
    if ((1U & (~ (IData)(vlTOPp->emif_emif_oe)))) {
        vlTOPp->Phpa_Test__DOT__area_emif_interface__DOT__apb_PRDATA_regNextWhen 
            = vlTOPp->Phpa_Test__DOT__apb3Router_1__DOT___zz_io_input_PRDATA;
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__cnt5us = 0U;
    }
    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__cnt5us 
        = (((0xf9U > (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__cnt5us)) 
            & (0xfU == (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__cnt)))
            ? (0xffffU & ((IData)(1U) + (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__cnt5us)))
            : 0U);
    vlTOPp->Phpa_Test__DOT__apb3Router_1__DOT__selIndex 
        = ((4U & (((0x3ffffffcU & ((IData)(vlTOPp->Phpa_Test__DOT__apb_decoder_io_output_PSEL) 
                                   >> 2U)) | (0x1ffffffcU 
                                              & ((IData)(vlTOPp->Phpa_Test__DOT__apb_decoder_io_output_PSEL) 
                                                 >> 3U))) 
                  | (0xffffffcU & ((IData)(vlTOPp->Phpa_Test__DOT__apb_decoder_io_output_PSEL) 
                                   >> 4U)))) | ((2U 
                                                 & (((0x7ffffffeU 
                                                      & ((IData)(vlTOPp->Phpa_Test__DOT__apb_decoder_io_output_PSEL) 
                                                         >> 1U)) 
                                                     | (0x3ffffffeU 
                                                        & ((IData)(vlTOPp->Phpa_Test__DOT__apb_decoder_io_output_PSEL) 
                                                           >> 2U))) 
                                                    | (0x7fffffeU 
                                                       & ((IData)(vlTOPp->Phpa_Test__DOT__apb_decoder_io_output_PSEL) 
                                                          >> 5U)))) 
                                                | (1U 
                                                   & ((((IData)(vlTOPp->Phpa_Test__DOT__apb_decoder_io_output_PSEL) 
                                                        >> 1U) 
                                                       | ((IData)(vlTOPp->Phpa_Test__DOT__apb_decoder_io_output_PSEL) 
                                                          >> 3U)) 
                                                      | ((IData)(vlTOPp->Phpa_Test__DOT__apb_decoder_io_output_PSEL) 
                                                         >> 5U)))));
    if (vlTOPp->Phpa_Test__DOT__area_apbtimer__DOT___zz_io_tick) {
        vlTOPp->Phpa_Test__DOT__area_apbtimer__DOT__area_timerA__DOT__counter 
            = (0xffffU & ((IData)(vlTOPp->Phpa_Test__DOT__area_apbtimer__DOT__area_timerA__DOT__counter) 
                          + (1U & (~ (IData)(vlTOPp->Phpa_Test__DOT__area_apbtimer__DOT__area_timerA__DOT__limitHit)))));
    }
    if (vlTOPp->Phpa_Test__DOT__area_apbtimer__DOT__when_ApbTimer_l38) {
        vlTOPp->Phpa_Test__DOT__area_apbtimer__DOT__area_timerA__DOT__counter = 0U;
    }
    if ((0U != (0xfU & (vlTOPp->emif_emif_addr << 1U)))) {
        if ((1U == (0xfU & (vlTOPp->emif_emif_addr 
                            << 1U)))) {
            if (vlTOPp->Phpa_Test__DOT__area_apbtimer__DOT__area_busCtrl_doWrite) {
                vlTOPp->Phpa_Test__DOT__area_apbtimer__DOT__area_timerA_io_limit_driver 
                    = vlTOPp->emif_emif_data_read;
            }
        }
    }
    vlTOPp->Phpa_Test__DOT__area_ad5544_triger__DOT__area_temp_delay_3 
        = vlTOPp->Phpa_Test__DOT__area_ad5544_triger__DOT__area_temp_delay_2;
    vlTOPp->Phpa_Test__DOT__area_emif_interface__DOT__penable_regNext 
        = vlTOPp->Phpa_Test__DOT__area_emif_interface__DOT__penable;
    vlTOPp->emif_emif_data_write = vlTOPp->Phpa_Test__DOT__area_emif_interface__DOT__apb_PRDATA_regNextWhen;
    vlTOPp->Phpa_Test__DOT__area_ad5544_triger__DOT__area_temp_delay_2 
        = vlTOPp->Phpa_Test__DOT__area_ad5544_triger__DOT__area_temp_delay_1;
    vlTOPp->Phpa_Test__DOT__area_ad5544_triger__DOT__area_temp_delay_1 
        = vlTOPp->Phpa_Test__DOT__area_ad5544_triger__DOT__area_temp;
}

VL_INLINE_OPT void VPhpa_Test::_sequent__TOP__7(VPhpa_Test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPhpa_Test::_sequent__TOP__7\n"); );
    VPhpa_Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__Phpa_Test__DOT__area_ledtemp = vlTOPp->Phpa_Test__DOT__area_ledtemp;
    vlTOPp->__Vdly__Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__clk_dvidecnt 
        = vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__clk_dvidecnt;
    vlTOPp->__Vdly__Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__clk_out 
        = vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__clk_out;
    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_dvidecnt 
        = vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_dvidecnt;
    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_dvidecnt 
        = vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_dvidecnt;
}

VL_INLINE_OPT void VPhpa_Test::_sequent__TOP__8(VPhpa_Test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPhpa_Test::_sequent__TOP__8\n"); );
    VPhpa_Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*3:0*/ __Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_dvidecnt;
    CData/*0:0*/ __Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out;
    CData/*0:0*/ __Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out;
    CData/*0:0*/ __Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out;
    // Body
    __Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_dvidecnt 
        = vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_dvidecnt;
    __Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out 
        = vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out;
    __Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out 
        = vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out;
    __Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out 
        = vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out;
    vlTOPp->Phpa_Test__DOT__area_ad5544_triger__DOT__area_temp 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_triger__DOT__when_AD5544_l91));
    if (vlTOPp->reset) {
        vlTOPp->Phpa_Test__DOT__area_apbtimer__DOT__area_timerA__DOT__inhibitFull = 0U;
    } else {
        if (vlTOPp->Phpa_Test__DOT__area_apbtimer__DOT___zz_io_tick) {
            vlTOPp->Phpa_Test__DOT__area_apbtimer__DOT__area_timerA__DOT__inhibitFull 
                = vlTOPp->Phpa_Test__DOT__area_apbtimer__DOT__area_timerA__DOT__limitHit;
        }
        if (vlTOPp->Phpa_Test__DOT__area_apbtimer__DOT__when_ApbTimer_l38) {
            vlTOPp->Phpa_Test__DOT__area_apbtimer__DOT__area_timerA__DOT__inhibitFull = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__Phpa_Test__DOT__area_ledtemp = 0U;
    } else {
        if ((0x2faf07fU == vlTOPp->Phpa_Test__DOT__area_counter_value)) {
            vlTOPp->__Vdly__Phpa_Test__DOT__area_ledtemp 
                = (1U & (~ (IData)(vlTOPp->Phpa_Test__DOT__area_ledtemp)));
        }
    }
    vlTOPp->Phpa_Test__DOT__area_emif_interface__DOT__penable 
        = (1U & ((~ (IData)(vlTOPp->reset)) & ((~ (IData)(vlTOPp->emif_emif_oe)) 
                                               | (~ (IData)(vlTOPp->emif_emif_we)))));
    vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_pos_reg 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl_enc_position_out);
    if (vlTOPp->reset) {
        vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_data_temp_8 = 0x506U;
    } else {
        if (vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_data_valid_o) {
            vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_data_temp_8 
                = vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_ch8_o;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_data_temp_7 = 0x405U;
    } else {
        if (vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_data_valid_o) {
            vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_data_temp_7 
                = vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_ch7_o;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_data_temp_6 = 0x304U;
    } else {
        if (vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_data_valid_o) {
            vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_data_temp_6 
                = vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_ch6_o;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_data_temp_5 = 0x203U;
    } else {
        if (vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_data_valid_o) {
            vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_data_temp_5 
                = vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_ch5_o;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_data_temp_1 = 0x1234U;
    } else {
        if (vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_data_valid_o) {
            vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_data_temp_1 
                = vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_ch1_o;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_data_temp_2 = 0x5678U;
    } else {
        if (vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_data_valid_o) {
            vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_data_temp_2 
                = vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_ch2_o;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_data_temp_3 = 0xa0bU;
    } else {
        if (vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_data_valid_o) {
            vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_data_temp_3 
                = vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_ch3_o;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_data_temp_4 = 0x102U;
    } else {
        if (vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_data_valid_o) {
            vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_data_temp_4 
                = vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_ch4_o;
        }
    }
    vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_status_reg 
        = ((IData)(vlTOPp->reset) ? 0U : (((IData)(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl_erro_flag) 
                                           << 2U) | 
                                          (((IData)(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl_warn_flag) 
                                            << 1U) 
                                           | (1U & (IData)(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT____Vcellout__area_bissc_ctrl__crc_flag)))));
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__clk_dvidecnt = 0U;
        vlTOPp->__Vdly__Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__clk_out = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__clk_dvidecnt))) {
            vlTOPp->__Vdly__Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__clk_out 
                = (1U & (~ (IData)(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__clk_out)));
            vlTOPp->__Vdly__Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__clk_dvidecnt = 0U;
        } else {
            vlTOPp->__Vdly__Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__clk_dvidecnt 
                = (0xfU & ((IData)(1U) + (IData)(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__clk_dvidecnt)));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_dvidecnt = 0U;
        __Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_dvidecnt))) {
            __Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out 
                = (1U & (~ (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out)));
            vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_dvidecnt = 0U;
        } else {
            vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_dvidecnt 
                = (0xfU & ((IData)(1U) + (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_dvidecnt)));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_dvidecnt = 0U;
        __Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_dvidecnt))) {
            __Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out 
                = (1U & (~ (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out)));
            vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_dvidecnt = 0U;
        } else {
            vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_dvidecnt 
                = (0xfU & ((IData)(1U) + (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_dvidecnt)));
        }
    }
    if (vlTOPp->reset) {
        __Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_dvidecnt = 0U;
        __Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_dvidecnt))) {
            __Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out 
                = (1U & (~ (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out)));
            __Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_dvidecnt = 0U;
        } else {
            __Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_dvidecnt 
                = (0xfU & ((IData)(1U) + (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_dvidecnt)));
        }
    }
    vlTOPp->Phpa_Test__DOT__area_ledtemp = vlTOPp->__Vdly__Phpa_Test__DOT__area_ledtemp;
    vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__clk_dvidecnt 
        = vlTOPp->__Vdly__Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__clk_dvidecnt;
    vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__clk_out 
        = vlTOPp->__Vdly__Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__clk_out;
    vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_dvidecnt 
        = vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_dvidecnt;
    vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out 
        = __Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out;
    vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_dvidecnt 
        = vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_dvidecnt;
    vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out 
        = __Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out;
    vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_dvidecnt 
        = __Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_dvidecnt;
    vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out 
        = __Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out;
    vlTOPp->led = vlTOPp->Phpa_Test__DOT__area_ledtemp;
    vlTOPp->Phpa_Test__DOT__area_counter_value = ((IData)(vlTOPp->reset)
                                                   ? 0U
                                                   : vlTOPp->Phpa_Test__DOT__area_counter_valueNext);
    vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PENABLE 
        = (((IData)(vlTOPp->Phpa_Test__DOT__area_emif_interface__DOT__penable) 
            & (~ (IData)(vlTOPp->Phpa_Test__DOT__area_emif_interface__DOT__penable_regNext))) 
           & (IData)(vlTOPp->Phpa_Test__DOT__area_emif_interface__DOT__penable));
    vlTOPp->Phpa_Test__DOT__area_counter_willClear = 0U;
    if ((0x2faf07fU == vlTOPp->Phpa_Test__DOT__area_counter_value)) {
        vlTOPp->Phpa_Test__DOT__area_counter_willClear = 1U;
    }
    vlTOPp->Phpa_Test__DOT__area_counter_valueNext 
        = ((0x2faf07fU == vlTOPp->Phpa_Test__DOT__area_counter_value)
            ? 0U : (0x3ffffffU & ((IData)(1U) + vlTOPp->Phpa_Test__DOT__area_counter_value)));
    if (vlTOPp->Phpa_Test__DOT__area_counter_willClear) {
        vlTOPp->Phpa_Test__DOT__area_counter_valueNext = 0U;
    }
}

VL_INLINE_OPT void VPhpa_Test::_combo__TOP__9(VPhpa_Test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPhpa_Test::_combo__TOP__9\n"); );
    VPhpa_Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Phpa_Test__DOT__apb_decoder_io_output_PSEL 
        = ((0x7eU & (IData)(vlTOPp->Phpa_Test__DOT__apb_decoder_io_output_PSEL)) 
           | ((0x600U == (0xfff00U & (vlTOPp->emif_emif_addr 
                                      << 1U))) & (~ (IData)(vlTOPp->emif_emif_cs))));
    vlTOPp->Phpa_Test__DOT__apb_decoder_io_output_PSEL 
        = ((0x7dU & (IData)(vlTOPp->Phpa_Test__DOT__apb_decoder_io_output_PSEL)) 
           | (((0U == (0xfff00U & (vlTOPp->emif_emif_addr 
                                   << 1U))) & (~ (IData)(vlTOPp->emif_emif_cs))) 
              << 1U));
    vlTOPp->Phpa_Test__DOT__apb_decoder_io_output_PSEL 
        = ((0x7bU & (IData)(vlTOPp->Phpa_Test__DOT__apb_decoder_io_output_PSEL)) 
           | (((0x100U == (0xfff00U & (vlTOPp->emif_emif_addr 
                                       << 1U))) & (~ (IData)(vlTOPp->emif_emif_cs))) 
              << 2U));
    vlTOPp->Phpa_Test__DOT__apb_decoder_io_output_PSEL 
        = ((0x77U & (IData)(vlTOPp->Phpa_Test__DOT__apb_decoder_io_output_PSEL)) 
           | (((0x200U == (0xfff00U & (vlTOPp->emif_emif_addr 
                                       << 1U))) & (~ (IData)(vlTOPp->emif_emif_cs))) 
              << 3U));
    vlTOPp->Phpa_Test__DOT__apb_decoder_io_output_PSEL 
        = ((0x6fU & (IData)(vlTOPp->Phpa_Test__DOT__apb_decoder_io_output_PSEL)) 
           | (((0x300U == (0xfff00U & (vlTOPp->emif_emif_addr 
                                       << 1U))) & (~ (IData)(vlTOPp->emif_emif_cs))) 
              << 4U));
    vlTOPp->Phpa_Test__DOT__apb_decoder_io_output_PSEL 
        = ((0x5fU & (IData)(vlTOPp->Phpa_Test__DOT__apb_decoder_io_output_PSEL)) 
           | (((0x400U == (0xfff00U & (vlTOPp->emif_emif_addr 
                                       << 1U))) & (~ (IData)(vlTOPp->emif_emif_cs))) 
              << 5U));
    vlTOPp->Phpa_Test__DOT__apb_decoder_io_output_PSEL 
        = ((0x3fU & (IData)(vlTOPp->Phpa_Test__DOT__apb_decoder_io_output_PSEL)) 
           | (((0x500U == (0xfff00U & (vlTOPp->emif_emif_addr 
                                       << 1U))) & (~ (IData)(vlTOPp->emif_emif_cs))) 
              << 6U));
    vlTOPp->Phpa_Test__DOT__area_apbtimer_apb_PRDATA = 0U;
    if ((1U == (0xfU & (vlTOPp->emif_emif_addr << 1U)))) {
        vlTOPp->Phpa_Test__DOT__area_apbtimer_apb_PRDATA 
            = vlTOPp->Phpa_Test__DOT__area_apbtimer__DOT__area_timerA_io_limit_driver;
    }
    vlTOPp->Phpa_Test__DOT__area_ad5544_triger_apb_PRDATA = 0U;
    if ((2U == (0xfU & (vlTOPp->emif_emif_addr << 1U)))) {
        vlTOPp->Phpa_Test__DOT__area_ad5544_triger_apb_PRDATA 
            = ((0xfffeU & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_triger_apb_PRDATA)) 
               | (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_triger__DOT__area_temp));
    }
    vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl_apb_PRDATA = 0U;
    if ((1U & (~ (0x3ffffU & (vlTOPp->emif_emif_addr 
                              >> 2U))))) {
        vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl_apb_PRDATA 
            = ((2U & vlTOPp->emif_emif_addr) ? ((1U 
                                                 & vlTOPp->emif_emif_addr)
                                                 ? 
                                                ((1U 
                                                  & (vlTOPp->emif_emif_addr 
                                                     << 1U))
                                                  ? (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_data_temp_8)
                                                  : (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_data_temp_7))
                                                 : 
                                                ((1U 
                                                  & (vlTOPp->emif_emif_addr 
                                                     << 1U))
                                                  ? (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_data_temp_6)
                                                  : (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_data_temp_5)))
                : ((1U & vlTOPp->emif_emif_addr) ? 
                   ((1U & (vlTOPp->emif_emif_addr << 1U))
                     ? (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_data_temp_4)
                     : (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_data_temp_3))
                    : ((1U & (vlTOPp->emif_emif_addr 
                              << 1U)) ? (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_data_temp_2)
                        : (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_data_temp_1))));
    }
    vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl_apb_PRDATA = 0U;
    if ((0U == (0xfU & (vlTOPp->emif_emif_addr << 1U)))) {
        vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl_apb_PRDATA 
            = (0xffffU & (vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_pos_reg 
                          >> 0x10U));
    } else {
        if ((1U == (0xfU & (vlTOPp->emif_emif_addr 
                            << 1U)))) {
            vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl_apb_PRDATA 
                = (0xffffU & vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_pos_reg);
        } else {
            if ((2U == (0xfU & (vlTOPp->emif_emif_addr 
                                << 1U)))) {
                vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl_apb_PRDATA 
                    = vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_status_reg;
            }
        }
    }
    vlTOPp->Phpa_Test__DOT__apb_decoder__DOT__when_Apb3Decoder_l84 
        = ((~ (IData)(vlTOPp->emif_emif_cs)) & (0U 
                                                == (IData)(vlTOPp->Phpa_Test__DOT__apb_decoder_io_output_PSEL)));
    vlTOPp->Phpa_Test__DOT__area_ad5544_triger__DOT__when_AD5544_l91 = 0U;
    if ((2U == (0xfU & (vlTOPp->emif_emif_addr << 1U)))) {
        if (((((IData)(vlTOPp->Phpa_Test__DOT__apb_decoder_io_output_PSEL) 
               >> 1U) & (IData)(vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PENABLE)) 
             & (IData)(vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PWRITE))) {
            vlTOPp->Phpa_Test__DOT__area_ad5544_triger__DOT__when_AD5544_l91 = 1U;
        }
    }
    vlTOPp->Phpa_Test__DOT__apb_decoder_io_input_PREADY = 1U;
    if (vlTOPp->Phpa_Test__DOT__apb_decoder__DOT__when_Apb3Decoder_l84) {
        vlTOPp->Phpa_Test__DOT__apb_decoder_io_input_PREADY = 1U;
    }
    vlTOPp->Phpa_Test__DOT__apb_decoder_io_input_PSLVERROR = 0U;
    if (vlTOPp->Phpa_Test__DOT__apb_decoder__DOT__when_Apb3Decoder_l84) {
        vlTOPp->Phpa_Test__DOT__apb_decoder_io_input_PSLVERROR = 1U;
    }
}

VL_INLINE_OPT void VPhpa_Test::_sequent__TOP__10(VPhpa_Test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPhpa_Test::_sequent__TOP__10\n"); );
    VPhpa_Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Phpa_Test__DOT__area_apbtimer__DOT__when_ApbTimer_l38 
        = ((IData)(vlTOPp->Phpa_Test__DOT__area_apbtimer__DOT__area_timerA_io_limit_driver) 
           <= (IData)(vlTOPp->Phpa_Test__DOT__area_apbtimer__DOT__area_timerA__DOT__counter));
    vlTOPp->Phpa_Test__DOT__area_apbtimer__DOT__area_timerA__DOT__limitHit 
        = ((IData)(vlTOPp->Phpa_Test__DOT__area_apbtimer__DOT__area_timerA__DOT__counter) 
           == (IData)(vlTOPp->Phpa_Test__DOT__area_apbtimer__DOT__area_timerA_io_limit_driver));
    if ((0U == (0xfU & (vlTOPp->emif_emif_addr << 1U)))) {
        if (vlTOPp->Phpa_Test__DOT__area_apbtimer__DOT__area_busCtrl_doWrite) {
            vlTOPp->Phpa_Test__DOT__area_apbtimer__DOT___zz_io_tick 
                = (1U & (IData)(vlTOPp->emif_emif_data_read));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_cs = 1U;
        vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_rd = 1U;
        vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_convsta = 1U;
        vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_convstb = 1U;
        vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i = 0U;
        vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_ch1_o = 0U;
        vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_ch2_o = 0U;
        vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_ch3_o = 0U;
        vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_ch4_o = 0U;
        vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_ch5_o = 0U;
        vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_ch6_o = 0U;
        vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_ch7_o = 0U;
        vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_ch8_o = 0U;
        vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_data_valid_o = 0U;
        vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state = 0U;
    } else {
        if (vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_reset) {
            vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_cs = 1U;
            vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_rd = 1U;
            vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_convsta = 1U;
            vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_convstb = 1U;
            vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i = 0U;
            vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state = 0U;
        } else {
            if ((0x80U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state))) {
                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state = 0U;
            } else {
                if ((0x40U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state))) {
                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state = 0U;
                } else {
                    if ((0x20U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state))) {
                        vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state = 0U;
                    } else {
                        if ((0x10U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state))) {
                            if ((8U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state))) {
                                if ((4U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state))) {
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state = 0U;
                                } else {
                                    if ((2U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state))) {
                                        vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state = 0U;
                                    } else {
                                        if ((1U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state))) {
                                            vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_rd = 1U;
                                            vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_cs = 1U;
                                            vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_data_valid_o = 0U;
                                            vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state 
                                                = (
                                                   (0xf9U 
                                                    == (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__cnt5us))
                                                    ? 1U
                                                    : 0x19U);
                                        } else {
                                            if ((1U 
                                                 == (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i))) {
                                                vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_data_valid_o = 1U;
                                                vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_rd = 1U;
                                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i = 0U;
                                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state = 0x19U;
                                            } else {
                                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i 
                                                    = 
                                                    (0xffU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i)));
                                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state = 0x18U;
                                            }
                                        }
                                    }
                                }
                            } else {
                                if ((4U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state))) {
                                    if ((2U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state))) {
                                        if ((1U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state))) {
                                            if ((1U 
                                                 == (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i))) {
                                                vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_rd = 1U;
                                                vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_ch8_o 
                                                    = vlTOPp->ad7606_ad_data;
                                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i = 0U;
                                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state = 0x18U;
                                            } else {
                                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i 
                                                    = 
                                                    (0xffU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i)));
                                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state = 0x17U;
                                            }
                                        } else {
                                            if ((1U 
                                                 == (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i))) {
                                                vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_rd = 0U;
                                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i = 0U;
                                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state = 0x17U;
                                            } else {
                                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i 
                                                    = 
                                                    (0xffU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i)));
                                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state = 0x16U;
                                            }
                                        }
                                    } else {
                                        if ((1U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state))) {
                                            if ((1U 
                                                 == (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i))) {
                                                vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_rd = 1U;
                                                vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_ch7_o 
                                                    = vlTOPp->ad7606_ad_data;
                                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i = 0U;
                                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state = 0x16U;
                                            } else {
                                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i 
                                                    = 
                                                    (0xffU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i)));
                                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state = 0x15U;
                                            }
                                        } else {
                                            if ((1U 
                                                 == (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i))) {
                                                vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_rd = 0U;
                                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i = 0U;
                                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state = 0x15U;
                                            } else {
                                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i 
                                                    = 
                                                    (0xffU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i)));
                                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state = 0x14U;
                                            }
                                        }
                                    }
                                } else {
                                    if ((2U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state))) {
                                        if ((1U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state))) {
                                            if ((1U 
                                                 == (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i))) {
                                                vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_rd = 1U;
                                                vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_ch6_o 
                                                    = vlTOPp->ad7606_ad_data;
                                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i = 0U;
                                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state = 0x14U;
                                            } else {
                                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i 
                                                    = 
                                                    (0xffU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i)));
                                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state = 0x13U;
                                            }
                                        } else {
                                            if ((1U 
                                                 == (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i))) {
                                                vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_rd = 0U;
                                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i = 0U;
                                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state = 0x13U;
                                            } else {
                                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i 
                                                    = 
                                                    (0xffU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i)));
                                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state = 0x12U;
                                            }
                                        }
                                    } else {
                                        if ((1U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state))) {
                                            if ((1U 
                                                 == (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i))) {
                                                vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_rd = 1U;
                                                vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_ch5_o 
                                                    = vlTOPp->ad7606_ad_data;
                                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i = 0U;
                                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state = 0x12U;
                                            } else {
                                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i 
                                                    = 
                                                    (0xffU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i)));
                                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state = 0x11U;
                                            }
                                        } else {
                                            if ((1U 
                                                 == (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i))) {
                                                vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_rd = 0U;
                                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i = 0U;
                                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state = 0x11U;
                                            } else {
                                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i 
                                                    = 
                                                    (0xffU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i)));
                                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state = 0x10U;
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            if ((8U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state))) {
                                if ((4U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state))) {
                                    if ((2U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state))) {
                                        if ((1U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state))) {
                                            if ((1U 
                                                 == (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i))) {
                                                vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_rd = 1U;
                                                vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_ch4_o 
                                                    = vlTOPp->ad7606_ad_data;
                                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i = 0U;
                                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state = 0x10U;
                                            } else {
                                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i 
                                                    = 
                                                    (0xffU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i)));
                                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state = 0xfU;
                                            }
                                        } else {
                                            if ((1U 
                                                 == (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i))) {
                                                vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_rd = 0U;
                                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i = 0U;
                                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state = 0xfU;
                                            } else {
                                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i 
                                                    = 
                                                    (0xffU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i)));
                                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state = 0xeU;
                                            }
                                        }
                                    } else {
                                        if ((1U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state))) {
                                            if ((1U 
                                                 == (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i))) {
                                                vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_rd = 1U;
                                                vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_ch3_o 
                                                    = vlTOPp->ad7606_ad_data;
                                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i = 0U;
                                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state = 0xeU;
                                            } else {
                                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i 
                                                    = 
                                                    (0xffU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i)));
                                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state = 0xdU;
                                            }
                                        } else {
                                            if ((1U 
                                                 == (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i))) {
                                                vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_rd = 0U;
                                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i = 0U;
                                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state = 0xdU;
                                            } else {
                                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i 
                                                    = 
                                                    (0xffU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i)));
                                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state = 0xcU;
                                            }
                                        }
                                    }
                                } else {
                                    if ((2U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state))) {
                                        if ((1U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state))) {
                                            if ((1U 
                                                 == (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i))) {
                                                vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_rd = 1U;
                                                vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_ch2_o 
                                                    = vlTOPp->ad7606_ad_data;
                                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i = 0U;
                                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state = 0xcU;
                                            } else {
                                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i 
                                                    = 
                                                    (0xffU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i)));
                                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state = 0xbU;
                                            }
                                        } else {
                                            if ((1U 
                                                 == (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i))) {
                                                vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_rd = 0U;
                                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i = 0U;
                                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state = 0xbU;
                                            } else {
                                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i 
                                                    = 
                                                    (0xffU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i)));
                                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state = 0xaU;
                                            }
                                        }
                                    } else {
                                        if ((1U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state))) {
                                            if ((1U 
                                                 == (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i))) {
                                                vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_rd = 1U;
                                                vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_ch1_o 
                                                    = vlTOPp->ad7606_ad_data;
                                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i = 0U;
                                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state = 0xaU;
                                            } else {
                                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i 
                                                    = 
                                                    (0xffU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i)));
                                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state = 9U;
                                            }
                                        } else {
                                            vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state 
                                                = ((IData)(vlTOPp->ad7606_first_data)
                                                    ? 9U
                                                    : 8U);
                                        }
                                    }
                                }
                            } else {
                                if ((4U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state))) {
                                    if ((2U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state))) {
                                        if ((1U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state))) {
                                            vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state = 8U;
                                        } else {
                                            vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_cs = 0U;
                                            vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_rd = 0U;
                                            vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state = 7U;
                                        }
                                    } else {
                                        if ((1U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state))) {
                                            vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state 
                                                = ((IData)(vlTOPp->ad7606_ad_busy)
                                                    ? 5U
                                                    : 6U);
                                        } else {
                                            if ((5U 
                                                 == (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i))) {
                                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i = 0U;
                                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state = 5U;
                                            } else {
                                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i 
                                                    = 
                                                    (0xffU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i)));
                                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state = 4U;
                                            }
                                        }
                                    }
                                } else {
                                    if ((2U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state))) {
                                        if ((1U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state))) {
                                            if ((2U 
                                                 == (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i))) {
                                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i = 0U;
                                                vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_convsta = 1U;
                                                vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_convstb = 1U;
                                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state = 4U;
                                            } else {
                                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i 
                                                    = 
                                                    (0xffU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i)));
                                                vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_convsta = 0U;
                                                vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_convstb = 0U;
                                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state = 3U;
                                            }
                                        } else {
                                            if ((5U 
                                                 == (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i))) {
                                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i = 0U;
                                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state = 3U;
                                            } else {
                                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i 
                                                    = 
                                                    (0xffU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i)));
                                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state = 2U;
                                            }
                                        }
                                    } else {
                                        if ((1U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state))) {
                                            vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_cs = 1U;
                                            vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_rd = 1U;
                                            vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_convsta = 1U;
                                            vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_convstb = 1U;
                                            vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_data_valid_o = 0U;
                                            vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state = 2U;
                                        } else {
                                            vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void VPhpa_Test::_sequent__TOP__11(VPhpa_Test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPhpa_Test::_sequent__TOP__11\n"); );
    VPhpa_Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i 
        = vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i;
    vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state 
        = vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state;
    vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__cnt5us 
        = vlTOPp->__Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__cnt5us;
    vlTOPp->ad7606_ad_cs = vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_cs;
    vlTOPp->ad7606_ad_rd = vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_rd;
    vlTOPp->ad7606_ad_convsta = vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_convsta;
    vlTOPp->ad7606_ad_convstb = vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_convstb;
    if (vlTOPp->reset) {
        vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_reset = 0U;
    }
    if ((0xfU > (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__cnt))) {
        vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__cnt 
            = (0xffU & ((IData)(1U) + (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__cnt)));
        vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_reset = 1U;
    } else {
        vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_reset = 0U;
    }
    vlTOPp->ad7606_ad_reset = vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_reset;
}

VL_INLINE_OPT void VPhpa_Test::_sequent__TOP__13(VPhpa_Test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPhpa_Test::_sequent__TOP__13\n"); );
    VPhpa_Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl_enc_position_all 
        = vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl_enc_position_all;
    vlTOPp->__Vdly__Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__start_flag 
        = vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__start_flag;
    vlTOPp->__Vdly__Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__DATA_CNT 
        = vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__DATA_CNT;
    vlTOPp->__Vdly__Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__CNT 
        = vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__CNT;
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__CNT = 0U;
        vlTOPp->__Vdly__Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__DATA_CNT = 0U;
        vlTOPp->__Vdly__Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__start_flag = 0U;
        vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl_enc_clk = 1U;
        vlTOPp->__Vdly__Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl_enc_position_all = VL_ULL(0);
        vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl_enc_position_out = 0U;
        vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl_erro_flag = 0U;
        vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl_warn_flag = 0U;
        vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT____Vcellout__area_bissc_ctrl__crc_flag = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__Curr_State))) {
            vlTOPp->__Vdly__Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__CNT = 0U;
            vlTOPp->__Vdly__Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__DATA_CNT = 0U;
            vlTOPp->__Vdly__Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__start_flag = 0U;
            vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl_enc_clk = 1U;
            vlTOPp->__Vdly__Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl_enc_position_all = VL_ULL(0);
            vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl_enc_position_out = 0U;
            vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl_erro_flag = 0U;
            vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl_warn_flag = 0U;
            vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT____Vcellout__area_bissc_ctrl__crc_flag = 0U;
        } else {
            if ((2U == (IData)(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__Curr_State))) {
                vlTOPp->__Vdly__Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__CNT = 0U;
                vlTOPp->__Vdly__Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__DATA_CNT = 0U;
                vlTOPp->__Vdly__Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__start_flag = 0U;
                vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl_enc_clk = 1U;
            } else {
                if ((4U == (IData)(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__Curr_State))) {
                    vlTOPp->__Vdly__Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__CNT 
                        = ((0x64U <= (IData)(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__CNT))
                            ? 0U : (0xfffU & ((IData)(1U) 
                                              + (IData)(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__CNT))));
                } else {
                    if ((8U == (IData)(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__Curr_State))) {
                        if ((0x29U <= (IData)(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__DATA_CNT))) {
                            vlTOPp->__Vdly__Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__CNT = 0U;
                            vlTOPp->__Vdly__Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__DATA_CNT = 0U;
                            vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl_enc_clk = 1U;
                        } else {
                            vlTOPp->__Vdly__Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__CNT 
                                = (0xfffU & ((IData)(1U) 
                                             + (IData)(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__CNT)));
                        }
                        if ((0U == (0x3fU & (IData)(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__CNT)))) {
                            vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl_enc_clk = 0U;
                        }
                        if ((0x20U == (0x3fU & (IData)(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__CNT)))) {
                            if ((2U == (IData)(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__start_flag))) {
                                vlTOPp->__Vdly__Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__DATA_CNT 
                                    = (0xfffU & ((IData)(1U) 
                                                 + (IData)(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__DATA_CNT)));
                            }
                            vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl_enc_clk = 1U;
                        }
                        if ((((~ (IData)(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__ENC_SLO_1reg)) 
                              & (IData)(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__ENC_SLO_2reg)) 
                             & (2U > (IData)(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__start_flag)))) {
                            vlTOPp->__Vdly__Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__start_flag 
                                = (3U & ((IData)(1U) 
                                         + (IData)(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__start_flag)));
                        }
                        if (((2U == (0x3fU & (IData)(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__CNT))) 
                             & (2U == (IData)(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__start_flag)))) {
                            vlTOPp->__Vdly__Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl_enc_position_all 
                                = ((VL_ULL(0x1fffffffffe) 
                                    & (vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl_enc_position_all 
                                       << 1U)) | (QData)((IData)(vlTOPp->biss_c_enc_data)));
                        }
                    } else {
                        if ((0x10U == (IData)(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__Curr_State))) {
                            vlTOPp->__Vdly__Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__CNT = 0U;
                            vlTOPp->__Vdly__Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__DATA_CNT = 0U;
                            vlTOPp->__Vdly__Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__start_flag = 0U;
                            vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl_enc_clk = 1U;
                            vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl_enc_position_out 
                                = (IData)((vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl_enc_position_all 
                                           >> 8U));
                            vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl_erro_flag 
                                = (1U & (IData)((vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl_enc_position_all 
                                                 >> 7U)));
                            vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl_warn_flag 
                                = (1U & (IData)((vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl_enc_position_all 
                                                 >> 6U)));
                            vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT____Vcellout__area_bissc_ctrl__crc_flag 
                                = (0x3fU & (IData)(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl_enc_position_all));
                        } else {
                            if ((0x20U == (IData)(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__Curr_State))) {
                                if (vlTOPp->biss_c_enc_data) {
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__CNT 
                                        = ((0x7d0U 
                                            <= (IData)(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__CNT))
                                            ? 0U : 
                                           (0xfffU 
                                            & ((IData)(1U) 
                                               + (IData)(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__CNT))));
                                } else {
                                    vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl_enc_clk = 1U;
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__CNT = 0U;
                                    vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl_erro_flag = 0U;
                                    vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl_warn_flag = 0U;
                                    vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT____Vcellout__area_bissc_ctrl__crc_flag = 0U;
                                }
                            } else {
                                vlTOPp->__Vdly__Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__CNT = 0U;
                                vlTOPp->__Vdly__Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__DATA_CNT = 0U;
                                vlTOPp->__Vdly__Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__start_flag = 0U;
                                vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl_enc_clk = 1U;
                                vlTOPp->__Vdly__Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl_enc_position_all = VL_ULL(0);
                                vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl_enc_position_out = 0U;
                                vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl_erro_flag = 0U;
                                vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl_warn_flag = 0U;
                                vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT____Vcellout__area_bissc_ctrl__crc_flag = 0U;
                            }
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void VPhpa_Test::_sequent__TOP__14(VPhpa_Test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPhpa_Test::_sequent__TOP__14\n"); );
    VPhpa_Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__start_flag 
        = vlTOPp->__Vdly__Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__start_flag;
    vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl_enc_position_all 
        = vlTOPp->__Vdly__Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl_enc_position_all;
    vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__CNT 
        = vlTOPp->__Vdly__Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__CNT;
    vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__DATA_CNT 
        = vlTOPp->__Vdly__Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__DATA_CNT;
    vlTOPp->biss_c_enc_clk = vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl_enc_clk;
    vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__Curr_State 
        = ((IData)(vlTOPp->reset) ? 1U : (IData)(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__Next_State));
}

VL_INLINE_OPT void VPhpa_Test::_sequent__TOP__16(VPhpa_Test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPhpa_Test::_sequent__TOP__16\n"); );
    VPhpa_Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg 
        = vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg;
    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__channel 
        = vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__channel;
    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt 
        = vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt;
    if (vlTOPp->reset) {
        vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_CS = 1U;
    } else {
        if ((0x40U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
            vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_CS = 1U;
        } else {
            if ((0x20U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_CS = 1U;
            } else {
                if ((0x10U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                    if ((8U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                        vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_CS = 1U;
                    } else {
                        if ((4U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                            vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_CS = 1U;
                        } else {
                            if ((2U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                                vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_CS = 1U;
                            } else {
                                if ((1U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_CS = 1U;
                                }
                            }
                        }
                    }
                } else {
                    vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_CS 
                        = (1U & ((~ ((IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state) 
                                     >> 3U)) | (((IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state) 
                                                 >> 2U) 
                                                | (((IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state) 
                                                    >> 1U) 
                                                   | (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state)))));
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_RS = 0U;
    } else {
        if ((0x40U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
            vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_RS 
                = (1U & ((~ ((IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state) 
                             >> 5U)) & ((~ ((IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state) 
                                            >> 4U)) 
                                        & ((~ ((IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state) 
                                               >> 3U)) 
                                           & ((~ ((IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state) 
                                                  >> 2U)) 
                                              & ((~ 
                                                  ((IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state) 
                                                   >> 1U)) 
                                                 & (~ (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))))))));
        } else {
            if ((0x20U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                if ((0x10U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                    vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_RS = 0U;
                } else {
                    if ((8U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                        vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_RS = 0U;
                    } else {
                        if ((4U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                            vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_RS = 0U;
                        } else {
                            if ((2U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                                vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_RS = 0U;
                            } else {
                                if ((1U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_RS = 0U;
                                }
                            }
                        }
                    }
                }
            } else {
                if ((0x10U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                    if ((8U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                        vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_RS = 0U;
                    } else {
                        if ((4U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                            vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_RS = 0U;
                        } else {
                            if ((2U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                                vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_RS = 0U;
                            } else {
                                if ((1U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_RS = 0U;
                                }
                            }
                        }
                    }
                } else {
                    if ((8U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                        if ((4U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                            vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_RS = 0U;
                        } else {
                            if ((2U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                                vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_RS = 0U;
                            } else {
                                if ((1U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_RS = 0U;
                                }
                            }
                        }
                    } else {
                        vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_RS 
                            = (1U & ((4U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
                                      ? ((~ ((IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state) 
                                             >> 1U)) 
                                         & (~ (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state)))
                                      : (((IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state) 
                                          >> 1U) & 
                                         (~ (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state)))));
                    }
                }
            }
        }
    }
    vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__ad5544_trig_reg2 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__ad5544_trig_reg1));
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = 0U;
        vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = 1U;
        vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
        vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN = 0U;
        vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = 0U;
        vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__channel = 1U;
    } else {
        if ((0x40U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
            if ((0x20U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = 0U;
                vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = 1U;
                vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN = 0U;
                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = 0U;
                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__channel = 1U;
            } else {
                if ((0x10U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = 0U;
                    vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = 1U;
                    vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                    vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN = 0U;
                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = 0U;
                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__channel = 1U;
                } else {
                    if ((8U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                        vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = 0U;
                        vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = 1U;
                        vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                        vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN = 0U;
                        vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = 0U;
                        vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__channel = 1U;
                    } else {
                        if ((4U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                            vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = 0U;
                            vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = 1U;
                            vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                            vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN = 0U;
                            vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = 0U;
                            vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__channel = 1U;
                        } else {
                            if ((2U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = 0U;
                                vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = 1U;
                                vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                                vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN = 0U;
                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = 0U;
                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__channel = 1U;
                            } else {
                                if ((1U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = 0U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = 1U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN = 0U;
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = 0U;
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__channel = 1U;
                                } else {
                                    if ((3U == (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt))) {
                                        vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__channel 
                                            = (0xfU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__channel)));
                                        vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = 0U;
                                    } else {
                                        vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt 
                                            = (0x3ffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt)));
                                    }
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = 1U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN = 0U;
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = 0U;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((0x20U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                if ((0x10U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = 0U;
                    vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = 1U;
                    vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                    vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN = 0U;
                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = 0U;
                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__channel = 1U;
                } else {
                    if ((8U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                        vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = 0U;
                        vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = 1U;
                        vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                        vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN = 0U;
                        vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = 0U;
                        vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__channel = 1U;
                    } else {
                        if ((4U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                            vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = 0U;
                            vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = 1U;
                            vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                            vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN = 0U;
                            vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = 0U;
                            vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__channel = 1U;
                        } else {
                            if ((2U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = 0U;
                                vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = 1U;
                                vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                                vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN = 0U;
                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = 0U;
                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__channel = 1U;
                            } else {
                                if ((1U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = 0U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = 1U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN = 0U;
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = 0U;
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__channel = 1U;
                                } else {
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt 
                                        = ((5U == (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt))
                                            ? 0U : 
                                           (0x3ffU 
                                            & ((IData)(1U) 
                                               + (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt))));
                                    if (((2U <= (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt)) 
                                         & (4U >= (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt)))) {
                                        vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = 0U;
                                    }
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = 0U;
                                }
                            }
                        }
                    }
                }
            } else {
                if ((0x10U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                    if ((8U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                        vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = 0U;
                        vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = 1U;
                        vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                        vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN = 0U;
                        vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = 0U;
                        vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__channel = 1U;
                    } else {
                        if ((4U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                            vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = 0U;
                            vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = 1U;
                            vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                            vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN = 0U;
                            vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = 0U;
                            vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__channel = 1U;
                        } else {
                            if ((2U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = 0U;
                                vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = 1U;
                                vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                                vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN = 0U;
                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = 0U;
                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__channel = 1U;
                            } else {
                                if ((1U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = 0U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = 1U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN = 0U;
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = 0U;
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__channel = 1U;
                                } else {
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt 
                                        = ((0x49U == (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt))
                                            ? 0U : 
                                           (0x3ffU 
                                            & ((IData)(1U) 
                                               + (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt))));
                                    if ((0U == (3U 
                                                & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt)))) {
                                        vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                                    }
                                    if ((1U == (3U 
                                                & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt)))) {
                                        vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                                        vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN 
                                            = (1U & 
                                               (vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg 
                                                >> 0x11U));
                                    }
                                    if ((2U == (3U 
                                                & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt)))) {
                                        vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg 
                                            = (0x3fffeU 
                                               & (vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg 
                                                  << 1U));
                                        vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if ((8U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                        if ((4U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                            vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = 0U;
                            vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = 1U;
                            vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                            vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN = 0U;
                            vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = 0U;
                            vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__channel = 1U;
                        } else {
                            if ((2U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = 0U;
                                vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = 1U;
                                vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                                vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN = 0U;
                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = 0U;
                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__channel = 1U;
                            } else {
                                if ((1U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = 0U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = 1U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN = 0U;
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = 0U;
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__channel = 1U;
                                } else {
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt 
                                        = ((3U == (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt))
                                            ? 0U : 
                                           (0x3ffU 
                                            & ((IData)(1U) 
                                               + (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt))));
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg 
                                        = ((8U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__channel))
                                            ? vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg
                                            : ((4U 
                                                & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__channel))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__channel))
                                                    ? vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__channel))
                                                     ? vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg
                                                     : 
                                                    (0x30000U 
                                                     | (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN4_driver))))
                                                : (
                                                   (2U 
                                                    & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__channel))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__channel))
                                                     ? 
                                                    (0x20000U 
                                                     | (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN3_driver))
                                                     : 
                                                    (0x10000U 
                                                     | (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN2_driver)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__channel))
                                                     ? (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN1_driver)
                                                     : vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg))));
                                }
                            }
                        }
                    } else {
                        if ((4U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                            if ((2U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = 0U;
                                vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = 1U;
                                vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                                vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN = 0U;
                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = 0U;
                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__channel = 1U;
                            } else {
                                if ((1U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = 0U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = 1U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN = 0U;
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = 0U;
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__channel = 1U;
                                } else {
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt 
                                        = ((5U == (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt))
                                            ? 0U : 
                                           (0x3ffU 
                                            & ((IData)(1U) 
                                               + (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt))));
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__channel 
                                        = vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__channel;
                                }
                            }
                        } else {
                            if ((2U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                                if ((1U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = 0U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = 1U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN = 0U;
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = 0U;
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__channel = 1U;
                                } else {
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = 0U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = 1U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN = 0U;
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = 0U;
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__channel = 1U;
                                }
                            } else {
                                if ((1U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = 0U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = 1U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN = 0U;
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = 0U;
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__channel = 1U;
                                } else {
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = 0U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = 1U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN = 0U;
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = 0U;
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__channel = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void VPhpa_Test::_sequent__TOP__17(VPhpa_Test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPhpa_Test::_sequent__TOP__17\n"); );
    VPhpa_Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg 
        = vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg;
    vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt 
        = vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt;
    vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__channel 
        = vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__channel;
    vlTOPp->ad5544_C_AD5544_CS = vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_CS;
    vlTOPp->ad5544_C_AD5544_RS = vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_RS;
    vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__ad5544_trig_reg1 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_triger_ad5544_tri) 
                                         | (IData)(vlTOPp->Phpa_Test__DOT__area_interrupt_temp)));
    vlTOPp->ad5544_C_AD5544_LDAC = vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC;
    vlTOPp->ad5544_C_AD5544_SCLK = vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK;
    vlTOPp->ad5544_C_AD5544_SDIN = vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN;
    vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state 
        = ((IData)(vlTOPp->reset) ? 1U : (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__next_state));
    vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__next_state 
        = ((0x40U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
            ? ((0x20U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
                ? 2U : ((0x10U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
                         ? 2U : ((8U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
                                  ? 2U : ((4U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
                                           ? 2U : (
                                                   (2U 
                                                    & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
                                                    ? 2U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
                                                     ? 2U
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt))
                                                      ? 
                                                     ((4U 
                                                       == (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__channel))
                                                       ? 2U
                                                       : 4U)
                                                      : 0x40U)))))))
            : ((0x20U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
                ? ((0x10U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
                    ? 2U : ((8U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
                             ? 2U : ((4U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
                                      ? 2U : ((2U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
                                               ? 2U
                                               : ((1U 
                                                   & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
                                                   ? 2U
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt))
                                                    ? 0x40U
                                                    : 0x20U))))))
                : ((0x10U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
                    ? ((8U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
                        ? 2U : ((4U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
                                 ? 2U : ((2U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
                                          ? 2U : ((1U 
                                                   & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
                                                   ? 2U
                                                   : 
                                                  ((0x49U 
                                                    == (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt))
                                                    ? 0x20U
                                                    : 0x10U)))))
                    : ((8U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
                        ? ((4U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
                            ? 2U : ((2U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
                                     ? 2U : ((1U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
                                              ? 2U : 
                                             ((3U == (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt))
                                               ? 0x10U
                                               : 8U))))
                        : ((4U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
                            ? ((2U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
                                ? 2U : ((1U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
                                         ? 2U : ((5U 
                                                  == (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt))
                                                  ? 8U
                                                  : 4U)))
                            : ((2U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
                                ? ((1U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
                                    ? 2U : (((IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__ad5544_trig_reg1) 
                                             & (~ (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__ad5544_trig_reg2)))
                                             ? 4U : 2U))
                                : 2U))))));
}

VL_INLINE_OPT void VPhpa_Test::_sequent__TOP__19(VPhpa_Test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPhpa_Test::_sequent__TOP__19\n"); );
    VPhpa_Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg 
        = vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg;
    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__channel 
        = vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__channel;
    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt 
        = vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt;
    if (vlTOPp->reset) {
        vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_CS = 1U;
    } else {
        if ((0x40U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
            vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_CS = 1U;
        } else {
            if ((0x20U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_CS = 1U;
            } else {
                if ((0x10U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                    if ((8U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                        vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_CS = 1U;
                    } else {
                        if ((4U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                            vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_CS = 1U;
                        } else {
                            if ((2U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                                vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_CS = 1U;
                            } else {
                                if ((1U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_CS = 1U;
                                }
                            }
                        }
                    }
                } else {
                    vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_CS 
                        = (1U & ((~ ((IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state) 
                                     >> 3U)) | (((IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state) 
                                                 >> 2U) 
                                                | (((IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state) 
                                                    >> 1U) 
                                                   | (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state)))));
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_RS = 0U;
    } else {
        if ((0x40U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
            vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_RS 
                = (1U & ((~ ((IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state) 
                             >> 5U)) & ((~ ((IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state) 
                                            >> 4U)) 
                                        & ((~ ((IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state) 
                                               >> 3U)) 
                                           & ((~ ((IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state) 
                                                  >> 2U)) 
                                              & ((~ 
                                                  ((IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state) 
                                                   >> 1U)) 
                                                 & (~ (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))))))));
        } else {
            if ((0x20U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                if ((0x10U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                    vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_RS = 0U;
                } else {
                    if ((8U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                        vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_RS = 0U;
                    } else {
                        if ((4U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                            vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_RS = 0U;
                        } else {
                            if ((2U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                                vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_RS = 0U;
                            } else {
                                if ((1U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_RS = 0U;
                                }
                            }
                        }
                    }
                }
            } else {
                if ((0x10U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                    if ((8U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                        vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_RS = 0U;
                    } else {
                        if ((4U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                            vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_RS = 0U;
                        } else {
                            if ((2U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                                vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_RS = 0U;
                            } else {
                                if ((1U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_RS = 0U;
                                }
                            }
                        }
                    }
                } else {
                    if ((8U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                        if ((4U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                            vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_RS = 0U;
                        } else {
                            if ((2U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                                vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_RS = 0U;
                            } else {
                                if ((1U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_RS = 0U;
                                }
                            }
                        }
                    } else {
                        vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_RS 
                            = (1U & ((4U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
                                      ? ((~ ((IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state) 
                                             >> 1U)) 
                                         & (~ (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state)))
                                      : (((IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state) 
                                          >> 1U) & 
                                         (~ (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state)))));
                    }
                }
            }
        }
    }
    vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__ad5544_trig_reg2 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__ad5544_trig_reg1));
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = 0U;
        vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = 1U;
        vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
        vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN = 0U;
        vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = 0U;
        vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__channel = 1U;
    } else {
        if ((0x40U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
            if ((0x20U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = 0U;
                vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = 1U;
                vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN = 0U;
                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = 0U;
                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__channel = 1U;
            } else {
                if ((0x10U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = 0U;
                    vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = 1U;
                    vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                    vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN = 0U;
                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = 0U;
                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__channel = 1U;
                } else {
                    if ((8U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                        vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = 0U;
                        vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = 1U;
                        vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                        vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN = 0U;
                        vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = 0U;
                        vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__channel = 1U;
                    } else {
                        if ((4U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                            vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = 0U;
                            vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = 1U;
                            vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                            vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN = 0U;
                            vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = 0U;
                            vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__channel = 1U;
                        } else {
                            if ((2U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = 0U;
                                vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = 1U;
                                vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                                vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN = 0U;
                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = 0U;
                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__channel = 1U;
                            } else {
                                if ((1U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = 0U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = 1U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN = 0U;
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = 0U;
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__channel = 1U;
                                } else {
                                    if ((3U == (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt))) {
                                        vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__channel 
                                            = (0xfU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__channel)));
                                        vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = 0U;
                                    } else {
                                        vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt 
                                            = (0x3ffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt)));
                                    }
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = 1U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN = 0U;
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = 0U;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((0x20U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                if ((0x10U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = 0U;
                    vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = 1U;
                    vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                    vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN = 0U;
                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = 0U;
                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__channel = 1U;
                } else {
                    if ((8U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                        vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = 0U;
                        vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = 1U;
                        vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                        vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN = 0U;
                        vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = 0U;
                        vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__channel = 1U;
                    } else {
                        if ((4U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                            vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = 0U;
                            vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = 1U;
                            vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                            vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN = 0U;
                            vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = 0U;
                            vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__channel = 1U;
                        } else {
                            if ((2U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = 0U;
                                vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = 1U;
                                vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                                vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN = 0U;
                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = 0U;
                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__channel = 1U;
                            } else {
                                if ((1U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = 0U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = 1U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN = 0U;
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = 0U;
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__channel = 1U;
                                } else {
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt 
                                        = ((5U == (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt))
                                            ? 0U : 
                                           (0x3ffU 
                                            & ((IData)(1U) 
                                               + (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt))));
                                    if (((2U <= (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt)) 
                                         & (4U >= (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt)))) {
                                        vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = 0U;
                                    }
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = 0U;
                                }
                            }
                        }
                    }
                }
            } else {
                if ((0x10U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                    if ((8U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                        vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = 0U;
                        vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = 1U;
                        vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                        vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN = 0U;
                        vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = 0U;
                        vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__channel = 1U;
                    } else {
                        if ((4U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                            vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = 0U;
                            vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = 1U;
                            vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                            vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN = 0U;
                            vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = 0U;
                            vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__channel = 1U;
                        } else {
                            if ((2U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = 0U;
                                vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = 1U;
                                vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                                vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN = 0U;
                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = 0U;
                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__channel = 1U;
                            } else {
                                if ((1U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = 0U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = 1U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN = 0U;
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = 0U;
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__channel = 1U;
                                } else {
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt 
                                        = ((0x49U == (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt))
                                            ? 0U : 
                                           (0x3ffU 
                                            & ((IData)(1U) 
                                               + (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt))));
                                    if ((0U == (3U 
                                                & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt)))) {
                                        vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                                    }
                                    if ((1U == (3U 
                                                & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt)))) {
                                        vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                                        vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN 
                                            = (1U & 
                                               (vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg 
                                                >> 0x11U));
                                    }
                                    if ((2U == (3U 
                                                & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt)))) {
                                        vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg 
                                            = (0x3fffeU 
                                               & (vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg 
                                                  << 1U));
                                        vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if ((8U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                        if ((4U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                            vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = 0U;
                            vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = 1U;
                            vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                            vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN = 0U;
                            vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = 0U;
                            vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__channel = 1U;
                        } else {
                            if ((2U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = 0U;
                                vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = 1U;
                                vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                                vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN = 0U;
                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = 0U;
                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__channel = 1U;
                            } else {
                                if ((1U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = 0U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = 1U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN = 0U;
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = 0U;
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__channel = 1U;
                                } else {
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt 
                                        = ((3U == (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt))
                                            ? 0U : 
                                           (0x3ffU 
                                            & ((IData)(1U) 
                                               + (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt))));
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg 
                                        = ((8U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__channel))
                                            ? vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg
                                            : ((4U 
                                                & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__channel))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__channel))
                                                    ? vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__channel))
                                                     ? vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg
                                                     : 
                                                    (0x30000U 
                                                     | (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN4_driver))))
                                                : (
                                                   (2U 
                                                    & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__channel))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__channel))
                                                     ? 
                                                    (0x20000U 
                                                     | (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN3_driver))
                                                     : 
                                                    (0x10000U 
                                                     | (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN2_driver)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__channel))
                                                     ? (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN1_driver)
                                                     : vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg))));
                                }
                            }
                        }
                    } else {
                        if ((4U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                            if ((2U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = 0U;
                                vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = 1U;
                                vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                                vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN = 0U;
                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = 0U;
                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__channel = 1U;
                            } else {
                                if ((1U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = 0U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = 1U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN = 0U;
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = 0U;
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__channel = 1U;
                                } else {
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt 
                                        = ((5U == (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt))
                                            ? 0U : 
                                           (0x3ffU 
                                            & ((IData)(1U) 
                                               + (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt))));
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__channel 
                                        = vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__channel;
                                }
                            }
                        } else {
                            if ((2U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                                if ((1U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = 0U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = 1U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN = 0U;
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = 0U;
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__channel = 1U;
                                } else {
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = 0U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = 1U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN = 0U;
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = 0U;
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__channel = 1U;
                                }
                            } else {
                                if ((1U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = 0U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = 1U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN = 0U;
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = 0U;
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__channel = 1U;
                                } else {
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = 0U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = 1U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN = 0U;
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = 0U;
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__channel = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void VPhpa_Test::_sequent__TOP__20(VPhpa_Test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPhpa_Test::_sequent__TOP__20\n"); );
    VPhpa_Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg 
        = vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg;
    vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt 
        = vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt;
    vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__channel 
        = vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__channel;
    vlTOPp->ad5544_B_AD5544_CS = vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_CS;
    vlTOPp->ad5544_B_AD5544_RS = vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_RS;
    vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__ad5544_trig_reg1 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_triger_ad5544_tri) 
                                         | (IData)(vlTOPp->Phpa_Test__DOT__area_interrupt_temp)));
    vlTOPp->ad5544_B_AD5544_LDAC = vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC;
    vlTOPp->ad5544_B_AD5544_SCLK = vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK;
    vlTOPp->ad5544_B_AD5544_SDIN = vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN;
    vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state 
        = ((IData)(vlTOPp->reset) ? 1U : (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__next_state));
    vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__next_state 
        = ((0x40U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
            ? ((0x20U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
                ? 2U : ((0x10U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
                         ? 2U : ((8U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
                                  ? 2U : ((4U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
                                           ? 2U : (
                                                   (2U 
                                                    & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
                                                    ? 2U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
                                                     ? 2U
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt))
                                                      ? 
                                                     ((4U 
                                                       == (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__channel))
                                                       ? 2U
                                                       : 4U)
                                                      : 0x40U)))))))
            : ((0x20U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
                ? ((0x10U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
                    ? 2U : ((8U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
                             ? 2U : ((4U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
                                      ? 2U : ((2U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
                                               ? 2U
                                               : ((1U 
                                                   & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
                                                   ? 2U
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt))
                                                    ? 0x40U
                                                    : 0x20U))))))
                : ((0x10U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
                    ? ((8U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
                        ? 2U : ((4U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
                                 ? 2U : ((2U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
                                          ? 2U : ((1U 
                                                   & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
                                                   ? 2U
                                                   : 
                                                  ((0x49U 
                                                    == (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt))
                                                    ? 0x20U
                                                    : 0x10U)))))
                    : ((8U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
                        ? ((4U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
                            ? 2U : ((2U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
                                     ? 2U : ((1U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
                                              ? 2U : 
                                             ((3U == (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt))
                                               ? 0x10U
                                               : 8U))))
                        : ((4U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
                            ? ((2U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
                                ? 2U : ((1U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
                                         ? 2U : ((5U 
                                                  == (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt))
                                                  ? 8U
                                                  : 4U)))
                            : ((2U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
                                ? ((1U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
                                    ? 2U : (((IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__ad5544_trig_reg1) 
                                             & (~ (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__ad5544_trig_reg2)))
                                             ? 4U : 2U))
                                : 2U))))));
}
