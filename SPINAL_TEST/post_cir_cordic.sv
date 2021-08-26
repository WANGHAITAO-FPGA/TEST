// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : post_cir_cordic
// Git hash  : 46b2c176e79dcc0cf1281a50bcd1633f82a50a37



module post_cir_cordic (
  input      [16:0]   data_in,
  output     [15:0]   sin_out,
  output     [15:0]   cos_out,
  input               clk,
  input               reset
);
  wire       [16:0]   pre_cir_cordic_1_alpha;
  wire       [1:0]    pre_cir_cordic_1_flag;
  wire       [1:0]    cir_cordic_calculate_1_flag_out;
  wire       [15:0]   cir_cordic_calculate_1_my_sin;
  wire       [15:0]   cir_cordic_calculate_1_my_cos;
  reg        [15:0]   sin_temp;
  reg        [15:0]   cos_temp;
  wire       [15:0]   zero;

  pre_cir_cordic pre_cir_cordic_1 (
    .data_in    (data_in                 ), //i
    .alpha      (pre_cir_cordic_1_alpha  ), //o
    .flag       (pre_cir_cordic_1_flag   ), //o
    .clk        (clk                     ), //i
    .reset      (reset                   )  //i
  );
  cir_cordic_calculate cir_cordic_calculate_1 (
    .alpha_in    (pre_cir_cordic_1_alpha           ), //i
    .flag_in     (pre_cir_cordic_1_flag            ), //i
    .flag_out    (cir_cordic_calculate_1_flag_out  ), //o
    .my_sin      (cir_cordic_calculate_1_my_sin    ), //o
    .my_cos      (cir_cordic_calculate_1_my_cos    ), //o
    .clk         (clk                              ), //i
    .reset       (reset                            )  //i
  );
  assign zero = 16'h0;
  assign sin_out = sin_temp;
  assign cos_out = cos_temp;
  always @(posedge clk) begin
    case(cir_cordic_calculate_1_flag_out)
      2'b10 : begin
        sin_temp <= cir_cordic_calculate_1_my_sin;
        cos_temp <= ($signed(zero) - $signed(cir_cordic_calculate_1_my_cos));
      end
      2'b11 : begin
        sin_temp <= cir_cordic_calculate_1_my_sin;
        cos_temp <= ($signed(zero) - $signed(cir_cordic_calculate_1_my_cos));
      end
      default : begin
        sin_temp <= cir_cordic_calculate_1_my_sin;
        cos_temp <= cir_cordic_calculate_1_my_cos;
      end
    endcase
  end


endmodule

module cir_cordic_calculate (
  input      [16:0]   alpha_in,
  input      [1:0]    flag_in,
  output     [1:0]    flag_out,
  output     [15:0]   my_sin,
  output     [15:0]   my_cos,
  input               clk,
  input               reset
);
  wire       [16:0]   _zz_when_SinTest_l82;
  wire       [16:0]   _zz_when_SinTest_l82_1;
  wire       [16:0]   _zz_Xi_temp_2;
  wire       [16:0]   _zz_Xi_temp_2_1;
  wire       [16:0]   _zz_Xi_temp_2_2;
  wire       [16:0]   _zz_Yi_temp_2;
  wire       [16:0]   _zz_Yi_temp_2_1;
  wire       [16:0]   _zz_Yi_temp_2_2;
  wire       [16:0]   _zz_Xi_temp_2_3;
  wire       [16:0]   _zz_Xi_temp_2_4;
  wire       [16:0]   _zz_Xi_temp_2_5;
  wire       [16:0]   _zz_Yi_temp_2_3;
  wire       [16:0]   _zz_Yi_temp_2_4;
  wire       [16:0]   _zz_Yi_temp_2_5;
  wire       [16:0]   _zz_when_SinTest_l82_2;
  wire       [17:0]   _zz_Xi_temp_3;
  wire       [17:0]   _zz_Xi_temp_3_1;
  wire       [17:0]   _zz_Xi_temp_3_2;
  wire       [17:0]   _zz_Yi_temp_3;
  wire       [17:0]   _zz_Yi_temp_3_1;
  wire       [17:0]   _zz_Yi_temp_3_2;
  wire       [17:0]   _zz_Xi_temp_3_3;
  wire       [17:0]   _zz_Xi_temp_3_4;
  wire       [17:0]   _zz_Xi_temp_3_5;
  wire       [17:0]   _zz_Yi_temp_3_3;
  wire       [17:0]   _zz_Yi_temp_3_4;
  wire       [17:0]   _zz_Yi_temp_3_5;
  wire       [16:0]   _zz_when_SinTest_l82_3;
  wire       [18:0]   _zz_Xi_temp_4;
  wire       [18:0]   _zz_Xi_temp_4_1;
  wire       [18:0]   _zz_Xi_temp_4_2;
  wire       [18:0]   _zz_Yi_temp_4;
  wire       [18:0]   _zz_Yi_temp_4_1;
  wire       [18:0]   _zz_Yi_temp_4_2;
  wire       [18:0]   _zz_Xi_temp_4_3;
  wire       [18:0]   _zz_Xi_temp_4_4;
  wire       [18:0]   _zz_Xi_temp_4_5;
  wire       [18:0]   _zz_Yi_temp_4_3;
  wire       [18:0]   _zz_Yi_temp_4_4;
  wire       [18:0]   _zz_Yi_temp_4_5;
  wire       [16:0]   _zz_when_SinTest_l82_4;
  wire       [19:0]   _zz_Xi_temp_5;
  wire       [19:0]   _zz_Xi_temp_5_1;
  wire       [19:0]   _zz_Xi_temp_5_2;
  wire       [19:0]   _zz_Yi_temp_5;
  wire       [19:0]   _zz_Yi_temp_5_1;
  wire       [19:0]   _zz_Yi_temp_5_2;
  wire       [19:0]   _zz_Xi_temp_5_3;
  wire       [19:0]   _zz_Xi_temp_5_4;
  wire       [19:0]   _zz_Xi_temp_5_5;
  wire       [19:0]   _zz_Yi_temp_5_3;
  wire       [19:0]   _zz_Yi_temp_5_4;
  wire       [19:0]   _zz_Yi_temp_5_5;
  wire       [16:0]   _zz_when_SinTest_l82_5;
  wire       [20:0]   _zz_Xi_temp_6;
  wire       [20:0]   _zz_Xi_temp_6_1;
  wire       [20:0]   _zz_Xi_temp_6_2;
  wire       [20:0]   _zz_Yi_temp_6;
  wire       [20:0]   _zz_Yi_temp_6_1;
  wire       [20:0]   _zz_Yi_temp_6_2;
  wire       [20:0]   _zz_Xi_temp_6_3;
  wire       [20:0]   _zz_Xi_temp_6_4;
  wire       [20:0]   _zz_Xi_temp_6_5;
  wire       [20:0]   _zz_Yi_temp_6_3;
  wire       [20:0]   _zz_Yi_temp_6_4;
  wire       [20:0]   _zz_Yi_temp_6_5;
  wire       [16:0]   _zz_when_SinTest_l82_6;
  wire       [21:0]   _zz_Xi_temp_7;
  wire       [21:0]   _zz_Xi_temp_7_1;
  wire       [21:0]   _zz_Xi_temp_7_2;
  wire       [21:0]   _zz_Yi_temp_7;
  wire       [21:0]   _zz_Yi_temp_7_1;
  wire       [21:0]   _zz_Yi_temp_7_2;
  wire       [21:0]   _zz_Xi_temp_7_3;
  wire       [21:0]   _zz_Xi_temp_7_4;
  wire       [21:0]   _zz_Xi_temp_7_5;
  wire       [21:0]   _zz_Yi_temp_7_3;
  wire       [21:0]   _zz_Yi_temp_7_4;
  wire       [21:0]   _zz_Yi_temp_7_5;
  wire       [16:0]   _zz_when_SinTest_l82_7;
  wire       [22:0]   _zz_Xi_temp_8;
  wire       [22:0]   _zz_Xi_temp_8_1;
  wire       [22:0]   _zz_Xi_temp_8_2;
  wire       [22:0]   _zz_Yi_temp_8;
  wire       [22:0]   _zz_Yi_temp_8_1;
  wire       [22:0]   _zz_Yi_temp_8_2;
  wire       [22:0]   _zz_Xi_temp_8_3;
  wire       [22:0]   _zz_Xi_temp_8_4;
  wire       [22:0]   _zz_Xi_temp_8_5;
  wire       [22:0]   _zz_Yi_temp_8_3;
  wire       [22:0]   _zz_Yi_temp_8_4;
  wire       [22:0]   _zz_Yi_temp_8_5;
  wire       [16:0]   _zz_when_SinTest_l82_8;
  wire       [23:0]   _zz_Xi_temp_9;
  wire       [23:0]   _zz_Xi_temp_9_1;
  wire       [23:0]   _zz_Xi_temp_9_2;
  wire       [23:0]   _zz_Yi_temp_9;
  wire       [23:0]   _zz_Yi_temp_9_1;
  wire       [23:0]   _zz_Yi_temp_9_2;
  wire       [23:0]   _zz_Xi_temp_9_3;
  wire       [23:0]   _zz_Xi_temp_9_4;
  wire       [23:0]   _zz_Xi_temp_9_5;
  wire       [23:0]   _zz_Yi_temp_9_3;
  wire       [23:0]   _zz_Yi_temp_9_4;
  wire       [23:0]   _zz_Yi_temp_9_5;
  wire       [16:0]   _zz_when_SinTest_l82_9;
  wire       [24:0]   _zz_Xi_temp_10;
  wire       [24:0]   _zz_Xi_temp_10_1;
  wire       [24:0]   _zz_Xi_temp_10_2;
  wire       [24:0]   _zz_Yi_temp_10;
  wire       [24:0]   _zz_Yi_temp_10_1;
  wire       [24:0]   _zz_Yi_temp_10_2;
  wire       [24:0]   _zz_Xi_temp_10_3;
  wire       [24:0]   _zz_Xi_temp_10_4;
  wire       [24:0]   _zz_Xi_temp_10_5;
  wire       [24:0]   _zz_Yi_temp_10_3;
  wire       [24:0]   _zz_Yi_temp_10_4;
  wire       [24:0]   _zz_Yi_temp_10_5;
  wire       [16:0]   _zz_when_SinTest_l82_10;
  wire       [25:0]   _zz_Xi_temp_11;
  wire       [25:0]   _zz_Xi_temp_11_1;
  wire       [25:0]   _zz_Xi_temp_11_2;
  wire       [25:0]   _zz_Yi_temp_11;
  wire       [25:0]   _zz_Yi_temp_11_1;
  wire       [25:0]   _zz_Yi_temp_11_2;
  wire       [25:0]   _zz_Xi_temp_11_3;
  wire       [25:0]   _zz_Xi_temp_11_4;
  wire       [25:0]   _zz_Xi_temp_11_5;
  wire       [25:0]   _zz_Yi_temp_11_3;
  wire       [25:0]   _zz_Yi_temp_11_4;
  wire       [25:0]   _zz_Yi_temp_11_5;
  wire       [16:0]   _zz_when_SinTest_l82_11;
  wire       [26:0]   _zz_Xi_temp_12;
  wire       [26:0]   _zz_Xi_temp_12_1;
  wire       [26:0]   _zz_Xi_temp_12_2;
  wire       [26:0]   _zz_Yi_temp_12;
  wire       [26:0]   _zz_Yi_temp_12_1;
  wire       [26:0]   _zz_Yi_temp_12_2;
  wire       [26:0]   _zz_Xi_temp_12_3;
  wire       [26:0]   _zz_Xi_temp_12_4;
  wire       [26:0]   _zz_Xi_temp_12_5;
  wire       [26:0]   _zz_Yi_temp_12_3;
  wire       [26:0]   _zz_Yi_temp_12_4;
  wire       [26:0]   _zz_Yi_temp_12_5;
  wire       [16:0]   _zz_when_SinTest_l82_12;
  wire       [27:0]   _zz_Xi_temp_13;
  wire       [27:0]   _zz_Xi_temp_13_1;
  wire       [27:0]   _zz_Xi_temp_13_2;
  wire       [27:0]   _zz_Yi_temp_13;
  wire       [27:0]   _zz_Yi_temp_13_1;
  wire       [27:0]   _zz_Yi_temp_13_2;
  wire       [27:0]   _zz_Xi_temp_13_3;
  wire       [27:0]   _zz_Xi_temp_13_4;
  wire       [27:0]   _zz_Xi_temp_13_5;
  wire       [27:0]   _zz_Yi_temp_13_3;
  wire       [27:0]   _zz_Yi_temp_13_4;
  wire       [27:0]   _zz_Yi_temp_13_5;
  wire       [16:0]   _zz_when_SinTest_l82_13;
  wire       [28:0]   _zz_Xi_temp_14;
  wire       [28:0]   _zz_Xi_temp_14_1;
  wire       [28:0]   _zz_Xi_temp_14_2;
  wire       [28:0]   _zz_Yi_temp_14;
  wire       [28:0]   _zz_Yi_temp_14_1;
  wire       [28:0]   _zz_Yi_temp_14_2;
  wire       [28:0]   _zz_Xi_temp_14_3;
  wire       [28:0]   _zz_Xi_temp_14_4;
  wire       [28:0]   _zz_Xi_temp_14_5;
  wire       [28:0]   _zz_Yi_temp_14_3;
  wire       [28:0]   _zz_Yi_temp_14_4;
  wire       [28:0]   _zz_Yi_temp_14_5;
  reg        [15:0]   Xi_temp_0;
  reg        [15:0]   Xi_temp_1;
  reg        [15:0]   Xi_temp_2;
  reg        [15:0]   Xi_temp_3;
  reg        [15:0]   Xi_temp_4;
  reg        [15:0]   Xi_temp_5;
  reg        [15:0]   Xi_temp_6;
  reg        [15:0]   Xi_temp_7;
  reg        [15:0]   Xi_temp_8;
  reg        [15:0]   Xi_temp_9;
  reg        [15:0]   Xi_temp_10;
  reg        [15:0]   Xi_temp_11;
  reg        [15:0]   Xi_temp_12;
  reg        [15:0]   Xi_temp_13;
  reg        [15:0]   Xi_temp_14;
  reg        [15:0]   Yi_temp_0;
  reg        [15:0]   Yi_temp_1;
  reg        [15:0]   Yi_temp_2;
  reg        [15:0]   Yi_temp_3;
  reg        [15:0]   Yi_temp_4;
  reg        [15:0]   Yi_temp_5;
  reg        [15:0]   Yi_temp_6;
  reg        [15:0]   Yi_temp_7;
  reg        [15:0]   Yi_temp_8;
  reg        [15:0]   Yi_temp_9;
  reg        [15:0]   Yi_temp_10;
  reg        [15:0]   Yi_temp_11;
  reg        [15:0]   Yi_temp_12;
  reg        [15:0]   Yi_temp_13;
  reg        [15:0]   Yi_temp_14;
  reg        [16:0]   Zi_temp_0;
  reg        [16:0]   Zi_temp_1;
  reg        [16:0]   Zi_temp_2;
  reg        [16:0]   Zi_temp_3;
  reg        [16:0]   Zi_temp_4;
  reg        [16:0]   Zi_temp_5;
  reg        [16:0]   Zi_temp_6;
  reg        [16:0]   Zi_temp_7;
  reg        [16:0]   Zi_temp_8;
  reg        [16:0]   Zi_temp_9;
  reg        [16:0]   Zi_temp_10;
  reg        [16:0]   Zi_temp_11;
  reg        [16:0]   Zi_temp_12;
  reg        [16:0]   Zi_temp_13;
  reg        [16:0]   Zi_temp_14;
  reg        [1:0]    flag_temp_0;
  reg        [1:0]    flag_temp_1;
  reg        [1:0]    flag_temp_2;
  reg        [1:0]    flag_temp_3;
  reg        [1:0]    flag_temp_4;
  reg        [1:0]    flag_temp_5;
  reg        [1:0]    flag_temp_6;
  reg        [1:0]    flag_temp_7;
  reg        [1:0]    flag_temp_8;
  reg        [1:0]    flag_temp_9;
  reg        [1:0]    flag_temp_10;
  reg        [1:0]    flag_temp_11;
  reg        [1:0]    flag_temp_12;
  reg        [1:0]    flag_temp_13;
  reg        [1:0]    flag_temp_14;
  wire       [16:0]   myarctan_0;
  wire       [16:0]   myarctan_1;
  wire       [16:0]   myarctan_2;
  wire       [16:0]   myarctan_3;
  wire       [16:0]   myarctan_4;
  wire       [16:0]   myarctan_5;
  wire       [16:0]   myarctan_6;
  wire       [16:0]   myarctan_7;
  wire       [16:0]   myarctan_8;
  wire       [16:0]   myarctan_9;
  wire       [16:0]   myarctan_10;
  wire       [16:0]   myarctan_11;
  wire       [16:0]   myarctan_12;
  wire       [16:0]   myarctan_13;
  wire       [16:0]   myarctan_14;
  wire                when_SinTest_l82;
  wire                when_SinTest_l82_1;
  wire                when_SinTest_l82_2;
  wire                when_SinTest_l82_3;
  wire                when_SinTest_l82_4;
  wire                when_SinTest_l82_5;
  wire                when_SinTest_l82_6;
  wire                when_SinTest_l82_7;
  wire                when_SinTest_l82_8;
  wire                when_SinTest_l82_9;
  wire                when_SinTest_l82_10;
  wire                when_SinTest_l82_11;
  wire                when_SinTest_l82_12;
  wire                when_SinTest_l82_13;

  assign _zz_when_SinTest_l82 = 17'h0;
  assign _zz_when_SinTest_l82_1 = 17'h0;
  assign _zz_Xi_temp_2 = ($signed(_zz_Xi_temp_2_1) - $signed(_zz_Xi_temp_2_2));
  assign _zz_Xi_temp_2_1 = ({1'd0,Xi_temp_1} <<< 1);
  assign _zz_Xi_temp_2_2 = {{1{Yi_temp_1[15]}}, Yi_temp_1};
  assign _zz_Yi_temp_2 = ($signed(_zz_Yi_temp_2_1) + $signed(_zz_Yi_temp_2_2));
  assign _zz_Yi_temp_2_1 = ({1'd0,Yi_temp_1} <<< 1);
  assign _zz_Yi_temp_2_2 = {{1{Xi_temp_1[15]}}, Xi_temp_1};
  assign _zz_Xi_temp_2_3 = ($signed(_zz_Xi_temp_2_4) + $signed(_zz_Xi_temp_2_5));
  assign _zz_Xi_temp_2_4 = ({1'd0,Xi_temp_1} <<< 1);
  assign _zz_Xi_temp_2_5 = {{1{Yi_temp_1[15]}}, Yi_temp_1};
  assign _zz_Yi_temp_2_3 = ($signed(_zz_Yi_temp_2_4) - $signed(_zz_Yi_temp_2_5));
  assign _zz_Yi_temp_2_4 = ({1'd0,Yi_temp_1} <<< 1);
  assign _zz_Yi_temp_2_5 = {{1{Xi_temp_1[15]}}, Xi_temp_1};
  assign _zz_when_SinTest_l82_2 = 17'h0;
  assign _zz_Xi_temp_3 = ($signed(_zz_Xi_temp_3_1) - $signed(_zz_Xi_temp_3_2));
  assign _zz_Xi_temp_3_1 = ({2'd0,Xi_temp_2} <<< 2);
  assign _zz_Xi_temp_3_2 = {{2{Yi_temp_2[15]}}, Yi_temp_2};
  assign _zz_Yi_temp_3 = ($signed(_zz_Yi_temp_3_1) + $signed(_zz_Yi_temp_3_2));
  assign _zz_Yi_temp_3_1 = ({2'd0,Yi_temp_2} <<< 2);
  assign _zz_Yi_temp_3_2 = {{2{Xi_temp_2[15]}}, Xi_temp_2};
  assign _zz_Xi_temp_3_3 = ($signed(_zz_Xi_temp_3_4) + $signed(_zz_Xi_temp_3_5));
  assign _zz_Xi_temp_3_4 = ({2'd0,Xi_temp_2} <<< 2);
  assign _zz_Xi_temp_3_5 = {{2{Yi_temp_2[15]}}, Yi_temp_2};
  assign _zz_Yi_temp_3_3 = ($signed(_zz_Yi_temp_3_4) - $signed(_zz_Yi_temp_3_5));
  assign _zz_Yi_temp_3_4 = ({2'd0,Yi_temp_2} <<< 2);
  assign _zz_Yi_temp_3_5 = {{2{Xi_temp_2[15]}}, Xi_temp_2};
  assign _zz_when_SinTest_l82_3 = 17'h0;
  assign _zz_Xi_temp_4 = ($signed(_zz_Xi_temp_4_1) - $signed(_zz_Xi_temp_4_2));
  assign _zz_Xi_temp_4_1 = ({3'd0,Xi_temp_3} <<< 3);
  assign _zz_Xi_temp_4_2 = {{3{Yi_temp_3[15]}}, Yi_temp_3};
  assign _zz_Yi_temp_4 = ($signed(_zz_Yi_temp_4_1) + $signed(_zz_Yi_temp_4_2));
  assign _zz_Yi_temp_4_1 = ({3'd0,Yi_temp_3} <<< 3);
  assign _zz_Yi_temp_4_2 = {{3{Xi_temp_3[15]}}, Xi_temp_3};
  assign _zz_Xi_temp_4_3 = ($signed(_zz_Xi_temp_4_4) + $signed(_zz_Xi_temp_4_5));
  assign _zz_Xi_temp_4_4 = ({3'd0,Xi_temp_3} <<< 3);
  assign _zz_Xi_temp_4_5 = {{3{Yi_temp_3[15]}}, Yi_temp_3};
  assign _zz_Yi_temp_4_3 = ($signed(_zz_Yi_temp_4_4) - $signed(_zz_Yi_temp_4_5));
  assign _zz_Yi_temp_4_4 = ({3'd0,Yi_temp_3} <<< 3);
  assign _zz_Yi_temp_4_5 = {{3{Xi_temp_3[15]}}, Xi_temp_3};
  assign _zz_when_SinTest_l82_4 = 17'h0;
  assign _zz_Xi_temp_5 = ($signed(_zz_Xi_temp_5_1) - $signed(_zz_Xi_temp_5_2));
  assign _zz_Xi_temp_5_1 = ({4'd0,Xi_temp_4} <<< 4);
  assign _zz_Xi_temp_5_2 = {{4{Yi_temp_4[15]}}, Yi_temp_4};
  assign _zz_Yi_temp_5 = ($signed(_zz_Yi_temp_5_1) + $signed(_zz_Yi_temp_5_2));
  assign _zz_Yi_temp_5_1 = ({4'd0,Yi_temp_4} <<< 4);
  assign _zz_Yi_temp_5_2 = {{4{Xi_temp_4[15]}}, Xi_temp_4};
  assign _zz_Xi_temp_5_3 = ($signed(_zz_Xi_temp_5_4) + $signed(_zz_Xi_temp_5_5));
  assign _zz_Xi_temp_5_4 = ({4'd0,Xi_temp_4} <<< 4);
  assign _zz_Xi_temp_5_5 = {{4{Yi_temp_4[15]}}, Yi_temp_4};
  assign _zz_Yi_temp_5_3 = ($signed(_zz_Yi_temp_5_4) - $signed(_zz_Yi_temp_5_5));
  assign _zz_Yi_temp_5_4 = ({4'd0,Yi_temp_4} <<< 4);
  assign _zz_Yi_temp_5_5 = {{4{Xi_temp_4[15]}}, Xi_temp_4};
  assign _zz_when_SinTest_l82_5 = 17'h0;
  assign _zz_Xi_temp_6 = ($signed(_zz_Xi_temp_6_1) - $signed(_zz_Xi_temp_6_2));
  assign _zz_Xi_temp_6_1 = ({5'd0,Xi_temp_5} <<< 5);
  assign _zz_Xi_temp_6_2 = {{5{Yi_temp_5[15]}}, Yi_temp_5};
  assign _zz_Yi_temp_6 = ($signed(_zz_Yi_temp_6_1) + $signed(_zz_Yi_temp_6_2));
  assign _zz_Yi_temp_6_1 = ({5'd0,Yi_temp_5} <<< 5);
  assign _zz_Yi_temp_6_2 = {{5{Xi_temp_5[15]}}, Xi_temp_5};
  assign _zz_Xi_temp_6_3 = ($signed(_zz_Xi_temp_6_4) + $signed(_zz_Xi_temp_6_5));
  assign _zz_Xi_temp_6_4 = ({5'd0,Xi_temp_5} <<< 5);
  assign _zz_Xi_temp_6_5 = {{5{Yi_temp_5[15]}}, Yi_temp_5};
  assign _zz_Yi_temp_6_3 = ($signed(_zz_Yi_temp_6_4) - $signed(_zz_Yi_temp_6_5));
  assign _zz_Yi_temp_6_4 = ({5'd0,Yi_temp_5} <<< 5);
  assign _zz_Yi_temp_6_5 = {{5{Xi_temp_5[15]}}, Xi_temp_5};
  assign _zz_when_SinTest_l82_6 = 17'h0;
  assign _zz_Xi_temp_7 = ($signed(_zz_Xi_temp_7_1) - $signed(_zz_Xi_temp_7_2));
  assign _zz_Xi_temp_7_1 = ({6'd0,Xi_temp_6} <<< 6);
  assign _zz_Xi_temp_7_2 = {{6{Yi_temp_6[15]}}, Yi_temp_6};
  assign _zz_Yi_temp_7 = ($signed(_zz_Yi_temp_7_1) + $signed(_zz_Yi_temp_7_2));
  assign _zz_Yi_temp_7_1 = ({6'd0,Yi_temp_6} <<< 6);
  assign _zz_Yi_temp_7_2 = {{6{Xi_temp_6[15]}}, Xi_temp_6};
  assign _zz_Xi_temp_7_3 = ($signed(_zz_Xi_temp_7_4) + $signed(_zz_Xi_temp_7_5));
  assign _zz_Xi_temp_7_4 = ({6'd0,Xi_temp_6} <<< 6);
  assign _zz_Xi_temp_7_5 = {{6{Yi_temp_6[15]}}, Yi_temp_6};
  assign _zz_Yi_temp_7_3 = ($signed(_zz_Yi_temp_7_4) - $signed(_zz_Yi_temp_7_5));
  assign _zz_Yi_temp_7_4 = ({6'd0,Yi_temp_6} <<< 6);
  assign _zz_Yi_temp_7_5 = {{6{Xi_temp_6[15]}}, Xi_temp_6};
  assign _zz_when_SinTest_l82_7 = 17'h0;
  assign _zz_Xi_temp_8 = ($signed(_zz_Xi_temp_8_1) - $signed(_zz_Xi_temp_8_2));
  assign _zz_Xi_temp_8_1 = ({7'd0,Xi_temp_7} <<< 7);
  assign _zz_Xi_temp_8_2 = {{7{Yi_temp_7[15]}}, Yi_temp_7};
  assign _zz_Yi_temp_8 = ($signed(_zz_Yi_temp_8_1) + $signed(_zz_Yi_temp_8_2));
  assign _zz_Yi_temp_8_1 = ({7'd0,Yi_temp_7} <<< 7);
  assign _zz_Yi_temp_8_2 = {{7{Xi_temp_7[15]}}, Xi_temp_7};
  assign _zz_Xi_temp_8_3 = ($signed(_zz_Xi_temp_8_4) + $signed(_zz_Xi_temp_8_5));
  assign _zz_Xi_temp_8_4 = ({7'd0,Xi_temp_7} <<< 7);
  assign _zz_Xi_temp_8_5 = {{7{Yi_temp_7[15]}}, Yi_temp_7};
  assign _zz_Yi_temp_8_3 = ($signed(_zz_Yi_temp_8_4) - $signed(_zz_Yi_temp_8_5));
  assign _zz_Yi_temp_8_4 = ({7'd0,Yi_temp_7} <<< 7);
  assign _zz_Yi_temp_8_5 = {{7{Xi_temp_7[15]}}, Xi_temp_7};
  assign _zz_when_SinTest_l82_8 = 17'h0;
  assign _zz_Xi_temp_9 = ($signed(_zz_Xi_temp_9_1) - $signed(_zz_Xi_temp_9_2));
  assign _zz_Xi_temp_9_1 = ({8'd0,Xi_temp_8} <<< 8);
  assign _zz_Xi_temp_9_2 = {{8{Yi_temp_8[15]}}, Yi_temp_8};
  assign _zz_Yi_temp_9 = ($signed(_zz_Yi_temp_9_1) + $signed(_zz_Yi_temp_9_2));
  assign _zz_Yi_temp_9_1 = ({8'd0,Yi_temp_8} <<< 8);
  assign _zz_Yi_temp_9_2 = {{8{Xi_temp_8[15]}}, Xi_temp_8};
  assign _zz_Xi_temp_9_3 = ($signed(_zz_Xi_temp_9_4) + $signed(_zz_Xi_temp_9_5));
  assign _zz_Xi_temp_9_4 = ({8'd0,Xi_temp_8} <<< 8);
  assign _zz_Xi_temp_9_5 = {{8{Yi_temp_8[15]}}, Yi_temp_8};
  assign _zz_Yi_temp_9_3 = ($signed(_zz_Yi_temp_9_4) - $signed(_zz_Yi_temp_9_5));
  assign _zz_Yi_temp_9_4 = ({8'd0,Yi_temp_8} <<< 8);
  assign _zz_Yi_temp_9_5 = {{8{Xi_temp_8[15]}}, Xi_temp_8};
  assign _zz_when_SinTest_l82_9 = 17'h0;
  assign _zz_Xi_temp_10 = ($signed(_zz_Xi_temp_10_1) - $signed(_zz_Xi_temp_10_2));
  assign _zz_Xi_temp_10_1 = ({9'd0,Xi_temp_9} <<< 9);
  assign _zz_Xi_temp_10_2 = {{9{Yi_temp_9[15]}}, Yi_temp_9};
  assign _zz_Yi_temp_10 = ($signed(_zz_Yi_temp_10_1) + $signed(_zz_Yi_temp_10_2));
  assign _zz_Yi_temp_10_1 = ({9'd0,Yi_temp_9} <<< 9);
  assign _zz_Yi_temp_10_2 = {{9{Xi_temp_9[15]}}, Xi_temp_9};
  assign _zz_Xi_temp_10_3 = ($signed(_zz_Xi_temp_10_4) + $signed(_zz_Xi_temp_10_5));
  assign _zz_Xi_temp_10_4 = ({9'd0,Xi_temp_9} <<< 9);
  assign _zz_Xi_temp_10_5 = {{9{Yi_temp_9[15]}}, Yi_temp_9};
  assign _zz_Yi_temp_10_3 = ($signed(_zz_Yi_temp_10_4) - $signed(_zz_Yi_temp_10_5));
  assign _zz_Yi_temp_10_4 = ({9'd0,Yi_temp_9} <<< 9);
  assign _zz_Yi_temp_10_5 = {{9{Xi_temp_9[15]}}, Xi_temp_9};
  assign _zz_when_SinTest_l82_10 = 17'h0;
  assign _zz_Xi_temp_11 = ($signed(_zz_Xi_temp_11_1) - $signed(_zz_Xi_temp_11_2));
  assign _zz_Xi_temp_11_1 = ({10'd0,Xi_temp_10} <<< 10);
  assign _zz_Xi_temp_11_2 = {{10{Yi_temp_10[15]}}, Yi_temp_10};
  assign _zz_Yi_temp_11 = ($signed(_zz_Yi_temp_11_1) + $signed(_zz_Yi_temp_11_2));
  assign _zz_Yi_temp_11_1 = ({10'd0,Yi_temp_10} <<< 10);
  assign _zz_Yi_temp_11_2 = {{10{Xi_temp_10[15]}}, Xi_temp_10};
  assign _zz_Xi_temp_11_3 = ($signed(_zz_Xi_temp_11_4) + $signed(_zz_Xi_temp_11_5));
  assign _zz_Xi_temp_11_4 = ({10'd0,Xi_temp_10} <<< 10);
  assign _zz_Xi_temp_11_5 = {{10{Yi_temp_10[15]}}, Yi_temp_10};
  assign _zz_Yi_temp_11_3 = ($signed(_zz_Yi_temp_11_4) - $signed(_zz_Yi_temp_11_5));
  assign _zz_Yi_temp_11_4 = ({10'd0,Yi_temp_10} <<< 10);
  assign _zz_Yi_temp_11_5 = {{10{Xi_temp_10[15]}}, Xi_temp_10};
  assign _zz_when_SinTest_l82_11 = 17'h0;
  assign _zz_Xi_temp_12 = ($signed(_zz_Xi_temp_12_1) - $signed(_zz_Xi_temp_12_2));
  assign _zz_Xi_temp_12_1 = ({11'd0,Xi_temp_11} <<< 11);
  assign _zz_Xi_temp_12_2 = {{11{Yi_temp_11[15]}}, Yi_temp_11};
  assign _zz_Yi_temp_12 = ($signed(_zz_Yi_temp_12_1) + $signed(_zz_Yi_temp_12_2));
  assign _zz_Yi_temp_12_1 = ({11'd0,Yi_temp_11} <<< 11);
  assign _zz_Yi_temp_12_2 = {{11{Xi_temp_11[15]}}, Xi_temp_11};
  assign _zz_Xi_temp_12_3 = ($signed(_zz_Xi_temp_12_4) + $signed(_zz_Xi_temp_12_5));
  assign _zz_Xi_temp_12_4 = ({11'd0,Xi_temp_11} <<< 11);
  assign _zz_Xi_temp_12_5 = {{11{Yi_temp_11[15]}}, Yi_temp_11};
  assign _zz_Yi_temp_12_3 = ($signed(_zz_Yi_temp_12_4) - $signed(_zz_Yi_temp_12_5));
  assign _zz_Yi_temp_12_4 = ({11'd0,Yi_temp_11} <<< 11);
  assign _zz_Yi_temp_12_5 = {{11{Xi_temp_11[15]}}, Xi_temp_11};
  assign _zz_when_SinTest_l82_12 = 17'h0;
  assign _zz_Xi_temp_13 = ($signed(_zz_Xi_temp_13_1) - $signed(_zz_Xi_temp_13_2));
  assign _zz_Xi_temp_13_1 = ({12'd0,Xi_temp_12} <<< 12);
  assign _zz_Xi_temp_13_2 = {{12{Yi_temp_12[15]}}, Yi_temp_12};
  assign _zz_Yi_temp_13 = ($signed(_zz_Yi_temp_13_1) + $signed(_zz_Yi_temp_13_2));
  assign _zz_Yi_temp_13_1 = ({12'd0,Yi_temp_12} <<< 12);
  assign _zz_Yi_temp_13_2 = {{12{Xi_temp_12[15]}}, Xi_temp_12};
  assign _zz_Xi_temp_13_3 = ($signed(_zz_Xi_temp_13_4) + $signed(_zz_Xi_temp_13_5));
  assign _zz_Xi_temp_13_4 = ({12'd0,Xi_temp_12} <<< 12);
  assign _zz_Xi_temp_13_5 = {{12{Yi_temp_12[15]}}, Yi_temp_12};
  assign _zz_Yi_temp_13_3 = ($signed(_zz_Yi_temp_13_4) - $signed(_zz_Yi_temp_13_5));
  assign _zz_Yi_temp_13_4 = ({12'd0,Yi_temp_12} <<< 12);
  assign _zz_Yi_temp_13_5 = {{12{Xi_temp_12[15]}}, Xi_temp_12};
  assign _zz_when_SinTest_l82_13 = 17'h0;
  assign _zz_Xi_temp_14 = ($signed(_zz_Xi_temp_14_1) - $signed(_zz_Xi_temp_14_2));
  assign _zz_Xi_temp_14_1 = ({13'd0,Xi_temp_13} <<< 13);
  assign _zz_Xi_temp_14_2 = {{13{Yi_temp_13[15]}}, Yi_temp_13};
  assign _zz_Yi_temp_14 = ($signed(_zz_Yi_temp_14_1) + $signed(_zz_Yi_temp_14_2));
  assign _zz_Yi_temp_14_1 = ({13'd0,Yi_temp_13} <<< 13);
  assign _zz_Yi_temp_14_2 = {{13{Xi_temp_13[15]}}, Xi_temp_13};
  assign _zz_Xi_temp_14_3 = ($signed(_zz_Xi_temp_14_4) + $signed(_zz_Xi_temp_14_5));
  assign _zz_Xi_temp_14_4 = ({13'd0,Xi_temp_13} <<< 13);
  assign _zz_Xi_temp_14_5 = {{13{Yi_temp_13[15]}}, Yi_temp_13};
  assign _zz_Yi_temp_14_3 = ($signed(_zz_Yi_temp_14_4) - $signed(_zz_Yi_temp_14_5));
  assign _zz_Yi_temp_14_4 = ({13'd0,Yi_temp_13} <<< 13);
  assign _zz_Yi_temp_14_5 = {{13{Xi_temp_13[15]}}, Xi_temp_13};
  assign myarctan_0 = 17'h03243;
  assign myarctan_1 = 17'h01dac;
  assign myarctan_2 = 17'h00fad;
  assign myarctan_3 = 17'h007f5;
  assign myarctan_4 = 17'h003fe;
  assign myarctan_5 = 17'h001ff;
  assign myarctan_6 = 17'h000ff;
  assign myarctan_7 = 17'h0007f;
  assign myarctan_8 = 17'h0003f;
  assign myarctan_9 = 17'h0001f;
  assign myarctan_10 = 17'h0000f;
  assign myarctan_11 = 17'h00008;
  assign myarctan_12 = 17'h00003;
  assign myarctan_13 = 17'h00002;
  assign myarctan_14 = 17'h0;
  assign when_SinTest_l82 = ($signed(_zz_when_SinTest_l82) <= $signed(Zi_temp_0));
  assign when_SinTest_l82_1 = ($signed(_zz_when_SinTest_l82_1) <= $signed(Zi_temp_1));
  assign when_SinTest_l82_2 = ($signed(_zz_when_SinTest_l82_2) <= $signed(Zi_temp_2));
  assign when_SinTest_l82_3 = ($signed(_zz_when_SinTest_l82_3) <= $signed(Zi_temp_3));
  assign when_SinTest_l82_4 = ($signed(_zz_when_SinTest_l82_4) <= $signed(Zi_temp_4));
  assign when_SinTest_l82_5 = ($signed(_zz_when_SinTest_l82_5) <= $signed(Zi_temp_5));
  assign when_SinTest_l82_6 = ($signed(_zz_when_SinTest_l82_6) <= $signed(Zi_temp_6));
  assign when_SinTest_l82_7 = ($signed(_zz_when_SinTest_l82_7) <= $signed(Zi_temp_7));
  assign when_SinTest_l82_8 = ($signed(_zz_when_SinTest_l82_8) <= $signed(Zi_temp_8));
  assign when_SinTest_l82_9 = ($signed(_zz_when_SinTest_l82_9) <= $signed(Zi_temp_9));
  assign when_SinTest_l82_10 = ($signed(_zz_when_SinTest_l82_10) <= $signed(Zi_temp_10));
  assign when_SinTest_l82_11 = ($signed(_zz_when_SinTest_l82_11) <= $signed(Zi_temp_11));
  assign when_SinTest_l82_12 = ($signed(_zz_when_SinTest_l82_12) <= $signed(Zi_temp_12));
  assign when_SinTest_l82_13 = ($signed(_zz_when_SinTest_l82_13) <= $signed(Zi_temp_13));
  assign my_sin = Yi_temp_14;
  assign my_cos = Xi_temp_14;
  assign flag_out = flag_temp_14;
  always @(posedge clk) begin
    Xi_temp_0 <= 16'h26dd;
    Yi_temp_0 <= 16'h0;
    Zi_temp_0 <= alpha_in;
    flag_temp_0 <= flag_in;
    if(when_SinTest_l82) begin
      Xi_temp_1 <= ($signed(Xi_temp_0) - $signed(Yi_temp_0));
      Yi_temp_1 <= ($signed(Yi_temp_0) + $signed(Xi_temp_0));
      Zi_temp_1 <= ($signed(Zi_temp_0) - $signed(myarctan_0));
    end else begin
      Xi_temp_1 <= ($signed(Xi_temp_0) + $signed(Yi_temp_0));
      Yi_temp_1 <= ($signed(Yi_temp_0) - $signed(Xi_temp_0));
      Zi_temp_1 <= ($signed(Zi_temp_0) + $signed(myarctan_0));
    end
    flag_temp_1 <= flag_temp_0;
    if(when_SinTest_l82_1) begin
      Xi_temp_2 <= (_zz_Xi_temp_2 >>> 1);
      Yi_temp_2 <= (_zz_Yi_temp_2 >>> 1);
      Zi_temp_2 <= ($signed(Zi_temp_1) - $signed(myarctan_1));
    end else begin
      Xi_temp_2 <= (_zz_Xi_temp_2_3 >>> 1);
      Yi_temp_2 <= (_zz_Yi_temp_2_3 >>> 1);
      Zi_temp_2 <= ($signed(Zi_temp_1) + $signed(myarctan_1));
    end
    flag_temp_2 <= flag_temp_1;
    if(when_SinTest_l82_2) begin
      Xi_temp_3 <= (_zz_Xi_temp_3 >>> 2);
      Yi_temp_3 <= (_zz_Yi_temp_3 >>> 2);
      Zi_temp_3 <= ($signed(Zi_temp_2) - $signed(myarctan_2));
    end else begin
      Xi_temp_3 <= (_zz_Xi_temp_3_3 >>> 2);
      Yi_temp_3 <= (_zz_Yi_temp_3_3 >>> 2);
      Zi_temp_3 <= ($signed(Zi_temp_2) + $signed(myarctan_2));
    end
    flag_temp_3 <= flag_temp_2;
    if(when_SinTest_l82_3) begin
      Xi_temp_4 <= (_zz_Xi_temp_4 >>> 3);
      Yi_temp_4 <= (_zz_Yi_temp_4 >>> 3);
      Zi_temp_4 <= ($signed(Zi_temp_3) - $signed(myarctan_3));
    end else begin
      Xi_temp_4 <= (_zz_Xi_temp_4_3 >>> 3);
      Yi_temp_4 <= (_zz_Yi_temp_4_3 >>> 3);
      Zi_temp_4 <= ($signed(Zi_temp_3) + $signed(myarctan_3));
    end
    flag_temp_4 <= flag_temp_3;
    if(when_SinTest_l82_4) begin
      Xi_temp_5 <= (_zz_Xi_temp_5 >>> 4);
      Yi_temp_5 <= (_zz_Yi_temp_5 >>> 4);
      Zi_temp_5 <= ($signed(Zi_temp_4) - $signed(myarctan_4));
    end else begin
      Xi_temp_5 <= (_zz_Xi_temp_5_3 >>> 4);
      Yi_temp_5 <= (_zz_Yi_temp_5_3 >>> 4);
      Zi_temp_5 <= ($signed(Zi_temp_4) + $signed(myarctan_4));
    end
    flag_temp_5 <= flag_temp_4;
    if(when_SinTest_l82_5) begin
      Xi_temp_6 <= (_zz_Xi_temp_6 >>> 5);
      Yi_temp_6 <= (_zz_Yi_temp_6 >>> 5);
      Zi_temp_6 <= ($signed(Zi_temp_5) - $signed(myarctan_5));
    end else begin
      Xi_temp_6 <= (_zz_Xi_temp_6_3 >>> 5);
      Yi_temp_6 <= (_zz_Yi_temp_6_3 >>> 5);
      Zi_temp_6 <= ($signed(Zi_temp_5) + $signed(myarctan_5));
    end
    flag_temp_6 <= flag_temp_5;
    if(when_SinTest_l82_6) begin
      Xi_temp_7 <= (_zz_Xi_temp_7 >>> 6);
      Yi_temp_7 <= (_zz_Yi_temp_7 >>> 6);
      Zi_temp_7 <= ($signed(Zi_temp_6) - $signed(myarctan_6));
    end else begin
      Xi_temp_7 <= (_zz_Xi_temp_7_3 >>> 6);
      Yi_temp_7 <= (_zz_Yi_temp_7_3 >>> 6);
      Zi_temp_7 <= ($signed(Zi_temp_6) + $signed(myarctan_6));
    end
    flag_temp_7 <= flag_temp_6;
    if(when_SinTest_l82_7) begin
      Xi_temp_8 <= (_zz_Xi_temp_8 >>> 7);
      Yi_temp_8 <= (_zz_Yi_temp_8 >>> 7);
      Zi_temp_8 <= ($signed(Zi_temp_7) - $signed(myarctan_7));
    end else begin
      Xi_temp_8 <= (_zz_Xi_temp_8_3 >>> 7);
      Yi_temp_8 <= (_zz_Yi_temp_8_3 >>> 7);
      Zi_temp_8 <= ($signed(Zi_temp_7) + $signed(myarctan_7));
    end
    flag_temp_8 <= flag_temp_7;
    if(when_SinTest_l82_8) begin
      Xi_temp_9 <= (_zz_Xi_temp_9 >>> 8);
      Yi_temp_9 <= (_zz_Yi_temp_9 >>> 8);
      Zi_temp_9 <= ($signed(Zi_temp_8) - $signed(myarctan_8));
    end else begin
      Xi_temp_9 <= (_zz_Xi_temp_9_3 >>> 8);
      Yi_temp_9 <= (_zz_Yi_temp_9_3 >>> 8);
      Zi_temp_9 <= ($signed(Zi_temp_8) + $signed(myarctan_8));
    end
    flag_temp_9 <= flag_temp_8;
    if(when_SinTest_l82_9) begin
      Xi_temp_10 <= (_zz_Xi_temp_10 >>> 9);
      Yi_temp_10 <= (_zz_Yi_temp_10 >>> 9);
      Zi_temp_10 <= ($signed(Zi_temp_9) - $signed(myarctan_9));
    end else begin
      Xi_temp_10 <= (_zz_Xi_temp_10_3 >>> 9);
      Yi_temp_10 <= (_zz_Yi_temp_10_3 >>> 9);
      Zi_temp_10 <= ($signed(Zi_temp_9) + $signed(myarctan_9));
    end
    flag_temp_10 <= flag_temp_9;
    if(when_SinTest_l82_10) begin
      Xi_temp_11 <= (_zz_Xi_temp_11 >>> 10);
      Yi_temp_11 <= (_zz_Yi_temp_11 >>> 10);
      Zi_temp_11 <= ($signed(Zi_temp_10) - $signed(myarctan_10));
    end else begin
      Xi_temp_11 <= (_zz_Xi_temp_11_3 >>> 10);
      Yi_temp_11 <= (_zz_Yi_temp_11_3 >>> 10);
      Zi_temp_11 <= ($signed(Zi_temp_10) + $signed(myarctan_10));
    end
    flag_temp_11 <= flag_temp_10;
    if(when_SinTest_l82_11) begin
      Xi_temp_12 <= (_zz_Xi_temp_12 >>> 11);
      Yi_temp_12 <= (_zz_Yi_temp_12 >>> 11);
      Zi_temp_12 <= ($signed(Zi_temp_11) - $signed(myarctan_11));
    end else begin
      Xi_temp_12 <= (_zz_Xi_temp_12_3 >>> 11);
      Yi_temp_12 <= (_zz_Yi_temp_12_3 >>> 11);
      Zi_temp_12 <= ($signed(Zi_temp_11) + $signed(myarctan_11));
    end
    flag_temp_12 <= flag_temp_11;
    if(when_SinTest_l82_12) begin
      Xi_temp_13 <= (_zz_Xi_temp_13 >>> 12);
      Yi_temp_13 <= (_zz_Yi_temp_13 >>> 12);
      Zi_temp_13 <= ($signed(Zi_temp_12) - $signed(myarctan_12));
    end else begin
      Xi_temp_13 <= (_zz_Xi_temp_13_3 >>> 12);
      Yi_temp_13 <= (_zz_Yi_temp_13_3 >>> 12);
      Zi_temp_13 <= ($signed(Zi_temp_12) + $signed(myarctan_12));
    end
    flag_temp_13 <= flag_temp_12;
    if(when_SinTest_l82_13) begin
      Xi_temp_14 <= (_zz_Xi_temp_14 >>> 13);
      Yi_temp_14 <= (_zz_Yi_temp_14 >>> 13);
      Zi_temp_14 <= ($signed(Zi_temp_13) - $signed(myarctan_13));
    end else begin
      Xi_temp_14 <= (_zz_Xi_temp_14_3 >>> 13);
      Yi_temp_14 <= (_zz_Yi_temp_14_3 >>> 13);
      Zi_temp_14 <= ($signed(Zi_temp_13) + $signed(myarctan_13));
    end
    flag_temp_14 <= flag_temp_13;
  end


endmodule

module pre_cir_cordic (
  input      [16:0]   data_in,
  output     [16:0]   alpha,
  output     [1:0]    flag,
  input               clk,
  input               reset
);
  wire       [16:0]   _zz_when_SinTest_l33;
  reg        [16:0]   compare_data;
  reg        [16:0]   zero;
  reg        [16:0]   input_data;
  reg        [16:0]   temp;
  reg        [16:0]   Pi_data;
  reg        [16:0]   NgPi_data;
  reg        [1:0]    flag_temp;
  wire                when_SinTest_l30;
  wire                when_SinTest_l33;

  assign _zz_when_SinTest_l33 = ($signed(zero) - $signed(compare_data));
  assign when_SinTest_l30 = ($signed(compare_data) < $signed(input_data));
  assign when_SinTest_l33 = ($signed(input_data) < $signed(_zz_when_SinTest_l33));
  assign alpha = temp;
  assign flag = flag_temp;
  always @(posedge clk) begin
    compare_data <= 17'h06487;
    zero <= 17'h0;
    input_data <= data_in;
    Pi_data <= 17'h0c90f;
    NgPi_data <= 17'h136f1;
    if(when_SinTest_l30) begin
      temp <= ($signed(Pi_data) - $signed(input_data));
      flag_temp <= 2'b10;
    end else begin
      if(when_SinTest_l33) begin
        temp <= ($signed(NgPi_data) - $signed(input_data));
        flag_temp <= 2'b11;
      end else begin
        temp <= input_data;
        flag_temp <= 2'b00;
      end
    end
  end


endmodule
