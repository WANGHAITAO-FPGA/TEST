// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : Emif_Ctrl_test
// Git hash  : aa52522608eb231392ebc67a74accdba89f54e2c



module Emif_Ctrl_test (
  input      [23:0]   emif_emif_addr,
  input      [31:0]   emif_emif_data_read,
  output     [31:0]   emif_emif_data_write,
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
  reg        [31:0]   emifdatatemp;
  reg                 penable_regNext;
  wire                when_EmifToApb_l69;
  wire                when_EmifToApb_l77;
  reg        [31:0]   apb_PRDATA_regNextWhen;

  assign apb_PADDR = emif_emif_addr[19:0];
  assign apb_PSEL = (~ emif_emif_cs);
  assign apb_PENABLE = ((penable && (! penable_regNext)) ? penable : 1'b0);
  assign apb_PWRITE = ((! emif_emif_we) && emif_emif_oe);
  assign when_EmifToApb_l69 = (((! emif_emif_we) && emif_emif_oe) && (! emif_emif_addr[23]));
  assign apb_PWDATA = emif_emif_data_read;
  assign emif_emif_data_writeEnable = (! emif_emif_oe);
  assign when_EmifToApb_l77 = (! emif_emif_oe);
  assign emif_emif_data_write = apb_PRDATA_regNextWhen;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      penable <= 1'b0;
    end else begin
      penable <= ((! emif_emif_oe) || (! emif_emif_we));
    end
  end

  always @(posedge clk) begin
    penable_regNext <= penable;
    if(when_EmifToApb_l69) begin
      emifdatatemp <= emif_emif_data_read;
    end
    if(when_EmifToApb_l77) begin
      apb_PRDATA_regNextWhen <= apb_PRDATA;
    end
  end


endmodule
