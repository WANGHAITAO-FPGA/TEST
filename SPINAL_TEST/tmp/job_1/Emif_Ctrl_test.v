// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : Emif_Ctrl_test
// Git hash  : e92a7073a9005c8061ce6d28747ca441a4ff39f8



module Emif_Ctrl_test (
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
  wire       [25:0]   _zz_apb_PADDR;
  reg                 penable;
  reg        [15:0]   emifdatatemp;
  wire       [1:0]    emif_default_bits;
  reg                 penable_regNext;
  wire                when_EmifToApb_l73;
  wire                when_EmifToApb_l83;
  wire                when_EmifToApb_l84;
  reg        [15:0]   _zz_emif_emif_data_write;
  wire                when_EmifToApb_l86;
  reg        [15:0]   _zz_emif_emif_data_write_1;

  assign _zz_apb_PADDR = ({2'd0,emif_emif_addr} <<< 2);
  assign emif_default_bits = 2'b00;
  assign apb_PADDR = _zz_apb_PADDR[19:0];
  assign apb_PSEL = (~ emif_emif_cs);
  assign apb_PENABLE = ((penable && (! penable_regNext)) ? penable : 1'b0);
  assign apb_PWRITE = (((! emif_emif_we) && emif_emif_oe) && emif_emif_addr[23]);
  assign when_EmifToApb_l73 = (((! emif_emif_we) && emif_emif_oe) && (! emif_emif_addr[23]));
  assign apb_PWDATA = {emif_emif_data_read,emifdatatemp};
  assign emif_emif_data_writeEnable = (! emif_emif_oe);
  assign when_EmifToApb_l83 = emif_emif_addr[23];
  assign when_EmifToApb_l84 = (! emif_emif_oe);
  always @(*) begin
    if(when_EmifToApb_l83) begin
      emif_emif_data_write = _zz_emif_emif_data_write;
    end else begin
      emif_emif_data_write = _zz_emif_emif_data_write_1;
    end
  end

  assign when_EmifToApb_l86 = (! emif_emif_oe);
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      penable <= 1'b0;
    end else begin
      penable <= (((! emif_emif_oe) || (! emif_emif_we)) && emif_emif_addr[23]);
    end
  end

  always @(posedge clk) begin
    penable_regNext <= penable;
    if(when_EmifToApb_l73) begin
      emifdatatemp <= emif_emif_data_read;
    end
  end

  always @(posedge clk) begin
    if(when_EmifToApb_l84) begin
      _zz_emif_emif_data_write <= apb_PRDATA[31 : 16];
    end
  end

  always @(posedge clk) begin
    if(when_EmifToApb_l86) begin
      _zz_emif_emif_data_write_1 <= apb_PRDATA[15 : 0];
    end
  end


endmodule
