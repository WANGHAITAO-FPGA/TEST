// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : AuroraRxCore
// Git hash  : 29ba7b6d1d21bdf7c0f69bdad0472b51cd83b1a8


`define AuroraState_binary_sequential_type [2:0]
`define AuroraState_binary_sequential_IDLE 3'b000
`define AuroraState_binary_sequential_WAIT_1 3'b001
`define AuroraState_binary_sequential_START 3'b010
`define AuroraState_binary_sequential_DEVICEID 3'b011
`define AuroraState_binary_sequential_LENGTH 3'b100
`define AuroraState_binary_sequential_DATA 3'b101
`define AuroraState_binary_sequential_CRC 3'b110
`define AuroraState_binary_sequential_STOP 3'b111


module AuroraRxCore (
  input               axir_valid,
  output              axir_ready,
  input      [31:0]   axir_payload_data,
  input               axir_payload_last,
  output              bram_en,
  output     [3:0]    bram_we,
  output     [7:0]    bram_addr,
  output     [31:0]   bram_wrdata,
  input      [31:0]   bram_rddata,
  input               clk,
  input               reset
);
  wire       [7:0]    _zz_when_Gtx_Rx_l55;
  wire       [7:0]    _zz_when_Gtx_Rx_l89;
  reg                 mem_wren;
  reg        [7:0]    mem_addr;
  reg        [31:0]   mem_data;
  reg        [3:0]    mem_wrwe;
  reg        [7:0]    length;
  reg        [7:0]    data_cnt;
  reg        `AuroraState_binary_sequential_type stateMachine_state;
  wire                axir_fire;
  wire                when_Gtx_Rx_l33;
  wire                axir_fire_1;
  wire                when_Gtx_Rx_l39;
  wire                axir_fire_2;
  wire                axir_fire_3;
  wire                when_Gtx_Rx_l55;
  wire                axir_fire_4;
  wire                axir_fire_5;
  wire                when_Gtx_Rx_l68;
  wire                axir_fire_6;
  wire                when_Gtx_Rx_l75;
  wire                when_Gtx_Rx_l82;
  wire                axir_fire_7;
  wire                when_Gtx_Rx_l80;
  wire                axir_fire_8;
  wire                when_Gtx_Rx_l89;
  `ifndef SYNTHESIS
  reg [63:0] stateMachine_state_string;
  `endif


  assign _zz_when_Gtx_Rx_l55 = (length - 8'h01);
  assign _zz_when_Gtx_Rx_l89 = (length - 8'h01);
  `ifndef SYNTHESIS
  always @(*) begin
    case(stateMachine_state)
      `AuroraState_binary_sequential_IDLE : stateMachine_state_string = "IDLE    ";
      `AuroraState_binary_sequential_WAIT_1 : stateMachine_state_string = "WAIT_1  ";
      `AuroraState_binary_sequential_START : stateMachine_state_string = "START   ";
      `AuroraState_binary_sequential_DEVICEID : stateMachine_state_string = "DEVICEID";
      `AuroraState_binary_sequential_LENGTH : stateMachine_state_string = "LENGTH  ";
      `AuroraState_binary_sequential_DATA : stateMachine_state_string = "DATA    ";
      `AuroraState_binary_sequential_CRC : stateMachine_state_string = "CRC     ";
      `AuroraState_binary_sequential_STOP : stateMachine_state_string = "STOP    ";
      default : stateMachine_state_string = "????????";
    endcase
  end
  `endif

  assign axir_ready = 1'b1;
  assign axir_fire = (axir_valid && axir_ready);
  assign when_Gtx_Rx_l33 = (axir_fire && (axir_payload_data == 32'h0000ffbc));
  assign axir_fire_1 = (axir_valid && axir_ready);
  assign when_Gtx_Rx_l39 = (axir_payload_data == 32'h00000001);
  assign axir_fire_2 = (axir_valid && axir_ready);
  assign axir_fire_3 = (axir_valid && axir_ready);
  assign when_Gtx_Rx_l55 = (data_cnt < _zz_when_Gtx_Rx_l55);
  assign axir_fire_4 = (axir_valid && axir_ready);
  assign axir_fire_5 = (axir_valid && axir_ready);
  assign when_Gtx_Rx_l68 = (axir_fire_5 && axir_payload_last);
  assign axir_fire_6 = (axir_valid && axir_ready);
  assign when_Gtx_Rx_l75 = ((stateMachine_state == `AuroraState_binary_sequential_DEVICEID) && axir_fire_6);
  assign when_Gtx_Rx_l82 = (axir_payload_data[15 : 8] == 8'h0);
  assign axir_fire_7 = (axir_valid && axir_ready);
  assign when_Gtx_Rx_l80 = ((stateMachine_state == `AuroraState_binary_sequential_LENGTH) && axir_fire_7);
  assign axir_fire_8 = (axir_valid && axir_ready);
  assign when_Gtx_Rx_l89 = (((stateMachine_state == `AuroraState_binary_sequential_DATA) && axir_fire_8) && (data_cnt < _zz_when_Gtx_Rx_l89));
  assign bram_en = mem_wren;
  assign bram_wrdata = axir_payload_data;
  assign bram_addr = mem_addr;
  assign bram_we = mem_wrwe;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      mem_wren <= 1'b0;
      mem_addr <= 8'h0;
      mem_data <= 32'h0;
      mem_wrwe <= 4'b0000;
      stateMachine_state <= `AuroraState_binary_sequential_IDLE;
    end else begin
      case(stateMachine_state)
        `AuroraState_binary_sequential_IDLE : begin
          if(when_Gtx_Rx_l33) begin
            stateMachine_state <= `AuroraState_binary_sequential_DEVICEID;
          end
        end
        `AuroraState_binary_sequential_DEVICEID : begin
          if(axir_fire_1) begin
            if(when_Gtx_Rx_l39) begin
              stateMachine_state <= `AuroraState_binary_sequential_LENGTH;
            end else begin
              stateMachine_state <= `AuroraState_binary_sequential_IDLE;
            end
          end
        end
        `AuroraState_binary_sequential_LENGTH : begin
          if(axir_fire_2) begin
            stateMachine_state <= `AuroraState_binary_sequential_DATA;
          end
        end
        `AuroraState_binary_sequential_DATA : begin
          if(axir_fire_3) begin
            if(!when_Gtx_Rx_l55) begin
              stateMachine_state <= `AuroraState_binary_sequential_CRC;
            end
          end
        end
        `AuroraState_binary_sequential_CRC : begin
          if(axir_fire_4) begin
            stateMachine_state <= `AuroraState_binary_sequential_STOP;
          end
        end
        `AuroraState_binary_sequential_STOP : begin
          if(when_Gtx_Rx_l68) begin
            stateMachine_state <= `AuroraState_binary_sequential_IDLE;
          end
        end
        default : begin
        end
      endcase
      if(when_Gtx_Rx_l75) begin
        mem_wren <= 1'b1;
        mem_addr <= 8'h0;
        mem_data <= axir_payload_data;
        mem_wrwe <= 4'b1111;
      end else begin
        if(when_Gtx_Rx_l80) begin
          mem_wren <= 1'b1;
          if(when_Gtx_Rx_l82) begin
            mem_addr <= 8'h01;
          end else begin
            mem_addr <= axir_payload_data[15 : 8];
          end
          mem_data <= axir_payload_data;
          mem_wrwe <= 4'b1111;
        end else begin
          if(when_Gtx_Rx_l89) begin
            mem_wren <= 1'b1;
            mem_addr <= (mem_addr + 8'h01);
            mem_data <= axir_payload_data;
            mem_wrwe <= 4'b1111;
          end else begin
            mem_wren <= 1'b0;
            mem_wrwe <= 4'b0000;
          end
        end
      end
    end
  end

  always @(posedge clk) begin
    case(stateMachine_state)
      `AuroraState_binary_sequential_LENGTH : begin
        if(axir_fire_2) begin
          length <= axir_payload_data[7 : 0];
          data_cnt <= 8'h0;
        end
      end
      `AuroraState_binary_sequential_DATA : begin
        if(axir_fire_3) begin
          if(when_Gtx_Rx_l55) begin
            data_cnt <= (data_cnt + 8'h01);
          end
        end
      end
      default : begin
      end
    endcase
  end


endmodule
