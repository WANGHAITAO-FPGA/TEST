// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : Gtx_Top
// Git hash  : a0a0837bb09980fcbcb4af011cef64006c57ba2c



module Gtx_Top (
  output              axiw_valid,
  input               axiw_ready,
  output     [31:0]   axiw_payload_data,
  output              axiw_payload_last,
  input      [31:0]   tx_head,
  input               tx_packet_req,
  input               tx_packet_trigger,
  input               clk,
  input               reset,
  input               clk_1,
  input               reset_1
);
  wire       [31:0]   gtxtx_tx_packet_data;
  reg        [31:0]   _zz_mem_port0;
  wire       [31:0]   gtxtx_s_axi_tx_tdata;
  wire       [3:0]    gtxtx_s_axi_tx_tkeep;
  wire                gtxtx_s_axi_tx_tlast;
  wire                gtxtx_s_axi_tx_tvalid;
  wire       [31:0]   gtxtx_crc_data;
  wire       [7:0]    gtxtx_tx_packet_addra;
  wire                gtxtx_tx_packet_rden;
  wire       [7:0]    _zz_tx_packet_data;
  reg [31:0] mem [0:255];

  always @(posedge clk_1) begin
    if(gtxtx_tx_packet_rden) begin
      _zz_mem_port0 <= mem[_zz_tx_packet_data];
    end
  end

  gtx_tx gtxtx (
    .log_clk              (clk                    ), //i
    .log_rst_q            (reset                  ), //i
    .s_axi_tx_tdata       (gtxtx_s_axi_tx_tdata   ), //o
    .s_axi_tx_tkeep       (gtxtx_s_axi_tx_tkeep   ), //o
    .s_axi_tx_tlast       (gtxtx_s_axi_tx_tlast   ), //o
    .s_axi_tx_tvalid      (gtxtx_s_axi_tx_tvalid  ), //o
    .s_axi_tx_tready      (axiw_ready             ), //i
    .tx_packet_gtxid      (32'h00000001           ), //i
    .tx_packet_head       (tx_head                ), //i
    .tx_packet_req        (tx_packet_req          ), //i
    .tx_packet_trigger    (tx_packet_trigger      ), //i
    .crc_data             (gtxtx_crc_data         ), //o
    .tx_packet_addra      (gtxtx_tx_packet_addra  ), //o
    .tx_packet_data       (gtxtx_tx_packet_data   ), //i
    .tx_packet_rden       (gtxtx_tx_packet_rden   )  //o
  );
  assign _zz_tx_packet_data = gtxtx_tx_packet_addra;
  assign gtxtx_tx_packet_data = _zz_mem_port0;
  assign axiw_payload_data = gtxtx_s_axi_tx_tdata;
  assign axiw_payload_last = gtxtx_s_axi_tx_tlast;
  assign axiw_valid = gtxtx_s_axi_tx_tvalid;

endmodule
