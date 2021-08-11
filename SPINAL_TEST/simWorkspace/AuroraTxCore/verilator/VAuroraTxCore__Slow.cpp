// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAuroraTxCore.h for the primary calling header

#include "VAuroraTxCore.h"
#include "VAuroraTxCore__Syms.h"

//==========
QData/*63:0*/ VAuroraTxCore::__Vtable1_AuroraTxCore__DOT__stateMachine_state_string[8];
QData/*63:0*/ VAuroraTxCore::__Vtable2_AuroraTxCore__DOT__aurarorx__DOT__stateMachine_state_string[8];

VL_CTOR_IMP(VAuroraTxCore) {
    VAuroraTxCore__Syms* __restrict vlSymsp = __VlSymsp = new VAuroraTxCore__Syms(this, name());
    VAuroraTxCore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VAuroraTxCore::__Vconfigure(VAuroraTxCore__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VAuroraTxCore::~VAuroraTxCore() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void VAuroraTxCore::_initial__TOP__1(VAuroraTxCore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAuroraTxCore::_initial__TOP__1\n"); );
    VAuroraTxCore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*255:0*/ __Vtemp1[8];
    // Body
    vlTOPp->bram_we = 0U;
    vlTOPp->bram_wrdata = 0U;
    __Vtemp1[0U] = 0x2e62696eU;
    __Vtemp1[1U] = 0x5f6d656dU;
    __Vtemp1[2U] = 0x6576656cU;
    __Vtemp1[3U] = 0x746f706cU;
    __Vtemp1[4U] = 0x652e765fU;
    __Vtemp1[5U] = 0x78436f72U;
    __Vtemp1[6U] = 0x6f726154U;
    __Vtemp1[7U] = 0x417572U;
    VL_READMEM_N(false, 32, 256, 0, VL_CVT_PACK_STR_NW(8, __Vtemp1)
                 , vlTOPp->AuroraTxCore__DOT__mem, 0
                 , ~VL_ULL(0));
}

void VAuroraTxCore::_settle__TOP__5(VAuroraTxCore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAuroraTxCore::_settle__TOP__5\n"); );
    VAuroraTxCore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AuroraTxCore__DOT__aurarorx__DOT__when_Gtx_Rx_l59 
        = ((IData)(vlTOPp->AuroraTxCore__DOT__aurarorx__DOT__data_cnt) 
           < (0xffU & ((IData)(vlTOPp->AuroraTxCore__DOT__aurarorx__DOT__length) 
                       - (IData)(1U))));
    vlTOPp->__Vtableidx2 = vlTOPp->AuroraTxCore__DOT__aurarorx__DOT__stateMachine_state;
    vlTOPp->AuroraTxCore__DOT__aurarorx__DOT__stateMachine_state_string 
        = vlTOPp->__Vtable2_AuroraTxCore__DOT__aurarorx__DOT__stateMachine_state_string
        [vlTOPp->__Vtableidx2];
    vlTOPp->bram_en = vlTOPp->AuroraTxCore__DOT__mem_rden;
    vlTOPp->__Vtableidx1 = vlTOPp->AuroraTxCore__DOT__stateMachine_state;
    vlTOPp->AuroraTxCore__DOT__stateMachine_state_string 
        = vlTOPp->__Vtable1_AuroraTxCore__DOT__stateMachine_state_string
        [vlTOPp->__Vtableidx1];
    vlTOPp->AuroraTxCore__DOT__aurarorx_axir_valid 
        = ((IData)(vlTOPp->axiw_ready) & (0U != (IData)(vlTOPp->AuroraTxCore__DOT__stateMachine_state)));
    vlTOPp->axiw_valid = ((IData)(vlTOPp->axiw_ready) 
                          & (0U != (IData)(vlTOPp->AuroraTxCore__DOT__stateMachine_state)));
    vlTOPp->AuroraTxCore__DOT__axi_txdata_1 = 0U;
    if ((2U == (IData)(vlTOPp->AuroraTxCore__DOT__stateMachine_state))) {
        vlTOPp->AuroraTxCore__DOT__axi_txdata_1 = 0xffbcU;
    }
    vlTOPp->AuroraTxCore__DOT__aurarorx__DOT__when_Gtx_Rx_l92 
        = ((3U == (IData)(vlTOPp->AuroraTxCore__DOT__aurarorx__DOT__stateMachine_state)) 
           & (IData)(vlTOPp->AuroraTxCore__DOT__aurarorx_axir_valid));
    vlTOPp->AuroraTxCore__DOT__aurarorx__DOT__when_Gtx_Rx_l97 
        = ((4U == (IData)(vlTOPp->AuroraTxCore__DOT__aurarorx__DOT__stateMachine_state)) 
           & (IData)(vlTOPp->AuroraTxCore__DOT__aurarorx_axir_valid));
    vlTOPp->AuroraTxCore__DOT__aurarorx__DOT__when_Gtx_Rx_l106 
        = (((5U == (IData)(vlTOPp->AuroraTxCore__DOT__aurarorx__DOT__stateMachine_state)) 
            & (IData)(vlTOPp->AuroraTxCore__DOT__aurarorx_axir_valid)) 
           & ((IData)(vlTOPp->AuroraTxCore__DOT__aurarorx__DOT__data_cnt) 
              < (0xffU & ((IData)(vlTOPp->AuroraTxCore__DOT__aurarorx__DOT__length) 
                          - (IData)(1U)))));
    vlTOPp->AuroraTxCore__DOT__axiw_fire_3 = ((IData)(vlTOPp->axiw_valid) 
                                              & (IData)(vlTOPp->axiw_ready));
    vlTOPp->AuroraTxCore__DOT__mem_addr = (0xffU & 
                                           (((IData)(vlTOPp->axiw_valid) 
                                             & (IData)(vlTOPp->axiw_ready))
                                             ? (IData)(vlTOPp->AuroraTxCore__DOT__mem_addrtemp)
                                             : ((IData)(vlTOPp->AuroraTxCore__DOT__mem_addrtemp) 
                                                - (IData)(1U))));
    vlTOPp->AuroraTxCore__DOT__when_Gtx_Tx_l134 = (
                                                   (7U 
                                                    == (IData)(vlTOPp->AuroraTxCore__DOT__stateMachine_state)) 
                                                   & ((IData)(vlTOPp->axiw_valid) 
                                                      & (IData)(vlTOPp->axiw_ready)));
    vlTOPp->AuroraTxCore__DOT__axi_txdata_2 = vlTOPp->AuroraTxCore__DOT__axi_txdata_1;
    if ((2U != (IData)(vlTOPp->AuroraTxCore__DOT__stateMachine_state))) {
        if ((3U == (IData)(vlTOPp->AuroraTxCore__DOT__stateMachine_state))) {
            vlTOPp->AuroraTxCore__DOT__axi_txdata_2 = 1U;
        }
    }
    vlTOPp->bram_addr = vlTOPp->AuroraTxCore__DOT__mem_addr;
    vlTOPp->AuroraTxCore__DOT__axi_last_1 = vlTOPp->AuroraTxCore__DOT__axi_last;
    if (vlTOPp->AuroraTxCore__DOT__when_Gtx_Tx_l134) {
        vlTOPp->AuroraTxCore__DOT__axi_last_1 = 1U;
    }
    vlTOPp->AuroraTxCore__DOT__axi_txdata_3 = vlTOPp->AuroraTxCore__DOT__axi_txdata_2;
    if ((2U != (IData)(vlTOPp->AuroraTxCore__DOT__stateMachine_state))) {
        if ((3U != (IData)(vlTOPp->AuroraTxCore__DOT__stateMachine_state))) {
            if ((4U == (IData)(vlTOPp->AuroraTxCore__DOT__stateMachine_state))) {
                vlTOPp->AuroraTxCore__DOT__axi_txdata_3 
                    = vlTOPp->tx_head;
            }
        }
    }
    vlTOPp->AuroraTxCore__DOT__axi_last_2 = vlTOPp->AuroraTxCore__DOT__axi_last_1;
    if ((1U & (~ (IData)(vlTOPp->AuroraTxCore__DOT__when_Gtx_Tx_l134)))) {
        vlTOPp->AuroraTxCore__DOT__axi_last_2 = 0U;
    }
    vlTOPp->AuroraTxCore__DOT__axi_txdata_4 = vlTOPp->AuroraTxCore__DOT__axi_txdata_3;
    if ((2U != (IData)(vlTOPp->AuroraTxCore__DOT__stateMachine_state))) {
        if ((3U != (IData)(vlTOPp->AuroraTxCore__DOT__stateMachine_state))) {
            if ((4U != (IData)(vlTOPp->AuroraTxCore__DOT__stateMachine_state))) {
                if ((5U == (IData)(vlTOPp->AuroraTxCore__DOT__stateMachine_state))) {
                    vlTOPp->AuroraTxCore__DOT__axi_txdata_4 
                        = vlTOPp->AuroraTxCore__DOT___zz_mem_port0;
                }
            }
        }
    }
    vlTOPp->axiw_payload_last = vlTOPp->AuroraTxCore__DOT__axi_last_2;
    vlTOPp->AuroraTxCore__DOT__axi_txdata_5 = vlTOPp->AuroraTxCore__DOT__axi_txdata_4;
    if ((2U != (IData)(vlTOPp->AuroraTxCore__DOT__stateMachine_state))) {
        if ((3U != (IData)(vlTOPp->AuroraTxCore__DOT__stateMachine_state))) {
            if ((4U != (IData)(vlTOPp->AuroraTxCore__DOT__stateMachine_state))) {
                if ((5U != (IData)(vlTOPp->AuroraTxCore__DOT__stateMachine_state))) {
                    if ((6U == (IData)(vlTOPp->AuroraTxCore__DOT__stateMachine_state))) {
                        vlTOPp->AuroraTxCore__DOT__axi_txdata_5 
                            = vlTOPp->AuroraTxCore__DOT__crc_data;
                    }
                }
            }
        }
    }
    vlTOPp->AuroraTxCore__DOT__axi_txdata_6 = vlTOPp->AuroraTxCore__DOT__axi_txdata_5;
    if ((2U != (IData)(vlTOPp->AuroraTxCore__DOT__stateMachine_state))) {
        if ((3U != (IData)(vlTOPp->AuroraTxCore__DOT__stateMachine_state))) {
            if ((4U != (IData)(vlTOPp->AuroraTxCore__DOT__stateMachine_state))) {
                if ((5U != (IData)(vlTOPp->AuroraTxCore__DOT__stateMachine_state))) {
                    if ((6U != (IData)(vlTOPp->AuroraTxCore__DOT__stateMachine_state))) {
                        if ((7U == (IData)(vlTOPp->AuroraTxCore__DOT__stateMachine_state))) {
                            vlTOPp->AuroraTxCore__DOT__axi_txdata_6 = 0xffbcU;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->AuroraTxCore__DOT__axi_txdata_7 = vlTOPp->AuroraTxCore__DOT__axi_txdata_6;
    if ((2U != (IData)(vlTOPp->AuroraTxCore__DOT__stateMachine_state))) {
        if ((3U != (IData)(vlTOPp->AuroraTxCore__DOT__stateMachine_state))) {
            if ((4U != (IData)(vlTOPp->AuroraTxCore__DOT__stateMachine_state))) {
                if ((5U != (IData)(vlTOPp->AuroraTxCore__DOT__stateMachine_state))) {
                    if ((6U != (IData)(vlTOPp->AuroraTxCore__DOT__stateMachine_state))) {
                        if ((7U != (IData)(vlTOPp->AuroraTxCore__DOT__stateMachine_state))) {
                            vlTOPp->AuroraTxCore__DOT__axi_txdata_7 = 0U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->axiw_payload_data = vlTOPp->AuroraTxCore__DOT__axi_txdata_7;
    vlTOPp->AuroraTxCore__DOT__crc32_2_crc_o = ((0xfffffffeU 
                                                 & vlTOPp->AuroraTxCore__DOT__crc32_2_crc_o) 
                                                | (1U 
                                                   & ((((((((((((((((((((((((((vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                               >> 0x1fU) 
                                                                              ^ 
                                                                              (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                               >> 0x1eU)) 
                                                                             ^ 
                                                                             (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                              >> 0x1dU)) 
                                                                            ^ 
                                                                            (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                             >> 0x1cU)) 
                                                                           ^ 
                                                                           (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                            >> 0x1aU)) 
                                                                          ^ 
                                                                          (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                           >> 0x19U)) 
                                                                         ^ 
                                                                         (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                          >> 0x18U)) 
                                                                        ^ 
                                                                        (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                         >> 0x10U)) 
                                                                       ^ 
                                                                       (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                        >> 0xcU)) 
                                                                      ^ 
                                                                      (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                       >> 0xaU)) 
                                                                     ^ 
                                                                     (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                      >> 9U)) 
                                                                    ^ 
                                                                    (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                     >> 6U)) 
                                                                   ^ vlTOPp->AuroraTxCore__DOT__axi_txdata_7) 
                                                                  ^ vlTOPp->AuroraTxCore__DOT__crc_data) 
                                                                 ^ 
                                                                 (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                  >> 6U)) 
                                                                ^ 
                                                                (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                 >> 9U)) 
                                                               ^ 
                                                               (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                >> 0xaU)) 
                                                              ^ 
                                                              (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                               >> 0xcU)) 
                                                             ^ 
                                                             (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                              >> 0x10U)) 
                                                            ^ 
                                                            (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                             >> 0x18U)) 
                                                           ^ 
                                                           (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                            >> 0x19U)) 
                                                          ^ 
                                                          (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                           >> 0x1aU)) 
                                                         ^ 
                                                         (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                          >> 0x1cU)) 
                                                        ^ 
                                                        (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                         >> 0x1dU)) 
                                                       ^ 
                                                       (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                        >> 0x1eU)) 
                                                      ^ 
                                                      (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                       >> 0x1fU))));
    vlTOPp->AuroraTxCore__DOT__crc32_2_crc_o = ((0xfffffffdU 
                                                 & vlTOPp->AuroraTxCore__DOT__crc32_2_crc_o) 
                                                | (2U 
                                                   & ((((((((((((((((((((((((((0x1eU 
                                                                               & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0x1bU)) 
                                                                              ^ 
                                                                              (0x3eU 
                                                                               & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0x1aU))) 
                                                                             ^ 
                                                                             (0x1feU 
                                                                              & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0x17U))) 
                                                                            ^ 
                                                                            (0xfffeU 
                                                                             & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0x10U))) 
                                                                           ^ 
                                                                           (0x1fffeU 
                                                                            & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                               >> 0xfU))) 
                                                                          ^ 
                                                                          (0xffffeU 
                                                                           & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                              >> 0xcU))) 
                                                                         ^ 
                                                                         (0x1ffffeU 
                                                                          & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                             >> 0xbU))) 
                                                                        ^ 
                                                                        (0x3ffffeU 
                                                                         & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                            >> 0xaU))) 
                                                                       ^ 
                                                                       (0xfffffeU 
                                                                        & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                           >> 8U))) 
                                                                      ^ 
                                                                      (0x3fffffeU 
                                                                       & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                          >> 6U))) 
                                                                     ^ 
                                                                     (0x7fffffeU 
                                                                      & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                         >> 5U))) 
                                                                    ^ 
                                                                    (0xfffffffeU 
                                                                     & vlTOPp->AuroraTxCore__DOT__axi_txdata_7)) 
                                                                   ^ 
                                                                   (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                    << 1U)) 
                                                                  ^ 
                                                                  (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                   << 1U)) 
                                                                 ^ 
                                                                 (0xfffffffeU 
                                                                  & vlTOPp->AuroraTxCore__DOT__crc_data)) 
                                                                ^ 
                                                                (0x7fffffeU 
                                                                 & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                    >> 5U))) 
                                                               ^ 
                                                               (0x3fffffeU 
                                                                & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                   >> 6U))) 
                                                              ^ 
                                                              (0xfffffeU 
                                                               & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                  >> 8U))) 
                                                             ^ 
                                                             (0x3ffffeU 
                                                              & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                 >> 0xaU))) 
                                                            ^ 
                                                            (0x1ffffeU 
                                                             & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                >> 0xbU))) 
                                                           ^ 
                                                           (0xffffeU 
                                                            & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                               >> 0xcU))) 
                                                          ^ 
                                                          (0x1fffeU 
                                                           & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                              >> 0xfU))) 
                                                         ^ 
                                                         (0xfffeU 
                                                          & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                             >> 0x10U))) 
                                                        ^ 
                                                        (0x1feU 
                                                         & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                            >> 0x17U))) 
                                                       ^ 
                                                       (0x3eU 
                                                        & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                           >> 0x1aU))) 
                                                      ^ 
                                                      (0x1eU 
                                                       & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                          >> 0x1bU)))));
    vlTOPp->AuroraTxCore__DOT__crc32_2_crc_o = ((0xfffffffbU 
                                                 & vlTOPp->AuroraTxCore__DOT__crc32_2_crc_o) 
                                                | (4U 
                                                   & ((((((((((((((((((((((((((((((((4U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0x1dU)) 
                                                                                ^ 
                                                                                (0xcU 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0x1cU))) 
                                                                                ^ 
                                                                                (0xfcU 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0x18U))) 
                                                                                ^ 
                                                                                (0x3fcU 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0x16U))) 
                                                                                ^ 
                                                                                (0xfffcU 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0x10U))) 
                                                                                ^ 
                                                                                (0x1fffcU 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0xfU))) 
                                                                               ^ 
                                                                               (0x3fffcU 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0xeU))) 
                                                                              ^ 
                                                                              (0xffffcU 
                                                                               & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0xcU))) 
                                                                             ^ 
                                                                             (0x1ffffcU 
                                                                              & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0xbU))) 
                                                                            ^ 
                                                                            (0x1fffffcU 
                                                                             & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 7U))) 
                                                                           ^ 
                                                                           (0x3fffffcU 
                                                                            & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                               >> 6U))) 
                                                                          ^ 
                                                                          (0x7fffffcU 
                                                                           & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                              >> 5U))) 
                                                                         ^ 
                                                                         (0xffffffcU 
                                                                          & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                             >> 4U))) 
                                                                        ^ 
                                                                        (0xfffffffcU 
                                                                         & vlTOPp->AuroraTxCore__DOT__axi_txdata_7)) 
                                                                       ^ 
                                                                       (0xfffffffcU 
                                                                        & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                           << 1U))) 
                                                                      ^ 
                                                                      (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                       << 2U)) 
                                                                     ^ 
                                                                     (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                      << 2U)) 
                                                                    ^ 
                                                                    (0xfffffffcU 
                                                                     & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                        << 1U))) 
                                                                   ^ 
                                                                   (0xfffffffcU 
                                                                    & vlTOPp->AuroraTxCore__DOT__crc_data)) 
                                                                  ^ 
                                                                  (0xffffffcU 
                                                                   & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                      >> 4U))) 
                                                                 ^ 
                                                                 (0x7fffffcU 
                                                                  & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                     >> 5U))) 
                                                                ^ 
                                                                (0x3fffffcU 
                                                                 & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                    >> 6U))) 
                                                               ^ 
                                                               (0x1fffffcU 
                                                                & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                   >> 7U))) 
                                                              ^ 
                                                              (0x1ffffcU 
                                                               & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                  >> 0xbU))) 
                                                             ^ 
                                                             (0xffffcU 
                                                              & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                 >> 0xcU))) 
                                                            ^ 
                                                            (0x3fffcU 
                                                             & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                >> 0xeU))) 
                                                           ^ 
                                                           (0x1fffcU 
                                                            & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                               >> 0xfU))) 
                                                          ^ 
                                                          (0xfffcU 
                                                           & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                              >> 0x10U))) 
                                                         ^ 
                                                         (0x3fcU 
                                                          & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                             >> 0x16U))) 
                                                        ^ 
                                                        (0xfcU 
                                                         & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                            >> 0x18U))) 
                                                       ^ 
                                                       (0xcU 
                                                        & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                           >> 0x1cU))) 
                                                      ^ 
                                                      (4U 
                                                       & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                          >> 0x1dU)))));
    vlTOPp->AuroraTxCore__DOT__crc32_2_crc_o = ((0xfffffff7U 
                                                 & vlTOPp->AuroraTxCore__DOT__crc32_2_crc_o) 
                                                | (8U 
                                                   & ((((((((((((((((((((((((((((((8U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0x1cU)) 
                                                                                ^ 
                                                                                (0xf8U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0x18U))) 
                                                                                ^ 
                                                                                (0x3f8U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0x16U))) 
                                                                                ^ 
                                                                                (0xfff8U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0x10U))) 
                                                                               ^ 
                                                                               (0x1fff8U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0xfU))) 
                                                                              ^ 
                                                                              (0x3fff8U 
                                                                               & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0xeU))) 
                                                                             ^ 
                                                                             (0xffff8U 
                                                                              & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0xcU))) 
                                                                            ^ 
                                                                            (0x1ffff8U 
                                                                             & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0xbU))) 
                                                                           ^ 
                                                                           (0x1fffff8U 
                                                                            & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                               >> 7U))) 
                                                                          ^ 
                                                                          (0x3fffff8U 
                                                                           & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                              >> 6U))) 
                                                                         ^ 
                                                                         (0x7fffff8U 
                                                                          & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                             >> 5U))) 
                                                                        ^ 
                                                                        (0xffffff8U 
                                                                         & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                            >> 4U))) 
                                                                       ^ 
                                                                       (0xfffffff8U 
                                                                        & vlTOPp->AuroraTxCore__DOT__axi_txdata_7)) 
                                                                      ^ 
                                                                      (0xfffffff8U 
                                                                       & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                          << 1U))) 
                                                                     ^ 
                                                                     (0xfffffff8U 
                                                                      & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                         << 2U))) 
                                                                    ^ 
                                                                    (0xfffffff8U 
                                                                     & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                        << 2U))) 
                                                                   ^ 
                                                                   (0xfffffff8U 
                                                                    & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                       << 1U))) 
                                                                  ^ 
                                                                  (0xfffffff8U 
                                                                   & vlTOPp->AuroraTxCore__DOT__crc_data)) 
                                                                 ^ 
                                                                 (0xffffff8U 
                                                                  & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                     >> 4U))) 
                                                                ^ 
                                                                (0x7fffff8U 
                                                                 & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                    >> 5U))) 
                                                               ^ 
                                                               (0x3fffff8U 
                                                                & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                   >> 6U))) 
                                                              ^ 
                                                              (0x1fffff8U 
                                                               & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                  >> 7U))) 
                                                             ^ 
                                                             (0x1ffff8U 
                                                              & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                 >> 0xbU))) 
                                                            ^ 
                                                            (0xffff8U 
                                                             & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                >> 0xcU))) 
                                                           ^ 
                                                           (0x3fff8U 
                                                            & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                               >> 0xeU))) 
                                                          ^ 
                                                          (0x1fff8U 
                                                           & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                              >> 0xfU))) 
                                                         ^ 
                                                         (0xfff8U 
                                                          & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                             >> 0x10U))) 
                                                        ^ 
                                                        (0x3f8U 
                                                         & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                            >> 0x16U))) 
                                                       ^ 
                                                       (0xf8U 
                                                        & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                           >> 0x18U))) 
                                                      ^ 
                                                      (8U 
                                                       & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                          >> 0x1cU)))));
    vlTOPp->AuroraTxCore__DOT__crc32_2_crc_o = ((0xffffffefU 
                                                 & vlTOPp->AuroraTxCore__DOT__crc32_2_crc_o) 
                                                | (0x10U 
                                                   & ((((((((((((((((((((((((((((((((((0x10U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0x1bU)) 
                                                                                ^ 
                                                                                (0x30U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0x1aU))) 
                                                                                ^ 
                                                                                (0x70U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0x19U))) 
                                                                                ^ 
                                                                                (0x7f0U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0x15U))) 
                                                                                ^ 
                                                                                (0xff0U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0x14U))) 
                                                                                ^ 
                                                                                (0xfff0U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0x10U))) 
                                                                                ^ 
                                                                                (0x1fff0U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0xfU))) 
                                                                                ^ 
                                                                                (0x3fff0U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0xeU))) 
                                                                               ^ 
                                                                               (0x1ffff0U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0xbU))) 
                                                                              ^ 
                                                                              (0xfffff0U 
                                                                               & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 8U))) 
                                                                             ^ 
                                                                             (0x1fffff0U 
                                                                              & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 7U))) 
                                                                            ^ 
                                                                            (0xffffff0U 
                                                                             & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 4U))) 
                                                                           ^ 
                                                                           (0x3ffffff0U 
                                                                            & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                               >> 2U))) 
                                                                          ^ 
                                                                          (0xfffffff0U 
                                                                           & vlTOPp->AuroraTxCore__DOT__axi_txdata_7)) 
                                                                         ^ 
                                                                         (0xfffffff0U 
                                                                          & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                             << 1U))) 
                                                                        ^ 
                                                                        (0xfffffff0U 
                                                                         & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                            << 2U))) 
                                                                       ^ 
                                                                       (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                        << 4U)) 
                                                                      ^ 
                                                                      (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                       << 4U)) 
                                                                     ^ 
                                                                     (0xfffffff0U 
                                                                      & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                         << 2U))) 
                                                                    ^ 
                                                                    (0xfffffff0U 
                                                                     & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                        << 1U))) 
                                                                   ^ 
                                                                   (0xfffffff0U 
                                                                    & vlTOPp->AuroraTxCore__DOT__crc_data)) 
                                                                  ^ 
                                                                  (0x3ffffff0U 
                                                                   & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                      >> 2U))) 
                                                                 ^ 
                                                                 (0xffffff0U 
                                                                  & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                     >> 4U))) 
                                                                ^ 
                                                                (0x1fffff0U 
                                                                 & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                    >> 7U))) 
                                                               ^ 
                                                               (0xfffff0U 
                                                                & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                   >> 8U))) 
                                                              ^ 
                                                              (0x1ffff0U 
                                                               & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                  >> 0xbU))) 
                                                             ^ 
                                                             (0x3fff0U 
                                                              & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                 >> 0xeU))) 
                                                            ^ 
                                                            (0x1fff0U 
                                                             & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                >> 0xfU))) 
                                                           ^ 
                                                           (0xfff0U 
                                                            & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                               >> 0x10U))) 
                                                          ^ 
                                                          (0xff0U 
                                                           & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                              >> 0x14U))) 
                                                         ^ 
                                                         (0x7f0U 
                                                          & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                             >> 0x15U))) 
                                                        ^ 
                                                        (0x70U 
                                                         & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                            >> 0x19U))) 
                                                       ^ 
                                                       (0x30U 
                                                        & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                           >> 0x1aU))) 
                                                      ^ 
                                                      (0x10U 
                                                       & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                          >> 0x1bU)))));
    vlTOPp->AuroraTxCore__DOT__crc32_2_crc_o = ((0xffffffdfU 
                                                 & vlTOPp->AuroraTxCore__DOT__crc32_2_crc_o) 
                                                | (0x20U 
                                                   & ((((((((((((((((((((((((((((((0xe0U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0x18U)) 
                                                                                ^ 
                                                                                (0x1e0U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0x17U))) 
                                                                                ^ 
                                                                                (0x1fe0U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0x13U))) 
                                                                                ^ 
                                                                                (0xffe0U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0x10U))) 
                                                                               ^ 
                                                                               (0x1ffe0U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0xfU))) 
                                                                              ^ 
                                                                              (0x3ffe0U 
                                                                               & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0xeU))) 
                                                                             ^ 
                                                                             (0xffffe0U 
                                                                              & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 8U))) 
                                                                            ^ 
                                                                            (0x7ffffe0U 
                                                                             & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 5U))) 
                                                                           ^ 
                                                                           (0x3fffffe0U 
                                                                            & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                               >> 2U))) 
                                                                          ^ 
                                                                          (0x7fffffe0U 
                                                                           & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                              >> 1U))) 
                                                                         ^ 
                                                                         (0xffffffe0U 
                                                                          & vlTOPp->AuroraTxCore__DOT__axi_txdata_7)) 
                                                                        ^ 
                                                                        (0xffffffe0U 
                                                                         & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                            << 1U))) 
                                                                       ^ 
                                                                       (0xffffffe0U 
                                                                        & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                           << 2U))) 
                                                                      ^ 
                                                                      (0xffffffe0U 
                                                                       & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                          << 4U))) 
                                                                     ^ 
                                                                     (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                      << 5U)) 
                                                                    ^ 
                                                                    (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                     << 5U)) 
                                                                   ^ 
                                                                   (0xffffffe0U 
                                                                    & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                       << 4U))) 
                                                                  ^ 
                                                                  (0xffffffe0U 
                                                                   & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                      << 2U))) 
                                                                 ^ 
                                                                 (0xffffffe0U 
                                                                  & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                     << 1U))) 
                                                                ^ 
                                                                (0xffffffe0U 
                                                                 & vlTOPp->AuroraTxCore__DOT__crc_data)) 
                                                               ^ 
                                                               (0x7fffffe0U 
                                                                & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                   >> 1U))) 
                                                              ^ 
                                                              (0x3fffffe0U 
                                                               & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                  >> 2U))) 
                                                             ^ 
                                                             (0x7ffffe0U 
                                                              & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                 >> 5U))) 
                                                            ^ 
                                                            (0xffffe0U 
                                                             & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                >> 8U))) 
                                                           ^ 
                                                           (0x3ffe0U 
                                                            & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                               >> 0xeU))) 
                                                          ^ 
                                                          (0x1ffe0U 
                                                           & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                              >> 0xfU))) 
                                                         ^ 
                                                         (0xffe0U 
                                                          & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                             >> 0x10U))) 
                                                        ^ 
                                                        (0x1fe0U 
                                                         & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                            >> 0x13U))) 
                                                       ^ 
                                                       (0x1e0U 
                                                        & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                           >> 0x17U))) 
                                                      ^ 
                                                      (0xe0U 
                                                       & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                          >> 0x18U)))));
    vlTOPp->AuroraTxCore__DOT__crc32_2_crc_o = ((0xffffffbfU 
                                                 & vlTOPp->AuroraTxCore__DOT__crc32_2_crc_o) 
                                                | (0x40U 
                                                   & ((((((((((((((((((((((((((((((0xc0U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0x18U)) 
                                                                                ^ 
                                                                                (0x1c0U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0x17U))) 
                                                                                ^ 
                                                                                (0x1fc0U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0x13U))) 
                                                                                ^ 
                                                                                (0xffc0U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0x10U))) 
                                                                               ^ 
                                                                               (0x1ffc0U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0xfU))) 
                                                                              ^ 
                                                                              (0x3ffc0U 
                                                                               & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0xeU))) 
                                                                             ^ 
                                                                             (0xffffc0U 
                                                                              & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 8U))) 
                                                                            ^ 
                                                                            (0x7ffffc0U 
                                                                             & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 5U))) 
                                                                           ^ 
                                                                           (0x3fffffc0U 
                                                                            & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                               >> 2U))) 
                                                                          ^ 
                                                                          (0x7fffffc0U 
                                                                           & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                              >> 1U))) 
                                                                         ^ 
                                                                         (0xffffffc0U 
                                                                          & vlTOPp->AuroraTxCore__DOT__axi_txdata_7)) 
                                                                        ^ 
                                                                        (0xffffffc0U 
                                                                         & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                            << 1U))) 
                                                                       ^ 
                                                                       (0xffffffc0U 
                                                                        & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                           << 2U))) 
                                                                      ^ 
                                                                      (0xffffffc0U 
                                                                       & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                          << 4U))) 
                                                                     ^ 
                                                                     (0xffffffc0U 
                                                                      & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                         << 5U))) 
                                                                    ^ 
                                                                    (0xffffffc0U 
                                                                     & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                        << 5U))) 
                                                                   ^ 
                                                                   (0xffffffc0U 
                                                                    & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                       << 4U))) 
                                                                  ^ 
                                                                  (0xffffffc0U 
                                                                   & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                      << 2U))) 
                                                                 ^ 
                                                                 (0xffffffc0U 
                                                                  & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                     << 1U))) 
                                                                ^ 
                                                                (0xffffffc0U 
                                                                 & vlTOPp->AuroraTxCore__DOT__crc_data)) 
                                                               ^ 
                                                               (0x7fffffc0U 
                                                                & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                   >> 1U))) 
                                                              ^ 
                                                              (0x3fffffc0U 
                                                               & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                  >> 2U))) 
                                                             ^ 
                                                             (0x7ffffc0U 
                                                              & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                 >> 5U))) 
                                                            ^ 
                                                            (0xffffc0U 
                                                             & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                >> 8U))) 
                                                           ^ 
                                                           (0x3ffc0U 
                                                            & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                               >> 0xeU))) 
                                                          ^ 
                                                          (0x1ffc0U 
                                                           & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                              >> 0xfU))) 
                                                         ^ 
                                                         (0xffc0U 
                                                          & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                             >> 0x10U))) 
                                                        ^ 
                                                        (0x1fc0U 
                                                         & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                            >> 0x13U))) 
                                                       ^ 
                                                       (0x1c0U 
                                                        & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                           >> 0x17U))) 
                                                      ^ 
                                                      (0xc0U 
                                                       & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                          >> 0x18U)))));
    vlTOPp->AuroraTxCore__DOT__crc32_2_crc_o = ((0xffffff7fU 
                                                 & vlTOPp->AuroraTxCore__DOT__crc32_2_crc_o) 
                                                | (0x80U 
                                                   & ((((((((((((((((((((((((((((((((0x380U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0x16U)) 
                                                                                ^ 
                                                                                (0x780U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0x15U))) 
                                                                                ^ 
                                                                                (0x3f80U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0x12U))) 
                                                                                ^ 
                                                                                (0x7f80U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0x11U))) 
                                                                                ^ 
                                                                                (0xff80U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0x10U))) 
                                                                                ^ 
                                                                                (0x1ff80U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0xfU))) 
                                                                               ^ 
                                                                               (0x3ff80U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0xeU))) 
                                                                              ^ 
                                                                              (0x7fff80U 
                                                                               & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 9U))) 
                                                                             ^ 
                                                                             (0xffff80U 
                                                                              & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 8U))) 
                                                                            ^ 
                                                                            (0x1fffff80U 
                                                                             & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 3U))) 
                                                                           ^ 
                                                                           (0x7fffff80U 
                                                                            & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                               >> 1U))) 
                                                                          ^ 
                                                                          (0xffffff80U 
                                                                           & vlTOPp->AuroraTxCore__DOT__axi_txdata_7)) 
                                                                         ^ 
                                                                         (0xffffff80U 
                                                                          & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                             << 2U))) 
                                                                        ^ 
                                                                        (0xffffff80U 
                                                                         & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                            << 4U))) 
                                                                       ^ 
                                                                       (0xffffff80U 
                                                                        & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                           << 5U))) 
                                                                      ^ 
                                                                      (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                       << 7U)) 
                                                                     ^ 
                                                                     (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                      << 7U)) 
                                                                    ^ 
                                                                    (0xffffff80U 
                                                                     & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                        << 5U))) 
                                                                   ^ 
                                                                   (0xffffff80U 
                                                                    & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                       << 4U))) 
                                                                  ^ 
                                                                  (0xffffff80U 
                                                                   & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                      << 2U))) 
                                                                 ^ 
                                                                 (0xffffff80U 
                                                                  & vlTOPp->AuroraTxCore__DOT__crc_data)) 
                                                                ^ 
                                                                (0x7fffff80U 
                                                                 & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                    >> 1U))) 
                                                               ^ 
                                                               (0x1fffff80U 
                                                                & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                   >> 3U))) 
                                                              ^ 
                                                              (0xffff80U 
                                                               & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                  >> 8U))) 
                                                             ^ 
                                                             (0x7fff80U 
                                                              & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                 >> 9U))) 
                                                            ^ 
                                                            (0x3ff80U 
                                                             & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                >> 0xeU))) 
                                                           ^ 
                                                           (0x1ff80U 
                                                            & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                               >> 0xfU))) 
                                                          ^ 
                                                          (0xff80U 
                                                           & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                              >> 0x10U))) 
                                                         ^ 
                                                         (0x7f80U 
                                                          & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                             >> 0x11U))) 
                                                        ^ 
                                                        (0x3f80U 
                                                         & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                            >> 0x12U))) 
                                                       ^ 
                                                       (0x780U 
                                                        & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                           >> 0x15U))) 
                                                      ^ 
                                                      (0x380U 
                                                       & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                          >> 0x16U)))));
    vlTOPp->AuroraTxCore__DOT__crc32_2_crc_o = ((0xfffffeffU 
                                                 & vlTOPp->AuroraTxCore__DOT__crc32_2_crc_o) 
                                                | (0x100U 
                                                   & ((((((((((((((((((((((((((0x100U 
                                                                               & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0x17U)) 
                                                                              ^ 
                                                                              (0xf00U 
                                                                               & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0x14U))) 
                                                                             ^ 
                                                                             (0x1ff00U 
                                                                              & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0xfU))) 
                                                                            ^ 
                                                                            (0x3ff00U 
                                                                             & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0xeU))) 
                                                                           ^ 
                                                                           (0x7fff00U 
                                                                            & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                               >> 9U))) 
                                                                          ^ 
                                                                          (0xfffff00U 
                                                                           & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                              >> 4U))) 
                                                                         ^ 
                                                                         (0x1fffff00U 
                                                                          & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                             >> 3U))) 
                                                                        ^ 
                                                                        (0x3fffff00U 
                                                                         & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                            >> 2U))) 
                                                                       ^ 
                                                                       (0xffffff00U 
                                                                        & vlTOPp->AuroraTxCore__DOT__axi_txdata_7)) 
                                                                      ^ 
                                                                      (0xffffff00U 
                                                                       & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                          << 4U))) 
                                                                     ^ 
                                                                     (0xffffff00U 
                                                                      & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                         << 5U))) 
                                                                    ^ 
                                                                    (0xffffff00U 
                                                                     & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                        << 7U))) 
                                                                   ^ 
                                                                   (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                    << 8U)) 
                                                                  ^ 
                                                                  (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                   << 8U)) 
                                                                 ^ 
                                                                 (0xffffff00U 
                                                                  & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                     << 7U))) 
                                                                ^ 
                                                                (0xffffff00U 
                                                                 & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                    << 5U))) 
                                                               ^ 
                                                               (0xffffff00U 
                                                                & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                   << 4U))) 
                                                              ^ 
                                                              (0xffffff00U 
                                                               & vlTOPp->AuroraTxCore__DOT__crc_data)) 
                                                             ^ 
                                                             (0x3fffff00U 
                                                              & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                 >> 2U))) 
                                                            ^ 
                                                            (0x1fffff00U 
                                                             & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                >> 3U))) 
                                                           ^ 
                                                           (0xfffff00U 
                                                            & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                               >> 4U))) 
                                                          ^ 
                                                          (0x7fff00U 
                                                           & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                              >> 9U))) 
                                                         ^ 
                                                         (0x3ff00U 
                                                          & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                             >> 0xeU))) 
                                                        ^ 
                                                        (0x1ff00U 
                                                         & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                            >> 0xfU))) 
                                                       ^ 
                                                       (0xf00U 
                                                        & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                           >> 0x14U))) 
                                                      ^ 
                                                      (0x100U 
                                                       & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                          >> 0x17U)))));
    vlTOPp->AuroraTxCore__DOT__crc32_2_crc_o = ((0xfffffdffU 
                                                 & vlTOPp->AuroraTxCore__DOT__crc32_2_crc_o) 
                                                | (0x200U 
                                                   & ((((((((((((((((((((((((0xe00U 
                                                                             & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0x14U)) 
                                                                            ^ 
                                                                            (0x1fe00U 
                                                                             & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0xfU))) 
                                                                           ^ 
                                                                           (0x3fe00U 
                                                                            & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                               >> 0xeU))) 
                                                                          ^ 
                                                                          (0x7ffe00U 
                                                                           & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                              >> 9U))) 
                                                                         ^ 
                                                                         (0xffffe00U 
                                                                          & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                             >> 4U))) 
                                                                        ^ 
                                                                        (0x1ffffe00U 
                                                                         & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                            >> 3U))) 
                                                                       ^ 
                                                                       (0x3ffffe00U 
                                                                        & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                           >> 2U))) 
                                                                      ^ 
                                                                      (0xfffffe00U 
                                                                       & vlTOPp->AuroraTxCore__DOT__axi_txdata_7)) 
                                                                     ^ 
                                                                     (0xfffffe00U 
                                                                      & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                         << 4U))) 
                                                                    ^ 
                                                                    (0xfffffe00U 
                                                                     & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                        << 5U))) 
                                                                   ^ 
                                                                   (0xfffffe00U 
                                                                    & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                       << 7U))) 
                                                                  ^ 
                                                                  (0xfffffe00U 
                                                                   & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                      << 8U))) 
                                                                 ^ 
                                                                 (0xfffffe00U 
                                                                  & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                     << 8U))) 
                                                                ^ 
                                                                (0xfffffe00U 
                                                                 & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                    << 7U))) 
                                                               ^ 
                                                               (0xfffffe00U 
                                                                & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                   << 5U))) 
                                                              ^ 
                                                              (0xfffffe00U 
                                                               & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                  << 4U))) 
                                                             ^ 
                                                             (0xfffffe00U 
                                                              & vlTOPp->AuroraTxCore__DOT__crc_data)) 
                                                            ^ 
                                                            (0x3ffffe00U 
                                                             & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                >> 2U))) 
                                                           ^ 
                                                           (0x1ffffe00U 
                                                            & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                               >> 3U))) 
                                                          ^ 
                                                          (0xffffe00U 
                                                           & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                              >> 4U))) 
                                                         ^ 
                                                         (0x7ffe00U 
                                                          & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                             >> 9U))) 
                                                        ^ 
                                                        (0x3fe00U 
                                                         & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                            >> 0xeU))) 
                                                       ^ 
                                                       (0x1fe00U 
                                                        & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                           >> 0xfU))) 
                                                      ^ 
                                                      (0xe00U 
                                                       & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                          >> 0x14U)))));
    vlTOPp->AuroraTxCore__DOT__crc32_2_crc_o = ((0xfffffbffU 
                                                 & vlTOPp->AuroraTxCore__DOT__crc32_2_crc_o) 
                                                | (0x400U 
                                                   & ((((((((((((((((((((((((((0x400U 
                                                                               & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0x15U)) 
                                                                              ^ 
                                                                              (0x1c00U 
                                                                               & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0x13U))) 
                                                                             ^ 
                                                                             (0x3c00U 
                                                                              & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0x12U))) 
                                                                            ^ 
                                                                            (0xfc00U 
                                                                             & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0x10U))) 
                                                                           ^ 
                                                                           (0x7ffc00U 
                                                                            & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                               >> 9U))) 
                                                                          ^ 
                                                                          (0x3fffc00U 
                                                                           & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                              >> 6U))) 
                                                                         ^ 
                                                                         (0xffffc00U 
                                                                          & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                             >> 4U))) 
                                                                        ^ 
                                                                        (0x1ffffc00U 
                                                                         & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                            >> 3U))) 
                                                                       ^ 
                                                                       (0xfffffc00U 
                                                                        & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                           << 1U))) 
                                                                      ^ 
                                                                      (0xfffffc00U 
                                                                       & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                          << 5U))) 
                                                                     ^ 
                                                                     (0xfffffc00U 
                                                                      & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                         << 7U))) 
                                                                    ^ 
                                                                    (0xfffffc00U 
                                                                     & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                        << 8U))) 
                                                                   ^ 
                                                                   (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                    << 0xaU)) 
                                                                  ^ 
                                                                  (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                   << 0xaU)) 
                                                                 ^ 
                                                                 (0xfffffc00U 
                                                                  & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                     << 8U))) 
                                                                ^ 
                                                                (0xfffffc00U 
                                                                 & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                    << 7U))) 
                                                               ^ 
                                                               (0xfffffc00U 
                                                                & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                   << 5U))) 
                                                              ^ 
                                                              (0xfffffc00U 
                                                               & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                  << 1U))) 
                                                             ^ 
                                                             (0x1ffffc00U 
                                                              & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                 >> 3U))) 
                                                            ^ 
                                                            (0xffffc00U 
                                                             & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                >> 4U))) 
                                                           ^ 
                                                           (0x3fffc00U 
                                                            & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                               >> 6U))) 
                                                          ^ 
                                                          (0x7ffc00U 
                                                           & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                              >> 9U))) 
                                                         ^ 
                                                         (0xfc00U 
                                                          & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                             >> 0x10U))) 
                                                        ^ 
                                                        (0x3c00U 
                                                         & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                            >> 0x12U))) 
                                                       ^ 
                                                       (0x1c00U 
                                                        & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                           >> 0x13U))) 
                                                      ^ 
                                                      (0x400U 
                                                       & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                          >> 0x15U)))));
    vlTOPp->AuroraTxCore__DOT__crc32_2_crc_o = ((0xfffff7ffU 
                                                 & vlTOPp->AuroraTxCore__DOT__crc32_2_crc_o) 
                                                | (0x800U 
                                                   & ((((((((((((((((((((((((((((((((((0x800U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0x14U)) 
                                                                                ^ 
                                                                                (0x7800U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0x11U))) 
                                                                                ^ 
                                                                                (0xf800U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0x10U))) 
                                                                                ^ 
                                                                                (0x1f800U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0xfU))) 
                                                                                ^ 
                                                                                (0x3f800U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0xeU))) 
                                                                                ^ 
                                                                                (0x7f800U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0xdU))) 
                                                                                ^ 
                                                                                (0x7ff800U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 9U))) 
                                                                                ^ 
                                                                                (0x3fff800U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 6U))) 
                                                                               ^ 
                                                                               (0x7fff800U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 5U))) 
                                                                              ^ 
                                                                              (0xffff800U 
                                                                               & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 4U))) 
                                                                             ^ 
                                                                             (0x1ffff800U 
                                                                              & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 3U))) 
                                                                            ^ 
                                                                            (0x7ffff800U 
                                                                             & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 1U))) 
                                                                           ^ 
                                                                           (0xfffff800U 
                                                                            & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                               << 2U))) 
                                                                          ^ 
                                                                          (0xfffff800U 
                                                                           & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                              << 7U))) 
                                                                         ^ 
                                                                         (0xfffff800U 
                                                                          & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                             << 8U))) 
                                                                        ^ 
                                                                        (0xfffff800U 
                                                                         & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                            << 0xaU))) 
                                                                       ^ 
                                                                       (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                        << 0xbU)) 
                                                                      ^ 
                                                                      (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                       << 0xbU)) 
                                                                     ^ 
                                                                     (0xfffff800U 
                                                                      & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                         << 0xaU))) 
                                                                    ^ 
                                                                    (0xfffff800U 
                                                                     & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                        << 8U))) 
                                                                   ^ 
                                                                   (0xfffff800U 
                                                                    & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                       << 7U))) 
                                                                  ^ 
                                                                  (0xfffff800U 
                                                                   & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                      << 2U))) 
                                                                 ^ 
                                                                 (0x7ffff800U 
                                                                  & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                     >> 1U))) 
                                                                ^ 
                                                                (0x1ffff800U 
                                                                 & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                    >> 3U))) 
                                                               ^ 
                                                               (0xffff800U 
                                                                & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                   >> 4U))) 
                                                              ^ 
                                                              (0x7fff800U 
                                                               & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                  >> 5U))) 
                                                             ^ 
                                                             (0x3fff800U 
                                                              & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                 >> 6U))) 
                                                            ^ 
                                                            (0x7ff800U 
                                                             & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                >> 9U))) 
                                                           ^ 
                                                           (0x7f800U 
                                                            & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                               >> 0xdU))) 
                                                          ^ 
                                                          (0x3f800U 
                                                           & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                              >> 0xeU))) 
                                                         ^ 
                                                         (0x1f800U 
                                                          & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                             >> 0xfU))) 
                                                        ^ 
                                                        (0xf800U 
                                                         & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                            >> 0x10U))) 
                                                       ^ 
                                                       (0x7800U 
                                                        & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                           >> 0x11U))) 
                                                      ^ 
                                                      (0x800U 
                                                       & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                          >> 0x14U)))));
    vlTOPp->AuroraTxCore__DOT__crc32_2_crc_o = ((0xffffefffU 
                                                 & vlTOPp->AuroraTxCore__DOT__crc32_2_crc_o) 
                                                | (0x1000U 
                                                   & ((((((((((((((((((((((((((((((((((0x1000U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0x13U)) 
                                                                                ^ 
                                                                                (0x3000U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0x12U))) 
                                                                                ^ 
                                                                                (0x1f000U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0xfU))) 
                                                                                ^ 
                                                                                (0xff000U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0xcU))) 
                                                                                ^ 
                                                                                (0x7ff000U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 9U))) 
                                                                                ^ 
                                                                                (0x3fff000U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 6U))) 
                                                                                ^ 
                                                                                (0x7fff000U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 5U))) 
                                                                                ^ 
                                                                                (0x1ffff000U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 3U))) 
                                                                               ^ 
                                                                               (0x7ffff000U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 1U))) 
                                                                              ^ 
                                                                              (0xfffff000U 
                                                                               & vlTOPp->AuroraTxCore__DOT__axi_txdata_7)) 
                                                                             ^ 
                                                                             (0xfffff000U 
                                                                              & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                << 3U))) 
                                                                            ^ 
                                                                            (0xfffff000U 
                                                                             & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                << 6U))) 
                                                                           ^ 
                                                                           (0xfffff000U 
                                                                            & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                               << 7U))) 
                                                                          ^ 
                                                                          (0xfffff000U 
                                                                           & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                              << 8U))) 
                                                                         ^ 
                                                                         (0xfffff000U 
                                                                          & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                             << 0xaU))) 
                                                                        ^ 
                                                                        (0xfffff000U 
                                                                         & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                            << 0xbU))) 
                                                                       ^ 
                                                                       (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                        << 0xcU)) 
                                                                      ^ 
                                                                      (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                       << 0xcU)) 
                                                                     ^ 
                                                                     (0xfffff000U 
                                                                      & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                         << 0xbU))) 
                                                                    ^ 
                                                                    (0xfffff000U 
                                                                     & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                        << 0xaU))) 
                                                                   ^ 
                                                                   (0xfffff000U 
                                                                    & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                       << 8U))) 
                                                                  ^ 
                                                                  (0xfffff000U 
                                                                   & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                      << 7U))) 
                                                                 ^ 
                                                                 (0xfffff000U 
                                                                  & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                     << 6U))) 
                                                                ^ 
                                                                (0xfffff000U 
                                                                 & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                    << 3U))) 
                                                               ^ 
                                                               (0xfffff000U 
                                                                & vlTOPp->AuroraTxCore__DOT__crc_data)) 
                                                              ^ 
                                                              (0x7ffff000U 
                                                               & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                  >> 1U))) 
                                                             ^ 
                                                             (0x1ffff000U 
                                                              & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                 >> 3U))) 
                                                            ^ 
                                                            (0x7fff000U 
                                                             & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                >> 5U))) 
                                                           ^ 
                                                           (0x3fff000U 
                                                            & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                               >> 6U))) 
                                                          ^ 
                                                          (0x7ff000U 
                                                           & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                              >> 9U))) 
                                                         ^ 
                                                         (0xff000U 
                                                          & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                             >> 0xcU))) 
                                                        ^ 
                                                        (0x1f000U 
                                                         & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                            >> 0xfU))) 
                                                       ^ 
                                                       (0x3000U 
                                                        & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                           >> 0x12U))) 
                                                      ^ 
                                                      (0x1000U 
                                                       & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                          >> 0x13U)))));
    vlTOPp->AuroraTxCore__DOT__crc32_2_crc_o = ((0xffffdfffU 
                                                 & vlTOPp->AuroraTxCore__DOT__crc32_2_crc_o) 
                                                | (0x2000U 
                                                   & ((((((((((((((((((((((((((((((((0x2000U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0x12U)) 
                                                                                ^ 
                                                                                (0x1e000U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0xfU))) 
                                                                                ^ 
                                                                                (0xfe000U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0xcU))) 
                                                                                ^ 
                                                                                (0x7fe000U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 9U))) 
                                                                                ^ 
                                                                                (0x3ffe000U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 6U))) 
                                                                                ^ 
                                                                                (0x7ffe000U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 5U))) 
                                                                               ^ 
                                                                               (0x1fffe000U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 3U))) 
                                                                              ^ 
                                                                              (0x7fffe000U 
                                                                               & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 1U))) 
                                                                             ^ 
                                                                             (0xffffe000U 
                                                                              & vlTOPp->AuroraTxCore__DOT__axi_txdata_7)) 
                                                                            ^ 
                                                                            (0xffffe000U 
                                                                             & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                << 3U))) 
                                                                           ^ 
                                                                           (0xffffe000U 
                                                                            & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                               << 6U))) 
                                                                          ^ 
                                                                          (0xffffe000U 
                                                                           & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                              << 7U))) 
                                                                         ^ 
                                                                         (0xffffe000U 
                                                                          & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                             << 8U))) 
                                                                        ^ 
                                                                        (0xffffe000U 
                                                                         & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                            << 0xaU))) 
                                                                       ^ 
                                                                       (0xffffe000U 
                                                                        & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                           << 0xbU))) 
                                                                      ^ 
                                                                      (0xffffe000U 
                                                                       & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                          << 0xcU))) 
                                                                     ^ 
                                                                     (0xffffe000U 
                                                                      & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                         << 0xcU))) 
                                                                    ^ 
                                                                    (0xffffe000U 
                                                                     & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                        << 0xbU))) 
                                                                   ^ 
                                                                   (0xffffe000U 
                                                                    & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                       << 0xaU))) 
                                                                  ^ 
                                                                  (0xffffe000U 
                                                                   & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                      << 8U))) 
                                                                 ^ 
                                                                 (0xffffe000U 
                                                                  & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                     << 7U))) 
                                                                ^ 
                                                                (0xffffe000U 
                                                                 & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                    << 6U))) 
                                                               ^ 
                                                               (0xffffe000U 
                                                                & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                   << 3U))) 
                                                              ^ 
                                                              (0xffffe000U 
                                                               & vlTOPp->AuroraTxCore__DOT__crc_data)) 
                                                             ^ 
                                                             (0x7fffe000U 
                                                              & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                 >> 1U))) 
                                                            ^ 
                                                            (0x1fffe000U 
                                                             & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                >> 3U))) 
                                                           ^ 
                                                           (0x7ffe000U 
                                                            & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                               >> 5U))) 
                                                          ^ 
                                                          (0x3ffe000U 
                                                           & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                              >> 6U))) 
                                                         ^ 
                                                         (0x7fe000U 
                                                          & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                             >> 9U))) 
                                                        ^ 
                                                        (0xfe000U 
                                                         & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                            >> 0xcU))) 
                                                       ^ 
                                                       (0x1e000U 
                                                        & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                           >> 0xfU))) 
                                                      ^ 
                                                      (0x2000U 
                                                       & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                          >> 0x12U)))));
    vlTOPp->AuroraTxCore__DOT__crc32_2_crc_o = ((0xffffbfffU 
                                                 & vlTOPp->AuroraTxCore__DOT__crc32_2_crc_o) 
                                                | (0x4000U 
                                                   & ((((((((((((((((((((((((((((((0x1c000U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0xfU)) 
                                                                                ^ 
                                                                                (0xfc000U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0xcU))) 
                                                                                ^ 
                                                                                (0x7fc000U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 9U))) 
                                                                                ^ 
                                                                                (0x3ffc000U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 6U))) 
                                                                               ^ 
                                                                               (0x7ffc000U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 5U))) 
                                                                              ^ 
                                                                              (0x1fffc000U 
                                                                               & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 3U))) 
                                                                             ^ 
                                                                             (0x7fffc000U 
                                                                              & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 1U))) 
                                                                            ^ 
                                                                            (0xffffc000U 
                                                                             & vlTOPp->AuroraTxCore__DOT__axi_txdata_7)) 
                                                                           ^ 
                                                                           (0xffffc000U 
                                                                            & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                               << 3U))) 
                                                                          ^ 
                                                                          (0xffffc000U 
                                                                           & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                              << 6U))) 
                                                                         ^ 
                                                                         (0xffffc000U 
                                                                          & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                             << 7U))) 
                                                                        ^ 
                                                                        (0xffffc000U 
                                                                         & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                            << 8U))) 
                                                                       ^ 
                                                                       (0xffffc000U 
                                                                        & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                           << 0xaU))) 
                                                                      ^ 
                                                                      (0xffffc000U 
                                                                       & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                          << 0xbU))) 
                                                                     ^ 
                                                                     (0xffffc000U 
                                                                      & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                         << 0xcU))) 
                                                                    ^ 
                                                                    (0xffffc000U 
                                                                     & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                        << 0xcU))) 
                                                                   ^ 
                                                                   (0xffffc000U 
                                                                    & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                       << 0xbU))) 
                                                                  ^ 
                                                                  (0xffffc000U 
                                                                   & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                      << 0xaU))) 
                                                                 ^ 
                                                                 (0xffffc000U 
                                                                  & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                     << 8U))) 
                                                                ^ 
                                                                (0xffffc000U 
                                                                 & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                    << 7U))) 
                                                               ^ 
                                                               (0xffffc000U 
                                                                & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                   << 6U))) 
                                                              ^ 
                                                              (0xffffc000U 
                                                               & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                  << 3U))) 
                                                             ^ 
                                                             (0xffffc000U 
                                                              & vlTOPp->AuroraTxCore__DOT__crc_data)) 
                                                            ^ 
                                                            (0x7fffc000U 
                                                             & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                >> 1U))) 
                                                           ^ 
                                                           (0x1fffc000U 
                                                            & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                               >> 3U))) 
                                                          ^ 
                                                          (0x7ffc000U 
                                                           & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                              >> 5U))) 
                                                         ^ 
                                                         (0x3ffc000U 
                                                          & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                             >> 6U))) 
                                                        ^ 
                                                        (0x7fc000U 
                                                         & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                            >> 9U))) 
                                                       ^ 
                                                       (0xfc000U 
                                                        & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                           >> 0xcU))) 
                                                      ^ 
                                                      (0x1c000U 
                                                       & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                          >> 0xfU)))));
    vlTOPp->AuroraTxCore__DOT__crc32_2_crc_o = ((0xffff7fffU 
                                                 & vlTOPp->AuroraTxCore__DOT__crc32_2_crc_o) 
                                                | (0x8000U 
                                                   & ((((((((((((((((((((((((((((((0x18000U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0xfU)) 
                                                                                ^ 
                                                                                (0xf8000U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0xcU))) 
                                                                                ^ 
                                                                                (0x7f8000U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 9U))) 
                                                                                ^ 
                                                                                (0x3ff8000U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 6U))) 
                                                                               ^ 
                                                                               (0x7ff8000U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 5U))) 
                                                                              ^ 
                                                                              (0x1fff8000U 
                                                                               & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 3U))) 
                                                                             ^ 
                                                                             (0x7fff8000U 
                                                                              & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 1U))) 
                                                                            ^ 
                                                                            (0xffff8000U 
                                                                             & vlTOPp->AuroraTxCore__DOT__axi_txdata_7)) 
                                                                           ^ 
                                                                           (0xffff8000U 
                                                                            & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                               << 3U))) 
                                                                          ^ 
                                                                          (0xffff8000U 
                                                                           & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                              << 6U))) 
                                                                         ^ 
                                                                         (0xffff8000U 
                                                                          & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                             << 7U))) 
                                                                        ^ 
                                                                        (0xffff8000U 
                                                                         & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                            << 8U))) 
                                                                       ^ 
                                                                       (0xffff8000U 
                                                                        & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                           << 0xaU))) 
                                                                      ^ 
                                                                      (0xffff8000U 
                                                                       & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                          << 0xbU))) 
                                                                     ^ 
                                                                     (0xffff8000U 
                                                                      & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                         << 0xcU))) 
                                                                    ^ 
                                                                    (0xffff8000U 
                                                                     & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                        << 0xcU))) 
                                                                   ^ 
                                                                   (0xffff8000U 
                                                                    & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                       << 0xbU))) 
                                                                  ^ 
                                                                  (0xffff8000U 
                                                                   & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                      << 0xaU))) 
                                                                 ^ 
                                                                 (0xffff8000U 
                                                                  & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                     << 8U))) 
                                                                ^ 
                                                                (0xffff8000U 
                                                                 & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                    << 7U))) 
                                                               ^ 
                                                               (0xffff8000U 
                                                                & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                   << 6U))) 
                                                              ^ 
                                                              (0xffff8000U 
                                                               & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                  << 3U))) 
                                                             ^ 
                                                             (0xffff8000U 
                                                              & vlTOPp->AuroraTxCore__DOT__crc_data)) 
                                                            ^ 
                                                            (0x7fff8000U 
                                                             & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                >> 1U))) 
                                                           ^ 
                                                           (0x1fff8000U 
                                                            & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                               >> 3U))) 
                                                          ^ 
                                                          (0x7ff8000U 
                                                           & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                              >> 5U))) 
                                                         ^ 
                                                         (0x3ff8000U 
                                                          & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                             >> 6U))) 
                                                        ^ 
                                                        (0x7f8000U 
                                                         & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                            >> 9U))) 
                                                       ^ 
                                                       (0xf8000U 
                                                        & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                           >> 0xcU))) 
                                                      ^ 
                                                      (0x18000U 
                                                       & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                          >> 0xfU)))));
    vlTOPp->AuroraTxCore__DOT__crc32_2_crc_o = ((0xfffeffffU 
                                                 & vlTOPp->AuroraTxCore__DOT__crc32_2_crc_o) 
                                                | (0x10000U 
                                                   & ((((((((((((((((((((((((((((0x30000U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0xeU)) 
                                                                                ^ 
                                                                                (0x70000U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0xdU))) 
                                                                               ^ 
                                                                               (0x3f0000U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0xaU))) 
                                                                              ^ 
                                                                              (0xff0000U 
                                                                               & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 8U))) 
                                                                             ^ 
                                                                             (0x3ff0000U 
                                                                              & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 6U))) 
                                                                            ^ 
                                                                            (0x7ff0000U 
                                                                             & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 5U))) 
                                                                           ^ 
                                                                           (0x1fff0000U 
                                                                            & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                               >> 3U))) 
                                                                          ^ 
                                                                          (0x7fff0000U 
                                                                           & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                              >> 1U))) 
                                                                         ^ 
                                                                         (0xffff0000U 
                                                                          & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                             << 3U))) 
                                                                        ^ 
                                                                        (0xffff0000U 
                                                                         & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                            << 4U))) 
                                                                       ^ 
                                                                       (0xffff0000U 
                                                                        & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                           << 8U))) 
                                                                      ^ 
                                                                      (0xffff0000U 
                                                                       & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                          << 0xbU))) 
                                                                     ^ 
                                                                     (0xffff0000U 
                                                                      & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                         << 0xcU))) 
                                                                    ^ 
                                                                    (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                     << 0x10U)) 
                                                                   ^ 
                                                                   (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                    << 0x10U)) 
                                                                  ^ 
                                                                  (0xffff0000U 
                                                                   & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                      << 0xcU))) 
                                                                 ^ 
                                                                 (0xffff0000U 
                                                                  & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                     << 0xbU))) 
                                                                ^ 
                                                                (0xffff0000U 
                                                                 & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                    << 8U))) 
                                                               ^ 
                                                               (0xffff0000U 
                                                                & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                   << 4U))) 
                                                              ^ 
                                                              (0xffff0000U 
                                                               & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                  << 3U))) 
                                                             ^ 
                                                             (0x7fff0000U 
                                                              & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                 >> 1U))) 
                                                            ^ 
                                                            (0x1fff0000U 
                                                             & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                >> 3U))) 
                                                           ^ 
                                                           (0x7ff0000U 
                                                            & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                               >> 5U))) 
                                                          ^ 
                                                          (0x3ff0000U 
                                                           & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                              >> 6U))) 
                                                         ^ 
                                                         (0xff0000U 
                                                          & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                             >> 8U))) 
                                                        ^ 
                                                        (0x3f0000U 
                                                         & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                            >> 0xaU))) 
                                                       ^ 
                                                       (0x70000U 
                                                        & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                           >> 0xdU))) 
                                                      ^ 
                                                      (0x30000U 
                                                       & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                          >> 0xeU)))));
    vlTOPp->AuroraTxCore__DOT__crc32_2_crc_o = ((0xfffdffffU 
                                                 & vlTOPp->AuroraTxCore__DOT__crc32_2_crc_o) 
                                                | (0x20000U 
                                                   & ((((((((((((((((((((((((((((0x20000U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0xeU)) 
                                                                                ^ 
                                                                                (0x60000U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0xdU))) 
                                                                               ^ 
                                                                               (0x3e0000U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0xaU))) 
                                                                              ^ 
                                                                              (0xfe0000U 
                                                                               & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 8U))) 
                                                                             ^ 
                                                                             (0x3fe0000U 
                                                                              & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 6U))) 
                                                                            ^ 
                                                                            (0x7fe0000U 
                                                                             & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 5U))) 
                                                                           ^ 
                                                                           (0x1ffe0000U 
                                                                            & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                               >> 3U))) 
                                                                          ^ 
                                                                          (0x7ffe0000U 
                                                                           & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                              >> 1U))) 
                                                                         ^ 
                                                                         (0xfffe0000U 
                                                                          & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                             << 3U))) 
                                                                        ^ 
                                                                        (0xfffe0000U 
                                                                         & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                            << 4U))) 
                                                                       ^ 
                                                                       (0xfffe0000U 
                                                                        & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                           << 8U))) 
                                                                      ^ 
                                                                      (0xfffe0000U 
                                                                       & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                          << 0xbU))) 
                                                                     ^ 
                                                                     (0xfffe0000U 
                                                                      & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                         << 0xcU))) 
                                                                    ^ 
                                                                    (0xfffe0000U 
                                                                     & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                        << 0x10U))) 
                                                                   ^ 
                                                                   (0xfffe0000U 
                                                                    & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                       << 0x10U))) 
                                                                  ^ 
                                                                  (0xfffe0000U 
                                                                   & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                      << 0xcU))) 
                                                                 ^ 
                                                                 (0xfffe0000U 
                                                                  & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                     << 0xbU))) 
                                                                ^ 
                                                                (0xfffe0000U 
                                                                 & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                    << 8U))) 
                                                               ^ 
                                                               (0xfffe0000U 
                                                                & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                   << 4U))) 
                                                              ^ 
                                                              (0xfffe0000U 
                                                               & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                  << 3U))) 
                                                             ^ 
                                                             (0x7ffe0000U 
                                                              & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                 >> 1U))) 
                                                            ^ 
                                                            (0x1ffe0000U 
                                                             & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                >> 3U))) 
                                                           ^ 
                                                           (0x7fe0000U 
                                                            & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                               >> 5U))) 
                                                          ^ 
                                                          (0x3fe0000U 
                                                           & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                              >> 6U))) 
                                                         ^ 
                                                         (0xfe0000U 
                                                          & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                             >> 8U))) 
                                                        ^ 
                                                        (0x3e0000U 
                                                         & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                            >> 0xaU))) 
                                                       ^ 
                                                       (0x60000U 
                                                        & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                           >> 0xdU))) 
                                                      ^ 
                                                      (0x20000U 
                                                       & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                          >> 0xeU)))));
    vlTOPp->AuroraTxCore__DOT__crc32_2_crc_o = ((0xfffbffffU 
                                                 & vlTOPp->AuroraTxCore__DOT__crc32_2_crc_o) 
                                                | (0x40000U 
                                                   & ((((((((((((((((((((((((((0x40000U 
                                                                               & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0xdU)) 
                                                                              ^ 
                                                                              (0x3c0000U 
                                                                               & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0xaU))) 
                                                                             ^ 
                                                                             (0xfc0000U 
                                                                              & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 8U))) 
                                                                            ^ 
                                                                            (0x3fc0000U 
                                                                             & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 6U))) 
                                                                           ^ 
                                                                           (0x7fc0000U 
                                                                            & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                               >> 5U))) 
                                                                          ^ 
                                                                          (0x1ffc0000U 
                                                                           & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                              >> 3U))) 
                                                                         ^ 
                                                                         (0x7ffc0000U 
                                                                          & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                             >> 1U))) 
                                                                        ^ 
                                                                        (0xfffc0000U 
                                                                         & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                            << 3U))) 
                                                                       ^ 
                                                                       (0xfffc0000U 
                                                                        & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                           << 4U))) 
                                                                      ^ 
                                                                      (0xfffc0000U 
                                                                       & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                          << 8U))) 
                                                                     ^ 
                                                                     (0xfffc0000U 
                                                                      & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                         << 0xbU))) 
                                                                    ^ 
                                                                    (0xfffc0000U 
                                                                     & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                        << 0xcU))) 
                                                                   ^ 
                                                                   (0xfffc0000U 
                                                                    & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                       << 0x10U))) 
                                                                  ^ 
                                                                  (0xfffc0000U 
                                                                   & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                      << 0x10U))) 
                                                                 ^ 
                                                                 (0xfffc0000U 
                                                                  & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                     << 0xcU))) 
                                                                ^ 
                                                                (0xfffc0000U 
                                                                 & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                    << 0xbU))) 
                                                               ^ 
                                                               (0xfffc0000U 
                                                                & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                   << 8U))) 
                                                              ^ 
                                                              (0xfffc0000U 
                                                               & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                  << 4U))) 
                                                             ^ 
                                                             (0xfffc0000U 
                                                              & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                 << 3U))) 
                                                            ^ 
                                                            (0x7ffc0000U 
                                                             & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                >> 1U))) 
                                                           ^ 
                                                           (0x1ffc0000U 
                                                            & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                               >> 3U))) 
                                                          ^ 
                                                          (0x7fc0000U 
                                                           & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                              >> 5U))) 
                                                         ^ 
                                                         (0x3fc0000U 
                                                          & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                             >> 6U))) 
                                                        ^ 
                                                        (0xfc0000U 
                                                         & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                            >> 8U))) 
                                                       ^ 
                                                       (0x3c0000U 
                                                        & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                           >> 0xaU))) 
                                                      ^ 
                                                      (0x40000U 
                                                       & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                          >> 0xdU)))));
    vlTOPp->AuroraTxCore__DOT__crc32_2_crc_o = ((0xfff7ffffU 
                                                 & vlTOPp->AuroraTxCore__DOT__crc32_2_crc_o) 
                                                | (0x80000U 
                                                   & ((((((((((((((((((((((((0x380000U 
                                                                             & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0xaU)) 
                                                                            ^ 
                                                                            (0xf80000U 
                                                                             & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 8U))) 
                                                                           ^ 
                                                                           (0x3f80000U 
                                                                            & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                               >> 6U))) 
                                                                          ^ 
                                                                          (0x7f80000U 
                                                                           & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                              >> 5U))) 
                                                                         ^ 
                                                                         (0x1ff80000U 
                                                                          & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                             >> 3U))) 
                                                                        ^ 
                                                                        (0x7ff80000U 
                                                                         & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                            >> 1U))) 
                                                                       ^ 
                                                                       (0xfff80000U 
                                                                        & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                           << 3U))) 
                                                                      ^ 
                                                                      (0xfff80000U 
                                                                       & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                          << 4U))) 
                                                                     ^ 
                                                                     (0xfff80000U 
                                                                      & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                         << 8U))) 
                                                                    ^ 
                                                                    (0xfff80000U 
                                                                     & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                        << 0xbU))) 
                                                                   ^ 
                                                                   (0xfff80000U 
                                                                    & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                       << 0xcU))) 
                                                                  ^ 
                                                                  (0xfff80000U 
                                                                   & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                      << 0x10U))) 
                                                                 ^ 
                                                                 (0xfff80000U 
                                                                  & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                     << 0x10U))) 
                                                                ^ 
                                                                (0xfff80000U 
                                                                 & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                    << 0xcU))) 
                                                               ^ 
                                                               (0xfff80000U 
                                                                & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                   << 0xbU))) 
                                                              ^ 
                                                              (0xfff80000U 
                                                               & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                  << 8U))) 
                                                             ^ 
                                                             (0xfff80000U 
                                                              & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                 << 4U))) 
                                                            ^ 
                                                            (0xfff80000U 
                                                             & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                << 3U))) 
                                                           ^ 
                                                           (0x7ff80000U 
                                                            & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                               >> 1U))) 
                                                          ^ 
                                                          (0x1ff80000U 
                                                           & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                              >> 3U))) 
                                                         ^ 
                                                         (0x7f80000U 
                                                          & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                             >> 5U))) 
                                                        ^ 
                                                        (0x3f80000U 
                                                         & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                            >> 6U))) 
                                                       ^ 
                                                       (0xf80000U 
                                                        & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                           >> 8U))) 
                                                      ^ 
                                                      (0x380000U 
                                                       & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                          >> 0xaU)))));
    vlTOPp->AuroraTxCore__DOT__crc32_2_crc_o = ((0xffefffffU 
                                                 & vlTOPp->AuroraTxCore__DOT__crc32_2_crc_o) 
                                                | (0x100000U 
                                                   & ((((((((((((((((((((((((0x300000U 
                                                                             & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0xaU)) 
                                                                            ^ 
                                                                            (0xf00000U 
                                                                             & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 8U))) 
                                                                           ^ 
                                                                           (0x3f00000U 
                                                                            & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                               >> 6U))) 
                                                                          ^ 
                                                                          (0x7f00000U 
                                                                           & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                              >> 5U))) 
                                                                         ^ 
                                                                         (0x1ff00000U 
                                                                          & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                             >> 3U))) 
                                                                        ^ 
                                                                        (0x7ff00000U 
                                                                         & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                            >> 1U))) 
                                                                       ^ 
                                                                       (0xfff00000U 
                                                                        & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                           << 3U))) 
                                                                      ^ 
                                                                      (0xfff00000U 
                                                                       & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                          << 4U))) 
                                                                     ^ 
                                                                     (0xfff00000U 
                                                                      & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                         << 8U))) 
                                                                    ^ 
                                                                    (0xfff00000U 
                                                                     & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                        << 0xbU))) 
                                                                   ^ 
                                                                   (0xfff00000U 
                                                                    & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                       << 0xcU))) 
                                                                  ^ 
                                                                  (0xfff00000U 
                                                                   & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                      << 0x10U))) 
                                                                 ^ 
                                                                 (0xfff00000U 
                                                                  & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                     << 0x10U))) 
                                                                ^ 
                                                                (0xfff00000U 
                                                                 & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                    << 0xcU))) 
                                                               ^ 
                                                               (0xfff00000U 
                                                                & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                   << 0xbU))) 
                                                              ^ 
                                                              (0xfff00000U 
                                                               & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                  << 8U))) 
                                                             ^ 
                                                             (0xfff00000U 
                                                              & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                 << 4U))) 
                                                            ^ 
                                                            (0xfff00000U 
                                                             & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                << 3U))) 
                                                           ^ 
                                                           (0x7ff00000U 
                                                            & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                               >> 1U))) 
                                                          ^ 
                                                          (0x1ff00000U 
                                                           & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                              >> 3U))) 
                                                         ^ 
                                                         (0x7f00000U 
                                                          & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                             >> 5U))) 
                                                        ^ 
                                                        (0x3f00000U 
                                                         & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                            >> 6U))) 
                                                       ^ 
                                                       (0xf00000U 
                                                        & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                           >> 8U))) 
                                                      ^ 
                                                      (0x300000U 
                                                       & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                          >> 0xaU)))));
    vlTOPp->AuroraTxCore__DOT__crc32_2_crc_o = ((0xffdfffffU 
                                                 & vlTOPp->AuroraTxCore__DOT__crc32_2_crc_o) 
                                                | (0x200000U 
                                                   & ((((((((((((((((((((((((0x200000U 
                                                                             & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 0xaU)) 
                                                                            ^ 
                                                                            (0xe00000U 
                                                                             & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 8U))) 
                                                                           ^ 
                                                                           (0x3e00000U 
                                                                            & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                               >> 6U))) 
                                                                          ^ 
                                                                          (0x7e00000U 
                                                                           & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                              >> 5U))) 
                                                                         ^ 
                                                                         (0x1fe00000U 
                                                                          & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                             >> 3U))) 
                                                                        ^ 
                                                                        (0x7fe00000U 
                                                                         & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                            >> 1U))) 
                                                                       ^ 
                                                                       (0xffe00000U 
                                                                        & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                           << 3U))) 
                                                                      ^ 
                                                                      (0xffe00000U 
                                                                       & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                          << 4U))) 
                                                                     ^ 
                                                                     (0xffe00000U 
                                                                      & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                         << 8U))) 
                                                                    ^ 
                                                                    (0xffe00000U 
                                                                     & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                        << 0xbU))) 
                                                                   ^ 
                                                                   (0xffe00000U 
                                                                    & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                       << 0xcU))) 
                                                                  ^ 
                                                                  (0xffe00000U 
                                                                   & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                      << 0x10U))) 
                                                                 ^ 
                                                                 (0xffe00000U 
                                                                  & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                     << 0x10U))) 
                                                                ^ 
                                                                (0xffe00000U 
                                                                 & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                    << 0xcU))) 
                                                               ^ 
                                                               (0xffe00000U 
                                                                & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                   << 0xbU))) 
                                                              ^ 
                                                              (0xffe00000U 
                                                               & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                  << 8U))) 
                                                             ^ 
                                                             (0xffe00000U 
                                                              & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                 << 4U))) 
                                                            ^ 
                                                            (0xffe00000U 
                                                             & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                << 3U))) 
                                                           ^ 
                                                           (0x7fe00000U 
                                                            & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                               >> 1U))) 
                                                          ^ 
                                                          (0x1fe00000U 
                                                           & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                              >> 3U))) 
                                                         ^ 
                                                         (0x7e00000U 
                                                          & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                             >> 5U))) 
                                                        ^ 
                                                        (0x3e00000U 
                                                         & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                            >> 6U))) 
                                                       ^ 
                                                       (0xe00000U 
                                                        & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                           >> 8U))) 
                                                      ^ 
                                                      (0x200000U 
                                                       & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                          >> 0xaU)))));
    vlTOPp->AuroraTxCore__DOT__crc32_2_crc_o = ((0xffbfffffU 
                                                 & vlTOPp->AuroraTxCore__DOT__crc32_2_crc_o) 
                                                | (0x400000U 
                                                   & ((((((((((((((((((((((((((((0x400000U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 9U)) 
                                                                                ^ 
                                                                                (0x1c00000U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 7U))) 
                                                                               ^ 
                                                                               (0x7c00000U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 5U))) 
                                                                              ^ 
                                                                              (0xfc00000U 
                                                                               & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 4U))) 
                                                                             ^ 
                                                                             (0x3fc00000U 
                                                                              & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 2U))) 
                                                                            ^ 
                                                                            (0x7fc00000U 
                                                                             & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 1U))) 
                                                                           ^ 
                                                                           (0xffc00000U 
                                                                            & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                               << 3U))) 
                                                                          ^ 
                                                                          (0xffc00000U 
                                                                           & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                              << 4U))) 
                                                                         ^ 
                                                                         (0xffc00000U 
                                                                          & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                             << 6U))) 
                                                                        ^ 
                                                                        (0xffc00000U 
                                                                         & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                            << 8U))) 
                                                                       ^ 
                                                                       (0xffc00000U 
                                                                        & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                           << 0xaU))) 
                                                                      ^ 
                                                                      (0xffc00000U 
                                                                       & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                          << 0xbU))) 
                                                                     ^ 
                                                                     (0xffc00000U 
                                                                      & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                         << 0xdU))) 
                                                                    ^ 
                                                                    (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                     << 0x16U)) 
                                                                   ^ 
                                                                   (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                    << 0x16U)) 
                                                                  ^ 
                                                                  (0xffc00000U 
                                                                   & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                      << 0xdU))) 
                                                                 ^ 
                                                                 (0xffc00000U 
                                                                  & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                     << 0xbU))) 
                                                                ^ 
                                                                (0xffc00000U 
                                                                 & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                    << 0xaU))) 
                                                               ^ 
                                                               (0xffc00000U 
                                                                & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                   << 8U))) 
                                                              ^ 
                                                              (0xffc00000U 
                                                               & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                  << 6U))) 
                                                             ^ 
                                                             (0xffc00000U 
                                                              & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                 << 4U))) 
                                                            ^ 
                                                            (0xffc00000U 
                                                             & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                << 3U))) 
                                                           ^ 
                                                           (0x7fc00000U 
                                                            & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                               >> 1U))) 
                                                          ^ 
                                                          (0x3fc00000U 
                                                           & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                              >> 2U))) 
                                                         ^ 
                                                         (0xfc00000U 
                                                          & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                             >> 4U))) 
                                                        ^ 
                                                        (0x7c00000U 
                                                         & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                            >> 5U))) 
                                                       ^ 
                                                       (0x1c00000U 
                                                        & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                           >> 7U))) 
                                                      ^ 
                                                      (0x400000U 
                                                       & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                          >> 9U)))));
    vlTOPp->AuroraTxCore__DOT__crc32_2_crc_o = ((0xff7fffffU 
                                                 & vlTOPp->AuroraTxCore__DOT__crc32_2_crc_o) 
                                                | (0x800000U 
                                                   & ((((((((((((((((((((((((((((0x800000U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 8U)) 
                                                                                ^ 
                                                                                (0x3800000U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 6U))) 
                                                                               ^ 
                                                                               (0xf800000U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 4U))) 
                                                                              ^ 
                                                                              (0x1f800000U 
                                                                               & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 3U))) 
                                                                             ^ 
                                                                             (0xff800000U 
                                                                              & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                << 3U))) 
                                                                            ^ 
                                                                            (0xff800000U 
                                                                             & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                << 4U))) 
                                                                           ^ 
                                                                           (0xff800000U 
                                                                            & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                               << 6U))) 
                                                                          ^ 
                                                                          (0xff800000U 
                                                                           & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                              << 7U))) 
                                                                         ^ 
                                                                         (0xff800000U 
                                                                          & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                             << 8U))) 
                                                                        ^ 
                                                                        (0xff800000U 
                                                                         & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                            << 0xaU))) 
                                                                       ^ 
                                                                       (0xff800000U 
                                                                        & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                           << 0xeU))) 
                                                                      ^ 
                                                                      (0xff800000U 
                                                                       & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                          << 0x11U))) 
                                                                     ^ 
                                                                     (0xff800000U 
                                                                      & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                         << 0x16U))) 
                                                                    ^ 
                                                                    (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                     << 0x17U)) 
                                                                   ^ 
                                                                   (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                    << 0x17U)) 
                                                                  ^ 
                                                                  (0xff800000U 
                                                                   & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                      << 0x16U))) 
                                                                 ^ 
                                                                 (0xff800000U 
                                                                  & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                     << 0x11U))) 
                                                                ^ 
                                                                (0xff800000U 
                                                                 & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                    << 0xeU))) 
                                                               ^ 
                                                               (0xff800000U 
                                                                & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                   << 0xaU))) 
                                                              ^ 
                                                              (0xff800000U 
                                                               & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                  << 8U))) 
                                                             ^ 
                                                             (0xff800000U 
                                                              & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                 << 7U))) 
                                                            ^ 
                                                            (0xff800000U 
                                                             & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                << 6U))) 
                                                           ^ 
                                                           (0xff800000U 
                                                            & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                               << 4U))) 
                                                          ^ 
                                                          (0xff800000U 
                                                           & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                              << 3U))) 
                                                         ^ 
                                                         (0x1f800000U 
                                                          & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                             >> 3U))) 
                                                        ^ 
                                                        (0xf800000U 
                                                         & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                            >> 4U))) 
                                                       ^ 
                                                       (0x3800000U 
                                                        & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                           >> 6U))) 
                                                      ^ 
                                                      (0x800000U 
                                                       & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                          >> 8U)))));
    vlTOPp->AuroraTxCore__DOT__crc32_2_crc_o = ((0xfeffffffU 
                                                 & vlTOPp->AuroraTxCore__DOT__crc32_2_crc_o) 
                                                | (0x1000000U 
                                                   & ((((((((((((((((((((((((((0x3000000U 
                                                                               & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 6U)) 
                                                                              ^ 
                                                                              (0xf000000U 
                                                                               & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 4U))) 
                                                                             ^ 
                                                                             (0x1f000000U 
                                                                              & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 3U))) 
                                                                            ^ 
                                                                            (0xff000000U 
                                                                             & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                << 3U))) 
                                                                           ^ 
                                                                           (0xff000000U 
                                                                            & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                               << 4U))) 
                                                                          ^ 
                                                                          (0xff000000U 
                                                                           & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                              << 6U))) 
                                                                         ^ 
                                                                         (0xff000000U 
                                                                          & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                             << 7U))) 
                                                                        ^ 
                                                                        (0xff000000U 
                                                                         & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                            << 8U))) 
                                                                       ^ 
                                                                       (0xff000000U 
                                                                        & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                           << 0xaU))) 
                                                                      ^ 
                                                                      (0xff000000U 
                                                                       & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                          << 0xeU))) 
                                                                     ^ 
                                                                     (0xff000000U 
                                                                      & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                         << 0x11U))) 
                                                                    ^ 
                                                                    (0xff000000U 
                                                                     & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                        << 0x16U))) 
                                                                   ^ 
                                                                   (0xff000000U 
                                                                    & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                       << 0x17U))) 
                                                                  ^ 
                                                                  (0xff000000U 
                                                                   & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                      << 0x17U))) 
                                                                 ^ 
                                                                 (0xff000000U 
                                                                  & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                     << 0x16U))) 
                                                                ^ 
                                                                (0xff000000U 
                                                                 & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                    << 0x11U))) 
                                                               ^ 
                                                               (0xff000000U 
                                                                & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                   << 0xeU))) 
                                                              ^ 
                                                              (0xff000000U 
                                                               & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                  << 0xaU))) 
                                                             ^ 
                                                             (0xff000000U 
                                                              & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                 << 8U))) 
                                                            ^ 
                                                            (0xff000000U 
                                                             & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                << 7U))) 
                                                           ^ 
                                                           (0xff000000U 
                                                            & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                               << 6U))) 
                                                          ^ 
                                                          (0xff000000U 
                                                           & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                              << 4U))) 
                                                         ^ 
                                                         (0xff000000U 
                                                          & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                             << 3U))) 
                                                        ^ 
                                                        (0x1f000000U 
                                                         & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                            >> 3U))) 
                                                       ^ 
                                                       (0xf000000U 
                                                        & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                           >> 4U))) 
                                                      ^ 
                                                      (0x3000000U 
                                                       & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                          >> 6U)))));
    vlTOPp->AuroraTxCore__DOT__crc32_2_crc_o = ((0xfdffffffU 
                                                 & vlTOPp->AuroraTxCore__DOT__crc32_2_crc_o) 
                                                | (0x2000000U 
                                                   & ((((((((((((((((((((((((((0x2000000U 
                                                                               & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 6U)) 
                                                                              ^ 
                                                                              (0xe000000U 
                                                                               & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 4U))) 
                                                                             ^ 
                                                                             (0x1e000000U 
                                                                              & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 3U))) 
                                                                            ^ 
                                                                            (0xfe000000U 
                                                                             & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                << 3U))) 
                                                                           ^ 
                                                                           (0xfe000000U 
                                                                            & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                               << 4U))) 
                                                                          ^ 
                                                                          (0xfe000000U 
                                                                           & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                              << 6U))) 
                                                                         ^ 
                                                                         (0xfe000000U 
                                                                          & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                             << 7U))) 
                                                                        ^ 
                                                                        (0xfe000000U 
                                                                         & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                            << 8U))) 
                                                                       ^ 
                                                                       (0xfe000000U 
                                                                        & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                           << 0xaU))) 
                                                                      ^ 
                                                                      (0xfe000000U 
                                                                       & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                          << 0xeU))) 
                                                                     ^ 
                                                                     (0xfe000000U 
                                                                      & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                         << 0x11U))) 
                                                                    ^ 
                                                                    (0xfe000000U 
                                                                     & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                        << 0x16U))) 
                                                                   ^ 
                                                                   (0xfe000000U 
                                                                    & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                       << 0x17U))) 
                                                                  ^ 
                                                                  (0xfe000000U 
                                                                   & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                      << 0x17U))) 
                                                                 ^ 
                                                                 (0xfe000000U 
                                                                  & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                     << 0x16U))) 
                                                                ^ 
                                                                (0xfe000000U 
                                                                 & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                    << 0x11U))) 
                                                               ^ 
                                                               (0xfe000000U 
                                                                & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                   << 0xeU))) 
                                                              ^ 
                                                              (0xfe000000U 
                                                               & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                  << 0xaU))) 
                                                             ^ 
                                                             (0xfe000000U 
                                                              & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                 << 8U))) 
                                                            ^ 
                                                            (0xfe000000U 
                                                             & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                << 7U))) 
                                                           ^ 
                                                           (0xfe000000U 
                                                            & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                               << 6U))) 
                                                          ^ 
                                                          (0xfe000000U 
                                                           & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                              << 4U))) 
                                                         ^ 
                                                         (0xfe000000U 
                                                          & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                             << 3U))) 
                                                        ^ 
                                                        (0x1e000000U 
                                                         & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                            >> 3U))) 
                                                       ^ 
                                                       (0xe000000U 
                                                        & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                           >> 4U))) 
                                                      ^ 
                                                      (0x2000000U 
                                                       & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                          >> 6U)))));
    vlTOPp->AuroraTxCore__DOT__crc32_2_crc_o = ((0xfbffffffU 
                                                 & vlTOPp->AuroraTxCore__DOT__crc32_2_crc_o) 
                                                | (0x4000000U 
                                                   & ((((((((((((((((((((((((((((((0x4000000U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 5U)) 
                                                                                ^ 
                                                                                (0x3c000000U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 2U))) 
                                                                                ^ 
                                                                                (0xfc000000U 
                                                                                & vlTOPp->AuroraTxCore__DOT__axi_txdata_7)) 
                                                                                ^ 
                                                                                (0xfc000000U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                << 1U))) 
                                                                               ^ 
                                                                               (0xfc000000U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                << 2U))) 
                                                                              ^ 
                                                                              (0xfc000000U 
                                                                               & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                << 3U))) 
                                                                             ^ 
                                                                             (0xfc000000U 
                                                                              & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                << 4U))) 
                                                                            ^ 
                                                                            (0xfc000000U 
                                                                             & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                << 6U))) 
                                                                           ^ 
                                                                           (0xfc000000U 
                                                                            & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                               << 7U))) 
                                                                          ^ 
                                                                          (0xfc000000U 
                                                                           & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                              << 8U))) 
                                                                         ^ 
                                                                         (0xfc000000U 
                                                                          & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                             << 0x10U))) 
                                                                        ^ 
                                                                        (0xfc000000U 
                                                                         & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                            << 0x14U))) 
                                                                       ^ 
                                                                       (0xfc000000U 
                                                                        & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                           << 0x16U))) 
                                                                      ^ 
                                                                      (0xfc000000U 
                                                                       & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                          << 0x17U))) 
                                                                     ^ 
                                                                     (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                      << 0x1aU)) 
                                                                    ^ 
                                                                    (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                     << 0x1aU)) 
                                                                   ^ 
                                                                   (0xfc000000U 
                                                                    & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                       << 0x17U))) 
                                                                  ^ 
                                                                  (0xfc000000U 
                                                                   & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                      << 0x16U))) 
                                                                 ^ 
                                                                 (0xfc000000U 
                                                                  & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                     << 0x14U))) 
                                                                ^ 
                                                                (0xfc000000U 
                                                                 & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                    << 0x10U))) 
                                                               ^ 
                                                               (0xfc000000U 
                                                                & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                   << 8U))) 
                                                              ^ 
                                                              (0xfc000000U 
                                                               & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                  << 7U))) 
                                                             ^ 
                                                             (0xfc000000U 
                                                              & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                 << 6U))) 
                                                            ^ 
                                                            (0xfc000000U 
                                                             & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                << 4U))) 
                                                           ^ 
                                                           (0xfc000000U 
                                                            & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                               << 3U))) 
                                                          ^ 
                                                          (0xfc000000U 
                                                           & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                              << 2U))) 
                                                         ^ 
                                                         (0xfc000000U 
                                                          & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                             << 1U))) 
                                                        ^ 
                                                        (0xfc000000U 
                                                         & vlTOPp->AuroraTxCore__DOT__crc_data)) 
                                                       ^ 
                                                       (0x3c000000U 
                                                        & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                           >> 2U))) 
                                                      ^ 
                                                      (0x4000000U 
                                                       & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                          >> 5U)))));
    vlTOPp->AuroraTxCore__DOT__crc32_2_crc_o = ((0xf7ffffffU 
                                                 & vlTOPp->AuroraTxCore__DOT__crc32_2_crc_o) 
                                                | (0x8000000U 
                                                   & ((((((((((((((((((((((((((((0x38000000U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 2U)) 
                                                                                ^ 
                                                                                (0xf8000000U 
                                                                                & vlTOPp->AuroraTxCore__DOT__axi_txdata_7)) 
                                                                               ^ 
                                                                               (0xf8000000U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                << 1U))) 
                                                                              ^ 
                                                                              (0xf8000000U 
                                                                               & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                << 2U))) 
                                                                             ^ 
                                                                             (0xf8000000U 
                                                                              & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                << 3U))) 
                                                                            ^ 
                                                                            (0xf8000000U 
                                                                             & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                << 4U))) 
                                                                           ^ 
                                                                           (0xf8000000U 
                                                                            & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                               << 6U))) 
                                                                          ^ 
                                                                          (0xf8000000U 
                                                                           & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                              << 7U))) 
                                                                         ^ 
                                                                         (0xf8000000U 
                                                                          & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                             << 8U))) 
                                                                        ^ 
                                                                        (0xf8000000U 
                                                                         & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                            << 0x10U))) 
                                                                       ^ 
                                                                       (0xf8000000U 
                                                                        & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                           << 0x14U))) 
                                                                      ^ 
                                                                      (0xf8000000U 
                                                                       & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                          << 0x16U))) 
                                                                     ^ 
                                                                     (0xf8000000U 
                                                                      & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                         << 0x17U))) 
                                                                    ^ 
                                                                    (0xf8000000U 
                                                                     & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                        << 0x1aU))) 
                                                                   ^ 
                                                                   (0xf8000000U 
                                                                    & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                       << 0x1aU))) 
                                                                  ^ 
                                                                  (0xf8000000U 
                                                                   & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                      << 0x17U))) 
                                                                 ^ 
                                                                 (0xf8000000U 
                                                                  & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                     << 0x16U))) 
                                                                ^ 
                                                                (0xf8000000U 
                                                                 & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                    << 0x14U))) 
                                                               ^ 
                                                               (0xf8000000U 
                                                                & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                   << 0x10U))) 
                                                              ^ 
                                                              (0xf8000000U 
                                                               & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                  << 8U))) 
                                                             ^ 
                                                             (0xf8000000U 
                                                              & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                 << 7U))) 
                                                            ^ 
                                                            (0xf8000000U 
                                                             & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                << 6U))) 
                                                           ^ 
                                                           (0xf8000000U 
                                                            & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                               << 4U))) 
                                                          ^ 
                                                          (0xf8000000U 
                                                           & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                              << 3U))) 
                                                         ^ 
                                                         (0xf8000000U 
                                                          & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                             << 2U))) 
                                                        ^ 
                                                        (0xf8000000U 
                                                         & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                            << 1U))) 
                                                       ^ 
                                                       (0xf8000000U 
                                                        & vlTOPp->AuroraTxCore__DOT__crc_data)) 
                                                      ^ 
                                                      (0x38000000U 
                                                       & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                          >> 2U)))));
    vlTOPp->AuroraTxCore__DOT__crc32_2_crc_o = ((0xefffffffU 
                                                 & vlTOPp->AuroraTxCore__DOT__crc32_2_crc_o) 
                                                | (0x10000000U 
                                                   & ((((((((((((((((((((((((((((0x30000000U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 2U)) 
                                                                                ^ 
                                                                                (0xf0000000U 
                                                                                & vlTOPp->AuroraTxCore__DOT__axi_txdata_7)) 
                                                                               ^ 
                                                                               (0xf0000000U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                << 1U))) 
                                                                              ^ 
                                                                              (0xf0000000U 
                                                                               & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                << 2U))) 
                                                                             ^ 
                                                                             (0xf0000000U 
                                                                              & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                << 3U))) 
                                                                            ^ 
                                                                            (0xf0000000U 
                                                                             & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                << 4U))) 
                                                                           ^ 
                                                                           (0xf0000000U 
                                                                            & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                               << 6U))) 
                                                                          ^ 
                                                                          (0xf0000000U 
                                                                           & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                              << 7U))) 
                                                                         ^ 
                                                                         (0xf0000000U 
                                                                          & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                             << 8U))) 
                                                                        ^ 
                                                                        (0xf0000000U 
                                                                         & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                            << 0x10U))) 
                                                                       ^ 
                                                                       (0xf0000000U 
                                                                        & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                           << 0x14U))) 
                                                                      ^ 
                                                                      (0xf0000000U 
                                                                       & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                          << 0x16U))) 
                                                                     ^ 
                                                                     (0xf0000000U 
                                                                      & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                         << 0x17U))) 
                                                                    ^ 
                                                                    (0xf0000000U 
                                                                     & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                        << 0x1aU))) 
                                                                   ^ 
                                                                   (0xf0000000U 
                                                                    & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                       << 0x1aU))) 
                                                                  ^ 
                                                                  (0xf0000000U 
                                                                   & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                      << 0x17U))) 
                                                                 ^ 
                                                                 (0xf0000000U 
                                                                  & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                     << 0x16U))) 
                                                                ^ 
                                                                (0xf0000000U 
                                                                 & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                    << 0x14U))) 
                                                               ^ 
                                                               (0xf0000000U 
                                                                & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                   << 0x10U))) 
                                                              ^ 
                                                              (0xf0000000U 
                                                               & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                  << 8U))) 
                                                             ^ 
                                                             (0xf0000000U 
                                                              & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                 << 7U))) 
                                                            ^ 
                                                            (0xf0000000U 
                                                             & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                << 6U))) 
                                                           ^ 
                                                           (0xf0000000U 
                                                            & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                               << 4U))) 
                                                          ^ 
                                                          (0xf0000000U 
                                                           & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                              << 3U))) 
                                                         ^ 
                                                         (0xf0000000U 
                                                          & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                             << 2U))) 
                                                        ^ 
                                                        (0xf0000000U 
                                                         & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                            << 1U))) 
                                                       ^ 
                                                       (0xf0000000U 
                                                        & vlTOPp->AuroraTxCore__DOT__crc_data)) 
                                                      ^ 
                                                      (0x30000000U 
                                                       & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                          >> 2U)))));
    vlTOPp->AuroraTxCore__DOT__crc32_2_crc_o = ((0xdfffffffU 
                                                 & vlTOPp->AuroraTxCore__DOT__crc32_2_crc_o) 
                                                | (0x20000000U 
                                                   & ((((((((((((((((((((((((((((0x20000000U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                >> 2U)) 
                                                                                ^ 
                                                                                (0xe0000000U 
                                                                                & vlTOPp->AuroraTxCore__DOT__axi_txdata_7)) 
                                                                               ^ 
                                                                               (0xe0000000U 
                                                                                & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                << 1U))) 
                                                                              ^ 
                                                                              (0xe0000000U 
                                                                               & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                << 2U))) 
                                                                             ^ 
                                                                             (0xe0000000U 
                                                                              & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                << 3U))) 
                                                                            ^ 
                                                                            (0xe0000000U 
                                                                             & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                << 4U))) 
                                                                           ^ 
                                                                           (0xe0000000U 
                                                                            & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                               << 6U))) 
                                                                          ^ 
                                                                          (0xe0000000U 
                                                                           & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                              << 7U))) 
                                                                         ^ 
                                                                         (0xe0000000U 
                                                                          & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                             << 8U))) 
                                                                        ^ 
                                                                        (0xe0000000U 
                                                                         & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                            << 0x10U))) 
                                                                       ^ 
                                                                       (0xe0000000U 
                                                                        & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                           << 0x14U))) 
                                                                      ^ 
                                                                      (0xe0000000U 
                                                                       & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                          << 0x16U))) 
                                                                     ^ 
                                                                     (0xe0000000U 
                                                                      & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                         << 0x17U))) 
                                                                    ^ 
                                                                    (0xe0000000U 
                                                                     & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                        << 0x1aU))) 
                                                                   ^ 
                                                                   (0xe0000000U 
                                                                    & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                       << 0x1aU))) 
                                                                  ^ 
                                                                  (0xe0000000U 
                                                                   & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                      << 0x17U))) 
                                                                 ^ 
                                                                 (0xe0000000U 
                                                                  & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                     << 0x16U))) 
                                                                ^ 
                                                                (0xe0000000U 
                                                                 & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                    << 0x14U))) 
                                                               ^ 
                                                               (0xe0000000U 
                                                                & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                   << 0x10U))) 
                                                              ^ 
                                                              (0xe0000000U 
                                                               & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                  << 8U))) 
                                                             ^ 
                                                             (0xe0000000U 
                                                              & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                 << 7U))) 
                                                            ^ 
                                                            (0xe0000000U 
                                                             & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                << 6U))) 
                                                           ^ 
                                                           (0xe0000000U 
                                                            & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                               << 4U))) 
                                                          ^ 
                                                          (0xe0000000U 
                                                           & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                              << 3U))) 
                                                         ^ 
                                                         (0xe0000000U 
                                                          & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                             << 2U))) 
                                                        ^ 
                                                        (0xe0000000U 
                                                         & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                            << 1U))) 
                                                       ^ 
                                                       (0xe0000000U 
                                                        & vlTOPp->AuroraTxCore__DOT__crc_data)) 
                                                      ^ 
                                                      (0x20000000U 
                                                       & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                          >> 2U)))));
    vlTOPp->AuroraTxCore__DOT__crc32_2_crc_o = ((0xbfffffffU 
                                                 & vlTOPp->AuroraTxCore__DOT__crc32_2_crc_o) 
                                                | (0x40000000U 
                                                   & ((((((((((((((((((((((((((0xc0000000U 
                                                                               & vlTOPp->AuroraTxCore__DOT__axi_txdata_7) 
                                                                              ^ 
                                                                              (0xc0000000U 
                                                                               & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                << 1U))) 
                                                                             ^ 
                                                                             (0xc0000000U 
                                                                              & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                << 2U))) 
                                                                            ^ 
                                                                            (0xc0000000U 
                                                                             & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                << 3U))) 
                                                                           ^ 
                                                                           (0xc0000000U 
                                                                            & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                               << 4U))) 
                                                                          ^ 
                                                                          (0xc0000000U 
                                                                           & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                              << 6U))) 
                                                                         ^ 
                                                                         (0xc0000000U 
                                                                          & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                             << 7U))) 
                                                                        ^ 
                                                                        (0xc0000000U 
                                                                         & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                            << 8U))) 
                                                                       ^ 
                                                                       (0xc0000000U 
                                                                        & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                           << 0x10U))) 
                                                                      ^ 
                                                                      (0xc0000000U 
                                                                       & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                          << 0x14U))) 
                                                                     ^ 
                                                                     (0xc0000000U 
                                                                      & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                         << 0x16U))) 
                                                                    ^ 
                                                                    (0xc0000000U 
                                                                     & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                        << 0x17U))) 
                                                                   ^ 
                                                                   (0xc0000000U 
                                                                    & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                       << 0x1aU))) 
                                                                  ^ 
                                                                  (0xc0000000U 
                                                                   & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                      << 0x1aU))) 
                                                                 ^ 
                                                                 (0xc0000000U 
                                                                  & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                     << 0x17U))) 
                                                                ^ 
                                                                (0xc0000000U 
                                                                 & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                    << 0x16U))) 
                                                               ^ 
                                                               (0xc0000000U 
                                                                & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                   << 0x14U))) 
                                                              ^ 
                                                              (0xc0000000U 
                                                               & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                  << 0x10U))) 
                                                             ^ 
                                                             (0xc0000000U 
                                                              & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                 << 8U))) 
                                                            ^ 
                                                            (0xc0000000U 
                                                             & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                << 7U))) 
                                                           ^ 
                                                           (0xc0000000U 
                                                            & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                               << 6U))) 
                                                          ^ 
                                                          (0xc0000000U 
                                                           & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                              << 4U))) 
                                                         ^ 
                                                         (0xc0000000U 
                                                          & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                             << 3U))) 
                                                        ^ 
                                                        (0xc0000000U 
                                                         & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                            << 2U))) 
                                                       ^ 
                                                       (0xc0000000U 
                                                        & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                           << 1U))) 
                                                      ^ 
                                                      (0xc0000000U 
                                                       & vlTOPp->AuroraTxCore__DOT__crc_data))));
    vlTOPp->AuroraTxCore__DOT__crc32_2_crc_o = ((0x7fffffffU 
                                                 & vlTOPp->AuroraTxCore__DOT__crc32_2_crc_o) 
                                                | (0x80000000U 
                                                   & ((((((((((((((((((((((((((0x80000000U 
                                                                               & vlTOPp->AuroraTxCore__DOT__axi_txdata_7) 
                                                                              ^ 
                                                                              (0x80000000U 
                                                                               & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                << 1U))) 
                                                                             ^ 
                                                                             (0x80000000U 
                                                                              & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                << 2U))) 
                                                                            ^ 
                                                                            (0x80000000U 
                                                                             & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                                << 3U))) 
                                                                           ^ 
                                                                           (0x80000000U 
                                                                            & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                               << 4U))) 
                                                                          ^ 
                                                                          (0x80000000U 
                                                                           & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                              << 6U))) 
                                                                         ^ 
                                                                         (0x80000000U 
                                                                          & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                             << 7U))) 
                                                                        ^ 
                                                                        (0x80000000U 
                                                                         & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                            << 8U))) 
                                                                       ^ 
                                                                       (0x80000000U 
                                                                        & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                           << 0x10U))) 
                                                                      ^ 
                                                                      (0x80000000U 
                                                                       & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                          << 0x14U))) 
                                                                     ^ 
                                                                     (0x80000000U 
                                                                      & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                         << 0x16U))) 
                                                                    ^ 
                                                                    (0x80000000U 
                                                                     & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                        << 0x17U))) 
                                                                   ^ 
                                                                   (0x80000000U 
                                                                    & (vlTOPp->AuroraTxCore__DOT__axi_txdata_7 
                                                                       << 0x1aU))) 
                                                                  ^ 
                                                                  (0x80000000U 
                                                                   & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                      << 0x1aU))) 
                                                                 ^ 
                                                                 (0x80000000U 
                                                                  & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                     << 0x17U))) 
                                                                ^ 
                                                                (0x80000000U 
                                                                 & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                    << 0x16U))) 
                                                               ^ 
                                                               (0x80000000U 
                                                                & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                   << 0x14U))) 
                                                              ^ 
                                                              (0x80000000U 
                                                               & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                  << 0x10U))) 
                                                             ^ 
                                                             (0x80000000U 
                                                              & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                 << 8U))) 
                                                            ^ 
                                                            (0x80000000U 
                                                             & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                                << 7U))) 
                                                           ^ 
                                                           (0x80000000U 
                                                            & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                               << 6U))) 
                                                          ^ 
                                                          (0x80000000U 
                                                           & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                              << 4U))) 
                                                         ^ 
                                                         (0x80000000U 
                                                          & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                             << 3U))) 
                                                        ^ 
                                                        (0x80000000U 
                                                         & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                            << 2U))) 
                                                       ^ 
                                                       (0x80000000U 
                                                        & (vlTOPp->AuroraTxCore__DOT__crc_data 
                                                           << 1U))) 
                                                      ^ 
                                                      (0x80000000U 
                                                       & vlTOPp->AuroraTxCore__DOT__crc_data))));
}