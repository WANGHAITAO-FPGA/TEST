// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : BlockRam
// Git hash  : b0e0e1407ba130feb7614ffb9c86b9fcf04c2955



module BlockRam (
  input      [9:0]    ioA_addr,
  input      [31:0]   ioA_dataIn,
  output     [31:0]   ioA_dataOut,
  input               ioA_en,
  input      [3:0]    ioA_we,
  input      [9:0]    ioB_addr,
  input      [31:0]   ioB_dataIn,
  output     [31:0]   ioB_dataOut,
  input               ioB_en,
  input      [3:0]    ioB_we,
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
  wire                _zz_ioA_dataOut;
  wire                _zz_ioB_dataOut;
  reg [31:0] bram [0:1023];

  assign _zz_bram_port = (ioA_en && (ioA_we == 4'b1111));
  assign _zz_bram_port_1 = (ioB_en && (ioB_we == 4'b1111));
  always @(posedge clka) begin
    if(_zz_ioA_dataOut) begin
      _zz_bram_port0 <= bram[ioA_addr];
    end
  end

  always @(posedge clka) begin
    if(_zz_bram_port) begin
      bram[ioA_addr] <= ioA_dataIn;
    end
  end

  always @(posedge clkb) begin
    if(_zz_ioB_dataOut) begin
      _zz_bram_port2 <= bram[ioB_addr];
    end
  end

  always @(posedge clkb) begin
    if(_zz_bram_port_1) begin
      bram[ioB_addr] <= ioB_dataIn;
    end
  end

  assign _zz_ioA_dataOut = (ioA_en && (ioA_we == 4'b0000));
  assign ioA_dataOut = _zz_bram_port0;
  assign _zz_ioB_dataOut = (ioB_en && (ioB_we == 4'b0000));
  assign ioB_dataOut = _zz_bram_port2;

endmodule
