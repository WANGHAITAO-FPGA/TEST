// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : ApbTimer



module ApbTimer (
  input      [3:0]    apb_PADDR,
  input      [0:0]    apb_PSEL,
  input               apb_PENABLE,
  output              apb_PREADY,
  input               apb_PWRITE,
  input      [15:0]   apb_PWDATA,
  output reg [15:0]   apb_PRDATA,
  output              apb_PSLVERROR,
  output              interrupt,
  input               clk,
  input               reset
);
  reg                 area_timerA_io_clear;
  wire                area_timerA_io_full;
  wire       [15:0]   area_timerA_io_value;
  wire                area_busCtrl_askWrite;
  wire                area_busCtrl_askRead;
  wire                area_busCtrl_doWrite;
  wire                area_busCtrl_doRead;
  reg                 area_timerA_io_tick_driver;
  reg        [15:0]   area_timerA_io_limit_driver;

  Timer area_timerA (
    .io_tick     (area_timerA_io_tick_driver   ), //i
    .io_clear    (area_timerA_io_clear         ), //i
    .io_limit    (area_timerA_io_limit_driver  ), //i
    .io_full     (area_timerA_io_full          ), //o
    .io_value    (area_timerA_io_value         ), //o
    .clk         (clk                          ), //i
    .reset       (reset                        )  //i
  );
  assign apb_PREADY = 1'b1;
  always @(*) begin
    apb_PRDATA = 16'h0;
    case(apb_PADDR)
      4'b0000 : begin
        apb_PRDATA[0 : 0] = area_timerA_io_tick_driver;
      end
      4'b0001 : begin
        apb_PRDATA[15 : 0] = area_timerA_io_limit_driver;
      end
      default : begin
      end
    endcase
  end

  assign apb_PSLVERROR = 1'b0;
  assign area_busCtrl_askWrite = ((apb_PSEL[0] && apb_PENABLE) && apb_PWRITE);
  assign area_busCtrl_askRead = ((apb_PSEL[0] && apb_PENABLE) && (! apb_PWRITE));
  assign area_busCtrl_doWrite = (((apb_PSEL[0] && apb_PENABLE) && apb_PREADY) && apb_PWRITE);
  assign area_busCtrl_doRead = (((apb_PSEL[0] && apb_PENABLE) && apb_PREADY) && (! apb_PWRITE));
  always @(*) begin
    if(reset) begin
      area_timerA_io_clear = 1'b1;
    end else begin
      area_timerA_io_clear = 1'b0;
    end
  end

  assign interrupt = area_timerA_io_full;
  always @(posedge clk) begin
    case(apb_PADDR)
      4'b0000 : begin
        if(area_busCtrl_doWrite) begin
          area_timerA_io_tick_driver <= apb_PWDATA[0];
        end
      end
      4'b0001 : begin
        if(area_busCtrl_doWrite) begin
          area_timerA_io_limit_driver <= apb_PWDATA[15 : 0];
        end
      end
      default : begin
      end
    endcase
  end


endmodule

module Timer (
  input               io_tick,
  input               io_clear,
  input      [15:0]   io_limit,
  output              io_full,
  output     [15:0]   io_value,
  input               clk,
  input               reset
);
  wire       [15:0]   _zz_counter;
  wire       [0:0]    _zz_counter_1;
  reg        [15:0]   counter;
  wire                limitHit;
  reg                 inhibitFull;

  assign _zz_counter_1 = (! limitHit);
  assign _zz_counter = {15'd0, _zz_counter_1};
  assign limitHit = (counter == io_limit);
  assign io_full = ((limitHit && io_tick) && (! inhibitFull));
  assign io_value = counter;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      inhibitFull <= 1'b0;
    end else begin
      if(io_tick) begin
        inhibitFull <= limitHit;
      end
      if(io_clear) begin
        inhibitFull <= 1'b0;
      end
    end
  end

  always @(posedge clk) begin
    if(io_tick) begin
      counter <= (counter + _zz_counter);
    end
    if(io_clear) begin
      counter <= 16'h0;
    end
  end


endmodule
