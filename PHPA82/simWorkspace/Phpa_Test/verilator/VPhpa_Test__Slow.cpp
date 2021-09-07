// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPhpa_Test.h for the primary calling header

#include "VPhpa_Test.h"
#include "VPhpa_Test__Syms.h"

//==========

VL_CTOR_IMP(VPhpa_Test) {
    VPhpa_Test__Syms* __restrict vlSymsp = __VlSymsp = new VPhpa_Test__Syms(this, name());
    VPhpa_Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VPhpa_Test::__Vconfigure(VPhpa_Test__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VPhpa_Test::~VPhpa_Test() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void VPhpa_Test::_settle__TOP__1(VPhpa_Test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPhpa_Test::_settle__TOP__1\n"); );
    VPhpa_Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ad5544_A_AD5544_MSB = 1U;
    vlTOPp->ad5544_B_AD5544_MSB = 1U;
    vlTOPp->ad5544_C_AD5544_MSB = 1U;
    vlTOPp->ad7606_ad_os = 0U;
    vlTOPp->ad7606_ad_range = 1U;
    vlTOPp->emif_emif_data_writeEnable = (1U & (~ (IData)(vlTOPp->emif_emif_oe)));
    vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PWRITE 
        = ((~ (IData)(vlTOPp->emif_emif_we)) & (IData)(vlTOPp->emif_emif_oe));
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
    vlTOPp->emif_emif_data_write = vlTOPp->Phpa_Test__DOT__area_emif_interface__DOT__apb_PRDATA_regNextWhen;
    vlTOPp->led = vlTOPp->Phpa_Test__DOT__area_ledtemp;
    vlTOPp->Phpa_Test__DOT__area_apbtimer__DOT__when_ApbTimer_l38 
        = ((IData)(vlTOPp->Phpa_Test__DOT__area_apbtimer__DOT__area_timerA_io_limit_driver) 
           <= (IData)(vlTOPp->Phpa_Test__DOT__area_apbtimer__DOT__area_timerA__DOT__counter));
    vlTOPp->Phpa_Test__DOT__area_apbtimer__DOT__area_timerA__DOT__limitHit 
        = ((IData)(vlTOPp->Phpa_Test__DOT__area_apbtimer__DOT__area_timerA__DOT__counter) 
           == (IData)(vlTOPp->Phpa_Test__DOT__area_apbtimer__DOT__area_timerA_io_limit_driver));
    vlTOPp->Phpa_Test__DOT__area_apbtimer_apb_PRDATA = 0U;
    if ((1U == (0xfU & (vlTOPp->emif_emif_addr << 1U)))) {
        vlTOPp->Phpa_Test__DOT__area_apbtimer_apb_PRDATA 
            = vlTOPp->Phpa_Test__DOT__area_apbtimer__DOT__area_timerA_io_limit_driver;
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
    vlTOPp->ad7606_ad_cs = vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_cs;
    vlTOPp->ad7606_ad_rd = vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_rd;
    vlTOPp->ad7606_ad_convsta = vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_convsta;
    vlTOPp->ad7606_ad_convstb = vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_convstb;
    vlTOPp->Phpa_Test__DOT__area_counter_willClear = 0U;
    if ((0x2faf07fU == vlTOPp->Phpa_Test__DOT__area_counter_value)) {
        vlTOPp->Phpa_Test__DOT__area_counter_willClear = 1U;
    }
    vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PENABLE 
        = (((IData)(vlTOPp->Phpa_Test__DOT__area_emif_interface__DOT__penable) 
            & (~ (IData)(vlTOPp->Phpa_Test__DOT__area_emif_interface__DOT__penable_regNext))) 
           & (IData)(vlTOPp->Phpa_Test__DOT__area_emif_interface__DOT__penable));
    vlTOPp->ad5544_A_AD5544_CS = vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_CS;
    vlTOPp->ad5544_A_AD5544_LDAC = vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC;
    vlTOPp->ad5544_A_AD5544_RS = vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_RS;
    vlTOPp->ad5544_A_AD5544_SCLK = vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK;
    vlTOPp->ad5544_A_AD5544_SDIN = vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN;
    vlTOPp->ad5544_B_AD5544_CS = vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_CS;
    vlTOPp->ad5544_B_AD5544_LDAC = vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC;
    vlTOPp->ad5544_B_AD5544_RS = vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_RS;
    vlTOPp->ad5544_B_AD5544_SCLK = vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK;
    vlTOPp->ad5544_B_AD5544_SDIN = vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN;
    vlTOPp->ad5544_C_AD5544_CS = vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_CS;
    vlTOPp->ad5544_C_AD5544_LDAC = vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC;
    vlTOPp->ad5544_C_AD5544_RS = vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_RS;
    vlTOPp->ad5544_C_AD5544_SCLK = vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK;
    vlTOPp->ad5544_C_AD5544_SDIN = vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN;
    vlTOPp->biss_c_enc_clk = vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl_enc_clk;
    vlTOPp->ad7606_ad_reset = vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_reset;
    vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__Next_State 
        = ((1U == (IData)(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__Curr_State))
            ? 2U : ((2U == (IData)(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__Curr_State))
                     ? ((IData)(vlTOPp->biss_c_enc_data)
                         ? 4U : 2U) : ((4U == (IData)(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__Curr_State))
                                        ? ((0x64U <= (IData)(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__CNT))
                                            ? 8U : 4U)
                                        : ((8U == (IData)(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__Curr_State))
                                            ? ((0x29U 
                                                <= (IData)(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__DATA_CNT))
                                                ? 0x10U
                                                : 8U)
                                            : ((0x10U 
                                                == (IData)(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__Curr_State))
                                                ? 0x20U
                                                : (
                                                   (0x20U 
                                                    == (IData)(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__Curr_State))
                                                    ? 
                                                   (((IData)(vlTOPp->biss_c_enc_data) 
                                                     & (0x7d0U 
                                                        <= (IData)(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__CNT)))
                                                     ? 2U
                                                     : 0x20U)
                                                    : 1U))))));
    vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__next_state 
        = ((0x40U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
            ? ((0x20U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
                ? 2U : ((0x10U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
                         ? 2U : ((8U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
                                  ? 2U : ((4U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
                                           ? 2U : (
                                                   (2U 
                                                    & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
                                                    ? 2U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
                                                     ? 2U
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt))
                                                      ? 
                                                     ((4U 
                                                       == (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__channel))
                                                       ? 2U
                                                       : 4U)
                                                      : 0x40U)))))))
            : ((0x20U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
                ? ((0x10U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
                    ? 2U : ((8U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
                             ? 2U : ((4U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
                                      ? 2U : ((2U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
                                               ? 2U
                                               : ((1U 
                                                   & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
                                                   ? 2U
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt))
                                                    ? 0x40U
                                                    : 0x20U))))))
                : ((0x10U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
                    ? ((8U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
                        ? 2U : ((4U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
                                 ? 2U : ((2U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
                                          ? 2U : ((1U 
                                                   & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
                                                   ? 2U
                                                   : 
                                                  ((0x49U 
                                                    == (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt))
                                                    ? 0x20U
                                                    : 0x10U)))))
                    : ((8U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
                        ? ((4U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
                            ? 2U : ((2U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
                                     ? 2U : ((1U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
                                              ? 2U : 
                                             ((3U == (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt))
                                               ? 0x10U
                                               : 8U))))
                        : ((4U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
                            ? ((2U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
                                ? 2U : ((1U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
                                         ? 2U : ((5U 
                                                  == (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt))
                                                  ? 8U
                                                  : 4U)))
                            : ((2U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
                                ? ((1U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
                                    ? 2U : (((IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__ad5544_trig_reg1) 
                                             & (~ (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__ad5544_trig_reg2)))
                                             ? 4U : 2U))
                                : 2U))))));
}

void VPhpa_Test::_settle__TOP__2(VPhpa_Test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPhpa_Test::_settle__TOP__2\n"); );
    VPhpa_Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl_apb_PRDATA = 0U;
    if ((1U & (~ (0x3ffffU & (vlTOPp->emif_emif_addr 
                              >> 2U))))) {
        if ((1U & (~ (0x7ffffU & (vlTOPp->emif_emif_addr 
                                  >> 1U))))) {
            vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl_apb_PRDATA 
                = ((1U & vlTOPp->emif_emif_addr) ? 
                   ((1U & (vlTOPp->emif_emif_addr << 1U))
                     ? (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN4_driver)
                     : (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN3_driver))
                    : ((1U & (vlTOPp->emif_emif_addr 
                              << 1U)) ? (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN2_driver)
                        : (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN1_driver)));
        }
    }
    vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl_apb_PRDATA = 0U;
    if ((1U & (~ (0x3ffffU & (vlTOPp->emif_emif_addr 
                              >> 2U))))) {
        if ((1U & (~ (0x7ffffU & (vlTOPp->emif_emif_addr 
                                  >> 1U))))) {
            vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl_apb_PRDATA 
                = ((1U & vlTOPp->emif_emif_addr) ? 
                   ((1U & (vlTOPp->emif_emif_addr << 1U))
                     ? (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN4_driver)
                     : (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN3_driver))
                    : ((1U & (vlTOPp->emif_emif_addr 
                              << 1U)) ? (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN2_driver)
                        : (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN1_driver)));
        }
    }
}

void VPhpa_Test::_settle__TOP__3(VPhpa_Test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPhpa_Test::_settle__TOP__3\n"); );
    VPhpa_Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl_apb_PRDATA = 0U;
    if ((1U & (~ (0x3ffffU & (vlTOPp->emif_emif_addr 
                              >> 2U))))) {
        if ((1U & (~ (0x7ffffU & (vlTOPp->emif_emif_addr 
                                  >> 1U))))) {
            vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl_apb_PRDATA 
                = ((1U & vlTOPp->emif_emif_addr) ? 
                   ((1U & (vlTOPp->emif_emif_addr << 1U))
                     ? (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN4_driver)
                     : (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN3_driver))
                    : ((1U & (vlTOPp->emif_emif_addr 
                              << 1U)) ? (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN2_driver)
                        : (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN1_driver)));
        }
    }
    vlTOPp->Phpa_Test__DOT__area_ad5544_triger_ad5544_tri 
        = ((((IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_triger__DOT__area_temp) 
             | (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_triger__DOT__area_temp_delay_1)) 
            | (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_triger__DOT__area_temp_delay_2)) 
           | (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_triger__DOT__area_temp_delay_3));
    vlTOPp->Phpa_Test__DOT__area_ad5544_triger_apb_PRDATA = 0U;
    if ((2U == (0xfU & (vlTOPp->emif_emif_addr << 1U)))) {
        vlTOPp->Phpa_Test__DOT__area_ad5544_triger_apb_PRDATA 
            = ((0xfffeU & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_triger_apb_PRDATA)) 
               | (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_triger__DOT__area_temp));
    }
    vlTOPp->Phpa_Test__DOT__apb_decoder__DOT__when_Apb3Decoder_l84 
        = ((~ (IData)(vlTOPp->emif_emif_cs)) & (0U 
                                                == (IData)(vlTOPp->Phpa_Test__DOT__apb_decoder_io_output_PSEL)));
    vlTOPp->Phpa_Test__DOT__area_apbtimer__DOT__area_timerA_io_full 
        = (((IData)(vlTOPp->Phpa_Test__DOT__area_apbtimer__DOT__area_timerA__DOT__limitHit) 
            & (IData)(vlTOPp->Phpa_Test__DOT__area_apbtimer__DOT___zz_io_tick)) 
           & (~ (IData)(vlTOPp->Phpa_Test__DOT__area_apbtimer__DOT__area_timerA__DOT__inhibitFull)));
    vlTOPp->Phpa_Test__DOT__area_counter_valueNext 
        = ((0x2faf07fU == vlTOPp->Phpa_Test__DOT__area_counter_value)
            ? 0U : (0x3ffffffU & ((IData)(1U) + vlTOPp->Phpa_Test__DOT__area_counter_value)));
    if (vlTOPp->Phpa_Test__DOT__area_counter_willClear) {
        vlTOPp->Phpa_Test__DOT__area_counter_valueNext = 0U;
    }
    vlTOPp->Phpa_Test__DOT__area_apbtimer__DOT__area_busCtrl_doWrite 
        = (((IData)(vlTOPp->Phpa_Test__DOT__apb_decoder_io_output_PSEL) 
            & (IData)(vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PENABLE)) 
           & (IData)(vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PWRITE));
    vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ctrl_doWrite 
        = ((((IData)(vlTOPp->Phpa_Test__DOT__apb_decoder_io_output_PSEL) 
             >> 2U) & (IData)(vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PENABLE)) 
           & (IData)(vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PWRITE));
    vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ctrl_doWrite 
        = ((((IData)(vlTOPp->Phpa_Test__DOT__apb_decoder_io_output_PSEL) 
             >> 3U) & (IData)(vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PENABLE)) 
           & (IData)(vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PWRITE));
    vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ctrl_doWrite 
        = ((((IData)(vlTOPp->Phpa_Test__DOT__apb_decoder_io_output_PSEL) 
             >> 4U) & (IData)(vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PENABLE)) 
           & (IData)(vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PWRITE));
    vlTOPp->Phpa_Test__DOT__area_ad5544_triger__DOT__when_AD5544_l91 = 0U;
    if ((2U == (0xfU & (vlTOPp->emif_emif_addr << 1U)))) {
        if (((((IData)(vlTOPp->Phpa_Test__DOT__apb_decoder_io_output_PSEL) 
               >> 1U) & (IData)(vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PENABLE)) 
             & (IData)(vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PWRITE))) {
            vlTOPp->Phpa_Test__DOT__area_ad5544_triger__DOT__when_AD5544_l91 = 1U;
        }
    }
    vlTOPp->Phpa_Test__DOT__apb3Router_1__DOT___zz_io_input_PRDATA 
        = ((4U & (IData)(vlTOPp->Phpa_Test__DOT__apb3Router_1__DOT__selIndex))
            ? ((2U & (IData)(vlTOPp->Phpa_Test__DOT__apb3Router_1__DOT__selIndex))
                ? (IData)(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl_apb_PRDATA)
                : ((1U & (IData)(vlTOPp->Phpa_Test__DOT__apb3Router_1__DOT__selIndex))
                    ? (IData)(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl_apb_PRDATA)
                    : (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl_apb_PRDATA)))
            : ((2U & (IData)(vlTOPp->Phpa_Test__DOT__apb3Router_1__DOT__selIndex))
                ? ((1U & (IData)(vlTOPp->Phpa_Test__DOT__apb3Router_1__DOT__selIndex))
                    ? (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl_apb_PRDATA)
                    : (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl_apb_PRDATA))
                : ((1U & (IData)(vlTOPp->Phpa_Test__DOT__apb3Router_1__DOT__selIndex))
                    ? (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_triger_apb_PRDATA)
                    : (IData)(vlTOPp->Phpa_Test__DOT__area_apbtimer_apb_PRDATA))));
    vlTOPp->Phpa_Test__DOT__apb_decoder_io_input_PREADY = 1U;
    if (vlTOPp->Phpa_Test__DOT__apb_decoder__DOT__when_Apb3Decoder_l84) {
        vlTOPp->Phpa_Test__DOT__apb_decoder_io_input_PREADY = 1U;
    }
    vlTOPp->Phpa_Test__DOT__apb_decoder_io_input_PSLVERROR = 0U;
    if (vlTOPp->Phpa_Test__DOT__apb_decoder__DOT__when_Apb3Decoder_l84) {
        vlTOPp->Phpa_Test__DOT__apb_decoder_io_input_PSLVERROR = 1U;
    }
}

void VPhpa_Test::_eval_initial(VPhpa_Test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPhpa_Test::_eval_initial\n"); );
    VPhpa_Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__clk_out 
        = vlTOPp->__VinpClk__TOP__Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__clk_out;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out 
        = vlTOPp->__VinpClk__TOP__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out 
        = vlTOPp->__VinpClk__TOP__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out 
        = vlTOPp->__VinpClk__TOP__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out;
}

void VPhpa_Test::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPhpa_Test::final\n"); );
    // Variables
    VPhpa_Test__Syms* __restrict vlSymsp = this->__VlSymsp;
    VPhpa_Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VPhpa_Test::_eval_settle(VPhpa_Test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPhpa_Test::_eval_settle\n"); );
    VPhpa_Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->_settle__TOP__3(vlSymsp);
}

void VPhpa_Test::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPhpa_Test::_ctor_var_reset\n"); );
    // Body
    emif_emif_addr = VL_RAND_RESET_I(20);
    emif_emif_data_read = VL_RAND_RESET_I(16);
    emif_emif_data_write = VL_RAND_RESET_I(16);
    emif_emif_data_writeEnable = VL_RAND_RESET_I(1);
    emif_emif_cs = VL_RAND_RESET_I(1);
    emif_emif_we = VL_RAND_RESET_I(1);
    emif_emif_oe = VL_RAND_RESET_I(1);
    ad5544_A_AD5544_CS = VL_RAND_RESET_I(1);
    ad5544_A_AD5544_LDAC = VL_RAND_RESET_I(1);
    ad5544_A_AD5544_MSB = VL_RAND_RESET_I(1);
    ad5544_A_AD5544_RS = VL_RAND_RESET_I(1);
    ad5544_A_AD5544_SCLK = VL_RAND_RESET_I(1);
    ad5544_A_AD5544_SDIN = VL_RAND_RESET_I(1);
    ad5544_B_AD5544_CS = VL_RAND_RESET_I(1);
    ad5544_B_AD5544_LDAC = VL_RAND_RESET_I(1);
    ad5544_B_AD5544_MSB = VL_RAND_RESET_I(1);
    ad5544_B_AD5544_RS = VL_RAND_RESET_I(1);
    ad5544_B_AD5544_SCLK = VL_RAND_RESET_I(1);
    ad5544_B_AD5544_SDIN = VL_RAND_RESET_I(1);
    ad5544_C_AD5544_CS = VL_RAND_RESET_I(1);
    ad5544_C_AD5544_LDAC = VL_RAND_RESET_I(1);
    ad5544_C_AD5544_MSB = VL_RAND_RESET_I(1);
    ad5544_C_AD5544_RS = VL_RAND_RESET_I(1);
    ad5544_C_AD5544_SCLK = VL_RAND_RESET_I(1);
    ad5544_C_AD5544_SDIN = VL_RAND_RESET_I(1);
    biss_c_enc_clk = VL_RAND_RESET_I(1);
    biss_c_enc_data = VL_RAND_RESET_I(1);
    ad7606_ad_data = VL_RAND_RESET_I(16);
    ad7606_ad_busy = VL_RAND_RESET_I(1);
    ad7606_first_data = VL_RAND_RESET_I(1);
    ad7606_ad_os = VL_RAND_RESET_I(3);
    ad7606_ad_cs = VL_RAND_RESET_I(1);
    ad7606_ad_rd = VL_RAND_RESET_I(1);
    ad7606_ad_reset = VL_RAND_RESET_I(1);
    ad7606_ad_convsta = VL_RAND_RESET_I(1);
    ad7606_ad_convstb = VL_RAND_RESET_I(1);
    ad7606_ad_range = VL_RAND_RESET_I(1);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    led = VL_RAND_RESET_I(1);
    Phpa_Test__DOT__area_emif_interface_apb_PENABLE = VL_RAND_RESET_I(1);
    Phpa_Test__DOT__area_emif_interface_apb_PWRITE = VL_RAND_RESET_I(1);
    Phpa_Test__DOT__area_apbtimer_apb_PRDATA = VL_RAND_RESET_I(16);
    Phpa_Test__DOT__area_ad5544_triger_apb_PRDATA = VL_RAND_RESET_I(16);
    Phpa_Test__DOT__area_ad5544_triger_ad5544_tri = VL_RAND_RESET_I(1);
    Phpa_Test__DOT__area_ad5544_A_Ctrl_apb_PRDATA = VL_RAND_RESET_I(16);
    Phpa_Test__DOT__area_ad5544_B_Ctrl_apb_PRDATA = VL_RAND_RESET_I(16);
    Phpa_Test__DOT__area_ad5544_C_Ctrl_apb_PRDATA = VL_RAND_RESET_I(16);
    Phpa_Test__DOT__area_biss_c_ctrl_apb_PRDATA = VL_RAND_RESET_I(16);
    Phpa_Test__DOT__area_ad7606_ctrl_apb_PRDATA = VL_RAND_RESET_I(16);
    Phpa_Test__DOT__apb_decoder_io_input_PREADY = VL_RAND_RESET_I(1);
    Phpa_Test__DOT__apb_decoder_io_input_PSLVERROR = VL_RAND_RESET_I(1);
    Phpa_Test__DOT__apb_decoder_io_output_PSEL = VL_RAND_RESET_I(7);
    Phpa_Test__DOT__area_interrupt_temp = VL_RAND_RESET_I(1);
    Phpa_Test__DOT__area_apbtimer_interrupt_delay_1 = VL_RAND_RESET_I(1);
    Phpa_Test__DOT__area_apbtimer_interrupt_delay_2 = VL_RAND_RESET_I(1);
    Phpa_Test__DOT__area_apbtimer_interrupt_delay_3 = VL_RAND_RESET_I(1);
    Phpa_Test__DOT__area_ledtemp = VL_RAND_RESET_I(1);
    Phpa_Test__DOT__area_counter_willClear = VL_RAND_RESET_I(1);
    Phpa_Test__DOT__area_counter_valueNext = VL_RAND_RESET_I(26);
    Phpa_Test__DOT__area_counter_value = VL_RAND_RESET_I(26);
    Phpa_Test__DOT__area_emif_interface__DOT__penable = VL_RAND_RESET_I(1);
    Phpa_Test__DOT__area_emif_interface__DOT__penable_regNext = VL_RAND_RESET_I(1);
    Phpa_Test__DOT__area_emif_interface__DOT__apb_PRDATA_regNextWhen = VL_RAND_RESET_I(16);
    Phpa_Test__DOT__area_apbtimer__DOT__area_timerA_io_full = VL_RAND_RESET_I(1);
    Phpa_Test__DOT__area_apbtimer__DOT__area_busCtrl_doWrite = VL_RAND_RESET_I(1);
    Phpa_Test__DOT__area_apbtimer__DOT___zz_io_tick = VL_RAND_RESET_I(1);
    Phpa_Test__DOT__area_apbtimer__DOT__area_timerA_io_limit_driver = VL_RAND_RESET_I(16);
    Phpa_Test__DOT__area_apbtimer__DOT__when_ApbTimer_l38 = VL_RAND_RESET_I(1);
    Phpa_Test__DOT__area_apbtimer__DOT__area_timerA__DOT__counter = VL_RAND_RESET_I(16);
    Phpa_Test__DOT__area_apbtimer__DOT__area_timerA__DOT__limitHit = VL_RAND_RESET_I(1);
    Phpa_Test__DOT__area_apbtimer__DOT__area_timerA__DOT__inhibitFull = VL_RAND_RESET_I(1);
    Phpa_Test__DOT__area_ad5544_triger__DOT__area_temp = VL_RAND_RESET_I(1);
    Phpa_Test__DOT__area_ad5544_triger__DOT__when_AD5544_l91 = VL_RAND_RESET_I(1);
    Phpa_Test__DOT__area_ad5544_triger__DOT__area_temp_delay_1 = VL_RAND_RESET_I(1);
    Phpa_Test__DOT__area_ad5544_triger__DOT__area_temp_delay_2 = VL_RAND_RESET_I(1);
    Phpa_Test__DOT__area_ad5544_triger__DOT__area_temp_delay_3 = VL_RAND_RESET_I(1);
    Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_CS = VL_RAND_RESET_I(1);
    Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = VL_RAND_RESET_I(1);
    Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_RS = VL_RAND_RESET_I(1);
    Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = VL_RAND_RESET_I(1);
    Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN = VL_RAND_RESET_I(1);
    Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ctrl_doWrite = VL_RAND_RESET_I(1);
    Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN1_driver = VL_RAND_RESET_I(16);
    Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN2_driver = VL_RAND_RESET_I(16);
    Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN3_driver = VL_RAND_RESET_I(16);
    Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN4_driver = VL_RAND_RESET_I(16);
    Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = VL_RAND_RESET_I(10);
    Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = VL_RAND_RESET_I(18);
    Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__channel = VL_RAND_RESET_I(4);
    Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state = VL_RAND_RESET_I(7);
    Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__next_state = VL_RAND_RESET_I(7);
    Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out = VL_RAND_RESET_I(1);
    Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_dvidecnt = VL_RAND_RESET_I(4);
    Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__ad5544_trig_reg1 = VL_RAND_RESET_I(1);
    Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__ad5544_trig_reg2 = VL_RAND_RESET_I(1);
    Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_CS = VL_RAND_RESET_I(1);
    Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = VL_RAND_RESET_I(1);
    Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_RS = VL_RAND_RESET_I(1);
    Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = VL_RAND_RESET_I(1);
    Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN = VL_RAND_RESET_I(1);
    Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ctrl_doWrite = VL_RAND_RESET_I(1);
    Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN1_driver = VL_RAND_RESET_I(16);
    Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN2_driver = VL_RAND_RESET_I(16);
    Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN3_driver = VL_RAND_RESET_I(16);
    Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN4_driver = VL_RAND_RESET_I(16);
    Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = VL_RAND_RESET_I(10);
    Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = VL_RAND_RESET_I(18);
    Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__channel = VL_RAND_RESET_I(4);
    Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state = VL_RAND_RESET_I(7);
    Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__next_state = VL_RAND_RESET_I(7);
    Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out = VL_RAND_RESET_I(1);
    Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_dvidecnt = VL_RAND_RESET_I(4);
    Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__ad5544_trig_reg1 = VL_RAND_RESET_I(1);
    Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__ad5544_trig_reg2 = VL_RAND_RESET_I(1);
    Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_CS = VL_RAND_RESET_I(1);
    Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = VL_RAND_RESET_I(1);
    Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_RS = VL_RAND_RESET_I(1);
    Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = VL_RAND_RESET_I(1);
    Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN = VL_RAND_RESET_I(1);
    Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ctrl_doWrite = VL_RAND_RESET_I(1);
    Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN1_driver = VL_RAND_RESET_I(16);
    Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN2_driver = VL_RAND_RESET_I(16);
    Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN3_driver = VL_RAND_RESET_I(16);
    Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN4_driver = VL_RAND_RESET_I(16);
    Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = VL_RAND_RESET_I(10);
    Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = VL_RAND_RESET_I(18);
    Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__channel = VL_RAND_RESET_I(4);
    Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state = VL_RAND_RESET_I(7);
    Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__next_state = VL_RAND_RESET_I(7);
    Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out = VL_RAND_RESET_I(1);
    Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_dvidecnt = VL_RAND_RESET_I(4);
    Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__ad5544_trig_reg1 = VL_RAND_RESET_I(1);
    Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__ad5544_trig_reg2 = VL_RAND_RESET_I(1);
    Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl_enc_clk = VL_RAND_RESET_I(1);
    Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl_enc_position_all = VL_RAND_RESET_Q(41);
    Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl_enc_position_out = VL_RAND_RESET_I(32);
    Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl_erro_flag = VL_RAND_RESET_I(1);
    Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl_warn_flag = VL_RAND_RESET_I(1);
    Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_pos_reg = VL_RAND_RESET_I(32);
    Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_status_reg = VL_RAND_RESET_I(16);
    Phpa_Test__DOT__area_biss_c_ctrl__DOT____Vcellout__area_bissc_ctrl__crc_flag = VL_RAND_RESET_I(6);
    Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__CNT = VL_RAND_RESET_I(12);
    Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__DATA_CNT = VL_RAND_RESET_I(12);
    Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__start_flag = VL_RAND_RESET_I(2);
    Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__Next_State = VL_RAND_RESET_I(8);
    Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__Curr_State = VL_RAND_RESET_I(8);
    Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__clk_out = VL_RAND_RESET_I(1);
    Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__clk_dvidecnt = VL_RAND_RESET_I(4);
    Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__ENC_SLO_1reg = VL_RAND_RESET_I(1);
    Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__ENC_SLO_2reg = VL_RAND_RESET_I(1);
    Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_cs = VL_RAND_RESET_I(1);
    Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_rd = VL_RAND_RESET_I(1);
    Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_reset = VL_RAND_RESET_I(1);
    Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_convsta = VL_RAND_RESET_I(1);
    Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_convstb = VL_RAND_RESET_I(1);
    Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_ch1_o = VL_RAND_RESET_I(16);
    Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_ch2_o = VL_RAND_RESET_I(16);
    Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_ch3_o = VL_RAND_RESET_I(16);
    Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_ch4_o = VL_RAND_RESET_I(16);
    Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_ch5_o = VL_RAND_RESET_I(16);
    Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_ch6_o = VL_RAND_RESET_I(16);
    Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_ch7_o = VL_RAND_RESET_I(16);
    Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_ch8_o = VL_RAND_RESET_I(16);
    Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_data_valid_o = VL_RAND_RESET_I(1);
    Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_data_temp_1 = VL_RAND_RESET_I(16);
    Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_data_temp_2 = VL_RAND_RESET_I(16);
    Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_data_temp_3 = VL_RAND_RESET_I(16);
    Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_data_temp_4 = VL_RAND_RESET_I(16);
    Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_data_temp_5 = VL_RAND_RESET_I(16);
    Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_data_temp_6 = VL_RAND_RESET_I(16);
    Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_data_temp_7 = VL_RAND_RESET_I(16);
    Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_data_temp_8 = VL_RAND_RESET_I(16);
    Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__cnt = VL_RAND_RESET_I(8);
    Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i = VL_RAND_RESET_I(8);
    Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__cnt5us = VL_RAND_RESET_I(16);
    Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state = VL_RAND_RESET_I(8);
    Phpa_Test__DOT__apb_decoder__DOT__when_Apb3Decoder_l84 = VL_RAND_RESET_I(1);
    Phpa_Test__DOT__apb3Router_1__DOT___zz_io_input_PRDATA = VL_RAND_RESET_I(16);
    Phpa_Test__DOT__apb3Router_1__DOT__selIndex = VL_RAND_RESET_I(3);
    __Vdly__Phpa_Test__DOT__area_ledtemp = VL_RAND_RESET_I(1);
    __Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_dvidecnt = VL_RAND_RESET_I(4);
    __Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_dvidecnt = VL_RAND_RESET_I(4);
    __Vdly__Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__clk_dvidecnt = VL_RAND_RESET_I(4);
    __Vdly__Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__clk_out = VL_RAND_RESET_I(1);
    __Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__cnt5us = VL_RAND_RESET_I(16);
    __Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i = VL_RAND_RESET_I(8);
    __Vdly__Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state = VL_RAND_RESET_I(8);
    __Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = VL_RAND_RESET_I(10);
    __Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = VL_RAND_RESET_I(18);
    __Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__channel = VL_RAND_RESET_I(4);
    __Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = VL_RAND_RESET_I(10);
    __Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = VL_RAND_RESET_I(18);
    __Vdly__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__channel = VL_RAND_RESET_I(4);
    __Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = VL_RAND_RESET_I(10);
    __Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = VL_RAND_RESET_I(18);
    __Vdly__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__channel = VL_RAND_RESET_I(4);
    __Vdly__Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__CNT = VL_RAND_RESET_I(12);
    __Vdly__Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__DATA_CNT = VL_RAND_RESET_I(12);
    __Vdly__Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__start_flag = VL_RAND_RESET_I(2);
    __Vdly__Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl_enc_position_all = VL_RAND_RESET_Q(41);
    __VinpClk__TOP__Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__clk_out = VL_RAND_RESET_I(1);
    __VinpClk__TOP__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out = VL_RAND_RESET_I(1);
    __VinpClk__TOP__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out = VL_RAND_RESET_I(1);
    __VinpClk__TOP__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out = VL_RAND_RESET_I(1);
    __Vchglast__TOP__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out = VL_RAND_RESET_I(1);
    __Vchglast__TOP__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out = VL_RAND_RESET_I(1);
    __Vchglast__TOP__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out = VL_RAND_RESET_I(1);
    __Vchglast__TOP__Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__clk_out = VL_RAND_RESET_I(1);
    __Vm_traceActivity = 0;
}
