// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPhpa_Test__Syms.h"


//======================

void VPhpa_Test::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VPhpa_Test::traceInit, &VPhpa_Test::traceFull, &VPhpa_Test::traceChg, this);
}
void VPhpa_Test::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VPhpa_Test* t = (VPhpa_Test*)userthis;
    VPhpa_Test__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VPhpa_Test::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VPhpa_Test* t = (VPhpa_Test*)userthis;
    VPhpa_Test__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VPhpa_Test::traceInitThis(VPhpa_Test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPhpa_Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
        vlTOPp->traceInitThis__2(vlSymsp, vcdp, code);
    }
}

void VPhpa_Test::traceFullThis(VPhpa_Test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPhpa_Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
        vlTOPp->traceFullThis__20(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VPhpa_Test::traceInitThis__1(VPhpa_Test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPhpa_Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+1449,"emif_emif_addr", false,-1, 19,0);
        vcdp->declBus(c+1457,"emif_emif_data_read", false,-1, 15,0);
        vcdp->declBus(c+1465,"emif_emif_data_write", false,-1, 15,0);
        vcdp->declBit(c+1473,"emif_emif_data_writeEnable", false,-1);
        vcdp->declBit(c+1481,"emif_emif_cs", false,-1);
        vcdp->declBit(c+1489,"emif_emif_we", false,-1);
        vcdp->declBit(c+1497,"emif_emif_oe", false,-1);
        vcdp->declBit(c+1505,"ad5544_A_AD5544_CS", false,-1);
        vcdp->declBit(c+1513,"ad5544_A_AD5544_LDAC", false,-1);
        vcdp->declBit(c+1521,"ad5544_A_AD5544_MSB", false,-1);
        vcdp->declBit(c+1529,"ad5544_A_AD5544_RS", false,-1);
        vcdp->declBit(c+1537,"ad5544_A_AD5544_SCLK", false,-1);
        vcdp->declBit(c+1545,"ad5544_A_AD5544_SDIN", false,-1);
        vcdp->declBit(c+1553,"ad5544_B_AD5544_CS", false,-1);
        vcdp->declBit(c+1561,"ad5544_B_AD5544_LDAC", false,-1);
        vcdp->declBit(c+1569,"ad5544_B_AD5544_MSB", false,-1);
        vcdp->declBit(c+1577,"ad5544_B_AD5544_RS", false,-1);
        vcdp->declBit(c+1585,"ad5544_B_AD5544_SCLK", false,-1);
        vcdp->declBit(c+1593,"ad5544_B_AD5544_SDIN", false,-1);
        vcdp->declBit(c+1601,"ad5544_C_AD5544_CS", false,-1);
        vcdp->declBit(c+1609,"ad5544_C_AD5544_LDAC", false,-1);
        vcdp->declBit(c+1617,"ad5544_C_AD5544_MSB", false,-1);
        vcdp->declBit(c+1625,"ad5544_C_AD5544_RS", false,-1);
        vcdp->declBit(c+1633,"ad5544_C_AD5544_SCLK", false,-1);
        vcdp->declBit(c+1641,"ad5544_C_AD5544_SDIN", false,-1);
        vcdp->declBit(c+1649,"biss_c_enc_clk", false,-1);
        vcdp->declBit(c+1657,"biss_c_enc_data", false,-1);
        vcdp->declBus(c+1665,"ad7606_ad_data", false,-1, 15,0);
        vcdp->declBit(c+1673,"ad7606_ad_busy", false,-1);
        vcdp->declBit(c+1681,"ad7606_first_data", false,-1);
        vcdp->declBus(c+1689,"ad7606_ad_os", false,-1, 2,0);
        vcdp->declBit(c+1697,"ad7606_ad_cs", false,-1);
        vcdp->declBit(c+1705,"ad7606_ad_rd", false,-1);
        vcdp->declBit(c+1713,"ad7606_ad_reset", false,-1);
        vcdp->declBit(c+1721,"ad7606_ad_convsta", false,-1);
        vcdp->declBit(c+1729,"ad7606_ad_convstb", false,-1);
        vcdp->declBit(c+1737,"ad7606_ad_range", false,-1);
        vcdp->declBit(c+1745,"clk", false,-1);
        vcdp->declBit(c+1753,"reset", false,-1);
        vcdp->declBit(c+1761,"led", false,-1);
        vcdp->declBus(c+1449,"Phpa_Test emif_emif_addr", false,-1, 19,0);
        vcdp->declBus(c+1457,"Phpa_Test emif_emif_data_read", false,-1, 15,0);
        vcdp->declBus(c+1465,"Phpa_Test emif_emif_data_write", false,-1, 15,0);
        vcdp->declBit(c+1473,"Phpa_Test emif_emif_data_writeEnable", false,-1);
        vcdp->declBit(c+1481,"Phpa_Test emif_emif_cs", false,-1);
        vcdp->declBit(c+1489,"Phpa_Test emif_emif_we", false,-1);
        vcdp->declBit(c+1497,"Phpa_Test emif_emif_oe", false,-1);
        vcdp->declBit(c+1505,"Phpa_Test ad5544_A_AD5544_CS", false,-1);
        vcdp->declBit(c+1513,"Phpa_Test ad5544_A_AD5544_LDAC", false,-1);
        vcdp->declBit(c+1521,"Phpa_Test ad5544_A_AD5544_MSB", false,-1);
        vcdp->declBit(c+1529,"Phpa_Test ad5544_A_AD5544_RS", false,-1);
        vcdp->declBit(c+1537,"Phpa_Test ad5544_A_AD5544_SCLK", false,-1);
        vcdp->declBit(c+1545,"Phpa_Test ad5544_A_AD5544_SDIN", false,-1);
        vcdp->declBit(c+1553,"Phpa_Test ad5544_B_AD5544_CS", false,-1);
        vcdp->declBit(c+1561,"Phpa_Test ad5544_B_AD5544_LDAC", false,-1);
        vcdp->declBit(c+1569,"Phpa_Test ad5544_B_AD5544_MSB", false,-1);
        vcdp->declBit(c+1577,"Phpa_Test ad5544_B_AD5544_RS", false,-1);
        vcdp->declBit(c+1585,"Phpa_Test ad5544_B_AD5544_SCLK", false,-1);
        vcdp->declBit(c+1593,"Phpa_Test ad5544_B_AD5544_SDIN", false,-1);
        vcdp->declBit(c+1601,"Phpa_Test ad5544_C_AD5544_CS", false,-1);
        vcdp->declBit(c+1609,"Phpa_Test ad5544_C_AD5544_LDAC", false,-1);
        vcdp->declBit(c+1617,"Phpa_Test ad5544_C_AD5544_MSB", false,-1);
        vcdp->declBit(c+1625,"Phpa_Test ad5544_C_AD5544_RS", false,-1);
        vcdp->declBit(c+1633,"Phpa_Test ad5544_C_AD5544_SCLK", false,-1);
        vcdp->declBit(c+1641,"Phpa_Test ad5544_C_AD5544_SDIN", false,-1);
        vcdp->declBit(c+1649,"Phpa_Test biss_c_enc_clk", false,-1);
        vcdp->declBit(c+1657,"Phpa_Test biss_c_enc_data", false,-1);
        vcdp->declBus(c+1665,"Phpa_Test ad7606_ad_data", false,-1, 15,0);
        vcdp->declBit(c+1673,"Phpa_Test ad7606_ad_busy", false,-1);
        vcdp->declBit(c+1681,"Phpa_Test ad7606_first_data", false,-1);
        vcdp->declBus(c+1689,"Phpa_Test ad7606_ad_os", false,-1, 2,0);
        vcdp->declBit(c+1697,"Phpa_Test ad7606_ad_cs", false,-1);
        vcdp->declBit(c+1705,"Phpa_Test ad7606_ad_rd", false,-1);
        vcdp->declBit(c+1713,"Phpa_Test ad7606_ad_reset", false,-1);
        vcdp->declBit(c+1721,"Phpa_Test ad7606_ad_convsta", false,-1);
        vcdp->declBit(c+1729,"Phpa_Test ad7606_ad_convstb", false,-1);
        vcdp->declBit(c+1737,"Phpa_Test ad7606_ad_range", false,-1);
        vcdp->declBit(c+1745,"Phpa_Test clk", false,-1);
        vcdp->declBit(c+1753,"Phpa_Test reset", false,-1);
        vcdp->declBit(c+1761,"Phpa_Test led", false,-1);
        vcdp->declBus(c+1769,"Phpa_Test area_apbtimer_apb_PADDR", false,-1, 3,0);
        vcdp->declBus(c+1769,"Phpa_Test area_ad5544_triger_apb_PADDR", false,-1, 3,0);
        vcdp->declBus(c+1769,"Phpa_Test area_ad5544_A_Ctrl_apb_PADDR", false,-1, 3,0);
        vcdp->declBit(c+385,"Phpa_Test area_ad5544_A_Ctrl_ad5544_enable", false,-1);
        vcdp->declBus(c+1769,"Phpa_Test area_ad5544_B_Ctrl_apb_PADDR", false,-1, 3,0);
        vcdp->declBit(c+385,"Phpa_Test area_ad5544_B_Ctrl_ad5544_enable", false,-1);
        vcdp->declBus(c+1769,"Phpa_Test area_ad5544_C_Ctrl_apb_PADDR", false,-1, 3,0);
        vcdp->declBit(c+385,"Phpa_Test area_ad5544_C_Ctrl_ad5544_enable", false,-1);
        vcdp->declBus(c+1769,"Phpa_Test area_biss_c_ctrl_apb_PADDR", false,-1, 3,0);
        vcdp->declBus(c+1769,"Phpa_Test area_ad7606_ctrl_apb_PADDR", false,-1, 3,0);
        vcdp->declBus(c+409,"Phpa_Test area_emif_interface_emif_emif_data_write", false,-1, 15,0);
        vcdp->declBit(c+1777,"Phpa_Test area_emif_interface_emif_emif_data_writeEnable", false,-1);
        vcdp->declBus(c+1785,"Phpa_Test area_emif_interface_apb_PADDR", false,-1, 19,0);
        vcdp->declBus(c+1793,"Phpa_Test area_emif_interface_apb_PSEL", false,-1, 0,0);
        vcdp->declBit(c+313,"Phpa_Test area_emif_interface_apb_PENABLE", false,-1);
        vcdp->declBit(c+1,"Phpa_Test area_emif_interface_apb_PWRITE", false,-1);
        vcdp->declBus(c+1457,"Phpa_Test area_emif_interface_apb_PWDATA", false,-1, 15,0);
        vcdp->declBit(c+1809,"Phpa_Test area_apbtimer_apb_PREADY", false,-1);
        vcdp->declBus(c+9,"Phpa_Test area_apbtimer_apb_PRDATA", false,-1, 15,0);
        vcdp->declBit(c+1817,"Phpa_Test area_apbtimer_apb_PSLVERROR", false,-1);
        vcdp->declBit(c+401,"Phpa_Test area_apbtimer_interrupt", false,-1);
        vcdp->declBit(c+1809,"Phpa_Test area_ad5544_triger_apb_PREADY", false,-1);
        vcdp->declBus(c+17,"Phpa_Test area_ad5544_triger_apb_PRDATA", false,-1, 15,0);
        vcdp->declBit(c+1817,"Phpa_Test area_ad5544_triger_apb_PSLVERROR", false,-1);
        vcdp->declBit(c+393,"Phpa_Test area_ad5544_triger_ad5544_tri", false,-1);
        vcdp->declBit(c+1809,"Phpa_Test area_ad5544_A_Ctrl_apb_PREADY", false,-1);
        vcdp->declBus(c+25,"Phpa_Test area_ad5544_A_Ctrl_apb_PRDATA", false,-1, 15,0);
        vcdp->declBit(c+1817,"Phpa_Test area_ad5544_A_Ctrl_apb_PSLVERROR", false,-1);
        vcdp->declBit(c+1105,"Phpa_Test area_ad5544_A_Ctrl_ad5544Interface_AD5544_CS", false,-1);
        vcdp->declBit(c+1113,"Phpa_Test area_ad5544_A_Ctrl_ad5544Interface_AD5544_LDAC", false,-1);
        vcdp->declBit(c+1809,"Phpa_Test area_ad5544_A_Ctrl_ad5544Interface_AD5544_MSB", false,-1);
        vcdp->declBit(c+1121,"Phpa_Test area_ad5544_A_Ctrl_ad5544Interface_AD5544_RS", false,-1);
        vcdp->declBit(c+1129,"Phpa_Test area_ad5544_A_Ctrl_ad5544Interface_AD5544_SCLK", false,-1);
        vcdp->declBit(c+1137,"Phpa_Test area_ad5544_A_Ctrl_ad5544Interface_AD5544_SDIN", false,-1);
        vcdp->declBit(c+1809,"Phpa_Test area_ad5544_B_Ctrl_apb_PREADY", false,-1);
        vcdp->declBus(c+33,"Phpa_Test area_ad5544_B_Ctrl_apb_PRDATA", false,-1, 15,0);
        vcdp->declBit(c+1817,"Phpa_Test area_ad5544_B_Ctrl_apb_PSLVERROR", false,-1);
        vcdp->declBit(c+1009,"Phpa_Test area_ad5544_B_Ctrl_ad5544Interface_AD5544_CS", false,-1);
        vcdp->declBit(c+1017,"Phpa_Test area_ad5544_B_Ctrl_ad5544Interface_AD5544_LDAC", false,-1);
        vcdp->declBit(c+1809,"Phpa_Test area_ad5544_B_Ctrl_ad5544Interface_AD5544_MSB", false,-1);
        vcdp->declBit(c+1025,"Phpa_Test area_ad5544_B_Ctrl_ad5544Interface_AD5544_RS", false,-1);
        vcdp->declBit(c+1033,"Phpa_Test area_ad5544_B_Ctrl_ad5544Interface_AD5544_SCLK", false,-1);
        vcdp->declBit(c+1041,"Phpa_Test area_ad5544_B_Ctrl_ad5544Interface_AD5544_SDIN", false,-1);
        vcdp->declBit(c+1809,"Phpa_Test area_ad5544_C_Ctrl_apb_PREADY", false,-1);
        vcdp->declBus(c+41,"Phpa_Test area_ad5544_C_Ctrl_apb_PRDATA", false,-1, 15,0);
        vcdp->declBit(c+1817,"Phpa_Test area_ad5544_C_Ctrl_apb_PSLVERROR", false,-1);
        vcdp->declBit(c+913,"Phpa_Test area_ad5544_C_Ctrl_ad5544Interface_AD5544_CS", false,-1);
        vcdp->declBit(c+921,"Phpa_Test area_ad5544_C_Ctrl_ad5544Interface_AD5544_LDAC", false,-1);
        vcdp->declBit(c+1809,"Phpa_Test area_ad5544_C_Ctrl_ad5544Interface_AD5544_MSB", false,-1);
        vcdp->declBit(c+929,"Phpa_Test area_ad5544_C_Ctrl_ad5544Interface_AD5544_RS", false,-1);
        vcdp->declBit(c+937,"Phpa_Test area_ad5544_C_Ctrl_ad5544Interface_AD5544_SCLK", false,-1);
        vcdp->declBit(c+945,"Phpa_Test area_ad5544_C_Ctrl_ad5544Interface_AD5544_SDIN", false,-1);
        vcdp->declBit(c+1809,"Phpa_Test area_biss_c_ctrl_apb_PREADY", false,-1);
        vcdp->declBus(c+49,"Phpa_Test area_biss_c_ctrl_apb_PRDATA", false,-1, 15,0);
        vcdp->declBit(c+1817,"Phpa_Test area_biss_c_ctrl_apb_PSLVERROR", false,-1);
        vcdp->declBit(c+817,"Phpa_Test area_biss_c_ctrl_bisscInterface_enc_clk", false,-1);
        vcdp->declBit(c+1809,"Phpa_Test area_ad7606_ctrl_apb_PREADY", false,-1);
        vcdp->declBus(c+57,"Phpa_Test area_ad7606_ctrl_apb_PRDATA", false,-1, 15,0);
        vcdp->declBit(c+1817,"Phpa_Test area_ad7606_ctrl_apb_PSLVERROR", false,-1);
        vcdp->declBus(c+1825,"Phpa_Test area_ad7606_ctrl_ad7606Interface_ad_os", false,-1, 2,0);
        vcdp->declBit(c+665,"Phpa_Test area_ad7606_ctrl_ad7606Interface_ad_cs", false,-1);
        vcdp->declBit(c+673,"Phpa_Test area_ad7606_ctrl_ad7606Interface_ad_rd", false,-1);
        vcdp->declBit(c+681,"Phpa_Test area_ad7606_ctrl_ad7606Interface_ad_reset", false,-1);
        vcdp->declBit(c+689,"Phpa_Test area_ad7606_ctrl_ad7606Interface_ad_convsta", false,-1);
        vcdp->declBit(c+697,"Phpa_Test area_ad7606_ctrl_ad7606Interface_ad_convstb", false,-1);
        vcdp->declBit(c+1809,"Phpa_Test area_ad7606_ctrl_ad7606Interface_ad_range", false,-1);
        vcdp->declBit(c+65,"Phpa_Test apb_decoder_io_input_PREADY", false,-1);
        vcdp->declBus(c+73,"Phpa_Test apb_decoder_io_input_PRDATA", false,-1, 15,0);
        vcdp->declBit(c+81,"Phpa_Test apb_decoder_io_input_PSLVERROR", false,-1);
        vcdp->declBus(c+1785,"Phpa_Test apb_decoder_io_output_PADDR", false,-1, 19,0);
        vcdp->declBus(c+89,"Phpa_Test apb_decoder_io_output_PSEL", false,-1, 6,0);
        vcdp->declBit(c+313,"Phpa_Test apb_decoder_io_output_PENABLE", false,-1);
        vcdp->declBit(c+1,"Phpa_Test apb_decoder_io_output_PWRITE", false,-1);
        vcdp->declBus(c+1457,"Phpa_Test apb_decoder_io_output_PWDATA", false,-1, 15,0);
        vcdp->declBit(c+1833,"Phpa_Test apb3Router_1_io_input_PREADY", false,-1);
        vcdp->declBus(c+73,"Phpa_Test apb3Router_1_io_input_PRDATA", false,-1, 15,0);
        vcdp->declBit(c+1841,"Phpa_Test apb3Router_1_io_input_PSLVERROR", false,-1);
        vcdp->declBus(c+1785,"Phpa_Test apb3Router_1_io_outputs_0_PADDR", false,-1, 19,0);
        vcdp->declBus(c+97,"Phpa_Test apb3Router_1_io_outputs_0_PSEL", false,-1, 0,0);
        vcdp->declBit(c+313,"Phpa_Test apb3Router_1_io_outputs_0_PENABLE", false,-1);
        vcdp->declBit(c+1,"Phpa_Test apb3Router_1_io_outputs_0_PWRITE", false,-1);
        vcdp->declBus(c+1457,"Phpa_Test apb3Router_1_io_outputs_0_PWDATA", false,-1, 15,0);
        vcdp->declBus(c+1785,"Phpa_Test apb3Router_1_io_outputs_1_PADDR", false,-1, 19,0);
        vcdp->declBus(c+105,"Phpa_Test apb3Router_1_io_outputs_1_PSEL", false,-1, 0,0);
        vcdp->declBit(c+313,"Phpa_Test apb3Router_1_io_outputs_1_PENABLE", false,-1);
        vcdp->declBit(c+1,"Phpa_Test apb3Router_1_io_outputs_1_PWRITE", false,-1);
        vcdp->declBus(c+1457,"Phpa_Test apb3Router_1_io_outputs_1_PWDATA", false,-1, 15,0);
        vcdp->declBus(c+1785,"Phpa_Test apb3Router_1_io_outputs_2_PADDR", false,-1, 19,0);
        vcdp->declBus(c+113,"Phpa_Test apb3Router_1_io_outputs_2_PSEL", false,-1, 0,0);
        vcdp->declBit(c+313,"Phpa_Test apb3Router_1_io_outputs_2_PENABLE", false,-1);
        vcdp->declBit(c+1,"Phpa_Test apb3Router_1_io_outputs_2_PWRITE", false,-1);
        vcdp->declBus(c+1457,"Phpa_Test apb3Router_1_io_outputs_2_PWDATA", false,-1, 15,0);
        vcdp->declBus(c+1785,"Phpa_Test apb3Router_1_io_outputs_3_PADDR", false,-1, 19,0);
        vcdp->declBus(c+121,"Phpa_Test apb3Router_1_io_outputs_3_PSEL", false,-1, 0,0);
        vcdp->declBit(c+313,"Phpa_Test apb3Router_1_io_outputs_3_PENABLE", false,-1);
        vcdp->declBit(c+1,"Phpa_Test apb3Router_1_io_outputs_3_PWRITE", false,-1);
        vcdp->declBus(c+1457,"Phpa_Test apb3Router_1_io_outputs_3_PWDATA", false,-1, 15,0);
        vcdp->declBus(c+1785,"Phpa_Test apb3Router_1_io_outputs_4_PADDR", false,-1, 19,0);
        vcdp->declBus(c+129,"Phpa_Test apb3Router_1_io_outputs_4_PSEL", false,-1, 0,0);
        vcdp->declBit(c+313,"Phpa_Test apb3Router_1_io_outputs_4_PENABLE", false,-1);
        vcdp->declBit(c+1,"Phpa_Test apb3Router_1_io_outputs_4_PWRITE", false,-1);
        vcdp->declBus(c+1457,"Phpa_Test apb3Router_1_io_outputs_4_PWDATA", false,-1, 15,0);
        vcdp->declBus(c+1785,"Phpa_Test apb3Router_1_io_outputs_5_PADDR", false,-1, 19,0);
        vcdp->declBus(c+137,"Phpa_Test apb3Router_1_io_outputs_5_PSEL", false,-1, 0,0);
        vcdp->declBit(c+313,"Phpa_Test apb3Router_1_io_outputs_5_PENABLE", false,-1);
        vcdp->declBit(c+1,"Phpa_Test apb3Router_1_io_outputs_5_PWRITE", false,-1);
        vcdp->declBus(c+1457,"Phpa_Test apb3Router_1_io_outputs_5_PWDATA", false,-1, 15,0);
        vcdp->declBus(c+1785,"Phpa_Test apb3Router_1_io_outputs_6_PADDR", false,-1, 19,0);
        vcdp->declBus(c+145,"Phpa_Test apb3Router_1_io_outputs_6_PSEL", false,-1, 0,0);
        vcdp->declBit(c+313,"Phpa_Test apb3Router_1_io_outputs_6_PENABLE", false,-1);
        vcdp->declBit(c+1,"Phpa_Test apb3Router_1_io_outputs_6_PWRITE", false,-1);
        vcdp->declBus(c+1457,"Phpa_Test apb3Router_1_io_outputs_6_PWDATA", false,-1, 15,0);
        vcdp->declBit(c+1417,"Phpa_Test area_interrupt_temp", false,-1);
        vcdp->declBit(c+1425,"Phpa_Test area_apbtimer_interrupt_delay_1", false,-1);
        vcdp->declBit(c+1425,"Phpa_Test area_apbtimer_interrupt_delay_1_1", false,-1);
        vcdp->declBit(c+1433,"Phpa_Test area_apbtimer_interrupt_delay_2", false,-1);
        vcdp->declBit(c+1425,"Phpa_Test area_apbtimer_interrupt_delay_1_2", false,-1);
        vcdp->declBit(c+1433,"Phpa_Test area_apbtimer_interrupt_delay_2_1", false,-1);
        vcdp->declBit(c+1441,"Phpa_Test area_apbtimer_interrupt_delay_3", false,-1);
        vcdp->declBit(c+473,"Phpa_Test area_ledtemp", false,-1);
        vcdp->declBit(c+1809,"Phpa_Test area_counter_willIncrement", false,-1);
        vcdp->declBit(c+321,"Phpa_Test area_counter_willClear", false,-1);
        vcdp->declBus(c+329,"Phpa_Test area_counter_valueNext", false,-1, 25,0);
        vcdp->declBus(c+481,"Phpa_Test area_counter_value", false,-1, 25,0);
        vcdp->declBit(c+489,"Phpa_Test area_counter_willOverflowIfInc", false,-1);
        vcdp->declBit(c+489,"Phpa_Test area_counter_willOverflow", false,-1);
        vcdp->declBus(c+1449,"Phpa_Test area_emif_interface emif_emif_addr", false,-1, 19,0);
        vcdp->declBus(c+1457,"Phpa_Test area_emif_interface emif_emif_data_read", false,-1, 15,0);
        vcdp->declBus(c+409,"Phpa_Test area_emif_interface emif_emif_data_write", false,-1, 15,0);
        vcdp->declBit(c+1777,"Phpa_Test area_emif_interface emif_emif_data_writeEnable", false,-1);
        vcdp->declBit(c+1481,"Phpa_Test area_emif_interface emif_emif_cs", false,-1);
        vcdp->declBit(c+1489,"Phpa_Test area_emif_interface emif_emif_we", false,-1);
        vcdp->declBit(c+1497,"Phpa_Test area_emif_interface emif_emif_oe", false,-1);
        vcdp->declBus(c+1785,"Phpa_Test area_emif_interface apb_PADDR", false,-1, 19,0);
        vcdp->declBus(c+1793,"Phpa_Test area_emif_interface apb_PSEL", false,-1, 0,0);
        vcdp->declBit(c+313,"Phpa_Test area_emif_interface apb_PENABLE", false,-1);
        vcdp->declBit(c+65,"Phpa_Test area_emif_interface apb_PREADY", false,-1);
        vcdp->declBit(c+1,"Phpa_Test area_emif_interface apb_PWRITE", false,-1);
        vcdp->declBus(c+1457,"Phpa_Test area_emif_interface apb_PWDATA", false,-1, 15,0);
        vcdp->declBus(c+73,"Phpa_Test area_emif_interface apb_PRDATA", false,-1, 15,0);
        vcdp->declBit(c+81,"Phpa_Test area_emif_interface apb_PSLVERROR", false,-1);
        vcdp->declBit(c+1745,"Phpa_Test area_emif_interface clk", false,-1);
        vcdp->declBit(c+1753,"Phpa_Test area_emif_interface reset", false,-1);
        vcdp->declBit(c+497,"Phpa_Test area_emif_interface penable", false,-1);
        vcdp->declBit(c+417,"Phpa_Test area_emif_interface penable_regNext", false,-1);
        vcdp->declBit(c+1777,"Phpa_Test area_emif_interface when_Phpa_Top_l50", false,-1);
        vcdp->declBus(c+409,"Phpa_Test area_emif_interface apb_PRDATA_regNextWhen", false,-1, 15,0);
        vcdp->declBus(c+1769,"Phpa_Test area_apbtimer apb_PADDR", false,-1, 3,0);
        vcdp->declBus(c+97,"Phpa_Test area_apbtimer apb_PSEL", false,-1, 0,0);
        vcdp->declBit(c+313,"Phpa_Test area_apbtimer apb_PENABLE", false,-1);
        vcdp->declBit(c+1809,"Phpa_Test area_apbtimer apb_PREADY", false,-1);
        vcdp->declBit(c+1,"Phpa_Test area_apbtimer apb_PWRITE", false,-1);
        vcdp->declBus(c+1457,"Phpa_Test area_apbtimer apb_PWDATA", false,-1, 15,0);
        vcdp->declBus(c+9,"Phpa_Test area_apbtimer apb_PRDATA", false,-1, 15,0);
        vcdp->declBit(c+1817,"Phpa_Test area_apbtimer apb_PSLVERROR", false,-1);
        vcdp->declBit(c+401,"Phpa_Test area_apbtimer interrupt", false,-1);
        vcdp->declBit(c+1745,"Phpa_Test area_apbtimer clk", false,-1);
        vcdp->declBit(c+1753,"Phpa_Test area_apbtimer reset", false,-1);
        vcdp->declBit(c+337,"Phpa_Test area_apbtimer area_timerA_io_clear", false,-1);
        vcdp->declBit(c+401,"Phpa_Test area_apbtimer area_timerA_io_full", false,-1);
        vcdp->declBus(c+425,"Phpa_Test area_apbtimer area_timerA_io_value", false,-1, 15,0);
        vcdp->declBit(c+201,"Phpa_Test area_apbtimer area_busCtrl_askWrite", false,-1);
        vcdp->declBit(c+209,"Phpa_Test area_apbtimer area_busCtrl_askRead", false,-1);
        vcdp->declBit(c+153,"Phpa_Test area_apbtimer area_busCtrl_doWrite", false,-1);
        vcdp->declBit(c+209,"Phpa_Test area_apbtimer area_busCtrl_doRead", false,-1);
        vcdp->declBus(c+433,"Phpa_Test area_apbtimer area_timerA_io_limit_driver", false,-1, 15,0);
        vcdp->declBit(c+345,"Phpa_Test area_apbtimer when_ApbTimer_l38", false,-1);
        vcdp->declBit(c+705,"Phpa_Test area_apbtimer area_timerA io_tick", false,-1);
        vcdp->declBit(c+337,"Phpa_Test area_apbtimer area_timerA io_clear", false,-1);
        vcdp->declBus(c+433,"Phpa_Test area_apbtimer area_timerA io_limit", false,-1, 15,0);
        vcdp->declBit(c+401,"Phpa_Test area_apbtimer area_timerA io_full", false,-1);
        vcdp->declBus(c+425,"Phpa_Test area_apbtimer area_timerA io_value", false,-1, 15,0);
        vcdp->declBit(c+1745,"Phpa_Test area_apbtimer area_timerA clk", false,-1);
        vcdp->declBit(c+1753,"Phpa_Test area_apbtimer area_timerA reset", false,-1);
        vcdp->declBus(c+425,"Phpa_Test area_apbtimer area_timerA counter", false,-1, 15,0);
        vcdp->declBit(c+353,"Phpa_Test area_apbtimer area_timerA limitHit", false,-1);
        vcdp->declBit(c+505,"Phpa_Test area_apbtimer area_timerA inhibitFull", false,-1);
        vcdp->declBus(c+1769,"Phpa_Test area_ad5544_triger apb_PADDR", false,-1, 3,0);
        vcdp->declBus(c+105,"Phpa_Test area_ad5544_triger apb_PSEL", false,-1, 0,0);
        vcdp->declBit(c+313,"Phpa_Test area_ad5544_triger apb_PENABLE", false,-1);
        vcdp->declBit(c+1809,"Phpa_Test area_ad5544_triger apb_PREADY", false,-1);
        vcdp->declBit(c+1,"Phpa_Test area_ad5544_triger apb_PWRITE", false,-1);
        vcdp->declBus(c+1457,"Phpa_Test area_ad5544_triger apb_PWDATA", false,-1, 15,0);
        vcdp->declBus(c+17,"Phpa_Test area_ad5544_triger apb_PRDATA", false,-1, 15,0);
        vcdp->declBit(c+1817,"Phpa_Test area_ad5544_triger apb_PSLVERROR", false,-1);
        vcdp->declBit(c+393,"Phpa_Test area_ad5544_triger ad5544_tri", false,-1);
        vcdp->declBit(c+1745,"Phpa_Test area_ad5544_triger clk", false,-1);
        vcdp->declBit(c+1753,"Phpa_Test area_ad5544_triger reset", false,-1);
        vcdp->declBit(c+513,"Phpa_Test area_ad5544_triger area_temp", false,-1);
        vcdp->declBit(c+217,"Phpa_Test area_ad5544_triger area_ctrl_askWrite", false,-1);
        vcdp->declBit(c+225,"Phpa_Test area_ad5544_triger area_ctrl_askRead", false,-1);
        vcdp->declBit(c+217,"Phpa_Test area_ad5544_triger area_ctrl_doWrite", false,-1);
        vcdp->declBit(c+225,"Phpa_Test area_ad5544_triger area_ctrl_doRead", false,-1);
        vcdp->declBit(c+161,"Phpa_Test area_ad5544_triger when_AD5544_l91", false,-1);
        vcdp->declBit(c+441,"Phpa_Test area_ad5544_triger area_temp_delay_1", false,-1);
        vcdp->declBit(c+441,"Phpa_Test area_ad5544_triger area_temp_delay_1_1", false,-1);
        vcdp->declBit(c+449,"Phpa_Test area_ad5544_triger area_temp_delay_2", false,-1);
        vcdp->declBit(c+441,"Phpa_Test area_ad5544_triger area_temp_delay_1_2", false,-1);
        vcdp->declBit(c+449,"Phpa_Test area_ad5544_triger area_temp_delay_2_1", false,-1);
        vcdp->declBit(c+457,"Phpa_Test area_ad5544_triger area_temp_delay_3", false,-1);
        vcdp->declBus(c+1769,"Phpa_Test area_ad5544_A_Ctrl apb_PADDR", false,-1, 3,0);
        vcdp->declBus(c+113,"Phpa_Test area_ad5544_A_Ctrl apb_PSEL", false,-1, 0,0);
        vcdp->declBit(c+313,"Phpa_Test area_ad5544_A_Ctrl apb_PENABLE", false,-1);
        vcdp->declBit(c+1809,"Phpa_Test area_ad5544_A_Ctrl apb_PREADY", false,-1);
        vcdp->declBit(c+1,"Phpa_Test area_ad5544_A_Ctrl apb_PWRITE", false,-1);
        vcdp->declBus(c+1457,"Phpa_Test area_ad5544_A_Ctrl apb_PWDATA", false,-1, 15,0);
        vcdp->declBus(c+25,"Phpa_Test area_ad5544_A_Ctrl apb_PRDATA", false,-1, 15,0);
        vcdp->declBit(c+1817,"Phpa_Test area_ad5544_A_Ctrl apb_PSLVERROR", false,-1);
        vcdp->declBit(c+1105,"Phpa_Test area_ad5544_A_Ctrl ad5544Interface_AD5544_CS", false,-1);
        vcdp->declBit(c+1113,"Phpa_Test area_ad5544_A_Ctrl ad5544Interface_AD5544_LDAC", false,-1);
        vcdp->declBit(c+1809,"Phpa_Test area_ad5544_A_Ctrl ad5544Interface_AD5544_MSB", false,-1);
        vcdp->declBit(c+1121,"Phpa_Test area_ad5544_A_Ctrl ad5544Interface_AD5544_RS", false,-1);
        vcdp->declBit(c+1129,"Phpa_Test area_ad5544_A_Ctrl ad5544Interface_AD5544_SCLK", false,-1);
        vcdp->declBit(c+1137,"Phpa_Test area_ad5544_A_Ctrl ad5544Interface_AD5544_SDIN", false,-1);
        vcdp->declBit(c+1745,"Phpa_Test area_ad5544_A_Ctrl clk", false,-1);
        vcdp->declBit(c+1753,"Phpa_Test area_ad5544_A_Ctrl reset", false,-1);
        vcdp->declBit(c+385,"Phpa_Test area_ad5544_A_Ctrl ad5544_enable", false,-1);
        vcdp->declBit(c+1105,"Phpa_Test area_ad5544_A_Ctrl area_ad5544_ctrl_AD5544_CS", false,-1);
        vcdp->declBit(c+1113,"Phpa_Test area_ad5544_A_Ctrl area_ad5544_ctrl_AD5544_LDAC", false,-1);
        vcdp->declBit(c+1809,"Phpa_Test area_ad5544_A_Ctrl area_ad5544_ctrl_AD5544_MSB", false,-1);
        vcdp->declBit(c+1121,"Phpa_Test area_ad5544_A_Ctrl area_ad5544_ctrl_AD5544_RS", false,-1);
        vcdp->declBit(c+1129,"Phpa_Test area_ad5544_A_Ctrl area_ad5544_ctrl_AD5544_SCLK", false,-1);
        vcdp->declBit(c+1137,"Phpa_Test area_ad5544_A_Ctrl area_ad5544_ctrl_AD5544_SDIN", false,-1);
        vcdp->declBit(c+233,"Phpa_Test area_ad5544_A_Ctrl area_ctrl_askWrite", false,-1);
        vcdp->declBit(c+241,"Phpa_Test area_ad5544_A_Ctrl area_ctrl_askRead", false,-1);
        vcdp->declBit(c+169,"Phpa_Test area_ad5544_A_Ctrl area_ctrl_doWrite", false,-1);
        vcdp->declBit(c+241,"Phpa_Test area_ad5544_A_Ctrl area_ctrl_doRead", false,-1);
        vcdp->declBus(c+1225,"Phpa_Test area_ad5544_A_Ctrl area_ad5544_ctrl_AD5544_DATA_IN1_driver", false,-1, 15,0);
        vcdp->declBus(c+1233,"Phpa_Test area_ad5544_A_Ctrl area_ad5544_ctrl_AD5544_DATA_IN2_driver", false,-1, 15,0);
        vcdp->declBus(c+1241,"Phpa_Test area_ad5544_A_Ctrl area_ad5544_ctrl_AD5544_DATA_IN3_driver", false,-1, 15,0);
        vcdp->declBus(c+1249,"Phpa_Test area_ad5544_A_Ctrl area_ad5544_ctrl_AD5544_DATA_IN4_driver", false,-1, 15,0);
        vcdp->declBit(c+1745,"Phpa_Test area_ad5544_A_Ctrl area_ad5544_ctrl clk", false,-1);
        vcdp->declBit(c+1753,"Phpa_Test area_ad5544_A_Ctrl area_ad5544_ctrl reset", false,-1);
        vcdp->declBit(c+385,"Phpa_Test area_ad5544_A_Ctrl area_ad5544_ctrl ad5544_trig", false,-1);
        vcdp->declBus(c+1225,"Phpa_Test area_ad5544_A_Ctrl area_ad5544_ctrl AD5544_DATA_IN1", false,-1, 15,0);
        vcdp->declBus(c+1233,"Phpa_Test area_ad5544_A_Ctrl area_ad5544_ctrl AD5544_DATA_IN2", false,-1, 15,0);
        vcdp->declBus(c+1241,"Phpa_Test area_ad5544_A_Ctrl area_ad5544_ctrl AD5544_DATA_IN3", false,-1, 15,0);
        vcdp->declBus(c+1249,"Phpa_Test area_ad5544_A_Ctrl area_ad5544_ctrl AD5544_DATA_IN4", false,-1, 15,0);
        vcdp->declBit(c+1105,"Phpa_Test area_ad5544_A_Ctrl area_ad5544_ctrl AD5544_CS", false,-1);
        vcdp->declBit(c+1113,"Phpa_Test area_ad5544_A_Ctrl area_ad5544_ctrl AD5544_LDAC", false,-1);
        vcdp->declBit(c+1121,"Phpa_Test area_ad5544_A_Ctrl area_ad5544_ctrl AD5544_RS", false,-1);
        vcdp->declBit(c+1129,"Phpa_Test area_ad5544_A_Ctrl area_ad5544_ctrl AD5544_SCLK", false,-1);
        vcdp->declBit(c+1137,"Phpa_Test area_ad5544_A_Ctrl area_ad5544_ctrl AD5544_SDIN", false,-1);
        vcdp->declBit(c+1809,"Phpa_Test area_ad5544_A_Ctrl area_ad5544_ctrl AD5544_MSB", false,-1);
        vcdp->declBus(c+1145,"Phpa_Test area_ad5544_A_Ctrl area_ad5544_ctrl cnt", false,-1, 9,0);
        vcdp->declBus(c+1153,"Phpa_Test area_ad5544_A_Ctrl area_ad5544_ctrl AD5544_SDIN_reg", false,-1, 17,0);
        vcdp->declBus(c+1161,"Phpa_Test area_ad5544_A_Ctrl area_ad5544_ctrl channel", false,-1, 3,0);
        vcdp->declBus(c+1169,"Phpa_Test area_ad5544_A_Ctrl area_ad5544_ctrl curr_state", false,-1, 6,0);
        vcdp->declBus(c+377,"Phpa_Test area_ad5544_A_Ctrl area_ad5544_ctrl next_state", false,-1, 6,0);
        vcdp->declBus(c+1849,"Phpa_Test area_ad5544_A_Ctrl area_ad5544_ctrl RESET", false,-1, 6,0);
        vcdp->declBus(c+1857,"Phpa_Test area_ad5544_A_Ctrl area_ad5544_ctrl IDLE", false,-1, 6,0);
        vcdp->declBus(c+1865,"Phpa_Test area_ad5544_A_Ctrl area_ad5544_ctrl WAIT", false,-1, 6,0);
        vcdp->declBus(c+1873,"Phpa_Test area_ad5544_A_Ctrl area_ad5544_ctrl CS_L", false,-1, 6,0);
        vcdp->declBus(c+1881,"Phpa_Test area_ad5544_A_Ctrl area_ad5544_ctrl SCLK", false,-1, 6,0);
        vcdp->declBus(c+1889,"Phpa_Test area_ad5544_A_Ctrl area_ad5544_ctrl CS_LDAC", false,-1, 6,0);
        vcdp->declBus(c+1897,"Phpa_Test area_ad5544_A_Ctrl area_ad5544_ctrl Finish", false,-1, 6,0);
        vcdp->declBus(c+1257,"Phpa_Test area_ad5544_A_Ctrl area_ad5544_ctrl DATA_CH1", false,-1, 17,0);
        vcdp->declBus(c+1265,"Phpa_Test area_ad5544_A_Ctrl area_ad5544_ctrl DATA_CH2", false,-1, 17,0);
        vcdp->declBus(c+1273,"Phpa_Test area_ad5544_A_Ctrl area_ad5544_ctrl DATA_CH3", false,-1, 17,0);
        vcdp->declBus(c+1281,"Phpa_Test area_ad5544_A_Ctrl area_ad5544_ctrl DATA_CH4", false,-1, 17,0);
        vcdp->declBit(c+521,"Phpa_Test area_ad5544_A_Ctrl area_ad5544_ctrl clk_out", false,-1);
        vcdp->declBus(c+529,"Phpa_Test area_ad5544_A_Ctrl area_ad5544_ctrl clk_dvidecnt", false,-1, 3,0);
        vcdp->declBit(c+1177,"Phpa_Test area_ad5544_A_Ctrl area_ad5544_ctrl ad5544_trig_reg1", false,-1);
        vcdp->declBit(c+1185,"Phpa_Test area_ad5544_A_Ctrl area_ad5544_ctrl ad5544_trig_reg2", false,-1);
        vcdp->declBit(c+1193,"Phpa_Test area_ad5544_A_Ctrl area_ad5544_ctrl ad5544_trig_posedge", false,-1);
        vcdp->declBus(c+1769,"Phpa_Test area_ad5544_B_Ctrl apb_PADDR", false,-1, 3,0);
        vcdp->declBus(c+121,"Phpa_Test area_ad5544_B_Ctrl apb_PSEL", false,-1, 0,0);
        vcdp->declBit(c+313,"Phpa_Test area_ad5544_B_Ctrl apb_PENABLE", false,-1);
        vcdp->declBit(c+1809,"Phpa_Test area_ad5544_B_Ctrl apb_PREADY", false,-1);
        vcdp->declBit(c+1,"Phpa_Test area_ad5544_B_Ctrl apb_PWRITE", false,-1);
        vcdp->declBus(c+1457,"Phpa_Test area_ad5544_B_Ctrl apb_PWDATA", false,-1, 15,0);
        vcdp->declBus(c+33,"Phpa_Test area_ad5544_B_Ctrl apb_PRDATA", false,-1, 15,0);
        vcdp->declBit(c+1817,"Phpa_Test area_ad5544_B_Ctrl apb_PSLVERROR", false,-1);
        vcdp->declBit(c+1009,"Phpa_Test area_ad5544_B_Ctrl ad5544Interface_AD5544_CS", false,-1);
        vcdp->declBit(c+1017,"Phpa_Test area_ad5544_B_Ctrl ad5544Interface_AD5544_LDAC", false,-1);
        vcdp->declBit(c+1809,"Phpa_Test area_ad5544_B_Ctrl ad5544Interface_AD5544_MSB", false,-1);
        vcdp->declBit(c+1025,"Phpa_Test area_ad5544_B_Ctrl ad5544Interface_AD5544_RS", false,-1);
        vcdp->declBit(c+1033,"Phpa_Test area_ad5544_B_Ctrl ad5544Interface_AD5544_SCLK", false,-1);
        vcdp->declBit(c+1041,"Phpa_Test area_ad5544_B_Ctrl ad5544Interface_AD5544_SDIN", false,-1);
        vcdp->declBit(c+1745,"Phpa_Test area_ad5544_B_Ctrl clk", false,-1);
        vcdp->declBit(c+1753,"Phpa_Test area_ad5544_B_Ctrl reset", false,-1);
        vcdp->declBit(c+385,"Phpa_Test area_ad5544_B_Ctrl ad5544_enable", false,-1);
        vcdp->declBit(c+1009,"Phpa_Test area_ad5544_B_Ctrl area_ad5544_ctrl_AD5544_CS", false,-1);
        vcdp->declBit(c+1017,"Phpa_Test area_ad5544_B_Ctrl area_ad5544_ctrl_AD5544_LDAC", false,-1);
        vcdp->declBit(c+1809,"Phpa_Test area_ad5544_B_Ctrl area_ad5544_ctrl_AD5544_MSB", false,-1);
        vcdp->declBit(c+1025,"Phpa_Test area_ad5544_B_Ctrl area_ad5544_ctrl_AD5544_RS", false,-1);
        vcdp->declBit(c+1033,"Phpa_Test area_ad5544_B_Ctrl area_ad5544_ctrl_AD5544_SCLK", false,-1);
        vcdp->declBit(c+1041,"Phpa_Test area_ad5544_B_Ctrl area_ad5544_ctrl_AD5544_SDIN", false,-1);
        vcdp->declBit(c+249,"Phpa_Test area_ad5544_B_Ctrl area_ctrl_askWrite", false,-1);
        vcdp->declBit(c+257,"Phpa_Test area_ad5544_B_Ctrl area_ctrl_askRead", false,-1);
        vcdp->declBit(c+177,"Phpa_Test area_ad5544_B_Ctrl area_ctrl_doWrite", false,-1);
        vcdp->declBit(c+257,"Phpa_Test area_ad5544_B_Ctrl area_ctrl_doRead", false,-1);
        vcdp->declBus(c+1289,"Phpa_Test area_ad5544_B_Ctrl area_ad5544_ctrl_AD5544_DATA_IN1_driver", false,-1, 15,0);
        vcdp->declBus(c+1297,"Phpa_Test area_ad5544_B_Ctrl area_ad5544_ctrl_AD5544_DATA_IN2_driver", false,-1, 15,0);
        vcdp->declBus(c+1305,"Phpa_Test area_ad5544_B_Ctrl area_ad5544_ctrl_AD5544_DATA_IN3_driver", false,-1, 15,0);
        vcdp->declBus(c+1313,"Phpa_Test area_ad5544_B_Ctrl area_ad5544_ctrl_AD5544_DATA_IN4_driver", false,-1, 15,0);
        vcdp->declBit(c+1745,"Phpa_Test area_ad5544_B_Ctrl area_ad5544_ctrl clk", false,-1);
        vcdp->declBit(c+1753,"Phpa_Test area_ad5544_B_Ctrl area_ad5544_ctrl reset", false,-1);
        vcdp->declBit(c+385,"Phpa_Test area_ad5544_B_Ctrl area_ad5544_ctrl ad5544_trig", false,-1);
        vcdp->declBus(c+1289,"Phpa_Test area_ad5544_B_Ctrl area_ad5544_ctrl AD5544_DATA_IN1", false,-1, 15,0);
        vcdp->declBus(c+1297,"Phpa_Test area_ad5544_B_Ctrl area_ad5544_ctrl AD5544_DATA_IN2", false,-1, 15,0);
        vcdp->declBus(c+1305,"Phpa_Test area_ad5544_B_Ctrl area_ad5544_ctrl AD5544_DATA_IN3", false,-1, 15,0);
        vcdp->declBus(c+1313,"Phpa_Test area_ad5544_B_Ctrl area_ad5544_ctrl AD5544_DATA_IN4", false,-1, 15,0);
        vcdp->declBit(c+1009,"Phpa_Test area_ad5544_B_Ctrl area_ad5544_ctrl AD5544_CS", false,-1);
        vcdp->declBit(c+1017,"Phpa_Test area_ad5544_B_Ctrl area_ad5544_ctrl AD5544_LDAC", false,-1);
        vcdp->declBit(c+1025,"Phpa_Test area_ad5544_B_Ctrl area_ad5544_ctrl AD5544_RS", false,-1);
        vcdp->declBit(c+1033,"Phpa_Test area_ad5544_B_Ctrl area_ad5544_ctrl AD5544_SCLK", false,-1);
        vcdp->declBit(c+1041,"Phpa_Test area_ad5544_B_Ctrl area_ad5544_ctrl AD5544_SDIN", false,-1);
        vcdp->declBit(c+1809,"Phpa_Test area_ad5544_B_Ctrl area_ad5544_ctrl AD5544_MSB", false,-1);
        vcdp->declBus(c+1049,"Phpa_Test area_ad5544_B_Ctrl area_ad5544_ctrl cnt", false,-1, 9,0);
        vcdp->declBus(c+1057,"Phpa_Test area_ad5544_B_Ctrl area_ad5544_ctrl AD5544_SDIN_reg", false,-1, 17,0);
        vcdp->declBus(c+1065,"Phpa_Test area_ad5544_B_Ctrl area_ad5544_ctrl channel", false,-1, 3,0);
        vcdp->declBus(c+1073,"Phpa_Test area_ad5544_B_Ctrl area_ad5544_ctrl curr_state", false,-1, 6,0);
        vcdp->declBus(c+369,"Phpa_Test area_ad5544_B_Ctrl area_ad5544_ctrl next_state", false,-1, 6,0);
        vcdp->declBus(c+1849,"Phpa_Test area_ad5544_B_Ctrl area_ad5544_ctrl RESET", false,-1, 6,0);
        vcdp->declBus(c+1857,"Phpa_Test area_ad5544_B_Ctrl area_ad5544_ctrl IDLE", false,-1, 6,0);
        vcdp->declBus(c+1865,"Phpa_Test area_ad5544_B_Ctrl area_ad5544_ctrl WAIT", false,-1, 6,0);
        vcdp->declBus(c+1873,"Phpa_Test area_ad5544_B_Ctrl area_ad5544_ctrl CS_L", false,-1, 6,0);
        vcdp->declBus(c+1881,"Phpa_Test area_ad5544_B_Ctrl area_ad5544_ctrl SCLK", false,-1, 6,0);
        vcdp->declBus(c+1889,"Phpa_Test area_ad5544_B_Ctrl area_ad5544_ctrl CS_LDAC", false,-1, 6,0);
        vcdp->declBus(c+1897,"Phpa_Test area_ad5544_B_Ctrl area_ad5544_ctrl Finish", false,-1, 6,0);
        vcdp->declBus(c+1321,"Phpa_Test area_ad5544_B_Ctrl area_ad5544_ctrl DATA_CH1", false,-1, 17,0);
        vcdp->declBus(c+1329,"Phpa_Test area_ad5544_B_Ctrl area_ad5544_ctrl DATA_CH2", false,-1, 17,0);
        vcdp->declBus(c+1337,"Phpa_Test area_ad5544_B_Ctrl area_ad5544_ctrl DATA_CH3", false,-1, 17,0);
        vcdp->declBus(c+1345,"Phpa_Test area_ad5544_B_Ctrl area_ad5544_ctrl DATA_CH4", false,-1, 17,0);
        vcdp->declBit(c+537,"Phpa_Test area_ad5544_B_Ctrl area_ad5544_ctrl clk_out", false,-1);
        vcdp->declBus(c+545,"Phpa_Test area_ad5544_B_Ctrl area_ad5544_ctrl clk_dvidecnt", false,-1, 3,0);
        vcdp->declBit(c+1081,"Phpa_Test area_ad5544_B_Ctrl area_ad5544_ctrl ad5544_trig_reg1", false,-1);
        vcdp->declBit(c+1089,"Phpa_Test area_ad5544_B_Ctrl area_ad5544_ctrl ad5544_trig_reg2", false,-1);
        vcdp->declBit(c+1097,"Phpa_Test area_ad5544_B_Ctrl area_ad5544_ctrl ad5544_trig_posedge", false,-1);
        vcdp->declBus(c+1769,"Phpa_Test area_ad5544_C_Ctrl apb_PADDR", false,-1, 3,0);
        vcdp->declBus(c+129,"Phpa_Test area_ad5544_C_Ctrl apb_PSEL", false,-1, 0,0);
        vcdp->declBit(c+313,"Phpa_Test area_ad5544_C_Ctrl apb_PENABLE", false,-1);
        vcdp->declBit(c+1809,"Phpa_Test area_ad5544_C_Ctrl apb_PREADY", false,-1);
        vcdp->declBit(c+1,"Phpa_Test area_ad5544_C_Ctrl apb_PWRITE", false,-1);
        vcdp->declBus(c+1457,"Phpa_Test area_ad5544_C_Ctrl apb_PWDATA", false,-1, 15,0);
        vcdp->declBus(c+41,"Phpa_Test area_ad5544_C_Ctrl apb_PRDATA", false,-1, 15,0);
        vcdp->declBit(c+1817,"Phpa_Test area_ad5544_C_Ctrl apb_PSLVERROR", false,-1);
        vcdp->declBit(c+913,"Phpa_Test area_ad5544_C_Ctrl ad5544Interface_AD5544_CS", false,-1);
        vcdp->declBit(c+921,"Phpa_Test area_ad5544_C_Ctrl ad5544Interface_AD5544_LDAC", false,-1);
        vcdp->declBit(c+1809,"Phpa_Test area_ad5544_C_Ctrl ad5544Interface_AD5544_MSB", false,-1);
        vcdp->declBit(c+929,"Phpa_Test area_ad5544_C_Ctrl ad5544Interface_AD5544_RS", false,-1);
        vcdp->declBit(c+937,"Phpa_Test area_ad5544_C_Ctrl ad5544Interface_AD5544_SCLK", false,-1);
        vcdp->declBit(c+945,"Phpa_Test area_ad5544_C_Ctrl ad5544Interface_AD5544_SDIN", false,-1);
        vcdp->declBit(c+1745,"Phpa_Test area_ad5544_C_Ctrl clk", false,-1);
        vcdp->declBit(c+1753,"Phpa_Test area_ad5544_C_Ctrl reset", false,-1);
        vcdp->declBit(c+385,"Phpa_Test area_ad5544_C_Ctrl ad5544_enable", false,-1);
        vcdp->declBit(c+913,"Phpa_Test area_ad5544_C_Ctrl area_ad5544_ctrl_AD5544_CS", false,-1);
        vcdp->declBit(c+921,"Phpa_Test area_ad5544_C_Ctrl area_ad5544_ctrl_AD5544_LDAC", false,-1);
        vcdp->declBit(c+1809,"Phpa_Test area_ad5544_C_Ctrl area_ad5544_ctrl_AD5544_MSB", false,-1);
        vcdp->declBit(c+929,"Phpa_Test area_ad5544_C_Ctrl area_ad5544_ctrl_AD5544_RS", false,-1);
        vcdp->declBit(c+937,"Phpa_Test area_ad5544_C_Ctrl area_ad5544_ctrl_AD5544_SCLK", false,-1);
        vcdp->declBit(c+945,"Phpa_Test area_ad5544_C_Ctrl area_ad5544_ctrl_AD5544_SDIN", false,-1);
        vcdp->declBit(c+265,"Phpa_Test area_ad5544_C_Ctrl area_ctrl_askWrite", false,-1);
        vcdp->declBit(c+273,"Phpa_Test area_ad5544_C_Ctrl area_ctrl_askRead", false,-1);
        vcdp->declBit(c+185,"Phpa_Test area_ad5544_C_Ctrl area_ctrl_doWrite", false,-1);
        vcdp->declBit(c+273,"Phpa_Test area_ad5544_C_Ctrl area_ctrl_doRead", false,-1);
        vcdp->declBus(c+1353,"Phpa_Test area_ad5544_C_Ctrl area_ad5544_ctrl_AD5544_DATA_IN1_driver", false,-1, 15,0);
        vcdp->declBus(c+1361,"Phpa_Test area_ad5544_C_Ctrl area_ad5544_ctrl_AD5544_DATA_IN2_driver", false,-1, 15,0);
        vcdp->declBus(c+1369,"Phpa_Test area_ad5544_C_Ctrl area_ad5544_ctrl_AD5544_DATA_IN3_driver", false,-1, 15,0);
        vcdp->declBus(c+1377,"Phpa_Test area_ad5544_C_Ctrl area_ad5544_ctrl_AD5544_DATA_IN4_driver", false,-1, 15,0);
        vcdp->declBit(c+1745,"Phpa_Test area_ad5544_C_Ctrl area_ad5544_ctrl clk", false,-1);
        vcdp->declBit(c+1753,"Phpa_Test area_ad5544_C_Ctrl area_ad5544_ctrl reset", false,-1);
        vcdp->declBit(c+385,"Phpa_Test area_ad5544_C_Ctrl area_ad5544_ctrl ad5544_trig", false,-1);
        vcdp->declBus(c+1353,"Phpa_Test area_ad5544_C_Ctrl area_ad5544_ctrl AD5544_DATA_IN1", false,-1, 15,0);
        vcdp->declBus(c+1361,"Phpa_Test area_ad5544_C_Ctrl area_ad5544_ctrl AD5544_DATA_IN2", false,-1, 15,0);
        vcdp->declBus(c+1369,"Phpa_Test area_ad5544_C_Ctrl area_ad5544_ctrl AD5544_DATA_IN3", false,-1, 15,0);
        vcdp->declBus(c+1377,"Phpa_Test area_ad5544_C_Ctrl area_ad5544_ctrl AD5544_DATA_IN4", false,-1, 15,0);
        vcdp->declBit(c+913,"Phpa_Test area_ad5544_C_Ctrl area_ad5544_ctrl AD5544_CS", false,-1);
        vcdp->declBit(c+921,"Phpa_Test area_ad5544_C_Ctrl area_ad5544_ctrl AD5544_LDAC", false,-1);
        vcdp->declBit(c+929,"Phpa_Test area_ad5544_C_Ctrl area_ad5544_ctrl AD5544_RS", false,-1);
        vcdp->declBit(c+937,"Phpa_Test area_ad5544_C_Ctrl area_ad5544_ctrl AD5544_SCLK", false,-1);
        vcdp->declBit(c+945,"Phpa_Test area_ad5544_C_Ctrl area_ad5544_ctrl AD5544_SDIN", false,-1);
        vcdp->declBit(c+1809,"Phpa_Test area_ad5544_C_Ctrl area_ad5544_ctrl AD5544_MSB", false,-1);
        vcdp->declBus(c+953,"Phpa_Test area_ad5544_C_Ctrl area_ad5544_ctrl cnt", false,-1, 9,0);
        vcdp->declBus(c+961,"Phpa_Test area_ad5544_C_Ctrl area_ad5544_ctrl AD5544_SDIN_reg", false,-1, 17,0);
        vcdp->declBus(c+969,"Phpa_Test area_ad5544_C_Ctrl area_ad5544_ctrl channel", false,-1, 3,0);
        vcdp->declBus(c+977,"Phpa_Test area_ad5544_C_Ctrl area_ad5544_ctrl curr_state", false,-1, 6,0);
        vcdp->declBus(c+361,"Phpa_Test area_ad5544_C_Ctrl area_ad5544_ctrl next_state", false,-1, 6,0);
        vcdp->declBus(c+1849,"Phpa_Test area_ad5544_C_Ctrl area_ad5544_ctrl RESET", false,-1, 6,0);
        vcdp->declBus(c+1857,"Phpa_Test area_ad5544_C_Ctrl area_ad5544_ctrl IDLE", false,-1, 6,0);
        vcdp->declBus(c+1865,"Phpa_Test area_ad5544_C_Ctrl area_ad5544_ctrl WAIT", false,-1, 6,0);
        vcdp->declBus(c+1873,"Phpa_Test area_ad5544_C_Ctrl area_ad5544_ctrl CS_L", false,-1, 6,0);
        vcdp->declBus(c+1881,"Phpa_Test area_ad5544_C_Ctrl area_ad5544_ctrl SCLK", false,-1, 6,0);
        vcdp->declBus(c+1889,"Phpa_Test area_ad5544_C_Ctrl area_ad5544_ctrl CS_LDAC", false,-1, 6,0);
        vcdp->declBus(c+1897,"Phpa_Test area_ad5544_C_Ctrl area_ad5544_ctrl Finish", false,-1, 6,0);
        vcdp->declBus(c+1385,"Phpa_Test area_ad5544_C_Ctrl area_ad5544_ctrl DATA_CH1", false,-1, 17,0);
        vcdp->declBus(c+1393,"Phpa_Test area_ad5544_C_Ctrl area_ad5544_ctrl DATA_CH2", false,-1, 17,0);
        vcdp->declBus(c+1401,"Phpa_Test area_ad5544_C_Ctrl area_ad5544_ctrl DATA_CH3", false,-1, 17,0);
        vcdp->declBus(c+1409,"Phpa_Test area_ad5544_C_Ctrl area_ad5544_ctrl DATA_CH4", false,-1, 17,0);
        vcdp->declBit(c+553,"Phpa_Test area_ad5544_C_Ctrl area_ad5544_ctrl clk_out", false,-1);
        vcdp->declBus(c+561,"Phpa_Test area_ad5544_C_Ctrl area_ad5544_ctrl clk_dvidecnt", false,-1, 3,0);
        vcdp->declBit(c+985,"Phpa_Test area_ad5544_C_Ctrl area_ad5544_ctrl ad5544_trig_reg1", false,-1);
        vcdp->declBit(c+993,"Phpa_Test area_ad5544_C_Ctrl area_ad5544_ctrl ad5544_trig_reg2", false,-1);
        vcdp->declBit(c+1001,"Phpa_Test area_ad5544_C_Ctrl area_ad5544_ctrl ad5544_trig_posedge", false,-1);
        vcdp->declBus(c+1769,"Phpa_Test area_biss_c_ctrl apb_PADDR", false,-1, 3,0);
        vcdp->declBus(c+137,"Phpa_Test area_biss_c_ctrl apb_PSEL", false,-1, 0,0);
        vcdp->declBit(c+313,"Phpa_Test area_biss_c_ctrl apb_PENABLE", false,-1);
        vcdp->declBit(c+1809,"Phpa_Test area_biss_c_ctrl apb_PREADY", false,-1);
        vcdp->declBit(c+1,"Phpa_Test area_biss_c_ctrl apb_PWRITE", false,-1);
        vcdp->declBus(c+1457,"Phpa_Test area_biss_c_ctrl apb_PWDATA", false,-1, 15,0);
        vcdp->declBus(c+49,"Phpa_Test area_biss_c_ctrl apb_PRDATA", false,-1, 15,0);
        vcdp->declBit(c+1817,"Phpa_Test area_biss_c_ctrl apb_PSLVERROR", false,-1);
        vcdp->declBit(c+817,"Phpa_Test area_biss_c_ctrl bisscInterface_enc_clk", false,-1);
        vcdp->declBit(c+1657,"Phpa_Test area_biss_c_ctrl bisscInterface_enc_data", false,-1);
        vcdp->declBit(c+1745,"Phpa_Test area_biss_c_ctrl clk", false,-1);
        vcdp->declBit(c+1753,"Phpa_Test area_biss_c_ctrl reset", false,-1);
        vcdp->declBit(c+817,"Phpa_Test area_biss_c_ctrl area_bissc_ctrl_enc_clk", false,-1);
        vcdp->declQuad(c+825,"Phpa_Test area_biss_c_ctrl area_bissc_ctrl_enc_position_all", false,-1, 40,0);
        vcdp->declBus(c+841,"Phpa_Test area_biss_c_ctrl area_bissc_ctrl_enc_position_out", false,-1, 31,0);
        vcdp->declBit(c+849,"Phpa_Test area_biss_c_ctrl area_bissc_ctrl_erro_flag", false,-1);
        vcdp->declBit(c+857,"Phpa_Test area_biss_c_ctrl area_bissc_ctrl_warn_flag", false,-1);
        vcdp->declBit(c+865,"Phpa_Test area_biss_c_ctrl area_bissc_ctrl_crc_flag", false,-1);
        vcdp->declBit(c+281,"Phpa_Test area_biss_c_ctrl area_ctrl_askWrite", false,-1);
        vcdp->declBit(c+289,"Phpa_Test area_biss_c_ctrl area_ctrl_askRead", false,-1);
        vcdp->declBit(c+281,"Phpa_Test area_biss_c_ctrl area_ctrl_doWrite", false,-1);
        vcdp->declBit(c+289,"Phpa_Test area_biss_c_ctrl area_ctrl_doRead", false,-1);
        vcdp->declBus(c+569,"Phpa_Test area_biss_c_ctrl area_bissc_pos_reg", false,-1, 31,0);
        vcdp->declBus(c+577,"Phpa_Test area_biss_c_ctrl area_bissc_status_reg", false,-1, 15,0);
        vcdp->declBit(c+1745,"Phpa_Test area_biss_c_ctrl area_bissc_ctrl clk", false,-1);
        vcdp->declBit(c+1753,"Phpa_Test area_biss_c_ctrl area_bissc_ctrl reset", false,-1);
    }
}

void VPhpa_Test::traceInitThis__2(VPhpa_Test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPhpa_Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+1657,"Phpa_Test area_biss_c_ctrl area_bissc_ctrl enc_data", false,-1);
        vcdp->declBit(c+1809,"Phpa_Test area_biss_c_ctrl area_bissc_ctrl sample_en", false,-1);
        vcdp->declBit(c+849,"Phpa_Test area_biss_c_ctrl area_bissc_ctrl erro_flag", false,-1);
        vcdp->declBit(c+857,"Phpa_Test area_biss_c_ctrl area_bissc_ctrl warn_flag", false,-1);
        vcdp->declBus(c+873,"Phpa_Test area_biss_c_ctrl area_bissc_ctrl crc_flag", false,-1, 5,0);
        vcdp->declBit(c+817,"Phpa_Test area_biss_c_ctrl area_bissc_ctrl enc_clk", false,-1);
        vcdp->declBus(c+841,"Phpa_Test area_biss_c_ctrl area_bissc_ctrl enc_position_out", false,-1, 31,0);
        vcdp->declQuad(c+825,"Phpa_Test area_biss_c_ctrl area_bissc_ctrl enc_position_all", false,-1, 40,0);
        vcdp->declBus(c+881,"Phpa_Test area_biss_c_ctrl area_bissc_ctrl CNT", false,-1, 11,0);
        vcdp->declBus(c+889,"Phpa_Test area_biss_c_ctrl area_bissc_ctrl DATA_CNT", false,-1, 11,0);
        vcdp->declBus(c+897,"Phpa_Test area_biss_c_ctrl area_bissc_ctrl start_flag", false,-1, 1,0);
        vcdp->declBus(c+1801,"Phpa_Test area_biss_c_ctrl area_bissc_ctrl Next_State", false,-1, 7,0);
        vcdp->declBus(c+905,"Phpa_Test area_biss_c_ctrl area_bissc_ctrl Curr_State", false,-1, 7,0);
        vcdp->declBus(c+1905,"Phpa_Test area_biss_c_ctrl area_bissc_ctrl RESET", false,-1, 7,0);
        vcdp->declBus(c+1913,"Phpa_Test area_biss_c_ctrl area_bissc_ctrl MA_H", false,-1, 7,0);
        vcdp->declBus(c+1921,"Phpa_Test area_biss_c_ctrl area_bissc_ctrl WAIT", false,-1, 7,0);
        vcdp->declBus(c+1929,"Phpa_Test area_biss_c_ctrl area_bissc_ctrl MA_START", false,-1, 7,0);
        vcdp->declBus(c+1937,"Phpa_Test area_biss_c_ctrl area_bissc_ctrl MA_SCLK_H", false,-1, 7,0);
        vcdp->declBus(c+1945,"Phpa_Test area_biss_c_ctrl area_bissc_ctrl Finish", false,-1, 7,0);
        vcdp->declBit(c+585,"Phpa_Test area_biss_c_ctrl area_bissc_ctrl clk_out", false,-1);
        vcdp->declBus(c+593,"Phpa_Test area_biss_c_ctrl area_bissc_ctrl clk_dvidecnt", false,-1, 3,0);
        vcdp->declBit(c+1201,"Phpa_Test area_biss_c_ctrl area_bissc_ctrl ENC_SLO_1reg", false,-1);
        vcdp->declBit(c+1209,"Phpa_Test area_biss_c_ctrl area_bissc_ctrl ENC_SLO_2reg", false,-1);
        vcdp->declBit(c+1217,"Phpa_Test area_biss_c_ctrl area_bissc_ctrl ENC_SLO_negedge", false,-1);
        vcdp->declBus(c+1769,"Phpa_Test area_ad7606_ctrl apb_PADDR", false,-1, 3,0);
        vcdp->declBus(c+145,"Phpa_Test area_ad7606_ctrl apb_PSEL", false,-1, 0,0);
        vcdp->declBit(c+313,"Phpa_Test area_ad7606_ctrl apb_PENABLE", false,-1);
        vcdp->declBit(c+1809,"Phpa_Test area_ad7606_ctrl apb_PREADY", false,-1);
        vcdp->declBit(c+1,"Phpa_Test area_ad7606_ctrl apb_PWRITE", false,-1);
        vcdp->declBus(c+1457,"Phpa_Test area_ad7606_ctrl apb_PWDATA", false,-1, 15,0);
        vcdp->declBus(c+57,"Phpa_Test area_ad7606_ctrl apb_PRDATA", false,-1, 15,0);
        vcdp->declBit(c+1817,"Phpa_Test area_ad7606_ctrl apb_PSLVERROR", false,-1);
        vcdp->declBus(c+1665,"Phpa_Test area_ad7606_ctrl ad7606Interface_ad_data", false,-1, 15,0);
        vcdp->declBit(c+1673,"Phpa_Test area_ad7606_ctrl ad7606Interface_ad_busy", false,-1);
        vcdp->declBit(c+1681,"Phpa_Test area_ad7606_ctrl ad7606Interface_first_data", false,-1);
        vcdp->declBus(c+1825,"Phpa_Test area_ad7606_ctrl ad7606Interface_ad_os", false,-1, 2,0);
        vcdp->declBit(c+665,"Phpa_Test area_ad7606_ctrl ad7606Interface_ad_cs", false,-1);
        vcdp->declBit(c+673,"Phpa_Test area_ad7606_ctrl ad7606Interface_ad_rd", false,-1);
        vcdp->declBit(c+681,"Phpa_Test area_ad7606_ctrl ad7606Interface_ad_reset", false,-1);
        vcdp->declBit(c+689,"Phpa_Test area_ad7606_ctrl ad7606Interface_ad_convsta", false,-1);
        vcdp->declBit(c+697,"Phpa_Test area_ad7606_ctrl ad7606Interface_ad_convstb", false,-1);
        vcdp->declBit(c+1809,"Phpa_Test area_ad7606_ctrl ad7606Interface_ad_range", false,-1);
        vcdp->declBit(c+1745,"Phpa_Test area_ad7606_ctrl clk", false,-1);
        vcdp->declBit(c+1753,"Phpa_Test area_ad7606_ctrl reset", false,-1);
        vcdp->declBus(c+1825,"Phpa_Test area_ad7606_ctrl area_ad7606_ctrl_ad_os", false,-1, 2,0);
        vcdp->declBit(c+665,"Phpa_Test area_ad7606_ctrl area_ad7606_ctrl_ad_cs", false,-1);
        vcdp->declBit(c+673,"Phpa_Test area_ad7606_ctrl area_ad7606_ctrl_ad_rd", false,-1);
        vcdp->declBit(c+681,"Phpa_Test area_ad7606_ctrl area_ad7606_ctrl_ad_reset", false,-1);
        vcdp->declBit(c+689,"Phpa_Test area_ad7606_ctrl area_ad7606_ctrl_ad_convsta", false,-1);
        vcdp->declBit(c+697,"Phpa_Test area_ad7606_ctrl area_ad7606_ctrl_ad_convstb", false,-1);
        vcdp->declBit(c+1809,"Phpa_Test area_ad7606_ctrl area_ad7606_ctrl_ad_range", false,-1);
        vcdp->declBus(c+713,"Phpa_Test area_ad7606_ctrl area_ad7606_ctrl_ad_ch1_o", false,-1, 15,0);
        vcdp->declBus(c+721,"Phpa_Test area_ad7606_ctrl area_ad7606_ctrl_ad_ch2_o", false,-1, 15,0);
        vcdp->declBus(c+729,"Phpa_Test area_ad7606_ctrl area_ad7606_ctrl_ad_ch3_o", false,-1, 15,0);
        vcdp->declBus(c+737,"Phpa_Test area_ad7606_ctrl area_ad7606_ctrl_ad_ch4_o", false,-1, 15,0);
        vcdp->declBus(c+745,"Phpa_Test area_ad7606_ctrl area_ad7606_ctrl_ad_ch5_o", false,-1, 15,0);
        vcdp->declBus(c+753,"Phpa_Test area_ad7606_ctrl area_ad7606_ctrl_ad_ch6_o", false,-1, 15,0);
        vcdp->declBus(c+761,"Phpa_Test area_ad7606_ctrl area_ad7606_ctrl_ad_ch7_o", false,-1, 15,0);
        vcdp->declBus(c+769,"Phpa_Test area_ad7606_ctrl area_ad7606_ctrl_ad_ch8_o", false,-1, 15,0);
        vcdp->declBit(c+777,"Phpa_Test area_ad7606_ctrl area_ad7606_ctrl_ad_data_valid_o", false,-1);
        vcdp->declBus(c+601,"Phpa_Test area_ad7606_ctrl area_data_temp_1", false,-1, 15,0);
        vcdp->declBus(c+609,"Phpa_Test area_ad7606_ctrl area_data_temp_2", false,-1, 15,0);
        vcdp->declBus(c+617,"Phpa_Test area_ad7606_ctrl area_data_temp_3", false,-1, 15,0);
        vcdp->declBus(c+625,"Phpa_Test area_ad7606_ctrl area_data_temp_4", false,-1, 15,0);
        vcdp->declBus(c+633,"Phpa_Test area_ad7606_ctrl area_data_temp_5", false,-1, 15,0);
        vcdp->declBus(c+641,"Phpa_Test area_ad7606_ctrl area_data_temp_6", false,-1, 15,0);
        vcdp->declBus(c+649,"Phpa_Test area_ad7606_ctrl area_data_temp_7", false,-1, 15,0);
        vcdp->declBus(c+657,"Phpa_Test area_ad7606_ctrl area_data_temp_8", false,-1, 15,0);
        vcdp->declBit(c+297,"Phpa_Test area_ad7606_ctrl area_ctrl_askWrite", false,-1);
        vcdp->declBit(c+305,"Phpa_Test area_ad7606_ctrl area_ctrl_askRead", false,-1);
        vcdp->declBit(c+297,"Phpa_Test area_ad7606_ctrl area_ctrl_doWrite", false,-1);
        vcdp->declBit(c+305,"Phpa_Test area_ad7606_ctrl area_ctrl_doRead", false,-1);
        vcdp->declBit(c+1745,"Phpa_Test area_ad7606_ctrl area_ad7606_ctrl clk", false,-1);
        vcdp->declBit(c+1753,"Phpa_Test area_ad7606_ctrl area_ad7606_ctrl reset", false,-1);
        vcdp->declBit(c+1809,"Phpa_Test area_ad7606_ctrl area_ad7606_ctrl sample_en", false,-1);
        vcdp->declBus(c+1665,"Phpa_Test area_ad7606_ctrl area_ad7606_ctrl ad_data", false,-1, 15,0);
        vcdp->declBit(c+1673,"Phpa_Test area_ad7606_ctrl area_ad7606_ctrl ad_busy", false,-1);
        vcdp->declBit(c+1681,"Phpa_Test area_ad7606_ctrl area_ad7606_ctrl first_data", false,-1);
        vcdp->declBus(c+1825,"Phpa_Test area_ad7606_ctrl area_ad7606_ctrl ad_os", false,-1, 2,0);
        vcdp->declBit(c+665,"Phpa_Test area_ad7606_ctrl area_ad7606_ctrl ad_cs", false,-1);
        vcdp->declBit(c+673,"Phpa_Test area_ad7606_ctrl area_ad7606_ctrl ad_rd", false,-1);
        vcdp->declBit(c+681,"Phpa_Test area_ad7606_ctrl area_ad7606_ctrl ad_reset", false,-1);
        vcdp->declBit(c+689,"Phpa_Test area_ad7606_ctrl area_ad7606_ctrl ad_convsta", false,-1);
        vcdp->declBit(c+697,"Phpa_Test area_ad7606_ctrl area_ad7606_ctrl ad_convstb", false,-1);
        vcdp->declBit(c+1809,"Phpa_Test area_ad7606_ctrl area_ad7606_ctrl ad_range", false,-1);
        vcdp->declBus(c+713,"Phpa_Test area_ad7606_ctrl area_ad7606_ctrl ad_ch1_o", false,-1, 15,0);
        vcdp->declBus(c+721,"Phpa_Test area_ad7606_ctrl area_ad7606_ctrl ad_ch2_o", false,-1, 15,0);
        vcdp->declBus(c+729,"Phpa_Test area_ad7606_ctrl area_ad7606_ctrl ad_ch3_o", false,-1, 15,0);
        vcdp->declBus(c+737,"Phpa_Test area_ad7606_ctrl area_ad7606_ctrl ad_ch4_o", false,-1, 15,0);
        vcdp->declBus(c+745,"Phpa_Test area_ad7606_ctrl area_ad7606_ctrl ad_ch5_o", false,-1, 15,0);
        vcdp->declBus(c+753,"Phpa_Test area_ad7606_ctrl area_ad7606_ctrl ad_ch6_o", false,-1, 15,0);
        vcdp->declBus(c+761,"Phpa_Test area_ad7606_ctrl area_ad7606_ctrl ad_ch7_o", false,-1, 15,0);
        vcdp->declBus(c+769,"Phpa_Test area_ad7606_ctrl area_ad7606_ctrl ad_ch8_o", false,-1, 15,0);
        vcdp->declBit(c+777,"Phpa_Test area_ad7606_ctrl area_ad7606_ctrl ad_data_valid_o", false,-1);
        vcdp->declBus(c+785,"Phpa_Test area_ad7606_ctrl area_ad7606_ctrl cnt", false,-1, 7,0);
        vcdp->declBus(c+793,"Phpa_Test area_ad7606_ctrl area_ad7606_ctrl i", false,-1, 7,0);
        vcdp->declBus(c+801,"Phpa_Test area_ad7606_ctrl area_ad7606_ctrl cnt5us", false,-1, 15,0);
        vcdp->declBus(c+809,"Phpa_Test area_ad7606_ctrl area_ad7606_ctrl ad_state", false,-1, 7,0);
        vcdp->declBus(c+1785,"Phpa_Test apb_decoder io_input_PADDR", false,-1, 19,0);
        vcdp->declBus(c+1793,"Phpa_Test apb_decoder io_input_PSEL", false,-1, 0,0);
        vcdp->declBit(c+313,"Phpa_Test apb_decoder io_input_PENABLE", false,-1);
        vcdp->declBit(c+65,"Phpa_Test apb_decoder io_input_PREADY", false,-1);
        vcdp->declBit(c+1,"Phpa_Test apb_decoder io_input_PWRITE", false,-1);
        vcdp->declBus(c+1457,"Phpa_Test apb_decoder io_input_PWDATA", false,-1, 15,0);
        vcdp->declBus(c+73,"Phpa_Test apb_decoder io_input_PRDATA", false,-1, 15,0);
        vcdp->declBit(c+81,"Phpa_Test apb_decoder io_input_PSLVERROR", false,-1);
        vcdp->declBus(c+1785,"Phpa_Test apb_decoder io_output_PADDR", false,-1, 19,0);
        vcdp->declBus(c+89,"Phpa_Test apb_decoder io_output_PSEL", false,-1, 6,0);
        vcdp->declBit(c+313,"Phpa_Test apb_decoder io_output_PENABLE", false,-1);
        vcdp->declBit(c+1833,"Phpa_Test apb_decoder io_output_PREADY", false,-1);
        vcdp->declBit(c+1,"Phpa_Test apb_decoder io_output_PWRITE", false,-1);
        vcdp->declBus(c+1457,"Phpa_Test apb_decoder io_output_PWDATA", false,-1, 15,0);
        vcdp->declBus(c+73,"Phpa_Test apb_decoder io_output_PRDATA", false,-1, 15,0);
        vcdp->declBit(c+1841,"Phpa_Test apb_decoder io_output_PSLVERROR", false,-1);
        vcdp->declBit(c+193,"Phpa_Test apb_decoder when_Apb3Decoder_l84", false,-1);
        vcdp->declBus(c+1785,"Phpa_Test apb3Router_1 io_input_PADDR", false,-1, 19,0);
        vcdp->declBus(c+89,"Phpa_Test apb3Router_1 io_input_PSEL", false,-1, 6,0);
        vcdp->declBit(c+313,"Phpa_Test apb3Router_1 io_input_PENABLE", false,-1);
        vcdp->declBit(c+1833,"Phpa_Test apb3Router_1 io_input_PREADY", false,-1);
        vcdp->declBit(c+1,"Phpa_Test apb3Router_1 io_input_PWRITE", false,-1);
        vcdp->declBus(c+1457,"Phpa_Test apb3Router_1 io_input_PWDATA", false,-1, 15,0);
        vcdp->declBus(c+73,"Phpa_Test apb3Router_1 io_input_PRDATA", false,-1, 15,0);
        vcdp->declBit(c+1841,"Phpa_Test apb3Router_1 io_input_PSLVERROR", false,-1);
        vcdp->declBus(c+1785,"Phpa_Test apb3Router_1 io_outputs_0_PADDR", false,-1, 19,0);
        vcdp->declBus(c+97,"Phpa_Test apb3Router_1 io_outputs_0_PSEL", false,-1, 0,0);
        vcdp->declBit(c+313,"Phpa_Test apb3Router_1 io_outputs_0_PENABLE", false,-1);
        vcdp->declBit(c+1809,"Phpa_Test apb3Router_1 io_outputs_0_PREADY", false,-1);
        vcdp->declBit(c+1,"Phpa_Test apb3Router_1 io_outputs_0_PWRITE", false,-1);
        vcdp->declBus(c+1457,"Phpa_Test apb3Router_1 io_outputs_0_PWDATA", false,-1, 15,0);
        vcdp->declBus(c+9,"Phpa_Test apb3Router_1 io_outputs_0_PRDATA", false,-1, 15,0);
        vcdp->declBit(c+1817,"Phpa_Test apb3Router_1 io_outputs_0_PSLVERROR", false,-1);
        vcdp->declBus(c+1785,"Phpa_Test apb3Router_1 io_outputs_1_PADDR", false,-1, 19,0);
        vcdp->declBus(c+105,"Phpa_Test apb3Router_1 io_outputs_1_PSEL", false,-1, 0,0);
        vcdp->declBit(c+313,"Phpa_Test apb3Router_1 io_outputs_1_PENABLE", false,-1);
        vcdp->declBit(c+1809,"Phpa_Test apb3Router_1 io_outputs_1_PREADY", false,-1);
        vcdp->declBit(c+1,"Phpa_Test apb3Router_1 io_outputs_1_PWRITE", false,-1);
        vcdp->declBus(c+1457,"Phpa_Test apb3Router_1 io_outputs_1_PWDATA", false,-1, 15,0);
        vcdp->declBus(c+17,"Phpa_Test apb3Router_1 io_outputs_1_PRDATA", false,-1, 15,0);
        vcdp->declBit(c+1817,"Phpa_Test apb3Router_1 io_outputs_1_PSLVERROR", false,-1);
        vcdp->declBus(c+1785,"Phpa_Test apb3Router_1 io_outputs_2_PADDR", false,-1, 19,0);
        vcdp->declBus(c+113,"Phpa_Test apb3Router_1 io_outputs_2_PSEL", false,-1, 0,0);
        vcdp->declBit(c+313,"Phpa_Test apb3Router_1 io_outputs_2_PENABLE", false,-1);
        vcdp->declBit(c+1809,"Phpa_Test apb3Router_1 io_outputs_2_PREADY", false,-1);
        vcdp->declBit(c+1,"Phpa_Test apb3Router_1 io_outputs_2_PWRITE", false,-1);
        vcdp->declBus(c+1457,"Phpa_Test apb3Router_1 io_outputs_2_PWDATA", false,-1, 15,0);
        vcdp->declBus(c+25,"Phpa_Test apb3Router_1 io_outputs_2_PRDATA", false,-1, 15,0);
        vcdp->declBit(c+1817,"Phpa_Test apb3Router_1 io_outputs_2_PSLVERROR", false,-1);
        vcdp->declBus(c+1785,"Phpa_Test apb3Router_1 io_outputs_3_PADDR", false,-1, 19,0);
        vcdp->declBus(c+121,"Phpa_Test apb3Router_1 io_outputs_3_PSEL", false,-1, 0,0);
        vcdp->declBit(c+313,"Phpa_Test apb3Router_1 io_outputs_3_PENABLE", false,-1);
        vcdp->declBit(c+1809,"Phpa_Test apb3Router_1 io_outputs_3_PREADY", false,-1);
        vcdp->declBit(c+1,"Phpa_Test apb3Router_1 io_outputs_3_PWRITE", false,-1);
        vcdp->declBus(c+1457,"Phpa_Test apb3Router_1 io_outputs_3_PWDATA", false,-1, 15,0);
        vcdp->declBus(c+33,"Phpa_Test apb3Router_1 io_outputs_3_PRDATA", false,-1, 15,0);
        vcdp->declBit(c+1817,"Phpa_Test apb3Router_1 io_outputs_3_PSLVERROR", false,-1);
        vcdp->declBus(c+1785,"Phpa_Test apb3Router_1 io_outputs_4_PADDR", false,-1, 19,0);
        vcdp->declBus(c+129,"Phpa_Test apb3Router_1 io_outputs_4_PSEL", false,-1, 0,0);
        vcdp->declBit(c+313,"Phpa_Test apb3Router_1 io_outputs_4_PENABLE", false,-1);
        vcdp->declBit(c+1809,"Phpa_Test apb3Router_1 io_outputs_4_PREADY", false,-1);
        vcdp->declBit(c+1,"Phpa_Test apb3Router_1 io_outputs_4_PWRITE", false,-1);
        vcdp->declBus(c+1457,"Phpa_Test apb3Router_1 io_outputs_4_PWDATA", false,-1, 15,0);
        vcdp->declBus(c+41,"Phpa_Test apb3Router_1 io_outputs_4_PRDATA", false,-1, 15,0);
        vcdp->declBit(c+1817,"Phpa_Test apb3Router_1 io_outputs_4_PSLVERROR", false,-1);
        vcdp->declBus(c+1785,"Phpa_Test apb3Router_1 io_outputs_5_PADDR", false,-1, 19,0);
        vcdp->declBus(c+137,"Phpa_Test apb3Router_1 io_outputs_5_PSEL", false,-1, 0,0);
        vcdp->declBit(c+313,"Phpa_Test apb3Router_1 io_outputs_5_PENABLE", false,-1);
        vcdp->declBit(c+1809,"Phpa_Test apb3Router_1 io_outputs_5_PREADY", false,-1);
        vcdp->declBit(c+1,"Phpa_Test apb3Router_1 io_outputs_5_PWRITE", false,-1);
        vcdp->declBus(c+1457,"Phpa_Test apb3Router_1 io_outputs_5_PWDATA", false,-1, 15,0);
        vcdp->declBus(c+49,"Phpa_Test apb3Router_1 io_outputs_5_PRDATA", false,-1, 15,0);
        vcdp->declBit(c+1817,"Phpa_Test apb3Router_1 io_outputs_5_PSLVERROR", false,-1);
        vcdp->declBus(c+1785,"Phpa_Test apb3Router_1 io_outputs_6_PADDR", false,-1, 19,0);
        vcdp->declBus(c+145,"Phpa_Test apb3Router_1 io_outputs_6_PSEL", false,-1, 0,0);
        vcdp->declBit(c+313,"Phpa_Test apb3Router_1 io_outputs_6_PENABLE", false,-1);
        vcdp->declBit(c+1809,"Phpa_Test apb3Router_1 io_outputs_6_PREADY", false,-1);
        vcdp->declBit(c+1,"Phpa_Test apb3Router_1 io_outputs_6_PWRITE", false,-1);
        vcdp->declBus(c+1457,"Phpa_Test apb3Router_1 io_outputs_6_PWDATA", false,-1, 15,0);
        vcdp->declBus(c+57,"Phpa_Test apb3Router_1 io_outputs_6_PRDATA", false,-1, 15,0);
        vcdp->declBit(c+1817,"Phpa_Test apb3Router_1 io_outputs_6_PSLVERROR", false,-1);
        vcdp->declBit(c+1745,"Phpa_Test apb3Router_1 clk", false,-1);
        vcdp->declBit(c+1753,"Phpa_Test apb3Router_1 reset", false,-1);
        vcdp->declBus(c+465,"Phpa_Test apb3Router_1 selIndex", false,-1, 2,0);
    }
}

void VPhpa_Test::traceFullThis__1(VPhpa_Test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPhpa_Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(c+1,(vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PWRITE));
        vcdp->fullBus(c+9,(vlTOPp->Phpa_Test__DOT__area_apbtimer_apb_PRDATA),16);
        vcdp->fullBus(c+17,(vlTOPp->Phpa_Test__DOT__area_ad5544_triger_apb_PRDATA),16);
        vcdp->fullBus(c+25,(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl_apb_PRDATA),16);
        vcdp->fullBus(c+33,(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl_apb_PRDATA),16);
        vcdp->fullBus(c+41,(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl_apb_PRDATA),16);
        vcdp->fullBus(c+49,(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl_apb_PRDATA),16);
        vcdp->fullBus(c+57,(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl_apb_PRDATA),16);
        vcdp->fullBit(c+65,(vlTOPp->Phpa_Test__DOT__apb_decoder_io_input_PREADY));
        vcdp->fullBus(c+73,(vlTOPp->Phpa_Test__DOT__apb3Router_1__DOT___zz_io_input_PRDATA),16);
        vcdp->fullBit(c+81,(vlTOPp->Phpa_Test__DOT__apb_decoder_io_input_PSLVERROR));
        vcdp->fullBus(c+89,(vlTOPp->Phpa_Test__DOT__apb_decoder_io_output_PSEL),7);
        vcdp->fullBit(c+97,((1U & (IData)(vlTOPp->Phpa_Test__DOT__apb_decoder_io_output_PSEL))));
        vcdp->fullBit(c+105,((1U & ((IData)(vlTOPp->Phpa_Test__DOT__apb_decoder_io_output_PSEL) 
                                    >> 1U))));
        vcdp->fullBit(c+113,((1U & ((IData)(vlTOPp->Phpa_Test__DOT__apb_decoder_io_output_PSEL) 
                                    >> 2U))));
        vcdp->fullBit(c+121,((1U & ((IData)(vlTOPp->Phpa_Test__DOT__apb_decoder_io_output_PSEL) 
                                    >> 3U))));
        vcdp->fullBit(c+129,((1U & ((IData)(vlTOPp->Phpa_Test__DOT__apb_decoder_io_output_PSEL) 
                                    >> 4U))));
        vcdp->fullBit(c+137,((1U & ((IData)(vlTOPp->Phpa_Test__DOT__apb_decoder_io_output_PSEL) 
                                    >> 5U))));
        vcdp->fullBit(c+145,((1U & ((IData)(vlTOPp->Phpa_Test__DOT__apb_decoder_io_output_PSEL) 
                                    >> 6U))));
        vcdp->fullBit(c+153,(vlTOPp->Phpa_Test__DOT__area_apbtimer__DOT__area_busCtrl_doWrite));
        vcdp->fullBit(c+161,(vlTOPp->Phpa_Test__DOT__area_ad5544_triger__DOT__when_AD5544_l91));
        vcdp->fullBit(c+169,(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ctrl_doWrite));
        vcdp->fullBit(c+177,(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ctrl_doWrite));
        vcdp->fullBit(c+185,(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ctrl_doWrite));
        vcdp->fullBit(c+193,(vlTOPp->Phpa_Test__DOT__apb_decoder__DOT__when_Apb3Decoder_l84));
        vcdp->fullBit(c+201,((((IData)(vlTOPp->Phpa_Test__DOT__apb_decoder_io_output_PSEL) 
                               & (IData)(vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PENABLE)) 
                              & (IData)(vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PWRITE))));
        vcdp->fullBit(c+209,((((IData)(vlTOPp->Phpa_Test__DOT__apb_decoder_io_output_PSEL) 
                               & (IData)(vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PENABLE)) 
                              & (~ (IData)(vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PWRITE)))));
        vcdp->fullBit(c+217,(((((IData)(vlTOPp->Phpa_Test__DOT__apb_decoder_io_output_PSEL) 
                                >> 1U) & (IData)(vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PENABLE)) 
                              & (IData)(vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PWRITE))));
        vcdp->fullBit(c+225,(((((IData)(vlTOPp->Phpa_Test__DOT__apb_decoder_io_output_PSEL) 
                                >> 1U) & (IData)(vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PENABLE)) 
                              & (~ (IData)(vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PWRITE)))));
        vcdp->fullBit(c+233,(((((IData)(vlTOPp->Phpa_Test__DOT__apb_decoder_io_output_PSEL) 
                                >> 2U) & (IData)(vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PENABLE)) 
                              & (IData)(vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PWRITE))));
        vcdp->fullBit(c+241,(((((IData)(vlTOPp->Phpa_Test__DOT__apb_decoder_io_output_PSEL) 
                                >> 2U) & (IData)(vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PENABLE)) 
                              & (~ (IData)(vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PWRITE)))));
        vcdp->fullBit(c+249,(((((IData)(vlTOPp->Phpa_Test__DOT__apb_decoder_io_output_PSEL) 
                                >> 3U) & (IData)(vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PENABLE)) 
                              & (IData)(vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PWRITE))));
        vcdp->fullBit(c+257,(((((IData)(vlTOPp->Phpa_Test__DOT__apb_decoder_io_output_PSEL) 
                                >> 3U) & (IData)(vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PENABLE)) 
                              & (~ (IData)(vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PWRITE)))));
        vcdp->fullBit(c+265,(((((IData)(vlTOPp->Phpa_Test__DOT__apb_decoder_io_output_PSEL) 
                                >> 4U) & (IData)(vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PENABLE)) 
                              & (IData)(vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PWRITE))));
        vcdp->fullBit(c+273,(((((IData)(vlTOPp->Phpa_Test__DOT__apb_decoder_io_output_PSEL) 
                                >> 4U) & (IData)(vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PENABLE)) 
                              & (~ (IData)(vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PWRITE)))));
        vcdp->fullBit(c+281,(((((IData)(vlTOPp->Phpa_Test__DOT__apb_decoder_io_output_PSEL) 
                                >> 5U) & (IData)(vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PENABLE)) 
                              & (IData)(vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PWRITE))));
        vcdp->fullBit(c+289,(((((IData)(vlTOPp->Phpa_Test__DOT__apb_decoder_io_output_PSEL) 
                                >> 5U) & (IData)(vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PENABLE)) 
                              & (~ (IData)(vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PWRITE)))));
        vcdp->fullBit(c+297,(((((IData)(vlTOPp->Phpa_Test__DOT__apb_decoder_io_output_PSEL) 
                                >> 6U) & (IData)(vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PENABLE)) 
                              & (IData)(vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PWRITE))));
        vcdp->fullBit(c+305,(((((IData)(vlTOPp->Phpa_Test__DOT__apb_decoder_io_output_PSEL) 
                                >> 6U) & (IData)(vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PENABLE)) 
                              & (~ (IData)(vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PWRITE)))));
        vcdp->fullBit(c+313,(vlTOPp->Phpa_Test__DOT__area_emif_interface_apb_PENABLE));
        vcdp->fullBit(c+321,(vlTOPp->Phpa_Test__DOT__area_counter_willClear));
        vcdp->fullBus(c+329,(vlTOPp->Phpa_Test__DOT__area_counter_valueNext),26);
        vcdp->fullBit(c+337,(vlTOPp->Phpa_Test__DOT__area_apbtimer__DOT__when_ApbTimer_l38));
        vcdp->fullBit(c+345,(vlTOPp->Phpa_Test__DOT__area_apbtimer__DOT__when_ApbTimer_l38));
        vcdp->fullBit(c+353,(vlTOPp->Phpa_Test__DOT__area_apbtimer__DOT__area_timerA__DOT__limitHit));
        vcdp->fullBus(c+361,(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__next_state),7);
        vcdp->fullBus(c+369,(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__next_state),7);
        vcdp->fullBus(c+377,(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__next_state),7);
        vcdp->fullBit(c+385,(((IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_triger_ad5544_tri) 
                              | (IData)(vlTOPp->Phpa_Test__DOT__area_interrupt_temp))));
        vcdp->fullBit(c+393,(vlTOPp->Phpa_Test__DOT__area_ad5544_triger_ad5544_tri));
        vcdp->fullBit(c+401,(vlTOPp->Phpa_Test__DOT__area_apbtimer__DOT__area_timerA_io_full));
        vcdp->fullBus(c+409,(vlTOPp->Phpa_Test__DOT__area_emif_interface__DOT__apb_PRDATA_regNextWhen),16);
        vcdp->fullBit(c+417,(vlTOPp->Phpa_Test__DOT__area_emif_interface__DOT__penable_regNext));
        vcdp->fullBus(c+425,(vlTOPp->Phpa_Test__DOT__area_apbtimer__DOT__area_timerA__DOT__counter),16);
        vcdp->fullBus(c+433,(vlTOPp->Phpa_Test__DOT__area_apbtimer__DOT__area_timerA_io_limit_driver),16);
        vcdp->fullBit(c+441,(vlTOPp->Phpa_Test__DOT__area_ad5544_triger__DOT__area_temp_delay_1));
        vcdp->fullBit(c+449,(vlTOPp->Phpa_Test__DOT__area_ad5544_triger__DOT__area_temp_delay_2));
        vcdp->fullBit(c+457,(vlTOPp->Phpa_Test__DOT__area_ad5544_triger__DOT__area_temp_delay_3));
        vcdp->fullBus(c+465,(vlTOPp->Phpa_Test__DOT__apb3Router_1__DOT__selIndex),3);
        vcdp->fullBit(c+473,(vlTOPp->Phpa_Test__DOT__area_ledtemp));
        vcdp->fullBus(c+481,(vlTOPp->Phpa_Test__DOT__area_counter_value),26);
        vcdp->fullBit(c+489,((0x2faf07fU == vlTOPp->Phpa_Test__DOT__area_counter_value)));
        vcdp->fullBit(c+497,(vlTOPp->Phpa_Test__DOT__area_emif_interface__DOT__penable));
        vcdp->fullBit(c+505,(vlTOPp->Phpa_Test__DOT__area_apbtimer__DOT__area_timerA__DOT__inhibitFull));
        vcdp->fullBit(c+513,(vlTOPp->Phpa_Test__DOT__area_ad5544_triger__DOT__area_temp));
        vcdp->fullBit(c+521,(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out));
        vcdp->fullBus(c+529,(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_dvidecnt),4);
        vcdp->fullBit(c+537,(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out));
        vcdp->fullBus(c+545,(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_dvidecnt),4);
        vcdp->fullBit(c+553,(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_out));
        vcdp->fullBus(c+561,(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__clk_dvidecnt),4);
        vcdp->fullBus(c+569,(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_pos_reg),32);
        vcdp->fullBus(c+577,(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_status_reg),16);
        vcdp->fullBit(c+585,(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__clk_out));
        vcdp->fullBus(c+593,(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__clk_dvidecnt),4);
        vcdp->fullBus(c+601,(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_data_temp_1),16);
        vcdp->fullBus(c+609,(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_data_temp_2),16);
        vcdp->fullBus(c+617,(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_data_temp_3),16);
        vcdp->fullBus(c+625,(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_data_temp_4),16);
        vcdp->fullBus(c+633,(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_data_temp_5),16);
        vcdp->fullBus(c+641,(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_data_temp_6),16);
        vcdp->fullBus(c+649,(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_data_temp_7),16);
        vcdp->fullBus(c+657,(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_data_temp_8),16);
        vcdp->fullBit(c+665,(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_cs));
        vcdp->fullBit(c+673,(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_rd));
        vcdp->fullBit(c+681,(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_reset));
        vcdp->fullBit(c+689,(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_convsta));
        vcdp->fullBit(c+697,(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_convstb));
        vcdp->fullBit(c+705,(vlTOPp->Phpa_Test__DOT__area_apbtimer__DOT___zz_io_tick));
        vcdp->fullBus(c+713,(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_ch1_o),16);
        vcdp->fullBus(c+721,(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_ch2_o),16);
        vcdp->fullBus(c+729,(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_ch3_o),16);
        vcdp->fullBus(c+737,(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_ch4_o),16);
        vcdp->fullBus(c+745,(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_ch5_o),16);
        vcdp->fullBus(c+753,(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_ch6_o),16);
        vcdp->fullBus(c+761,(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_ch7_o),16);
        vcdp->fullBus(c+769,(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_ch8_o),16);
        vcdp->fullBit(c+777,(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl_ad_data_valid_o));
        vcdp->fullBus(c+785,(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__cnt),8);
        vcdp->fullBus(c+793,(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__i),8);
        vcdp->fullBus(c+801,(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__cnt5us),16);
        vcdp->fullBus(c+809,(vlTOPp->Phpa_Test__DOT__area_ad7606_ctrl__DOT__area_ad7606_ctrl__DOT__ad_state),8);
        vcdp->fullBit(c+817,(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl_enc_clk));
        vcdp->fullQuad(c+825,(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl_enc_position_all),41);
        vcdp->fullBus(c+841,(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl_enc_position_out),32);
        vcdp->fullBit(c+849,(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl_erro_flag));
        vcdp->fullBit(c+857,(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl_warn_flag));
        vcdp->fullBit(c+865,((1U & (IData)(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT____Vcellout__area_bissc_ctrl__crc_flag))));
        vcdp->fullBus(c+873,(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT____Vcellout__area_bissc_ctrl__crc_flag),6);
        vcdp->fullBus(c+881,(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__CNT),12);
        vcdp->fullBus(c+889,(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__DATA_CNT),12);
        vcdp->fullBus(c+897,(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__start_flag),2);
        vcdp->fullBus(c+905,(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__Curr_State),8);
        vcdp->fullBit(c+913,(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_CS));
        vcdp->fullBit(c+921,(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC));
        vcdp->fullBit(c+929,(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_RS));
        vcdp->fullBit(c+937,(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK));
        vcdp->fullBit(c+945,(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN));
        vcdp->fullBus(c+953,(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt),10);
        vcdp->fullBus(c+961,(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg),18);
        vcdp->fullBus(c+969,(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__channel),4);
        vcdp->fullBus(c+977,(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state),7);
        vcdp->fullBit(c+985,(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__ad5544_trig_reg1));
        vcdp->fullBit(c+993,(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__ad5544_trig_reg2));
        vcdp->fullBit(c+1001,(((IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__ad5544_trig_reg1) 
                               & (~ (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl__DOT__ad5544_trig_reg2)))));
        vcdp->fullBit(c+1009,(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_CS));
        vcdp->fullBit(c+1017,(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC));
        vcdp->fullBit(c+1025,(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_RS));
        vcdp->fullBit(c+1033,(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK));
        vcdp->fullBit(c+1041,(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN));
        vcdp->fullBus(c+1049,(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt),10);
        vcdp->fullBus(c+1057,(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg),18);
        vcdp->fullBus(c+1065,(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__channel),4);
        vcdp->fullBus(c+1073,(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state),7);
        vcdp->fullBit(c+1081,(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__ad5544_trig_reg1));
        vcdp->fullBit(c+1089,(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__ad5544_trig_reg2));
        vcdp->fullBit(c+1097,(((IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__ad5544_trig_reg1) 
                               & (~ (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl__DOT__ad5544_trig_reg2)))));
        vcdp->fullBit(c+1105,(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_CS));
        vcdp->fullBit(c+1113,(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_LDAC));
        vcdp->fullBit(c+1121,(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_RS));
        vcdp->fullBit(c+1129,(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_SCLK));
        vcdp->fullBit(c+1137,(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_SDIN));
        vcdp->fullBus(c+1145,(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__cnt),10);
        vcdp->fullBus(c+1153,(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__AD5544_SDIN_reg),18);
        vcdp->fullBus(c+1161,(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__channel),4);
        vcdp->fullBus(c+1169,(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__curr_state),7);
        vcdp->fullBit(c+1177,(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__ad5544_trig_reg1));
        vcdp->fullBit(c+1185,(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__ad5544_trig_reg2));
        vcdp->fullBit(c+1193,(((IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__ad5544_trig_reg1) 
                               & (~ (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl__DOT__ad5544_trig_reg2)))));
        vcdp->fullBit(c+1201,(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__ENC_SLO_1reg));
        vcdp->fullBit(c+1209,(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__ENC_SLO_2reg));
        vcdp->fullBit(c+1217,(((~ (IData)(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__ENC_SLO_1reg)) 
                               & (IData)(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__ENC_SLO_2reg))));
        vcdp->fullBus(c+1225,(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN1_driver),16);
        vcdp->fullBus(c+1233,(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN2_driver),16);
        vcdp->fullBus(c+1241,(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN3_driver),16);
        vcdp->fullBus(c+1249,(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN4_driver),16);
        vcdp->fullBus(c+1257,(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN1_driver),18);
        vcdp->fullBus(c+1265,((0x10000U | (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN2_driver))),18);
        vcdp->fullBus(c+1273,((0x20000U | (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN3_driver))),18);
        vcdp->fullBus(c+1281,((0x30000U | (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_A_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN4_driver))),18);
        vcdp->fullBus(c+1289,(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN1_driver),16);
        vcdp->fullBus(c+1297,(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN2_driver),16);
        vcdp->fullBus(c+1305,(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN3_driver),16);
        vcdp->fullBus(c+1313,(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN4_driver),16);
        vcdp->fullBus(c+1321,(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN1_driver),18);
        vcdp->fullBus(c+1329,((0x10000U | (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN2_driver))),18);
        vcdp->fullBus(c+1337,((0x20000U | (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN3_driver))),18);
        vcdp->fullBus(c+1345,((0x30000U | (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_B_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN4_driver))),18);
        vcdp->fullBus(c+1353,(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN1_driver),16);
        vcdp->fullBus(c+1361,(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN2_driver),16);
        vcdp->fullBus(c+1369,(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN3_driver),16);
    }
}

void VPhpa_Test::traceFullThis__20(VPhpa_Test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPhpa_Test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBus(c+1377,(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN4_driver),16);
        vcdp->fullBus(c+1385,(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN1_driver),18);
        vcdp->fullBus(c+1393,((0x10000U | (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN2_driver))),18);
        vcdp->fullBus(c+1401,((0x20000U | (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN3_driver))),18);
        vcdp->fullBus(c+1409,((0x30000U | (IData)(vlTOPp->Phpa_Test__DOT__area_ad5544_C_Ctrl__DOT__area_ad5544_ctrl_AD5544_DATA_IN4_driver))),18);
        vcdp->fullBit(c+1417,(vlTOPp->Phpa_Test__DOT__area_interrupt_temp));
        vcdp->fullBit(c+1425,(vlTOPp->Phpa_Test__DOT__area_apbtimer_interrupt_delay_1));
        vcdp->fullBit(c+1433,(vlTOPp->Phpa_Test__DOT__area_apbtimer_interrupt_delay_2));
        vcdp->fullBit(c+1441,(vlTOPp->Phpa_Test__DOT__area_apbtimer_interrupt_delay_3));
        vcdp->fullBus(c+1449,(vlTOPp->emif_emif_addr),20);
        vcdp->fullBus(c+1457,(vlTOPp->emif_emif_data_read),16);
        vcdp->fullBus(c+1465,(vlTOPp->emif_emif_data_write),16);
        vcdp->fullBit(c+1473,(vlTOPp->emif_emif_data_writeEnable));
        vcdp->fullBit(c+1481,(vlTOPp->emif_emif_cs));
        vcdp->fullBit(c+1489,(vlTOPp->emif_emif_we));
        vcdp->fullBit(c+1497,(vlTOPp->emif_emif_oe));
        vcdp->fullBit(c+1505,(vlTOPp->ad5544_A_AD5544_CS));
        vcdp->fullBit(c+1513,(vlTOPp->ad5544_A_AD5544_LDAC));
        vcdp->fullBit(c+1521,(vlTOPp->ad5544_A_AD5544_MSB));
        vcdp->fullBit(c+1529,(vlTOPp->ad5544_A_AD5544_RS));
        vcdp->fullBit(c+1537,(vlTOPp->ad5544_A_AD5544_SCLK));
        vcdp->fullBit(c+1545,(vlTOPp->ad5544_A_AD5544_SDIN));
        vcdp->fullBit(c+1553,(vlTOPp->ad5544_B_AD5544_CS));
        vcdp->fullBit(c+1561,(vlTOPp->ad5544_B_AD5544_LDAC));
        vcdp->fullBit(c+1569,(vlTOPp->ad5544_B_AD5544_MSB));
        vcdp->fullBit(c+1577,(vlTOPp->ad5544_B_AD5544_RS));
        vcdp->fullBit(c+1585,(vlTOPp->ad5544_B_AD5544_SCLK));
        vcdp->fullBit(c+1593,(vlTOPp->ad5544_B_AD5544_SDIN));
        vcdp->fullBit(c+1601,(vlTOPp->ad5544_C_AD5544_CS));
        vcdp->fullBit(c+1609,(vlTOPp->ad5544_C_AD5544_LDAC));
        vcdp->fullBit(c+1617,(vlTOPp->ad5544_C_AD5544_MSB));
        vcdp->fullBit(c+1625,(vlTOPp->ad5544_C_AD5544_RS));
        vcdp->fullBit(c+1633,(vlTOPp->ad5544_C_AD5544_SCLK));
        vcdp->fullBit(c+1641,(vlTOPp->ad5544_C_AD5544_SDIN));
        vcdp->fullBit(c+1649,(vlTOPp->biss_c_enc_clk));
        vcdp->fullBit(c+1657,(vlTOPp->biss_c_enc_data));
        vcdp->fullBus(c+1665,(vlTOPp->ad7606_ad_data),16);
        vcdp->fullBit(c+1673,(vlTOPp->ad7606_ad_busy));
        vcdp->fullBit(c+1681,(vlTOPp->ad7606_first_data));
        vcdp->fullBus(c+1689,(vlTOPp->ad7606_ad_os),3);
        vcdp->fullBit(c+1697,(vlTOPp->ad7606_ad_cs));
        vcdp->fullBit(c+1705,(vlTOPp->ad7606_ad_rd));
        vcdp->fullBit(c+1713,(vlTOPp->ad7606_ad_reset));
        vcdp->fullBit(c+1721,(vlTOPp->ad7606_ad_convsta));
        vcdp->fullBit(c+1729,(vlTOPp->ad7606_ad_convstb));
        vcdp->fullBit(c+1737,(vlTOPp->ad7606_ad_range));
        vcdp->fullBit(c+1745,(vlTOPp->clk));
        vcdp->fullBit(c+1753,(vlTOPp->reset));
        vcdp->fullBit(c+1761,(vlTOPp->led));
        vcdp->fullBus(c+1769,((0xfU & (vlTOPp->emif_emif_addr 
                                       << 1U))),4);
        vcdp->fullBit(c+1777,((1U & (~ (IData)(vlTOPp->emif_emif_oe)))));
        vcdp->fullBus(c+1785,((0xfffffU & (vlTOPp->emif_emif_addr 
                                           << 1U))),20);
        vcdp->fullBit(c+1793,((1U & (~ (IData)(vlTOPp->emif_emif_cs)))));
        vcdp->fullBus(c+1801,(((1U == (IData)(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__Curr_State))
                                ? 2U : ((2U == (IData)(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__Curr_State))
                                         ? ((IData)(vlTOPp->biss_c_enc_data)
                                             ? 4U : 2U)
                                         : ((4U == (IData)(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__Curr_State))
                                             ? ((0x64U 
                                                 <= (IData)(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__CNT))
                                                 ? 8U
                                                 : 4U)
                                             : ((8U 
                                                 == (IData)(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__Curr_State))
                                                 ? 
                                                ((0x29U 
                                                  <= (IData)(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__DATA_CNT))
                                                  ? 0x10U
                                                  : 8U)
                                                 : 
                                                ((0x10U 
                                                  == (IData)(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__Curr_State))
                                                  ? 0x20U
                                                  : 
                                                 ((0x20U 
                                                   == (IData)(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__Curr_State))
                                                   ? 
                                                  (((IData)(vlTOPp->biss_c_enc_data) 
                                                    & (0x7d0U 
                                                       <= (IData)(vlTOPp->Phpa_Test__DOT__area_biss_c_ctrl__DOT__area_bissc_ctrl__DOT__CNT)))
                                                    ? 2U
                                                    : 0x20U)
                                                   : 1U))))))),8);
        vcdp->fullBit(c+1809,(1U));
        vcdp->fullBit(c+1817,(0U));
        vcdp->fullBus(c+1825,(0U),3);
        vcdp->fullBit(c+1833,(1U));
        vcdp->fullBit(c+1841,(0U));
        vcdp->fullBus(c+1849,(1U),7);
        vcdp->fullBus(c+1857,(2U),7);
        vcdp->fullBus(c+1865,(4U),7);
        vcdp->fullBus(c+1873,(8U),7);
        vcdp->fullBus(c+1881,(0x10U),7);
        vcdp->fullBus(c+1889,(0x20U),7);
        vcdp->fullBus(c+1897,(0x40U),7);
        vcdp->fullBus(c+1905,(1U),8);
        vcdp->fullBus(c+1913,(2U),8);
        vcdp->fullBus(c+1921,(4U),8);
        vcdp->fullBus(c+1929,(8U),8);
        vcdp->fullBus(c+1937,(0x10U),8);
        vcdp->fullBus(c+1945,(0x20U),8);
    }
}
