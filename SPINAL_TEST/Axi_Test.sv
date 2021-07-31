// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : Axi_Test
// Git hash  : 0c6505a3186bce5ca045c3b6a43c682c1cc1f20b


`define Axi4ToApb3BridgePhase_binary_sequential_type [1:0]
`define Axi4ToApb3BridgePhase_binary_sequential_SETUP 2'b00
`define Axi4ToApb3BridgePhase_binary_sequential_ACCESS_1 2'b01
`define Axi4ToApb3BridgePhase_binary_sequential_RESPONSE 2'b10


module Axi_Test (
  input               axi_aw_valid,
  output              axi_aw_ready,
  input      [19:0]   axi_aw_payload_addr,
  input      [3:0]    axi_aw_payload_id,
  input      [7:0]    axi_aw_payload_len,
  input      [2:0]    axi_aw_payload_size,
  input      [1:0]    axi_aw_payload_burst,
  input               axi_w_valid,
  output              axi_w_ready,
  input      [31:0]   axi_w_payload_data,
  input      [3:0]    axi_w_payload_strb,
  input               axi_w_payload_last,
  output              axi_b_valid,
  input               axi_b_ready,
  output     [3:0]    axi_b_payload_id,
  output     [1:0]    axi_b_payload_resp,
  input               axi_ar_valid,
  output              axi_ar_ready,
  input      [19:0]   axi_ar_payload_addr,
  input      [3:0]    axi_ar_payload_id,
  input      [7:0]    axi_ar_payload_len,
  input      [2:0]    axi_ar_payload_size,
  input      [1:0]    axi_ar_payload_burst,
  output              axi_r_valid,
  input               axi_r_ready,
  output     [31:0]   axi_r_payload_data,
  output     [3:0]    axi_r_payload_id,
  output     [1:0]    axi_r_payload_resp,
  output              axi_r_payload_last,
  output     [19:0]   apb_PADDR,
  output     [0:0]    apb_PSEL,
  output              apb_PENABLE,
  input               apb_PREADY,
  output              apb_PWRITE,
  output     [31:0]   apb_PWDATA,
  input      [31:0]   apb_PRDATA,
  input               apb_PSLVERROR,
  input               clk,
  input               reset
);
  wire                streamArbiter_1_io_inputs_0_ready;
  wire                streamArbiter_1_io_inputs_1_ready;
  wire                streamArbiter_1_io_output_valid;
  wire       [19:0]   streamArbiter_1_io_output_payload_addr;
  wire       [3:0]    streamArbiter_1_io_output_payload_id;
  wire       [7:0]    streamArbiter_1_io_output_payload_len;
  wire       [2:0]    streamArbiter_1_io_output_payload_size;
  wire       [1:0]    streamArbiter_1_io_output_payload_burst;
  wire       [0:0]    streamArbiter_1_io_chosen;
  wire       [1:0]    streamArbiter_1_io_chosenOH;
  wire                apbBridge_io_axi_arw_ready;
  wire                apbBridge_io_axi_w_ready;
  wire                apbBridge_io_axi_b_valid;
  wire       [3:0]    apbBridge_io_axi_b_payload_id;
  wire       [1:0]    apbBridge_io_axi_b_payload_resp;
  wire                apbBridge_io_axi_r_valid;
  wire       [31:0]   apbBridge_io_axi_r_payload_data;
  wire       [3:0]    apbBridge_io_axi_r_payload_id;
  wire       [1:0]    apbBridge_io_axi_r_payload_resp;
  wire                apbBridge_io_axi_r_payload_last;
  wire       [19:0]   apbBridge_io_apb_PADDR;
  wire       [0:0]    apbBridge_io_apb_PSEL;
  wire                apbBridge_io_apb_PENABLE;
  wire                apbBridge_io_apb_PWRITE;
  wire       [31:0]   apbBridge_io_apb_PWDATA;
  wire                axi4Shared_arw_valid;
  wire                axi4Shared_arw_ready;
  wire       [19:0]   axi4Shared_arw_payload_addr;
  wire       [3:0]    axi4Shared_arw_payload_id;
  wire       [7:0]    axi4Shared_arw_payload_len;
  wire       [2:0]    axi4Shared_arw_payload_size;
  wire       [1:0]    axi4Shared_arw_payload_burst;
  wire                axi4Shared_arw_payload_write;
  wire                axi4Shared_w_valid;
  wire                axi4Shared_w_ready;
  wire       [31:0]   axi4Shared_w_payload_data;
  wire       [3:0]    axi4Shared_w_payload_strb;
  wire                axi4Shared_w_payload_last;
  wire                axi4Shared_b_valid;
  wire                axi4Shared_b_ready;
  wire       [3:0]    axi4Shared_b_payload_id;
  wire       [1:0]    axi4Shared_b_payload_resp;
  wire                axi4Shared_r_valid;
  wire                axi4Shared_r_ready;
  wire       [31:0]   axi4Shared_r_payload_data;
  wire       [3:0]    axi4Shared_r_payload_id;
  wire       [1:0]    axi4Shared_r_payload_resp;
  wire                axi4Shared_r_payload_last;

  StreamArbiter streamArbiter_1 (
    .io_inputs_0_valid            (axi_ar_valid                             ), //i
    .io_inputs_0_ready            (streamArbiter_1_io_inputs_0_ready        ), //o
    .io_inputs_0_payload_addr     (axi_ar_payload_addr                      ), //i
    .io_inputs_0_payload_id       (axi_ar_payload_id                        ), //i
    .io_inputs_0_payload_len      (axi_ar_payload_len                       ), //i
    .io_inputs_0_payload_size     (axi_ar_payload_size                      ), //i
    .io_inputs_0_payload_burst    (axi_ar_payload_burst                     ), //i
    .io_inputs_1_valid            (axi_aw_valid                             ), //i
    .io_inputs_1_ready            (streamArbiter_1_io_inputs_1_ready        ), //o
    .io_inputs_1_payload_addr     (axi_aw_payload_addr                      ), //i
    .io_inputs_1_payload_id       (axi_aw_payload_id                        ), //i
    .io_inputs_1_payload_len      (axi_aw_payload_len                       ), //i
    .io_inputs_1_payload_size     (axi_aw_payload_size                      ), //i
    .io_inputs_1_payload_burst    (axi_aw_payload_burst                     ), //i
    .io_output_valid              (streamArbiter_1_io_output_valid          ), //o
    .io_output_ready              (axi4Shared_arw_ready                     ), //i
    .io_output_payload_addr       (streamArbiter_1_io_output_payload_addr   ), //o
    .io_output_payload_id         (streamArbiter_1_io_output_payload_id     ), //o
    .io_output_payload_len        (streamArbiter_1_io_output_payload_len    ), //o
    .io_output_payload_size       (streamArbiter_1_io_output_payload_size   ), //o
    .io_output_payload_burst      (streamArbiter_1_io_output_payload_burst  ), //o
    .io_chosen                    (streamArbiter_1_io_chosen                ), //o
    .io_chosenOH                  (streamArbiter_1_io_chosenOH              ), //o
    .clk                          (clk                                      ), //i
    .reset                        (reset                                    )  //i
  );
  Axi4SharedToApb3Bridge apbBridge (
    .io_axi_arw_valid            (axi4Shared_arw_valid             ), //i
    .io_axi_arw_ready            (apbBridge_io_axi_arw_ready       ), //o
    .io_axi_arw_payload_addr     (axi4Shared_arw_payload_addr      ), //i
    .io_axi_arw_payload_id       (axi4Shared_arw_payload_id        ), //i
    .io_axi_arw_payload_len      (axi4Shared_arw_payload_len       ), //i
    .io_axi_arw_payload_size     (axi4Shared_arw_payload_size      ), //i
    .io_axi_arw_payload_burst    (axi4Shared_arw_payload_burst     ), //i
    .io_axi_arw_payload_write    (axi4Shared_arw_payload_write     ), //i
    .io_axi_w_valid              (axi4Shared_w_valid               ), //i
    .io_axi_w_ready              (apbBridge_io_axi_w_ready         ), //o
    .io_axi_w_payload_data       (axi4Shared_w_payload_data        ), //i
    .io_axi_w_payload_strb       (axi4Shared_w_payload_strb        ), //i
    .io_axi_w_payload_last       (axi4Shared_w_payload_last        ), //i
    .io_axi_b_valid              (apbBridge_io_axi_b_valid         ), //o
    .io_axi_b_ready              (axi4Shared_b_ready               ), //i
    .io_axi_b_payload_id         (apbBridge_io_axi_b_payload_id    ), //o
    .io_axi_b_payload_resp       (apbBridge_io_axi_b_payload_resp  ), //o
    .io_axi_r_valid              (apbBridge_io_axi_r_valid         ), //o
    .io_axi_r_ready              (axi4Shared_r_ready               ), //i
    .io_axi_r_payload_data       (apbBridge_io_axi_r_payload_data  ), //o
    .io_axi_r_payload_id         (apbBridge_io_axi_r_payload_id    ), //o
    .io_axi_r_payload_resp       (apbBridge_io_axi_r_payload_resp  ), //o
    .io_axi_r_payload_last       (apbBridge_io_axi_r_payload_last  ), //o
    .io_apb_PADDR                (apbBridge_io_apb_PADDR           ), //o
    .io_apb_PSEL                 (apbBridge_io_apb_PSEL            ), //o
    .io_apb_PENABLE              (apbBridge_io_apb_PENABLE         ), //o
    .io_apb_PREADY               (apb_PREADY                       ), //i
    .io_apb_PWRITE               (apbBridge_io_apb_PWRITE          ), //o
    .io_apb_PWDATA               (apbBridge_io_apb_PWDATA          ), //o
    .io_apb_PRDATA               (apb_PRDATA                       ), //i
    .io_apb_PSLVERROR            (apb_PSLVERROR                    ), //i
    .clk                         (clk                              ), //i
    .reset                       (reset                            )  //i
  );
  assign axi_ar_ready = streamArbiter_1_io_inputs_0_ready;
  assign axi_aw_ready = streamArbiter_1_io_inputs_1_ready;
  assign axi4Shared_arw_valid = streamArbiter_1_io_output_valid;
  assign axi4Shared_arw_payload_addr = streamArbiter_1_io_output_payload_addr;
  assign axi4Shared_arw_payload_id = streamArbiter_1_io_output_payload_id;
  assign axi4Shared_arw_payload_len = streamArbiter_1_io_output_payload_len;
  assign axi4Shared_arw_payload_size = streamArbiter_1_io_output_payload_size;
  assign axi4Shared_arw_payload_burst = streamArbiter_1_io_output_payload_burst;
  assign axi4Shared_arw_payload_write = streamArbiter_1_io_chosenOH[1];
  assign axi4Shared_w_valid = axi_w_valid;
  assign axi_w_ready = axi4Shared_w_ready;
  assign axi4Shared_w_payload_data = axi_w_payload_data;
  assign axi4Shared_w_payload_strb = axi_w_payload_strb;
  assign axi4Shared_w_payload_last = axi_w_payload_last;
  assign axi_b_valid = axi4Shared_b_valid;
  assign axi4Shared_b_ready = axi_b_ready;
  assign axi_b_payload_id = axi4Shared_b_payload_id;
  assign axi_b_payload_resp = axi4Shared_b_payload_resp;
  assign axi_r_valid = axi4Shared_r_valid;
  assign axi4Shared_r_ready = axi_r_ready;
  assign axi_r_payload_data = axi4Shared_r_payload_data;
  assign axi_r_payload_id = axi4Shared_r_payload_id;
  assign axi_r_payload_resp = axi4Shared_r_payload_resp;
  assign axi_r_payload_last = axi4Shared_r_payload_last;
  assign axi4Shared_arw_ready = apbBridge_io_axi_arw_ready;
  assign axi4Shared_w_ready = apbBridge_io_axi_w_ready;
  assign axi4Shared_b_valid = apbBridge_io_axi_b_valid;
  assign axi4Shared_b_payload_id = apbBridge_io_axi_b_payload_id;
  assign axi4Shared_b_payload_resp = apbBridge_io_axi_b_payload_resp;
  assign axi4Shared_r_valid = apbBridge_io_axi_r_valid;
  assign axi4Shared_r_payload_data = apbBridge_io_axi_r_payload_data;
  assign axi4Shared_r_payload_id = apbBridge_io_axi_r_payload_id;
  assign axi4Shared_r_payload_resp = apbBridge_io_axi_r_payload_resp;
  assign axi4Shared_r_payload_last = apbBridge_io_axi_r_payload_last;
  assign apb_PADDR = apbBridge_io_apb_PADDR;
  assign apb_PSEL = apbBridge_io_apb_PSEL;
  assign apb_PENABLE = apbBridge_io_apb_PENABLE;
  assign apb_PWRITE = apbBridge_io_apb_PWRITE;
  assign apb_PWDATA = apbBridge_io_apb_PWDATA;

endmodule

module Axi4SharedToApb3Bridge (
  input               io_axi_arw_valid,
  output reg          io_axi_arw_ready,
  input      [19:0]   io_axi_arw_payload_addr,
  input      [3:0]    io_axi_arw_payload_id,
  input      [7:0]    io_axi_arw_payload_len,
  input      [2:0]    io_axi_arw_payload_size,
  input      [1:0]    io_axi_arw_payload_burst,
  input               io_axi_arw_payload_write,
  input               io_axi_w_valid,
  output reg          io_axi_w_ready,
  input      [31:0]   io_axi_w_payload_data,
  input      [3:0]    io_axi_w_payload_strb,
  input               io_axi_w_payload_last,
  output reg          io_axi_b_valid,
  input               io_axi_b_ready,
  output     [3:0]    io_axi_b_payload_id,
  output     [1:0]    io_axi_b_payload_resp,
  output reg          io_axi_r_valid,
  input               io_axi_r_ready,
  output     [31:0]   io_axi_r_payload_data,
  output     [3:0]    io_axi_r_payload_id,
  output     [1:0]    io_axi_r_payload_resp,
  output              io_axi_r_payload_last,
  output     [19:0]   io_apb_PADDR,
  output reg [0:0]    io_apb_PSEL,
  output reg          io_apb_PENABLE,
  input               io_apb_PREADY,
  output              io_apb_PWRITE,
  output     [31:0]   io_apb_PWDATA,
  input      [31:0]   io_apb_PRDATA,
  input               io_apb_PSLVERROR,
  input               clk,
  input               reset
);
  reg        `Axi4ToApb3BridgePhase_binary_sequential_type phase;
  reg                 write;
  reg        [31:0]   readedData;
  reg        [3:0]    id;
  wire                when_Axi4SharedToApb3Bridge_l91;
  `ifndef SYNTHESIS
  reg [63:0] phase_string;
  `endif


  `ifndef SYNTHESIS
  always @(*) begin
    case(phase)
      `Axi4ToApb3BridgePhase_binary_sequential_SETUP : phase_string = "SETUP   ";
      `Axi4ToApb3BridgePhase_binary_sequential_ACCESS_1 : phase_string = "ACCESS_1";
      `Axi4ToApb3BridgePhase_binary_sequential_RESPONSE : phase_string = "RESPONSE";
      default : phase_string = "????????";
    endcase
  end
  `endif

  always @(*) begin
    io_axi_arw_ready = 1'b0;
    case(phase)
      `Axi4ToApb3BridgePhase_binary_sequential_SETUP : begin
      end
      `Axi4ToApb3BridgePhase_binary_sequential_ACCESS_1 : begin
        if(io_apb_PREADY) begin
          io_axi_arw_ready = 1'b1;
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    io_axi_w_ready = 1'b0;
    case(phase)
      `Axi4ToApb3BridgePhase_binary_sequential_SETUP : begin
      end
      `Axi4ToApb3BridgePhase_binary_sequential_ACCESS_1 : begin
        if(io_apb_PREADY) begin
          io_axi_w_ready = write;
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    io_axi_b_valid = 1'b0;
    case(phase)
      `Axi4ToApb3BridgePhase_binary_sequential_SETUP : begin
      end
      `Axi4ToApb3BridgePhase_binary_sequential_ACCESS_1 : begin
      end
      default : begin
        if(write) begin
          io_axi_b_valid = 1'b1;
        end
      end
    endcase
  end

  always @(*) begin
    io_axi_r_valid = 1'b0;
    case(phase)
      `Axi4ToApb3BridgePhase_binary_sequential_SETUP : begin
      end
      `Axi4ToApb3BridgePhase_binary_sequential_ACCESS_1 : begin
      end
      default : begin
        if(!write) begin
          io_axi_r_valid = 1'b1;
        end
      end
    endcase
  end

  always @(*) begin
    io_apb_PSEL[0] = 1'b0;
    case(phase)
      `Axi4ToApb3BridgePhase_binary_sequential_SETUP : begin
        if(when_Axi4SharedToApb3Bridge_l91) begin
          io_apb_PSEL[0] = 1'b1;
        end
      end
      `Axi4ToApb3BridgePhase_binary_sequential_ACCESS_1 : begin
        io_apb_PSEL[0] = 1'b1;
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    io_apb_PENABLE = 1'b0;
    case(phase)
      `Axi4ToApb3BridgePhase_binary_sequential_SETUP : begin
      end
      `Axi4ToApb3BridgePhase_binary_sequential_ACCESS_1 : begin
        io_apb_PENABLE = 1'b1;
      end
      default : begin
      end
    endcase
  end

  assign when_Axi4SharedToApb3Bridge_l91 = (io_axi_arw_valid && ((! io_axi_arw_payload_write) || io_axi_w_valid));
  assign io_apb_PADDR = io_axi_arw_payload_addr;
  assign io_apb_PWDATA = io_axi_w_payload_data;
  assign io_apb_PWRITE = io_axi_arw_payload_write;
  assign io_axi_r_payload_resp = {io_apb_PSLVERROR,1'b0};
  assign io_axi_b_payload_resp = {io_apb_PSLVERROR,1'b0};
  assign io_axi_r_payload_id = id;
  assign io_axi_b_payload_id = id;
  assign io_axi_r_payload_data = readedData;
  assign io_axi_r_payload_last = 1'b1;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      phase <= `Axi4ToApb3BridgePhase_binary_sequential_SETUP;
    end else begin
      case(phase)
        `Axi4ToApb3BridgePhase_binary_sequential_SETUP : begin
          if(when_Axi4SharedToApb3Bridge_l91) begin
            phase <= `Axi4ToApb3BridgePhase_binary_sequential_ACCESS_1;
          end
        end
        `Axi4ToApb3BridgePhase_binary_sequential_ACCESS_1 : begin
          if(io_apb_PREADY) begin
            phase <= `Axi4ToApb3BridgePhase_binary_sequential_RESPONSE;
          end
        end
        default : begin
          if(write) begin
            if(io_axi_b_ready) begin
              phase <= `Axi4ToApb3BridgePhase_binary_sequential_SETUP;
            end
          end else begin
            if(io_axi_r_ready) begin
              phase <= `Axi4ToApb3BridgePhase_binary_sequential_SETUP;
            end
          end
        end
      endcase
    end
  end

  always @(posedge clk) begin
    case(phase)
      `Axi4ToApb3BridgePhase_binary_sequential_SETUP : begin
        write <= io_axi_arw_payload_write;
        id <= io_axi_arw_payload_id;
      end
      `Axi4ToApb3BridgePhase_binary_sequential_ACCESS_1 : begin
        if(io_apb_PREADY) begin
          readedData <= io_apb_PRDATA;
        end
      end
      default : begin
      end
    endcase
  end


endmodule

module StreamArbiter (
  input               io_inputs_0_valid,
  output              io_inputs_0_ready,
  input      [19:0]   io_inputs_0_payload_addr,
  input      [3:0]    io_inputs_0_payload_id,
  input      [7:0]    io_inputs_0_payload_len,
  input      [2:0]    io_inputs_0_payload_size,
  input      [1:0]    io_inputs_0_payload_burst,
  input               io_inputs_1_valid,
  output              io_inputs_1_ready,
  input      [19:0]   io_inputs_1_payload_addr,
  input      [3:0]    io_inputs_1_payload_id,
  input      [7:0]    io_inputs_1_payload_len,
  input      [2:0]    io_inputs_1_payload_size,
  input      [1:0]    io_inputs_1_payload_burst,
  output              io_output_valid,
  input               io_output_ready,
  output     [19:0]   io_output_payload_addr,
  output     [3:0]    io_output_payload_id,
  output     [7:0]    io_output_payload_len,
  output     [2:0]    io_output_payload_size,
  output     [1:0]    io_output_payload_burst,
  output     [0:0]    io_chosen,
  output     [1:0]    io_chosenOH,
  input               clk,
  input               reset
);
  wire       [3:0]    _zz__zz_maskProposal_0_2;
  wire       [3:0]    _zz__zz_maskProposal_0_2_1;
  wire       [1:0]    _zz__zz_maskProposal_0_2_2;
  reg                 locked;
  wire                maskProposal_0;
  wire                maskProposal_1;
  reg                 maskLocked_0;
  reg                 maskLocked_1;
  wire                maskRouted_0;
  wire                maskRouted_1;
  wire       [1:0]    _zz_maskProposal_0;
  wire       [3:0]    _zz_maskProposal_0_1;
  wire       [3:0]    _zz_maskProposal_0_2;
  wire       [1:0]    _zz_maskProposal_0_3;
  wire                io_output_fire;
  wire                _zz_io_chosen;

  assign _zz__zz_maskProposal_0_2 = (_zz_maskProposal_0_1 - _zz__zz_maskProposal_0_2_1);
  assign _zz__zz_maskProposal_0_2_2 = {maskLocked_0,maskLocked_1};
  assign _zz__zz_maskProposal_0_2_1 = {2'd0, _zz__zz_maskProposal_0_2_2};
  assign maskRouted_0 = (locked ? maskLocked_0 : maskProposal_0);
  assign maskRouted_1 = (locked ? maskLocked_1 : maskProposal_1);
  assign _zz_maskProposal_0 = {io_inputs_1_valid,io_inputs_0_valid};
  assign _zz_maskProposal_0_1 = {_zz_maskProposal_0,_zz_maskProposal_0};
  assign _zz_maskProposal_0_2 = (_zz_maskProposal_0_1 & (~ _zz__zz_maskProposal_0_2));
  assign _zz_maskProposal_0_3 = (_zz_maskProposal_0_2[3 : 2] | _zz_maskProposal_0_2[1 : 0]);
  assign maskProposal_0 = _zz_maskProposal_0_3[0];
  assign maskProposal_1 = _zz_maskProposal_0_3[1];
  assign io_output_fire = (io_output_valid && io_output_ready);
  assign io_output_valid = ((io_inputs_0_valid && maskRouted_0) || (io_inputs_1_valid && maskRouted_1));
  assign io_output_payload_addr = (maskRouted_0 ? io_inputs_0_payload_addr : io_inputs_1_payload_addr);
  assign io_output_payload_id = (maskRouted_0 ? io_inputs_0_payload_id : io_inputs_1_payload_id);
  assign io_output_payload_len = (maskRouted_0 ? io_inputs_0_payload_len : io_inputs_1_payload_len);
  assign io_output_payload_size = (maskRouted_0 ? io_inputs_0_payload_size : io_inputs_1_payload_size);
  assign io_output_payload_burst = (maskRouted_0 ? io_inputs_0_payload_burst : io_inputs_1_payload_burst);
  assign io_inputs_0_ready = (maskRouted_0 && io_output_ready);
  assign io_inputs_1_ready = (maskRouted_1 && io_output_ready);
  assign io_chosenOH = {maskRouted_1,maskRouted_0};
  assign _zz_io_chosen = io_chosenOH[1];
  assign io_chosen = _zz_io_chosen;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      locked <= 1'b0;
      maskLocked_0 <= 1'b0;
      maskLocked_1 <= 1'b1;
    end else begin
      if(io_output_valid) begin
        maskLocked_0 <= maskRouted_0;
        maskLocked_1 <= maskRouted_1;
      end
      if(io_output_valid) begin
        locked <= 1'b1;
      end
      if(io_output_fire) begin
        locked <= 1'b0;
      end
    end
  end


endmodule
