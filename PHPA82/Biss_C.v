// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : Biss_C



module Biss_C (
  input      [3:0]    apb_PADDR,
  input      [0:0]    apb_PSEL,
  input               apb_PENABLE,
  output              apb_PREADY,
  input               apb_PWRITE,
  input      [15:0]   apb_PWDATA,
  output reg [15:0]   apb_PRDATA,
  output              apb_PSLVERROR,
  output              bisscInterface_enc_clk,
  input               bisscInterface_enc_data,
  input               clk,
  input               reset
);
  wire                area_bissc_ctrl_enc_clk;
  wire       [40:0]   area_bissc_ctrl_enc_position_all;
  wire       [31:0]   area_bissc_ctrl_enc_position_out;
  wire                area_bissc_ctrl_erro_flag;
  wire                area_bissc_ctrl_warn_flag;
  wire                area_bissc_ctrl_crc_flag;
  wire       [2:0]    _zz_area_bissc_status_reg;
  wire       [31:0]   _zz_apb_PRDATA;
  wire       [31:0]   _zz_apb_PRDATA_1;
  wire                area_ctrl_askWrite;
  wire                area_ctrl_askRead;
  wire                area_ctrl_doWrite;
  wire                area_ctrl_doRead;
  reg        [31:0]   area_bissc_pos_reg;
  reg        [15:0]   area_bissc_status_reg;

  assign _zz_area_bissc_status_reg = {{area_bissc_ctrl_erro_flag,area_bissc_ctrl_warn_flag},area_bissc_ctrl_crc_flag};
  assign _zz_apb_PRDATA = area_bissc_pos_reg;
  assign _zz_apb_PRDATA_1 = area_bissc_pos_reg;
  BISS_Position area_bissc_ctrl (
    .clk                 (clk                               ), //i
    .reset               (reset                             ), //i
    .enc_data            (bisscInterface_enc_data           ), //i
    .sample_en           (1'b1                              ), //i
    .enc_clk             (area_bissc_ctrl_enc_clk           ), //o
    .enc_position_all    (area_bissc_ctrl_enc_position_all  ), //o
    .enc_position_out    (area_bissc_ctrl_enc_position_out  ), //o
    .erro_flag           (area_bissc_ctrl_erro_flag         ), //o
    .warn_flag           (area_bissc_ctrl_warn_flag         ), //o
    .crc_flag            (area_bissc_ctrl_crc_flag          )  //o
  );
  assign bisscInterface_enc_clk = area_bissc_ctrl_enc_clk;
  assign apb_PREADY = 1'b1;
  always @(*) begin
    apb_PRDATA = 16'h0;
    case(apb_PADDR)
      4'b0000 : begin
        apb_PRDATA[15 : 0] = _zz_apb_PRDATA[31 : 16];
      end
      4'b0010 : begin
        apb_PRDATA[15 : 0] = _zz_apb_PRDATA_1[15 : 0];
      end
      4'b0100 : begin
        apb_PRDATA[15 : 0] = area_bissc_status_reg;
      end
      default : begin
      end
    endcase
  end

  assign apb_PSLVERROR = 1'b0;
  assign area_ctrl_askWrite = ((apb_PSEL[0] && apb_PENABLE) && apb_PWRITE);
  assign area_ctrl_askRead = ((apb_PSEL[0] && apb_PENABLE) && (! apb_PWRITE));
  assign area_ctrl_doWrite = (((apb_PSEL[0] && apb_PENABLE) && apb_PREADY) && apb_PWRITE);
  assign area_ctrl_doRead = (((apb_PSEL[0] && apb_PENABLE) && apb_PREADY) && (! apb_PWRITE));
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      area_bissc_pos_reg <= 32'h0;
      area_bissc_status_reg <= 16'h0;
    end else begin
      area_bissc_pos_reg <= area_bissc_ctrl_enc_position_out;
      area_bissc_status_reg <= {13'd0, _zz_area_bissc_status_reg};
    end
  end


endmodule
