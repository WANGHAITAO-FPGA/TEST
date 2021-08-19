// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : Apb3Axi
// Git hash  : c8cef7dc355934795e3281277d1eb6f9e4b94fe2


`define AxiCtrlTxState_binary_sequential_type [1:0]
`define AxiCtrlTxState_binary_sequential_IDLE 2'b00
`define AxiCtrlTxState_binary_sequential_DATA 2'b01
`define AxiCtrlTxState_binary_sequential_STOP 2'b10


module Apb3Axi (
  input      [19:0]   apb_PADDR,
  input      [0:0]    apb_PSEL,
  input               apb_PENABLE,
  output              apb_PREADY,
  input               apb_PWRITE,
  input      [31:0]   apb_PWDATA,
  output reg [31:0]   apb_PRDATA,
  input               axiclk,
  input               axiwready,
  output              inter,
  input               reset,
  input               clk
);
  reg                 axictrl_axictrl_rx_stream_ready;
  wire       [31:0]   axictrl_axictrl_tx_stream_payload;
  wire                axictrl_axiw_valid;
  wire       [31:0]   axictrl_axiw_payload_data;
  wire                axictrl_axiw_payload_last;
  wire                axictrl_axir_ready;
  wire                axictrl_axictrl_rx_stream_valid;
  wire       [31:0]   axictrl_axictrl_rx_stream_payload;
  wire       [8:0]    axictrl_axictrl_rx_popOccupancy;
  wire                axictrl_axictrl_tx_stream_ready;
  wire                axictrl_interrupt;
  wire                busCtrl_askWrite;
  wire                busCtrl_askRead;
  wire                busCtrl_doWrite;
  wire                busCtrl_doRead;
  reg                 axictrl_axictrl_tx_flush_driver;
  reg                 axictrl_axictrl_tx_txstart_driver;
  reg                 axictrl_axictrl_rx_flush_driver;
  reg                 _zz_axictrl_tx_stream_valid;

  Axi axictrl (
    .axiw_valid                   (axictrl_axiw_valid                 ), //o
    .axiw_ready                   (axiwready                          ), //i
    .axiw_payload_data            (axictrl_axiw_payload_data          ), //o
    .axiw_payload_last            (axictrl_axiw_payload_last          ), //o
    .axir_valid                   (axictrl_axiw_valid                 ), //i
    .axir_ready                   (axictrl_axir_ready                 ), //o
    .axir_payload_data            (axictrl_axiw_payload_data          ), //i
    .axir_payload_last            (axictrl_axiw_payload_last          ), //i
    .axictrl_rx_stream_valid      (axictrl_axictrl_rx_stream_valid    ), //o
    .axictrl_rx_stream_ready      (axictrl_axictrl_rx_stream_ready    ), //i
    .axictrl_rx_stream_payload    (axictrl_axictrl_rx_stream_payload  ), //o
    .axictrl_rx_flush             (axictrl_axictrl_rx_flush_driver    ), //i
    .axictrl_rx_popOccupancy      (axictrl_axictrl_rx_popOccupancy    ), //o
    .axictrl_tx_stream_valid      (_zz_axictrl_tx_stream_valid        ), //i
    .axictrl_tx_stream_ready      (axictrl_axictrl_tx_stream_ready    ), //o
    .axictrl_tx_stream_payload    (axictrl_axictrl_tx_stream_payload  ), //i
    .axictrl_tx_flush             (axictrl_axictrl_tx_flush_driver    ), //i
    .axictrl_tx_txstart           (axictrl_axictrl_tx_txstart_driver  ), //i
    .interrupt                    (axictrl_interrupt                  ), //o
    .reset                        (reset                              ), //i
    .axiclk                       (axiclk                             ), //i
    .clk                          (clk                                )  //i
  );
  assign apb_PREADY = 1'b1;
  always @(*) begin
    apb_PRDATA = 32'h0;
    case(apb_PADDR)
      20'h0 : begin
        apb_PRDATA[0 : 0] = axictrl_axictrl_tx_flush_driver;
        apb_PRDATA[1 : 1] = axictrl_axictrl_tx_stream_ready;
        apb_PRDATA[2 : 2] = axictrl_axictrl_tx_txstart_driver;
        apb_PRDATA[4 : 4] = axictrl_axictrl_rx_flush_driver;
        apb_PRDATA[5 : 5] = axictrl_axictrl_rx_stream_valid;
      end
      20'h00004 : begin
        apb_PRDATA[8 : 0] = axictrl_axictrl_rx_popOccupancy;
      end
      20'h00020 : begin
        apb_PRDATA[31 : 0] = axictrl_axictrl_rx_stream_payload;
      end
      default : begin
      end
    endcase
  end

  assign busCtrl_askWrite = ((apb_PSEL[0] && apb_PENABLE) && apb_PWRITE);
  assign busCtrl_askRead = ((apb_PSEL[0] && apb_PENABLE) && (! apb_PWRITE));
  assign busCtrl_doWrite = (((apb_PSEL[0] && apb_PENABLE) && apb_PREADY) && apb_PWRITE);
  assign busCtrl_doRead = (((apb_PSEL[0] && apb_PENABLE) && apb_PREADY) && (! apb_PWRITE));
  always @(*) begin
    _zz_axictrl_tx_stream_valid = 1'b0;
    case(apb_PADDR)
      20'h00010 : begin
        if(busCtrl_doWrite) begin
          _zz_axictrl_tx_stream_valid = 1'b1;
        end
      end
      default : begin
      end
    endcase
  end

  assign axictrl_axictrl_tx_stream_payload = apb_PWDATA[31 : 0];
  always @(*) begin
    axictrl_axictrl_rx_stream_ready = 1'b0;
    case(apb_PADDR)
      20'h00020 : begin
        if(busCtrl_doRead) begin
          axictrl_axictrl_rx_stream_ready = 1'b1;
        end
      end
      default : begin
      end
    endcase
  end

  assign inter = axictrl_interrupt;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      axictrl_axictrl_tx_flush_driver <= 1'b1;
      axictrl_axictrl_tx_txstart_driver <= 1'b0;
      axictrl_axictrl_rx_flush_driver <= 1'b1;
    end else begin
      case(apb_PADDR)
        20'h0 : begin
          if(busCtrl_doWrite) begin
            axictrl_axictrl_tx_flush_driver <= apb_PWDATA[0];
            axictrl_axictrl_tx_txstart_driver <= apb_PWDATA[2];
            axictrl_axictrl_rx_flush_driver <= apb_PWDATA[4];
          end
        end
        default : begin
        end
      endcase
    end
  end


endmodule

module Axi (
  output              axiw_valid,
  input               axiw_ready,
  output     [31:0]   axiw_payload_data,
  output              axiw_payload_last,
  input               axir_valid,
  output              axir_ready,
  input      [31:0]   axir_payload_data,
  input               axir_payload_last,
  output              axictrl_rx_stream_valid,
  input               axictrl_rx_stream_ready,
  output     [31:0]   axictrl_rx_stream_payload,
  input               axictrl_rx_flush,
  output     [8:0]    axictrl_rx_popOccupancy,
  input               axictrl_tx_stream_valid,
  output              axictrl_tx_stream_ready,
  input      [31:0]   axictrl_tx_stream_payload,
  input               axictrl_tx_flush,
  input               axictrl_tx_txstart,
  output              interrupt,
  input               reset,
  input               axiclk,
  input               clk
);
  wire                bufferCC_7_io_dataOut;
  wire                bufferCC_8_io_dataOut;
  wire                txFrontend_buffer_io_push_ready;
  wire                txFrontend_buffer_io_pop_valid;
  wire       [31:0]   txFrontend_buffer_io_pop_payload;
  wire       [8:0]    txFrontend_buffer_io_pushOccupancy;
  wire       [8:0]    txFrontend_buffer_io_popOccupancy;
  wire                txBackend_axictrltx_axiw_valid;
  wire       [31:0]   txBackend_axictrltx_axiw_payload_data;
  wire                txBackend_axictrltx_axiw_payload_last;
  wire                txBackend_axictrltx_write_ready;
  wire                axictrl_tx_txstart_buffercc_io_dataOut;
  wire                rxFrontend_axictrlrx_axir_ready;
  wire                rxFrontend_axictrlrx_read_valid;
  wire       [31:0]   rxFrontend_axictrlrx_read_payload;
  wire                rxFrontend_axictrlrx_interrupt;
  wire                rxFrontend_buffer_io_push_ready;
  wire                rxFrontend_buffer_io_pop_valid;
  wire       [31:0]   rxFrontend_buffer_io_pop_payload;
  wire       [8:0]    rxFrontend_buffer_io_pushOccupancy;
  wire       [8:0]    rxFrontend_buffer_io_popOccupancy;
  wire                _zz_1;
  wire                rxReset;
  wire                _zz_2;
  wire                txReset;

  BufferCC_4 bufferCC_7 (
    .io_dataIn     (1'b0                   ), //i
    .io_dataOut    (bufferCC_7_io_dataOut  ), //o
    .axiclk        (axiclk                 ), //i
    ._zz_1         (_zz_1                  )  //i
  );
  BufferCC_4 bufferCC_8 (
    .io_dataIn     (1'b0                   ), //i
    .io_dataOut    (bufferCC_8_io_dataOut  ), //o
    .axiclk        (axiclk                 ), //i
    ._zz_1         (_zz_2                  )  //i
  );
  StreamFifoCC txFrontend_buffer (
    .io_push_valid       (axictrl_tx_stream_valid             ), //i
    .io_push_ready       (txFrontend_buffer_io_push_ready     ), //o
    .io_push_payload     (axictrl_tx_stream_payload           ), //i
    .io_pop_valid        (txFrontend_buffer_io_pop_valid      ), //o
    .io_pop_ready        (txBackend_axictrltx_write_ready     ), //i
    .io_pop_payload      (txFrontend_buffer_io_pop_payload    ), //o
    .io_pushOccupancy    (txFrontend_buffer_io_pushOccupancy  ), //o
    .io_popOccupancy     (txFrontend_buffer_io_popOccupancy   ), //o
    .clk                 (clk                                 ), //i
    .reset               (reset                               ), //i
    .axictrl_tx_flush    (axictrl_tx_flush                    ), //i
    .axiclk              (axiclk                              ), //i
    .txReset             (txReset                             )  //i
  );
  AxiCtrlTx txBackend_axictrltx (
    .axiw_valid           (txBackend_axictrltx_axiw_valid          ), //o
    .axiw_ready           (axiw_ready                              ), //i
    .axiw_payload_data    (txBackend_axictrltx_axiw_payload_data   ), //o
    .axiw_payload_last    (txBackend_axictrltx_axiw_payload_last   ), //o
    .write_valid          (txFrontend_buffer_io_pop_valid          ), //i
    .write_ready          (txBackend_axictrltx_write_ready         ), //o
    .write_payload        (txFrontend_buffer_io_pop_payload        ), //i
    .tx_start             (axictrl_tx_txstart_buffercc_io_dataOut  ), //i
    .popOccupancy         (txFrontend_buffer_io_popOccupancy       ), //i
    .axiclk               (axiclk                                  ), //i
    .txReset              (txReset                                 )  //i
  );
  BufferCC_6 axictrl_tx_txstart_buffercc (
    .io_dataIn     (axictrl_tx_txstart                      ), //i
    .io_dataOut    (axictrl_tx_txstart_buffercc_io_dataOut  ), //o
    .axiclk        (axiclk                                  ), //i
    .txReset       (txReset                                 )  //i
  );
  AxiCtrlRx rxFrontend_axictrlrx (
    .axir_valid           (axir_valid                         ), //i
    .axir_ready           (rxFrontend_axictrlrx_axir_ready    ), //o
    .axir_payload_data    (axir_payload_data                  ), //i
    .axir_payload_last    (axir_payload_last                  ), //i
    .read_valid           (rxFrontend_axictrlrx_read_valid    ), //o
    .read_ready           (rxFrontend_buffer_io_push_ready    ), //i
    .read_payload         (rxFrontend_axictrlrx_read_payload  ), //o
    .interrupt            (rxFrontend_axictrlrx_interrupt     ), //o
    .axiclk               (axiclk                             ), //i
    .rxReset              (rxReset                            )  //i
  );
  StreamFifoCC_1 rxFrontend_buffer (
    .io_push_valid       (rxFrontend_axictrlrx_read_valid     ), //i
    .io_push_ready       (rxFrontend_buffer_io_push_ready     ), //o
    .io_push_payload     (rxFrontend_axictrlrx_read_payload   ), //i
    .io_pop_valid        (rxFrontend_buffer_io_pop_valid      ), //o
    .io_pop_ready        (axictrl_rx_stream_ready             ), //i
    .io_pop_payload      (rxFrontend_buffer_io_pop_payload    ), //o
    .io_pushOccupancy    (rxFrontend_buffer_io_pushOccupancy  ), //o
    .io_popOccupancy     (rxFrontend_buffer_io_popOccupancy   ), //o
    .axiclk              (axiclk                              ), //i
    .rxReset             (rxReset                             ), //i
    .clk                 (clk                                 ), //i
    .reset               (reset                               ), //i
    .axictrl_tx_flush    (axictrl_tx_flush                    )  //i
  );
  assign _zz_1 = (reset || axictrl_rx_flush);
  assign rxReset = bufferCC_7_io_dataOut;
  assign _zz_2 = (reset || axictrl_tx_flush);
  assign txReset = bufferCC_8_io_dataOut;
  assign axictrl_tx_stream_ready = txFrontend_buffer_io_push_ready;
  assign axiw_valid = txBackend_axictrltx_axiw_valid;
  assign axiw_payload_data = txBackend_axictrltx_axiw_payload_data;
  assign axiw_payload_last = txBackend_axictrltx_axiw_payload_last;
  assign axir_ready = rxFrontend_axictrlrx_axir_ready;
  assign interrupt = rxFrontend_axictrlrx_interrupt;
  assign axictrl_rx_popOccupancy = rxFrontend_buffer_io_popOccupancy;
  assign axictrl_rx_stream_valid = rxFrontend_buffer_io_pop_valid;
  assign axictrl_rx_stream_payload = rxFrontend_buffer_io_pop_payload;

endmodule

module StreamFifoCC_1 (
  input               io_push_valid,
  output              io_push_ready,
  input      [31:0]   io_push_payload,
  output              io_pop_valid,
  input               io_pop_ready,
  output     [31:0]   io_pop_payload,
  output     [8:0]    io_pushOccupancy,
  output     [8:0]    io_popOccupancy,
  input               axiclk,
  input               rxReset,
  input               clk,
  input               reset,
  input               axictrl_tx_flush
);
  reg        [31:0]   _zz_ram_port1;
  wire       [8:0]    popToPushGray_buffercc_io_dataOut;
  wire       [8:0]    pushToPopGray_buffercc_io_dataOut;
  wire       [8:0]    _zz_pushCC_pushPtrGray;
  wire       [7:0]    _zz_ram_port;
  wire       [8:0]    _zz_popCC_popPtrGray;
  wire       [7:0]    _zz_ram_port_1;
  wire                _zz_ram_port_2;
  wire       [7:0]    _zz_io_pop_payload_1;
  wire                _zz_io_pop_payload_2;
  reg                 _zz_1;
  wire       [8:0]    popToPushGray;
  wire       [8:0]    pushToPopGray;
  reg        [8:0]    pushCC_pushPtr;
  wire       [8:0]    pushCC_pushPtrPlus;
  wire                io_push_fire;
  reg        [8:0]    pushCC_pushPtrGray;
  wire       [8:0]    pushCC_popPtrGray;
  wire                pushCC_full;
  wire                io_push_fire_1;
  wire                _zz_io_pushOccupancy;
  wire                _zz_io_pushOccupancy_1;
  wire                _zz_io_pushOccupancy_2;
  wire                _zz_io_pushOccupancy_3;
  wire                _zz_io_pushOccupancy_4;
  wire                _zz_io_pushOccupancy_5;
  wire                _zz_io_pushOccupancy_6;
  wire                _zz_io_pushOccupancy_7;
  reg        [8:0]    popCC_popPtr;
  wire       [8:0]    popCC_popPtrPlus;
  wire                io_pop_fire;
  reg        [8:0]    popCC_popPtrGray;
  wire       [8:0]    popCC_pushPtrGray;
  wire                popCC_empty;
  wire                io_pop_fire_1;
  wire       [8:0]    _zz_io_pop_payload;
  wire                io_pop_fire_2;
  wire                _zz_io_popOccupancy;
  wire                _zz_io_popOccupancy_1;
  wire                _zz_io_popOccupancy_2;
  wire                _zz_io_popOccupancy_3;
  wire                _zz_io_popOccupancy_4;
  wire                _zz_io_popOccupancy_5;
  wire                _zz_io_popOccupancy_6;
  wire                _zz_io_popOccupancy_7;
  reg [31:0] ram [0:255];

  assign _zz_pushCC_pushPtrGray = (pushCC_pushPtrPlus >>> 1'b1);
  assign _zz_ram_port = pushCC_pushPtr[7:0];
  assign _zz_popCC_popPtrGray = (popCC_popPtrPlus >>> 1'b1);
  assign _zz_io_pop_payload_1 = _zz_io_pop_payload[7:0];
  assign _zz_io_pop_payload_2 = 1'b1;
  always @(posedge axiclk) begin
    if(_zz_1) begin
      ram[_zz_ram_port] <= io_push_payload;
    end
  end

  always @(posedge clk) begin
    if(_zz_io_pop_payload_2) begin
      _zz_ram_port1 <= ram[_zz_io_pop_payload_1];
    end
  end

  BufferCC_2 popToPushGray_buffercc (
    .io_dataIn     (popToPushGray                      ), //i
    .io_dataOut    (popToPushGray_buffercc_io_dataOut  ), //o
    .axiclk        (axiclk                             ), //i
    .rxReset       (rxReset                            )  //i
  );
  BufferCC pushToPopGray_buffercc (
    .io_dataIn           (pushToPopGray                      ), //i
    .io_dataOut          (pushToPopGray_buffercc_io_dataOut  ), //o
    .clk                 (clk                                ), //i
    .reset               (reset                              ), //i
    .axictrl_tx_flush    (axictrl_tx_flush                   )  //i
  );
  always @(*) begin
    _zz_1 = 1'b0;
    if(io_push_fire_1) begin
      _zz_1 = 1'b1;
    end
  end

  assign pushCC_pushPtrPlus = (pushCC_pushPtr + 9'h001);
  assign io_push_fire = (io_push_valid && io_push_ready);
  assign pushCC_popPtrGray = popToPushGray_buffercc_io_dataOut;
  assign pushCC_full = ((pushCC_pushPtrGray[8 : 7] == (~ pushCC_popPtrGray[8 : 7])) && (pushCC_pushPtrGray[6 : 0] == pushCC_popPtrGray[6 : 0]));
  assign io_push_ready = (! pushCC_full);
  assign io_push_fire_1 = (io_push_valid && io_push_ready);
  assign _zz_io_pushOccupancy = (pushCC_popPtrGray[1] ^ _zz_io_pushOccupancy_1);
  assign _zz_io_pushOccupancy_1 = (pushCC_popPtrGray[2] ^ _zz_io_pushOccupancy_2);
  assign _zz_io_pushOccupancy_2 = (pushCC_popPtrGray[3] ^ _zz_io_pushOccupancy_3);
  assign _zz_io_pushOccupancy_3 = (pushCC_popPtrGray[4] ^ _zz_io_pushOccupancy_4);
  assign _zz_io_pushOccupancy_4 = (pushCC_popPtrGray[5] ^ _zz_io_pushOccupancy_5);
  assign _zz_io_pushOccupancy_5 = (pushCC_popPtrGray[6] ^ _zz_io_pushOccupancy_6);
  assign _zz_io_pushOccupancy_6 = (pushCC_popPtrGray[7] ^ _zz_io_pushOccupancy_7);
  assign _zz_io_pushOccupancy_7 = pushCC_popPtrGray[8];
  assign io_pushOccupancy = (pushCC_pushPtr - {_zz_io_pushOccupancy_7,{_zz_io_pushOccupancy_6,{_zz_io_pushOccupancy_5,{_zz_io_pushOccupancy_4,{_zz_io_pushOccupancy_3,{_zz_io_pushOccupancy_2,{_zz_io_pushOccupancy_1,{_zz_io_pushOccupancy,(pushCC_popPtrGray[0] ^ _zz_io_pushOccupancy)}}}}}}}});
  assign popCC_popPtrPlus = (popCC_popPtr + 9'h001);
  assign io_pop_fire = (io_pop_valid && io_pop_ready);
  assign popCC_pushPtrGray = pushToPopGray_buffercc_io_dataOut;
  assign popCC_empty = (popCC_popPtrGray == popCC_pushPtrGray);
  assign io_pop_valid = (! popCC_empty);
  assign io_pop_fire_1 = (io_pop_valid && io_pop_ready);
  assign _zz_io_pop_payload = (io_pop_fire_1 ? popCC_popPtrPlus : popCC_popPtr);
  assign io_pop_payload = _zz_ram_port1;
  assign io_pop_fire_2 = (io_pop_valid && io_pop_ready);
  assign _zz_io_popOccupancy = (popCC_pushPtrGray[1] ^ _zz_io_popOccupancy_1);
  assign _zz_io_popOccupancy_1 = (popCC_pushPtrGray[2] ^ _zz_io_popOccupancy_2);
  assign _zz_io_popOccupancy_2 = (popCC_pushPtrGray[3] ^ _zz_io_popOccupancy_3);
  assign _zz_io_popOccupancy_3 = (popCC_pushPtrGray[4] ^ _zz_io_popOccupancy_4);
  assign _zz_io_popOccupancy_4 = (popCC_pushPtrGray[5] ^ _zz_io_popOccupancy_5);
  assign _zz_io_popOccupancy_5 = (popCC_pushPtrGray[6] ^ _zz_io_popOccupancy_6);
  assign _zz_io_popOccupancy_6 = (popCC_pushPtrGray[7] ^ _zz_io_popOccupancy_7);
  assign _zz_io_popOccupancy_7 = popCC_pushPtrGray[8];
  assign io_popOccupancy = ({_zz_io_popOccupancy_7,{_zz_io_popOccupancy_6,{_zz_io_popOccupancy_5,{_zz_io_popOccupancy_4,{_zz_io_popOccupancy_3,{_zz_io_popOccupancy_2,{_zz_io_popOccupancy_1,{_zz_io_popOccupancy,(popCC_pushPtrGray[0] ^ _zz_io_popOccupancy)}}}}}}}} - popCC_popPtr);
  assign pushToPopGray = pushCC_pushPtrGray;
  assign popToPushGray = popCC_popPtrGray;
  always @(posedge axiclk or posedge rxReset) begin
    if(rxReset) begin
      pushCC_pushPtr <= 9'h0;
      pushCC_pushPtrGray <= 9'h0;
    end else begin
      if(io_push_fire) begin
        pushCC_pushPtrGray <= (_zz_pushCC_pushPtrGray ^ pushCC_pushPtrPlus);
      end
      if(io_push_fire_1) begin
        pushCC_pushPtr <= pushCC_pushPtrPlus;
      end
    end
  end

  always @(posedge clk or posedge reset) begin
    if(reset) begin
      popCC_popPtr <= 9'h0;
      popCC_popPtrGray <= 9'h0;
    end else begin
      if(axictrl_tx_flush) begin
      popCC_popPtr <= 9'h0;
      popCC_popPtrGray <= 9'h0;
      end else begin
        if(io_pop_fire) begin
          popCC_popPtrGray <= (_zz_popCC_popPtrGray ^ popCC_popPtrPlus);
        end
        if(io_pop_fire_2) begin
          popCC_popPtr <= popCC_popPtrPlus;
        end
      end
    end
  end


endmodule

module AxiCtrlRx (
  input               axir_valid,
  output              axir_ready,
  input      [31:0]   axir_payload_data,
  input               axir_payload_last,
  output              read_valid,
  input               read_ready,
  output     [31:0]   read_payload,
  output              interrupt,
  input               axiclk,
  input               rxReset
);
  reg                 axir_payload_last_regNext;

  assign axir_ready = 1'b1;
  assign read_payload = axir_payload_data;
  assign read_valid = axir_valid;
  assign interrupt = axir_payload_last_regNext;
  always @(posedge axiclk) begin
    axir_payload_last_regNext <= axir_payload_last;
  end


endmodule

module BufferCC_6 (
  input               io_dataIn,
  output              io_dataOut,
  input               axiclk,
  input               txReset
);
  (* async_reg = "true" *) reg                 buffers_0;
  (* async_reg = "true" *) reg                 buffers_1;

  assign io_dataOut = buffers_1;
  always @(posedge axiclk) begin
    buffers_0 <= io_dataIn;
    buffers_1 <= buffers_0;
  end


endmodule

module AxiCtrlTx (
  output              axiw_valid,
  input               axiw_ready,
  output     [31:0]   axiw_payload_data,
  output              axiw_payload_last,
  input               write_valid,
  output              write_ready,
  input      [31:0]   write_payload,
  input               tx_start,
  input      [8:0]    popOccupancy,
  input               axiclk,
  input               txReset
);
  reg        `AxiCtrlTxState_binary_sequential_type stateMachine_state;
  wire                axiw_fire;
  wire                when_AxiCtrlTx_l30;
  wire                axiw_fire_1;
  `ifndef SYNTHESIS
  reg [31:0] stateMachine_state_string;
  `endif


  `ifndef SYNTHESIS
  always @(*) begin
    case(stateMachine_state)
      `AxiCtrlTxState_binary_sequential_IDLE : stateMachine_state_string = "IDLE";
      `AxiCtrlTxState_binary_sequential_DATA : stateMachine_state_string = "DATA";
      `AxiCtrlTxState_binary_sequential_STOP : stateMachine_state_string = "STOP";
      default : stateMachine_state_string = "????";
    endcase
  end
  `endif

  assign axiw_fire = (axiw_valid && axiw_ready);
  assign when_AxiCtrlTx_l30 = ((popOccupancy == 9'h001) && axiw_fire);
  assign axiw_valid = ((axiw_ready && (stateMachine_state != `AxiCtrlTxState_binary_sequential_IDLE)) && write_valid);
  assign axiw_payload_data = write_payload;
  assign axiw_fire_1 = (axiw_valid && axiw_ready);
  assign axiw_payload_last = ((popOccupancy == 9'h001) && axiw_fire_1);
  assign write_ready = (axiw_ready && (stateMachine_state != `AxiCtrlTxState_binary_sequential_IDLE));
  always @(posedge axiclk or posedge txReset) begin
    if(txReset) begin
      stateMachine_state <= `AxiCtrlTxState_binary_sequential_IDLE;
    end else begin
      case(stateMachine_state)
        `AxiCtrlTxState_binary_sequential_IDLE : begin
          if(tx_start) begin
            stateMachine_state <= `AxiCtrlTxState_binary_sequential_DATA;
          end
        end
        `AxiCtrlTxState_binary_sequential_DATA : begin
          if(when_AxiCtrlTx_l30) begin
            stateMachine_state <= `AxiCtrlTxState_binary_sequential_STOP;
          end
        end
        default : begin
          stateMachine_state <= `AxiCtrlTxState_binary_sequential_IDLE;
        end
      endcase
    end
  end


endmodule

module StreamFifoCC (
  input               io_push_valid,
  output              io_push_ready,
  input      [31:0]   io_push_payload,
  output              io_pop_valid,
  input               io_pop_ready,
  output     [31:0]   io_pop_payload,
  output     [8:0]    io_pushOccupancy,
  output     [8:0]    io_popOccupancy,
  input               clk,
  input               reset,
  input               axictrl_tx_flush,
  input               axiclk,
  input               txReset
);
  reg        [31:0]   _zz_ram_port1;
  wire       [8:0]    popToPushGray_buffercc_io_dataOut;
  wire       [8:0]    pushToPopGray_buffercc_io_dataOut;
  wire       [8:0]    _zz_pushCC_pushPtrGray;
  wire       [7:0]    _zz_ram_port;
  wire       [8:0]    _zz_popCC_popPtrGray;
  wire       [7:0]    _zz_ram_port_1;
  wire                _zz_ram_port_2;
  wire       [7:0]    _zz_io_pop_payload_1;
  wire                _zz_io_pop_payload_2;
  reg                 _zz_1;
  wire       [8:0]    popToPushGray;
  wire       [8:0]    pushToPopGray;
  reg        [8:0]    pushCC_pushPtr;
  wire       [8:0]    pushCC_pushPtrPlus;
  wire                io_push_fire;
  reg        [8:0]    pushCC_pushPtrGray;
  wire       [8:0]    pushCC_popPtrGray;
  wire                pushCC_full;
  wire                io_push_fire_1;
  wire                _zz_io_pushOccupancy;
  wire                _zz_io_pushOccupancy_1;
  wire                _zz_io_pushOccupancy_2;
  wire                _zz_io_pushOccupancy_3;
  wire                _zz_io_pushOccupancy_4;
  wire                _zz_io_pushOccupancy_5;
  wire                _zz_io_pushOccupancy_6;
  wire                _zz_io_pushOccupancy_7;
  reg        [8:0]    popCC_popPtr;
  wire       [8:0]    popCC_popPtrPlus;
  wire                io_pop_fire;
  reg        [8:0]    popCC_popPtrGray;
  wire       [8:0]    popCC_pushPtrGray;
  wire                popCC_empty;
  wire                io_pop_fire_1;
  wire       [8:0]    _zz_io_pop_payload;
  wire                io_pop_fire_2;
  wire                _zz_io_popOccupancy;
  wire                _zz_io_popOccupancy_1;
  wire                _zz_io_popOccupancy_2;
  wire                _zz_io_popOccupancy_3;
  wire                _zz_io_popOccupancy_4;
  wire                _zz_io_popOccupancy_5;
  wire                _zz_io_popOccupancy_6;
  wire                _zz_io_popOccupancy_7;
  reg [31:0] ram [0:255];

  assign _zz_pushCC_pushPtrGray = (pushCC_pushPtrPlus >>> 1'b1);
  assign _zz_ram_port = pushCC_pushPtr[7:0];
  assign _zz_popCC_popPtrGray = (popCC_popPtrPlus >>> 1'b1);
  assign _zz_io_pop_payload_1 = _zz_io_pop_payload[7:0];
  assign _zz_io_pop_payload_2 = 1'b1;
  always @(posedge clk) begin
    if(_zz_1) begin
      ram[_zz_ram_port] <= io_push_payload;
    end
  end

  always @(posedge axiclk) begin
    if(_zz_io_pop_payload_2) begin
      _zz_ram_port1 <= ram[_zz_io_pop_payload_1];
    end
  end

  BufferCC popToPushGray_buffercc (
    .io_dataIn           (popToPushGray                      ), //i
    .io_dataOut          (popToPushGray_buffercc_io_dataOut  ), //o
    .clk                 (clk                                ), //i
    .reset               (reset                              ), //i
    .axictrl_tx_flush    (axictrl_tx_flush                   )  //i
  );
  BufferCC_1 pushToPopGray_buffercc (
    .io_dataIn     (pushToPopGray                      ), //i
    .io_dataOut    (pushToPopGray_buffercc_io_dataOut  ), //o
    .axiclk        (axiclk                             ), //i
    .txReset       (txReset                            )  //i
  );
  always @(*) begin
    _zz_1 = 1'b0;
    if(io_push_fire_1) begin
      _zz_1 = 1'b1;
    end
  end

  assign pushCC_pushPtrPlus = (pushCC_pushPtr + 9'h001);
  assign io_push_fire = (io_push_valid && io_push_ready);
  assign pushCC_popPtrGray = popToPushGray_buffercc_io_dataOut;
  assign pushCC_full = ((pushCC_pushPtrGray[8 : 7] == (~ pushCC_popPtrGray[8 : 7])) && (pushCC_pushPtrGray[6 : 0] == pushCC_popPtrGray[6 : 0]));
  assign io_push_ready = (! pushCC_full);
  assign io_push_fire_1 = (io_push_valid && io_push_ready);
  assign _zz_io_pushOccupancy = (pushCC_popPtrGray[1] ^ _zz_io_pushOccupancy_1);
  assign _zz_io_pushOccupancy_1 = (pushCC_popPtrGray[2] ^ _zz_io_pushOccupancy_2);
  assign _zz_io_pushOccupancy_2 = (pushCC_popPtrGray[3] ^ _zz_io_pushOccupancy_3);
  assign _zz_io_pushOccupancy_3 = (pushCC_popPtrGray[4] ^ _zz_io_pushOccupancy_4);
  assign _zz_io_pushOccupancy_4 = (pushCC_popPtrGray[5] ^ _zz_io_pushOccupancy_5);
  assign _zz_io_pushOccupancy_5 = (pushCC_popPtrGray[6] ^ _zz_io_pushOccupancy_6);
  assign _zz_io_pushOccupancy_6 = (pushCC_popPtrGray[7] ^ _zz_io_pushOccupancy_7);
  assign _zz_io_pushOccupancy_7 = pushCC_popPtrGray[8];
  assign io_pushOccupancy = (pushCC_pushPtr - {_zz_io_pushOccupancy_7,{_zz_io_pushOccupancy_6,{_zz_io_pushOccupancy_5,{_zz_io_pushOccupancy_4,{_zz_io_pushOccupancy_3,{_zz_io_pushOccupancy_2,{_zz_io_pushOccupancy_1,{_zz_io_pushOccupancy,(pushCC_popPtrGray[0] ^ _zz_io_pushOccupancy)}}}}}}}});
  assign popCC_popPtrPlus = (popCC_popPtr + 9'h001);
  assign io_pop_fire = (io_pop_valid && io_pop_ready);
  assign popCC_pushPtrGray = pushToPopGray_buffercc_io_dataOut;
  assign popCC_empty = (popCC_popPtrGray == popCC_pushPtrGray);
  assign io_pop_valid = (! popCC_empty);
  assign io_pop_fire_1 = (io_pop_valid && io_pop_ready);
  assign _zz_io_pop_payload = (io_pop_fire_1 ? popCC_popPtrPlus : popCC_popPtr);
  assign io_pop_payload = _zz_ram_port1;
  assign io_pop_fire_2 = (io_pop_valid && io_pop_ready);
  assign _zz_io_popOccupancy = (popCC_pushPtrGray[1] ^ _zz_io_popOccupancy_1);
  assign _zz_io_popOccupancy_1 = (popCC_pushPtrGray[2] ^ _zz_io_popOccupancy_2);
  assign _zz_io_popOccupancy_2 = (popCC_pushPtrGray[3] ^ _zz_io_popOccupancy_3);
  assign _zz_io_popOccupancy_3 = (popCC_pushPtrGray[4] ^ _zz_io_popOccupancy_4);
  assign _zz_io_popOccupancy_4 = (popCC_pushPtrGray[5] ^ _zz_io_popOccupancy_5);
  assign _zz_io_popOccupancy_5 = (popCC_pushPtrGray[6] ^ _zz_io_popOccupancy_6);
  assign _zz_io_popOccupancy_6 = (popCC_pushPtrGray[7] ^ _zz_io_popOccupancy_7);
  assign _zz_io_popOccupancy_7 = popCC_pushPtrGray[8];
  assign io_popOccupancy = ({_zz_io_popOccupancy_7,{_zz_io_popOccupancy_6,{_zz_io_popOccupancy_5,{_zz_io_popOccupancy_4,{_zz_io_popOccupancy_3,{_zz_io_popOccupancy_2,{_zz_io_popOccupancy_1,{_zz_io_popOccupancy,(popCC_pushPtrGray[0] ^ _zz_io_popOccupancy)}}}}}}}} - popCC_popPtr);
  assign pushToPopGray = pushCC_pushPtrGray;
  assign popToPushGray = popCC_popPtrGray;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      pushCC_pushPtr <= 9'h0;
      pushCC_pushPtrGray <= 9'h0;
    end else begin
      if(axictrl_tx_flush) begin
      pushCC_pushPtr <= 9'h0;
      pushCC_pushPtrGray <= 9'h0;
      end else begin
        if(io_push_fire) begin
          pushCC_pushPtrGray <= (_zz_pushCC_pushPtrGray ^ pushCC_pushPtrPlus);
        end
        if(io_push_fire_1) begin
          pushCC_pushPtr <= pushCC_pushPtrPlus;
        end
      end
    end
  end

  always @(posedge axiclk or posedge txReset) begin
    if(txReset) begin
      popCC_popPtr <= 9'h0;
      popCC_popPtrGray <= 9'h0;
    end else begin
      if(io_pop_fire) begin
        popCC_popPtrGray <= (_zz_popCC_popPtrGray ^ popCC_popPtrPlus);
      end
      if(io_pop_fire_2) begin
        popCC_popPtr <= popCC_popPtrPlus;
      end
    end
  end


endmodule

//BufferCC_4 replaced by BufferCC_4

module BufferCC_4 (
  input               io_dataIn,
  output              io_dataOut,
  input               axiclk,
  input               _zz_1
);
  (* async_reg = "true" *) reg                 buffers_0;
  (* async_reg = "true" *) reg                 buffers_1;

  assign io_dataOut = buffers_1;
  always @(posedge axiclk or posedge _zz_1) begin
    if(_zz_1) begin
      buffers_0 <= 1'b1;
      buffers_1 <= 1'b1;
    end else begin
      buffers_0 <= io_dataIn;
      buffers_1 <= buffers_0;
    end
  end


endmodule

//BufferCC replaced by BufferCC

module BufferCC_2 (
  input      [8:0]    io_dataIn,
  output     [8:0]    io_dataOut,
  input               axiclk,
  input               rxReset
);
  (* async_reg = "true" *) reg        [8:0]    buffers_0;
  (* async_reg = "true" *) reg        [8:0]    buffers_1;

  assign io_dataOut = buffers_1;
  always @(posedge axiclk or posedge rxReset) begin
    if(rxReset) begin
      buffers_0 <= 9'h0;
      buffers_1 <= 9'h0;
    end else begin
      buffers_0 <= io_dataIn;
      buffers_1 <= buffers_0;
    end
  end


endmodule

module BufferCC_1 (
  input      [8:0]    io_dataIn,
  output     [8:0]    io_dataOut,
  input               axiclk,
  input               txReset
);
  (* async_reg = "true" *) reg        [8:0]    buffers_0;
  (* async_reg = "true" *) reg        [8:0]    buffers_1;

  assign io_dataOut = buffers_1;
  always @(posedge axiclk or posedge txReset) begin
    if(txReset) begin
      buffers_0 <= 9'h0;
      buffers_1 <= 9'h0;
    end else begin
      buffers_0 <= io_dataIn;
      buffers_1 <= buffers_0;
    end
  end


endmodule

module BufferCC (
  input      [8:0]    io_dataIn,
  output     [8:0]    io_dataOut,
  input               clk,
  input               reset,
  input               axictrl_tx_flush
);
  (* async_reg = "true" *) reg        [8:0]    buffers_0;
  (* async_reg = "true" *) reg        [8:0]    buffers_1;

  assign io_dataOut = buffers_1;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      buffers_0 <= 9'h0;
      buffers_1 <= 9'h0;
    end else begin
      if(axictrl_tx_flush) begin
      buffers_0 <= 9'h0;
      buffers_1 <= 9'h0;
      end else begin
        buffers_0 <= io_dataIn;
        buffers_1 <= buffers_0;
      end
    end
  end


endmodule
