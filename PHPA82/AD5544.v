// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : AD5544



module AD5544 (
  input      [3:0]    apb_PADDR,
  input      [0:0]    apb_PSEL,
  input               apb_PENABLE,
  output              apb_PREADY,
  input               apb_PWRITE,
  input      [15:0]   apb_PWDATA,
  output reg [15:0]   apb_PRDATA,
  output              apb_PSLVERROR,
  output              ad5544Interface_AD5544_CS,
  output              ad5544Interface_AD5544_LDAC,
  output              ad5544Interface_AD5544_MSB,
  output              ad5544Interface_AD5544_RS,
  output              ad5544Interface_AD5544_SCLK,
  output              ad5544Interface_AD5544_SDIN,
  input               clk,
  input               reset,
  input               ad5544_enable
);
  wire                area_ad5544_ctrl_AD5544_CS;
  wire                area_ad5544_ctrl_AD5544_LDAC;
  wire                area_ad5544_ctrl_AD5544_MSB;
  wire                area_ad5544_ctrl_AD5544_RS;
  wire                area_ad5544_ctrl_AD5544_SCLK;
  wire                area_ad5544_ctrl_AD5544_SDIN;
  wire                area_ctrl_askWrite;
  wire                area_ctrl_askRead;
  wire                area_ctrl_doWrite;
  wire                area_ctrl_doRead;
  reg        [15:0]   area_ad5544_ctrl_AD5544_DATA_IN1_driver;
  reg        [15:0]   area_ad5544_ctrl_AD5544_DATA_IN2_driver;
  reg        [15:0]   area_ad5544_ctrl_AD5544_DATA_IN3_driver;
  reg        [15:0]   area_ad5544_ctrl_AD5544_DATA_IN4_driver;

  dac_ad5544 area_ad5544_ctrl (
    .clk                (clk                                      ), //i
    .reset              (reset                                    ), //i
    .AD5544_CS          (area_ad5544_ctrl_AD5544_CS               ), //o
    .AD5544_LDAC        (area_ad5544_ctrl_AD5544_LDAC             ), //o
    .AD5544_MSB         (area_ad5544_ctrl_AD5544_MSB              ), //o
    .AD5544_RS          (area_ad5544_ctrl_AD5544_RS               ), //o
    .AD5544_SCLK        (area_ad5544_ctrl_AD5544_SCLK             ), //o
    .AD5544_SDIN        (area_ad5544_ctrl_AD5544_SDIN             ), //o
    .ad5544_trig        (ad5544_enable                            ), //i
    .AD5544_DATA_IN1    (area_ad5544_ctrl_AD5544_DATA_IN1_driver  ), //i
    .AD5544_DATA_IN2    (area_ad5544_ctrl_AD5544_DATA_IN2_driver  ), //i
    .AD5544_DATA_IN3    (area_ad5544_ctrl_AD5544_DATA_IN3_driver  ), //i
    .AD5544_DATA_IN4    (area_ad5544_ctrl_AD5544_DATA_IN4_driver  )  //i
  );
  assign ad5544Interface_AD5544_CS = area_ad5544_ctrl_AD5544_CS;
  assign ad5544Interface_AD5544_RS = area_ad5544_ctrl_AD5544_RS;
  assign ad5544Interface_AD5544_MSB = area_ad5544_ctrl_AD5544_MSB;
  assign ad5544Interface_AD5544_LDAC = area_ad5544_ctrl_AD5544_LDAC;
  assign ad5544Interface_AD5544_SCLK = area_ad5544_ctrl_AD5544_SCLK;
  assign ad5544Interface_AD5544_SDIN = area_ad5544_ctrl_AD5544_SDIN;
  assign apb_PREADY = 1'b1;
  always @(*) begin
    apb_PRDATA = 16'h0;
    case(apb_PADDR)
      4'b0000 : begin
        apb_PRDATA[15 : 0] = area_ad5544_ctrl_AD5544_DATA_IN1_driver;
      end
      4'b0001 : begin
        apb_PRDATA[15 : 0] = area_ad5544_ctrl_AD5544_DATA_IN2_driver;
      end
      4'b0010 : begin
        apb_PRDATA[15 : 0] = area_ad5544_ctrl_AD5544_DATA_IN3_driver;
      end
      4'b0011 : begin
        apb_PRDATA[15 : 0] = area_ad5544_ctrl_AD5544_DATA_IN4_driver;
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
  always @(posedge clk) begin
    case(apb_PADDR)
      4'b0000 : begin
        if(area_ctrl_doWrite) begin
          area_ad5544_ctrl_AD5544_DATA_IN1_driver <= apb_PWDATA[15 : 0];
        end
      end
      4'b0001 : begin
        if(area_ctrl_doWrite) begin
          area_ad5544_ctrl_AD5544_DATA_IN2_driver <= apb_PWDATA[15 : 0];
        end
      end
      4'b0010 : begin
        if(area_ctrl_doWrite) begin
          area_ad5544_ctrl_AD5544_DATA_IN3_driver <= apb_PWDATA[15 : 0];
        end
      end
      4'b0011 : begin
        if(area_ctrl_doWrite) begin
          area_ad5544_ctrl_AD5544_DATA_IN4_driver <= apb_PWDATA[15 : 0];
        end
      end
      default : begin
      end
    endcase
  end


endmodule
