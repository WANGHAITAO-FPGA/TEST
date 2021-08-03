// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : Dut
// Git hash  : e621af020d8670015529b3e08f821a90582a5b26



module Dut (
  input      [7:0]    io_a,
  input      [7:0]    io_b,
  input      [7:0]    io_c,
  output     [7:0]    io_result
);
  wire       [7:0]    _zz_io_result;

  assign _zz_io_result = (io_a + io_b);
  assign io_result = (_zz_io_result - io_c);

endmodule
