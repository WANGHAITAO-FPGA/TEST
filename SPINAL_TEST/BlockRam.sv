// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : BlockRam
// Git hash  : f93dbd0569935e6d195e5c19a229d51e67d5776c



module BlockRam (
  input               ioA_en,
  input      [3:0]    ioA_we,
  input      [9:0]    ioA_addr,
  input      [31:0]   ioA_wrdata,
  output     [31:0]   ioA_rddata,
  input               ioB_en,
  input      [3:0]    ioB_we,
  input      [9:0]    ioB_addr,
  input      [31:0]   ioB_wrdata,
  output     [31:0]   ioB_rddata,
  input               clka,
  input               clkb,
  input               reseta,
  input               resetb
);
  reg        [31:0]   _zz_bram_port0;
  reg        [31:0]   _zz_bram_port2;
  wire                _zz_bram_port;
  wire                _zz_bram_port_1;
  wire       [10:0]   i;
  wire                _zz_ioA_rddata;
  wire                _zz_ioB_rddata;
  reg [31:0] bram [0:1023];

  assign _zz_bram_port = (ioA_en && (ioA_we == 4'b1111));
  assign _zz_bram_port_1 = (ioB_en && (ioB_we == 4'b1111));
  always @(posedge clka) begin
    if(_zz_ioA_rddata) begin
      _zz_bram_port0 <= bram[ioA_addr];
    end
  end

  always @(posedge clka) begin
    if(_zz_bram_port) begin
      bram[ioA_addr] <= ioA_wrdata;
    end
  end

  always @(posedge clkb) begin
    if(_zz_ioB_rddata) begin
      _zz_bram_port2 <= bram[ioB_addr];
    end
  end

  always @(posedge clkb) begin
    if(_zz_bram_port_1) begin
      bram[ioB_addr] <= ioB_wrdata;
    end
  end

  assign _zz_ioA_rddata = (ioA_en && (ioA_we == 4'b0000));
  assign ioA_rddata = _zz_bram_port0;
  assign _zz_ioB_rddata = (ioB_en && (ioB_we == 4'b0000));
  assign ioB_rddata = _zz_bram_port2;

endmodule
