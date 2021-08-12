// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : EmifToAurora_test
// Git hash  : 1cba8ab088250767381bb3d3535fbb8033cb009e


`define AuroraState_binary_sequential_type [2:0]
`define AuroraState_binary_sequential_IDLE 3'b000
`define AuroraState_binary_sequential_WAIT_1 3'b001
`define AuroraState_binary_sequential_START 3'b010
`define AuroraState_binary_sequential_DEVICEID 3'b011
`define AuroraState_binary_sequential_LENGTH 3'b100
`define AuroraState_binary_sequential_DATA 3'b101
`define AuroraState_binary_sequential_CRC 3'b110
`define AuroraState_binary_sequential_STOP 3'b111


module EmifToAurora_test (
  input      [23:0]   emif_emif_addr,
  input      [15:0]   emif_emif_data_read,
  output     [15:0]   emif_emif_data_write,
  output              emif_emif_data_writeEnable,
  input               emif_emif_cs,
  input               emif_emif_we,
  input               emif_emif_oe,
  input               clk,
  input               reset,
  input               aurora_userclk
);
  wire       [15:0]   area_emiftoapb_emif_emif_data_write;
  wire                area_emiftoapb_emif_emif_data_writeEnable;
  wire       [19:0]   area_emiftoapb_apb_PADDR;
  wire       [0:0]    area_emiftoapb_apb_PSEL;
  wire                area_emiftoapb_apb_PENABLE;
  wire                area_emiftoapb_apb_PWRITE;
  wire       [31:0]   area_emiftoapb_apb_PWDATA;
  wire                area_apb3toTxBram_io_apb_PREADY;
  wire       [31:0]   area_apb3toTxBram_io_apb_PRDATA;
  wire                area_apb3toTxBram_io_apb_PSLVERROR;
  wire                area_apb3toTxBram_io_bram_en;
  wire       [3:0]    area_apb3toTxBram_io_bram_we;
  wire       [7:0]    area_apb3toTxBram_io_bram_addr;
  wire       [31:0]   area_apb3toTxBram_io_bram_wrdata;
  wire                area_apb3toRxBram_io_apb_PREADY;
  wire       [31:0]   area_apb3toRxBram_io_apb_PRDATA;
  wire                area_apb3toRxBram_io_apb_PSLVERROR;
  wire                area_apb3toRxBram_io_bram_en;
  wire       [3:0]    area_apb3toRxBram_io_bram_we;
  wire       [7:0]    area_apb3toRxBram_io_bram_addr;
  wire       [31:0]   area_apb3toRxBram_io_bram_wrdata;
  wire                area_auroratop_apb_PREADY;
  wire       [31:0]   area_auroratop_apb_PRDATA;
  wire                area_auroratop_apb_PSLVERROR;
  wire       [31:0]   area_auroratop_tx_bram_rddata;
  wire       [31:0]   area_auroratop_rx_bram_rddata;
  wire                apb_decoder_io_input_PREADY;
  wire       [31:0]   apb_decoder_io_input_PRDATA;
  wire                apb_decoder_io_input_PSLVERROR;
  wire       [19:0]   apb_decoder_io_output_PADDR;
  wire       [2:0]    apb_decoder_io_output_PSEL;
  wire                apb_decoder_io_output_PENABLE;
  wire                apb_decoder_io_output_PWRITE;
  wire       [31:0]   apb_decoder_io_output_PWDATA;
  wire                apb3Router_1_io_input_PREADY;
  wire       [31:0]   apb3Router_1_io_input_PRDATA;
  wire                apb3Router_1_io_input_PSLVERROR;
  wire       [19:0]   apb3Router_1_io_outputs_0_PADDR;
  wire       [0:0]    apb3Router_1_io_outputs_0_PSEL;
  wire                apb3Router_1_io_outputs_0_PENABLE;
  wire                apb3Router_1_io_outputs_0_PWRITE;
  wire       [31:0]   apb3Router_1_io_outputs_0_PWDATA;
  wire       [19:0]   apb3Router_1_io_outputs_1_PADDR;
  wire       [0:0]    apb3Router_1_io_outputs_1_PSEL;
  wire                apb3Router_1_io_outputs_1_PENABLE;
  wire                apb3Router_1_io_outputs_1_PWRITE;
  wire       [31:0]   apb3Router_1_io_outputs_1_PWDATA;
  wire       [19:0]   apb3Router_1_io_outputs_2_PADDR;
  wire       [0:0]    apb3Router_1_io_outputs_2_PSEL;
  wire                apb3Router_1_io_outputs_2_PENABLE;
  wire                apb3Router_1_io_outputs_2_PWRITE;
  wire       [31:0]   apb3Router_1_io_outputs_2_PWDATA;

  EmifToApb area_emiftoapb (
    .emif_emif_addr                (emif_emif_addr                             ), //i
    .emif_emif_data_read           (emif_emif_data_read                        ), //i
    .emif_emif_data_write          (area_emiftoapb_emif_emif_data_write        ), //o
    .emif_emif_data_writeEnable    (area_emiftoapb_emif_emif_data_writeEnable  ), //o
    .emif_emif_cs                  (emif_emif_cs                               ), //i
    .emif_emif_we                  (emif_emif_we                               ), //i
    .emif_emif_oe                  (emif_emif_oe                               ), //i
    .apb_PADDR                     (area_emiftoapb_apb_PADDR                   ), //o
    .apb_PSEL                      (area_emiftoapb_apb_PSEL                    ), //o
    .apb_PENABLE                   (area_emiftoapb_apb_PENABLE                 ), //o
    .apb_PREADY                    (apb_decoder_io_input_PREADY                ), //i
    .apb_PWRITE                    (area_emiftoapb_apb_PWRITE                  ), //o
    .apb_PWDATA                    (area_emiftoapb_apb_PWDATA                  ), //o
    .apb_PRDATA                    (apb_decoder_io_input_PRDATA                ), //i
    .apb_PSLVERROR                 (apb_decoder_io_input_PSLVERROR             ), //i
    .clk                           (clk                                        ), //i
    .reset                         (reset                                      )  //i
  );
  Apb3ToBram area_apb3toTxBram (
    .io_apb_PADDR        (apb3Router_1_io_outputs_0_PADDR     ), //i
    .io_apb_PSEL         (apb3Router_1_io_outputs_0_PSEL      ), //i
    .io_apb_PENABLE      (apb3Router_1_io_outputs_0_PENABLE   ), //i
    .io_apb_PREADY       (area_apb3toTxBram_io_apb_PREADY     ), //o
    .io_apb_PWRITE       (apb3Router_1_io_outputs_0_PWRITE    ), //i
    .io_apb_PWDATA       (apb3Router_1_io_outputs_0_PWDATA    ), //i
    .io_apb_PRDATA       (area_apb3toTxBram_io_apb_PRDATA     ), //o
    .io_apb_PSLVERROR    (area_apb3toTxBram_io_apb_PSLVERROR  ), //o
    .io_bram_en          (area_apb3toTxBram_io_bram_en        ), //o
    .io_bram_we          (area_apb3toTxBram_io_bram_we        ), //o
    .io_bram_addr        (area_apb3toTxBram_io_bram_addr      ), //o
    .io_bram_wrdata      (area_apb3toTxBram_io_bram_wrdata    ), //o
    .io_bram_rddata      (area_auroratop_tx_bram_rddata       )  //i
  );
  Apb3ToBram area_apb3toRxBram (
    .io_apb_PADDR        (apb3Router_1_io_outputs_1_PADDR     ), //i
    .io_apb_PSEL         (apb3Router_1_io_outputs_1_PSEL      ), //i
    .io_apb_PENABLE      (apb3Router_1_io_outputs_1_PENABLE   ), //i
    .io_apb_PREADY       (area_apb3toRxBram_io_apb_PREADY     ), //o
    .io_apb_PWRITE       (apb3Router_1_io_outputs_1_PWRITE    ), //i
    .io_apb_PWDATA       (apb3Router_1_io_outputs_1_PWDATA    ), //i
    .io_apb_PRDATA       (area_apb3toRxBram_io_apb_PRDATA     ), //o
    .io_apb_PSLVERROR    (area_apb3toRxBram_io_apb_PSLVERROR  ), //o
    .io_bram_en          (area_apb3toRxBram_io_bram_en        ), //o
    .io_bram_we          (area_apb3toRxBram_io_bram_we        ), //o
    .io_bram_addr        (area_apb3toRxBram_io_bram_addr      ), //o
    .io_bram_wrdata      (area_apb3toRxBram_io_bram_wrdata    ), //o
    .io_bram_rddata      (area_auroratop_rx_bram_rddata       )  //i
  );
  AuroraTop area_auroratop (
    .apb_PADDR         (apb3Router_1_io_outputs_2_PADDR    ), //i
    .apb_PSEL          (apb3Router_1_io_outputs_2_PSEL     ), //i
    .apb_PENABLE       (apb3Router_1_io_outputs_2_PENABLE  ), //i
    .apb_PREADY        (area_auroratop_apb_PREADY          ), //o
    .apb_PWRITE        (apb3Router_1_io_outputs_2_PWRITE   ), //i
    .apb_PWDATA        (apb3Router_1_io_outputs_2_PWDATA   ), //i
    .apb_PRDATA        (area_auroratop_apb_PRDATA          ), //o
    .apb_PSLVERROR     (area_auroratop_apb_PSLVERROR       ), //o
    .tx_bram_en        (area_apb3toTxBram_io_bram_en       ), //i
    .tx_bram_we        (area_apb3toTxBram_io_bram_we       ), //i
    .tx_bram_addr      (area_apb3toTxBram_io_bram_addr     ), //i
    .tx_bram_wrdata    (area_apb3toTxBram_io_bram_wrdata   ), //i
    .tx_bram_rddata    (area_auroratop_tx_bram_rddata      ), //o
    .rx_bram_en        (area_apb3toRxBram_io_bram_en       ), //i
    .rx_bram_we        (area_apb3toRxBram_io_bram_we       ), //i
    .rx_bram_addr      (area_apb3toRxBram_io_bram_addr     ), //i
    .rx_bram_wrdata    (area_apb3toRxBram_io_bram_wrdata   ), //i
    .rx_bram_rddata    (area_auroratop_rx_bram_rddata      ), //o
    .clk               (clk                                ), //i
    .reset             (reset                              ), //i
    .aurora_userclk    (aurora_userclk                     )  //i
  );
  Apb3Decoder apb_decoder (
    .io_input_PADDR         (area_emiftoapb_apb_PADDR         ), //i
    .io_input_PSEL          (area_emiftoapb_apb_PSEL          ), //i
    .io_input_PENABLE       (area_emiftoapb_apb_PENABLE       ), //i
    .io_input_PREADY        (apb_decoder_io_input_PREADY      ), //o
    .io_input_PWRITE        (area_emiftoapb_apb_PWRITE        ), //i
    .io_input_PWDATA        (area_emiftoapb_apb_PWDATA        ), //i
    .io_input_PRDATA        (apb_decoder_io_input_PRDATA      ), //o
    .io_input_PSLVERROR     (apb_decoder_io_input_PSLVERROR   ), //o
    .io_output_PADDR        (apb_decoder_io_output_PADDR      ), //o
    .io_output_PSEL         (apb_decoder_io_output_PSEL       ), //o
    .io_output_PENABLE      (apb_decoder_io_output_PENABLE    ), //o
    .io_output_PREADY       (apb3Router_1_io_input_PREADY     ), //i
    .io_output_PWRITE       (apb_decoder_io_output_PWRITE     ), //o
    .io_output_PWDATA       (apb_decoder_io_output_PWDATA     ), //o
    .io_output_PRDATA       (apb3Router_1_io_input_PRDATA     ), //i
    .io_output_PSLVERROR    (apb3Router_1_io_input_PSLVERROR  )  //i
  );
  Apb3Router apb3Router_1 (
    .io_input_PADDR            (apb_decoder_io_output_PADDR         ), //i
    .io_input_PSEL             (apb_decoder_io_output_PSEL          ), //i
    .io_input_PENABLE          (apb_decoder_io_output_PENABLE       ), //i
    .io_input_PREADY           (apb3Router_1_io_input_PREADY        ), //o
    .io_input_PWRITE           (apb_decoder_io_output_PWRITE        ), //i
    .io_input_PWDATA           (apb_decoder_io_output_PWDATA        ), //i
    .io_input_PRDATA           (apb3Router_1_io_input_PRDATA        ), //o
    .io_input_PSLVERROR        (apb3Router_1_io_input_PSLVERROR     ), //o
    .io_outputs_0_PADDR        (apb3Router_1_io_outputs_0_PADDR     ), //o
    .io_outputs_0_PSEL         (apb3Router_1_io_outputs_0_PSEL      ), //o
    .io_outputs_0_PENABLE      (apb3Router_1_io_outputs_0_PENABLE   ), //o
    .io_outputs_0_PREADY       (area_apb3toTxBram_io_apb_PREADY     ), //i
    .io_outputs_0_PWRITE       (apb3Router_1_io_outputs_0_PWRITE    ), //o
    .io_outputs_0_PWDATA       (apb3Router_1_io_outputs_0_PWDATA    ), //o
    .io_outputs_0_PRDATA       (area_apb3toTxBram_io_apb_PRDATA     ), //i
    .io_outputs_0_PSLVERROR    (area_apb3toTxBram_io_apb_PSLVERROR  ), //i
    .io_outputs_1_PADDR        (apb3Router_1_io_outputs_1_PADDR     ), //o
    .io_outputs_1_PSEL         (apb3Router_1_io_outputs_1_PSEL      ), //o
    .io_outputs_1_PENABLE      (apb3Router_1_io_outputs_1_PENABLE   ), //o
    .io_outputs_1_PREADY       (area_apb3toRxBram_io_apb_PREADY     ), //i
    .io_outputs_1_PWRITE       (apb3Router_1_io_outputs_1_PWRITE    ), //o
    .io_outputs_1_PWDATA       (apb3Router_1_io_outputs_1_PWDATA    ), //o
    .io_outputs_1_PRDATA       (area_apb3toRxBram_io_apb_PRDATA     ), //i
    .io_outputs_1_PSLVERROR    (area_apb3toRxBram_io_apb_PSLVERROR  ), //i
    .io_outputs_2_PADDR        (apb3Router_1_io_outputs_2_PADDR     ), //o
    .io_outputs_2_PSEL         (apb3Router_1_io_outputs_2_PSEL      ), //o
    .io_outputs_2_PENABLE      (apb3Router_1_io_outputs_2_PENABLE   ), //o
    .io_outputs_2_PREADY       (area_auroratop_apb_PREADY           ), //i
    .io_outputs_2_PWRITE       (apb3Router_1_io_outputs_2_PWRITE    ), //o
    .io_outputs_2_PWDATA       (apb3Router_1_io_outputs_2_PWDATA    ), //o
    .io_outputs_2_PRDATA       (area_auroratop_apb_PRDATA           ), //i
    .io_outputs_2_PSLVERROR    (area_auroratop_apb_PSLVERROR        ), //i
    .clk                       (clk                                 ), //i
    .reset                     (reset                               )  //i
  );
  assign emif_emif_data_write = area_emiftoapb_emif_emif_data_write;
  assign emif_emif_data_writeEnable = area_emiftoapb_emif_emif_data_writeEnable;

endmodule

module Apb3Router (
  input      [19:0]   io_input_PADDR,
  input      [2:0]    io_input_PSEL,
  input               io_input_PENABLE,
  output              io_input_PREADY,
  input               io_input_PWRITE,
  input      [31:0]   io_input_PWDATA,
  output     [31:0]   io_input_PRDATA,
  output              io_input_PSLVERROR,
  output     [19:0]   io_outputs_0_PADDR,
  output     [0:0]    io_outputs_0_PSEL,
  output              io_outputs_0_PENABLE,
  input               io_outputs_0_PREADY,
  output              io_outputs_0_PWRITE,
  output     [31:0]   io_outputs_0_PWDATA,
  input      [31:0]   io_outputs_0_PRDATA,
  input               io_outputs_0_PSLVERROR,
  output     [19:0]   io_outputs_1_PADDR,
  output     [0:0]    io_outputs_1_PSEL,
  output              io_outputs_1_PENABLE,
  input               io_outputs_1_PREADY,
  output              io_outputs_1_PWRITE,
  output     [31:0]   io_outputs_1_PWDATA,
  input      [31:0]   io_outputs_1_PRDATA,
  input               io_outputs_1_PSLVERROR,
  output     [19:0]   io_outputs_2_PADDR,
  output     [0:0]    io_outputs_2_PSEL,
  output              io_outputs_2_PENABLE,
  input               io_outputs_2_PREADY,
  output              io_outputs_2_PWRITE,
  output     [31:0]   io_outputs_2_PWDATA,
  input      [31:0]   io_outputs_2_PRDATA,
  input               io_outputs_2_PSLVERROR,
  input               clk,
  input               reset
);
  reg                 _zz_io_input_PREADY;
  reg        [31:0]   _zz_io_input_PRDATA;
  reg                 _zz_io_input_PSLVERROR;
  wire                _zz_selIndex;
  wire                _zz_selIndex_1;
  reg        [1:0]    selIndex;

  always @(*) begin
    case(selIndex)
      2'b00 : begin
        _zz_io_input_PREADY = io_outputs_0_PREADY;
        _zz_io_input_PRDATA = io_outputs_0_PRDATA;
        _zz_io_input_PSLVERROR = io_outputs_0_PSLVERROR;
      end
      2'b01 : begin
        _zz_io_input_PREADY = io_outputs_1_PREADY;
        _zz_io_input_PRDATA = io_outputs_1_PRDATA;
        _zz_io_input_PSLVERROR = io_outputs_1_PSLVERROR;
      end
      default : begin
        _zz_io_input_PREADY = io_outputs_2_PREADY;
        _zz_io_input_PRDATA = io_outputs_2_PRDATA;
        _zz_io_input_PSLVERROR = io_outputs_2_PSLVERROR;
      end
    endcase
  end

  assign io_outputs_0_PADDR = io_input_PADDR;
  assign io_outputs_0_PENABLE = io_input_PENABLE;
  assign io_outputs_0_PSEL[0] = io_input_PSEL[0];
  assign io_outputs_0_PWRITE = io_input_PWRITE;
  assign io_outputs_0_PWDATA = io_input_PWDATA;
  assign io_outputs_1_PADDR = io_input_PADDR;
  assign io_outputs_1_PENABLE = io_input_PENABLE;
  assign io_outputs_1_PSEL[0] = io_input_PSEL[1];
  assign io_outputs_1_PWRITE = io_input_PWRITE;
  assign io_outputs_1_PWDATA = io_input_PWDATA;
  assign io_outputs_2_PADDR = io_input_PADDR;
  assign io_outputs_2_PENABLE = io_input_PENABLE;
  assign io_outputs_2_PSEL[0] = io_input_PSEL[2];
  assign io_outputs_2_PWRITE = io_input_PWRITE;
  assign io_outputs_2_PWDATA = io_input_PWDATA;
  assign _zz_selIndex = io_input_PSEL[1];
  assign _zz_selIndex_1 = io_input_PSEL[2];
  assign io_input_PREADY = _zz_io_input_PREADY;
  assign io_input_PRDATA = _zz_io_input_PRDATA;
  assign io_input_PSLVERROR = _zz_io_input_PSLVERROR;
  always @(posedge clk) begin
    selIndex <= {_zz_selIndex_1,_zz_selIndex};
  end


endmodule

module Apb3Decoder (
  input      [19:0]   io_input_PADDR,
  input      [0:0]    io_input_PSEL,
  input               io_input_PENABLE,
  output reg          io_input_PREADY,
  input               io_input_PWRITE,
  input      [31:0]   io_input_PWDATA,
  output     [31:0]   io_input_PRDATA,
  output reg          io_input_PSLVERROR,
  output     [19:0]   io_output_PADDR,
  output reg [2:0]    io_output_PSEL,
  output              io_output_PENABLE,
  input               io_output_PREADY,
  output              io_output_PWRITE,
  output     [31:0]   io_output_PWDATA,
  input      [31:0]   io_output_PRDATA,
  input               io_output_PSLVERROR
);
  wire                when_Apb3Decoder_l84;

  assign io_output_PADDR = io_input_PADDR;
  assign io_output_PENABLE = io_input_PENABLE;
  assign io_output_PWRITE = io_input_PWRITE;
  assign io_output_PWDATA = io_input_PWDATA;
  always @(*) begin
    io_output_PSEL[0] = (((io_input_PADDR & (~ 20'h000ff)) == 20'h0) && io_input_PSEL[0]);
    io_output_PSEL[1] = (((io_input_PADDR & (~ 20'h000ff)) == 20'h01000) && io_input_PSEL[0]);
    io_output_PSEL[2] = (((io_input_PADDR & (~ 20'h000ff)) == 20'h03000) && io_input_PSEL[0]);
  end

  always @(*) begin
    io_input_PREADY = io_output_PREADY;
    if(when_Apb3Decoder_l84) begin
      io_input_PREADY = 1'b1;
    end
  end

  assign io_input_PRDATA = io_output_PRDATA;
  always @(*) begin
    io_input_PSLVERROR = io_output_PSLVERROR;
    if(when_Apb3Decoder_l84) begin
      io_input_PSLVERROR = 1'b1;
    end
  end

  assign when_Apb3Decoder_l84 = (io_input_PSEL[0] && (io_output_PSEL == 3'b000));

endmodule

module AuroraTop (
  input      [19:0]   apb_PADDR,
  input      [0:0]    apb_PSEL,
  input               apb_PENABLE,
  output              apb_PREADY,
  input               apb_PWRITE,
  input      [31:0]   apb_PWDATA,
  output reg [31:0]   apb_PRDATA,
  output              apb_PSLVERROR,
  input               tx_bram_en,
  input      [3:0]    tx_bram_we,
  input      [7:0]    tx_bram_addr,
  input      [31:0]   tx_bram_wrdata,
  output     [31:0]   tx_bram_rddata,
  input               rx_bram_en,
  input      [3:0]    rx_bram_we,
  input      [7:0]    rx_bram_addr,
  input      [31:0]   rx_bram_wrdata,
  output     [31:0]   rx_bram_rddata,
  input               clk,
  input               reset,
  input               aurora_userclk
);
  wire                auroraArea_auroratxcore_tx_start;
  wire                auroraArea_auroratxcore_tx_trigger;
  wire                auroraArea_aurorarxcore_axir_ready;
  wire                auroraArea_aurorarxcore_bram_en;
  wire       [3:0]    auroraArea_aurorarxcore_bram_we;
  wire       [7:0]    auroraArea_aurorarxcore_bram_addr;
  wire       [31:0]   auroraArea_aurorarxcore_bram_wrdata;
  wire                auroraArea_aurorarxcore_bram_clkout;
  wire                auroraArea_aurorarxcore_bram_resetout;
  wire                auroraArea_auroratxcore_axiw_valid;
  wire       [31:0]   auroraArea_auroratxcore_axiw_payload_data;
  wire                auroraArea_auroratxcore_axiw_payload_last;
  wire                auroraArea_auroratxcore_bram_en;
  wire       [3:0]    auroraArea_auroratxcore_bram_we;
  wire       [7:0]    auroraArea_auroratxcore_bram_addr;
  wire       [31:0]   auroraArea_auroratxcore_bram_wrdata;
  wire                auroraArea_auroratxcore_bram_clkout;
  wire                auroraArea_auroratxcore_bram_resetout;
  wire       [31:0]   auroraArea_auroraTxBlockRam_ioA_rddata;
  wire       [31:0]   auroraArea_auroraTxBlockRam_ioB_rddata;
  wire       [31:0]   auroraArea_auroraRxBlockRam_ioA_rddata;
  wire       [31:0]   auroraArea_auroraRxBlockRam_ioB_rddata;
  (* async_reg = "true" *) reg        [31:0]   toparea_tx_headtemp;
  (* async_reg = "true" *) reg        [31:0]   toparea_tx_ctrl;
  wire                toparea_ctrl_askWrite;
  wire                toparea_ctrl_askRead;
  wire                toparea_ctrl_doWrite;
  wire                toparea_ctrl_doRead;

  AuroraRxCore auroraArea_aurorarxcore (
    .aurora_userclk       (aurora_userclk                             ), //i
    .reset                (reset                                      ), //i
    .axir_valid           (auroraArea_auroratxcore_axiw_valid         ), //i
    .axir_ready           (auroraArea_aurorarxcore_axir_ready         ), //o
    .axir_payload_data    (auroraArea_auroratxcore_axiw_payload_data  ), //i
    .axir_payload_last    (auroraArea_auroratxcore_axiw_payload_last  ), //i
    .bram_en              (auroraArea_aurorarxcore_bram_en            ), //o
    .bram_we              (auroraArea_aurorarxcore_bram_we            ), //o
    .bram_addr            (auroraArea_aurorarxcore_bram_addr          ), //o
    .bram_wrdata          (auroraArea_aurorarxcore_bram_wrdata        ), //o
    .bram_rddata          (auroraArea_auroraRxBlockRam_ioB_rddata     ), //i
    .bram_clkout          (auroraArea_aurorarxcore_bram_clkout        ), //o
    .bram_resetout        (auroraArea_aurorarxcore_bram_resetout      )  //o
  );
  AuroraTxCore auroraArea_auroratxcore (
    .aurora_userclk       (aurora_userclk                             ), //i
    .reset                (reset                                      ), //i
    .axiw_valid           (auroraArea_auroratxcore_axiw_valid         ), //o
    .axiw_ready           (auroraArea_aurorarxcore_axir_ready         ), //i
    .axiw_payload_data    (auroraArea_auroratxcore_axiw_payload_data  ), //o
    .axiw_payload_last    (auroraArea_auroratxcore_axiw_payload_last  ), //o
    .tx_head              (toparea_tx_headtemp                        ), //i
    .tx_start             (auroraArea_auroratxcore_tx_start           ), //i
    .tx_trigger           (auroraArea_auroratxcore_tx_trigger         ), //i
    .bram_en              (auroraArea_auroratxcore_bram_en            ), //o
    .bram_we              (auroraArea_auroratxcore_bram_we            ), //o
    .bram_addr            (auroraArea_auroratxcore_bram_addr          ), //o
    .bram_wrdata          (auroraArea_auroratxcore_bram_wrdata        ), //o
    .bram_rddata          (auroraArea_auroraTxBlockRam_ioA_rddata     ), //i
    .bram_clkout          (auroraArea_auroratxcore_bram_clkout        ), //o
    .bram_resetout        (auroraArea_auroratxcore_bram_resetout      )  //o
  );
  BlockRam auroraArea_auroraTxBlockRam (
    .ioA_en        (auroraArea_auroratxcore_bram_en         ), //i
    .ioA_we        (auroraArea_auroratxcore_bram_we         ), //i
    .ioA_addr      (auroraArea_auroratxcore_bram_addr       ), //i
    .ioA_wrdata    (auroraArea_auroratxcore_bram_wrdata     ), //i
    .ioA_rddata    (auroraArea_auroraTxBlockRam_ioA_rddata  ), //o
    .ioB_en        (tx_bram_en                              ), //i
    .ioB_we        (tx_bram_we                              ), //i
    .ioB_addr      (tx_bram_addr                            ), //i
    .ioB_wrdata    (tx_bram_wrdata                          ), //i
    .ioB_rddata    (auroraArea_auroraTxBlockRam_ioB_rddata  ), //o
    .clka          (auroraArea_auroratxcore_bram_clkout     ), //i
    .clkb          (clk                                     ), //i
    .reseta        (auroraArea_auroratxcore_bram_resetout   ), //i
    .resetb        (reset                                   )  //i
  );
  BlockRam auroraArea_auroraRxBlockRam (
    .ioA_en        (rx_bram_en                              ), //i
    .ioA_we        (rx_bram_we                              ), //i
    .ioA_addr      (rx_bram_addr                            ), //i
    .ioA_wrdata    (rx_bram_wrdata                          ), //i
    .ioA_rddata    (auroraArea_auroraRxBlockRam_ioA_rddata  ), //o
    .ioB_en        (auroraArea_aurorarxcore_bram_en         ), //i
    .ioB_we        (auroraArea_aurorarxcore_bram_we         ), //i
    .ioB_addr      (auroraArea_aurorarxcore_bram_addr       ), //i
    .ioB_wrdata    (auroraArea_aurorarxcore_bram_wrdata     ), //i
    .ioB_rddata    (auroraArea_auroraRxBlockRam_ioB_rddata  ), //o
    .clka          (clk                                     ), //i
    .clkb          (auroraArea_aurorarxcore_bram_clkout     ), //i
    .reseta        (reset                                   ), //i
    .resetb        (auroraArea_aurorarxcore_bram_resetout   )  //i
  );
  assign apb_PREADY = 1'b1;
  always @(*) begin
    apb_PRDATA = 32'h0;
    case(apb_PADDR)
      20'h03000 : begin
        apb_PRDATA[31 : 0] = toparea_tx_headtemp;
      end
      20'h03004 : begin
        apb_PRDATA[31 : 0] = toparea_tx_ctrl;
      end
      default : begin
      end
    endcase
  end

  assign apb_PSLVERROR = 1'b0;
  assign toparea_ctrl_askWrite = ((apb_PSEL[0] && apb_PENABLE) && apb_PWRITE);
  assign toparea_ctrl_askRead = ((apb_PSEL[0] && apb_PENABLE) && (! apb_PWRITE));
  assign toparea_ctrl_doWrite = (((apb_PSEL[0] && apb_PENABLE) && apb_PREADY) && apb_PWRITE);
  assign toparea_ctrl_doRead = (((apb_PSEL[0] && apb_PENABLE) && apb_PREADY) && (! apb_PWRITE));
  assign auroraArea_auroratxcore_tx_start = toparea_tx_ctrl[0];
  assign auroraArea_auroratxcore_tx_trigger = toparea_tx_ctrl[4];
  assign rx_bram_rddata = auroraArea_auroraRxBlockRam_ioA_rddata;
  assign tx_bram_rddata = auroraArea_auroraTxBlockRam_ioB_rddata;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      toparea_tx_ctrl <= 32'h0;
    end else begin
      case(apb_PADDR)
        20'h03004 : begin
          if(toparea_ctrl_doWrite) begin
            toparea_tx_ctrl <= apb_PWDATA[31 : 0];
          end
        end
        default : begin
        end
      endcase
    end
  end

  always @(posedge clk) begin
    case(apb_PADDR)
      20'h03000 : begin
        if(toparea_ctrl_doWrite) begin
          toparea_tx_headtemp <= apb_PWDATA[31 : 0];
        end
      end
      default : begin
      end
    endcase
  end


endmodule

//Apb3ToBram replaced by Apb3ToBram

module Apb3ToBram (
  input      [19:0]   io_apb_PADDR,
  input      [0:0]    io_apb_PSEL,
  input               io_apb_PENABLE,
  output              io_apb_PREADY,
  input               io_apb_PWRITE,
  input      [31:0]   io_apb_PWDATA,
  output     [31:0]   io_apb_PRDATA,
  output              io_apb_PSLVERROR,
  output              io_bram_en,
  output reg [3:0]    io_bram_we,
  output     [7:0]    io_bram_addr,
  output     [31:0]   io_bram_wrdata,
  input      [31:0]   io_bram_rddata
);
  wire                when_Apb3ToBram_l41;

  assign io_apb_PREADY = 1'b1;
  assign io_apb_PSLVERROR = 1'b0;
  assign io_bram_addr = io_apb_PADDR[7:0];
  assign io_bram_en = io_apb_PSEL[0];
  assign when_Apb3ToBram_l41 = ((io_apb_PENABLE && io_apb_PWRITE) && io_apb_PSEL[0]);
  always @(*) begin
    if(when_Apb3ToBram_l41) begin
      io_bram_we = 4'b1111;
    end else begin
      io_bram_we = 4'b0000;
    end
  end

  assign io_bram_wrdata = io_apb_PWDATA;
  assign io_apb_PRDATA = io_bram_rddata;

endmodule

module EmifToApb (
  input      [23:0]   emif_emif_addr,
  input      [15:0]   emif_emif_data_read,
  output reg [15:0]   emif_emif_data_write,
  output              emif_emif_data_writeEnable,
  input               emif_emif_cs,
  input               emif_emif_we,
  input               emif_emif_oe,
  output     [19:0]   apb_PADDR,
  output     [0:0]    apb_PSEL,
  output              apb_PENABLE,
  input               apb_PREADY,
  output              apb_PWRITE,
  output     [31:0]   apb_PWDATA,
  input      [31:0]   apb_PRDATA,
  input               apb_PSLVERROR,
  input               clk,
  input               reset
);
  reg                 penable;
  reg        [15:0]   emifdatatemp;
  reg                 penable_regNext;
  wire                when_EmifToApb_l70;
  wire                when_EmifToApb_l80;
  wire                when_EmifToApb_l81;
  reg        [15:0]   _zz_emif_emif_data_write;
  wire                when_EmifToApb_l83;
  reg        [15:0]   _zz_emif_emif_data_write_1;

  assign apb_PADDR = emif_emif_addr[19:0];
  assign apb_PSEL = (~ emif_emif_cs);
  assign apb_PENABLE = ((penable && (! penable_regNext)) ? penable : 1'b0);
  assign apb_PWRITE = (((! emif_emif_we) && emif_emif_oe) && emif_emif_addr[23]);
  assign when_EmifToApb_l70 = (((! emif_emif_we) && emif_emif_oe) && (! emif_emif_addr[23]));
  assign apb_PWDATA = {emif_emif_data_read,emifdatatemp};
  assign emif_emif_data_writeEnable = (! emif_emif_oe);
  assign when_EmifToApb_l80 = emif_emif_addr[23];
  assign when_EmifToApb_l81 = (! emif_emif_oe);
  always @(*) begin
    if(when_EmifToApb_l80) begin
      emif_emif_data_write = _zz_emif_emif_data_write;
    end else begin
      emif_emif_data_write = _zz_emif_emif_data_write_1;
    end
  end

  assign when_EmifToApb_l83 = (! emif_emif_oe);
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      penable <= 1'b0;
    end else begin
      penable <= (((! emif_emif_oe) || (! emif_emif_we)) && emif_emif_addr[23]);
    end
  end

  always @(posedge clk) begin
    penable_regNext <= penable;
    if(when_EmifToApb_l70) begin
      emifdatatemp <= emif_emif_data_read;
    end
  end

  always @(posedge clk) begin
    if(when_EmifToApb_l81) begin
      _zz_emif_emif_data_write <= apb_PRDATA[31 : 16];
    end
  end

  always @(posedge clk) begin
    if(when_EmifToApb_l83) begin
      _zz_emif_emif_data_write_1 <= apb_PRDATA[15 : 0];
    end
  end


endmodule

//BlockRam replaced by BlockRam

module BlockRam (
  input               ioA_en,
  input      [3:0]    ioA_we,
  input      [7:0]    ioA_addr,
  input      [31:0]   ioA_wrdata,
  output     [31:0]   ioA_rddata,
  input               ioB_en,
  input      [3:0]    ioB_we,
  input      [7:0]    ioB_addr,
  input      [31:0]   ioB_wrdata,
  output     [31:0]   ioB_rddata,
  input               clka,
  input               clkb,
  input               reseta,
  input               resetb
);
  reg        [31:0]   _zz_bram_port0;
  reg        [31:0]   _zz_bram_port1;
  wire                _zz_bram_port;
  wire       [8:0]    i;
  wire                _zz_ioA_rddata;
  wire                _zz_ioB_rddata;
  reg [31:0] bram [0:255];

  assign _zz_bram_port = (ioB_en && (ioB_we == 4'b1111));
  always @(posedge clka) begin
    if(_zz_ioA_rddata) begin
      _zz_bram_port0 <= bram[ioA_addr];
    end
  end

  always @(posedge clkb) begin
    if(_zz_ioB_rddata) begin
      _zz_bram_port1 <= bram[ioB_addr];
    end
  end

  always @(posedge clkb) begin
    if(_zz_bram_port) begin
      bram[ioB_addr] <= ioB_wrdata;
    end
  end

  assign _zz_ioA_rddata = (ioA_en && (ioA_we == 4'b0000));
  assign ioA_rddata = _zz_bram_port0;
  assign _zz_ioB_rddata = (ioB_en && (ioB_we == 4'b0000));
  assign ioB_rddata = _zz_bram_port1;

endmodule

module AuroraTxCore (
  input               aurora_userclk,
  input               reset,
  output              axiw_valid,
  input               axiw_ready,
  output     [31:0]   axiw_payload_data,
  output              axiw_payload_last,
  input      [31:0]   tx_head,
  input               tx_start,
  input               tx_trigger,
  output              bram_en,
  output     [3:0]    bram_we,
  output     [7:0]    bram_addr,
  output     [31:0]   bram_wrdata,
  input      [31:0]   bram_rddata,
  output              bram_clkout,
  output              bram_resetout
);
  wire       [31:0]   crc32_2_crc_o;
  wire       [7:0]    _zz_when_Gtx_Tx_l104;
  wire       [7:0]    _zz_auroraTxArea_mem_addr;
  reg                 auroraTxArea_axi_last_2;
  reg                 auroraTxArea_axi_last_1;
  reg        [31:0]   auroraTxArea_axi_txdata_7;
  reg        [31:0]   auroraTxArea_axi_txdata_6;
  reg        [31:0]   auroraTxArea_axi_txdata_5;
  reg        [31:0]   auroraTxArea_axi_txdata_4;
  reg        [31:0]   auroraTxArea_axi_txdata_3;
  reg        [31:0]   auroraTxArea_axi_txdata_2;
  reg        [31:0]   auroraTxArea_axi_txdata_1;
  wire       [31:0]   auroraTxArea_axi_txdata;
  reg                 auroraTxArea_axi_last;
  reg        [31:0]   auroraTxArea_axi_txhead;
  reg        [7:0]    auroraTxArea_length;
  reg                 auroraTxArea_mem_rden;
  wire       [31:0]   auroraTxArea_mem_data;
  reg        [7:0]    auroraTxArea_mem_addrtemp;
  reg        [31:0]   auroraTxArea_crc_data;
  reg        [7:0]    auroraTxArea_data_cnt;
  reg        `AuroraState_binary_sequential_type auroraTxArea_stateMachine_state;
  wire                when_Gtx_Tx_l66;
  wire                when_Gtx_Tx_l68;
  wire                axiw_fire;
  wire                when_Gtx_Tx_l81;
  wire                axiw_fire_1;
  wire                axiw_fire_2;
  wire                axiw_fire_3;
  wire                when_Gtx_Tx_l104;
  wire                axiw_fire_4;
  wire                axiw_fire_5;
  wire                when_Gtx_Tx_l124;
  wire                when_Gtx_Tx_l126;
  wire                when_Gtx_Tx_l128;
  wire                when_Gtx_Tx_l130;
  wire                when_Gtx_Tx_l132;
  wire                when_Gtx_Tx_l134;
  wire                axiw_fire_6;
  wire                when_Gtx_Tx_l140;
  wire                when_Gtx_Tx_l146;
  wire                axiw_fire_7;
  wire                when_Gtx_Tx_l148;
  wire                axiw_fire_8;
  wire       [7:0]    auroraTxArea_mem_addr;
  `ifndef SYNTHESIS
  reg [63:0] auroraTxArea_stateMachine_state_string;
  `endif


  assign _zz_when_Gtx_Tx_l104 = (auroraTxArea_length - 8'h01);
  assign _zz_auroraTxArea_mem_addr = (auroraTxArea_mem_addrtemp - 8'h01);
  Crc32 crc32_2 (
    .crc_i     (auroraTxArea_crc_data      ), //i
    .data_i    (auroraTxArea_axi_txdata_7  ), //i
    .crc_o     (crc32_2_crc_o              )  //o
  );
  `ifndef SYNTHESIS
  always @(*) begin
    case(auroraTxArea_stateMachine_state)
      `AuroraState_binary_sequential_IDLE : auroraTxArea_stateMachine_state_string = "IDLE    ";
      `AuroraState_binary_sequential_WAIT_1 : auroraTxArea_stateMachine_state_string = "WAIT_1  ";
      `AuroraState_binary_sequential_START : auroraTxArea_stateMachine_state_string = "START   ";
      `AuroraState_binary_sequential_DEVICEID : auroraTxArea_stateMachine_state_string = "DEVICEID";
      `AuroraState_binary_sequential_LENGTH : auroraTxArea_stateMachine_state_string = "LENGTH  ";
      `AuroraState_binary_sequential_DATA : auroraTxArea_stateMachine_state_string = "DATA    ";
      `AuroraState_binary_sequential_CRC : auroraTxArea_stateMachine_state_string = "CRC     ";
      `AuroraState_binary_sequential_STOP : auroraTxArea_stateMachine_state_string = "STOP    ";
      default : auroraTxArea_stateMachine_state_string = "????????";
    endcase
  end
  `endif

  always @(*) begin
    auroraTxArea_axi_last_2 = auroraTxArea_axi_last_1;
    if(!when_Gtx_Tx_l140) begin
      auroraTxArea_axi_last_2 = 1'b0;
    end
  end

  always @(*) begin
    auroraTxArea_axi_last_1 = auroraTxArea_axi_last;
    if(when_Gtx_Tx_l140) begin
      auroraTxArea_axi_last_1 = 1'b1;
    end
  end

  always @(*) begin
    auroraTxArea_axi_txdata_7 = auroraTxArea_axi_txdata_6;
    if(!when_Gtx_Tx_l124) begin
      if(!when_Gtx_Tx_l126) begin
        if(!when_Gtx_Tx_l128) begin
          if(!when_Gtx_Tx_l130) begin
            if(!when_Gtx_Tx_l132) begin
              if(!when_Gtx_Tx_l134) begin
                auroraTxArea_axi_txdata_7 = 32'h0;
              end
            end
          end
        end
      end
    end
  end

  always @(*) begin
    auroraTxArea_axi_txdata_6 = auroraTxArea_axi_txdata_5;
    if(!when_Gtx_Tx_l124) begin
      if(!when_Gtx_Tx_l126) begin
        if(!when_Gtx_Tx_l128) begin
          if(!when_Gtx_Tx_l130) begin
            if(!when_Gtx_Tx_l132) begin
              if(when_Gtx_Tx_l134) begin
                auroraTxArea_axi_txdata_6 = 32'h0000ffbd;
              end
            end
          end
        end
      end
    end
  end

  always @(*) begin
    auroraTxArea_axi_txdata_5 = auroraTxArea_axi_txdata_4;
    if(!when_Gtx_Tx_l124) begin
      if(!when_Gtx_Tx_l126) begin
        if(!when_Gtx_Tx_l128) begin
          if(!when_Gtx_Tx_l130) begin
            if(when_Gtx_Tx_l132) begin
              auroraTxArea_axi_txdata_5 = auroraTxArea_crc_data;
            end
          end
        end
      end
    end
  end

  always @(*) begin
    auroraTxArea_axi_txdata_4 = auroraTxArea_axi_txdata_3;
    if(!when_Gtx_Tx_l124) begin
      if(!when_Gtx_Tx_l126) begin
        if(!when_Gtx_Tx_l128) begin
          if(when_Gtx_Tx_l130) begin
            auroraTxArea_axi_txdata_4 = auroraTxArea_mem_data;
          end
        end
      end
    end
  end

  always @(*) begin
    auroraTxArea_axi_txdata_3 = auroraTxArea_axi_txdata_2;
    if(!when_Gtx_Tx_l124) begin
      if(!when_Gtx_Tx_l126) begin
        if(when_Gtx_Tx_l128) begin
          auroraTxArea_axi_txdata_3 = tx_head;
        end
      end
    end
  end

  always @(*) begin
    auroraTxArea_axi_txdata_2 = auroraTxArea_axi_txdata_1;
    if(!when_Gtx_Tx_l124) begin
      if(when_Gtx_Tx_l126) begin
        auroraTxArea_axi_txdata_2 = 32'h00000001;
      end
    end
  end

  always @(*) begin
    auroraTxArea_axi_txdata_1 = auroraTxArea_axi_txdata;
    if(when_Gtx_Tx_l124) begin
      auroraTxArea_axi_txdata_1 = 32'h0000ffbc;
    end
  end

  assign auroraTxArea_axi_txdata = 32'h0;
  assign when_Gtx_Tx_l66 = (tx_start && axiw_ready);
  assign when_Gtx_Tx_l68 = (tx_start && (! axiw_ready));
  assign axiw_fire = (axiw_valid && axiw_ready);
  assign when_Gtx_Tx_l81 = (auroraTxArea_axi_txhead[15 : 8] == 8'h0);
  assign axiw_fire_1 = (axiw_valid && axiw_ready);
  assign axiw_fire_2 = (axiw_valid && axiw_ready);
  assign axiw_fire_3 = (axiw_valid && axiw_ready);
  assign when_Gtx_Tx_l104 = (auroraTxArea_data_cnt < _zz_when_Gtx_Tx_l104);
  assign axiw_fire_4 = (axiw_valid && axiw_ready);
  assign axiw_fire_5 = (axiw_valid && axiw_ready);
  assign when_Gtx_Tx_l124 = (auroraTxArea_stateMachine_state == `AuroraState_binary_sequential_START);
  assign when_Gtx_Tx_l126 = (auroraTxArea_stateMachine_state == `AuroraState_binary_sequential_DEVICEID);
  assign when_Gtx_Tx_l128 = (auroraTxArea_stateMachine_state == `AuroraState_binary_sequential_LENGTH);
  assign when_Gtx_Tx_l130 = (auroraTxArea_stateMachine_state == `AuroraState_binary_sequential_DATA);
  assign when_Gtx_Tx_l132 = (auroraTxArea_stateMachine_state == `AuroraState_binary_sequential_CRC);
  assign when_Gtx_Tx_l134 = (auroraTxArea_stateMachine_state == `AuroraState_binary_sequential_STOP);
  assign axiw_fire_6 = (axiw_valid && axiw_ready);
  assign when_Gtx_Tx_l140 = ((auroraTxArea_stateMachine_state == `AuroraState_binary_sequential_STOP) && axiw_fire_6);
  assign when_Gtx_Tx_l146 = (auroraTxArea_stateMachine_state == `AuroraState_binary_sequential_START);
  assign axiw_fire_7 = (axiw_valid && axiw_ready);
  assign when_Gtx_Tx_l148 = ((((auroraTxArea_stateMachine_state == `AuroraState_binary_sequential_DEVICEID) || (auroraTxArea_stateMachine_state == `AuroraState_binary_sequential_LENGTH)) || (auroraTxArea_stateMachine_state == `AuroraState_binary_sequential_DATA)) && axiw_fire_7);
  assign axiw_fire_8 = (axiw_valid && axiw_ready);
  assign auroraTxArea_mem_addr = (axiw_fire_8 ? auroraTxArea_mem_addrtemp : _zz_auroraTxArea_mem_addr);
  assign axiw_valid = (axiw_ready && (auroraTxArea_stateMachine_state != `AuroraState_binary_sequential_IDLE));
  assign axiw_payload_data = auroraTxArea_axi_txdata_7;
  assign axiw_payload_last = auroraTxArea_axi_last_2;
  assign bram_addr = auroraTxArea_mem_addr;
  assign bram_en = auroraTxArea_mem_rden;
  assign bram_we = 4'b0000;
  assign bram_wrdata = 32'h0;
  assign auroraTxArea_mem_data = bram_rddata;
  assign bram_clkout = aurora_userclk;
  assign bram_resetout = reset;
  always @(posedge aurora_userclk or posedge reset) begin
    if(reset) begin
      auroraTxArea_axi_last <= 1'b0;
      auroraTxArea_mem_rden <= 1'b0;
      auroraTxArea_mem_addrtemp <= 8'h0;
      auroraTxArea_stateMachine_state <= `AuroraState_binary_sequential_IDLE;
    end else begin
      case(auroraTxArea_stateMachine_state)
        `AuroraState_binary_sequential_IDLE : begin
          auroraTxArea_axi_last <= 1'b0;
          if(when_Gtx_Tx_l66) begin
            auroraTxArea_stateMachine_state <= `AuroraState_binary_sequential_START;
          end else begin
            if(when_Gtx_Tx_l68) begin
              auroraTxArea_stateMachine_state <= `AuroraState_binary_sequential_WAIT_1;
            end
          end
        end
        `AuroraState_binary_sequential_WAIT_1 : begin
          if(axiw_ready) begin
            auroraTxArea_stateMachine_state <= `AuroraState_binary_sequential_START;
          end
        end
        `AuroraState_binary_sequential_START : begin
          if(axiw_fire) begin
            auroraTxArea_mem_rden <= 1'b1;
            if(when_Gtx_Tx_l81) begin
              auroraTxArea_mem_addrtemp <= 8'h01;
            end else begin
              auroraTxArea_mem_addrtemp <= auroraTxArea_axi_txhead[15 : 8];
            end
            auroraTxArea_stateMachine_state <= `AuroraState_binary_sequential_DEVICEID;
          end
        end
        `AuroraState_binary_sequential_DEVICEID : begin
          if(axiw_fire_1) begin
            auroraTxArea_stateMachine_state <= `AuroraState_binary_sequential_LENGTH;
          end
        end
        `AuroraState_binary_sequential_LENGTH : begin
          if(axiw_fire_2) begin
            auroraTxArea_mem_addrtemp <= (auroraTxArea_mem_addrtemp + 8'h01);
            auroraTxArea_stateMachine_state <= `AuroraState_binary_sequential_DATA;
          end
        end
        `AuroraState_binary_sequential_DATA : begin
          if(axiw_fire_3) begin
            if(when_Gtx_Tx_l104) begin
              auroraTxArea_mem_addrtemp <= (auroraTxArea_mem_addrtemp + 8'h01);
            end else begin
              auroraTxArea_stateMachine_state <= `AuroraState_binary_sequential_CRC;
            end
          end
        end
        `AuroraState_binary_sequential_CRC : begin
          if(axiw_fire_4) begin
            auroraTxArea_stateMachine_state <= `AuroraState_binary_sequential_STOP;
          end
        end
        default : begin
          if(axiw_fire_5) begin
            auroraTxArea_stateMachine_state <= `AuroraState_binary_sequential_IDLE;
          end
        end
      endcase
    end
  end

  always @(posedge aurora_userclk) begin
    auroraTxArea_axi_txhead <= tx_head;
    case(auroraTxArea_stateMachine_state)
      `AuroraState_binary_sequential_IDLE : begin
      end
      `AuroraState_binary_sequential_WAIT_1 : begin
      end
      `AuroraState_binary_sequential_START : begin
        if(axiw_fire) begin
          auroraTxArea_length <= auroraTxArea_axi_txhead[7 : 0];
        end
      end
      `AuroraState_binary_sequential_DEVICEID : begin
      end
      `AuroraState_binary_sequential_LENGTH : begin
        if(axiw_fire_2) begin
          auroraTxArea_data_cnt <= 8'h0;
        end
      end
      `AuroraState_binary_sequential_DATA : begin
        if(axiw_fire_3) begin
          auroraTxArea_data_cnt <= (auroraTxArea_data_cnt + 8'h01);
        end
      end
      `AuroraState_binary_sequential_CRC : begin
      end
      default : begin
      end
    endcase
    if(when_Gtx_Tx_l146) begin
      auroraTxArea_crc_data <= 32'hffffffff;
    end else begin
      if(when_Gtx_Tx_l148) begin
        auroraTxArea_crc_data <= crc32_2_crc_o;
      end else begin
        auroraTxArea_crc_data <= auroraTxArea_crc_data;
      end
    end
  end


endmodule

module AuroraRxCore (
  input               aurora_userclk,
  input               reset,
  input               axir_valid,
  output              axir_ready,
  input      [31:0]   axir_payload_data,
  input               axir_payload_last,
  output              bram_en,
  output     [3:0]    bram_we,
  output     [7:0]    bram_addr,
  output     [31:0]   bram_wrdata,
  input      [31:0]   bram_rddata,
  output              bram_clkout,
  output              bram_resetout
);
  wire       [31:0]   crc32_2_crc_o;
  wire       [7:0]    _zz_when_Gtx_Rx_l66;
  wire       [7:0]    _zz_when_Gtx_Rx_l113;
  reg                 auroraRxArea_mem_wren;
  reg        [7:0]    auroraRxArea_mem_addr;
  reg        [31:0]   auroraRxArea_mem_data;
  reg        [3:0]    auroraRxArea_mem_wrwe;
  reg        [7:0]    auroraRxArea_length;
  reg        [7:0]    auroraRxArea_data_cnt;
  reg        [31:0]   auroraRxArea_crc_data;
  reg                 auroraRxArea_crc_status;
  reg        `AuroraState_binary_sequential_type auroraRxArea_stateMachine_state;
  wire                axir_fire;
  wire                when_Gtx_Rx_l44;
  wire                axir_fire_1;
  wire                when_Gtx_Rx_l50;
  wire                axir_fire_2;
  wire                axir_fire_3;
  wire                when_Gtx_Rx_l66;
  wire                axir_fire_4;
  wire                when_Gtx_Rx_l75;
  wire                axir_fire_5;
  wire                when_Gtx_Rx_l84;
  wire                when_Gtx_Rx_l91;
  wire                axir_fire_6;
  wire                when_Gtx_Rx_l93;
  wire                axir_fire_7;
  wire                when_Gtx_Rx_l99;
  wire                when_Gtx_Rx_l106;
  wire                axir_fire_8;
  wire                when_Gtx_Rx_l104;
  wire                axir_fire_9;
  wire                when_Gtx_Rx_l113;
  `ifndef SYNTHESIS
  reg [63:0] auroraRxArea_stateMachine_state_string;
  `endif


  assign _zz_when_Gtx_Rx_l66 = (auroraRxArea_length - 8'h01);
  assign _zz_when_Gtx_Rx_l113 = (auroraRxArea_length - 8'h01);
  Crc32 crc32_2 (
    .crc_i     (auroraRxArea_crc_data  ), //i
    .data_i    (axir_payload_data      ), //i
    .crc_o     (crc32_2_crc_o          )  //o
  );
  `ifndef SYNTHESIS
  always @(*) begin
    case(auroraRxArea_stateMachine_state)
      `AuroraState_binary_sequential_IDLE : auroraRxArea_stateMachine_state_string = "IDLE    ";
      `AuroraState_binary_sequential_WAIT_1 : auroraRxArea_stateMachine_state_string = "WAIT_1  ";
      `AuroraState_binary_sequential_START : auroraRxArea_stateMachine_state_string = "START   ";
      `AuroraState_binary_sequential_DEVICEID : auroraRxArea_stateMachine_state_string = "DEVICEID";
      `AuroraState_binary_sequential_LENGTH : auroraRxArea_stateMachine_state_string = "LENGTH  ";
      `AuroraState_binary_sequential_DATA : auroraRxArea_stateMachine_state_string = "DATA    ";
      `AuroraState_binary_sequential_CRC : auroraRxArea_stateMachine_state_string = "CRC     ";
      `AuroraState_binary_sequential_STOP : auroraRxArea_stateMachine_state_string = "STOP    ";
      default : auroraRxArea_stateMachine_state_string = "????????";
    endcase
  end
  `endif

  assign axir_ready = 1'b1;
  assign axir_fire = (axir_valid && axir_ready);
  assign when_Gtx_Rx_l44 = (axir_fire && (axir_payload_data == 32'h0000ffbc));
  assign axir_fire_1 = (axir_valid && axir_ready);
  assign when_Gtx_Rx_l50 = (axir_payload_data == 32'h00000001);
  assign axir_fire_2 = (axir_valid && axir_ready);
  assign axir_fire_3 = (axir_valid && axir_ready);
  assign when_Gtx_Rx_l66 = (auroraRxArea_data_cnt < _zz_when_Gtx_Rx_l66);
  assign axir_fire_4 = (axir_valid && axir_ready);
  assign when_Gtx_Rx_l75 = (auroraRxArea_crc_data != axir_payload_data);
  assign axir_fire_5 = (axir_valid && axir_ready);
  assign when_Gtx_Rx_l84 = (axir_fire_5 && axir_payload_last);
  assign when_Gtx_Rx_l91 = (auroraRxArea_stateMachine_state == `AuroraState_binary_sequential_IDLE);
  assign axir_fire_6 = (axir_valid && axir_ready);
  assign when_Gtx_Rx_l93 = ((((auroraRxArea_stateMachine_state == `AuroraState_binary_sequential_DEVICEID) || (auroraRxArea_stateMachine_state == `AuroraState_binary_sequential_LENGTH)) || (auroraRxArea_stateMachine_state == `AuroraState_binary_sequential_DATA)) && axir_fire_6);
  assign axir_fire_7 = (axir_valid && axir_ready);
  assign when_Gtx_Rx_l99 = ((auroraRxArea_stateMachine_state == `AuroraState_binary_sequential_DEVICEID) && axir_fire_7);
  assign when_Gtx_Rx_l106 = (axir_payload_data[15 : 8] == 8'h0);
  assign axir_fire_8 = (axir_valid && axir_ready);
  assign when_Gtx_Rx_l104 = ((auroraRxArea_stateMachine_state == `AuroraState_binary_sequential_LENGTH) && axir_fire_8);
  assign axir_fire_9 = (axir_valid && axir_ready);
  assign when_Gtx_Rx_l113 = (((auroraRxArea_stateMachine_state == `AuroraState_binary_sequential_DATA) && axir_fire_9) && (auroraRxArea_data_cnt < _zz_when_Gtx_Rx_l113));
  assign bram_en = auroraRxArea_mem_wren;
  assign bram_wrdata = axir_payload_data;
  assign bram_addr = auroraRxArea_mem_addr;
  assign bram_we = auroraRxArea_mem_wrwe;
  assign bram_clkout = aurora_userclk;
  assign bram_resetout = reset;
  always @(posedge aurora_userclk or posedge reset) begin
    if(reset) begin
      auroraRxArea_mem_wren <= 1'b0;
      auroraRxArea_mem_addr <= 8'h0;
      auroraRxArea_mem_data <= 32'h0;
      auroraRxArea_mem_wrwe <= 4'b0000;
      auroraRxArea_crc_status <= 1'b0;
      auroraRxArea_stateMachine_state <= `AuroraState_binary_sequential_IDLE;
    end else begin
      case(auroraRxArea_stateMachine_state)
        `AuroraState_binary_sequential_IDLE : begin
          if(when_Gtx_Rx_l44) begin
            auroraRxArea_stateMachine_state <= `AuroraState_binary_sequential_DEVICEID;
          end
        end
        `AuroraState_binary_sequential_DEVICEID : begin
          if(axir_fire_1) begin
            if(when_Gtx_Rx_l50) begin
              auroraRxArea_stateMachine_state <= `AuroraState_binary_sequential_LENGTH;
            end else begin
              auroraRxArea_stateMachine_state <= `AuroraState_binary_sequential_IDLE;
            end
          end
        end
        `AuroraState_binary_sequential_LENGTH : begin
          if(axir_fire_2) begin
            auroraRxArea_stateMachine_state <= `AuroraState_binary_sequential_DATA;
          end
        end
        `AuroraState_binary_sequential_DATA : begin
          if(axir_fire_3) begin
            if(!when_Gtx_Rx_l66) begin
              auroraRxArea_stateMachine_state <= `AuroraState_binary_sequential_CRC;
            end
          end
        end
        `AuroraState_binary_sequential_CRC : begin
          if(axir_fire_4) begin
            if(when_Gtx_Rx_l75) begin
              auroraRxArea_crc_status <= 1'b1;
            end else begin
              auroraRxArea_crc_status <= 1'b0;
            end
            auroraRxArea_stateMachine_state <= `AuroraState_binary_sequential_STOP;
          end
        end
        `AuroraState_binary_sequential_STOP : begin
          if(when_Gtx_Rx_l84) begin
            auroraRxArea_stateMachine_state <= `AuroraState_binary_sequential_IDLE;
          end
        end
        default : begin
        end
      endcase
      if(when_Gtx_Rx_l99) begin
        auroraRxArea_mem_wren <= 1'b1;
        auroraRxArea_mem_addr <= 8'h0;
        auroraRxArea_mem_data <= axir_payload_data;
        auroraRxArea_mem_wrwe <= 4'b1111;
      end else begin
        if(when_Gtx_Rx_l104) begin
          auroraRxArea_mem_wren <= 1'b1;
          if(when_Gtx_Rx_l106) begin
            auroraRxArea_mem_addr <= 8'h01;
          end else begin
            auroraRxArea_mem_addr <= axir_payload_data[15 : 8];
          end
          auroraRxArea_mem_data <= axir_payload_data;
          auroraRxArea_mem_wrwe <= 4'b1111;
        end else begin
          if(when_Gtx_Rx_l113) begin
            auroraRxArea_mem_wren <= 1'b1;
            auroraRxArea_mem_addr <= (auroraRxArea_mem_addr + 8'h01);
            auroraRxArea_mem_data <= axir_payload_data;
            auroraRxArea_mem_wrwe <= 4'b1111;
          end else begin
            auroraRxArea_mem_wren <= 1'b0;
            auroraRxArea_mem_wrwe <= 4'b0000;
          end
        end
      end
    end
  end

  always @(posedge aurora_userclk) begin
    case(auroraRxArea_stateMachine_state)
      `AuroraState_binary_sequential_LENGTH : begin
        if(axir_fire_2) begin
          auroraRxArea_length <= axir_payload_data[7 : 0];
          auroraRxArea_data_cnt <= 8'h0;
        end
      end
      `AuroraState_binary_sequential_DATA : begin
        if(axir_fire_3) begin
          if(when_Gtx_Rx_l66) begin
            auroraRxArea_data_cnt <= (auroraRxArea_data_cnt + 8'h01);
          end
        end
      end
      default : begin
      end
    endcase
    if(when_Gtx_Rx_l91) begin
      auroraRxArea_crc_data <= 32'hffffffff;
    end else begin
      if(when_Gtx_Rx_l93) begin
        auroraRxArea_crc_data <= crc32_2_crc_o;
      end else begin
        auroraRxArea_crc_data <= auroraRxArea_crc_data;
      end
    end
  end


endmodule

//Crc32 replaced by Crc32

module Crc32 (
  input      [31:0]   crc_i,
  input      [31:0]   data_i,
  output reg [31:0]   crc_o
);
  wire                _zz_crc_o;
  wire                _zz_crc_o_1;
  wire                _zz_crc_o_2;
  wire                _zz_crc_o_3;
  wire                _zz_crc_o_4;
  wire                _zz_crc_o_5;
  wire                _zz_crc_o_6;
  wire                _zz_crc_o_7;
  wire                _zz_crc_o_8;
  wire                _zz_crc_o_9;
  wire                _zz_crc_o_10;
  wire                _zz_crc_o_11;
  wire                _zz_crc_o_12;
  wire                _zz_crc_o_13;
  wire                _zz_crc_o_14;
  wire                _zz_crc_o_15;
  wire                _zz_crc_o_16;
  wire                _zz_crc_o_17;
  wire                _zz_crc_o_18;
  wire                _zz_crc_o_19;
  wire                _zz_crc_o_20;
  wire                _zz_crc_o_21;
  wire                _zz_crc_o_22;
  wire                _zz_crc_o_23;
  wire                _zz_crc_o_24;
  wire                _zz_crc_o_25;
  wire                _zz_crc_o_26;
  wire                _zz_crc_o_27;
  wire                _zz_crc_o_28;
  wire                _zz_crc_o_29;
  wire                _zz_crc_o_30;
  wire                _zz_crc_o_31;
  wire                _zz_crc_o_32;
  wire                _zz_crc_o_33;
  wire                _zz_crc_o_34;
  wire                _zz_crc_o_35;
  wire                _zz_crc_o_36;
  wire                _zz_crc_o_37;
  wire                _zz_crc_o_38;
  wire                _zz_crc_o_39;
  wire                _zz_crc_o_40;
  wire                _zz_crc_o_41;
  wire                _zz_crc_o_42;
  wire                _zz_crc_o_43;
  wire                _zz_crc_o_44;
  wire                _zz_crc_o_45;
  wire                _zz_crc_o_46;
  wire                _zz_crc_o_47;
  wire                _zz_crc_o_48;
  wire                _zz_crc_o_49;
  wire                _zz_crc_o_50;
  wire                _zz_crc_o_51;
  wire                _zz_crc_o_52;
  wire                _zz_crc_o_53;
  wire                _zz_crc_o_54;
  wire                _zz_crc_o_55;
  wire                _zz_crc_o_56;
  wire                _zz_crc_o_57;
  wire                _zz_crc_o_58;
  wire                _zz_crc_o_59;
  wire                _zz_crc_o_60;
  wire                _zz_crc_o_61;
  wire                _zz_crc_o_62;
  wire                _zz_crc_o_63;
  wire                _zz_crc_o_64;
  wire                _zz_crc_o_65;
  wire                _zz_crc_o_66;
  wire                _zz_crc_o_67;
  wire                _zz_crc_o_68;
  wire                _zz_crc_o_69;

  assign _zz_crc_o = (((((((((data_i[31] ^ data_i[30]) ^ data_i[29]) ^ data_i[28]) ^ data_i[26]) ^ data_i[25]) ^ data_i[24]) ^ data_i[16]) ^ data_i[12]) ^ data_i[10]);
  assign _zz_crc_o_1 = data_i[9];
  assign _zz_crc_o_2 = (((((((((data_i[28] ^ data_i[27]) ^ data_i[24]) ^ data_i[17]) ^ data_i[16]) ^ data_i[13]) ^ data_i[12]) ^ data_i[11]) ^ data_i[9]) ^ data_i[7]);
  assign _zz_crc_o_3 = data_i[6];
  assign _zz_crc_o_4 = (((((((((((((((data_i[31] ^ data_i[30]) ^ data_i[26]) ^ data_i[24]) ^ data_i[18]) ^ data_i[17]) ^ data_i[16]) ^ data_i[14]) ^ data_i[13]) ^ data_i[9]) ^ data_i[8]) ^ data_i[7]) ^ data_i[6]) ^ data_i[2]) ^ data_i[1]) ^ data_i[0]);
  assign _zz_crc_o_5 = crc_i[0];
  assign _zz_crc_o_6 = (((((((((((((data_i[31] ^ data_i[27]) ^ data_i[25]) ^ data_i[19]) ^ data_i[18]) ^ data_i[17]) ^ data_i[15]) ^ data_i[14]) ^ data_i[10]) ^ data_i[9]) ^ data_i[8]) ^ data_i[7]) ^ data_i[3]) ^ data_i[2]);
  assign _zz_crc_o_7 = data_i[1];
  assign _zz_crc_o_8 = ((((((((((((((((_zz_crc_o_9 ^ _zz_crc_o_10) ^ data_i[25]) ^ data_i[24]) ^ data_i[20]) ^ data_i[19]) ^ data_i[18]) ^ data_i[15]) ^ data_i[12]) ^ data_i[11]) ^ data_i[8]) ^ data_i[6]) ^ data_i[4]) ^ data_i[3]) ^ data_i[2]) ^ data_i[0]) ^ crc_i[0]);
  assign _zz_crc_o_11 = crc_i[2];
  assign _zz_crc_o_9 = (data_i[31] ^ data_i[30]);
  assign _zz_crc_o_10 = data_i[29];
  assign _zz_crc_o_12 = (((((((((((((data_i[29] ^ data_i[28]) ^ data_i[24]) ^ data_i[21]) ^ data_i[20]) ^ data_i[19]) ^ data_i[13]) ^ data_i[10]) ^ data_i[7]) ^ data_i[6]) ^ data_i[5]) ^ data_i[4]) ^ data_i[3]) ^ data_i[1]);
  assign _zz_crc_o_13 = data_i[0];
  assign _zz_crc_o_14 = (((((((((((((data_i[30] ^ data_i[29]) ^ data_i[25]) ^ data_i[22]) ^ data_i[21]) ^ data_i[20]) ^ data_i[14]) ^ data_i[11]) ^ data_i[8]) ^ data_i[7]) ^ data_i[6]) ^ data_i[5]) ^ data_i[4]) ^ data_i[2]);
  assign _zz_crc_o_15 = data_i[1];
  assign _zz_crc_o_16 = (((((((((((((((data_i[29] ^ data_i[28]) ^ data_i[25]) ^ data_i[24]) ^ data_i[23]) ^ data_i[22]) ^ data_i[21]) ^ data_i[16]) ^ data_i[15]) ^ data_i[10]) ^ data_i[8]) ^ data_i[7]) ^ data_i[5]) ^ data_i[3]) ^ data_i[2]) ^ data_i[0]);
  assign _zz_crc_o_17 = crc_i[0];
  assign _zz_crc_o_18 = (((((((((data_i[31] ^ data_i[28]) ^ data_i[23]) ^ data_i[22]) ^ data_i[17]) ^ data_i[12]) ^ data_i[11]) ^ data_i[10]) ^ data_i[8]) ^ data_i[4]);
  assign _zz_crc_o_19 = data_i[3];
  assign _zz_crc_o_20 = (((((((data_i[29] ^ data_i[24]) ^ data_i[23]) ^ data_i[18]) ^ data_i[13]) ^ data_i[12]) ^ data_i[11]) ^ data_i[9]);
  assign _zz_crc_o_21 = data_i[5];
  assign _zz_crc_o_22 = (((((((((data_i[31] ^ data_i[29]) ^ data_i[28]) ^ data_i[26]) ^ data_i[19]) ^ data_i[16]) ^ data_i[14]) ^ data_i[13]) ^ data_i[9]) ^ data_i[5]);
  assign _zz_crc_o_23 = data_i[3];
  assign _zz_crc_o_24 = ((((((((((((((((_zz_crc_o_25 ^ _zz_crc_o_26) ^ data_i[26]) ^ data_i[25]) ^ data_i[24]) ^ data_i[20]) ^ data_i[17]) ^ data_i[16]) ^ data_i[15]) ^ data_i[14]) ^ data_i[12]) ^ data_i[9]) ^ data_i[4]) ^ data_i[3]) ^ data_i[1]) ^ data_i[0]) ^ crc_i[0]);
  assign _zz_crc_o_27 = crc_i[1];
  assign _zz_crc_o_25 = (data_i[31] ^ data_i[28]);
  assign _zz_crc_o_26 = data_i[27];
  assign _zz_crc_o_28 = ((((((((((((((((_zz_crc_o_29 ^ _zz_crc_o_30) ^ data_i[24]) ^ data_i[21]) ^ data_i[18]) ^ data_i[17]) ^ data_i[15]) ^ data_i[13]) ^ data_i[12]) ^ data_i[9]) ^ data_i[6]) ^ data_i[5]) ^ data_i[4]) ^ data_i[2]) ^ data_i[1]) ^ data_i[0]) ^ crc_i[0]);
  assign _zz_crc_o_31 = crc_i[1];
  assign _zz_crc_o_29 = (data_i[31] ^ data_i[30]);
  assign _zz_crc_o_30 = data_i[27];
  assign _zz_crc_o_32 = (((((((((((((((data_i[31] ^ data_i[28]) ^ data_i[25]) ^ data_i[22]) ^ data_i[19]) ^ data_i[18]) ^ data_i[16]) ^ data_i[14]) ^ data_i[13]) ^ data_i[10]) ^ data_i[7]) ^ data_i[6]) ^ data_i[5]) ^ data_i[3]) ^ data_i[2]) ^ data_i[1]);
  assign _zz_crc_o_33 = crc_i[1];
  assign _zz_crc_o_34 = (((((((((((((data_i[29] ^ data_i[26]) ^ data_i[23]) ^ data_i[20]) ^ data_i[19]) ^ data_i[17]) ^ data_i[15]) ^ data_i[14]) ^ data_i[11]) ^ data_i[8]) ^ data_i[7]) ^ data_i[6]) ^ data_i[4]) ^ data_i[3]);
  assign _zz_crc_o_35 = data_i[2];
  assign _zz_crc_o_36 = (((((((((((((data_i[30] ^ data_i[27]) ^ data_i[24]) ^ data_i[21]) ^ data_i[20]) ^ data_i[18]) ^ data_i[16]) ^ data_i[15]) ^ data_i[12]) ^ data_i[9]) ^ data_i[8]) ^ data_i[7]) ^ data_i[5]) ^ data_i[4]);
  assign _zz_crc_o_37 = data_i[3];
  assign _zz_crc_o_38 = (((((((((((data_i[30] ^ data_i[29]) ^ data_i[26]) ^ data_i[24]) ^ data_i[22]) ^ data_i[21]) ^ data_i[19]) ^ data_i[17]) ^ data_i[13]) ^ data_i[12]) ^ data_i[8]) ^ data_i[5]);
  assign _zz_crc_o_39 = data_i[4];
  assign _zz_crc_o_40 = (((((((((((data_i[31] ^ data_i[30]) ^ data_i[27]) ^ data_i[25]) ^ data_i[23]) ^ data_i[22]) ^ data_i[20]) ^ data_i[18]) ^ data_i[14]) ^ data_i[13]) ^ data_i[9]) ^ data_i[6]);
  assign _zz_crc_o_41 = data_i[5];
  assign _zz_crc_o_42 = (((((((((data_i[31] ^ data_i[28]) ^ data_i[26]) ^ data_i[24]) ^ data_i[23]) ^ data_i[21]) ^ data_i[19]) ^ data_i[15]) ^ data_i[14]) ^ data_i[10]);
  assign _zz_crc_o_43 = data_i[7];
  assign _zz_crc_o_44 = (((((((data_i[29] ^ data_i[27]) ^ data_i[25]) ^ data_i[24]) ^ data_i[22]) ^ data_i[20]) ^ data_i[16]) ^ data_i[15]);
  assign _zz_crc_o_45 = data_i[11];
  assign _zz_crc_o_46 = (((((((data_i[30] ^ data_i[28]) ^ data_i[26]) ^ data_i[25]) ^ data_i[23]) ^ data_i[21]) ^ data_i[17]) ^ data_i[16]);
  assign _zz_crc_o_47 = data_i[12];
  assign _zz_crc_o_48 = (((((((data_i[31] ^ data_i[29]) ^ data_i[27]) ^ data_i[26]) ^ data_i[24]) ^ data_i[22]) ^ data_i[18]) ^ data_i[17]);
  assign _zz_crc_o_49 = data_i[13];
  assign _zz_crc_o_50 = (((((((((((data_i[31] ^ data_i[29]) ^ data_i[27]) ^ data_i[26]) ^ data_i[24]) ^ data_i[23]) ^ data_i[19]) ^ data_i[18]) ^ data_i[16]) ^ data_i[14]) ^ data_i[12]) ^ data_i[11]);
  assign _zz_crc_o_51 = data_i[9];
  assign _zz_crc_o_52 = (((((((((((data_i[31] ^ data_i[29]) ^ data_i[27]) ^ data_i[26]) ^ data_i[20]) ^ data_i[19]) ^ data_i[17]) ^ data_i[16]) ^ data_i[15]) ^ data_i[13]) ^ data_i[9]) ^ data_i[6]);
  assign _zz_crc_o_53 = data_i[1];
  assign _zz_crc_o_54 = (((((((((data_i[30] ^ data_i[28]) ^ data_i[27]) ^ data_i[21]) ^ data_i[20]) ^ data_i[18]) ^ data_i[17]) ^ data_i[16]) ^ data_i[14]) ^ data_i[10]);
  assign _zz_crc_o_55 = data_i[7];
  assign _zz_crc_o_56 = (((((((((data_i[31] ^ data_i[29]) ^ data_i[28]) ^ data_i[22]) ^ data_i[21]) ^ data_i[19]) ^ data_i[18]) ^ data_i[17]) ^ data_i[15]) ^ data_i[11]);
  assign _zz_crc_o_57 = data_i[8];
  assign _zz_crc_o_58 = (((((((((((((data_i[31] ^ data_i[28]) ^ data_i[26]) ^ data_i[25]) ^ data_i[24]) ^ data_i[23]) ^ data_i[22]) ^ data_i[20]) ^ data_i[19]) ^ data_i[18]) ^ data_i[10]) ^ data_i[6]) ^ data_i[4]) ^ data_i[3]);
  assign _zz_crc_o_59 = data_i[0];
  assign _zz_crc_o_60 = (((((((((((data_i[29] ^ data_i[27]) ^ data_i[26]) ^ data_i[25]) ^ data_i[24]) ^ data_i[23]) ^ data_i[21]) ^ data_i[20]) ^ data_i[19]) ^ data_i[11]) ^ data_i[7]) ^ data_i[5]);
  assign _zz_crc_o_61 = data_i[4];
  assign _zz_crc_o_62 = (((((((((((data_i[30] ^ data_i[28]) ^ data_i[27]) ^ data_i[26]) ^ data_i[25]) ^ data_i[24]) ^ data_i[22]) ^ data_i[21]) ^ data_i[20]) ^ data_i[12]) ^ data_i[8]) ^ data_i[6]);
  assign _zz_crc_o_63 = data_i[5];
  assign _zz_crc_o_64 = (((((((((((data_i[31] ^ data_i[29]) ^ data_i[28]) ^ data_i[27]) ^ data_i[26]) ^ data_i[25]) ^ data_i[23]) ^ data_i[22]) ^ data_i[21]) ^ data_i[13]) ^ data_i[9]) ^ data_i[7]);
  assign _zz_crc_o_65 = data_i[6];
  assign _zz_crc_o_66 = (((((((((data_i[30] ^ data_i[29]) ^ data_i[28]) ^ data_i[27]) ^ data_i[26]) ^ data_i[24]) ^ data_i[23]) ^ data_i[22]) ^ data_i[14]) ^ data_i[10]);
  assign _zz_crc_o_67 = data_i[8];
  assign _zz_crc_o_68 = (((((((((data_i[31] ^ data_i[30]) ^ data_i[29]) ^ data_i[28]) ^ data_i[27]) ^ data_i[25]) ^ data_i[24]) ^ data_i[23]) ^ data_i[15]) ^ data_i[11]);
  assign _zz_crc_o_69 = data_i[9];
  always @(*) begin
    crc_o[0] = ((((((((((((((((_zz_crc_o ^ _zz_crc_o_1) ^ data_i[6]) ^ data_i[0]) ^ crc_i[0]) ^ crc_i[6]) ^ crc_i[9]) ^ crc_i[10]) ^ crc_i[12]) ^ crc_i[16]) ^ crc_i[24]) ^ crc_i[25]) ^ crc_i[26]) ^ crc_i[28]) ^ crc_i[29]) ^ crc_i[30]) ^ crc_i[31]);
    crc_o[1] = ((((((((((((((((_zz_crc_o_2 ^ _zz_crc_o_3) ^ data_i[1]) ^ data_i[0]) ^ crc_i[0]) ^ crc_i[1]) ^ crc_i[6]) ^ crc_i[7]) ^ crc_i[9]) ^ crc_i[11]) ^ crc_i[12]) ^ crc_i[13]) ^ crc_i[16]) ^ crc_i[17]) ^ crc_i[24]) ^ crc_i[27]) ^ crc_i[28]);
    crc_o[2] = ((((((((((((((((_zz_crc_o_4 ^ _zz_crc_o_5) ^ crc_i[1]) ^ crc_i[2]) ^ crc_i[6]) ^ crc_i[7]) ^ crc_i[8]) ^ crc_i[9]) ^ crc_i[13]) ^ crc_i[14]) ^ crc_i[16]) ^ crc_i[17]) ^ crc_i[18]) ^ crc_i[24]) ^ crc_i[26]) ^ crc_i[30]) ^ crc_i[31]);
    crc_o[3] = ((((((((((((((((_zz_crc_o_6 ^ _zz_crc_o_7) ^ crc_i[1]) ^ crc_i[2]) ^ crc_i[3]) ^ crc_i[7]) ^ crc_i[8]) ^ crc_i[9]) ^ crc_i[10]) ^ crc_i[14]) ^ crc_i[15]) ^ crc_i[17]) ^ crc_i[18]) ^ crc_i[19]) ^ crc_i[25]) ^ crc_i[27]) ^ crc_i[31]);
    crc_o[4] = ((((((((((((((((_zz_crc_o_8 ^ _zz_crc_o_11) ^ crc_i[3]) ^ crc_i[4]) ^ crc_i[6]) ^ crc_i[8]) ^ crc_i[11]) ^ crc_i[12]) ^ crc_i[15]) ^ crc_i[18]) ^ crc_i[19]) ^ crc_i[20]) ^ crc_i[24]) ^ crc_i[25]) ^ crc_i[29]) ^ crc_i[30]) ^ crc_i[31]);
    crc_o[5] = ((((((((((((((((_zz_crc_o_12 ^ _zz_crc_o_13) ^ crc_i[0]) ^ crc_i[1]) ^ crc_i[3]) ^ crc_i[4]) ^ crc_i[5]) ^ crc_i[6]) ^ crc_i[7]) ^ crc_i[10]) ^ crc_i[13]) ^ crc_i[19]) ^ crc_i[20]) ^ crc_i[21]) ^ crc_i[24]) ^ crc_i[28]) ^ crc_i[29]);
    crc_o[6] = ((((((((((((((((_zz_crc_o_14 ^ _zz_crc_o_15) ^ crc_i[1]) ^ crc_i[2]) ^ crc_i[4]) ^ crc_i[5]) ^ crc_i[6]) ^ crc_i[7]) ^ crc_i[8]) ^ crc_i[11]) ^ crc_i[14]) ^ crc_i[20]) ^ crc_i[21]) ^ crc_i[22]) ^ crc_i[25]) ^ crc_i[29]) ^ crc_i[30]);
    crc_o[7] = ((((((((((((((((_zz_crc_o_16 ^ _zz_crc_o_17) ^ crc_i[2]) ^ crc_i[3]) ^ crc_i[5]) ^ crc_i[7]) ^ crc_i[8]) ^ crc_i[10]) ^ crc_i[15]) ^ crc_i[16]) ^ crc_i[21]) ^ crc_i[22]) ^ crc_i[23]) ^ crc_i[24]) ^ crc_i[25]) ^ crc_i[28]) ^ crc_i[29]);
    crc_o[8] = ((((((((((((((((_zz_crc_o_18 ^ _zz_crc_o_19) ^ data_i[1]) ^ data_i[0]) ^ crc_i[0]) ^ crc_i[1]) ^ crc_i[3]) ^ crc_i[4]) ^ crc_i[8]) ^ crc_i[10]) ^ crc_i[11]) ^ crc_i[12]) ^ crc_i[17]) ^ crc_i[22]) ^ crc_i[23]) ^ crc_i[28]) ^ crc_i[31]);
    crc_o[9] = ((((((((((((((((_zz_crc_o_20 ^ _zz_crc_o_21) ^ data_i[4]) ^ data_i[2]) ^ data_i[1]) ^ crc_i[1]) ^ crc_i[2]) ^ crc_i[4]) ^ crc_i[5]) ^ crc_i[9]) ^ crc_i[11]) ^ crc_i[12]) ^ crc_i[13]) ^ crc_i[18]) ^ crc_i[23]) ^ crc_i[24]) ^ crc_i[29]);
    crc_o[10] = ((((((((((((((((_zz_crc_o_22 ^ _zz_crc_o_23) ^ data_i[2]) ^ data_i[0]) ^ crc_i[0]) ^ crc_i[2]) ^ crc_i[3]) ^ crc_i[5]) ^ crc_i[9]) ^ crc_i[13]) ^ crc_i[14]) ^ crc_i[16]) ^ crc_i[19]) ^ crc_i[26]) ^ crc_i[28]) ^ crc_i[29]) ^ crc_i[31]);
    crc_o[11] = ((((((((((((((((_zz_crc_o_24 ^ _zz_crc_o_27) ^ crc_i[3]) ^ crc_i[4]) ^ crc_i[9]) ^ crc_i[12]) ^ crc_i[14]) ^ crc_i[15]) ^ crc_i[16]) ^ crc_i[17]) ^ crc_i[20]) ^ crc_i[24]) ^ crc_i[25]) ^ crc_i[26]) ^ crc_i[27]) ^ crc_i[28]) ^ crc_i[31]);
    crc_o[12] = ((((((((((((((((_zz_crc_o_28 ^ _zz_crc_o_31) ^ crc_i[2]) ^ crc_i[4]) ^ crc_i[5]) ^ crc_i[6]) ^ crc_i[9]) ^ crc_i[12]) ^ crc_i[13]) ^ crc_i[15]) ^ crc_i[17]) ^ crc_i[18]) ^ crc_i[21]) ^ crc_i[24]) ^ crc_i[27]) ^ crc_i[30]) ^ crc_i[31]);
    crc_o[13] = ((((((((((((((((_zz_crc_o_32 ^ _zz_crc_o_33) ^ crc_i[2]) ^ crc_i[3]) ^ crc_i[5]) ^ crc_i[6]) ^ crc_i[7]) ^ crc_i[10]) ^ crc_i[13]) ^ crc_i[14]) ^ crc_i[16]) ^ crc_i[18]) ^ crc_i[19]) ^ crc_i[22]) ^ crc_i[25]) ^ crc_i[28]) ^ crc_i[31]);
    crc_o[14] = ((((((((((((((((_zz_crc_o_34 ^ _zz_crc_o_35) ^ crc_i[2]) ^ crc_i[3]) ^ crc_i[4]) ^ crc_i[6]) ^ crc_i[7]) ^ crc_i[8]) ^ crc_i[11]) ^ crc_i[14]) ^ crc_i[15]) ^ crc_i[17]) ^ crc_i[19]) ^ crc_i[20]) ^ crc_i[23]) ^ crc_i[26]) ^ crc_i[29]);
    crc_o[15] = ((((((((((((((((_zz_crc_o_36 ^ _zz_crc_o_37) ^ crc_i[3]) ^ crc_i[4]) ^ crc_i[5]) ^ crc_i[7]) ^ crc_i[8]) ^ crc_i[9]) ^ crc_i[12]) ^ crc_i[15]) ^ crc_i[16]) ^ crc_i[18]) ^ crc_i[20]) ^ crc_i[21]) ^ crc_i[24]) ^ crc_i[27]) ^ crc_i[30]);
    crc_o[16] = ((((((((((((((((_zz_crc_o_38 ^ _zz_crc_o_39) ^ data_i[0]) ^ crc_i[0]) ^ crc_i[4]) ^ crc_i[5]) ^ crc_i[8]) ^ crc_i[12]) ^ crc_i[13]) ^ crc_i[17]) ^ crc_i[19]) ^ crc_i[21]) ^ crc_i[22]) ^ crc_i[24]) ^ crc_i[26]) ^ crc_i[29]) ^ crc_i[30]);
    crc_o[17] = ((((((((((((((((_zz_crc_o_40 ^ _zz_crc_o_41) ^ data_i[1]) ^ crc_i[1]) ^ crc_i[5]) ^ crc_i[6]) ^ crc_i[9]) ^ crc_i[13]) ^ crc_i[14]) ^ crc_i[18]) ^ crc_i[20]) ^ crc_i[22]) ^ crc_i[23]) ^ crc_i[25]) ^ crc_i[27]) ^ crc_i[30]) ^ crc_i[31]);
    crc_o[18] = ((((((((((((((((_zz_crc_o_42 ^ _zz_crc_o_43) ^ data_i[6]) ^ data_i[2]) ^ crc_i[2]) ^ crc_i[6]) ^ crc_i[7]) ^ crc_i[10]) ^ crc_i[14]) ^ crc_i[15]) ^ crc_i[19]) ^ crc_i[21]) ^ crc_i[23]) ^ crc_i[24]) ^ crc_i[26]) ^ crc_i[28]) ^ crc_i[31]);
    crc_o[19] = ((((((((((((((((_zz_crc_o_44 ^ _zz_crc_o_45) ^ data_i[8]) ^ data_i[7]) ^ data_i[3]) ^ crc_i[3]) ^ crc_i[7]) ^ crc_i[8]) ^ crc_i[11]) ^ crc_i[15]) ^ crc_i[16]) ^ crc_i[20]) ^ crc_i[22]) ^ crc_i[24]) ^ crc_i[25]) ^ crc_i[27]) ^ crc_i[29]);
    crc_o[20] = ((((((((((((((((_zz_crc_o_46 ^ _zz_crc_o_47) ^ data_i[9]) ^ data_i[8]) ^ data_i[4]) ^ crc_i[4]) ^ crc_i[8]) ^ crc_i[9]) ^ crc_i[12]) ^ crc_i[16]) ^ crc_i[17]) ^ crc_i[21]) ^ crc_i[23]) ^ crc_i[25]) ^ crc_i[26]) ^ crc_i[28]) ^ crc_i[30]);
    crc_o[21] = ((((((((((((((((_zz_crc_o_48 ^ _zz_crc_o_49) ^ data_i[10]) ^ data_i[9]) ^ data_i[5]) ^ crc_i[5]) ^ crc_i[9]) ^ crc_i[10]) ^ crc_i[13]) ^ crc_i[17]) ^ crc_i[18]) ^ crc_i[22]) ^ crc_i[24]) ^ crc_i[26]) ^ crc_i[27]) ^ crc_i[29]) ^ crc_i[31]);
    crc_o[22] = ((((((((((((((((_zz_crc_o_50 ^ _zz_crc_o_51) ^ data_i[0]) ^ crc_i[0]) ^ crc_i[9]) ^ crc_i[11]) ^ crc_i[12]) ^ crc_i[14]) ^ crc_i[16]) ^ crc_i[18]) ^ crc_i[19]) ^ crc_i[23]) ^ crc_i[24]) ^ crc_i[26]) ^ crc_i[27]) ^ crc_i[29]) ^ crc_i[31]);
    crc_o[23] = ((((((((((((((((_zz_crc_o_52 ^ _zz_crc_o_53) ^ data_i[0]) ^ crc_i[0]) ^ crc_i[1]) ^ crc_i[6]) ^ crc_i[9]) ^ crc_i[13]) ^ crc_i[15]) ^ crc_i[16]) ^ crc_i[17]) ^ crc_i[19]) ^ crc_i[20]) ^ crc_i[26]) ^ crc_i[27]) ^ crc_i[29]) ^ crc_i[31]);
    crc_o[24] = ((((((((((((((((_zz_crc_o_54 ^ _zz_crc_o_55) ^ data_i[2]) ^ data_i[1]) ^ crc_i[1]) ^ crc_i[2]) ^ crc_i[7]) ^ crc_i[10]) ^ crc_i[14]) ^ crc_i[16]) ^ crc_i[17]) ^ crc_i[18]) ^ crc_i[20]) ^ crc_i[21]) ^ crc_i[27]) ^ crc_i[28]) ^ crc_i[30]);
    crc_o[25] = ((((((((((((((((_zz_crc_o_56 ^ _zz_crc_o_57) ^ data_i[3]) ^ data_i[2]) ^ crc_i[2]) ^ crc_i[3]) ^ crc_i[8]) ^ crc_i[11]) ^ crc_i[15]) ^ crc_i[17]) ^ crc_i[18]) ^ crc_i[19]) ^ crc_i[21]) ^ crc_i[22]) ^ crc_i[28]) ^ crc_i[29]) ^ crc_i[31]);
    crc_o[26] = ((((((((((((((((_zz_crc_o_58 ^ _zz_crc_o_59) ^ crc_i[0]) ^ crc_i[3]) ^ crc_i[4]) ^ crc_i[6]) ^ crc_i[10]) ^ crc_i[18]) ^ crc_i[19]) ^ crc_i[20]) ^ crc_i[22]) ^ crc_i[23]) ^ crc_i[24]) ^ crc_i[25]) ^ crc_i[26]) ^ crc_i[28]) ^ crc_i[31]);
    crc_o[27] = ((((((((((((((((_zz_crc_o_60 ^ _zz_crc_o_61) ^ data_i[1]) ^ crc_i[1]) ^ crc_i[4]) ^ crc_i[5]) ^ crc_i[7]) ^ crc_i[11]) ^ crc_i[19]) ^ crc_i[20]) ^ crc_i[21]) ^ crc_i[23]) ^ crc_i[24]) ^ crc_i[25]) ^ crc_i[26]) ^ crc_i[27]) ^ crc_i[29]);
    crc_o[28] = ((((((((((((((((_zz_crc_o_62 ^ _zz_crc_o_63) ^ data_i[2]) ^ crc_i[2]) ^ crc_i[5]) ^ crc_i[6]) ^ crc_i[8]) ^ crc_i[12]) ^ crc_i[20]) ^ crc_i[21]) ^ crc_i[22]) ^ crc_i[24]) ^ crc_i[25]) ^ crc_i[26]) ^ crc_i[27]) ^ crc_i[28]) ^ crc_i[30]);
    crc_o[29] = ((((((((((((((((_zz_crc_o_64 ^ _zz_crc_o_65) ^ data_i[3]) ^ crc_i[3]) ^ crc_i[6]) ^ crc_i[7]) ^ crc_i[9]) ^ crc_i[13]) ^ crc_i[21]) ^ crc_i[22]) ^ crc_i[23]) ^ crc_i[25]) ^ crc_i[26]) ^ crc_i[27]) ^ crc_i[28]) ^ crc_i[29]) ^ crc_i[31]);
    crc_o[30] = ((((((((((((((((_zz_crc_o_66 ^ _zz_crc_o_67) ^ data_i[7]) ^ data_i[4]) ^ crc_i[4]) ^ crc_i[7]) ^ crc_i[8]) ^ crc_i[10]) ^ crc_i[14]) ^ crc_i[22]) ^ crc_i[23]) ^ crc_i[24]) ^ crc_i[26]) ^ crc_i[27]) ^ crc_i[28]) ^ crc_i[29]) ^ crc_i[30]);
    crc_o[31] = ((((((((((((((((_zz_crc_o_68 ^ _zz_crc_o_69) ^ data_i[8]) ^ data_i[5]) ^ crc_i[5]) ^ crc_i[8]) ^ crc_i[9]) ^ crc_i[11]) ^ crc_i[15]) ^ crc_i[23]) ^ crc_i[24]) ^ crc_i[25]) ^ crc_i[27]) ^ crc_i[28]) ^ crc_i[29]) ^ crc_i[30]) ^ crc_i[31]);
  end


endmodule
