// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : test


`define push_State_binary_sequential_type [0:0]
`define push_State_binary_sequential_LENGTH 1'b0
`define push_State_binary_sequential_DATA 1'b1

`define pop_State_binary_sequential_type [1:0]
`define pop_State_binary_sequential_LENGTH 2'b00
`define pop_State_binary_sequential_DATA 2'b01
`define pop_State_binary_sequential_WAIT_1 2'b10


module test (
  input               io_txclk,
  input               io_rxclk,
  input               io_reset,
  input               io_phy_rx_valid,
  output              io_phy_rx_ready,
  input               io_phy_rx_payload_last,
  input               io_phy_rx_payload_fragment_error,
  input      [7:0]    io_phy_rx_payload_fragment_data,
  output              io_phy_tx_valid,
  input               io_phy_tx_ready,
  output              io_phy_tx_payload_last,
  output     [7:0]    io_phy_tx_payload_fragment_data,
  input               io_phy_colision,
  input               io_phy_busy,
  input      [19:0]   io_apb_PADDR,
  input      [0:0]    io_apb_PSEL,
  input               io_apb_PENABLE,
  output              io_apb_PREADY,
  input               io_apb_PWRITE,
  input      [31:0]   io_apb_PWDATA,
  output reg [31:0]   io_apb_PRDATA,
  input               reset,
  input               clk
);
  reg                 mac_io_ctrl_rx_stream_ready;
  reg                 mac_io_ctrl_rx_stats_clear;
  wire       [31:0]   mac_io_ctrl_tx_stream_payload;
  wire                mac_io_phy_tx_valid;
  wire                mac_io_phy_tx_payload_last;
  wire       [7:0]    mac_io_phy_tx_payload_fragment_data;
  wire                mac_io_phy_rx_ready;
  wire                mac_io_ctrl_rx_stream_valid;
  wire       [31:0]   mac_io_ctrl_rx_stream_payload;
  wire       [7:0]    mac_io_ctrl_rx_stats_drops;
  wire       [7:0]    mac_io_ctrl_rx_stats_errors;
  wire                mac_io_ctrl_tx_stream_ready;
  wire       [6:0]    mac_io_ctrl_tx_availability;
  wire                mac_io_sim_drop;
  wire                mac_io_sim_error;
  wire                mac_io_sim_commit;
  wire                busCtrl_askWrite;
  wire                busCtrl_askRead;
  wire                busCtrl_doWrite;
  wire                busCtrl_doRead;
  reg                 mac_io_ctrl_tx_flush_driver;
  reg                 mac_io_ctrl_tx_alignerEnable_driver;
  reg                 mac_io_ctrl_rx_flush_driver;
  reg                 mac_io_ctrl_rx_alignerEnable_driver;
  reg                 _zz_io_ctrl_tx_stream_valid;
  reg                 bridge_interruptCtrl_pending;

  MacEth mac (
    .io_phy_rx_valid                     (io_phy_rx_valid                      ), //i
    .io_phy_rx_ready                     (mac_io_phy_rx_ready                  ), //o
    .io_phy_rx_payload_last              (io_phy_rx_payload_last               ), //i
    .io_phy_rx_payload_fragment_error    (io_phy_rx_payload_fragment_error     ), //i
    .io_phy_rx_payload_fragment_data     (io_phy_rx_payload_fragment_data      ), //i
    .io_phy_tx_valid                     (mac_io_phy_tx_valid                  ), //o
    .io_phy_tx_ready                     (io_phy_tx_ready                      ), //i
    .io_phy_tx_payload_last              (mac_io_phy_tx_payload_last           ), //o
    .io_phy_tx_payload_fragment_data     (mac_io_phy_tx_payload_fragment_data  ), //o
    .io_phy_colision                     (io_phy_colision                      ), //i
    .io_phy_busy                         (io_phy_busy                          ), //i
    .io_ctrl_rx_stream_valid             (mac_io_ctrl_rx_stream_valid          ), //o
    .io_ctrl_rx_stream_ready             (mac_io_ctrl_rx_stream_ready          ), //i
    .io_ctrl_rx_stream_payload           (mac_io_ctrl_rx_stream_payload        ), //o
    .io_ctrl_rx_flush                    (mac_io_ctrl_rx_flush_driver          ), //i
    .io_ctrl_rx_alignerEnable            (mac_io_ctrl_rx_alignerEnable_driver  ), //i
    .io_ctrl_rx_stats_clear              (mac_io_ctrl_rx_stats_clear           ), //i
    .io_ctrl_rx_stats_drops              (mac_io_ctrl_rx_stats_drops           ), //o
    .io_ctrl_rx_stats_errors             (mac_io_ctrl_rx_stats_errors          ), //o
    .io_ctrl_tx_stream_valid             (_zz_io_ctrl_tx_stream_valid          ), //i
    .io_ctrl_tx_stream_ready             (mac_io_ctrl_tx_stream_ready          ), //o
    .io_ctrl_tx_stream_payload           (mac_io_ctrl_tx_stream_payload        ), //i
    .io_ctrl_tx_availability             (mac_io_ctrl_tx_availability          ), //o
    .io_ctrl_tx_flush                    (mac_io_ctrl_tx_flush_driver          ), //i
    .io_ctrl_tx_alignerEnable            (mac_io_ctrl_tx_alignerEnable_driver  ), //i
    .io_sim_drop                         (mac_io_sim_drop                      ), //o
    .io_sim_error                        (mac_io_sim_error                     ), //o
    .io_sim_commit                       (mac_io_sim_commit                    ), //o
    .reset                               (reset                                ), //i
    .io_txclk                            (io_txclk                             ), //i
    .io_rxclk                            (io_rxclk                             ), //i
    .clk                                 (clk                                  )  //i
  );
  assign io_phy_rx_ready = mac_io_phy_rx_ready;
  assign io_phy_tx_valid = mac_io_phy_tx_valid;
  assign io_phy_tx_payload_last = mac_io_phy_tx_payload_last;
  assign io_phy_tx_payload_fragment_data = mac_io_phy_tx_payload_fragment_data;
  assign io_apb_PREADY = 1'b1;
  always @(*) begin
    io_apb_PRDATA = 32'h0;
    case(io_apb_PADDR)
      20'h0 : begin
        io_apb_PRDATA[0 : 0] = mac_io_ctrl_tx_flush_driver;
        io_apb_PRDATA[1 : 1] = mac_io_ctrl_tx_stream_ready;
        io_apb_PRDATA[2 : 2] = mac_io_ctrl_tx_alignerEnable_driver;
        io_apb_PRDATA[4 : 4] = mac_io_ctrl_rx_flush_driver;
        io_apb_PRDATA[5 : 5] = mac_io_ctrl_rx_stream_valid;
        io_apb_PRDATA[6 : 6] = mac_io_ctrl_rx_alignerEnable_driver;
      end
      20'h00014 : begin
        io_apb_PRDATA[6 : 0] = mac_io_ctrl_tx_availability;
      end
      20'h00020 : begin
        io_apb_PRDATA[31 : 0] = mac_io_ctrl_rx_stream_payload;
      end
      20'h0002c : begin
        io_apb_PRDATA[7 : 0] = mac_io_ctrl_rx_stats_errors;
        io_apb_PRDATA[15 : 8] = mac_io_ctrl_rx_stats_drops;
      end
      default : begin
      end
    endcase
  end

  assign busCtrl_askWrite = ((io_apb_PSEL[0] && io_apb_PENABLE) && io_apb_PWRITE);
  assign busCtrl_askRead = ((io_apb_PSEL[0] && io_apb_PENABLE) && (! io_apb_PWRITE));
  assign busCtrl_doWrite = (((io_apb_PSEL[0] && io_apb_PENABLE) && io_apb_PREADY) && io_apb_PWRITE);
  assign busCtrl_doRead = (((io_apb_PSEL[0] && io_apb_PENABLE) && io_apb_PREADY) && (! io_apb_PWRITE));
  always @(*) begin
    _zz_io_ctrl_tx_stream_valid = 1'b0;
    case(io_apb_PADDR)
      20'h00010 : begin
        if(busCtrl_doWrite) begin
          _zz_io_ctrl_tx_stream_valid = 1'b1;
        end
      end
      default : begin
      end
    endcase
  end

  assign mac_io_ctrl_tx_stream_payload = io_apb_PWDATA[31 : 0];
  always @(*) begin
    mac_io_ctrl_rx_stream_ready = 1'b0;
    case(io_apb_PADDR)
      20'h00020 : begin
        if(busCtrl_doRead) begin
          mac_io_ctrl_rx_stream_ready = 1'b1;
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    mac_io_ctrl_rx_stats_clear = 1'b0;
    case(io_apb_PADDR)
      20'h0002c : begin
        if(busCtrl_doRead) begin
          mac_io_ctrl_rx_stats_clear = 1'b1;
        end
      end
      default : begin
      end
    endcase
  end

  always @(posedge clk or posedge reset) begin
    if(reset) begin
      mac_io_ctrl_tx_flush_driver <= 1'b1;
      mac_io_ctrl_tx_alignerEnable_driver <= 1'b0;
      mac_io_ctrl_rx_flush_driver <= 1'b1;
      mac_io_ctrl_rx_alignerEnable_driver <= 1'b0;
      bridge_interruptCtrl_pending <= 1'b0;
    end else begin
      bridge_interruptCtrl_pending <= mac_io_ctrl_rx_stream_valid;
      case(io_apb_PADDR)
        20'h0 : begin
          if(busCtrl_doWrite) begin
            mac_io_ctrl_tx_flush_driver <= io_apb_PWDATA[0];
            mac_io_ctrl_tx_alignerEnable_driver <= io_apb_PWDATA[2];
            mac_io_ctrl_rx_flush_driver <= io_apb_PWDATA[4];
            mac_io_ctrl_rx_alignerEnable_driver <= io_apb_PWDATA[6];
          end
        end
        default : begin
        end
      endcase
    end
  end


endmodule

module MacEth (
  input               io_phy_rx_valid,
  output              io_phy_rx_ready,
  input               io_phy_rx_payload_last,
  input               io_phy_rx_payload_fragment_error,
  input      [7:0]    io_phy_rx_payload_fragment_data,
  output              io_phy_tx_valid,
  input               io_phy_tx_ready,
  output              io_phy_tx_payload_last,
  output     [7:0]    io_phy_tx_payload_fragment_data,
  input               io_phy_colision,
  input               io_phy_busy,
  output              io_ctrl_rx_stream_valid,
  input               io_ctrl_rx_stream_ready,
  output     [31:0]   io_ctrl_rx_stream_payload,
  input               io_ctrl_rx_flush,
  input               io_ctrl_rx_alignerEnable,
  input               io_ctrl_rx_stats_clear,
  output     [7:0]    io_ctrl_rx_stats_drops,
  output     [7:0]    io_ctrl_rx_stats_errors,
  input               io_ctrl_tx_stream_valid,
  output              io_ctrl_tx_stream_ready,
  input      [31:0]   io_ctrl_tx_stream_payload,
  output     [6:0]    io_ctrl_tx_availability,
  input               io_ctrl_tx_flush,
  input               io_ctrl_tx_alignerEnable,
  output              io_sim_drop,
  output              io_sim_error,
  output              io_sim_commit,
  input               reset,
  input               io_txclk,
  input               io_rxclk,
  input               clk
);
  wire                bufferCC_14_io_dataOut;
  wire                bufferCC_15_io_dataOut;
  wire                rxFrontend_preamble_io_input_ready;
  wire                rxFrontend_preamble_io_output_valid;
  wire                rxFrontend_preamble_io_output_payload_last;
  wire                rxFrontend_preamble_io_output_payload_fragment_error;
  wire       [7:0]    rxFrontend_preamble_io_output_payload_fragment_data;
  wire                rxFrontend_checker_io_input_ready;
  wire                rxFrontend_checker_io_output_valid;
  wire                rxFrontend_checker_io_output_payload_last;
  wire                rxFrontend_checker_io_output_payload_fragment_error;
  wire       [7:0]    rxFrontend_checker_io_output_payload_fragment_data;
  wire                rxFrontend_aligner_io_input_ready;
  wire                rxFrontend_aligner_io_output_valid;
  wire                rxFrontend_aligner_io_output_payload_last;
  wire                rxFrontend_aligner_io_output_payload_fragment_error;
  wire       [7:0]    rxFrontend_aligner_io_output_payload_fragment_data;
  wire                io_ctrl_rx_alignerEnable_buffercc_io_dataOut;
  wire                rxFrontend_buffer_io_push_stream_ready;
  wire                rxFrontend_buffer_io_push_drop;
  wire                rxFrontend_buffer_io_push_commit;
  wire                rxFrontend_buffer_io_push_error;
  wire                rxFrontend_buffer_io_pop_stream_valid;
  wire       [31:0]   rxFrontend_buffer_io_pop_stream_payload;
  wire       [7:0]    rxFrontend_buffer_io_pop_stats_drops;
  wire       [7:0]    rxFrontend_buffer_io_pop_stats_errors;
  wire                txFrontend_buffer_io_push_stream_ready;
  wire       [6:0]    txFrontend_buffer_io_push_availability;
  wire                txFrontend_buffer_io_pop_stream_valid;
  wire                txFrontend_buffer_io_pop_stream_payload_last;
  wire       [7:0]    txFrontend_buffer_io_pop_stream_payload_fragment_data;
  wire                txBackend_aligner_io_input_ready;
  wire                txBackend_aligner_io_output_valid;
  wire                txBackend_aligner_io_output_payload_last;
  wire       [7:0]    txBackend_aligner_io_output_payload_fragment_data;
  wire                io_ctrl_tx_alignerEnable_buffercc_io_dataOut;
  wire                txBackend_padder_io_input_ready;
  wire                txBackend_padder_io_output_valid;
  wire                txBackend_padder_io_output_payload_last;
  wire       [7:0]    txBackend_padder_io_output_payload_fragment_data;
  wire                txBackend_crc_io_input_ready;
  wire                txBackend_crc_io_output_valid;
  wire                txBackend_crc_io_output_payload_last;
  wire       [7:0]    txBackend_crc_io_output_payload_fragment_data;
  wire                txBackend_header_io_input_ready;
  wire                txBackend_header_io_output_valid;
  wire                txBackend_header_io_output_payload_last;
  wire       [7:0]    txBackend_header_io_output_payload_fragment_data;
  wire                _zz_1;
  wire                rxReset;
  wire                _zz_2;
  wire                txReset;
  wire                txBackend_header_io_output_fire;
  reg                 _zz_io_pop_commit;

  BufferCC_10 bufferCC_14 (
    .io_dataIn     (1'b0                    ), //i
    .io_dataOut    (bufferCC_14_io_dataOut  ), //o
    .io_rxclk      (io_rxclk                ), //i
    ._zz_1         (_zz_1                   )  //i
  );
  BufferCC_11 bufferCC_15 (
    .io_dataIn     (1'b0                    ), //i
    .io_dataOut    (bufferCC_15_io_dataOut  ), //o
    .io_txclk      (io_txclk                ), //i
    ._zz_1         (_zz_2                   )  //i
  );
  MacRxPreamble rxFrontend_preamble (
    .io_input_valid                      (io_phy_rx_valid                                       ), //i
    .io_input_ready                      (rxFrontend_preamble_io_input_ready                    ), //o
    .io_input_payload_last               (io_phy_rx_payload_last                                ), //i
    .io_input_payload_fragment_error     (io_phy_rx_payload_fragment_error                      ), //i
    .io_input_payload_fragment_data      (io_phy_rx_payload_fragment_data                       ), //i
    .io_output_valid                     (rxFrontend_preamble_io_output_valid                   ), //o
    .io_output_ready                     (rxFrontend_checker_io_input_ready                     ), //i
    .io_output_payload_last              (rxFrontend_preamble_io_output_payload_last            ), //o
    .io_output_payload_fragment_error    (rxFrontend_preamble_io_output_payload_fragment_error  ), //o
    .io_output_payload_fragment_data     (rxFrontend_preamble_io_output_payload_fragment_data   ), //o
    .io_rxclk                            (io_rxclk                                              ), //i
    .rxReset                             (rxReset                                               )  //i
  );
  MacRxChecker rxFrontend_checker (
    .io_input_valid                      (rxFrontend_preamble_io_output_valid                   ), //i
    .io_input_ready                      (rxFrontend_checker_io_input_ready                     ), //o
    .io_input_payload_last               (rxFrontend_preamble_io_output_payload_last            ), //i
    .io_input_payload_fragment_error     (rxFrontend_preamble_io_output_payload_fragment_error  ), //i
    .io_input_payload_fragment_data      (rxFrontend_preamble_io_output_payload_fragment_data   ), //i
    .io_output_valid                     (rxFrontend_checker_io_output_valid                    ), //o
    .io_output_ready                     (rxFrontend_aligner_io_input_ready                     ), //i
    .io_output_payload_last              (rxFrontend_checker_io_output_payload_last             ), //o
    .io_output_payload_fragment_error    (rxFrontend_checker_io_output_payload_fragment_error   ), //o
    .io_output_payload_fragment_data     (rxFrontend_checker_io_output_payload_fragment_data    ), //o
    .io_rxclk                            (io_rxclk                                              ), //i
    .rxReset                             (rxReset                                               )  //i
  );
  MacRxAligner rxFrontend_aligner (
    .io_enable                           (io_ctrl_rx_alignerEnable_buffercc_io_dataOut         ), //i
    .io_input_valid                      (rxFrontend_checker_io_output_valid                   ), //i
    .io_input_ready                      (rxFrontend_aligner_io_input_ready                    ), //o
    .io_input_payload_last               (rxFrontend_checker_io_output_payload_last            ), //i
    .io_input_payload_fragment_error     (rxFrontend_checker_io_output_payload_fragment_error  ), //i
    .io_input_payload_fragment_data      (rxFrontend_checker_io_output_payload_fragment_data   ), //i
    .io_output_valid                     (rxFrontend_aligner_io_output_valid                   ), //o
    .io_output_ready                     (rxFrontend_buffer_io_push_stream_ready               ), //i
    .io_output_payload_last              (rxFrontend_aligner_io_output_payload_last            ), //o
    .io_output_payload_fragment_error    (rxFrontend_aligner_io_output_payload_fragment_error  ), //o
    .io_output_payload_fragment_data     (rxFrontend_aligner_io_output_payload_fragment_data   ), //o
    .io_rxclk                            (io_rxclk                                             ), //i
    .rxReset                             (rxReset                                              )  //i
  );
  BufferCC_12 io_ctrl_rx_alignerEnable_buffercc (
    .io_dataIn     (io_ctrl_rx_alignerEnable                      ), //i
    .io_dataOut    (io_ctrl_rx_alignerEnable_buffercc_io_dataOut  ), //o
    .io_rxclk      (io_rxclk                                      ), //i
    .rxReset       (rxReset                                       )  //i
  );
  MacRxBuffer rxFrontend_buffer (
    .io_push_stream_valid                     (rxFrontend_aligner_io_output_valid                   ), //i
    .io_push_stream_ready                     (rxFrontend_buffer_io_push_stream_ready               ), //o
    .io_push_stream_payload_last              (rxFrontend_aligner_io_output_payload_last            ), //i
    .io_push_stream_payload_fragment_error    (rxFrontend_aligner_io_output_payload_fragment_error  ), //i
    .io_push_stream_payload_fragment_data     (rxFrontend_aligner_io_output_payload_fragment_data   ), //i
    .io_push_drop                             (rxFrontend_buffer_io_push_drop                       ), //o
    .io_push_commit                           (rxFrontend_buffer_io_push_commit                     ), //o
    .io_push_error                            (rxFrontend_buffer_io_push_error                      ), //o
    .io_pop_stream_valid                      (rxFrontend_buffer_io_pop_stream_valid                ), //o
    .io_pop_stream_ready                      (io_ctrl_rx_stream_ready                              ), //i
    .io_pop_stream_payload                    (rxFrontend_buffer_io_pop_stream_payload              ), //o
    .io_pop_stats_clear                       (io_ctrl_rx_stats_clear                               ), //i
    .io_pop_stats_drops                       (rxFrontend_buffer_io_pop_stats_drops                 ), //o
    .io_pop_stats_errors                      (rxFrontend_buffer_io_pop_stats_errors                ), //o
    .io_rxclk                                 (io_rxclk                                             ), //i
    .rxReset                                  (rxReset                                              ), //i
    .clk                                      (clk                                                  ), //i
    .reset                                    (reset                                                ), //i
    .io_ctrl_rx_flush                         (io_ctrl_rx_flush                                     )  //i
  );
  MacTxBuffer txFrontend_buffer (
    .io_push_stream_valid                   (io_ctrl_tx_stream_valid                                ), //i
    .io_push_stream_ready                   (txFrontend_buffer_io_push_stream_ready                 ), //o
    .io_push_stream_payload                 (io_ctrl_tx_stream_payload                              ), //i
    .io_push_availability                   (txFrontend_buffer_io_push_availability                 ), //o
    .io_pop_stream_valid                    (txFrontend_buffer_io_pop_stream_valid                  ), //o
    .io_pop_stream_ready                    (txBackend_aligner_io_input_ready                       ), //i
    .io_pop_stream_payload_last             (txFrontend_buffer_io_pop_stream_payload_last           ), //o
    .io_pop_stream_payload_fragment_data    (txFrontend_buffer_io_pop_stream_payload_fragment_data  ), //o
    .io_pop_redo                            (1'b0                                                   ), //i
    .io_pop_commit                          (_zz_io_pop_commit                                      ), //i
    .clk                                    (clk                                                    ), //i
    .reset                                  (reset                                                  ), //i
    .io_ctrl_tx_flush                       (io_ctrl_tx_flush                                       ), //i
    .io_txclk                               (io_txclk                                               ), //i
    .txReset                                (txReset                                                )  //i
  );
  MacTxAligner txBackend_aligner (
    .io_enable                          (io_ctrl_tx_alignerEnable_buffercc_io_dataOut           ), //i
    .io_input_valid                     (txFrontend_buffer_io_pop_stream_valid                  ), //i
    .io_input_ready                     (txBackend_aligner_io_input_ready                       ), //o
    .io_input_payload_last              (txFrontend_buffer_io_pop_stream_payload_last           ), //i
    .io_input_payload_fragment_data     (txFrontend_buffer_io_pop_stream_payload_fragment_data  ), //i
    .io_output_valid                    (txBackend_aligner_io_output_valid                      ), //o
    .io_output_ready                    (txBackend_padder_io_input_ready                        ), //i
    .io_output_payload_last             (txBackend_aligner_io_output_payload_last               ), //o
    .io_output_payload_fragment_data    (txBackend_aligner_io_output_payload_fragment_data      ), //o
    .io_txclk                           (io_txclk                                               ), //i
    .txReset                            (txReset                                                )  //i
  );
  BufferCC_13 io_ctrl_tx_alignerEnable_buffercc (
    .io_dataIn     (io_ctrl_tx_alignerEnable                      ), //i
    .io_dataOut    (io_ctrl_tx_alignerEnable_buffercc_io_dataOut  ), //o
    .io_txclk      (io_txclk                                      ), //i
    .txReset       (txReset                                       )  //i
  );
  MacTxPadder txBackend_padder (
    .io_input_valid                     (txBackend_aligner_io_output_valid                  ), //i
    .io_input_ready                     (txBackend_padder_io_input_ready                    ), //o
    .io_input_payload_last              (txBackend_aligner_io_output_payload_last           ), //i
    .io_input_payload_fragment_data     (txBackend_aligner_io_output_payload_fragment_data  ), //i
    .io_output_valid                    (txBackend_padder_io_output_valid                   ), //o
    .io_output_ready                    (txBackend_crc_io_input_ready                       ), //i
    .io_output_payload_last             (txBackend_padder_io_output_payload_last            ), //o
    .io_output_payload_fragment_data    (txBackend_padder_io_output_payload_fragment_data   ), //o
    .io_txclk                           (io_txclk                                           ), //i
    .txReset                            (txReset                                            )  //i
  );
  MacTxCrc txBackend_crc (
    .io_input_valid                     (txBackend_padder_io_output_valid                  ), //i
    .io_input_ready                     (txBackend_crc_io_input_ready                      ), //o
    .io_input_payload_last              (txBackend_padder_io_output_payload_last           ), //i
    .io_input_payload_fragment_data     (txBackend_padder_io_output_payload_fragment_data  ), //i
    .io_output_valid                    (txBackend_crc_io_output_valid                     ), //o
    .io_output_ready                    (txBackend_header_io_input_ready                   ), //i
    .io_output_payload_last             (txBackend_crc_io_output_payload_last              ), //o
    .io_output_payload_fragment_data    (txBackend_crc_io_output_payload_fragment_data     ), //o
    .io_txclk                           (io_txclk                                          ), //i
    .txReset                            (txReset                                           )  //i
  );
  MacTxHeader txBackend_header (
    .io_input_valid                     (txBackend_crc_io_output_valid                     ), //i
    .io_input_ready                     (txBackend_header_io_input_ready                   ), //o
    .io_input_payload_last              (txBackend_crc_io_output_payload_last              ), //i
    .io_input_payload_fragment_data     (txBackend_crc_io_output_payload_fragment_data     ), //i
    .io_output_valid                    (txBackend_header_io_output_valid                  ), //o
    .io_output_ready                    (io_phy_tx_ready                                   ), //i
    .io_output_payload_last             (txBackend_header_io_output_payload_last           ), //o
    .io_output_payload_fragment_data    (txBackend_header_io_output_payload_fragment_data  ), //o
    .io_txclk                           (io_txclk                                          ), //i
    .txReset                            (txReset                                           )  //i
  );
  assign _zz_1 = (reset || io_ctrl_rx_flush);
  assign rxReset = bufferCC_14_io_dataOut;
  assign _zz_2 = (reset || io_ctrl_tx_flush);
  assign txReset = bufferCC_15_io_dataOut;
  assign io_phy_rx_ready = rxFrontend_preamble_io_input_ready;
  assign io_sim_drop = rxFrontend_buffer_io_push_drop;
  assign io_sim_commit = rxFrontend_buffer_io_push_commit;
  assign io_sim_error = rxFrontend_buffer_io_push_error;
  assign io_ctrl_rx_stream_valid = rxFrontend_buffer_io_pop_stream_valid;
  assign io_ctrl_rx_stream_payload = rxFrontend_buffer_io_pop_stream_payload;
  assign io_ctrl_rx_stats_errors = rxFrontend_buffer_io_pop_stats_errors;
  assign io_ctrl_rx_stats_drops = rxFrontend_buffer_io_pop_stats_drops;
  assign io_ctrl_tx_stream_ready = txFrontend_buffer_io_push_stream_ready;
  assign io_ctrl_tx_availability = txFrontend_buffer_io_push_availability;
  assign io_phy_tx_valid = txBackend_header_io_output_valid;
  assign io_phy_tx_payload_last = txBackend_header_io_output_payload_last;
  assign io_phy_tx_payload_fragment_data = txBackend_header_io_output_payload_fragment_data;
  assign txBackend_header_io_output_fire = (txBackend_header_io_output_valid && io_phy_tx_ready);
  always @(posedge io_txclk or posedge txReset) begin
    if(txReset) begin
      _zz_io_pop_commit <= 1'b0;
    end else begin
      _zz_io_pop_commit <= (txBackend_header_io_output_fire && txBackend_header_io_output_payload_last);
    end
  end


endmodule

module MacTxHeader (
  input               io_input_valid,
  output reg          io_input_ready,
  input               io_input_payload_last,
  input      [7:0]    io_input_payload_fragment_data,
  output              io_output_valid,
  input               io_output_ready,
  output reg          io_output_payload_last,
  output reg [7:0]    io_output_payload_fragment_data,
  input               io_txclk,
  input               txReset
);
  reg        [3:0]    state;
  wire                when_MacTx_l293;
  wire                when_MacTx_l300;
  wire                io_output_fire;
  wire                io_input_fire;
  wire                when_MacTx_l305;

  assign io_output_valid = io_input_valid;
  always @(*) begin
    io_output_payload_last = 1'b0;
    if(when_MacTx_l293) begin
      io_output_payload_last = io_input_payload_last;
    end
  end

  always @(*) begin
    io_input_ready = 1'b0;
    if(when_MacTx_l293) begin
      io_input_ready = io_output_ready;
    end
  end

  assign when_MacTx_l293 = (state == 4'b1000);
  always @(*) begin
    if(when_MacTx_l293) begin
      io_output_payload_fragment_data = io_input_payload_fragment_data;
    end else begin
      io_output_payload_fragment_data = 8'h0;
      io_output_payload_fragment_data[0] = 1'b1;
      io_output_payload_fragment_data[2] = 1'b1;
      io_output_payload_fragment_data[4] = 1'b1;
      io_output_payload_fragment_data[6] = 1'b1;
      if(when_MacTx_l300) begin
        io_output_payload_fragment_data[7] = 1'b1;
      end
    end
  end

  assign when_MacTx_l300 = (state == 4'b0111);
  assign io_output_fire = (io_output_valid && io_output_ready);
  assign io_input_fire = (io_input_valid && io_input_ready);
  assign when_MacTx_l305 = (io_input_fire && io_input_payload_last);
  always @(posedge io_txclk or posedge txReset) begin
    if(txReset) begin
      state <= 4'b0000;
    end else begin
      if(!when_MacTx_l293) begin
        if(io_output_fire) begin
          state <= (state + 4'b0001);
        end
      end
      if(when_MacTx_l305) begin
        state <= 4'b0000;
      end
    end
  end


endmodule

module MacTxCrc (
  input               io_input_valid,
  output reg          io_input_ready,
  input               io_input_payload_last,
  input      [7:0]    io_input_payload_fragment_data,
  output reg          io_output_valid,
  input               io_output_ready,
  output reg          io_output_payload_last,
  output reg [7:0]    io_output_payload_fragment_data,
  input               io_txclk,
  input               txReset
);
  wire                crc_2_io_flush;
  wire       [31:0]   crc_2_io_result;
  wire       [31:0]   crc_2_io_resultNext;
  reg        [7:0]    _zz_io_output_payload_fragment_data;
  reg                 emitCrc;
  wire                io_input_fire;
  wire                when_MacTx_l224;
  wire                io_output_fire;
  wire                when_MacTx_l224_1;
  reg        [1:0]    counter;
  wire                io_input_fire_1;
  wire                io_output_fire_1;
  wire                when_MacTx_l233;
  wire                when_MacTx_l241;

  Crc_1 crc_2 (
    .io_flush            (crc_2_io_flush                  ), //i
    .io_input_valid      (io_input_fire_1                 ), //i
    .io_input_payload    (io_input_payload_fragment_data  ), //i
    .io_result           (crc_2_io_result                 ), //o
    .io_resultNext       (crc_2_io_resultNext             ), //o
    .io_txclk            (io_txclk                        ), //i
    .txReset             (txReset                         )  //i
  );
  always @(*) begin
    case(counter)
      2'b00 : begin
        _zz_io_output_payload_fragment_data = crc_2_io_result[7 : 0];
      end
      2'b01 : begin
        _zz_io_output_payload_fragment_data = crc_2_io_result[15 : 8];
      end
      2'b10 : begin
        _zz_io_output_payload_fragment_data = crc_2_io_result[23 : 16];
      end
      default : begin
        _zz_io_output_payload_fragment_data = crc_2_io_result[31 : 24];
      end
    endcase
  end

  assign io_input_fire = (io_input_valid && io_input_ready);
  assign when_MacTx_l224 = (io_input_fire && io_input_payload_last);
  assign io_output_fire = (io_output_valid && io_output_ready);
  assign when_MacTx_l224_1 = (io_output_fire && io_output_payload_last);
  assign io_input_fire_1 = (io_input_valid && io_input_ready);
  assign io_output_fire_1 = (io_output_valid && io_output_ready);
  assign crc_2_io_flush = (io_output_fire_1 && io_output_payload_last);
  always @(*) begin
    io_output_payload_last = 1'b0;
    if(!when_MacTx_l233) begin
      if(when_MacTx_l241) begin
        io_output_payload_last = 1'b1;
      end
    end
  end

  assign when_MacTx_l233 = (! emitCrc);
  always @(*) begin
    if(when_MacTx_l233) begin
      io_output_valid = io_input_valid;
    end else begin
      io_output_valid = 1'b1;
    end
  end

  always @(*) begin
    if(when_MacTx_l233) begin
      io_output_payload_fragment_data = io_input_payload_fragment_data;
    end else begin
      io_output_payload_fragment_data = _zz_io_output_payload_fragment_data;
    end
  end

  always @(*) begin
    if(when_MacTx_l233) begin
      io_input_ready = io_output_ready;
    end else begin
      io_input_ready = 1'b0;
    end
  end

  assign when_MacTx_l241 = (counter == 2'b11);
  always @(posedge io_txclk or posedge txReset) begin
    if(txReset) begin
      emitCrc <= 1'b0;
      counter <= 2'b00;
    end else begin
      if(when_MacTx_l224) begin
        emitCrc <= 1'b1;
      end
      if(when_MacTx_l224_1) begin
        emitCrc <= 1'b0;
      end
      if(!when_MacTx_l233) begin
        if(when_MacTx_l241) begin
          if(io_output_ready) begin
            emitCrc <= 1'b0;
          end
        end
        if(io_output_ready) begin
          counter <= (counter + 2'b01);
        end
      end
    end
  end


endmodule

module MacTxPadder (
  input               io_input_valid,
  output              io_input_ready,
  input               io_input_payload_last,
  input      [7:0]    io_input_payload_fragment_data,
  output reg          io_output_valid,
  input               io_output_ready,
  output reg          io_output_payload_last,
  output reg [7:0]    io_output_payload_fragment_data,
  input               io_txclk,
  input               txReset
);
  reg        [5:0]    counter;
  wire                ok;
  wire                io_input_fire;
  reg                 io_input_payload_first;
  wire                fill;
  wire                io_output_fire;
  wire                when_MacTx_l322;
  wire                io_output_fire_1;
  wire                when_MacTx_l325;
  wire                _zz_io_input_ready;
  wire                when_MacTx_l329;

  assign ok = (counter == 6'h3b);
  assign io_input_fire = (io_input_valid && io_input_ready);
  assign fill = ((counter != 6'h0) && io_input_payload_first);
  assign io_output_fire = (io_output_valid && io_output_ready);
  assign when_MacTx_l322 = ((! ok) && io_output_fire);
  assign io_output_fire_1 = (io_output_valid && io_output_ready);
  assign when_MacTx_l325 = (io_output_fire_1 && io_output_payload_last);
  assign _zz_io_input_ready = (! fill);
  assign io_input_ready = (io_output_ready && _zz_io_input_ready);
  always @(*) begin
    io_output_valid = (io_input_valid && _zz_io_input_ready);
    if(fill) begin
      io_output_valid = 1'b1;
    end
  end

  always @(*) begin
    io_output_payload_last = io_input_payload_last;
    if(when_MacTx_l329) begin
      io_output_payload_last = 1'b0;
    end
    if(fill) begin
      io_output_payload_last = ok;
    end
  end

  always @(*) begin
    io_output_payload_fragment_data = io_input_payload_fragment_data;
    if(fill) begin
      io_output_payload_fragment_data = 8'h0;
    end
  end

  assign when_MacTx_l329 = (! ok);
  always @(posedge io_txclk or posedge txReset) begin
    if(txReset) begin
      counter <= 6'h0;
      io_input_payload_first <= 1'b1;
    end else begin
      if(io_input_fire) begin
        io_input_payload_first <= io_input_payload_last;
      end
      if(when_MacTx_l322) begin
        counter <= (counter + 6'h01);
      end
      if(when_MacTx_l325) begin
        counter <= 6'h0;
      end
    end
  end


endmodule

module BufferCC_13 (
  input               io_dataIn,
  output              io_dataOut,
  input               io_txclk,
  input               txReset
);
  (* async_reg = "true" *) reg                 buffers_0;
  (* async_reg = "true" *) reg                 buffers_1;

  assign io_dataOut = buffers_1;
  always @(posedge io_txclk) begin
    buffers_0 <= io_dataIn;
    buffers_1 <= buffers_0;
  end


endmodule

module MacTxAligner (
  input               io_enable,
  input               io_input_valid,
  output reg          io_input_ready,
  input               io_input_payload_last,
  input      [7:0]    io_input_payload_fragment_data,
  output reg          io_output_valid,
  input               io_output_ready,
  output              io_output_payload_last,
  output     [7:0]    io_output_payload_fragment_data,
  input               io_txclk,
  input               txReset
);
  reg        [1:0]    state;
  wire                when_MacTx_l267;
  wire                io_input_fire;
  wire                when_MacTx_l275;

  always @(*) begin
    io_output_valid = io_input_valid;
    if(when_MacTx_l267) begin
      io_output_valid = 1'b0;
    end
  end

  always @(*) begin
    io_input_ready = io_output_ready;
    if(when_MacTx_l267) begin
      io_input_ready = 1'b1;
    end
  end

  assign io_output_payload_last = io_input_payload_last;
  assign io_output_payload_fragment_data = io_input_payload_fragment_data;
  assign when_MacTx_l267 = (io_enable && (state != 2'b10));
  assign io_input_fire = (io_input_valid && io_input_ready);
  assign when_MacTx_l275 = (io_input_fire && io_input_payload_last);
  always @(posedge io_txclk or posedge txReset) begin
    if(txReset) begin
      state <= 2'b00;
    end else begin
      if(when_MacTx_l267) begin
        if(io_input_valid) begin
          state <= (state + 2'b01);
        end
      end
      if(when_MacTx_l275) begin
        state <= 2'b00;
      end
    end
  end


endmodule

module MacTxBuffer (
  input               io_push_stream_valid,
  output              io_push_stream_ready,
  input      [31:0]   io_push_stream_payload,
  output     [6:0]    io_push_availability,
  output reg          io_pop_stream_valid,
  input               io_pop_stream_ready,
  output reg          io_pop_stream_payload_last,
  output     [7:0]    io_pop_stream_payload_fragment_data,
  input               io_pop_redo,
  input               io_pop_commit,
  input               clk,
  input               reset,
  input               io_ctrl_tx_flush,
  input               io_txclk,
  input               txReset
);
  reg                 fifo_io_pop_stream_ready;
  wire                fifo_io_push_stream_ready;
  wire       [6:0]    fifo_io_push_availability;
  wire                fifo_io_pop_stream_valid;
  wire       [31:0]   fifo_io_pop_stream_payload;
  wire       [10:0]   _zz_push_wordCountMinusOne;
  wire       [31:0]   _zz_push_length;
  reg        [7:0]    _zz_io_pop_stream_payload_fragment_data;
  wire       [31:0]   _zz_pop_length;
  reg                 push_commit;
  reg        `push_State_binary_sequential_type push_state_1;
  reg        [10:0]   push_length;
  wire       [5:0]    push_wordCountMinusOne;
  reg        [5:0]    push_wordCounter;
  wire                fifo_io_push_stream_fire;
  wire                io_push_stream_fire;
  wire                when_MacTx_l149;
  reg        `pop_State_binary_sequential_type pop_state_1;
  reg        [10:0]   pop_length;
  wire       [10:0]   pop_lengthMinusOne;
  reg        [5:0]    pop_wordCounter;
  wire       [5:0]    pop_wordCountEndAt;
  wire       [1:0]    pop_spliterEndAt;
  reg        [1:0]    pop_spliter;
  wire                when_MacTx_l194;
  wire                when_MacTx_l199;
  `ifndef SYNTHESIS
  reg [47:0] push_state_1_string;
  reg [47:0] pop_state_1_string;
  `endif


  assign _zz_push_wordCountMinusOne = (push_length - 11'h001);
  assign _zz_push_length = io_push_stream_payload;
  assign _zz_pop_length = fifo_io_pop_stream_payload;
  MacTxManagedStreamFifoCc fifo (
    .io_push_stream_valid      (io_push_stream_valid        ), //i
    .io_push_stream_ready      (fifo_io_push_stream_ready   ), //o
    .io_push_stream_payload    (io_push_stream_payload      ), //i
    .io_push_commit            (push_commit                 ), //i
    .io_push_availability      (fifo_io_push_availability   ), //o
    .io_pop_stream_valid       (fifo_io_pop_stream_valid    ), //o
    .io_pop_stream_ready       (fifo_io_pop_stream_ready    ), //i
    .io_pop_stream_payload     (fifo_io_pop_stream_payload  ), //o
    .io_pop_redo               (io_pop_redo                 ), //i
    .io_pop_commit             (io_pop_commit               ), //i
    .clk                       (clk                         ), //i
    .reset                     (reset                       ), //i
    .io_ctrl_tx_flush          (io_ctrl_tx_flush            ), //i
    .io_txclk                  (io_txclk                    ), //i
    .txReset                   (txReset                     )  //i
  );
  always @(*) begin
    case(pop_spliter)
      2'b00 : begin
        _zz_io_pop_stream_payload_fragment_data = fifo_io_pop_stream_payload[7 : 0];
      end
      2'b01 : begin
        _zz_io_pop_stream_payload_fragment_data = fifo_io_pop_stream_payload[15 : 8];
      end
      2'b10 : begin
        _zz_io_pop_stream_payload_fragment_data = fifo_io_pop_stream_payload[23 : 16];
      end
      default : begin
        _zz_io_pop_stream_payload_fragment_data = fifo_io_pop_stream_payload[31 : 24];
      end
    endcase
  end

  `ifndef SYNTHESIS
  always @(*) begin
    case(push_state_1)
      `push_State_binary_sequential_LENGTH : push_state_1_string = "LENGTH";
      `push_State_binary_sequential_DATA : push_state_1_string = "DATA  ";
      default : push_state_1_string = "??????";
    endcase
  end
  always @(*) begin
    case(pop_state_1)
      `pop_State_binary_sequential_LENGTH : pop_state_1_string = "LENGTH";
      `pop_State_binary_sequential_DATA : pop_state_1_string = "DATA  ";
      `pop_State_binary_sequential_WAIT_1 : pop_state_1_string = "WAIT_1";
      default : pop_state_1_string = "??????";
    endcase
  end
  `endif

  assign io_push_availability = fifo_io_push_availability;
  assign io_push_stream_ready = fifo_io_push_stream_ready;
  assign push_wordCountMinusOne = (_zz_push_wordCountMinusOne >>> 5);
  assign fifo_io_push_stream_fire = (io_push_stream_valid && fifo_io_push_stream_ready);
  assign io_push_stream_fire = (io_push_stream_valid && io_push_stream_ready);
  assign when_MacTx_l149 = (push_wordCounter == push_wordCountMinusOne);
  assign pop_lengthMinusOne = (pop_length - 11'h001);
  assign pop_wordCountEndAt = (pop_lengthMinusOne >>> 5);
  assign pop_spliterEndAt = pop_lengthMinusOne[4 : 3];
  always @(*) begin
    fifo_io_pop_stream_ready = 1'b0;
    case(pop_state_1)
      `pop_State_binary_sequential_LENGTH : begin
        if(fifo_io_pop_stream_valid) begin
          fifo_io_pop_stream_ready = 1'b1;
        end
      end
      `pop_State_binary_sequential_DATA : begin
        if(io_pop_stream_ready) begin
          if(when_MacTx_l194) begin
            fifo_io_pop_stream_ready = 1'b1;
          end
          if(when_MacTx_l199) begin
            fifo_io_pop_stream_ready = 1'b1;
          end
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    io_pop_stream_valid = 1'b0;
    case(pop_state_1)
      `pop_State_binary_sequential_LENGTH : begin
      end
      `pop_State_binary_sequential_DATA : begin
        io_pop_stream_valid = 1'b1;
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    io_pop_stream_payload_last = 1'b0;
    case(pop_state_1)
      `pop_State_binary_sequential_LENGTH : begin
      end
      `pop_State_binary_sequential_DATA : begin
        if(io_pop_stream_ready) begin
          if(when_MacTx_l194) begin
            io_pop_stream_payload_last = 1'b1;
          end
        end
      end
      default : begin
      end
    endcase
  end

  assign io_pop_stream_payload_fragment_data = _zz_io_pop_stream_payload_fragment_data;
  assign when_MacTx_l194 = ((pop_wordCounter == pop_wordCountEndAt) && (pop_spliter == pop_spliterEndAt));
  assign when_MacTx_l199 = (pop_spliter == 2'b11);
  always @(posedge clk) begin
    push_commit <= 1'b0;
    case(push_state_1)
      `push_State_binary_sequential_LENGTH : begin
        push_wordCounter <= 6'h0;
        if(fifo_io_push_stream_fire) begin
          push_length <= _zz_push_length[10:0];
        end
      end
      default : begin
        if(io_push_stream_fire) begin
          push_wordCounter <= (push_wordCounter + 6'h01);
          if(when_MacTx_l149) begin
            push_commit <= 1'b1;
          end
        end
      end
    endcase
  end

  always @(posedge clk or posedge reset) begin
    if(reset) begin
      push_state_1 <= `push_State_binary_sequential_LENGTH;
    end else begin
      if(io_ctrl_tx_flush) begin
      push_state_1 <= `push_State_binary_sequential_LENGTH;
      end else begin
        case(push_state_1)
          `push_State_binary_sequential_LENGTH : begin
            if(fifo_io_push_stream_fire) begin
              push_state_1 <= `push_State_binary_sequential_DATA;
            end
          end
          default : begin
            if(io_push_stream_fire) begin
              if(when_MacTx_l149) begin
                push_state_1 <= `push_State_binary_sequential_LENGTH;
              end
            end
          end
        endcase
      end
    end
  end

  always @(posedge io_txclk or posedge txReset) begin
    if(txReset) begin
      pop_state_1 <= `pop_State_binary_sequential_LENGTH;
    end else begin
      case(pop_state_1)
        `pop_State_binary_sequential_LENGTH : begin
          if(fifo_io_pop_stream_valid) begin
            pop_state_1 <= `pop_State_binary_sequential_DATA;
          end
        end
        `pop_State_binary_sequential_DATA : begin
          if(io_pop_stream_ready) begin
            if(when_MacTx_l194) begin
              pop_state_1 <= `pop_State_binary_sequential_WAIT_1;
            end
          end
        end
        default : begin
          if(io_pop_commit) begin
            pop_state_1 <= `pop_State_binary_sequential_LENGTH;
          end
        end
      endcase
      if(io_pop_redo) begin
        pop_state_1 <= `pop_State_binary_sequential_LENGTH;
      end
    end
  end

  always @(posedge io_txclk) begin
    case(pop_state_1)
      `pop_State_binary_sequential_LENGTH : begin
        pop_wordCounter <= 6'h0;
        pop_spliter <= 2'b00;
        if(fifo_io_pop_stream_valid) begin
          pop_length <= _zz_pop_length[10:0];
        end
      end
      `pop_State_binary_sequential_DATA : begin
        if(io_pop_stream_ready) begin
          pop_spliter <= (pop_spliter + 2'b01);
          if(when_MacTx_l199) begin
            pop_wordCounter <= (pop_wordCounter + 6'h01);
          end
        end
      end
      default : begin
      end
    endcase
  end


endmodule

module MacRxBuffer (
  input               io_push_stream_valid,
  output              io_push_stream_ready,
  input               io_push_stream_payload_last,
  input               io_push_stream_payload_fragment_error,
  input      [7:0]    io_push_stream_payload_fragment_data,
  output              io_push_drop,
  output              io_push_commit,
  output              io_push_error,
  output              io_pop_stream_valid,
  input               io_pop_stream_ready,
  output     [31:0]   io_pop_stream_payload,
  input               io_pop_stats_clear,
  output     [7:0]    io_pop_stats_drops,
  output     [7:0]    io_pop_stats_errors,
  input               io_rxclk,
  input               rxReset,
  input               clk,
  input               reset,
  input               io_ctrl_rx_flush
);
  wire                pulseCCByToggle_2_io_pulseIn;
  wire                pulseCCByToggle_3_io_pulseIn;
  reg        [31:0]   _zz_ram_port1;
  wire                popToPush_io_input_ready;
  wire                popToPush_io_output_valid;
  wire       [6:0]    popToPush_io_output_payload;
  wire                pushToPop_io_input_ready;
  wire                pushToPop_io_output_valid;
  wire       [6:0]    pushToPop_io_output_payload;
  wire                pulseCCByToggle_2_io_pulseOut;
  wire                pulseCCByToggle_3_io_pulseOut;
  wire       [10:0]   _zz_push_port_payload_data;
  wire       [7:0]    _zz_pop_stats_drops;
  wire       [0:0]    _zz_pop_stats_drops_1;
  wire       [7:0]    _zz_pop_stats_errors;
  wire       [0:0]    _zz_pop_stats_errors_1;
  reg                 _zz_1;
  reg        [6:0]    push_currentPtr;
  reg        [6:0]    push_oldPtr;
  wire       [6:0]    push_currentPtrPlusOne;
  reg        [6:0]    push_popPtr;
  reg        [23:0]   push_buffer;
  reg        [1:0]    push_state_1;
  reg        [10:0]   push_length;
  reg                 push_port_valid;
  reg        [5:0]    push_port_payload_address;
  reg        [31:0]   push_port_payload_data;
  reg                 push_error;
  reg                 push_drop;
  wire                io_push_stream_fire;
  wire                when_MacRx_l232;
  reg                 push_doWrite;
  wire                io_push_stream_fire_1;
  wire                when_MacRx_l240;
  wire                when_MacRx_l240_1;
  wire                when_MacRx_l240_2;
  wire                when_MacRx_l243;
  wire                push_full;
  wire                io_push_stream_fire_2;
  reg                 push_cleanup;
  reg                 push_commit;
  wire                when_MacRx_l265;
  wire                when_MacRx_l270;
  reg        [6:0]    pop_currentPtr;
  reg        [6:0]    pop_pushPtr;
  wire                pop_cmd_valid;
  wire                pop_cmd_ready;
  wire       [5:0]    pop_cmd_payload;
  wire                _zz_io_pop_stream_valid;
  wire                _zz_pop_cmd_ready;
  reg                 _zz_io_pop_stream_valid_1;
  wire                pop_cmd_fire;
  reg        [7:0]    pop_stats_drops;
  reg        [7:0]    pop_stats_errors;
  reg [31:0] ram [0:63];

  assign _zz_push_port_payload_data = push_length;
  assign _zz_pop_stats_drops_1 = (pulseCCByToggle_2_io_pulseOut && (pop_stats_drops != 8'hff));
  assign _zz_pop_stats_drops = {7'd0, _zz_pop_stats_drops_1};
  assign _zz_pop_stats_errors_1 = (pulseCCByToggle_3_io_pulseOut && (pop_stats_errors != 8'hff));
  assign _zz_pop_stats_errors = {7'd0, _zz_pop_stats_errors_1};
  always @(posedge io_rxclk) begin
    if(_zz_1) begin
      ram[push_port_payload_address] <= push_port_payload_data;
    end
  end

  always @(posedge clk) begin
    if(pop_cmd_ready) begin
      _zz_ram_port1 <= ram[pop_cmd_payload];
    end
  end

  StreamCCByToggle_2 popToPush (
    .io_input_valid       (1'b1                         ), //i
    .io_input_ready       (popToPush_io_input_ready     ), //o
    .io_input_payload     (pop_currentPtr               ), //i
    .io_output_valid      (popToPush_io_output_valid    ), //o
    .io_output_ready      (1'b1                         ), //i
    .io_output_payload    (popToPush_io_output_payload  ), //o
    .clk                  (clk                          ), //i
    .reset                (reset                        ), //i
    .io_ctrl_rx_flush     (io_ctrl_rx_flush             ), //i
    .io_rxclk             (io_rxclk                     ), //i
    .rxReset              (rxReset                      )  //i
  );
  StreamCCByToggle_3 pushToPop (
    .io_input_valid       (1'b1                         ), //i
    .io_input_ready       (pushToPop_io_input_ready     ), //o
    .io_input_payload     (push_oldPtr                  ), //i
    .io_output_valid      (pushToPop_io_output_valid    ), //o
    .io_output_ready      (1'b1                         ), //i
    .io_output_payload    (pushToPop_io_output_payload  ), //o
    .io_rxclk             (io_rxclk                     ), //i
    .rxReset              (rxReset                      ), //i
    .clk                  (clk                          ), //i
    .reset                (reset                        ), //i
    .io_ctrl_rx_flush     (io_ctrl_rx_flush             )  //i
  );
  PulseCCByToggle pulseCCByToggle_2 (
    .io_pulseIn          (pulseCCByToggle_2_io_pulseIn   ), //i
    .io_pulseOut         (pulseCCByToggle_2_io_pulseOut  ), //o
    .io_rxclk            (io_rxclk                       ), //i
    .rxReset             (rxReset                        ), //i
    .clk                 (clk                            ), //i
    .reset               (reset                          ), //i
    .io_ctrl_rx_flush    (io_ctrl_rx_flush               )  //i
  );
  PulseCCByToggle pulseCCByToggle_3 (
    .io_pulseIn          (pulseCCByToggle_3_io_pulseIn   ), //i
    .io_pulseOut         (pulseCCByToggle_3_io_pulseOut  ), //o
    .io_rxclk            (io_rxclk                       ), //i
    .rxReset             (rxReset                        ), //i
    .clk                 (clk                            ), //i
    .reset               (reset                          ), //i
    .io_ctrl_rx_flush    (io_ctrl_rx_flush               )  //i
  );
  always @(*) begin
    _zz_1 = 1'b0;
    if(push_port_valid) begin
      _zz_1 = 1'b1;
    end
  end

  assign push_currentPtrPlusOne = (push_currentPtr + 7'h01);
  always @(*) begin
    push_port_valid = 1'b0;
    if(push_doWrite) begin
      if(!push_full) begin
        push_port_valid = 1'b1;
      end
    end
    if(push_commit) begin
      if(!when_MacRx_l270) begin
        push_port_valid = 1'b1;
      end
    end
  end

  always @(*) begin
    push_port_payload_address = 6'bxxxxxx;
    if(push_doWrite) begin
      if(!push_full) begin
        push_port_payload_address = push_currentPtrPlusOne[5:0];
      end
    end
    if(push_commit) begin
      if(!when_MacRx_l270) begin
        push_port_payload_address = push_oldPtr[5:0];
      end
    end
  end

  always @(*) begin
    push_port_payload_data = 32'bxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx;
    if(push_doWrite) begin
      if(!push_full) begin
        push_port_payload_data = {io_push_stream_payload_fragment_data,push_buffer};
      end
    end
    if(push_commit) begin
      if(!when_MacRx_l270) begin
        push_port_payload_data = {21'd0, _zz_push_port_payload_data};
      end
    end
  end

  assign io_push_stream_fire = (io_push_stream_valid && io_push_stream_ready);
  assign when_MacRx_l232 = (io_push_stream_fire && io_push_stream_payload_fragment_error);
  always @(*) begin
    push_doWrite = 1'b0;
    if(io_push_stream_fire_1) begin
      if(when_MacRx_l243) begin
        push_doWrite = 1'b1;
      end
    end
    if(when_MacRx_l265) begin
      push_doWrite = 1'b1;
    end
  end

  assign io_push_stream_fire_1 = (io_push_stream_valid && io_push_stream_ready);
  assign when_MacRx_l240 = (push_state_1 == 2'b00);
  assign when_MacRx_l240_1 = (push_state_1 == 2'b01);
  assign when_MacRx_l240_2 = (push_state_1 == 2'b10);
  assign when_MacRx_l243 = (push_state_1 == 2'b11);
  assign push_full = ((push_currentPtrPlusOne[6] != push_popPtr[6]) && (push_currentPtrPlusOne[5 : 0] == push_popPtr[5 : 0]));
  assign io_push_stream_fire_2 = (io_push_stream_valid && io_push_stream_ready);
  assign io_push_stream_ready = ((! push_cleanup) && (! push_commit));
  assign when_MacRx_l265 = (push_cleanup && (push_state_1 != 2'b00));
  assign when_MacRx_l270 = ((push_error || push_drop) || push_full);
  assign io_push_drop = (push_drop || (push_commit && push_full));
  assign io_push_commit = push_commit;
  assign io_push_error = push_error;
  assign pop_cmd_valid = (! (pop_currentPtr == pop_pushPtr));
  assign pop_cmd_payload = pop_currentPtr[5:0];
  assign pop_cmd_ready = ((! _zz_io_pop_stream_valid) || _zz_pop_cmd_ready);
  assign _zz_io_pop_stream_valid = _zz_io_pop_stream_valid_1;
  assign io_pop_stream_valid = _zz_io_pop_stream_valid;
  assign _zz_pop_cmd_ready = io_pop_stream_ready;
  assign io_pop_stream_payload = _zz_ram_port1;
  assign pop_cmd_fire = (pop_cmd_valid && pop_cmd_ready);
  assign pulseCCByToggle_2_io_pulseIn = (push_commit && push_drop);
  assign pulseCCByToggle_3_io_pulseIn = (push_commit && push_error);
  assign io_pop_stats_drops = pop_stats_drops;
  assign io_pop_stats_errors = pop_stats_errors;
  always @(posedge io_rxclk or posedge rxReset) begin
    if(rxReset) begin
      push_currentPtr <= 7'h0;
      push_oldPtr <= 7'h0;
      push_popPtr <= 7'h0;
      push_state_1 <= 2'b00;
      push_length <= 11'h0;
      push_error <= 1'b0;
      push_drop <= 1'b0;
      push_cleanup <= 1'b0;
      push_commit <= 1'b0;
    end else begin
      if(popToPush_io_output_valid) begin
        push_popPtr <= popToPush_io_output_payload;
      end
      if(when_MacRx_l232) begin
        push_error <= 1'b1;
      end
      if(io_push_stream_fire_1) begin
        push_state_1 <= (push_state_1 + 2'b01);
        push_length <= (push_length + 11'h008);
      end
      if(push_doWrite) begin
        if(push_full) begin
          push_drop <= 1'b1;
        end else begin
          push_currentPtr <= push_currentPtrPlusOne;
        end
      end
      push_cleanup <= (io_push_stream_fire_2 && io_push_stream_payload_last);
      push_commit <= push_cleanup;
      if(push_commit) begin
        if(when_MacRx_l270) begin
          push_currentPtr <= push_oldPtr;
        end else begin
          push_oldPtr <= push_currentPtrPlusOne;
          push_currentPtr <= push_currentPtrPlusOne;
        end
        push_error <= 1'b0;
        push_drop <= 1'b0;
        push_state_1 <= 2'b00;
        push_length <= 11'h0;
      end
    end
  end

  always @(posedge io_rxclk) begin
    if(io_push_stream_fire_1) begin
      if(when_MacRx_l240) begin
        push_buffer[7 : 0] <= io_push_stream_payload_fragment_data;
      end
      if(when_MacRx_l240_1) begin
        push_buffer[15 : 8] <= io_push_stream_payload_fragment_data;
      end
      if(when_MacRx_l240_2) begin
        push_buffer[23 : 16] <= io_push_stream_payload_fragment_data;
      end
    end
  end

  always @(posedge clk or posedge reset) begin
    if(reset) begin
      pop_currentPtr <= 7'h0;
      pop_pushPtr <= 7'h0;
      _zz_io_pop_stream_valid_1 <= 1'b0;
      pop_stats_drops <= 8'h0;
      pop_stats_errors <= 8'h0;
    end else begin
      if(io_ctrl_rx_flush) begin
      pop_currentPtr <= 7'h0;
      pop_pushPtr <= 7'h0;
      _zz_io_pop_stream_valid_1 <= 1'b0;
      pop_stats_drops <= 8'h0;
      pop_stats_errors <= 8'h0;
      end else begin
        if(pushToPop_io_output_valid) begin
          pop_pushPtr <= pushToPop_io_output_payload;
        end
        if(_zz_pop_cmd_ready) begin
          _zz_io_pop_stream_valid_1 <= 1'b0;
        end
        if(pop_cmd_ready) begin
          _zz_io_pop_stream_valid_1 <= pop_cmd_valid;
        end
        if(pop_cmd_fire) begin
          pop_currentPtr <= (pop_currentPtr + 7'h01);
        end
        pop_stats_drops <= (pop_stats_drops + _zz_pop_stats_drops);
        pop_stats_errors <= (pop_stats_errors + _zz_pop_stats_errors);
        if(io_pop_stats_clear) begin
          pop_stats_drops <= 8'h0;
          pop_stats_errors <= 8'h0;
        end
      end
    end
  end


endmodule

module BufferCC_12 (
  input               io_dataIn,
  output              io_dataOut,
  input               io_rxclk,
  input               rxReset
);
  (* async_reg = "true" *) reg                 buffers_0;
  (* async_reg = "true" *) reg                 buffers_1;

  assign io_dataOut = buffers_1;
  always @(posedge io_rxclk) begin
    buffers_0 <= io_dataIn;
    buffers_1 <= buffers_0;
  end


endmodule

module MacRxAligner (
  input               io_enable,
  input               io_input_valid,
  output reg          io_input_ready,
  input               io_input_payload_last,
  input               io_input_payload_fragment_error,
  input      [7:0]    io_input_payload_fragment_data,
  output reg          io_output_valid,
  input               io_output_ready,
  output reg          io_output_payload_last,
  output reg          io_output_payload_fragment_error,
  output     [7:0]    io_output_payload_fragment_data,
  input               io_rxclk,
  input               rxReset
);
  reg        [1:0]    state;
  wire                when_MacRx_l154;
  wire                io_input_fire;
  wire                when_MacRx_l164;

  always @(*) begin
    io_output_valid = io_input_valid;
    if(when_MacRx_l154) begin
      io_output_valid = 1'b1;
    end
  end

  always @(*) begin
    io_input_ready = io_output_ready;
    if(when_MacRx_l154) begin
      io_input_ready = 1'b0;
    end
  end

  always @(*) begin
    io_output_payload_last = io_input_payload_last;
    if(when_MacRx_l154) begin
      io_output_payload_last = 1'b0;
    end
  end

  always @(*) begin
    io_output_payload_fragment_error = io_input_payload_fragment_error;
    if(when_MacRx_l154) begin
      io_output_payload_fragment_error = 1'b0;
    end
  end

  assign io_output_payload_fragment_data = io_input_payload_fragment_data;
  assign when_MacRx_l154 = (io_enable && (state != 2'b10));
  assign io_input_fire = (io_input_valid && io_input_ready);
  assign when_MacRx_l164 = (io_input_fire && io_input_payload_last);
  always @(posedge io_rxclk or posedge rxReset) begin
    if(rxReset) begin
      state <= 2'b00;
    end else begin
      if(when_MacRx_l154) begin
        if(io_output_ready) begin
          state <= (state + 2'b01);
        end
      end
      if(when_MacRx_l164) begin
        state <= 2'b00;
      end
    end
  end


endmodule

module MacRxChecker (
  input               io_input_valid,
  output              io_input_ready,
  input               io_input_payload_last,
  input               io_input_payload_fragment_error,
  input      [7:0]    io_input_payload_fragment_data,
  output              io_output_valid,
  input               io_output_ready,
  output              io_output_payload_last,
  output              io_output_payload_fragment_error,
  output     [7:0]    io_output_payload_fragment_data,
  input               io_rxclk,
  input               rxReset
);
  wire                crc_2_io_flush;
  wire       [31:0]   crc_2_io_result;
  wire       [31:0]   crc_2_io_resultNext;
  wire                io_output_fire;
  wire                crcHit;

  Crc crc_2 (
    .io_flush            (crc_2_io_flush                  ), //i
    .io_input_valid      (io_input_valid                  ), //i
    .io_input_payload    (io_input_payload_fragment_data  ), //i
    .io_result           (crc_2_io_result                 ), //o
    .io_resultNext       (crc_2_io_resultNext             ), //o
    .io_rxclk            (io_rxclk                        ), //i
    .rxReset             (rxReset                         )  //i
  );
  assign io_output_fire = (io_output_valid && io_output_ready);
  assign crc_2_io_flush = (io_output_fire && io_output_payload_last);
  assign crcHit = (crc_2_io_resultNext == 32'h2144df1c);
  assign io_output_valid = io_input_valid;
  assign io_output_payload_last = io_input_payload_last;
  assign io_output_payload_fragment_data = io_input_payload_fragment_data;
  assign io_output_payload_fragment_error = (io_input_payload_fragment_error || (io_input_payload_last && (! crcHit)));
  assign io_input_ready = io_output_ready;

endmodule

module MacRxPreamble (
  input               io_input_valid,
  output              io_input_ready,
  input               io_input_payload_last,
  input               io_input_payload_fragment_error,
  input      [7:0]    io_input_payload_fragment_data,
  output reg          io_output_valid,
  input               io_output_ready,
  output              io_output_payload_last,
  output              io_output_payload_fragment_error,
  output     [7:0]    io_output_payload_fragment_data,
  input               io_rxclk,
  input               rxReset
);
  wire                io_input_fire;
  wire                history_0_valid;
  wire                history_0_ready;
  wire                history_0_payload_last;
  wire                history_0_payload_fragment_error;
  wire       [7:0]    history_0_payload_fragment_data;
  wire       [7:0]    historyDataCat;
  wire                hit;
  reg                 inFrame;
  wire                when_MacRx_l25;
  wire                when_MacRx_l32;

  assign io_input_fire = (io_input_valid && io_input_ready);
  assign history_0_valid = io_input_valid;
  assign history_0_ready = io_input_ready;
  assign history_0_payload_last = io_input_payload_last;
  assign history_0_payload_fragment_error = io_input_payload_fragment_error;
  assign history_0_payload_fragment_data = io_input_payload_fragment_data;
  assign historyDataCat = history_0_payload_fragment_data;
  assign hit = (history_0_valid && (historyDataCat == 8'hd5));
  always @(*) begin
    io_output_valid = 1'b0;
    if(!when_MacRx_l25) begin
      if(io_input_valid) begin
        io_output_valid = 1'b1;
      end
    end
  end

  assign io_output_payload_last = io_input_payload_last;
  assign io_output_payload_fragment_error = io_input_payload_fragment_error;
  assign io_output_payload_fragment_data = io_input_payload_fragment_data;
  assign io_input_ready = ((! inFrame) || io_output_ready);
  assign when_MacRx_l25 = (! inFrame);
  assign when_MacRx_l32 = (io_output_ready && io_input_payload_last);
  always @(posedge io_rxclk or posedge rxReset) begin
    if(rxReset) begin
      inFrame <= 1'b0;
    end else begin
      if(when_MacRx_l25) begin
        if(hit) begin
          inFrame <= 1'b1;
        end
      end else begin
        if(io_input_valid) begin
          if(when_MacRx_l32) begin
            inFrame <= 1'b0;
          end
        end
      end
    end
  end


endmodule

module BufferCC_11 (
  input               io_dataIn,
  output              io_dataOut,
  input               io_txclk,
  input               _zz_1
);
  (* async_reg = "true" *) reg                 buffers_0;
  (* async_reg = "true" *) reg                 buffers_1;

  assign io_dataOut = buffers_1;
  always @(posedge io_txclk or posedge _zz_1) begin
    if(_zz_1) begin
      buffers_0 <= 1'b1;
      buffers_1 <= 1'b1;
    end else begin
      buffers_0 <= io_dataIn;
      buffers_1 <= buffers_0;
    end
  end


endmodule

module BufferCC_10 (
  input               io_dataIn,
  output              io_dataOut,
  input               io_rxclk,
  input               _zz_1
);
  (* async_reg = "true" *) reg                 buffers_0;
  (* async_reg = "true" *) reg                 buffers_1;

  assign io_dataOut = buffers_1;
  always @(posedge io_rxclk or posedge _zz_1) begin
    if(_zz_1) begin
      buffers_0 <= 1'b1;
      buffers_1 <= 1'b1;
    end else begin
      buffers_0 <= io_dataIn;
      buffers_1 <= buffers_0;
    end
  end


endmodule

module Crc_1 (
  input               io_flush,
  input               io_input_valid,
  input      [7:0]    io_input_payload,
  output     [31:0]   io_result,
  output     [31:0]   io_resultNext,
  input               io_txclk,
  input               txReset
);
  wire       [31:0]   _zz_state_1;
  wire       [31:0]   _zz_state_2;
  wire       [31:0]   _zz_state_3;
  wire       [31:0]   _zz_state_4;
  wire       [31:0]   _zz_state_5;
  wire       [31:0]   _zz_state_6;
  wire       [31:0]   _zz_state_7;
  wire       [31:0]   _zz_state_8;
  wire                _zz_io_result;
  wire       [0:0]    _zz_io_result_1;
  wire       [20:0]   _zz_io_result_2;
  wire                _zz_io_result_3;
  wire       [0:0]    _zz_io_result_4;
  wire       [9:0]    _zz_io_result_5;
  wire                _zz_io_resultNext;
  wire       [0:0]    _zz_io_resultNext_1;
  wire       [20:0]   _zz_io_resultNext_2;
  wire                _zz_io_resultNext_3;
  wire       [0:0]    _zz_io_resultNext_4;
  wire       [9:0]    _zz_io_resultNext_5;
  reg        [31:0]   state_8;
  reg        [31:0]   state_7;
  reg        [31:0]   state_6;
  reg        [31:0]   state_5;
  reg        [31:0]   state_4;
  reg        [31:0]   state_3;
  reg        [31:0]   state_2;
  reg        [31:0]   state_1;
  reg        [31:0]   state;
  wire       [31:0]   stateXor;
  wire       [31:0]   accXor;

  assign _zz_state_1 = (state <<< 1);
  assign _zz_state_2 = (state_1 <<< 1);
  assign _zz_state_3 = (state_2 <<< 1);
  assign _zz_state_4 = (state_3 <<< 1);
  assign _zz_state_5 = (state_4 <<< 1);
  assign _zz_state_6 = (state_5 <<< 1);
  assign _zz_state_7 = (state_6 <<< 1);
  assign _zz_state_8 = (state_7 <<< 1);
  assign _zz_io_result = stateXor[9];
  assign _zz_io_result_1 = stateXor[10];
  assign _zz_io_result_2 = {stateXor[11],{stateXor[12],{stateXor[13],{stateXor[14],{stateXor[15],{stateXor[16],{stateXor[17],{stateXor[18],{stateXor[19],{_zz_io_result_3,{_zz_io_result_4,_zz_io_result_5}}}}}}}}}}};
  assign _zz_io_result_3 = stateXor[20];
  assign _zz_io_result_4 = stateXor[21];
  assign _zz_io_result_5 = {stateXor[22],{stateXor[23],{stateXor[24],{stateXor[25],{stateXor[26],{stateXor[27],{stateXor[28],{stateXor[29],{stateXor[30],stateXor[31]}}}}}}}}};
  assign _zz_io_resultNext = accXor[9];
  assign _zz_io_resultNext_1 = accXor[10];
  assign _zz_io_resultNext_2 = {accXor[11],{accXor[12],{accXor[13],{accXor[14],{accXor[15],{accXor[16],{accXor[17],{accXor[18],{accXor[19],{_zz_io_resultNext_3,{_zz_io_resultNext_4,_zz_io_resultNext_5}}}}}}}}}}};
  assign _zz_io_resultNext_3 = accXor[20];
  assign _zz_io_resultNext_4 = accXor[21];
  assign _zz_io_resultNext_5 = {accXor[22],{accXor[23],{accXor[24],{accXor[25],{accXor[26],{accXor[27],{accXor[28],{accXor[29],{accXor[30],accXor[31]}}}}}}}}};
  always @(*) begin
    state_8 = state_7;
    state_8 = (_zz_state_8 ^ ((io_input_payload[7] ^ state_7[31]) ? 32'h04c11db7 : 32'h0));
  end

  always @(*) begin
    state_7 = state_6;
    state_7 = (_zz_state_7 ^ ((io_input_payload[6] ^ state_6[31]) ? 32'h04c11db7 : 32'h0));
  end

  always @(*) begin
    state_6 = state_5;
    state_6 = (_zz_state_6 ^ ((io_input_payload[5] ^ state_5[31]) ? 32'h04c11db7 : 32'h0));
  end

  always @(*) begin
    state_5 = state_4;
    state_5 = (_zz_state_5 ^ ((io_input_payload[4] ^ state_4[31]) ? 32'h04c11db7 : 32'h0));
  end

  always @(*) begin
    state_4 = state_3;
    state_4 = (_zz_state_4 ^ ((io_input_payload[3] ^ state_3[31]) ? 32'h04c11db7 : 32'h0));
  end

  always @(*) begin
    state_3 = state_2;
    state_3 = (_zz_state_3 ^ ((io_input_payload[2] ^ state_2[31]) ? 32'h04c11db7 : 32'h0));
  end

  always @(*) begin
    state_2 = state_1;
    state_2 = (_zz_state_2 ^ ((io_input_payload[1] ^ state_1[31]) ? 32'h04c11db7 : 32'h0));
  end

  always @(*) begin
    state_1 = state;
    state_1 = (_zz_state_1 ^ ((io_input_payload[0] ^ state[31]) ? 32'h04c11db7 : 32'h0));
  end

  assign stateXor = (state ^ 32'hffffffff);
  assign accXor = (state_8 ^ 32'hffffffff);
  assign io_result = {stateXor[0],{stateXor[1],{stateXor[2],{stateXor[3],{stateXor[4],{stateXor[5],{stateXor[6],{stateXor[7],{stateXor[8],{_zz_io_result,{_zz_io_result_1,_zz_io_result_2}}}}}}}}}}};
  assign io_resultNext = {accXor[0],{accXor[1],{accXor[2],{accXor[3],{accXor[4],{accXor[5],{accXor[6],{accXor[7],{accXor[8],{_zz_io_resultNext,{_zz_io_resultNext_1,_zz_io_resultNext_2}}}}}}}}}}};
  always @(posedge io_txclk or posedge txReset) begin
    if(txReset) begin
      state <= 32'hffffffff;
    end else begin
      if(io_input_valid) begin
        state <= state_8;
      end
      if(io_flush) begin
        state <= 32'hffffffff;
      end
    end
  end


endmodule

module MacTxManagedStreamFifoCc (
  input               io_push_stream_valid,
  output              io_push_stream_ready,
  input      [31:0]   io_push_stream_payload,
  input               io_push_commit,
  output     [6:0]    io_push_availability,
  output              io_pop_stream_valid,
  input               io_pop_stream_ready,
  output     [31:0]   io_pop_stream_payload,
  input               io_pop_redo,
  input               io_pop_commit,
  input               clk,
  input               reset,
  input               io_ctrl_tx_flush,
  input               io_txclk,
  input               txReset
);
  reg        [31:0]   _zz_ram_port1;
  wire                popToPush_io_input_ready;
  wire                popToPush_io_output_valid;
  wire       [6:0]    popToPush_io_output_payload;
  wire                pushToPop_io_input_ready;
  wire                pushToPop_io_output_valid;
  wire       [6:0]    pushToPop_io_output_payload;
  wire       [5:0]    _zz_ram_port;
  wire       [6:0]    _zz_io_push_availability;
  reg                 _zz_1;
  reg        [6:0]    push_currentPtr;
  reg        [6:0]    push_oldPtr;
  reg        [6:0]    push_popPtr;
  wire                io_push_stream_fire;
  reg        [6:0]    pop_currentPtr;
  reg        [6:0]    pop_oldPtr;
  reg        [6:0]    pop_pushPtr;
  wire                pop_cmd_valid;
  wire                pop_cmd_ready;
  wire       [5:0]    pop_cmd_payload;
  wire                io_pop_stream_fire;
  reg        [6:0]    pop_commitPtr;
  wire                _zz_io_pop_stream_valid;
  reg                 _zz_pop_cmd_ready;
  reg                 _zz_io_pop_stream_valid_1;
  reg                 _zz_io_pop_stream_valid_2;
  wire                pop_cmd_fire;
  reg [31:0] ram [0:63];

  assign _zz_ram_port = push_currentPtr[5:0];
  assign _zz_io_push_availability = (push_currentPtr - push_popPtr);
  always @(posedge clk) begin
    if(_zz_1) begin
      ram[_zz_ram_port] <= io_push_stream_payload;
    end
  end

  always @(posedge io_txclk) begin
    if(pop_cmd_ready) begin
      _zz_ram_port1 <= ram[pop_cmd_payload];
    end
  end

  StreamCCByToggle popToPush (
    .io_input_valid       (1'b1                         ), //i
    .io_input_ready       (popToPush_io_input_ready     ), //o
    .io_input_payload     (pop_oldPtr                   ), //i
    .io_output_valid      (popToPush_io_output_valid    ), //o
    .io_output_ready      (1'b1                         ), //i
    .io_output_payload    (popToPush_io_output_payload  ), //o
    .io_txclk             (io_txclk                     ), //i
    .txReset              (txReset                      ), //i
    .clk                  (clk                          ), //i
    .reset                (reset                        ), //i
    .io_ctrl_tx_flush     (io_ctrl_tx_flush             )  //i
  );
  StreamCCByToggle_1 pushToPop (
    .io_input_valid       (1'b1                         ), //i
    .io_input_ready       (pushToPop_io_input_ready     ), //o
    .io_input_payload     (push_oldPtr                  ), //i
    .io_output_valid      (pushToPop_io_output_valid    ), //o
    .io_output_ready      (1'b1                         ), //i
    .io_output_payload    (pushToPop_io_output_payload  ), //o
    .clk                  (clk                          ), //i
    .reset                (reset                        ), //i
    .io_ctrl_tx_flush     (io_ctrl_tx_flush             ), //i
    .io_txclk             (io_txclk                     ), //i
    .txReset              (txReset                      )  //i
  );
  always @(*) begin
    _zz_1 = 1'b0;
    if(io_push_stream_fire) begin
      _zz_1 = 1'b1;
    end
  end

  assign io_push_stream_ready = (! ((push_currentPtr[6] != push_popPtr[6]) && (push_currentPtr[5 : 0] == push_popPtr[5 : 0])));
  assign io_push_stream_fire = (io_push_stream_valid && io_push_stream_ready);
  assign io_push_availability = (7'h40 - _zz_io_push_availability);
  assign pop_cmd_valid = ((! (pop_currentPtr == pop_pushPtr)) && (! io_pop_redo));
  assign pop_cmd_payload = pop_currentPtr[5:0];
  assign io_pop_stream_fire = (io_pop_stream_valid && io_pop_stream_ready);
  assign pop_cmd_ready = ((! _zz_io_pop_stream_valid) || _zz_pop_cmd_ready);
  assign _zz_io_pop_stream_valid = _zz_io_pop_stream_valid_1;
  always @(*) begin
    _zz_io_pop_stream_valid_2 = _zz_io_pop_stream_valid;
    if(io_pop_redo) begin
      _zz_io_pop_stream_valid_2 = 1'b0;
    end
  end

  always @(*) begin
    _zz_pop_cmd_ready = io_pop_stream_ready;
    if(io_pop_redo) begin
      _zz_pop_cmd_ready = 1'b1;
    end
  end

  assign io_pop_stream_valid = _zz_io_pop_stream_valid_2;
  assign io_pop_stream_payload = _zz_ram_port1;
  assign pop_cmd_fire = (pop_cmd_valid && pop_cmd_ready);
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      push_currentPtr <= 7'h0;
      push_oldPtr <= 7'h0;
      push_popPtr <= 7'h0;
    end else begin
      if(io_ctrl_tx_flush) begin
      push_currentPtr <= 7'h0;
      push_oldPtr <= 7'h0;
      push_popPtr <= 7'h0;
      end else begin
        if(popToPush_io_output_valid) begin
          push_popPtr <= popToPush_io_output_payload;
        end
        if(io_push_stream_fire) begin
          push_currentPtr <= (push_currentPtr + 7'h01);
        end
        if(io_push_commit) begin
          push_oldPtr <= push_currentPtr;
        end
      end
    end
  end

  always @(posedge io_txclk or posedge txReset) begin
    if(txReset) begin
      pop_currentPtr <= 7'h0;
      pop_oldPtr <= 7'h0;
      pop_pushPtr <= 7'h0;
      _zz_io_pop_stream_valid_1 <= 1'b0;
    end else begin
      if(pushToPop_io_output_valid) begin
        pop_pushPtr <= pushToPop_io_output_payload;
      end
      if(_zz_pop_cmd_ready) begin
        _zz_io_pop_stream_valid_1 <= 1'b0;
      end
      if(pop_cmd_ready) begin
        _zz_io_pop_stream_valid_1 <= pop_cmd_valid;
      end
      if(pop_cmd_fire) begin
        pop_currentPtr <= (pop_currentPtr + 7'h01);
      end
      if(io_pop_redo) begin
        pop_currentPtr <= pop_oldPtr;
      end
      if(io_pop_commit) begin
        pop_oldPtr <= pop_commitPtr;
      end
    end
  end

  always @(posedge io_txclk) begin
    if(io_pop_stream_fire) begin
      pop_commitPtr <= pop_currentPtr;
    end
  end


endmodule

//PulseCCByToggle replaced by PulseCCByToggle

module PulseCCByToggle (
  input               io_pulseIn,
  output              io_pulseOut,
  input               io_rxclk,
  input               rxReset,
  input               clk,
  input               reset,
  input               io_ctrl_rx_flush
);
  wire                inArea_target_buffercc_io_dataOut;
  reg                 inArea_target;
  wire                outArea_target;
  reg                 outArea_target_regNext;

  BufferCC_4 inArea_target_buffercc (
    .io_dataIn           (inArea_target                      ), //i
    .io_dataOut          (inArea_target_buffercc_io_dataOut  ), //o
    .clk                 (clk                                ), //i
    .reset               (reset                              ), //i
    .io_ctrl_rx_flush    (io_ctrl_rx_flush                   )  //i
  );
  assign outArea_target = inArea_target_buffercc_io_dataOut;
  assign io_pulseOut = (outArea_target ^ outArea_target_regNext);
  always @(posedge io_rxclk or posedge rxReset) begin
    if(rxReset) begin
      inArea_target <= 1'b0;
    end else begin
      if(io_pulseIn) begin
        inArea_target <= (! inArea_target);
      end
    end
  end

  always @(posedge clk or posedge reset) begin
    if(reset) begin
      outArea_target_regNext <= 1'b0;
    end else begin
      if(io_ctrl_rx_flush) begin
      outArea_target_regNext <= 1'b0;
      end else begin
        outArea_target_regNext <= outArea_target;
      end
    end
  end


endmodule

module StreamCCByToggle_3 (
  input               io_input_valid,
  output              io_input_ready,
  input      [6:0]    io_input_payload,
  output              io_output_valid,
  input               io_output_ready,
  output     [6:0]    io_output_payload,
  input               io_rxclk,
  input               rxReset,
  input               clk,
  input               reset,
  input               io_ctrl_rx_flush
);
  wire                outHitSignal_buffercc_io_dataOut;
  wire                pushArea_target_buffercc_io_dataOut;
  wire                outHitSignal;
  wire                pushArea_hit;
  wire                pushArea_accept;
  reg                 pushArea_target;
  reg        [6:0]    pushArea_data;
  wire                io_input_fire;
  wire                popArea_stream_valid;
  wire                popArea_stream_ready;
  wire       [6:0]    popArea_stream_payload;
  wire                popArea_target;
  wire                popArea_stream_fire;
  reg                 popArea_hit;

  BufferCC_5 outHitSignal_buffercc (
    .io_dataIn     (outHitSignal                      ), //i
    .io_dataOut    (outHitSignal_buffercc_io_dataOut  ), //o
    .io_rxclk      (io_rxclk                          ), //i
    .rxReset       (rxReset                           )  //i
  );
  BufferCC_4 pushArea_target_buffercc (
    .io_dataIn           (pushArea_target                      ), //i
    .io_dataOut          (pushArea_target_buffercc_io_dataOut  ), //o
    .clk                 (clk                                  ), //i
    .reset               (reset                                ), //i
    .io_ctrl_rx_flush    (io_ctrl_rx_flush                     )  //i
  );
  assign pushArea_hit = outHitSignal_buffercc_io_dataOut;
  assign io_input_fire = (io_input_valid && io_input_ready);
  assign pushArea_accept = io_input_fire;
  assign io_input_ready = (pushArea_hit == pushArea_target);
  assign popArea_target = pushArea_target_buffercc_io_dataOut;
  assign popArea_stream_fire = (popArea_stream_valid && popArea_stream_ready);
  assign outHitSignal = popArea_hit;
  assign popArea_stream_valid = (popArea_target != popArea_hit);
  assign popArea_stream_payload = pushArea_data;
  assign io_output_valid = popArea_stream_valid;
  assign popArea_stream_ready = io_output_ready;
  assign io_output_payload = popArea_stream_payload;
  always @(posedge io_rxclk or posedge rxReset) begin
    if(rxReset) begin
      pushArea_target <= 1'b0;
      pushArea_data <= 7'h0;
    end else begin
      if(pushArea_accept) begin
        pushArea_target <= (! pushArea_target);
      end
      if(pushArea_accept) begin
        pushArea_data <= io_input_payload;
      end
    end
  end

  always @(posedge clk or posedge reset) begin
    if(reset) begin
      popArea_hit <= 1'b0;
    end else begin
      if(io_ctrl_rx_flush) begin
      popArea_hit <= 1'b0;
      end else begin
        if(popArea_stream_fire) begin
          popArea_hit <= popArea_target;
        end
      end
    end
  end


endmodule

module StreamCCByToggle_2 (
  input               io_input_valid,
  output              io_input_ready,
  input      [6:0]    io_input_payload,
  output              io_output_valid,
  input               io_output_ready,
  output     [6:0]    io_output_payload,
  input               clk,
  input               reset,
  input               io_ctrl_rx_flush,
  input               io_rxclk,
  input               rxReset
);
  wire                outHitSignal_buffercc_io_dataOut;
  wire                pushArea_target_buffercc_io_dataOut;
  wire                outHitSignal;
  wire                pushArea_hit;
  wire                pushArea_accept;
  reg                 pushArea_target;
  reg        [6:0]    pushArea_data;
  wire                io_input_fire;
  wire                popArea_stream_valid;
  wire                popArea_stream_ready;
  wire       [6:0]    popArea_stream_payload;
  wire                popArea_target;
  wire                popArea_stream_fire;
  reg                 popArea_hit;

  BufferCC_4 outHitSignal_buffercc (
    .io_dataIn           (outHitSignal                      ), //i
    .io_dataOut          (outHitSignal_buffercc_io_dataOut  ), //o
    .clk                 (clk                               ), //i
    .reset               (reset                             ), //i
    .io_ctrl_rx_flush    (io_ctrl_rx_flush                  )  //i
  );
  BufferCC_5 pushArea_target_buffercc (
    .io_dataIn     (pushArea_target                      ), //i
    .io_dataOut    (pushArea_target_buffercc_io_dataOut  ), //o
    .io_rxclk      (io_rxclk                             ), //i
    .rxReset       (rxReset                              )  //i
  );
  assign pushArea_hit = outHitSignal_buffercc_io_dataOut;
  assign io_input_fire = (io_input_valid && io_input_ready);
  assign pushArea_accept = io_input_fire;
  assign io_input_ready = (pushArea_hit == pushArea_target);
  assign popArea_target = pushArea_target_buffercc_io_dataOut;
  assign popArea_stream_fire = (popArea_stream_valid && popArea_stream_ready);
  assign outHitSignal = popArea_hit;
  assign popArea_stream_valid = (popArea_target != popArea_hit);
  assign popArea_stream_payload = pushArea_data;
  assign io_output_valid = popArea_stream_valid;
  assign popArea_stream_ready = io_output_ready;
  assign io_output_payload = popArea_stream_payload;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      pushArea_target <= 1'b0;
      pushArea_data <= 7'h0;
    end else begin
      if(io_ctrl_rx_flush) begin
      pushArea_target <= 1'b0;
      pushArea_data <= 7'h0;
      end else begin
        if(pushArea_accept) begin
          pushArea_target <= (! pushArea_target);
        end
        if(pushArea_accept) begin
          pushArea_data <= io_input_payload;
        end
      end
    end
  end

  always @(posedge io_rxclk or posedge rxReset) begin
    if(rxReset) begin
      popArea_hit <= 1'b0;
    end else begin
      if(popArea_stream_fire) begin
        popArea_hit <= popArea_target;
      end
    end
  end


endmodule

module Crc (
  input               io_flush,
  input               io_input_valid,
  input      [7:0]    io_input_payload,
  output     [31:0]   io_result,
  output     [31:0]   io_resultNext,
  input               io_rxclk,
  input               rxReset
);
  wire       [31:0]   _zz_state_1;
  wire       [31:0]   _zz_state_2;
  wire       [31:0]   _zz_state_3;
  wire       [31:0]   _zz_state_4;
  wire       [31:0]   _zz_state_5;
  wire       [31:0]   _zz_state_6;
  wire       [31:0]   _zz_state_7;
  wire       [31:0]   _zz_state_8;
  wire                _zz_io_result;
  wire       [0:0]    _zz_io_result_1;
  wire       [20:0]   _zz_io_result_2;
  wire                _zz_io_result_3;
  wire       [0:0]    _zz_io_result_4;
  wire       [9:0]    _zz_io_result_5;
  wire                _zz_io_resultNext;
  wire       [0:0]    _zz_io_resultNext_1;
  wire       [20:0]   _zz_io_resultNext_2;
  wire                _zz_io_resultNext_3;
  wire       [0:0]    _zz_io_resultNext_4;
  wire       [9:0]    _zz_io_resultNext_5;
  reg        [31:0]   state_8;
  reg        [31:0]   state_7;
  reg        [31:0]   state_6;
  reg        [31:0]   state_5;
  reg        [31:0]   state_4;
  reg        [31:0]   state_3;
  reg        [31:0]   state_2;
  reg        [31:0]   state_1;
  reg        [31:0]   state;
  wire       [31:0]   stateXor;
  wire       [31:0]   accXor;

  assign _zz_state_1 = (state <<< 1);
  assign _zz_state_2 = (state_1 <<< 1);
  assign _zz_state_3 = (state_2 <<< 1);
  assign _zz_state_4 = (state_3 <<< 1);
  assign _zz_state_5 = (state_4 <<< 1);
  assign _zz_state_6 = (state_5 <<< 1);
  assign _zz_state_7 = (state_6 <<< 1);
  assign _zz_state_8 = (state_7 <<< 1);
  assign _zz_io_result = stateXor[9];
  assign _zz_io_result_1 = stateXor[10];
  assign _zz_io_result_2 = {stateXor[11],{stateXor[12],{stateXor[13],{stateXor[14],{stateXor[15],{stateXor[16],{stateXor[17],{stateXor[18],{stateXor[19],{_zz_io_result_3,{_zz_io_result_4,_zz_io_result_5}}}}}}}}}}};
  assign _zz_io_result_3 = stateXor[20];
  assign _zz_io_result_4 = stateXor[21];
  assign _zz_io_result_5 = {stateXor[22],{stateXor[23],{stateXor[24],{stateXor[25],{stateXor[26],{stateXor[27],{stateXor[28],{stateXor[29],{stateXor[30],stateXor[31]}}}}}}}}};
  assign _zz_io_resultNext = accXor[9];
  assign _zz_io_resultNext_1 = accXor[10];
  assign _zz_io_resultNext_2 = {accXor[11],{accXor[12],{accXor[13],{accXor[14],{accXor[15],{accXor[16],{accXor[17],{accXor[18],{accXor[19],{_zz_io_resultNext_3,{_zz_io_resultNext_4,_zz_io_resultNext_5}}}}}}}}}}};
  assign _zz_io_resultNext_3 = accXor[20];
  assign _zz_io_resultNext_4 = accXor[21];
  assign _zz_io_resultNext_5 = {accXor[22],{accXor[23],{accXor[24],{accXor[25],{accXor[26],{accXor[27],{accXor[28],{accXor[29],{accXor[30],accXor[31]}}}}}}}}};
  always @(*) begin
    state_8 = state_7;
    state_8 = (_zz_state_8 ^ ((io_input_payload[7] ^ state_7[31]) ? 32'h04c11db7 : 32'h0));
  end

  always @(*) begin
    state_7 = state_6;
    state_7 = (_zz_state_7 ^ ((io_input_payload[6] ^ state_6[31]) ? 32'h04c11db7 : 32'h0));
  end

  always @(*) begin
    state_6 = state_5;
    state_6 = (_zz_state_6 ^ ((io_input_payload[5] ^ state_5[31]) ? 32'h04c11db7 : 32'h0));
  end

  always @(*) begin
    state_5 = state_4;
    state_5 = (_zz_state_5 ^ ((io_input_payload[4] ^ state_4[31]) ? 32'h04c11db7 : 32'h0));
  end

  always @(*) begin
    state_4 = state_3;
    state_4 = (_zz_state_4 ^ ((io_input_payload[3] ^ state_3[31]) ? 32'h04c11db7 : 32'h0));
  end

  always @(*) begin
    state_3 = state_2;
    state_3 = (_zz_state_3 ^ ((io_input_payload[2] ^ state_2[31]) ? 32'h04c11db7 : 32'h0));
  end

  always @(*) begin
    state_2 = state_1;
    state_2 = (_zz_state_2 ^ ((io_input_payload[1] ^ state_1[31]) ? 32'h04c11db7 : 32'h0));
  end

  always @(*) begin
    state_1 = state;
    state_1 = (_zz_state_1 ^ ((io_input_payload[0] ^ state[31]) ? 32'h04c11db7 : 32'h0));
  end

  assign stateXor = (state ^ 32'hffffffff);
  assign accXor = (state_8 ^ 32'hffffffff);
  assign io_result = {stateXor[0],{stateXor[1],{stateXor[2],{stateXor[3],{stateXor[4],{stateXor[5],{stateXor[6],{stateXor[7],{stateXor[8],{_zz_io_result,{_zz_io_result_1,_zz_io_result_2}}}}}}}}}}};
  assign io_resultNext = {accXor[0],{accXor[1],{accXor[2],{accXor[3],{accXor[4],{accXor[5],{accXor[6],{accXor[7],{accXor[8],{_zz_io_resultNext,{_zz_io_resultNext_1,_zz_io_resultNext_2}}}}}}}}}}};
  always @(posedge io_rxclk or posedge rxReset) begin
    if(rxReset) begin
      state <= 32'hffffffff;
    end else begin
      if(io_input_valid) begin
        state <= state_8;
      end
      if(io_flush) begin
        state <= 32'hffffffff;
      end
    end
  end


endmodule

module StreamCCByToggle_1 (
  input               io_input_valid,
  output              io_input_ready,
  input      [6:0]    io_input_payload,
  output              io_output_valid,
  input               io_output_ready,
  output     [6:0]    io_output_payload,
  input               clk,
  input               reset,
  input               io_ctrl_tx_flush,
  input               io_txclk,
  input               txReset
);
  wire                outHitSignal_buffercc_io_dataOut;
  wire                pushArea_target_buffercc_io_dataOut;
  wire                outHitSignal;
  wire                pushArea_hit;
  wire                pushArea_accept;
  reg                 pushArea_target;
  reg        [6:0]    pushArea_data;
  wire                io_input_fire;
  wire                popArea_stream_valid;
  wire                popArea_stream_ready;
  wire       [6:0]    popArea_stream_payload;
  wire                popArea_target;
  wire                popArea_stream_fire;
  reg                 popArea_hit;

  BufferCC_1 outHitSignal_buffercc (
    .io_dataIn           (outHitSignal                      ), //i
    .io_dataOut          (outHitSignal_buffercc_io_dataOut  ), //o
    .clk                 (clk                               ), //i
    .reset               (reset                             ), //i
    .io_ctrl_tx_flush    (io_ctrl_tx_flush                  )  //i
  );
  BufferCC pushArea_target_buffercc (
    .io_dataIn     (pushArea_target                      ), //i
    .io_dataOut    (pushArea_target_buffercc_io_dataOut  ), //o
    .io_txclk      (io_txclk                             ), //i
    .txReset       (txReset                              )  //i
  );
  assign pushArea_hit = outHitSignal_buffercc_io_dataOut;
  assign io_input_fire = (io_input_valid && io_input_ready);
  assign pushArea_accept = io_input_fire;
  assign io_input_ready = (pushArea_hit == pushArea_target);
  assign popArea_target = pushArea_target_buffercc_io_dataOut;
  assign popArea_stream_fire = (popArea_stream_valid && popArea_stream_ready);
  assign outHitSignal = popArea_hit;
  assign popArea_stream_valid = (popArea_target != popArea_hit);
  assign popArea_stream_payload = pushArea_data;
  assign io_output_valid = popArea_stream_valid;
  assign popArea_stream_ready = io_output_ready;
  assign io_output_payload = popArea_stream_payload;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      pushArea_target <= 1'b0;
      pushArea_data <= 7'h0;
    end else begin
      if(io_ctrl_tx_flush) begin
      pushArea_target <= 1'b0;
      pushArea_data <= 7'h0;
      end else begin
        if(pushArea_accept) begin
          pushArea_target <= (! pushArea_target);
        end
        if(pushArea_accept) begin
          pushArea_data <= io_input_payload;
        end
      end
    end
  end

  always @(posedge io_txclk or posedge txReset) begin
    if(txReset) begin
      popArea_hit <= 1'b0;
    end else begin
      if(popArea_stream_fire) begin
        popArea_hit <= popArea_target;
      end
    end
  end


endmodule

module StreamCCByToggle (
  input               io_input_valid,
  output              io_input_ready,
  input      [6:0]    io_input_payload,
  output              io_output_valid,
  input               io_output_ready,
  output     [6:0]    io_output_payload,
  input               io_txclk,
  input               txReset,
  input               clk,
  input               reset,
  input               io_ctrl_tx_flush
);
  wire                outHitSignal_buffercc_io_dataOut;
  wire                pushArea_target_buffercc_io_dataOut;
  wire                outHitSignal;
  wire                pushArea_hit;
  wire                pushArea_accept;
  reg                 pushArea_target;
  reg        [6:0]    pushArea_data;
  wire                io_input_fire;
  wire                popArea_stream_valid;
  wire                popArea_stream_ready;
  wire       [6:0]    popArea_stream_payload;
  wire                popArea_target;
  wire                popArea_stream_fire;
  reg                 popArea_hit;

  BufferCC outHitSignal_buffercc (
    .io_dataIn     (outHitSignal                      ), //i
    .io_dataOut    (outHitSignal_buffercc_io_dataOut  ), //o
    .io_txclk      (io_txclk                          ), //i
    .txReset       (txReset                           )  //i
  );
  BufferCC_1 pushArea_target_buffercc (
    .io_dataIn           (pushArea_target                      ), //i
    .io_dataOut          (pushArea_target_buffercc_io_dataOut  ), //o
    .clk                 (clk                                  ), //i
    .reset               (reset                                ), //i
    .io_ctrl_tx_flush    (io_ctrl_tx_flush                     )  //i
  );
  assign pushArea_hit = outHitSignal_buffercc_io_dataOut;
  assign io_input_fire = (io_input_valid && io_input_ready);
  assign pushArea_accept = io_input_fire;
  assign io_input_ready = (pushArea_hit == pushArea_target);
  assign popArea_target = pushArea_target_buffercc_io_dataOut;
  assign popArea_stream_fire = (popArea_stream_valid && popArea_stream_ready);
  assign outHitSignal = popArea_hit;
  assign popArea_stream_valid = (popArea_target != popArea_hit);
  assign popArea_stream_payload = pushArea_data;
  assign io_output_valid = popArea_stream_valid;
  assign popArea_stream_ready = io_output_ready;
  assign io_output_payload = popArea_stream_payload;
  always @(posedge io_txclk or posedge txReset) begin
    if(txReset) begin
      pushArea_target <= 1'b0;
      pushArea_data <= 7'h0;
    end else begin
      if(pushArea_accept) begin
        pushArea_target <= (! pushArea_target);
      end
      if(pushArea_accept) begin
        pushArea_data <= io_input_payload;
      end
    end
  end

  always @(posedge clk or posedge reset) begin
    if(reset) begin
      popArea_hit <= 1'b0;
    end else begin
      if(io_ctrl_tx_flush) begin
      popArea_hit <= 1'b0;
      end else begin
        if(popArea_stream_fire) begin
          popArea_hit <= popArea_target;
        end
      end
    end
  end


endmodule

//BufferCC_4 replaced by BufferCC_4

//BufferCC_4 replaced by BufferCC_4

//BufferCC_4 replaced by BufferCC_4

//BufferCC_5 replaced by BufferCC_5

module BufferCC_5 (
  input               io_dataIn,
  output              io_dataOut,
  input               io_rxclk,
  input               rxReset
);
  (* async_reg = "true" *) reg                 buffers_0;
  (* async_reg = "true" *) reg                 buffers_1;

  assign io_dataOut = buffers_1;
  always @(posedge io_rxclk or posedge rxReset) begin
    if(rxReset) begin
      buffers_0 <= 1'b0;
      buffers_1 <= 1'b0;
    end else begin
      buffers_0 <= io_dataIn;
      buffers_1 <= buffers_0;
    end
  end


endmodule

module BufferCC_4 (
  input               io_dataIn,
  output              io_dataOut,
  input               clk,
  input               reset,
  input               io_ctrl_rx_flush
);
  (* async_reg = "true" *) reg                 buffers_0;
  (* async_reg = "true" *) reg                 buffers_1;

  assign io_dataOut = buffers_1;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      buffers_0 <= 1'b0;
      buffers_1 <= 1'b0;
    end else begin
      if(io_ctrl_rx_flush) begin
      buffers_0 <= 1'b0;
      buffers_1 <= 1'b0;
      end else begin
        buffers_0 <= io_dataIn;
        buffers_1 <= buffers_0;
      end
    end
  end


endmodule

//BufferCC replaced by BufferCC

//BufferCC_1 replaced by BufferCC_1

module BufferCC_1 (
  input               io_dataIn,
  output              io_dataOut,
  input               clk,
  input               reset,
  input               io_ctrl_tx_flush
);
  (* async_reg = "true" *) reg                 buffers_0;
  (* async_reg = "true" *) reg                 buffers_1;

  assign io_dataOut = buffers_1;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      buffers_0 <= 1'b0;
      buffers_1 <= 1'b0;
    end else begin
      if(io_ctrl_tx_flush) begin
      buffers_0 <= 1'b0;
      buffers_1 <= 1'b0;
      end else begin
        buffers_0 <= io_dataIn;
        buffers_1 <= buffers_0;
      end
    end
  end


endmodule

module BufferCC (
  input               io_dataIn,
  output              io_dataOut,
  input               io_txclk,
  input               txReset
);
  (* async_reg = "true" *) reg                 buffers_0;
  (* async_reg = "true" *) reg                 buffers_1;

  assign io_dataOut = buffers_1;
  always @(posedge io_txclk or posedge txReset) begin
    if(txReset) begin
      buffers_0 <= 1'b0;
      buffers_1 <= 1'b0;
    end else begin
      buffers_0 <= io_dataIn;
      buffers_1 <= buffers_0;
    end
  end


endmodule
