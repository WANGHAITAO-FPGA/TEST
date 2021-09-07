// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : AD7606



module AD7606 (
  input      [3:0]    apb_PADDR,
  input      [0:0]    apb_PSEL,
  input               apb_PENABLE,
  output              apb_PREADY,
  input               apb_PWRITE,
  input      [15:0]   apb_PWDATA,
  output reg [15:0]   apb_PRDATA,
  output              apb_PSLVERROR,
  input      [15:0]   ad7606Interface_ad_data,
  input               ad7606Interface_ad_busy,
  input               ad7606Interface_first_data,
  output     [1:0]    ad7606Interface_ad_os,
  output              ad7606Interface_ad_cs,
  output              ad7606Interface_ad_rd,
  output              ad7606Interface_ad_reset,
  output              ad7606Interface_ad_convsta,
  output              ad7606Interface_ad_convstb,
  output              ad7606Interface_ad_range,
  input               clk,
  input               reset
);
  wire       [1:0]    area_ad7606_ctrl_ad_os;
  wire                area_ad7606_ctrl_ad_cs;
  wire                area_ad7606_ctrl_ad_rd;
  wire                area_ad7606_ctrl_ad_reset;
  wire                area_ad7606_ctrl_ad_convsta;
  wire                area_ad7606_ctrl_ad_convstb;
  wire                area_ad7606_ctrl_ad_range;
  wire       [15:0]   area_ad7606_ctrl_ad_ch1_o;
  wire       [15:0]   area_ad7606_ctrl_ad_ch2_o;
  wire       [15:0]   area_ad7606_ctrl_ad_ch3_o;
  wire       [15:0]   area_ad7606_ctrl_ad_ch4_o;
  wire       [15:0]   area_ad7606_ctrl_ad_ch5_o;
  wire       [15:0]   area_ad7606_ctrl_ad_ch6_o;
  wire       [15:0]   area_ad7606_ctrl_ad_ch7_o;
  wire       [15:0]   area_ad7606_ctrl_ad_ch8_o;
  wire                area_ad7606_ctrl_ad_data_valid_o;
  reg        [15:0]   area_data_temp_1;
  reg        [15:0]   area_data_temp_2;
  reg        [15:0]   area_data_temp_3;
  reg        [15:0]   area_data_temp_4;
  reg        [15:0]   area_data_temp_5;
  reg        [15:0]   area_data_temp_6;
  reg        [15:0]   area_data_temp_7;
  reg        [15:0]   area_data_temp_8;
  wire                area_ctrl_askWrite;
  wire                area_ctrl_askRead;
  wire                area_ctrl_doWrite;
  wire                area_ctrl_doRead;

  AD7606_DATA area_ad7606_ctrl (
    .clk                (clk                               ), //i
    .reset              (reset                             ), //i
    .sample_en          (1'b1                              ), //i
    .ad_data            (ad7606Interface_ad_data           ), //i
    .ad_busy            (ad7606Interface_ad_busy           ), //i
    .first_data         (ad7606Interface_first_data        ), //i
    .ad_os              (area_ad7606_ctrl_ad_os            ), //o
    .ad_cs              (area_ad7606_ctrl_ad_cs            ), //o
    .ad_rd              (area_ad7606_ctrl_ad_rd            ), //o
    .ad_reset           (area_ad7606_ctrl_ad_reset         ), //o
    .ad_convsta         (area_ad7606_ctrl_ad_convsta       ), //o
    .ad_convstb         (area_ad7606_ctrl_ad_convstb       ), //o
    .ad_range           (area_ad7606_ctrl_ad_range         ), //o
    .ad_ch1_o           (area_ad7606_ctrl_ad_ch1_o         ), //o
    .ad_ch2_o           (area_ad7606_ctrl_ad_ch2_o         ), //o
    .ad_ch3_o           (area_ad7606_ctrl_ad_ch3_o         ), //o
    .ad_ch4_o           (area_ad7606_ctrl_ad_ch4_o         ), //o
    .ad_ch5_o           (area_ad7606_ctrl_ad_ch5_o         ), //o
    .ad_ch6_o           (area_ad7606_ctrl_ad_ch6_o         ), //o
    .ad_ch7_o           (area_ad7606_ctrl_ad_ch7_o         ), //o
    .ad_ch8_o           (area_ad7606_ctrl_ad_ch8_o         ), //o
    .ad_data_valid_o    (area_ad7606_ctrl_ad_data_valid_o  )  //o
  );
  assign ad7606Interface_ad_os = area_ad7606_ctrl_ad_os;
  assign ad7606Interface_ad_cs = area_ad7606_ctrl_ad_cs;
  assign ad7606Interface_ad_rd = area_ad7606_ctrl_ad_rd;
  assign ad7606Interface_ad_convsta = area_ad7606_ctrl_ad_convsta;
  assign ad7606Interface_ad_convstb = area_ad7606_ctrl_ad_convstb;
  assign ad7606Interface_ad_reset = area_ad7606_ctrl_ad_reset;
  assign ad7606Interface_ad_range = area_ad7606_ctrl_ad_range;
  assign apb_PREADY = 1'b1;
  always @(*) begin
    apb_PRDATA = 16'h0;
    case(apb_PADDR)
      4'b0000 : begin
        apb_PRDATA[15 : 0] = area_data_temp_1;
      end
      4'b0010 : begin
        apb_PRDATA[15 : 0] = area_data_temp_2;
      end
      4'b0100 : begin
        apb_PRDATA[15 : 0] = area_data_temp_3;
      end
      4'b0110 : begin
        apb_PRDATA[15 : 0] = area_data_temp_4;
      end
      4'b1000 : begin
        apb_PRDATA[15 : 0] = area_data_temp_5;
      end
      4'b1010 : begin
        apb_PRDATA[15 : 0] = area_data_temp_6;
      end
      4'b1100 : begin
        apb_PRDATA[15 : 0] = area_data_temp_7;
      end
      4'b1110 : begin
        apb_PRDATA[15 : 0] = area_data_temp_8;
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
      area_data_temp_1 <= 16'h0;
      area_data_temp_2 <= 16'h0;
      area_data_temp_3 <= 16'h0;
      area_data_temp_4 <= 16'h0;
      area_data_temp_5 <= 16'h0;
      area_data_temp_6 <= 16'h0;
      area_data_temp_7 <= 16'h0;
      area_data_temp_8 <= 16'h0;
    end else begin
      if(area_ad7606_ctrl_ad_data_valid_o) begin
        area_data_temp_1 <= area_ad7606_ctrl_ad_ch1_o;
        area_data_temp_2 <= area_ad7606_ctrl_ad_ch2_o;
        area_data_temp_3 <= area_ad7606_ctrl_ad_ch3_o;
        area_data_temp_4 <= area_ad7606_ctrl_ad_ch4_o;
        area_data_temp_5 <= area_ad7606_ctrl_ad_ch5_o;
        area_data_temp_6 <= area_ad7606_ctrl_ad_ch6_o;
        area_data_temp_7 <= area_ad7606_ctrl_ad_ch7_o;
        area_data_temp_8 <= area_ad7606_ctrl_ad_ch8_o;
      end
    end
  end


endmodule
