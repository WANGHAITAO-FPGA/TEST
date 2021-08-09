// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : EmifToApb
// Git hash  : aa52522608eb231392ebc67a74accdba89f54e2c



module EmifToApb (
  input      [23:0]   emif_emif_addr,
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
   inout     [15:0]   emif_emif_data,
  input               clk,
  input               reset
);
  reg                 _zz_emif_emif_data;
  wire       [15:0]   _zz_apb_PWDATA;
  reg        [15:0]   _zz_emif_emif_data_1;
  wire                _zz_1;
  reg                 penable;
  reg        [15:0]   emifdatatemp;
  reg                 penable_regNext;
  wire                when_EmifToApb_l68;
  wire                when_EmifToApb_l78;
  wire                when_EmifToApb_l79;
  reg        [15:0]   _zz_emif_emif_data_2;
  wire                when_EmifToApb_l81;
  reg        [15:0]   _zz_emif_emif_data_3;

  assign emif_emif_data = _zz_emif_emif_data ? _zz_emif_emif_data_1 : 16'bzzzzzzzzzzzzzzzz;
  always @(*) begin
    _zz_emif_emif_data = 1'b0;
    if(_zz_1) begin
      _zz_emif_emif_data = 1'b1;
    end
  end

  assign apb_PADDR = emif_emif_addr[19:0];
  assign apb_PSEL = (~ emif_emif_cs);
  assign apb_PENABLE = ((penable && (! penable_regNext)) ? penable : 1'b0);
  assign apb_PWRITE = (((! emif_emif_we) && emif_emif_oe) && emif_emif_addr[23]);
  assign when_EmifToApb_l68 = (((! emif_emif_we) && emif_emif_oe) && (! emif_emif_addr[23]));
  assign apb_PWDATA = {_zz_apb_PWDATA,emifdatatemp};
  assign _zz_1 = (! emif_emif_oe);
  assign when_EmifToApb_l78 = emif_emif_addr[23];
  assign when_EmifToApb_l79 = (! emif_emif_oe);
  always @(*) begin
    if(when_EmifToApb_l78) begin
      _zz_emif_emif_data_1 = _zz_emif_emif_data_2;
    end else begin
      _zz_emif_emif_data_1 = _zz_emif_emif_data_3;
    end
  end

  assign when_EmifToApb_l81 = (! emif_emif_oe);
  assign _zz_apb_PWDATA = emif_emif_data;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      penable <= 1'b0;
    end else begin
      penable <= (((! emif_emif_oe) || (! emif_emif_we)) && emif_emif_addr[23]);
    end
  end

  always @(posedge clk) begin
    penable_regNext <= penable;
    if(when_EmifToApb_l68) begin
      emifdatatemp <= _zz_apb_PWDATA;
    end
  end

  always @(posedge clk) begin
    if(when_EmifToApb_l79) begin
      _zz_emif_emif_data_2 <= apb_PRDATA[31 : 16];
    end
  end

  always @(posedge clk) begin
    if(when_EmifToApb_l81) begin
      _zz_emif_emif_data_3 <= apb_PRDATA[15 : 0];
    end
  end


endmodule
