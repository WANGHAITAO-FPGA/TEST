// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPhpa_Test.h for the primary calling header

#include "VPhpa_Test.h"
#include "VPhpa_Test__Syms.h"

VL_INLINE_OPT void VPhpa_Test::_sequent__TOP__22(VPhpa_Test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPhpa_Test::_sequent__TOP__22\n"); );
    VPhpa_Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg 
        = vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg;
    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__channel 
        = vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__channel;
    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt 
        = vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt;
    if (vlTOPp->reset) {
        vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_CS = 1U;
    } else {
        if ((0x40U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
            vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_CS = 1U;
        } else {
            if ((0x20U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_CS = 1U;
            } else {
                if ((0x10U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                    if ((8U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                        vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_CS = 1U;
                    } else {
                        if ((4U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                            vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_CS = 1U;
                        } else {
                            if ((2U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                                vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_CS = 1U;
                            } else {
                                if ((1U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_CS = 1U;
                                }
                            }
                        }
                    }
                } else {
                    vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_CS 
                        = (1U & ((~ ((IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state) 
                                     >> 3U)) | (((IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state) 
                                                 >> 2U) 
                                                | (((IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state) 
                                                    >> 1U) 
                                                   | (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state)))));
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_RS = 0U;
    } else {
        if ((0x40U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
            vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_RS 
                = (1U & ((~ ((IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state) 
                             >> 5U)) & ((~ ((IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state) 
                                            >> 4U)) 
                                        & ((~ ((IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state) 
                                               >> 3U)) 
                                           & ((~ ((IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state) 
                                                  >> 2U)) 
                                              & ((~ 
                                                  ((IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state) 
                                                   >> 1U)) 
                                                 & (~ (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))))))));
        } else {
            if ((0x20U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                if ((0x10U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                    vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_RS = 0U;
                } else {
                    if ((8U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                        vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_RS = 0U;
                    } else {
                        if ((4U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                            vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_RS = 0U;
                        } else {
                            if ((2U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                                vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_RS = 0U;
                            } else {
                                if ((1U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_RS = 0U;
                                }
                            }
                        }
                    }
                }
            } else {
                if ((0x10U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                    if ((8U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                        vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_RS = 0U;
                    } else {
                        if ((4U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                            vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_RS = 0U;
                        } else {
                            if ((2U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                                vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_RS = 0U;
                            } else {
                                if ((1U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_RS = 0U;
                                }
                            }
                        }
                    }
                } else {
                    if ((8U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                        if ((4U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                            vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_RS = 0U;
                        } else {
                            if ((2U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                                vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_RS = 0U;
                            } else {
                                if ((1U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_RS = 0U;
                                }
                            }
                        }
                    } else {
                        vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_RS 
                            = (1U & ((4U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))
                                      ? ((~ ((IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state) 
                                             >> 1U)) 
                                         & (~ (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state)))
                                      : (((IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state) 
                                          >> 1U) & 
                                         (~ (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state)))));
                    }
                }
            }
        }
    }
    vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__ad5544_trig_reg2 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__ad5544_trig_reg1));
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = 0U;
        vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = 1U;
        vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
        vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN = 0U;
        vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = 0U;
        vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__channel = 1U;
    } else {
        if ((0x40U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
            if ((0x20U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = 0U;
                vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = 1U;
                vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN = 0U;
                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = 0U;
                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__channel = 1U;
            } else {
                if ((0x10U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = 0U;
                    vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = 1U;
                    vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                    vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN = 0U;
                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = 0U;
                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__channel = 1U;
                } else {
                    if ((8U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                        vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = 0U;
                        vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = 1U;
                        vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                        vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN = 0U;
                        vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = 0U;
                        vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__channel = 1U;
                    } else {
                        if ((4U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                            vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = 0U;
                            vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = 1U;
                            vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                            vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN = 0U;
                            vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = 0U;
                            vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__channel = 1U;
                        } else {
                            if ((2U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = 0U;
                                vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = 1U;
                                vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                                vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN = 0U;
                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = 0U;
                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__channel = 1U;
                            } else {
                                if ((1U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = 0U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = 1U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN = 0U;
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = 0U;
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__channel = 1U;
                                } else {
                                    if ((3U == (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt))) {
                                        vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__channel 
                                            = (0xfU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__channel)));
                                        vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = 0U;
                                    } else {
                                        vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt 
                                            = (0x3ffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt)));
                                    }
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = 1U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN = 0U;
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = 0U;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((0x20U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                if ((0x10U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = 0U;
                    vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = 1U;
                    vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                    vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN = 0U;
                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = 0U;
                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__channel = 1U;
                } else {
                    if ((8U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                        vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = 0U;
                        vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = 1U;
                        vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                        vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN = 0U;
                        vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = 0U;
                        vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__channel = 1U;
                    } else {
                        if ((4U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                            vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = 0U;
                            vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = 1U;
                            vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                            vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN = 0U;
                            vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = 0U;
                            vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__channel = 1U;
                        } else {
                            if ((2U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = 0U;
                                vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = 1U;
                                vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                                vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN = 0U;
                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = 0U;
                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__channel = 1U;
                            } else {
                                if ((1U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = 0U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = 1U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN = 0U;
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = 0U;
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__channel = 1U;
                                } else {
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt 
                                        = ((5U == (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt))
                                            ? 0U : 
                                           (0x3ffU 
                                            & ((IData)(1U) 
                                               + (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt))));
                                    if (((2U <= (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt)) 
                                         & (4U >= (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt)))) {
                                        vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = 0U;
                                    }
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = 0U;
                                }
                            }
                        }
                    }
                }
            } else {
                if ((0x10U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                    if ((8U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                        vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = 0U;
                        vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = 1U;
                        vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                        vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN = 0U;
                        vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = 0U;
                        vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__channel = 1U;
                    } else {
                        if ((4U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                            vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = 0U;
                            vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = 1U;
                            vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                            vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN = 0U;
                            vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = 0U;
                            vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__channel = 1U;
                        } else {
                            if ((2U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = 0U;
                                vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = 1U;
                                vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                                vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN = 0U;
                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = 0U;
                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__channel = 1U;
                            } else {
                                if ((1U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = 0U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = 1U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN = 0U;
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = 0U;
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__channel = 1U;
                                } else {
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt 
                                        = ((0x49U == (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt))
                                            ? 0U : 
                                           (0x3ffU 
                                            & ((IData)(1U) 
                                               + (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt))));
                                    if ((0U == (3U 
                                                & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt)))) {
                                        vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                                    }
                                    if ((1U == (3U 
                                                & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt)))) {
                                        vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                                        vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN 
                                            = (1U & 
                                               (vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg 
                                                >> 0x11U));
                                    }
                                    if ((2U == (3U 
                                                & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt)))) {
                                        vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg 
                                            = (0x3fffeU 
                                               & (vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg 
                                                  << 1U));
                                        vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if ((8U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                        if ((4U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                            vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = 0U;
                            vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = 1U;
                            vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                            vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN = 0U;
                            vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = 0U;
                            vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__channel = 1U;
                        } else {
                            if ((2U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = 0U;
                                vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = 1U;
                                vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                                vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN = 0U;
                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = 0U;
                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__channel = 1U;
                            } else {
                                if ((1U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = 0U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = 1U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN = 0U;
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = 0U;
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__channel = 1U;
                                } else {
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt 
                                        = ((3U == (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt))
                                            ? 0U : 
                                           (0x3ffU 
                                            & ((IData)(1U) 
                                               + (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt))));
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg 
                                        = ((8U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__channel))
                                            ? vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg
                                            : ((4U 
                                                & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__channel))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__channel))
                                                    ? vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__channel))
                                                     ? vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg
                                                     : 
                                                    (0x30000U 
                                                     | (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN4_driver))))
                                                : (
                                                   (2U 
                                                    & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__channel))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__channel))
                                                     ? 
                                                    (0x20000U 
                                                     | (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN3_driver))
                                                     : 
                                                    (0x10000U 
                                                     | (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN2_driver)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__channel))
                                                     ? (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN1_driver)
                                                     : vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg))));
                                }
                            }
                        }
                    } else {
                        if ((4U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                            if ((2U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = 0U;
                                vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = 1U;
                                vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                                vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN = 0U;
                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = 0U;
                                vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__channel = 1U;
                            } else {
                                if ((1U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = 0U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = 1U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN = 0U;
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = 0U;
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__channel = 1U;
                                } else {
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt 
                                        = ((5U == (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt))
                                            ? 0U : 
                                           (0x3ffU 
                                            & ((IData)(1U) 
                                               + (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt))));
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__channel 
                                        = vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__channel;
                                }
                            }
                        } else {
                            if ((2U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                                if ((1U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = 0U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = 1U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN = 0U;
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = 0U;
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__channel = 1U;
                                } else {
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = 0U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = 1U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN = 0U;
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = 0U;
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__channel = 1U;
                                }
                            } else {
                                if ((1U & (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state))) {
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = 0U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = 1U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN = 0U;
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = 0U;
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__channel = 1U;
                                } else {
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt = 0U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC = 1U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK = 0U;
                                    vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN = 0U;
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg = 0U;
                                    vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__channel = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void VPhpa_Test::_sequent__TOP__23(VPhpa_Test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPhpa_Test::_sequent__TOP__23\n"); );
    VPhpa_Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg 
        = vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg;
    vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt 
        = vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt;
    vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__channel 
        = vlTOPp->__Vdly__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__channel;
    vlTOPp->ad5544_A_AD5544_CS = vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_CS;
    vlTOPp->ad5544_A_AD5544_RS = vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_RS;
    vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__ad5544_trig_reg1 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_triger_ad5544_tri) 
                                         | (IData)(vlTOPp->Phpa_Test__DOT__area_interrupt_temp)));
    vlTOPp->ad5544_A_AD5544_LDAC = vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC;
    vlTOPp->ad5544_A_AD5544_SCLK = vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK;
    vlTOPp->ad5544_A_AD5544_SDIN = vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN;
    vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state 
        = ((IData)(vlTOPp->reset) ? 1U : (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__next_state));
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

VL_INLINE_OPT void VPhpa_Test::_combo__TOP__24(VPhpa_Test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPhpa_Test::_combo__TOP__24\n"); );
    VPhpa_Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Phpa_Test__DOT__area_apbtimer__DOT__area_busCtrl_doWrite 
        = (((IData)(vlTOPp->Phpa_Test__DOT__apb_decoder_io_output_PSEL) 
            & (IData)(vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PENABLE)) 
           & (IData)(vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PWRITE));
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
}

VL_INLINE_OPT void VPhpa_Test::_sequent__TOP__25(VPhpa_Test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPhpa_Test::_sequent__TOP__25\n"); );
    VPhpa_Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__ENC_SLO_2reg 
        = vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__ENC_SLO_1reg;
    vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__ENC_SLO_1reg 
        = vlTOPp->biss_c_enc_data;
}

VL_INLINE_OPT void VPhpa_Test::_sequent__TOP__26(VPhpa_Test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPhpa_Test::_sequent__TOP__26\n"); );
    VPhpa_Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (0x3ffffU & (vlTOPp->emif_emif_addr 
                              >> 2U))))) {
        if ((1U & (~ (0x7ffffU & (vlTOPp->emif_emif_addr 
                                  >> 1U))))) {
            if ((1U & vlTOPp->emif_emif_addr)) {
                if ((1U & (vlTOPp->emif_emif_addr << 1U))) {
                    if (vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ctrl_doWrite) {
                        vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN4_driver 
                            = vlTOPp->emif_emif_data_read;
                    }
                }
            }
        }
    }
    if ((1U & (~ (0x3ffffU & (vlTOPp->emif_emif_addr 
                              >> 2U))))) {
        if ((1U & (~ (0x7ffffU & (vlTOPp->emif_emif_addr 
                                  >> 1U))))) {
            if ((1U & vlTOPp->emif_emif_addr)) {
                if ((1U & (~ (0x1fffffU & (vlTOPp->emif_emif_addr 
                                           << 1U))))) {
                    if (vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ctrl_doWrite) {
                        vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN3_driver 
                            = vlTOPp->emif_emif_data_read;
                    }
                }
            }
        }
    }
    if ((1U & (~ (0x3ffffU & (vlTOPp->emif_emif_addr 
                              >> 2U))))) {
        if ((1U & (~ (0x7ffffU & (vlTOPp->emif_emif_addr 
                                  >> 1U))))) {
            if ((1U & (~ (0xfffffU & vlTOPp->emif_emif_addr)))) {
                if ((1U & (vlTOPp->emif_emif_addr << 1U))) {
                    if (vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ctrl_doWrite) {
                        vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN2_driver 
                            = vlTOPp->emif_emif_data_read;
                    }
                }
            }
        }
    }
    if ((1U & (~ (0x3ffffU & (vlTOPp->emif_emif_addr 
                              >> 2U))))) {
        if ((1U & (~ (0x7ffffU & (vlTOPp->emif_emif_addr 
                                  >> 1U))))) {
            if ((1U & (~ (0xfffffU & vlTOPp->emif_emif_addr)))) {
                if ((1U & (~ (0x1fffffU & (vlTOPp->emif_emif_addr 
                                           << 1U))))) {
                    if (vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ctrl_doWrite) {
                        vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN1_driver 
                            = vlTOPp->emif_emif_data_read;
                    }
                }
            }
        }
    }
    if ((1U & (~ (0x3ffffU & (vlTOPp->emif_emif_addr 
                              >> 2U))))) {
        if ((1U & (~ (0x7ffffU & (vlTOPp->emif_emif_addr 
                                  >> 1U))))) {
            if ((1U & vlTOPp->emif_emif_addr)) {
                if ((1U & (vlTOPp->emif_emif_addr << 1U))) {
                    if (vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ctrl_doWrite) {
                        vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN4_driver 
                            = vlTOPp->emif_emif_data_read;
                    }
                }
            }
        }
    }
    if ((1U & (~ (0x3ffffU & (vlTOPp->emif_emif_addr 
                              >> 2U))))) {
        if ((1U & (~ (0x7ffffU & (vlTOPp->emif_emif_addr 
                                  >> 1U))))) {
            if ((1U & vlTOPp->emif_emif_addr)) {
                if ((1U & (~ (0x1fffffU & (vlTOPp->emif_emif_addr 
                                           << 1U))))) {
                    if (vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ctrl_doWrite) {
                        vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN3_driver 
                            = vlTOPp->emif_emif_data_read;
                    }
                }
            }
        }
    }
    if ((1U & (~ (0x3ffffU & (vlTOPp->emif_emif_addr 
                              >> 2U))))) {
        if ((1U & (~ (0x7ffffU & (vlTOPp->emif_emif_addr 
                                  >> 1U))))) {
            if ((1U & (~ (0xfffffU & vlTOPp->emif_emif_addr)))) {
                if ((1U & (vlTOPp->emif_emif_addr << 1U))) {
                    if (vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ctrl_doWrite) {
                        vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN2_driver 
                            = vlTOPp->emif_emif_data_read;
                    }
                }
            }
        }
    }
    if ((1U & (~ (0x3ffffU & (vlTOPp->emif_emif_addr 
                              >> 2U))))) {
        if ((1U & (~ (0x7ffffU & (vlTOPp->emif_emif_addr 
                                  >> 1U))))) {
            if ((1U & (~ (0xfffffU & vlTOPp->emif_emif_addr)))) {
                if ((1U & (~ (0x1fffffU & (vlTOPp->emif_emif_addr 
                                           << 1U))))) {
                    if (vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ctrl_doWrite) {
                        vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN1_driver 
                            = vlTOPp->emif_emif_data_read;
                    }
                }
            }
        }
    }
    if ((1U & (~ (0x3ffffU & (vlTOPp->emif_emif_addr 
                              >> 2U))))) {
        if ((1U & (~ (0x7ffffU & (vlTOPp->emif_emif_addr 
                                  >> 1U))))) {
            if ((1U & vlTOPp->emif_emif_addr)) {
                if ((1U & (vlTOPp->emif_emif_addr << 1U))) {
                    if (vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ctrl_doWrite) {
                        vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN4_driver 
                            = vlTOPp->emif_emif_data_read;
                    }
                }
            }
        }
    }
    if ((1U & (~ (0x3ffffU & (vlTOPp->emif_emif_addr 
                              >> 2U))))) {
        if ((1U & (~ (0x7ffffU & (vlTOPp->emif_emif_addr 
                                  >> 1U))))) {
            if ((1U & vlTOPp->emif_emif_addr)) {
                if ((1U & (~ (0x1fffffU & (vlTOPp->emif_emif_addr 
                                           << 1U))))) {
                    if (vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ctrl_doWrite) {
                        vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN3_driver 
                            = vlTOPp->emif_emif_data_read;
                    }
                }
            }
        }
    }
    if ((1U & (~ (0x3ffffU & (vlTOPp->emif_emif_addr 
                              >> 2U))))) {
        if ((1U & (~ (0x7ffffU & (vlTOPp->emif_emif_addr 
                                  >> 1U))))) {
            if ((1U & (~ (0xfffffU & vlTOPp->emif_emif_addr)))) {
                if ((1U & (vlTOPp->emif_emif_addr << 1U))) {
                    if (vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ctrl_doWrite) {
                        vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN2_driver 
                            = vlTOPp->emif_emif_data_read;
                    }
                }
            }
        }
    }
    if ((1U & (~ (0x3ffffU & (vlTOPp->emif_emif_addr 
                              >> 2U))))) {
        if ((1U & (~ (0x7ffffU & (vlTOPp->emif_emif_addr 
                                  >> 1U))))) {
            if ((1U & (~ (0xfffffU & vlTOPp->emif_emif_addr)))) {
                if ((1U & (~ (0x1fffffU & (vlTOPp->emif_emif_addr 
                                           << 1U))))) {
                    if (vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ctrl_doWrite) {
                        vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN1_driver 
                            = vlTOPp->emif_emif_data_read;
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void VPhpa_Test::_sequent__TOP__28(VPhpa_Test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPhpa_Test::_sequent__TOP__28\n"); );
    VPhpa_Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Phpa_Test__DOT__area_ad5544_triger_ad5544_tri 
        = ((((IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_triger__DOT__area_temp) 
             | (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_triger__DOT__area_temp_delay_1)) 
            | (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_triger__DOT__area_temp_delay_2)) 
           | (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_triger__DOT__area_temp_delay_3));
    vlTOPp->Phpa_Test__DOT__area_interrupt_temp = (
                                                   (~ (IData)(vlTOPp->reset)) 
                                                   & ((((IData)(vlTOPp->Phpa_Test__DOT__area_apbtimer__DOT__area_timerA_io_full) 
                                                        | (IData)(vlTOPp->Phpa_Test__DOT__area_apbtimer_interrupt_delay_1)) 
                                                       | (IData)(vlTOPp->Phpa_Test__DOT__area_apbtimer_interrupt_delay_2)) 
                                                      | (IData)(vlTOPp->Phpa_Test__DOT__area_apbtimer_interrupt_delay_3)));
}

VL_INLINE_OPT void VPhpa_Test::_combo__TOP__29(VPhpa_Test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPhpa_Test::_combo__TOP__29\n"); );
    VPhpa_Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ctrl_doWrite 
        = ((((IData)(vlTOPp->Phpa_Test__DOT__apb_decoder_io_output_PSEL) 
             >> 4U) & (IData)(vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PENABLE)) 
           & (IData)(vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PWRITE));
    vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ctrl_doWrite 
        = ((((IData)(vlTOPp->Phpa_Test__DOT__apb_decoder_io_output_PSEL) 
             >> 3U) & (IData)(vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PENABLE)) 
           & (IData)(vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PWRITE));
    vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ctrl_doWrite 
        = ((((IData)(vlTOPp->Phpa_Test__DOT__apb_decoder_io_output_PSEL) 
             >> 2U) & (IData)(vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PENABLE)) 
           & (IData)(vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PWRITE));
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
}

VL_INLINE_OPT void VPhpa_Test::_sequent__TOP__30(VPhpa_Test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPhpa_Test::_sequent__TOP__30\n"); );
    VPhpa_Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Phpa_Test__DOT__area_apbtimer_interrupt_delay_3 
        = vlTOPp->Phpa_Test__DOT__area_apbtimer_interrupt_delay_2;
    vlTOPp->Phpa_Test__DOT__area_apbtimer_interrupt_delay_2 
        = vlTOPp->Phpa_Test__DOT__area_apbtimer_interrupt_delay_1;
    vlTOPp->Phpa_Test__DOT__area_apbtimer_interrupt_delay_1 
        = vlTOPp->Phpa_Test__DOT__area_apbtimer__DOT__area_timerA_io_full;
}

VL_INLINE_OPT void VPhpa_Test::_sequent__TOP__31(VPhpa_Test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPhpa_Test::_sequent__TOP__31\n"); );
    VPhpa_Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Phpa_Test__DOT__area_apbtimer__DOT__area_timerA_io_full 
        = (((IData)(vlTOPp->Phpa_Test__DOT__area_apbtimer__DOT__area_timerA__DOT__limitHit) 
            & (IData)(vlTOPp->Phpa_Test__DOT__area_apbtimer__DOT___zz_io_tick)) 
           & (~ (IData)(vlTOPp->Phpa_Test__DOT__area_apbtimer__DOT__area_timerA__DOT__inhibitFull)));
}

void VPhpa_Test::_eval(VPhpa_Test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPhpa_Test::_eval\n"); );
    VPhpa_Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__4(vlSymsp);
    vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__6(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__7(vlSymsp);
        vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__8(vlSymsp);
    }
    vlTOPp->_combo__TOP__9(vlSymsp);
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__10(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x10U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__11(vlSymsp);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__clk_out) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__clk_out))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__13(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x20U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__14(vlSymsp);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->__Vm_traceActivity = (0x40U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__16(vlSymsp);
        vlTOPp->_sequent__TOP__17(vlSymsp);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->__Vm_traceActivity = (0x80U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__19(vlSymsp);
        vlTOPp->_sequent__TOP__20(vlSymsp);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->__Vm_traceActivity = (0x100U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__22(vlSymsp);
        vlTOPp->_sequent__TOP__23(vlSymsp);
    }
    vlTOPp->_combo__TOP__24(vlSymsp);
    if (((IData)(vlTOPp->__VinpClk__TOP__Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__clk_out) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__clk_out)))) {
        vlTOPp->_sequent__TOP__25(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x200U | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__26(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x400U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__28(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x800U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__29(vlSymsp);
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__30(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x1000U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__31(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x2000U | vlTOPp->__Vm_traceActivity);
    }
    // Final
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
    vlTOPp->__VinpClk__TOP__Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__clk_out 
        = vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__clk_out;
    vlTOPp->__VinpClk__TOP__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out 
        = vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out;
    vlTOPp->__VinpClk__TOP__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out 
        = vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out;
    vlTOPp->__VinpClk__TOP__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out 
        = vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out;
}

VL_INLINE_OPT QData VPhpa_Test::_change_request(VPhpa_Test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPhpa_Test::_change_request\n"); );
    VPhpa_Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VPhpa_Test::_change_request_1(VPhpa_Test__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPhpa_Test::_change_request_1\n"); );
    VPhpa_Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out ^ vlTOPp->__Vchglast__TOP__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out)
         | (vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out ^ vlTOPp->__Vchglast__TOP__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out)
         | (vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out ^ vlTOPp->__Vchglast__TOP__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out)
         | (vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__clk_out ^ vlTOPp->__Vchglast__TOP__Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__clk_out));
    VL_DEBUG_IF( if(__req && ((vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out ^ vlTOPp->__Vchglast__TOP__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out))) VL_DBG_MSGF("        CHANGE: D:/SCALAWORK/EMIF_Test/dac_ad5544.v:82: Phpa_Test.area_ad5544_A_Ctrl.area_ad5544_ctrl.clk_out\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out ^ vlTOPp->__Vchglast__TOP__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out))) VL_DBG_MSGF("        CHANGE: D:/SCALAWORK/EMIF_Test/dac_ad5544.v:82: Phpa_Test.area_ad5544_B_Ctrl.area_ad5544_ctrl.clk_out\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out ^ vlTOPp->__Vchglast__TOP__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out))) VL_DBG_MSGF("        CHANGE: D:/SCALAWORK/EMIF_Test/dac_ad5544.v:82: Phpa_Test.area_ad5544_C_Ctrl.area_ad5544_ctrl.clk_out\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__clk_out ^ vlTOPp->__Vchglast__TOP__Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__clk_out))) VL_DBG_MSGF("        CHANGE: D:/SCALAWORK/EMIF_Test/BISS_Position.v:67: Phpa_Test.area_biss_c_ctrl.area_bissc_ctrl.clk_out\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out 
        = vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out;
    vlTOPp->__Vchglast__TOP__Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out 
        = vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out;
    vlTOPp->__Vchglast__TOP__Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out 
        = vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out;
    vlTOPp->__Vchglast__TOP__Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__clk_out 
        = vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__clk_out;
    return __req;
}

#ifdef VL_DEBUG
void VPhpa_Test::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPhpa_Test::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((emif_emif_addr & 0xfff00000U))) {
        Verilated::overWidthError("emif_emif_addr");}
    if (VL_UNLIKELY((emif_emif_cs & 0xfeU))) {
        Verilated::overWidthError("emif_emif_cs");}
    if (VL_UNLIKELY((emif_emif_we & 0xfeU))) {
        Verilated::overWidthError("emif_emif_we");}
    if (VL_UNLIKELY((emif_emif_oe & 0xfeU))) {
        Verilated::overWidthError("emif_emif_oe");}
    if (VL_UNLIKELY((biss_c_enc_data & 0xfeU))) {
        Verilated::overWidthError("biss_c_enc_data");}
    if (VL_UNLIKELY((ad7606_ad_busy & 0xfeU))) {
        Verilated::overWidthError("ad7606_ad_busy");}
    if (VL_UNLIKELY((ad7606_first_data & 0xfeU))) {
        Verilated::overWidthError("ad7606_first_data");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
