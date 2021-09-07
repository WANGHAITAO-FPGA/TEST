// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : DataSync
// Git hash  : 65291426c6eb570603f2906aaddb1e59c5c7d9d9



module DataSync (
  input               clk_80M,
  input               user_clk,
  input               reset,
  input               ad_data_in_0_valid,
  output              ad_data_in_0_ready,
  input      [15:0]   ad_data_in_0_payload,
  input               ad_data_in_1_valid,
  output              ad_data_in_1_ready,
  input      [15:0]   ad_data_in_1_payload,
  input               ad_data_in_2_valid,
  output              ad_data_in_2_ready,
  input      [15:0]   ad_data_in_2_payload,
  input               ad_data_in_3_valid,
  output              ad_data_in_3_ready,
  input      [15:0]   ad_data_in_3_payload,
  input               ad_data_in_4_valid,
  output              ad_data_in_4_ready,
  input      [15:0]   ad_data_in_4_payload,
  input               ad_data_in_5_valid,
  output              ad_data_in_5_ready,
  input      [15:0]   ad_data_in_5_payload,
  input               ad_data_in_6_valid,
  output              ad_data_in_6_ready,
  input      [15:0]   ad_data_in_6_payload,
  input               ad_data_in_7_valid,
  output              ad_data_in_7_ready,
  input      [15:0]   ad_data_in_7_payload,
  input               ad_data_in_8_valid,
  output              ad_data_in_8_ready,
  input      [15:0]   ad_data_in_8_payload,
  input               ad_data_in_9_valid,
  output              ad_data_in_9_ready,
  input      [15:0]   ad_data_in_9_payload,
  input               ad_data_in_10_valid,
  output              ad_data_in_10_ready,
  input      [15:0]   ad_data_in_10_payload,
  input               ad_data_in_11_valid,
  output              ad_data_in_11_ready,
  input      [15:0]   ad_data_in_11_payload,
  input               ad_data_in_12_valid,
  output              ad_data_in_12_ready,
  input      [15:0]   ad_data_in_12_payload,
  input               ad_data_in_13_valid,
  output              ad_data_in_13_ready,
  input      [15:0]   ad_data_in_13_payload,
  input               ad_data_in_14_valid,
  output              ad_data_in_14_ready,
  input      [15:0]   ad_data_in_14_payload,
  input               ad_data_in_15_valid,
  output              ad_data_in_15_ready,
  input      [15:0]   ad_data_in_15_payload,
  input               ad_data_in_16_valid,
  output              ad_data_in_16_ready,
  input      [15:0]   ad_data_in_16_payload,
  input               ad_data_in_17_valid,
  output              ad_data_in_17_ready,
  input      [15:0]   ad_data_in_17_payload,
  input               ad_data_in_18_valid,
  output              ad_data_in_18_ready,
  input      [15:0]   ad_data_in_18_payload,
  input               ad_data_in_19_valid,
  output              ad_data_in_19_ready,
  input      [15:0]   ad_data_in_19_payload,
  input               ad_data_in_20_valid,
  output              ad_data_in_20_ready,
  input      [15:0]   ad_data_in_20_payload,
  input               ad_data_in_21_valid,
  output              ad_data_in_21_ready,
  input      [15:0]   ad_data_in_21_payload,
  input               ad_data_in_22_valid,
  output              ad_data_in_22_ready,
  input      [15:0]   ad_data_in_22_payload,
  input               ad_data_in_23_valid,
  output              ad_data_in_23_ready,
  input      [15:0]   ad_data_in_23_payload,
  input               bissc_data_in_0_valid,
  output              bissc_data_in_0_ready,
  input      [31:0]   bissc_data_in_0_payload,
  input               bissc_data_in_1_valid,
  output              bissc_data_in_1_ready,
  input      [31:0]   bissc_data_in_1_payload,
  input               bissc_data_in_2_valid,
  output              bissc_data_in_2_ready,
  input      [31:0]   bissc_data_in_2_payload,
  input               bissc_data_in_3_valid,
  output              bissc_data_in_3_ready,
  input      [31:0]   bissc_data_in_3_payload,
  input               encoder_data_in_0_valid,
  output              encoder_data_in_0_ready,
  input      [31:0]   encoder_data_in_0_payload,
  input               encoder_data_in_1_valid,
  output              encoder_data_in_1_ready,
  input      [31:0]   encoder_data_in_1_payload,
  input               encoder_data_in_2_valid,
  output              encoder_data_in_2_ready,
  input      [31:0]   encoder_data_in_2_payload,
  input               encoder_data_in_3_valid,
  output              encoder_data_in_3_ready,
  input      [31:0]   encoder_data_in_3_payload,
  output     [15:0]   ad_data_out_0,
  output     [15:0]   ad_data_out_1,
  output     [15:0]   ad_data_out_2,
  output     [15:0]   ad_data_out_3,
  output     [15:0]   ad_data_out_4,
  output     [15:0]   ad_data_out_5,
  output     [15:0]   ad_data_out_6,
  output     [15:0]   ad_data_out_7,
  output     [15:0]   ad_data_out_8,
  output     [15:0]   ad_data_out_9,
  output     [15:0]   ad_data_out_10,
  output     [15:0]   ad_data_out_11,
  output     [15:0]   ad_data_out_12,
  output     [15:0]   ad_data_out_13,
  output     [15:0]   ad_data_out_14,
  output     [15:0]   ad_data_out_15,
  output     [15:0]   ad_data_out_16,
  output     [15:0]   ad_data_out_17,
  output     [15:0]   ad_data_out_18,
  output     [15:0]   ad_data_out_19,
  output     [15:0]   ad_data_out_20,
  output     [15:0]   ad_data_out_21,
  output     [15:0]   ad_data_out_22,
  output     [15:0]   ad_data_out_23,
  output     [31:0]   bissc_data_out_0,
  output     [31:0]   bissc_data_out_1,
  output     [31:0]   bissc_data_out_2,
  output     [31:0]   bissc_data_out_3,
  output     [31:0]   encoder_data_out_0,
  output     [31:0]   encoder_data_out_1,
  output     [31:0]   encoder_data_out_2,
  output     [31:0]   encoder_data_out_3
);
  wire                streamCCByToggle_32_io_input_ready;
  wire                streamCCByToggle_32_io_output_valid;
  wire       [15:0]   streamCCByToggle_32_io_output_payload;
  wire                streamCCByToggle_33_io_input_ready;
  wire                streamCCByToggle_33_io_output_valid;
  wire       [15:0]   streamCCByToggle_33_io_output_payload;
  wire                streamCCByToggle_34_io_input_ready;
  wire                streamCCByToggle_34_io_output_valid;
  wire       [15:0]   streamCCByToggle_34_io_output_payload;
  wire                streamCCByToggle_35_io_input_ready;
  wire                streamCCByToggle_35_io_output_valid;
  wire       [15:0]   streamCCByToggle_35_io_output_payload;
  wire                streamCCByToggle_36_io_input_ready;
  wire                streamCCByToggle_36_io_output_valid;
  wire       [15:0]   streamCCByToggle_36_io_output_payload;
  wire                streamCCByToggle_37_io_input_ready;
  wire                streamCCByToggle_37_io_output_valid;
  wire       [15:0]   streamCCByToggle_37_io_output_payload;
  wire                streamCCByToggle_38_io_input_ready;
  wire                streamCCByToggle_38_io_output_valid;
  wire       [15:0]   streamCCByToggle_38_io_output_payload;
  wire                streamCCByToggle_39_io_input_ready;
  wire                streamCCByToggle_39_io_output_valid;
  wire       [15:0]   streamCCByToggle_39_io_output_payload;
  wire                streamCCByToggle_40_io_input_ready;
  wire                streamCCByToggle_40_io_output_valid;
  wire       [15:0]   streamCCByToggle_40_io_output_payload;
  wire                streamCCByToggle_41_io_input_ready;
  wire                streamCCByToggle_41_io_output_valid;
  wire       [15:0]   streamCCByToggle_41_io_output_payload;
  wire                streamCCByToggle_42_io_input_ready;
  wire                streamCCByToggle_42_io_output_valid;
  wire       [15:0]   streamCCByToggle_42_io_output_payload;
  wire                streamCCByToggle_43_io_input_ready;
  wire                streamCCByToggle_43_io_output_valid;
  wire       [15:0]   streamCCByToggle_43_io_output_payload;
  wire                streamCCByToggle_44_io_input_ready;
  wire                streamCCByToggle_44_io_output_valid;
  wire       [15:0]   streamCCByToggle_44_io_output_payload;
  wire                streamCCByToggle_45_io_input_ready;
  wire                streamCCByToggle_45_io_output_valid;
  wire       [15:0]   streamCCByToggle_45_io_output_payload;
  wire                streamCCByToggle_46_io_input_ready;
  wire                streamCCByToggle_46_io_output_valid;
  wire       [15:0]   streamCCByToggle_46_io_output_payload;
  wire                streamCCByToggle_47_io_input_ready;
  wire                streamCCByToggle_47_io_output_valid;
  wire       [15:0]   streamCCByToggle_47_io_output_payload;
  wire                streamCCByToggle_48_io_input_ready;
  wire                streamCCByToggle_48_io_output_valid;
  wire       [15:0]   streamCCByToggle_48_io_output_payload;
  wire                streamCCByToggle_49_io_input_ready;
  wire                streamCCByToggle_49_io_output_valid;
  wire       [15:0]   streamCCByToggle_49_io_output_payload;
  wire                streamCCByToggle_50_io_input_ready;
  wire                streamCCByToggle_50_io_output_valid;
  wire       [15:0]   streamCCByToggle_50_io_output_payload;
  wire                streamCCByToggle_51_io_input_ready;
  wire                streamCCByToggle_51_io_output_valid;
  wire       [15:0]   streamCCByToggle_51_io_output_payload;
  wire                streamCCByToggle_52_io_input_ready;
  wire                streamCCByToggle_52_io_output_valid;
  wire       [15:0]   streamCCByToggle_52_io_output_payload;
  wire                streamCCByToggle_53_io_input_ready;
  wire                streamCCByToggle_53_io_output_valid;
  wire       [15:0]   streamCCByToggle_53_io_output_payload;
  wire                streamCCByToggle_54_io_input_ready;
  wire                streamCCByToggle_54_io_output_valid;
  wire       [15:0]   streamCCByToggle_54_io_output_payload;
  wire                streamCCByToggle_55_io_input_ready;
  wire                streamCCByToggle_55_io_output_valid;
  wire       [15:0]   streamCCByToggle_55_io_output_payload;
  wire                streamCCByToggle_56_io_input_ready;
  wire                streamCCByToggle_56_io_output_valid;
  wire       [31:0]   streamCCByToggle_56_io_output_payload;
  wire                streamCCByToggle_57_io_input_ready;
  wire                streamCCByToggle_57_io_output_valid;
  wire       [31:0]   streamCCByToggle_57_io_output_payload;
  wire                streamCCByToggle_58_io_input_ready;
  wire                streamCCByToggle_58_io_output_valid;
  wire       [31:0]   streamCCByToggle_58_io_output_payload;
  wire                streamCCByToggle_59_io_input_ready;
  wire                streamCCByToggle_59_io_output_valid;
  wire       [31:0]   streamCCByToggle_59_io_output_payload;
  wire                streamCCByToggle_60_io_input_ready;
  wire                streamCCByToggle_60_io_output_valid;
  wire       [31:0]   streamCCByToggle_60_io_output_payload;
  wire                streamCCByToggle_61_io_input_ready;
  wire                streamCCByToggle_61_io_output_valid;
  wire       [31:0]   streamCCByToggle_61_io_output_payload;
  wire                streamCCByToggle_62_io_input_ready;
  wire                streamCCByToggle_62_io_output_valid;
  wire       [31:0]   streamCCByToggle_62_io_output_payload;
  wire                streamCCByToggle_63_io_input_ready;
  wire                streamCCByToggle_63_io_output_valid;
  wire       [31:0]   streamCCByToggle_63_io_output_payload;

  StreamCCByToggle streamCCByToggle_32 (
    .io_input_valid       (ad_data_in_0_valid                     ), //i
    .io_input_ready       (streamCCByToggle_32_io_input_ready     ), //o
    .io_input_payload     (ad_data_in_0_payload                   ), //i
    .io_output_valid      (streamCCByToggle_32_io_output_valid    ), //o
    .io_output_ready      (1'b1                                   ), //i
    .io_output_payload    (streamCCByToggle_32_io_output_payload  ), //o
    .clk_80M              (clk_80M                                ), //i
    .reset                (reset                                  ), //i
    .user_clk             (user_clk                               )  //i
  );
  StreamCCByToggle streamCCByToggle_33 (
    .io_input_valid       (ad_data_in_1_valid                     ), //i
    .io_input_ready       (streamCCByToggle_33_io_input_ready     ), //o
    .io_input_payload     (ad_data_in_1_payload                   ), //i
    .io_output_valid      (streamCCByToggle_33_io_output_valid    ), //o
    .io_output_ready      (1'b1                                   ), //i
    .io_output_payload    (streamCCByToggle_33_io_output_payload  ), //o
    .clk_80M              (clk_80M                                ), //i
    .reset                (reset                                  ), //i
    .user_clk             (user_clk                               )  //i
  );
  StreamCCByToggle streamCCByToggle_34 (
    .io_input_valid       (ad_data_in_2_valid                     ), //i
    .io_input_ready       (streamCCByToggle_34_io_input_ready     ), //o
    .io_input_payload     (ad_data_in_2_payload                   ), //i
    .io_output_valid      (streamCCByToggle_34_io_output_valid    ), //o
    .io_output_ready      (1'b1                                   ), //i
    .io_output_payload    (streamCCByToggle_34_io_output_payload  ), //o
    .clk_80M              (clk_80M                                ), //i
    .reset                (reset                                  ), //i
    .user_clk             (user_clk                               )  //i
  );
  StreamCCByToggle streamCCByToggle_35 (
    .io_input_valid       (ad_data_in_3_valid                     ), //i
    .io_input_ready       (streamCCByToggle_35_io_input_ready     ), //o
    .io_input_payload     (ad_data_in_3_payload                   ), //i
    .io_output_valid      (streamCCByToggle_35_io_output_valid    ), //o
    .io_output_ready      (1'b1                                   ), //i
    .io_output_payload    (streamCCByToggle_35_io_output_payload  ), //o
    .clk_80M              (clk_80M                                ), //i
    .reset                (reset                                  ), //i
    .user_clk             (user_clk                               )  //i
  );
  StreamCCByToggle streamCCByToggle_36 (
    .io_input_valid       (ad_data_in_4_valid                     ), //i
    .io_input_ready       (streamCCByToggle_36_io_input_ready     ), //o
    .io_input_payload     (ad_data_in_4_payload                   ), //i
    .io_output_valid      (streamCCByToggle_36_io_output_valid    ), //o
    .io_output_ready      (1'b1                                   ), //i
    .io_output_payload    (streamCCByToggle_36_io_output_payload  ), //o
    .clk_80M              (clk_80M                                ), //i
    .reset                (reset                                  ), //i
    .user_clk             (user_clk                               )  //i
  );
  StreamCCByToggle streamCCByToggle_37 (
    .io_input_valid       (ad_data_in_5_valid                     ), //i
    .io_input_ready       (streamCCByToggle_37_io_input_ready     ), //o
    .io_input_payload     (ad_data_in_5_payload                   ), //i
    .io_output_valid      (streamCCByToggle_37_io_output_valid    ), //o
    .io_output_ready      (1'b1                                   ), //i
    .io_output_payload    (streamCCByToggle_37_io_output_payload  ), //o
    .clk_80M              (clk_80M                                ), //i
    .reset                (reset                                  ), //i
    .user_clk             (user_clk                               )  //i
  );
  StreamCCByToggle streamCCByToggle_38 (
    .io_input_valid       (ad_data_in_6_valid                     ), //i
    .io_input_ready       (streamCCByToggle_38_io_input_ready     ), //o
    .io_input_payload     (ad_data_in_6_payload                   ), //i
    .io_output_valid      (streamCCByToggle_38_io_output_valid    ), //o
    .io_output_ready      (1'b1                                   ), //i
    .io_output_payload    (streamCCByToggle_38_io_output_payload  ), //o
    .clk_80M              (clk_80M                                ), //i
    .reset                (reset                                  ), //i
    .user_clk             (user_clk                               )  //i
  );
  StreamCCByToggle streamCCByToggle_39 (
    .io_input_valid       (ad_data_in_7_valid                     ), //i
    .io_input_ready       (streamCCByToggle_39_io_input_ready     ), //o
    .io_input_payload     (ad_data_in_7_payload                   ), //i
    .io_output_valid      (streamCCByToggle_39_io_output_valid    ), //o
    .io_output_ready      (1'b1                                   ), //i
    .io_output_payload    (streamCCByToggle_39_io_output_payload  ), //o
    .clk_80M              (clk_80M                                ), //i
    .reset                (reset                                  ), //i
    .user_clk             (user_clk                               )  //i
  );
  StreamCCByToggle streamCCByToggle_40 (
    .io_input_valid       (ad_data_in_8_valid                     ), //i
    .io_input_ready       (streamCCByToggle_40_io_input_ready     ), //o
    .io_input_payload     (ad_data_in_8_payload                   ), //i
    .io_output_valid      (streamCCByToggle_40_io_output_valid    ), //o
    .io_output_ready      (1'b1                                   ), //i
    .io_output_payload    (streamCCByToggle_40_io_output_payload  ), //o
    .clk_80M              (clk_80M                                ), //i
    .reset                (reset                                  ), //i
    .user_clk             (user_clk                               )  //i
  );
  StreamCCByToggle streamCCByToggle_41 (
    .io_input_valid       (ad_data_in_9_valid                     ), //i
    .io_input_ready       (streamCCByToggle_41_io_input_ready     ), //o
    .io_input_payload     (ad_data_in_9_payload                   ), //i
    .io_output_valid      (streamCCByToggle_41_io_output_valid    ), //o
    .io_output_ready      (1'b1                                   ), //i
    .io_output_payload    (streamCCByToggle_41_io_output_payload  ), //o
    .clk_80M              (clk_80M                                ), //i
    .reset                (reset                                  ), //i
    .user_clk             (user_clk                               )  //i
  );
  StreamCCByToggle streamCCByToggle_42 (
    .io_input_valid       (ad_data_in_10_valid                    ), //i
    .io_input_ready       (streamCCByToggle_42_io_input_ready     ), //o
    .io_input_payload     (ad_data_in_10_payload                  ), //i
    .io_output_valid      (streamCCByToggle_42_io_output_valid    ), //o
    .io_output_ready      (1'b1                                   ), //i
    .io_output_payload    (streamCCByToggle_42_io_output_payload  ), //o
    .clk_80M              (clk_80M                                ), //i
    .reset                (reset                                  ), //i
    .user_clk             (user_clk                               )  //i
  );
  StreamCCByToggle streamCCByToggle_43 (
    .io_input_valid       (ad_data_in_11_valid                    ), //i
    .io_input_ready       (streamCCByToggle_43_io_input_ready     ), //o
    .io_input_payload     (ad_data_in_11_payload                  ), //i
    .io_output_valid      (streamCCByToggle_43_io_output_valid    ), //o
    .io_output_ready      (1'b1                                   ), //i
    .io_output_payload    (streamCCByToggle_43_io_output_payload  ), //o
    .clk_80M              (clk_80M                                ), //i
    .reset                (reset                                  ), //i
    .user_clk             (user_clk                               )  //i
  );
  StreamCCByToggle streamCCByToggle_44 (
    .io_input_valid       (ad_data_in_12_valid                    ), //i
    .io_input_ready       (streamCCByToggle_44_io_input_ready     ), //o
    .io_input_payload     (ad_data_in_12_payload                  ), //i
    .io_output_valid      (streamCCByToggle_44_io_output_valid    ), //o
    .io_output_ready      (1'b1                                   ), //i
    .io_output_payload    (streamCCByToggle_44_io_output_payload  ), //o
    .clk_80M              (clk_80M                                ), //i
    .reset                (reset                                  ), //i
    .user_clk             (user_clk                               )  //i
  );
  StreamCCByToggle streamCCByToggle_45 (
    .io_input_valid       (ad_data_in_13_valid                    ), //i
    .io_input_ready       (streamCCByToggle_45_io_input_ready     ), //o
    .io_input_payload     (ad_data_in_13_payload                  ), //i
    .io_output_valid      (streamCCByToggle_45_io_output_valid    ), //o
    .io_output_ready      (1'b1                                   ), //i
    .io_output_payload    (streamCCByToggle_45_io_output_payload  ), //o
    .clk_80M              (clk_80M                                ), //i
    .reset                (reset                                  ), //i
    .user_clk             (user_clk                               )  //i
  );
  StreamCCByToggle streamCCByToggle_46 (
    .io_input_valid       (ad_data_in_14_valid                    ), //i
    .io_input_ready       (streamCCByToggle_46_io_input_ready     ), //o
    .io_input_payload     (ad_data_in_14_payload                  ), //i
    .io_output_valid      (streamCCByToggle_46_io_output_valid    ), //o
    .io_output_ready      (1'b1                                   ), //i
    .io_output_payload    (streamCCByToggle_46_io_output_payload  ), //o
    .clk_80M              (clk_80M                                ), //i
    .reset                (reset                                  ), //i
    .user_clk             (user_clk                               )  //i
  );
  StreamCCByToggle streamCCByToggle_47 (
    .io_input_valid       (ad_data_in_15_valid                    ), //i
    .io_input_ready       (streamCCByToggle_47_io_input_ready     ), //o
    .io_input_payload     (ad_data_in_15_payload                  ), //i
    .io_output_valid      (streamCCByToggle_47_io_output_valid    ), //o
    .io_output_ready      (1'b1                                   ), //i
    .io_output_payload    (streamCCByToggle_47_io_output_payload  ), //o
    .clk_80M              (clk_80M                                ), //i
    .reset                (reset                                  ), //i
    .user_clk             (user_clk                               )  //i
  );
  StreamCCByToggle streamCCByToggle_48 (
    .io_input_valid       (ad_data_in_16_valid                    ), //i
    .io_input_ready       (streamCCByToggle_48_io_input_ready     ), //o
    .io_input_payload     (ad_data_in_16_payload                  ), //i
    .io_output_valid      (streamCCByToggle_48_io_output_valid    ), //o
    .io_output_ready      (1'b1                                   ), //i
    .io_output_payload    (streamCCByToggle_48_io_output_payload  ), //o
    .clk_80M              (clk_80M                                ), //i
    .reset                (reset                                  ), //i
    .user_clk             (user_clk                               )  //i
  );
  StreamCCByToggle streamCCByToggle_49 (
    .io_input_valid       (ad_data_in_17_valid                    ), //i
    .io_input_ready       (streamCCByToggle_49_io_input_ready     ), //o
    .io_input_payload     (ad_data_in_17_payload                  ), //i
    .io_output_valid      (streamCCByToggle_49_io_output_valid    ), //o
    .io_output_ready      (1'b1                                   ), //i
    .io_output_payload    (streamCCByToggle_49_io_output_payload  ), //o
    .clk_80M              (clk_80M                                ), //i
    .reset                (reset                                  ), //i
    .user_clk             (user_clk                               )  //i
  );
  StreamCCByToggle streamCCByToggle_50 (
    .io_input_valid       (ad_data_in_18_valid                    ), //i
    .io_input_ready       (streamCCByToggle_50_io_input_ready     ), //o
    .io_input_payload     (ad_data_in_18_payload                  ), //i
    .io_output_valid      (streamCCByToggle_50_io_output_valid    ), //o
    .io_output_ready      (1'b1                                   ), //i
    .io_output_payload    (streamCCByToggle_50_io_output_payload  ), //o
    .clk_80M              (clk_80M                                ), //i
    .reset                (reset                                  ), //i
    .user_clk             (user_clk                               )  //i
  );
  StreamCCByToggle streamCCByToggle_51 (
    .io_input_valid       (ad_data_in_19_valid                    ), //i
    .io_input_ready       (streamCCByToggle_51_io_input_ready     ), //o
    .io_input_payload     (ad_data_in_19_payload                  ), //i
    .io_output_valid      (streamCCByToggle_51_io_output_valid    ), //o
    .io_output_ready      (1'b1                                   ), //i
    .io_output_payload    (streamCCByToggle_51_io_output_payload  ), //o
    .clk_80M              (clk_80M                                ), //i
    .reset                (reset                                  ), //i
    .user_clk             (user_clk                               )  //i
  );
  StreamCCByToggle streamCCByToggle_52 (
    .io_input_valid       (ad_data_in_20_valid                    ), //i
    .io_input_ready       (streamCCByToggle_52_io_input_ready     ), //o
    .io_input_payload     (ad_data_in_20_payload                  ), //i
    .io_output_valid      (streamCCByToggle_52_io_output_valid    ), //o
    .io_output_ready      (1'b1                                   ), //i
    .io_output_payload    (streamCCByToggle_52_io_output_payload  ), //o
    .clk_80M              (clk_80M                                ), //i
    .reset                (reset                                  ), //i
    .user_clk             (user_clk                               )  //i
  );
  StreamCCByToggle streamCCByToggle_53 (
    .io_input_valid       (ad_data_in_21_valid                    ), //i
    .io_input_ready       (streamCCByToggle_53_io_input_ready     ), //o
    .io_input_payload     (ad_data_in_21_payload                  ), //i
    .io_output_valid      (streamCCByToggle_53_io_output_valid    ), //o
    .io_output_ready      (1'b1                                   ), //i
    .io_output_payload    (streamCCByToggle_53_io_output_payload  ), //o
    .clk_80M              (clk_80M                                ), //i
    .reset                (reset                                  ), //i
    .user_clk             (user_clk                               )  //i
  );
  StreamCCByToggle streamCCByToggle_54 (
    .io_input_valid       (ad_data_in_22_valid                    ), //i
    .io_input_ready       (streamCCByToggle_54_io_input_ready     ), //o
    .io_input_payload     (ad_data_in_22_payload                  ), //i
    .io_output_valid      (streamCCByToggle_54_io_output_valid    ), //o
    .io_output_ready      (1'b1                                   ), //i
    .io_output_payload    (streamCCByToggle_54_io_output_payload  ), //o
    .clk_80M              (clk_80M                                ), //i
    .reset                (reset                                  ), //i
    .user_clk             (user_clk                               )  //i
  );
  StreamCCByToggle streamCCByToggle_55 (
    .io_input_valid       (ad_data_in_23_valid                    ), //i
    .io_input_ready       (streamCCByToggle_55_io_input_ready     ), //o
    .io_input_payload     (ad_data_in_23_payload                  ), //i
    .io_output_valid      (streamCCByToggle_55_io_output_valid    ), //o
    .io_output_ready      (1'b1                                   ), //i
    .io_output_payload    (streamCCByToggle_55_io_output_payload  ), //o
    .clk_80M              (clk_80M                                ), //i
    .reset                (reset                                  ), //i
    .user_clk             (user_clk                               )  //i
  );
  StreamCCByToggle_24 streamCCByToggle_56 (
    .io_input_valid       (bissc_data_in_0_valid                  ), //i
    .io_input_ready       (streamCCByToggle_56_io_input_ready     ), //o
    .io_input_payload     (bissc_data_in_0_payload                ), //i
    .io_output_valid      (streamCCByToggle_56_io_output_valid    ), //o
    .io_output_ready      (1'b1                                   ), //i
    .io_output_payload    (streamCCByToggle_56_io_output_payload  ), //o
    .clk_80M              (clk_80M                                ), //i
    .reset                (reset                                  ), //i
    .user_clk             (user_clk                               )  //i
  );
  StreamCCByToggle_24 streamCCByToggle_57 (
    .io_input_valid       (bissc_data_in_1_valid                  ), //i
    .io_input_ready       (streamCCByToggle_57_io_input_ready     ), //o
    .io_input_payload     (bissc_data_in_1_payload                ), //i
    .io_output_valid      (streamCCByToggle_57_io_output_valid    ), //o
    .io_output_ready      (1'b1                                   ), //i
    .io_output_payload    (streamCCByToggle_57_io_output_payload  ), //o
    .clk_80M              (clk_80M                                ), //i
    .reset                (reset                                  ), //i
    .user_clk             (user_clk                               )  //i
  );
  StreamCCByToggle_24 streamCCByToggle_58 (
    .io_input_valid       (bissc_data_in_2_valid                  ), //i
    .io_input_ready       (streamCCByToggle_58_io_input_ready     ), //o
    .io_input_payload     (bissc_data_in_2_payload                ), //i
    .io_output_valid      (streamCCByToggle_58_io_output_valid    ), //o
    .io_output_ready      (1'b1                                   ), //i
    .io_output_payload    (streamCCByToggle_58_io_output_payload  ), //o
    .clk_80M              (clk_80M                                ), //i
    .reset                (reset                                  ), //i
    .user_clk             (user_clk                               )  //i
  );
  StreamCCByToggle_24 streamCCByToggle_59 (
    .io_input_valid       (bissc_data_in_3_valid                  ), //i
    .io_input_ready       (streamCCByToggle_59_io_input_ready     ), //o
    .io_input_payload     (bissc_data_in_3_payload                ), //i
    .io_output_valid      (streamCCByToggle_59_io_output_valid    ), //o
    .io_output_ready      (1'b1                                   ), //i
    .io_output_payload    (streamCCByToggle_59_io_output_payload  ), //o
    .clk_80M              (clk_80M                                ), //i
    .reset                (reset                                  ), //i
    .user_clk             (user_clk                               )  //i
  );
  StreamCCByToggle_24 streamCCByToggle_60 (
    .io_input_valid       (encoder_data_in_0_valid                ), //i
    .io_input_ready       (streamCCByToggle_60_io_input_ready     ), //o
    .io_input_payload     (encoder_data_in_0_payload              ), //i
    .io_output_valid      (streamCCByToggle_60_io_output_valid    ), //o
    .io_output_ready      (1'b1                                   ), //i
    .io_output_payload    (streamCCByToggle_60_io_output_payload  ), //o
    .clk_80M              (clk_80M                                ), //i
    .reset                (reset                                  ), //i
    .user_clk             (user_clk                               )  //i
  );
  StreamCCByToggle_24 streamCCByToggle_61 (
    .io_input_valid       (encoder_data_in_1_valid                ), //i
    .io_input_ready       (streamCCByToggle_61_io_input_ready     ), //o
    .io_input_payload     (encoder_data_in_1_payload              ), //i
    .io_output_valid      (streamCCByToggle_61_io_output_valid    ), //o
    .io_output_ready      (1'b1                                   ), //i
    .io_output_payload    (streamCCByToggle_61_io_output_payload  ), //o
    .clk_80M              (clk_80M                                ), //i
    .reset                (reset                                  ), //i
    .user_clk             (user_clk                               )  //i
  );
  StreamCCByToggle_24 streamCCByToggle_62 (
    .io_input_valid       (encoder_data_in_2_valid                ), //i
    .io_input_ready       (streamCCByToggle_62_io_input_ready     ), //o
    .io_input_payload     (encoder_data_in_2_payload              ), //i
    .io_output_valid      (streamCCByToggle_62_io_output_valid    ), //o
    .io_output_ready      (1'b1                                   ), //i
    .io_output_payload    (streamCCByToggle_62_io_output_payload  ), //o
    .clk_80M              (clk_80M                                ), //i
    .reset                (reset                                  ), //i
    .user_clk             (user_clk                               )  //i
  );
  StreamCCByToggle_24 streamCCByToggle_63 (
    .io_input_valid       (encoder_data_in_3_valid                ), //i
    .io_input_ready       (streamCCByToggle_63_io_input_ready     ), //o
    .io_input_payload     (encoder_data_in_3_payload              ), //i
    .io_output_valid      (streamCCByToggle_63_io_output_valid    ), //o
    .io_output_ready      (1'b1                                   ), //i
    .io_output_payload    (streamCCByToggle_63_io_output_payload  ), //o
    .clk_80M              (clk_80M                                ), //i
    .reset                (reset                                  ), //i
    .user_clk             (user_clk                               )  //i
  );
  assign ad_data_in_0_ready = streamCCByToggle_32_io_input_ready;
  assign ad_data_out_0 = streamCCByToggle_32_io_output_payload;
  assign ad_data_in_1_ready = streamCCByToggle_33_io_input_ready;
  assign ad_data_out_1 = streamCCByToggle_33_io_output_payload;
  assign ad_data_in_2_ready = streamCCByToggle_34_io_input_ready;
  assign ad_data_out_2 = streamCCByToggle_34_io_output_payload;
  assign ad_data_in_3_ready = streamCCByToggle_35_io_input_ready;
  assign ad_data_out_3 = streamCCByToggle_35_io_output_payload;
  assign ad_data_in_4_ready = streamCCByToggle_36_io_input_ready;
  assign ad_data_out_4 = streamCCByToggle_36_io_output_payload;
  assign ad_data_in_5_ready = streamCCByToggle_37_io_input_ready;
  assign ad_data_out_5 = streamCCByToggle_37_io_output_payload;
  assign ad_data_in_6_ready = streamCCByToggle_38_io_input_ready;
  assign ad_data_out_6 = streamCCByToggle_38_io_output_payload;
  assign ad_data_in_7_ready = streamCCByToggle_39_io_input_ready;
  assign ad_data_out_7 = streamCCByToggle_39_io_output_payload;
  assign ad_data_in_8_ready = streamCCByToggle_40_io_input_ready;
  assign ad_data_out_8 = streamCCByToggle_40_io_output_payload;
  assign ad_data_in_9_ready = streamCCByToggle_41_io_input_ready;
  assign ad_data_out_9 = streamCCByToggle_41_io_output_payload;
  assign ad_data_in_10_ready = streamCCByToggle_42_io_input_ready;
  assign ad_data_out_10 = streamCCByToggle_42_io_output_payload;
  assign ad_data_in_11_ready = streamCCByToggle_43_io_input_ready;
  assign ad_data_out_11 = streamCCByToggle_43_io_output_payload;
  assign ad_data_in_12_ready = streamCCByToggle_44_io_input_ready;
  assign ad_data_out_12 = streamCCByToggle_44_io_output_payload;
  assign ad_data_in_13_ready = streamCCByToggle_45_io_input_ready;
  assign ad_data_out_13 = streamCCByToggle_45_io_output_payload;
  assign ad_data_in_14_ready = streamCCByToggle_46_io_input_ready;
  assign ad_data_out_14 = streamCCByToggle_46_io_output_payload;
  assign ad_data_in_15_ready = streamCCByToggle_47_io_input_ready;
  assign ad_data_out_15 = streamCCByToggle_47_io_output_payload;
  assign ad_data_in_16_ready = streamCCByToggle_48_io_input_ready;
  assign ad_data_out_16 = streamCCByToggle_48_io_output_payload;
  assign ad_data_in_17_ready = streamCCByToggle_49_io_input_ready;
  assign ad_data_out_17 = streamCCByToggle_49_io_output_payload;
  assign ad_data_in_18_ready = streamCCByToggle_50_io_input_ready;
  assign ad_data_out_18 = streamCCByToggle_50_io_output_payload;
  assign ad_data_in_19_ready = streamCCByToggle_51_io_input_ready;
  assign ad_data_out_19 = streamCCByToggle_51_io_output_payload;
  assign ad_data_in_20_ready = streamCCByToggle_52_io_input_ready;
  assign ad_data_out_20 = streamCCByToggle_52_io_output_payload;
  assign ad_data_in_21_ready = streamCCByToggle_53_io_input_ready;
  assign ad_data_out_21 = streamCCByToggle_53_io_output_payload;
  assign ad_data_in_22_ready = streamCCByToggle_54_io_input_ready;
  assign ad_data_out_22 = streamCCByToggle_54_io_output_payload;
  assign ad_data_in_23_ready = streamCCByToggle_55_io_input_ready;
  assign ad_data_out_23 = streamCCByToggle_55_io_output_payload;
  assign bissc_data_in_0_ready = streamCCByToggle_56_io_input_ready;
  assign bissc_data_out_0 = streamCCByToggle_56_io_output_payload;
  assign bissc_data_in_1_ready = streamCCByToggle_57_io_input_ready;
  assign bissc_data_out_1 = streamCCByToggle_57_io_output_payload;
  assign bissc_data_in_2_ready = streamCCByToggle_58_io_input_ready;
  assign bissc_data_out_2 = streamCCByToggle_58_io_output_payload;
  assign bissc_data_in_3_ready = streamCCByToggle_59_io_input_ready;
  assign bissc_data_out_3 = streamCCByToggle_59_io_output_payload;
  assign encoder_data_in_0_ready = streamCCByToggle_60_io_input_ready;
  assign encoder_data_out_0 = streamCCByToggle_60_io_output_payload;
  assign encoder_data_in_1_ready = streamCCByToggle_61_io_input_ready;
  assign encoder_data_out_1 = streamCCByToggle_61_io_output_payload;
  assign encoder_data_in_2_ready = streamCCByToggle_62_io_input_ready;
  assign encoder_data_out_2 = streamCCByToggle_62_io_output_payload;
  assign encoder_data_in_3_ready = streamCCByToggle_63_io_input_ready;
  assign encoder_data_out_3 = streamCCByToggle_63_io_output_payload;

endmodule

//StreamCCByToggle_24 replaced by StreamCCByToggle_24

//StreamCCByToggle_24 replaced by StreamCCByToggle_24

//StreamCCByToggle_24 replaced by StreamCCByToggle_24

//StreamCCByToggle_24 replaced by StreamCCByToggle_24

//StreamCCByToggle_24 replaced by StreamCCByToggle_24

//StreamCCByToggle_24 replaced by StreamCCByToggle_24

//StreamCCByToggle_24 replaced by StreamCCByToggle_24

module StreamCCByToggle_24 (
  input               io_input_valid,
  output              io_input_ready,
  input      [31:0]   io_input_payload,
  output              io_output_valid,
  input               io_output_ready,
  output     [31:0]   io_output_payload,
  input               clk_80M,
  input               reset,
  input               user_clk
);
  wire                outHitSignal_buffercc_io_dataOut;
  wire                pushArea_target_buffercc_io_dataOut;
  wire                outHitSignal;
  wire                pushArea_hit;
  wire                pushArea_accept;
  reg                 pushArea_target;
  reg        [31:0]   pushArea_data;
  wire                io_input_fire;
  wire                popArea_stream_valid;
  reg                 popArea_stream_ready;
  wire       [31:0]   popArea_stream_payload;
  wire                popArea_target;
  wire                popArea_stream_fire;
  reg                 popArea_hit;
  wire                popArea_stream_m2sPipe_valid;
  wire                popArea_stream_m2sPipe_ready;
  wire       [31:0]   popArea_stream_m2sPipe_payload;
  reg                 popArea_stream_rValid;
  wire                popArea_stream_fire_1;
  reg        [31:0]   popArea_stream_rData;
  wire                when_Stream_l342;

  BufferCC outHitSignal_buffercc (
    .io_dataIn     (outHitSignal                      ), //i
    .io_dataOut    (outHitSignal_buffercc_io_dataOut  ), //o
    .clk_80M       (clk_80M                           ), //i
    .reset         (reset                             )  //i
  );
  BufferCC_1 pushArea_target_buffercc (
    .io_dataIn     (pushArea_target                      ), //i
    .io_dataOut    (pushArea_target_buffercc_io_dataOut  ), //o
    .user_clk      (user_clk                             ), //i
    .reset         (reset                                )  //i
  );
  assign pushArea_hit = outHitSignal_buffercc_io_dataOut;
  assign io_input_fire = (io_input_valid && io_input_ready);
  assign pushArea_accept = io_input_fire;
  assign io_input_ready = (pushArea_hit == pushArea_target);
  assign popArea_target = pushArea_target_buffercc_io_dataOut;
  assign popArea_stream_fire = (popArea_stream_valid && popArea_stream_ready);
  assign outHitSignal = popArea_hit;
  assign popArea_stream_valid = (popArea_target != popArea_hit);
  assign popArea_stream_payload = pushArea_data;
  assign popArea_stream_fire_1 = (popArea_stream_valid && popArea_stream_ready);
  always @(*) begin
    popArea_stream_ready = popArea_stream_m2sPipe_ready;
    if(when_Stream_l342) begin
      popArea_stream_ready = 1'b1;
    end
  end

  assign when_Stream_l342 = (! popArea_stream_m2sPipe_valid);
  assign popArea_stream_m2sPipe_valid = popArea_stream_rValid;
  assign popArea_stream_m2sPipe_payload = popArea_stream_rData;
  assign io_output_valid = popArea_stream_m2sPipe_valid;
  assign popArea_stream_m2sPipe_ready = io_output_ready;
  assign io_output_payload = popArea_stream_m2sPipe_payload;
  always @(posedge clk_80M or posedge reset) begin
    if(reset) begin
      pushArea_target <= 1'b0;
    end else begin
      if(pushArea_accept) begin
        pushArea_target <= (! pushArea_target);
      end
    end
  end

  always @(posedge clk_80M) begin
    if(pushArea_accept) begin
      pushArea_data <= io_input_payload;
    end
  end

  always @(posedge user_clk or posedge reset) begin
    if(reset) begin
      popArea_hit <= 1'b0;
      popArea_stream_rValid <= 1'b0;
    end else begin
      if(popArea_stream_fire) begin
        popArea_hit <= popArea_target;
      end
      if(popArea_stream_ready) begin
        popArea_stream_rValid <= popArea_stream_valid;
      end
    end
  end

  always @(posedge user_clk) begin
    if(popArea_stream_fire_1) begin
      popArea_stream_rData <= popArea_stream_payload;
    end
  end


endmodule

//StreamCCByToggle replaced by StreamCCByToggle

//StreamCCByToggle replaced by StreamCCByToggle

//StreamCCByToggle replaced by StreamCCByToggle

//StreamCCByToggle replaced by StreamCCByToggle

//StreamCCByToggle replaced by StreamCCByToggle

//StreamCCByToggle replaced by StreamCCByToggle

//StreamCCByToggle replaced by StreamCCByToggle

//StreamCCByToggle replaced by StreamCCByToggle

//StreamCCByToggle replaced by StreamCCByToggle

//StreamCCByToggle replaced by StreamCCByToggle

//StreamCCByToggle replaced by StreamCCByToggle

//StreamCCByToggle replaced by StreamCCByToggle

//StreamCCByToggle replaced by StreamCCByToggle

//StreamCCByToggle replaced by StreamCCByToggle

//StreamCCByToggle replaced by StreamCCByToggle

//StreamCCByToggle replaced by StreamCCByToggle

//StreamCCByToggle replaced by StreamCCByToggle

//StreamCCByToggle replaced by StreamCCByToggle

//StreamCCByToggle replaced by StreamCCByToggle

//StreamCCByToggle replaced by StreamCCByToggle

//StreamCCByToggle replaced by StreamCCByToggle

//StreamCCByToggle replaced by StreamCCByToggle

//StreamCCByToggle replaced by StreamCCByToggle

module StreamCCByToggle (
  input               io_input_valid,
  output              io_input_ready,
  input      [15:0]   io_input_payload,
  output              io_output_valid,
  input               io_output_ready,
  output     [15:0]   io_output_payload,
  input               clk_80M,
  input               reset,
  input               user_clk
);
  wire                outHitSignal_buffercc_io_dataOut;
  wire                pushArea_target_buffercc_io_dataOut;
  wire                outHitSignal;
  wire                pushArea_hit;
  wire                pushArea_accept;
  reg                 pushArea_target;
  reg        [15:0]   pushArea_data;
  wire                io_input_fire;
  wire                popArea_stream_valid;
  reg                 popArea_stream_ready;
  wire       [15:0]   popArea_stream_payload;
  wire                popArea_target;
  wire                popArea_stream_fire;
  reg                 popArea_hit;
  wire                popArea_stream_m2sPipe_valid;
  wire                popArea_stream_m2sPipe_ready;
  wire       [15:0]   popArea_stream_m2sPipe_payload;
  reg                 popArea_stream_rValid;
  wire                popArea_stream_fire_1;
  reg        [15:0]   popArea_stream_rData;
  wire                when_Stream_l342;

  BufferCC outHitSignal_buffercc (
    .io_dataIn     (outHitSignal                      ), //i
    .io_dataOut    (outHitSignal_buffercc_io_dataOut  ), //o
    .clk_80M       (clk_80M                           ), //i
    .reset         (reset                             )  //i
  );
  BufferCC_1 pushArea_target_buffercc (
    .io_dataIn     (pushArea_target                      ), //i
    .io_dataOut    (pushArea_target_buffercc_io_dataOut  ), //o
    .user_clk      (user_clk                             ), //i
    .reset         (reset                                )  //i
  );
  assign pushArea_hit = outHitSignal_buffercc_io_dataOut;
  assign io_input_fire = (io_input_valid && io_input_ready);
  assign pushArea_accept = io_input_fire;
  assign io_input_ready = (pushArea_hit == pushArea_target);
  assign popArea_target = pushArea_target_buffercc_io_dataOut;
  assign popArea_stream_fire = (popArea_stream_valid && popArea_stream_ready);
  assign outHitSignal = popArea_hit;
  assign popArea_stream_valid = (popArea_target != popArea_hit);
  assign popArea_stream_payload = pushArea_data;
  assign popArea_stream_fire_1 = (popArea_stream_valid && popArea_stream_ready);
  always @(*) begin
    popArea_stream_ready = popArea_stream_m2sPipe_ready;
    if(when_Stream_l342) begin
      popArea_stream_ready = 1'b1;
    end
  end

  assign when_Stream_l342 = (! popArea_stream_m2sPipe_valid);
  assign popArea_stream_m2sPipe_valid = popArea_stream_rValid;
  assign popArea_stream_m2sPipe_payload = popArea_stream_rData;
  assign io_output_valid = popArea_stream_m2sPipe_valid;
  assign popArea_stream_m2sPipe_ready = io_output_ready;
  assign io_output_payload = popArea_stream_m2sPipe_payload;
  always @(posedge clk_80M or posedge reset) begin
    if(reset) begin
      pushArea_target <= 1'b0;
    end else begin
      if(pushArea_accept) begin
        pushArea_target <= (! pushArea_target);
      end
    end
  end

  always @(posedge clk_80M) begin
    if(pushArea_accept) begin
      pushArea_data <= io_input_payload;
    end
  end

  always @(posedge user_clk or posedge reset) begin
    if(reset) begin
      popArea_hit <= 1'b0;
      popArea_stream_rValid <= 1'b0;
    end else begin
      if(popArea_stream_fire) begin
        popArea_hit <= popArea_target;
      end
      if(popArea_stream_ready) begin
        popArea_stream_rValid <= popArea_stream_valid;
      end
    end
  end

  always @(posedge user_clk) begin
    if(popArea_stream_fire_1) begin
      popArea_stream_rData <= popArea_stream_payload;
    end
  end


endmodule

//BufferCC_1 replaced by BufferCC_1

//BufferCC replaced by BufferCC

//BufferCC_1 replaced by BufferCC_1

//BufferCC replaced by BufferCC

//BufferCC_1 replaced by BufferCC_1

//BufferCC replaced by BufferCC

//BufferCC_1 replaced by BufferCC_1

//BufferCC replaced by BufferCC

//BufferCC_1 replaced by BufferCC_1

//BufferCC replaced by BufferCC

//BufferCC_1 replaced by BufferCC_1

//BufferCC replaced by BufferCC

//BufferCC_1 replaced by BufferCC_1

//BufferCC replaced by BufferCC

//BufferCC_1 replaced by BufferCC_1

//BufferCC replaced by BufferCC

//BufferCC_1 replaced by BufferCC_1

//BufferCC replaced by BufferCC

//BufferCC_1 replaced by BufferCC_1

//BufferCC replaced by BufferCC

//BufferCC_1 replaced by BufferCC_1

//BufferCC replaced by BufferCC

//BufferCC_1 replaced by BufferCC_1

//BufferCC replaced by BufferCC

//BufferCC_1 replaced by BufferCC_1

//BufferCC replaced by BufferCC

//BufferCC_1 replaced by BufferCC_1

//BufferCC replaced by BufferCC

//BufferCC_1 replaced by BufferCC_1

//BufferCC replaced by BufferCC

//BufferCC_1 replaced by BufferCC_1

//BufferCC replaced by BufferCC

//BufferCC_1 replaced by BufferCC_1

//BufferCC replaced by BufferCC

//BufferCC_1 replaced by BufferCC_1

//BufferCC replaced by BufferCC

//BufferCC_1 replaced by BufferCC_1

//BufferCC replaced by BufferCC

//BufferCC_1 replaced by BufferCC_1

//BufferCC replaced by BufferCC

//BufferCC_1 replaced by BufferCC_1

//BufferCC replaced by BufferCC

//BufferCC_1 replaced by BufferCC_1

//BufferCC replaced by BufferCC

//BufferCC_1 replaced by BufferCC_1

//BufferCC replaced by BufferCC

//BufferCC_1 replaced by BufferCC_1

//BufferCC replaced by BufferCC

//BufferCC_1 replaced by BufferCC_1

//BufferCC replaced by BufferCC

//BufferCC_1 replaced by BufferCC_1

//BufferCC replaced by BufferCC

//BufferCC_1 replaced by BufferCC_1

//BufferCC replaced by BufferCC

//BufferCC_1 replaced by BufferCC_1

//BufferCC replaced by BufferCC

//BufferCC_1 replaced by BufferCC_1

//BufferCC replaced by BufferCC

//BufferCC_1 replaced by BufferCC_1

//BufferCC replaced by BufferCC

//BufferCC_1 replaced by BufferCC_1

//BufferCC replaced by BufferCC

module BufferCC_1 (
  input               io_dataIn,
  output              io_dataOut,
  input               user_clk,
  input               reset
);
  (* async_reg = "true" *) reg                 buffers_0;
  (* async_reg = "true" *) reg                 buffers_1;

  assign io_dataOut = buffers_1;
  always @(posedge user_clk or posedge reset) begin
    if(reset) begin
      buffers_0 <= 1'b0;
      buffers_1 <= 1'b0;
    end else begin
      buffers_0 <= io_dataIn;
      buffers_1 <= buffers_0;
    end
  end


endmodule

module BufferCC (
  input               io_dataIn,
  output              io_dataOut,
  input               clk_80M,
  input               reset
);
  (* async_reg = "true" *) reg                 buffers_0;
  (* async_reg = "true" *) reg                 buffers_1;

  assign io_dataOut = buffers_1;
  always @(posedge clk_80M or posedge reset) begin
    if(reset) begin
      buffers_0 <= 1'b0;
      buffers_1 <= 1'b0;
    end else begin
      buffers_0 <= io_dataIn;
      buffers_1 <= buffers_0;
    end
  end


endmodule
