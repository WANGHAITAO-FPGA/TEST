// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : AxiCtrlTx
// Git hash  : c8cef7dc355934795e3281277d1eb6f9e4b94fe2


`define AxiCtrlTxState_binary_sequential_type [1:0]
`define AxiCtrlTxState_binary_sequential_IDLE 2'b00
`define AxiCtrlTxState_binary_sequential_START 2'b01
`define AxiCtrlTxState_binary_sequential_DATA 2'b10
`define AxiCtrlTxState_binary_sequential_STOP 2'b11


module AxiCtrlTx (
  output              axiw_valid,
  input               axiw_ready,
  output     [31:0]   axiw_payload_data,
  output              axiw_payload_last,
  input               write_valid,
  output              write_ready,
  input      [31:0]   write_payload,
  input               tx_start,
  input      [8:0]    popOccupancy,
  input               clk,
  input               reset
);
  wire                axi_last;
  reg        `AxiCtrlTxState_binary_sequential_type stateMachine_state;
  wire                axiw_fire;
  wire                when_AxiCtrlTx_l33;
  `ifndef SYNTHESIS
  reg [39:0] stateMachine_state_string;
  `endif


  `ifndef SYNTHESIS
  always @(*) begin
    case(stateMachine_state)
      `AxiCtrlTxState_binary_sequential_IDLE : stateMachine_state_string = "IDLE ";
      `AxiCtrlTxState_binary_sequential_START : stateMachine_state_string = "START";
      `AxiCtrlTxState_binary_sequential_DATA : stateMachine_state_string = "DATA ";
      `AxiCtrlTxState_binary_sequential_STOP : stateMachine_state_string = "STOP ";
      default : stateMachine_state_string = "?????";
    endcase
  end
  `endif

  assign axi_last = 1'b0;
  assign axiw_fire = (axiw_valid && axiw_ready);
  assign when_AxiCtrlTx_l33 = ((popOccupancy == 9'h002) && axiw_fire);
  assign axiw_valid = ((axiw_ready && (stateMachine_state != `AxiCtrlTxState_binary_sequential_IDLE)) && write_valid);
  assign axiw_payload_data = write_payload;
  assign axiw_payload_last = axi_last;
  assign write_ready = (axiw_ready && (stateMachine_state != `AxiCtrlTxState_binary_sequential_IDLE));
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      stateMachine_state <= `AxiCtrlTxState_binary_sequential_IDLE;
    end else begin
      case(stateMachine_state)
        `AxiCtrlTxState_binary_sequential_IDLE : begin
          if(tx_start) begin
            stateMachine_state <= `AxiCtrlTxState_binary_sequential_START;
          end
        end
        `AxiCtrlTxState_binary_sequential_DATA : begin
          if(when_AxiCtrlTx_l33) begin
            stateMachine_state <= `AxiCtrlTxState_binary_sequential_STOP;
          end
        end
        `AxiCtrlTxState_binary_sequential_STOP : begin
          stateMachine_state <= `AxiCtrlTxState_binary_sequential_IDLE;
        end
        default : begin
        end
      endcase
    end
  end


endmodule
