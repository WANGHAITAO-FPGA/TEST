// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VEmif_Ctrl_test__Syms.h"


//======================

void VEmif_Ctrl_test::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VEmif_Ctrl_test::traceInit, &VEmif_Ctrl_test::traceFull, &VEmif_Ctrl_test::traceChg, this);
}
void VEmif_Ctrl_test::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VEmif_Ctrl_test* t = (VEmif_Ctrl_test*)userthis;
    VEmif_Ctrl_test__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VEmif_Ctrl_test::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VEmif_Ctrl_test* t = (VEmif_Ctrl_test*)userthis;
    VEmif_Ctrl_test__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VEmif_Ctrl_test::traceInitThis(VEmif_Ctrl_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VEmif_Ctrl_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VEmif_Ctrl_test::traceFullThis(VEmif_Ctrl_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VEmif_Ctrl_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
        vlTOPp->traceFullThis__15(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VEmif_Ctrl_test::traceInitThis__1(VEmif_Ctrl_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VEmif_Ctrl_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+1369,"top_emif_emif_addr", false,-1, 31,0);
        vcdp->declBus(c+1377,"top_emif_emif_data_read", false,-1, 31,0);
        vcdp->declBus(c+1385,"top_emif_emif_data_write", false,-1, 31,0);
        vcdp->declBit(c+1393,"top_emif_emif_data_writeEnable", false,-1);
        vcdp->declBit(c+1401,"top_emif_emif_cs", false,-1);
        vcdp->declBit(c+1409,"top_emif_emif_we", false,-1);
        vcdp->declBit(c+1417,"top_emif_emif_oe", false,-1);
        vcdp->declBus(c+1425,"top_gpioA_read", false,-1, 15,0);
        vcdp->declBus(c+1433,"top_gpioA_write", false,-1, 15,0);
        vcdp->declBus(c+1441,"top_gpioA_writeEnable", false,-1, 15,0);
        vcdp->declBit(c+1449,"clk", false,-1);
        vcdp->declBit(c+1457,"reset", false,-1);
        vcdp->declBus(c+1369,"Emif_Ctrl_test top_emif_emif_addr", false,-1, 31,0);
        vcdp->declBus(c+1377,"Emif_Ctrl_test top_emif_emif_data_read", false,-1, 31,0);
        vcdp->declBus(c+1385,"Emif_Ctrl_test top_emif_emif_data_write", false,-1, 31,0);
        vcdp->declBit(c+1393,"Emif_Ctrl_test top_emif_emif_data_writeEnable", false,-1);
        vcdp->declBit(c+1401,"Emif_Ctrl_test top_emif_emif_cs", false,-1);
        vcdp->declBit(c+1409,"Emif_Ctrl_test top_emif_emif_we", false,-1);
        vcdp->declBit(c+1417,"Emif_Ctrl_test top_emif_emif_oe", false,-1);
        vcdp->declBus(c+1425,"Emif_Ctrl_test top_gpioA_read", false,-1, 15,0);
        vcdp->declBus(c+1433,"Emif_Ctrl_test top_gpioA_write", false,-1, 15,0);
        vcdp->declBus(c+1441,"Emif_Ctrl_test top_gpioA_writeEnable", false,-1, 15,0);
        vcdp->declBit(c+1449,"Emif_Ctrl_test clk", false,-1);
        vcdp->declBit(c+1457,"Emif_Ctrl_test reset", false,-1);
        vcdp->declBus(c+625,"Emif_Ctrl_test area_emif_Ctrl_emif_emif_data_write", false,-1, 31,0);
        vcdp->declBit(c+1465,"Emif_Ctrl_test area_emif_Ctrl_emif_emif_data_writeEnable", false,-1);
        vcdp->declBus(c+633,"Emif_Ctrl_test area_emif_Ctrl_gpioA_write", false,-1, 15,0);
        vcdp->declBus(c+993,"Emif_Ctrl_test area_emif_Ctrl_gpioA_writeEnable", false,-1, 15,0);
        vcdp->declBit(c+1001,"Emif_Ctrl_test area_emif_Ctrl_uart_txd", false,-1);
        vcdp->declBit(c+1001,"Emif_Ctrl_test area_temp", false,-1);
        vcdp->declBit(c+641,"Emif_Ctrl_test area_tt", false,-1);
        vcdp->declBus(c+1369,"Emif_Ctrl_test area_emif_Ctrl emif_emif_addr", false,-1, 31,0);
        vcdp->declBus(c+1377,"Emif_Ctrl_test area_emif_Ctrl emif_emif_data_read", false,-1, 31,0);
        vcdp->declBus(c+625,"Emif_Ctrl_test area_emif_Ctrl emif_emif_data_write", false,-1, 31,0);
        vcdp->declBit(c+1465,"Emif_Ctrl_test area_emif_Ctrl emif_emif_data_writeEnable", false,-1);
        vcdp->declBit(c+1401,"Emif_Ctrl_test area_emif_Ctrl emif_emif_cs", false,-1);
        vcdp->declBit(c+1409,"Emif_Ctrl_test area_emif_Ctrl emif_emif_we", false,-1);
        vcdp->declBit(c+1417,"Emif_Ctrl_test area_emif_Ctrl emif_emif_oe", false,-1);
        vcdp->declBus(c+1425,"Emif_Ctrl_test area_emif_Ctrl gpioA_read", false,-1, 15,0);
        vcdp->declBus(c+633,"Emif_Ctrl_test area_emif_Ctrl gpioA_write", false,-1, 15,0);
        vcdp->declBus(c+993,"Emif_Ctrl_test area_emif_Ctrl gpioA_writeEnable", false,-1, 15,0);
        vcdp->declBit(c+1001,"Emif_Ctrl_test area_emif_Ctrl uart_txd", false,-1);
        vcdp->declBit(c+1001,"Emif_Ctrl_test area_emif_Ctrl uart_rxd", false,-1);
        vcdp->declBit(c+1449,"Emif_Ctrl_test area_emif_Ctrl clk", false,-1);
        vcdp->declBit(c+1457,"Emif_Ctrl_test area_emif_Ctrl reset", false,-1);
        vcdp->declBus(c+1473,"Emif_Ctrl_test area_emif_Ctrl area_gpioACtrl_io_apb_PADDR", false,-1, 3,0);
        vcdp->declBus(c+1481,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl_io_apb_PADDR", false,-1, 4,0);
        vcdp->declBus(c+625,"Emif_Ctrl_test area_emif_Ctrl area_emif_interface_emif_emif_data_write", false,-1, 31,0);
        vcdp->declBit(c+1465,"Emif_Ctrl_test area_emif_Ctrl area_emif_interface_emif_emif_data_writeEnable", false,-1);
        vcdp->declBus(c+1369,"Emif_Ctrl_test area_emif_Ctrl area_emif_interface_apb_PADDR", false,-1, 31,0);
        vcdp->declBus(c+1489,"Emif_Ctrl_test area_emif_Ctrl area_emif_interface_apb_PSEL", false,-1, 0,0);
        vcdp->declBit(c+273,"Emif_Ctrl_test area_emif_Ctrl area_emif_interface_apb_PENABLE", false,-1);
        vcdp->declBit(c+1,"Emif_Ctrl_test area_emif_Ctrl area_emif_interface_apb_PWRITE", false,-1);
        vcdp->declBus(c+1377,"Emif_Ctrl_test area_emif_Ctrl area_emif_interface_apb_PWDATA", false,-1, 31,0);
        vcdp->declBit(c+1545,"Emif_Ctrl_test area_emif_Ctrl area_gpioACtrl_io_apb_PREADY", false,-1);
        vcdp->declBus(c+9,"Emif_Ctrl_test area_emif_Ctrl area_gpioACtrl_io_apb_PRDATA", false,-1, 31,0);
        vcdp->declBit(c+1553,"Emif_Ctrl_test area_emif_Ctrl area_gpioACtrl_io_apb_PSLVERROR", false,-1);
        vcdp->declBus(c+633,"Emif_Ctrl_test area_emif_Ctrl area_gpioACtrl_io_gpio_write", false,-1, 15,0);
        vcdp->declBus(c+993,"Emif_Ctrl_test area_emif_Ctrl area_gpioACtrl_io_gpio_writeEnable", false,-1, 15,0);
        vcdp->declBus(c+649,"Emif_Ctrl_test area_emif_Ctrl area_gpioACtrl_io_value", false,-1, 15,0);
        vcdp->declBit(c+1545,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl_io_apb_PREADY", false,-1);
        vcdp->declBus(c+17,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl_io_apb_PRDATA", false,-1, 31,0);
        vcdp->declBit(c+1001,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl_io_uart_txd", false,-1);
        vcdp->declBit(c+521,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl_io_interrupt", false,-1);
        vcdp->declBit(c+25,"Emif_Ctrl_test area_emif_Ctrl apb_decoder_io_input_PREADY", false,-1);
        vcdp->declBus(c+33,"Emif_Ctrl_test area_emif_Ctrl apb_decoder_io_input_PRDATA", false,-1, 31,0);
        vcdp->declBit(c+41,"Emif_Ctrl_test area_emif_Ctrl apb_decoder_io_input_PSLVERROR", false,-1);
        vcdp->declBus(c+1369,"Emif_Ctrl_test area_emif_Ctrl apb_decoder_io_output_PADDR", false,-1, 31,0);
        vcdp->declBus(c+49,"Emif_Ctrl_test area_emif_Ctrl apb_decoder_io_output_PSEL", false,-1, 1,0);
        vcdp->declBit(c+273,"Emif_Ctrl_test area_emif_Ctrl apb_decoder_io_output_PENABLE", false,-1);
        vcdp->declBit(c+1,"Emif_Ctrl_test area_emif_Ctrl apb_decoder_io_output_PWRITE", false,-1);
        vcdp->declBus(c+1377,"Emif_Ctrl_test area_emif_Ctrl apb_decoder_io_output_PWDATA", false,-1, 31,0);
        vcdp->declBit(c+1561,"Emif_Ctrl_test area_emif_Ctrl apb3Router_1_io_input_PREADY", false,-1);
        vcdp->declBus(c+33,"Emif_Ctrl_test area_emif_Ctrl apb3Router_1_io_input_PRDATA", false,-1, 31,0);
        vcdp->declBit(c+1553,"Emif_Ctrl_test area_emif_Ctrl apb3Router_1_io_input_PSLVERROR", false,-1);
        vcdp->declBus(c+1369,"Emif_Ctrl_test area_emif_Ctrl apb3Router_1_io_outputs_0_PADDR", false,-1, 31,0);
        vcdp->declBus(c+57,"Emif_Ctrl_test area_emif_Ctrl apb3Router_1_io_outputs_0_PSEL", false,-1, 0,0);
        vcdp->declBit(c+273,"Emif_Ctrl_test area_emif_Ctrl apb3Router_1_io_outputs_0_PENABLE", false,-1);
        vcdp->declBit(c+1,"Emif_Ctrl_test area_emif_Ctrl apb3Router_1_io_outputs_0_PWRITE", false,-1);
        vcdp->declBus(c+1377,"Emif_Ctrl_test area_emif_Ctrl apb3Router_1_io_outputs_0_PWDATA", false,-1, 31,0);
        vcdp->declBus(c+1369,"Emif_Ctrl_test area_emif_Ctrl apb3Router_1_io_outputs_1_PADDR", false,-1, 31,0);
        vcdp->declBus(c+65,"Emif_Ctrl_test area_emif_Ctrl apb3Router_1_io_outputs_1_PSEL", false,-1, 0,0);
        vcdp->declBit(c+273,"Emif_Ctrl_test area_emif_Ctrl apb3Router_1_io_outputs_1_PENABLE", false,-1);
        vcdp->declBit(c+1,"Emif_Ctrl_test area_emif_Ctrl apb3Router_1_io_outputs_1_PWRITE", false,-1);
        vcdp->declBus(c+1377,"Emif_Ctrl_test area_emif_Ctrl apb3Router_1_io_outputs_1_PWDATA", false,-1, 31,0);
        vcdp->declBus(c+1369,"Emif_Ctrl_test area_emif_Ctrl area_emif_interface emif_emif_addr", false,-1, 31,0);
        vcdp->declBus(c+1377,"Emif_Ctrl_test area_emif_Ctrl area_emif_interface emif_emif_data_read", false,-1, 31,0);
        vcdp->declBus(c+625,"Emif_Ctrl_test area_emif_Ctrl area_emif_interface emif_emif_data_write", false,-1, 31,0);
        vcdp->declBit(c+1465,"Emif_Ctrl_test area_emif_Ctrl area_emif_interface emif_emif_data_writeEnable", false,-1);
        vcdp->declBit(c+1401,"Emif_Ctrl_test area_emif_Ctrl area_emif_interface emif_emif_cs", false,-1);
        vcdp->declBit(c+1409,"Emif_Ctrl_test area_emif_Ctrl area_emif_interface emif_emif_we", false,-1);
        vcdp->declBit(c+1417,"Emif_Ctrl_test area_emif_Ctrl area_emif_interface emif_emif_oe", false,-1);
        vcdp->declBus(c+1369,"Emif_Ctrl_test area_emif_Ctrl area_emif_interface apb_PADDR", false,-1, 31,0);
        vcdp->declBus(c+1489,"Emif_Ctrl_test area_emif_Ctrl area_emif_interface apb_PSEL", false,-1, 0,0);
        vcdp->declBit(c+273,"Emif_Ctrl_test area_emif_Ctrl area_emif_interface apb_PENABLE", false,-1);
        vcdp->declBit(c+25,"Emif_Ctrl_test area_emif_Ctrl area_emif_interface apb_PREADY", false,-1);
        vcdp->declBit(c+1,"Emif_Ctrl_test area_emif_Ctrl area_emif_interface apb_PWRITE", false,-1);
        vcdp->declBus(c+1377,"Emif_Ctrl_test area_emif_Ctrl area_emif_interface apb_PWDATA", false,-1, 31,0);
        vcdp->declBus(c+33,"Emif_Ctrl_test area_emif_Ctrl area_emif_interface apb_PRDATA", false,-1, 31,0);
        vcdp->declBit(c+41,"Emif_Ctrl_test area_emif_Ctrl area_emif_interface apb_PSLVERROR", false,-1);
        vcdp->declBit(c+1449,"Emif_Ctrl_test area_emif_Ctrl area_emif_interface clk", false,-1);
        vcdp->declBit(c+1457,"Emif_Ctrl_test area_emif_Ctrl area_emif_interface reset", false,-1);
        vcdp->declBit(c+1009,"Emif_Ctrl_test area_emif_Ctrl area_emif_interface penable", false,-1);
        vcdp->declBit(c+657,"Emif_Ctrl_test area_emif_Ctrl area_emif_interface penable_regNext", false,-1);
        vcdp->declBit(c+1465,"Emif_Ctrl_test area_emif_Ctrl area_emif_interface when_Emif_Ctrl_l71", false,-1);
        vcdp->declBus(c+625,"Emif_Ctrl_test area_emif_Ctrl area_emif_interface apb_PRDATA_regNextWhen", false,-1, 31,0);
        vcdp->declBus(c+1473,"Emif_Ctrl_test area_emif_Ctrl area_gpioACtrl io_apb_PADDR", false,-1, 3,0);
        vcdp->declBus(c+57,"Emif_Ctrl_test area_emif_Ctrl area_gpioACtrl io_apb_PSEL", false,-1, 0,0);
        vcdp->declBit(c+273,"Emif_Ctrl_test area_emif_Ctrl area_gpioACtrl io_apb_PENABLE", false,-1);
        vcdp->declBit(c+1545,"Emif_Ctrl_test area_emif_Ctrl area_gpioACtrl io_apb_PREADY", false,-1);
        vcdp->declBit(c+1,"Emif_Ctrl_test area_emif_Ctrl area_gpioACtrl io_apb_PWRITE", false,-1);
        vcdp->declBus(c+1377,"Emif_Ctrl_test area_emif_Ctrl area_gpioACtrl io_apb_PWDATA", false,-1, 31,0);
        vcdp->declBus(c+9,"Emif_Ctrl_test area_emif_Ctrl area_gpioACtrl io_apb_PRDATA", false,-1, 31,0);
        vcdp->declBit(c+1553,"Emif_Ctrl_test area_emif_Ctrl area_gpioACtrl io_apb_PSLVERROR", false,-1);
        vcdp->declBus(c+1425,"Emif_Ctrl_test area_emif_Ctrl area_gpioACtrl io_gpio_read", false,-1, 15,0);
        vcdp->declBus(c+633,"Emif_Ctrl_test area_emif_Ctrl area_gpioACtrl io_gpio_write", false,-1, 15,0);
        vcdp->declBus(c+993,"Emif_Ctrl_test area_emif_Ctrl area_gpioACtrl io_gpio_writeEnable", false,-1, 15,0);
        vcdp->declBus(c+649,"Emif_Ctrl_test area_emif_Ctrl area_gpioACtrl io_value", false,-1, 15,0);
        vcdp->declBit(c+1449,"Emif_Ctrl_test area_emif_Ctrl area_gpioACtrl clk", false,-1);
        vcdp->declBit(c+1457,"Emif_Ctrl_test area_emif_Ctrl area_gpioACtrl reset", false,-1);
        vcdp->declBus(c+649,"Emif_Ctrl_test area_emif_Ctrl area_gpioACtrl io_gpio_read_buffercc_io_dataOut", false,-1, 15,0);
        vcdp->declBit(c+209,"Emif_Ctrl_test area_emif_Ctrl area_gpioACtrl ctrl_askWrite", false,-1);
        vcdp->declBit(c+217,"Emif_Ctrl_test area_emif_Ctrl area_gpioACtrl ctrl_askRead", false,-1);
        vcdp->declBit(c+73,"Emif_Ctrl_test area_emif_Ctrl area_gpioACtrl ctrl_doWrite", false,-1);
        vcdp->declBit(c+217,"Emif_Ctrl_test area_emif_Ctrl area_gpioACtrl ctrl_doRead", false,-1);
        vcdp->declBus(c+633,"Emif_Ctrl_test area_emif_Ctrl area_gpioACtrl io_gpio_write_driver", false,-1, 15,0);
        vcdp->declBus(c+993,"Emif_Ctrl_test area_emif_Ctrl area_gpioACtrl io_gpio_writeEnable_driver", false,-1, 15,0);
        vcdp->declBus(c+1425,"Emif_Ctrl_test area_emif_Ctrl area_gpioACtrl io_gpio_read_buffercc io_dataIn", false,-1, 15,0);
        vcdp->declBus(c+649,"Emif_Ctrl_test area_emif_Ctrl area_gpioACtrl io_gpio_read_buffercc io_dataOut", false,-1, 15,0);
        vcdp->declBit(c+1449,"Emif_Ctrl_test area_emif_Ctrl area_gpioACtrl io_gpio_read_buffercc clk", false,-1);
        vcdp->declBit(c+1457,"Emif_Ctrl_test area_emif_Ctrl area_gpioACtrl io_gpio_read_buffercc reset", false,-1);
        vcdp->declBus(c+665,"Emif_Ctrl_test area_emif_Ctrl area_gpioACtrl io_gpio_read_buffercc buffers_0", false,-1, 15,0);
        vcdp->declBus(c+649,"Emif_Ctrl_test area_emif_Ctrl area_gpioACtrl io_gpio_read_buffercc buffers_1", false,-1, 15,0);
        vcdp->declBus(c+1481,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl io_apb_PADDR", false,-1, 4,0);
        vcdp->declBus(c+65,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl io_apb_PSEL", false,-1, 0,0);
        vcdp->declBit(c+273,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl io_apb_PENABLE", false,-1);
        vcdp->declBit(c+1545,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl io_apb_PREADY", false,-1);
        vcdp->declBit(c+1,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl io_apb_PWRITE", false,-1);
        vcdp->declBus(c+1377,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl io_apb_PWDATA", false,-1, 31,0);
        vcdp->declBus(c+17,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl io_apb_PRDATA", false,-1, 31,0);
        vcdp->declBit(c+1001,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl io_uart_txd", false,-1);
        vcdp->declBit(c+1001,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl io_uart_rxd", false,-1);
        vcdp->declBit(c+521,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl io_interrupt", false,-1);
        vcdp->declBit(c+1449,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl clk", false,-1);
        vcdp->declBit(c+1457,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl reset", false,-1);
        vcdp->declBit(c+81,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1_io_read_queueWithOccupancy_io_pop_ready", false,-1);
        vcdp->declBit(c+545,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1_io_write_ready", false,-1);
        vcdp->declBit(c+1017,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1_io_read_valid", false,-1);
        vcdp->declBus(c+673,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1_io_read_payload", false,-1, 7,0);
        vcdp->declBit(c+1001,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1_io_uart_txd", false,-1);
        vcdp->declBit(c+281,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1_io_readError", false,-1);
        vcdp->declBit(c+1353,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1_io_readBreak", false,-1);
        vcdp->declBit(c+289,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl bridge_write_streamUnbuffered_queueWithOccupancy_io_push_ready", false,-1);
        vcdp->declBit(c+297,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl bridge_write_streamUnbuffered_queueWithOccupancy_io_pop_valid", false,-1);
        vcdp->declBus(c+681,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl bridge_write_streamUnbuffered_queueWithOccupancy_io_pop_payload", false,-1, 7,0);
        vcdp->declBus(c+305,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl bridge_write_streamUnbuffered_queueWithOccupancy_io_occupancy", false,-1, 4,0);
        vcdp->declBus(c+313,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl bridge_write_streamUnbuffered_queueWithOccupancy_io_availability", false,-1, 4,0);
        vcdp->declBit(c+321,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1_io_read_queueWithOccupancy_io_push_ready", false,-1);
        vcdp->declBit(c+329,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1_io_read_queueWithOccupancy_io_pop_valid", false,-1);
        vcdp->declBus(c+689,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1_io_read_queueWithOccupancy_io_pop_payload", false,-1, 7,0);
        vcdp->declBus(c+337,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1_io_read_queueWithOccupancy_io_occupancy", false,-1, 4,0);
        vcdp->declBus(c+345,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1_io_read_queueWithOccupancy_io_availability", false,-1, 4,0);
        vcdp->declBit(c+225,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl busCtrl_askWrite", false,-1);
        vcdp->declBit(c+233,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl busCtrl_askRead", false,-1);
        vcdp->declBit(c+89,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl busCtrl_doWrite", false,-1);
        vcdp->declBit(c+233,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl busCtrl_doRead", false,-1);
        vcdp->declBus(c+1569,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl bridge_uartConfigReg_frame_dataLength", false,-1, 2,0);
        vcdp->declBus(c+1553,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl bridge_uartConfigReg_frame_stop", false,-1, 0,0);
        vcdp->declBus(c+1577,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl bridge_uartConfigReg_frame_parity", false,-1, 1,0);
        vcdp->declBus(c+1585,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl bridge_uartConfigReg_clockDivider", false,-1, 19,0);
        vcdp->declBit(c+97,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl bridge_write_streamUnbuffered_valid", false,-1);
        vcdp->declBit(c+289,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl bridge_write_streamUnbuffered_ready", false,-1);
        vcdp->declBus(c+1497,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl bridge_write_streamUnbuffered_payload", false,-1, 7,0);
        vcdp->declBit(c+553,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl bridge_read_streamBreaked_valid", false,-1);
        vcdp->declBit(c+105,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl bridge_read_streamBreaked_ready", false,-1);
        vcdp->declBus(c+689,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl bridge_read_streamBreaked_payload", false,-1, 7,0);
        vcdp->declBit(c+1025,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl bridge_interruptCtrl_writeIntEnable", false,-1);
        vcdp->declBit(c+1033,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl bridge_interruptCtrl_readIntEnable", false,-1);
        vcdp->declBit(c+561,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl bridge_interruptCtrl_readInt", false,-1);
        vcdp->declBit(c+353,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl bridge_interruptCtrl_writeInt", false,-1);
        vcdp->declBit(c+521,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl bridge_interruptCtrl_interrupt", false,-1);
        vcdp->declBit(c+1041,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl bridge_misc_readError", false,-1);
        vcdp->declBit(c+113,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl when_BusSlaveFactory_l335", false,-1);
        vcdp->declBit(c+1505,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl when_BusSlaveFactory_l337", false,-1);
        vcdp->declBit(c+1049,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl bridge_misc_readOverflowError", false,-1);
        vcdp->declBit(c+121,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl when_BusSlaveFactory_l335_1", false,-1);
        vcdp->declBit(c+1513,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl when_BusSlaveFactory_l337_1", false,-1);
        vcdp->declBit(c+361,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1_io_read_isStall", false,-1);
        vcdp->declBit(c+1057,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl bridge_misc_breakDetected", false,-1);
        vcdp->declBit(c+1289,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1_io_readBreak_regNext", false,-1);
        vcdp->declBit(c+1345,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl when_UartCtrl_l154", false,-1);
        vcdp->declBit(c+129,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl when_BusSlaveFactory_l335_2", false,-1);
        vcdp->declBit(c+1521,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl when_BusSlaveFactory_l337_2", false,-1);
        vcdp->declBit(c+1065,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl bridge_misc_doBreak", false,-1);
        vcdp->declBit(c+137,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl when_BusSlaveFactory_l366", false,-1);
        vcdp->declBit(c+1529,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl when_BusSlaveFactory_l368", false,-1);
        vcdp->declBit(c+145,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl when_BusSlaveFactory_l335_3", false,-1);
        vcdp->declBit(c+1537,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl when_BusSlaveFactory_l337_3", false,-1);
        vcdp->declBus(c+1593,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl bridge_uartConfigReg_frame_stop_string", false,-1, 23,0);
        vcdp->declBus(c+1601,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl bridge_uartConfigReg_frame_parity_string", false,-1, 31,0);
        vcdp->declBus(c+1569,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 io_config_frame_dataLength", false,-1, 2,0);
        vcdp->declBus(c+1553,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 io_config_frame_stop", false,-1, 0,0);
        vcdp->declBus(c+1577,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 io_config_frame_parity", false,-1, 1,0);
        vcdp->declBus(c+1585,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 io_config_clockDivider", false,-1, 19,0);
        vcdp->declBit(c+297,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 io_write_valid", false,-1);
        vcdp->declBit(c+545,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 io_write_ready", false,-1);
        vcdp->declBus(c+681,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 io_write_payload", false,-1, 7,0);
        vcdp->declBit(c+1017,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 io_read_valid", false,-1);
        vcdp->declBit(c+321,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 io_read_ready", false,-1);
        vcdp->declBus(c+673,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 io_read_payload", false,-1, 7,0);
        vcdp->declBit(c+1001,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 io_uart_txd", false,-1);
        vcdp->declBit(c+1001,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 io_uart_rxd", false,-1);
        vcdp->declBit(c+281,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 io_readError", false,-1);
        vcdp->declBit(c+1065,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 io_writeBreak", false,-1);
        vcdp->declBit(c+1353,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 io_readBreak", false,-1);
        vcdp->declBit(c+1449,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 clk", false,-1);
        vcdp->declBit(c+1457,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 reset", false,-1);
        vcdp->declBit(c+569,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 tx_io_write_ready", false,-1);
        vcdp->declBit(c+1001,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 tx_io_txd", false,-1);
        vcdp->declBit(c+1017,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 rx_io_read_valid", false,-1);
        vcdp->declBus(c+673,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 rx_io_read_payload", false,-1, 7,0);
        vcdp->declBit(c+1073,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 rx_io_rts", false,-1);
        vcdp->declBit(c+281,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 rx_io_error", false,-1);
        vcdp->declBit(c+1353,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 rx_io_break", false,-1);
        vcdp->declBus(c+1081,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 clockDivider_counter", false,-1, 19,0);
        vcdp->declBit(c+1089,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 clockDivider_tick", false,-1);
        vcdp->declBit(c+577,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 io_write_thrown_valid", false,-1);
        vcdp->declBit(c+569,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 io_write_thrown_ready", false,-1);
        vcdp->declBus(c+681,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 io_write_thrown_payload", false,-1, 7,0);
        vcdp->declBus(c+1593,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 io_config_frame_stop_string", false,-1, 23,0);
        vcdp->declBus(c+1601,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 io_config_frame_parity_string", false,-1, 31,0);
        vcdp->declBus(c+1569,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 tx io_configFrame_dataLength", false,-1, 2,0);
        vcdp->declBus(c+1553,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 tx io_configFrame_stop", false,-1, 0,0);
        vcdp->declBus(c+1577,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 tx io_configFrame_parity", false,-1, 1,0);
        vcdp->declBit(c+1089,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 tx io_samplingTick", false,-1);
        vcdp->declBit(c+577,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 tx io_write_valid", false,-1);
        vcdp->declBit(c+569,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 tx io_write_ready", false,-1);
        vcdp->declBus(c+681,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 tx io_write_payload", false,-1, 7,0);
        vcdp->declBit(c+1553,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 tx io_cts", false,-1);
        vcdp->declBit(c+1001,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 tx io_txd", false,-1);
        vcdp->declBit(c+1065,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 tx io_break", false,-1);
        vcdp->declBit(c+1449,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 tx clk", false,-1);
        vcdp->declBit(c+1457,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 tx reset", false,-1);
        vcdp->declBit(c+369,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 tx clockDivider_counter_willIncrement", false,-1);
        vcdp->declBit(c+1553,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 tx clockDivider_counter_willClear", false,-1);
        vcdp->declBus(c+377,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 tx clockDivider_counter_valueNext", false,-1, 2,0);
        vcdp->declBus(c+1097,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 tx clockDivider_counter_value", false,-1, 2,0);
        vcdp->declBit(c+1105,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 tx clockDivider_counter_willOverflowIfInc", false,-1);
        vcdp->declBit(c+385,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 tx clockDivider_counter_willOverflow", false,-1);
        vcdp->declBus(c+1297,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 tx tickCounter_value", false,-1, 2,0);
        vcdp->declBus(c+1113,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 tx stateMachine_state", false,-1, 2,0);
        vcdp->declBit(c+697,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 tx stateMachine_parity", false,-1);
        vcdp->declBit(c+585,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 tx stateMachine_txd", false,-1);
        vcdp->declBit(c+529,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 tx when_UartCtrlTx_l58", false,-1);
        vcdp->declBit(c+1305,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 tx when_UartCtrlTx_l73", false,-1);
        vcdp->declBit(c+1545,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 tx when_UartCtrlTx_l76", false,-1);
        vcdp->declBit(c+1313,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 tx when_UartCtrlTx_l93", false,-1);
        vcdp->declBus(c+1593,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 tx io_configFrame_stop_string", false,-1, 23,0);
        vcdp->declBus(c+1601,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 tx io_configFrame_parity_string", false,-1, 31,0);
        vcdp->declQuad(c+393,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 tx stateMachine_state_string", false,-1, 47,0);
        vcdp->declBus(c+1569,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 rx io_configFrame_dataLength", false,-1, 2,0);
        vcdp->declBus(c+1553,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 rx io_configFrame_stop", false,-1, 0,0);
        vcdp->declBus(c+1577,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 rx io_configFrame_parity", false,-1, 1,0);
        vcdp->declBit(c+1089,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 rx io_samplingTick", false,-1);
        vcdp->declBit(c+1017,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 rx io_read_valid", false,-1);
        vcdp->declBit(c+321,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 rx io_read_ready", false,-1);
        vcdp->declBus(c+673,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 rx io_read_payload", false,-1, 7,0);
        vcdp->declBit(c+1001,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 rx io_rxd", false,-1);
        vcdp->declBit(c+1073,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 rx io_rts", false,-1);
        vcdp->declBit(c+281,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 rx io_error", false,-1);
        vcdp->declBit(c+1353,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 rx io_break", false,-1);
        vcdp->declBit(c+1449,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 rx clk", false,-1);
        vcdp->declBit(c+1457,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 rx reset", false,-1);
        vcdp->declBit(c+1121,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 rx io_rxd_buffercc_io_dataOut", false,-1);
        vcdp->declBit(c+1121,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 rx sampler_synchroniser", false,-1);
        vcdp->declBit(c+1121,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 rx sampler_samples_0", false,-1);
        vcdp->declBit(c+1129,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 rx sampler_samples_1", false,-1);
        vcdp->declBit(c+1137,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 rx sampler_samples_2", false,-1);
        vcdp->declBit(c+1145,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 rx sampler_value", false,-1);
        vcdp->declBit(c+1153,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 rx sampler_tick", false,-1);
        vcdp->declBus(c+705,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 rx bitTimer_counter", false,-1, 2,0);
        vcdp->declBit(c+409,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 rx bitTimer_tick", false,-1);
        vcdp->declBit(c+713,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 rx when_UartCtrlRx_l43", false,-1);
        vcdp->declBus(c+1321,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 rx bitCounter_value", false,-1, 2,0);
        vcdp->declBus(c+1361,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 rx break_counter", false,-1, 6,0);
        vcdp->declBit(c+1353,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 rx break_valid", false,-1);
        vcdp->declBit(c+1281,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 rx when_UartCtrlRx_l69", false,-1);
        vcdp->declBus(c+1161,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 rx stateMachine_state", false,-1, 2,0);
        vcdp->declBit(c+721,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 rx stateMachine_parity", false,-1);
        vcdp->declBus(c+673,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 rx stateMachine_shifter", false,-1, 7,0);
        vcdp->declBit(c+1017,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 rx stateMachine_validReg", false,-1);
        vcdp->declBit(c+593,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 rx when_UartCtrlRx_l93", false,-1);
        vcdp->declBit(c+1145,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 rx when_UartCtrlRx_l103", false,-1);
        vcdp->declBit(c+1329,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 rx when_UartCtrlRx_l111", false,-1);
        vcdp->declBit(c+1545,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 rx when_UartCtrlRx_l113", false,-1);
        vcdp->declBit(c+417,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 rx when_UartCtrlRx_l125", false,-1);
        vcdp->declBit(c+1169,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 rx when_UartCtrlRx_l136", false,-1);
        vcdp->declBit(c+1337,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 rx when_UartCtrlRx_l139", false,-1);
        vcdp->declBus(c+1593,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 rx io_configFrame_stop_string", false,-1, 23,0);
        vcdp->declBus(c+1601,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 rx io_configFrame_parity_string", false,-1, 31,0);
        vcdp->declQuad(c+425,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 rx stateMachine_state_string", false,-1, 47,0);
        vcdp->declBit(c+1001,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 rx io_rxd_buffercc io_dataIn", false,-1);
        vcdp->declBit(c+1121,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 rx io_rxd_buffercc io_dataOut", false,-1);
        vcdp->declBit(c+1449,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 rx io_rxd_buffercc clk", false,-1);
        vcdp->declBit(c+1457,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 rx io_rxd_buffercc reset", false,-1);
        vcdp->declBit(c+1177,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 rx io_rxd_buffercc buffers_0", false,-1);
        vcdp->declBit(c+1121,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1 rx io_rxd_buffercc buffers_1", false,-1);
        vcdp->declBit(c+97,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl bridge_write_streamUnbuffered_queueWithOccupancy io_push_valid", false,-1);
        vcdp->declBit(c+289,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl bridge_write_streamUnbuffered_queueWithOccupancy io_push_ready", false,-1);
        vcdp->declBus(c+1497,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl bridge_write_streamUnbuffered_queueWithOccupancy io_push_payload", false,-1, 7,0);
        vcdp->declBit(c+297,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl bridge_write_streamUnbuffered_queueWithOccupancy io_pop_valid", false,-1);
        vcdp->declBit(c+545,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl bridge_write_streamUnbuffered_queueWithOccupancy io_pop_ready", false,-1);
        vcdp->declBus(c+681,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl bridge_write_streamUnbuffered_queueWithOccupancy io_pop_payload", false,-1, 7,0);
        vcdp->declBit(c+1553,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl bridge_write_streamUnbuffered_queueWithOccupancy io_flush", false,-1);
        vcdp->declBus(c+305,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl bridge_write_streamUnbuffered_queueWithOccupancy io_occupancy", false,-1, 4,0);
        vcdp->declBus(c+313,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl bridge_write_streamUnbuffered_queueWithOccupancy io_availability", false,-1, 4,0);
        vcdp->declBit(c+1449,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl bridge_write_streamUnbuffered_queueWithOccupancy clk", false,-1);
        vcdp->declBit(c+1457,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl bridge_write_streamUnbuffered_queueWithOccupancy reset", false,-1);
        vcdp->declBit(c+153,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl bridge_write_streamUnbuffered_queueWithOccupancy logic_pushPtr_willIncrement", false,-1);
        vcdp->declBit(c+1553,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl bridge_write_streamUnbuffered_queueWithOccupancy logic_pushPtr_willClear", false,-1);
        vcdp->declBus(c+161,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl bridge_write_streamUnbuffered_queueWithOccupancy logic_pushPtr_valueNext", false,-1, 3,0);
        vcdp->declBus(c+1185,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl bridge_write_streamUnbuffered_queueWithOccupancy logic_pushPtr_value", false,-1, 3,0);
        vcdp->declBit(c+1193,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl bridge_write_streamUnbuffered_queueWithOccupancy logic_pushPtr_willOverflowIfInc", false,-1);
        vcdp->declBit(c+241,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl bridge_write_streamUnbuffered_queueWithOccupancy logic_pushPtr_willOverflow", false,-1);
        vcdp->declBit(c+601,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl bridge_write_streamUnbuffered_queueWithOccupancy logic_popPtr_willIncrement", false,-1);
        vcdp->declBit(c+1553,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl bridge_write_streamUnbuffered_queueWithOccupancy logic_popPtr_willClear", false,-1);
        vcdp->declBus(c+609,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl bridge_write_streamUnbuffered_queueWithOccupancy logic_popPtr_valueNext", false,-1, 3,0);
        vcdp->declBus(c+1201,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl bridge_write_streamUnbuffered_queueWithOccupancy logic_popPtr_value", false,-1, 3,0);
        vcdp->declBit(c+1209,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl bridge_write_streamUnbuffered_queueWithOccupancy logic_popPtr_willOverflowIfInc", false,-1);
        vcdp->declBit(c+537,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl bridge_write_streamUnbuffered_queueWithOccupancy logic_popPtr_willOverflow", false,-1);
        vcdp->declBit(c+441,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl bridge_write_streamUnbuffered_queueWithOccupancy logic_ptrMatch", false,-1);
        vcdp->declBit(c+1217,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl bridge_write_streamUnbuffered_queueWithOccupancy logic_risingOccupancy", false,-1);
        vcdp->declBit(c+169,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl bridge_write_streamUnbuffered_queueWithOccupancy logic_pushing", false,-1);
        vcdp->declBit(c+617,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl bridge_write_streamUnbuffered_queueWithOccupancy logic_popping", false,-1);
        vcdp->declBit(c+449,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl bridge_write_streamUnbuffered_queueWithOccupancy logic_empty", false,-1);
        vcdp->declBit(c+457,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl bridge_write_streamUnbuffered_queueWithOccupancy logic_full", false,-1);
        vcdp->declBit(c+265,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl bridge_write_streamUnbuffered_queueWithOccupancy when_Stream_l933", false,-1);
        vcdp->declBus(c+1225,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl bridge_write_streamUnbuffered_queueWithOccupancy logic_ptrDif", false,-1, 3,0);
        {int i; for (i=0; i<16; i++) {
                vcdp->declBus(c+729+i*1,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl bridge_write_streamUnbuffered_queueWithOccupancy logic_ram", true,(i+0), 7,0);}}
        vcdp->declBit(c+1017,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1_io_read_queueWithOccupancy io_push_valid", false,-1);
        vcdp->declBit(c+321,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1_io_read_queueWithOccupancy io_push_ready", false,-1);
        vcdp->declBus(c+673,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1_io_read_queueWithOccupancy io_push_payload", false,-1, 7,0);
        vcdp->declBit(c+329,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1_io_read_queueWithOccupancy io_pop_valid", false,-1);
        vcdp->declBit(c+81,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1_io_read_queueWithOccupancy io_pop_ready", false,-1);
        vcdp->declBus(c+689,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1_io_read_queueWithOccupancy io_pop_payload", false,-1, 7,0);
        vcdp->declBit(c+1553,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1_io_read_queueWithOccupancy io_flush", false,-1);
        vcdp->declBus(c+337,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1_io_read_queueWithOccupancy io_occupancy", false,-1, 4,0);
        vcdp->declBus(c+345,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1_io_read_queueWithOccupancy io_availability", false,-1, 4,0);
        vcdp->declBit(c+1449,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1_io_read_queueWithOccupancy clk", false,-1);
        vcdp->declBit(c+1457,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1_io_read_queueWithOccupancy reset", false,-1);
        vcdp->declBit(c+465,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1_io_read_queueWithOccupancy logic_pushPtr_willIncrement", false,-1);
        vcdp->declBit(c+1553,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1_io_read_queueWithOccupancy logic_pushPtr_willClear", false,-1);
        vcdp->declBus(c+473,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1_io_read_queueWithOccupancy logic_pushPtr_valueNext", false,-1, 3,0);
        vcdp->declBus(c+1233,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1_io_read_queueWithOccupancy logic_pushPtr_value", false,-1, 3,0);
        vcdp->declBit(c+1241,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1_io_read_queueWithOccupancy logic_pushPtr_willOverflowIfInc", false,-1);
        vcdp->declBit(c+481,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1_io_read_queueWithOccupancy logic_pushPtr_willOverflow", false,-1);
        vcdp->declBit(c+177,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1_io_read_queueWithOccupancy logic_popPtr_willIncrement", false,-1);
        vcdp->declBit(c+1553,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1_io_read_queueWithOccupancy logic_popPtr_willClear", false,-1);
        vcdp->declBus(c+185,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1_io_read_queueWithOccupancy logic_popPtr_valueNext", false,-1, 3,0);
        vcdp->declBus(c+1249,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1_io_read_queueWithOccupancy logic_popPtr_value", false,-1, 3,0);
        vcdp->declBit(c+1257,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1_io_read_queueWithOccupancy logic_popPtr_willOverflowIfInc", false,-1);
        vcdp->declBit(c+249,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1_io_read_queueWithOccupancy logic_popPtr_willOverflow", false,-1);
        vcdp->declBit(c+489,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1_io_read_queueWithOccupancy logic_ptrMatch", false,-1);
        vcdp->declBit(c+1265,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1_io_read_queueWithOccupancy logic_risingOccupancy", false,-1);
        vcdp->declBit(c+497,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1_io_read_queueWithOccupancy logic_pushing", false,-1);
        vcdp->declBit(c+193,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1_io_read_queueWithOccupancy logic_popping", false,-1);
        vcdp->declBit(c+505,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1_io_read_queueWithOccupancy logic_empty", false,-1);
        vcdp->declBit(c+513,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1_io_read_queueWithOccupancy logic_full", false,-1);
        vcdp->declBit(c+257,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1_io_read_queueWithOccupancy when_Stream_l933", false,-1);
        vcdp->declBus(c+1273,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1_io_read_queueWithOccupancy logic_ptrDif", false,-1, 3,0);
        {int i; for (i=0; i<16; i++) {
                vcdp->declBus(c+857+i*1,"Emif_Ctrl_test area_emif_Ctrl area_uartCtrl uartCtrl_1_io_read_queueWithOccupancy logic_ram", true,(i+0), 7,0);}}
        vcdp->declBus(c+1369,"Emif_Ctrl_test area_emif_Ctrl apb_decoder io_input_PADDR", false,-1, 31,0);
        vcdp->declBus(c+1489,"Emif_Ctrl_test area_emif_Ctrl apb_decoder io_input_PSEL", false,-1, 0,0);
        vcdp->declBit(c+273,"Emif_Ctrl_test area_emif_Ctrl apb_decoder io_input_PENABLE", false,-1);
        vcdp->declBit(c+25,"Emif_Ctrl_test area_emif_Ctrl apb_decoder io_input_PREADY", false,-1);
        vcdp->declBit(c+1,"Emif_Ctrl_test area_emif_Ctrl apb_decoder io_input_PWRITE", false,-1);
        vcdp->declBus(c+1377,"Emif_Ctrl_test area_emif_Ctrl apb_decoder io_input_PWDATA", false,-1, 31,0);
        vcdp->declBus(c+33,"Emif_Ctrl_test area_emif_Ctrl apb_decoder io_input_PRDATA", false,-1, 31,0);
        vcdp->declBit(c+41,"Emif_Ctrl_test area_emif_Ctrl apb_decoder io_input_PSLVERROR", false,-1);
        vcdp->declBus(c+1369,"Emif_Ctrl_test area_emif_Ctrl apb_decoder io_output_PADDR", false,-1, 31,0);
        vcdp->declBus(c+49,"Emif_Ctrl_test area_emif_Ctrl apb_decoder io_output_PSEL", false,-1, 1,0);
        vcdp->declBit(c+273,"Emif_Ctrl_test area_emif_Ctrl apb_decoder io_output_PENABLE", false,-1);
        vcdp->declBit(c+1561,"Emif_Ctrl_test area_emif_Ctrl apb_decoder io_output_PREADY", false,-1);
        vcdp->declBit(c+1,"Emif_Ctrl_test area_emif_Ctrl apb_decoder io_output_PWRITE", false,-1);
        vcdp->declBus(c+1377,"Emif_Ctrl_test area_emif_Ctrl apb_decoder io_output_PWDATA", false,-1, 31,0);
        vcdp->declBus(c+33,"Emif_Ctrl_test area_emif_Ctrl apb_decoder io_output_PRDATA", false,-1, 31,0);
        vcdp->declBit(c+1553,"Emif_Ctrl_test area_emif_Ctrl apb_decoder io_output_PSLVERROR", false,-1);
        vcdp->declBit(c+201,"Emif_Ctrl_test area_emif_Ctrl apb_decoder when_Apb3Decoder_l84", false,-1);
        vcdp->declBus(c+1369,"Emif_Ctrl_test area_emif_Ctrl apb3Router_1 io_input_PADDR", false,-1, 31,0);
        vcdp->declBus(c+49,"Emif_Ctrl_test area_emif_Ctrl apb3Router_1 io_input_PSEL", false,-1, 1,0);
        vcdp->declBit(c+273,"Emif_Ctrl_test area_emif_Ctrl apb3Router_1 io_input_PENABLE", false,-1);
        vcdp->declBit(c+1561,"Emif_Ctrl_test area_emif_Ctrl apb3Router_1 io_input_PREADY", false,-1);
        vcdp->declBit(c+1,"Emif_Ctrl_test area_emif_Ctrl apb3Router_1 io_input_PWRITE", false,-1);
        vcdp->declBus(c+1377,"Emif_Ctrl_test area_emif_Ctrl apb3Router_1 io_input_PWDATA", false,-1, 31,0);
        vcdp->declBus(c+33,"Emif_Ctrl_test area_emif_Ctrl apb3Router_1 io_input_PRDATA", false,-1, 31,0);
        vcdp->declBit(c+1553,"Emif_Ctrl_test area_emif_Ctrl apb3Router_1 io_input_PSLVERROR", false,-1);
        vcdp->declBus(c+1369,"Emif_Ctrl_test area_emif_Ctrl apb3Router_1 io_outputs_0_PADDR", false,-1, 31,0);
        vcdp->declBus(c+57,"Emif_Ctrl_test area_emif_Ctrl apb3Router_1 io_outputs_0_PSEL", false,-1, 0,0);
        vcdp->declBit(c+273,"Emif_Ctrl_test area_emif_Ctrl apb3Router_1 io_outputs_0_PENABLE", false,-1);
        vcdp->declBit(c+1545,"Emif_Ctrl_test area_emif_Ctrl apb3Router_1 io_outputs_0_PREADY", false,-1);
        vcdp->declBit(c+1,"Emif_Ctrl_test area_emif_Ctrl apb3Router_1 io_outputs_0_PWRITE", false,-1);
        vcdp->declBus(c+1377,"Emif_Ctrl_test area_emif_Ctrl apb3Router_1 io_outputs_0_PWDATA", false,-1, 31,0);
        vcdp->declBus(c+9,"Emif_Ctrl_test area_emif_Ctrl apb3Router_1 io_outputs_0_PRDATA", false,-1, 31,0);
        vcdp->declBit(c+1553,"Emif_Ctrl_test area_emif_Ctrl apb3Router_1 io_outputs_0_PSLVERROR", false,-1);
        vcdp->declBus(c+1369,"Emif_Ctrl_test area_emif_Ctrl apb3Router_1 io_outputs_1_PADDR", false,-1, 31,0);
        vcdp->declBus(c+65,"Emif_Ctrl_test area_emif_Ctrl apb3Router_1 io_outputs_1_PSEL", false,-1, 0,0);
        vcdp->declBit(c+273,"Emif_Ctrl_test area_emif_Ctrl apb3Router_1 io_outputs_1_PENABLE", false,-1);
        vcdp->declBit(c+1545,"Emif_Ctrl_test area_emif_Ctrl apb3Router_1 io_outputs_1_PREADY", false,-1);
        vcdp->declBit(c+1,"Emif_Ctrl_test area_emif_Ctrl apb3Router_1 io_outputs_1_PWRITE", false,-1);
        vcdp->declBus(c+1377,"Emif_Ctrl_test area_emif_Ctrl apb3Router_1 io_outputs_1_PWDATA", false,-1, 31,0);
        vcdp->declBus(c+17,"Emif_Ctrl_test area_emif_Ctrl apb3Router_1 io_outputs_1_PRDATA", false,-1, 31,0);
        vcdp->declBit(c+1553,"Emif_Ctrl_test area_emif_Ctrl apb3Router_1 io_outputs_1_PSLVERROR", false,-1);
        vcdp->declBit(c+1449,"Emif_Ctrl_test area_emif_Ctrl apb3Router_1 clk", false,-1);
        vcdp->declBit(c+1457,"Emif_Ctrl_test area_emif_Ctrl apb3Router_1 reset", false,-1);
        vcdp->declBus(c+985,"Emif_Ctrl_test area_emif_Ctrl apb3Router_1 selIndex", false,-1, 0,0);
    }
}

void VEmif_Ctrl_test::traceFullThis__1(VEmif_Ctrl_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VEmif_Ctrl_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(c+1,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_emif_interface_apb_PWRITE));
        vcdp->fullBus(c+9,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_gpioACtrl_io_apb_PRDATA),32);
        vcdp->fullBus(c+17,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl_io_apb_PRDATA),32);
        vcdp->fullBit(c+25,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__apb_decoder_io_input_PREADY));
        vcdp->fullBus(c+33,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__apb3Router_1__DOT___zz_io_input_PRDATA),32);
        vcdp->fullBit(c+41,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__apb_decoder_io_input_PSLVERROR));
        vcdp->fullBus(c+49,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__apb_decoder_io_output_PSEL),2);
        vcdp->fullBit(c+57,((1U & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__apb_decoder_io_output_PSEL))));
        vcdp->fullBit(c+65,((1U & ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__apb_decoder_io_output_PSEL) 
                                   >> 1U))));
        vcdp->fullBit(c+73,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_gpioACtrl__DOT__ctrl_doWrite));
        vcdp->fullBit(c+81,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy_io_pop_ready));
        vcdp->fullBit(c+89,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__busCtrl_doWrite));
        vcdp->fullBit(c+97,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT___zz_bridge_write_streamUnbuffered_valid));
        vcdp->fullBit(c+105,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_read_streamBreaked_ready));
        vcdp->fullBit(c+113,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__when_BusSlaveFactory_l335));
        vcdp->fullBit(c+121,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__when_BusSlaveFactory_l335_1));
        vcdp->fullBit(c+129,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__when_BusSlaveFactory_l335_2));
        vcdp->fullBit(c+137,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__when_BusSlaveFactory_l366));
        vcdp->fullBit(c+145,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__when_BusSlaveFactory_l335_3));
        vcdp->fullBit(c+153,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushPtr_willIncrement));
        vcdp->fullBus(c+161,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushPtr_valueNext),4);
        vcdp->fullBit(c+169,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushing));
        vcdp->fullBit(c+177,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_popPtr_willIncrement));
        vcdp->fullBus(c+185,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_popPtr_valueNext),4);
        vcdp->fullBit(c+193,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_popping));
        vcdp->fullBit(c+201,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__apb_decoder__DOT__when_Apb3Decoder_l84));
        vcdp->fullBit(c+209,((((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__apb_decoder_io_output_PSEL) 
                               & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_emif_interface_apb_PENABLE)) 
                              & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_emif_interface_apb_PWRITE))));
        vcdp->fullBit(c+217,((((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__apb_decoder_io_output_PSEL) 
                               & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_emif_interface_apb_PENABLE)) 
                              & (~ (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_emif_interface_apb_PWRITE)))));
        vcdp->fullBit(c+225,(((((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__apb_decoder_io_output_PSEL) 
                                >> 1U) & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_emif_interface_apb_PENABLE)) 
                              & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_emif_interface_apb_PWRITE))));
        vcdp->fullBit(c+233,(((((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__apb_decoder_io_output_PSEL) 
                                >> 1U) & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_emif_interface_apb_PENABLE)) 
                              & (~ (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_emif_interface_apb_PWRITE)))));
        vcdp->fullBit(c+241,(((0xfU == (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushPtr_value)) 
                              & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushPtr_willIncrement))));
        vcdp->fullBit(c+249,(((0xfU == (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_popPtr_value)) 
                              & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_popPtr_willIncrement))));
        vcdp->fullBit(c+257,(((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_pushing) 
                              != (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_popping))));
        vcdp->fullBit(c+265,(((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushing) 
                              != (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popping))));
        vcdp->fullBit(c+273,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_emif_interface_apb_PENABLE));
        vcdp->fullBit(c+281,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx_io_error));
        vcdp->fullBit(c+289,((1U & (~ (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_full)))));
        vcdp->fullBit(c+297,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy_io_pop_valid));
        vcdp->fullBus(c+305,(((((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_risingOccupancy) 
                                & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ptrMatch)) 
                               << 4U) | (0xfU & ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushPtr_value) 
                                                 - (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popPtr_value))))),5);
        vcdp->fullBus(c+313,(((((~ (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_risingOccupancy)) 
                                & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ptrMatch)) 
                               << 4U) | (0xfU & ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popPtr_value) 
                                                 - (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushPtr_value))))),5);
        vcdp->fullBit(c+321,((1U & (~ (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_full)))));
        vcdp->fullBit(c+329,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy_io_pop_valid));
        vcdp->fullBus(c+337,(((((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_risingOccupancy) 
                                & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_ptrMatch)) 
                               << 4U) | (0xfU & ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_pushPtr_value) 
                                                 - (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_popPtr_value))))),5);
        vcdp->fullBus(c+345,(((((~ (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_risingOccupancy)) 
                                & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_ptrMatch)) 
                               << 4U) | (0xfU & ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_popPtr_value) 
                                                 - (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_pushPtr_value))))),5);
        vcdp->fullBit(c+353,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_interruptCtrl_writeInt));
        vcdp->fullBit(c+361,(((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_validReg) 
                              & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_full))));
        vcdp->fullBit(c+369,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__clockDivider_counter_willIncrement));
        vcdp->fullBus(c+377,(((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__clockDivider_counter_willOverflow)
                               ? 0U : (7U & ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__clockDivider_counter_value) 
                                             + (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__clockDivider_counter_willIncrement))))),3);
        vcdp->fullBit(c+385,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__clockDivider_counter_willOverflow));
        vcdp->fullQuad(c+393,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__stateMachine_state_string),48);
        vcdp->fullBit(c+409,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__bitTimer_tick));
        vcdp->fullBit(c+417,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__when_UartCtrlRx_l125));
        vcdp->fullQuad(c+425,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_state_string),48);
        vcdp->fullBit(c+441,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ptrMatch));
        vcdp->fullBit(c+449,(((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ptrMatch) 
                              & (~ (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_risingOccupancy)))));
        vcdp->fullBit(c+457,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_full));
        vcdp->fullBit(c+465,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_pushPtr_willIncrement));
        vcdp->fullBus(c+473,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_pushPtr_valueNext),4);
        vcdp->fullBit(c+481,(((0xfU == (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_pushPtr_value)) 
                              & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_pushPtr_willIncrement))));
        vcdp->fullBit(c+489,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_ptrMatch));
        vcdp->fullBit(c+497,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_pushing));
        vcdp->fullBit(c+505,(((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_ptrMatch) 
                              & (~ (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_risingOccupancy)))));
        vcdp->fullBit(c+513,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_full));
        vcdp->fullBit(c+521,(((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_interruptCtrl_readInt) 
                              | (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_interruptCtrl_writeInt))));
        vcdp->fullBit(c+529,(((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__io_write_thrown_valid) 
                              & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__clockDivider_counter_willOverflow))));
        vcdp->fullBit(c+537,(((0xfU == (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popPtr_value)) 
                              & (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popPtr_willIncrement))));
        vcdp->fullBit(c+545,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_write_ready));
        vcdp->fullBit(c+553,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_read_streamBreaked_valid));
        vcdp->fullBit(c+561,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_interruptCtrl_readInt));
        vcdp->fullBit(c+569,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx_io_write_ready));
        vcdp->fullBit(c+577,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__io_write_thrown_valid));
        vcdp->fullBit(c+585,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__stateMachine_txd));
        vcdp->fullBit(c+593,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__when_UartCtrlRx_l93));
        vcdp->fullBit(c+601,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popPtr_willIncrement));
        vcdp->fullBus(c+609,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popPtr_valueNext),4);
        vcdp->fullBit(c+617,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popping));
        vcdp->fullBus(c+625,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_emif_interface__DOT__apb_PRDATA_regNextWhen),32);
        vcdp->fullBus(c+633,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_gpioACtrl__DOT__io_gpio_write_driver),16);
        vcdp->fullBit(c+641,(vlTOPp->Emif_Ctrl_test__DOT__area_tt));
        vcdp->fullBus(c+649,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_gpioACtrl__DOT__io_gpio_read_buffercc__DOT__buffers_1),16);
        vcdp->fullBit(c+657,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_emif_interface__DOT__penable_regNext));
        vcdp->fullBus(c+665,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_gpioACtrl__DOT__io_gpio_read_buffercc__DOT__buffers_0),16);
        vcdp->fullBus(c+673,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_shifter),8);
        vcdp->fullBus(c+681,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT___zz_logic_ram_port0),8);
        vcdp->fullBus(c+689,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT___zz_logic_ram_port0),8);
        vcdp->fullBit(c+697,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__stateMachine_parity));
        vcdp->fullBus(c+705,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__bitTimer_counter),3);
        vcdp->fullBit(c+713,((0U == (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__bitTimer_counter))));
        vcdp->fullBit(c+721,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_parity));
        vcdp->fullBus(c+729,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ram[0]),8);
        vcdp->fullBus(c+730,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ram[1]),8);
        vcdp->fullBus(c+731,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ram[2]),8);
        vcdp->fullBus(c+732,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ram[3]),8);
        vcdp->fullBus(c+733,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ram[4]),8);
        vcdp->fullBus(c+734,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ram[5]),8);
        vcdp->fullBus(c+735,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ram[6]),8);
        vcdp->fullBus(c+736,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ram[7]),8);
        vcdp->fullBus(c+737,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ram[8]),8);
        vcdp->fullBus(c+738,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ram[9]),8);
        vcdp->fullBus(c+739,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ram[10]),8);
        vcdp->fullBus(c+740,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ram[11]),8);
        vcdp->fullBus(c+741,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ram[12]),8);
        vcdp->fullBus(c+742,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ram[13]),8);
        vcdp->fullBus(c+743,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ram[14]),8);
        vcdp->fullBus(c+744,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_ram[15]),8);
        vcdp->fullBus(c+857,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_ram[0]),8);
        vcdp->fullBus(c+858,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_ram[1]),8);
        vcdp->fullBus(c+859,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_ram[2]),8);
        vcdp->fullBus(c+860,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_ram[3]),8);
        vcdp->fullBus(c+861,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_ram[4]),8);
        vcdp->fullBus(c+862,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_ram[5]),8);
        vcdp->fullBus(c+863,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_ram[6]),8);
        vcdp->fullBus(c+864,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_ram[7]),8);
        vcdp->fullBus(c+865,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_ram[8]),8);
        vcdp->fullBus(c+866,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_ram[9]),8);
        vcdp->fullBus(c+867,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_ram[10]),8);
        vcdp->fullBus(c+868,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_ram[11]),8);
        vcdp->fullBus(c+869,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_ram[12]),8);
        vcdp->fullBus(c+870,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_ram[13]),8);
        vcdp->fullBus(c+871,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_ram[14]),8);
        vcdp->fullBus(c+872,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_ram[15]),8);
        vcdp->fullBit(c+985,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__apb3Router_1__DOT__selIndex));
        vcdp->fullBus(c+993,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_gpioACtrl__DOT__io_gpio_writeEnable_driver),16);
        vcdp->fullBit(c+1001,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT___zz_io_txd));
        vcdp->fullBit(c+1009,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_emif_interface__DOT__penable));
        vcdp->fullBit(c+1017,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_validReg));
        vcdp->fullBit(c+1025,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_interruptCtrl_writeIntEnable));
        vcdp->fullBit(c+1033,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_interruptCtrl_readIntEnable));
        vcdp->fullBit(c+1041,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_misc_readError));
        vcdp->fullBit(c+1049,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_misc_readOverflowError));
        vcdp->fullBit(c+1057,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_misc_breakDetected));
        vcdp->fullBit(c+1065,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_misc_doBreak));
        vcdp->fullBit(c+1073,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT___zz_io_rts));
        vcdp->fullBus(c+1081,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__clockDivider_counter),20);
        vcdp->fullBit(c+1089,((0U == vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__clockDivider_counter)));
        vcdp->fullBus(c+1097,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__clockDivider_counter_value),3);
        vcdp->fullBit(c+1105,((4U == (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__clockDivider_counter_value))));
        vcdp->fullBus(c+1113,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__stateMachine_state),3);
        vcdp->fullBit(c+1121,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_1));
        vcdp->fullBit(c+1129,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__sampler_samples_1));
        vcdp->fullBit(c+1137,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__sampler_samples_2));
        vcdp->fullBit(c+1145,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__sampler_value));
        vcdp->fullBit(c+1153,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__sampler_tick));
        vcdp->fullBus(c+1161,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__stateMachine_state),3);
        vcdp->fullBit(c+1169,((1U & (~ (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__sampler_value)))));
        vcdp->fullBit(c+1177,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__io_rxd_buffercc__DOT__buffers_0));
        vcdp->fullBus(c+1185,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushPtr_value),4);
        vcdp->fullBit(c+1193,((0xfU == (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushPtr_value))));
        vcdp->fullBus(c+1201,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popPtr_value),4);
        vcdp->fullBit(c+1209,((0xfU == (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popPtr_value))));
        vcdp->fullBit(c+1217,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_risingOccupancy));
        vcdp->fullBus(c+1225,((0xfU & ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_pushPtr_value) 
                                       - (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__bridge_write_streamUnbuffered_queueWithOccupancy__DOT__logic_popPtr_value)))),4);
        vcdp->fullBus(c+1233,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_pushPtr_value),4);
        vcdp->fullBit(c+1241,((0xfU == (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_pushPtr_value))));
        vcdp->fullBus(c+1249,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_popPtr_value),4);
        vcdp->fullBit(c+1257,((0xfU == (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_popPtr_value))));
        vcdp->fullBit(c+1265,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_risingOccupancy));
        vcdp->fullBus(c+1273,((0xfU & ((IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_pushPtr_value) 
                                       - (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_read_queueWithOccupancy__DOT__logic_popPtr_value)))),4);
        vcdp->fullBit(c+1281,(((0U == vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__clockDivider_counter) 
                               & (0x41U != (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__break_counter)))));
        vcdp->fullBit(c+1289,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_readBreak_regNext));
        vcdp->fullBus(c+1297,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__tickCounter_value),3);
        vcdp->fullBit(c+1305,((7U == (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__tickCounter_value))));
        vcdp->fullBit(c+1313,((0U == (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__tx__DOT__tickCounter_value))));
        vcdp->fullBus(c+1321,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__bitCounter_value),3);
        vcdp->fullBit(c+1329,((7U == (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__bitCounter_value))));
        vcdp->fullBit(c+1337,((0U == (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__bitCounter_value))));
        vcdp->fullBit(c+1345,(((0x41U == (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__break_counter)) 
                               & (~ (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1_io_readBreak_regNext)))));
        vcdp->fullBit(c+1353,((0x41U == (IData)(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__break_counter))));
        vcdp->fullBus(c+1361,(vlTOPp->Emif_Ctrl_test__DOT__area_emif_Ctrl__DOT__area_uartCtrl__DOT__uartCtrl_1__DOT__rx__DOT__break_counter),7);
        vcdp->fullBus(c+1369,(vlTOPp->top_emif_emif_addr),32);
        vcdp->fullBus(c+1377,(vlTOPp->top_emif_emif_data_read),32);
        vcdp->fullBus(c+1385,(vlTOPp->top_emif_emif_data_write),32);
        vcdp->fullBit(c+1393,(vlTOPp->top_emif_emif_data_writeEnable));
        vcdp->fullBit(c+1401,(vlTOPp->top_emif_emif_cs));
        vcdp->fullBit(c+1409,(vlTOPp->top_emif_emif_we));
        vcdp->fullBit(c+1417,(vlTOPp->top_emif_emif_oe));
        vcdp->fullBus(c+1425,(vlTOPp->top_gpioA_read),16);
        vcdp->fullBus(c+1433,(vlTOPp->top_gpioA_write),16);
        vcdp->fullBus(c+1441,(vlTOPp->top_gpioA_writeEnable),16);
        vcdp->fullBit(c+1449,(vlTOPp->clk));
        vcdp->fullBit(c+1457,(vlTOPp->reset));
        vcdp->fullBit(c+1465,((1U & (~ (IData)(vlTOPp->top_emif_emif_oe)))));
        vcdp->fullBus(c+1473,((0xfU & vlTOPp->top_emif_emif_addr)),4);
        vcdp->fullBus(c+1481,((0x1fU & vlTOPp->top_emif_emif_addr)),5);
        vcdp->fullBit(c+1489,((1U & (~ (IData)(vlTOPp->top_emif_emif_cs)))));
        vcdp->fullBus(c+1497,((0xffU & vlTOPp->top_emif_emif_data_read)),8);
        vcdp->fullBit(c+1505,((1U & vlTOPp->top_emif_emif_data_read)));
        vcdp->fullBit(c+1513,((1U & (vlTOPp->top_emif_emif_data_read 
                                     >> 1U))));
        vcdp->fullBit(c+1521,((1U & (vlTOPp->top_emif_emif_data_read 
                                     >> 9U))));
        vcdp->fullBit(c+1529,((1U & (vlTOPp->top_emif_emif_data_read 
                                     >> 0xaU))));
        vcdp->fullBit(c+1537,((1U & (vlTOPp->top_emif_emif_data_read 
                                     >> 0xbU))));
        vcdp->fullBit(c+1545,(1U));
        vcdp->fullBit(c+1553,(0U));
        vcdp->fullBit(c+1561,(1U));
        vcdp->fullBus(c+1569,(7U),3);
        vcdp->fullBus(c+1577,(0U),2);
        vcdp->fullBus(c+1585,(5U),20);
    }
}

void VEmif_Ctrl_test::traceFullThis__15(VEmif_Ctrl_test__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VEmif_Ctrl_test* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBus(c+1593,(0x4f4e45U),24);
        vcdp->fullBus(c+1601,(0x4e4f4e45U),32);
    }
}
