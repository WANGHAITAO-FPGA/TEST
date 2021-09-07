// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : DataSync
// Git hash  : 65291426c6eb570603f2906aaddb1e59c5c7d9d9



module DataSync (
  input               clk_in,
  input               clk_out,
  input               reset,
  input               datain_valid,
  output              datain_ready,
  input      [15:0]   datain_payload,
  output     [15:0]   dataout
);
  wire                streamCCByToggle_1_io_input_ready;
  wire                streamCCByToggle_1_io_output_valid;
  wire       [15:0]   streamCCByToggle_1_io_output_payload;

  StreamCCByToggle streamCCByToggle_1 (
    .io_input_valid       (datain_valid                          ), //i
    .io_input_ready       (streamCCByToggle_1_io_input_ready     ), //o
    .io_input_payload     (datain_payload                        ), //i
    .io_output_valid      (streamCCByToggle_1_io_output_valid    ), //o
    .io_output_ready      (1'b1                                  ), //i
    .io_output_payload    (streamCCByToggle_1_io_output_payload  ), //o
    .clk_in               (clk_in                                ), //i
    .reset                (reset                                 ), //i
    .clk_out              (clk_out                               )  //i
  );
  assign datain_ready = streamCCByToggle_1_io_input_ready;
  assign dataout = streamCCByToggle_1_io_output_payload;

endmodule

module StreamCCByToggle (
  input               io_input_valid,
  output              io_input_ready,
  input      [15:0]   io_input_payload,
  output              io_output_valid,
  input               io_output_ready,
  output     [15:0]   io_output_payload,
  input               clk_in,
  input               reset,
  input               clk_out
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
    .clk_in        (clk_in                            ), //i
    .reset         (reset                             )  //i
  );
  BufferCC_1 pushArea_target_buffercc (
    .io_dataIn     (pushArea_target                      ), //i
    .io_dataOut    (pushArea_target_buffercc_io_dataOut  ), //o
    .clk_out       (clk_out                              ), //i
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
  always @(posedge clk_in or posedge reset) begin
    if(reset) begin
      pushArea_target <= 1'b0;
    end else begin
      if(pushArea_accept) begin
        pushArea_target <= (! pushArea_target);
      end
    end
  end

  always @(posedge clk_in) begin
    if(pushArea_accept) begin
      pushArea_data <= io_input_payload;
    end
  end

  always @(posedge clk_out or posedge reset) begin
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

  always @(posedge clk_out) begin
    if(popArea_stream_fire_1) begin
      popArea_stream_rData <= popArea_stream_payload;
    end
  end


endmodule

module BufferCC_1 (
  input               io_dataIn,
  output              io_dataOut,
  input               clk_out,
  input               reset
);
  (* async_reg = "true" *) reg                 buffers_0;
  (* async_reg = "true" *) reg                 buffers_1;

  assign io_dataOut = buffers_1;
  always @(posedge clk_out or posedge reset) begin
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
  input               clk_in,
  input               reset
);
  (* async_reg = "true" *) reg                 buffers_0;
  (* async_reg = "true" *) reg                 buffers_1;

  assign io_dataOut = buffers_1;
  always @(posedge clk_in or posedge reset) begin
    if(reset) begin
      buffers_0 <= 1'b0;
      buffers_1 <= 1'b0;
    end else begin
      buffers_0 <= io_dataIn;
      buffers_1 <= buffers_0;
    end
  end


endmodule
