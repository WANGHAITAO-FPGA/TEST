// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : tx_pll_test
// Git hash  : 65291426c6eb570603f2906aaddb1e59c5c7d9d9



module tx_pll_test (
  input               refclk,
  input               trstz_n
);
  wire                area_tx_pll_is_freq_corrected;
  wire                area_tx_pll_is_phase_corrected;
  wire                area_tx_pll_is_bit_freq_corrected;
  wire                area_tx_pll_is_bit_phase_corrected;
  wire                area_tx_pll_clk_character;
  wire                area_tx_pll_clk_bit_tx;
  wire                area_tx_pll_txclko_po;
  wire                area_tx_pll_txclko_ne;
  wire                area_tx_pll_reset_main;
  wire                area_tx_pll_reset;

  cyp15g0401dxb_tx_pll area_tx_pll (
    .refclk                    (refclk                              ), //i
    .txrate                    (1'b0                                ), //i
    .spdsel                    (1'b0                                ), //i
    .trstz_n                   (trstz_n                             ), //i
    .is_freq_corrected         (area_tx_pll_is_freq_corrected       ), //o
    .is_phase_corrected        (area_tx_pll_is_phase_corrected      ), //o
    .is_bit_freq_corrected     (area_tx_pll_is_bit_freq_corrected   ), //o
    .is_bit_phase_corrected    (area_tx_pll_is_bit_phase_corrected  ), //o
    .clk_character             (area_tx_pll_clk_character           ), //o
    .clk_bit_tx                (area_tx_pll_clk_bit_tx              ), //o
    .txclko_po                 (area_tx_pll_txclko_po               ), //o
    .txclko_ne                 (area_tx_pll_txclko_ne               ), //o
    .reset_main                (area_tx_pll_reset_main              ), //o
    .reset                     (area_tx_pll_reset                   )  //o
  );

endmodule
