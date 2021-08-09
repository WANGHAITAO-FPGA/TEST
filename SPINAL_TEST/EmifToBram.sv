// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : EmifToBram
// Git hash  : 7621f4359dd191a3fda351745854f11be096ae8c



module EmifToBram (
  input      [23:0]   emif_emif_addr,
  input      [15:0]   emif_emif_data_read,
  output     [15:0]   emif_emif_data_write,
  output              emif_emif_data_writeEnable,
  input               emif_emif_cs,
  input               emif_emif_we,
  input               emif_emif_oe,
  input      [31:0]   gpio_read,
  output     [31:0]   gpio_write,
  output     [31:0]   gpio_writeEnable,
  input               clk,
  input               reset
);
  wire       [31:0]   apb3tobram_1_io_bram_rddata;
  wire       [3:0]    gpioCtrl_io_apb_PADDR;
  reg        [31:0]   _zz_mem_port1;
  wire       [15:0]   emiftoapb_1_emif_emif_data_write;
  wire                emiftoapb_1_emif_emif_data_writeEnable;
  wire       [19:0]   emiftoapb_1_apb_PADDR;
  wire       [0:0]    emiftoapb_1_apb_PSEL;
  wire                emiftoapb_1_apb_PENABLE;
  wire                emiftoapb_1_apb_PWRITE;
  wire       [31:0]   emiftoapb_1_apb_PWDATA;
  wire                apb3tobram_1_io_apb_PREADY;
  wire       [31:0]   apb3tobram_1_io_apb_PRDATA;
  wire                apb3tobram_1_io_apb_PSLVERROR;
  wire                apb3tobram_1_io_bram_en;
  wire       [3:0]    apb3tobram_1_io_bram_we;
  wire       [7:0]    apb3tobram_1_io_bram_addr;
  wire       [31:0]   apb3tobram_1_io_bram_wrdata;
  wire                gpioCtrl_io_apb_PREADY;
  wire       [31:0]   gpioCtrl_io_apb_PRDATA;
  wire                gpioCtrl_io_apb_PSLVERROR;
  wire       [31:0]   gpioCtrl_io_gpio_write;
  wire       [31:0]   gpioCtrl_io_gpio_writeEnable;
  wire       [31:0]   gpioCtrl_io_value;
  wire                apb_decoder_io_input_PREADY;
  wire       [31:0]   apb_decoder_io_input_PRDATA;
  wire                apb_decoder_io_input_PSLVERROR;
  wire       [19:0]   apb_decoder_io_output_PADDR;
  wire       [1:0]    apb_decoder_io_output_PSEL;
  wire                apb_decoder_io_output_PENABLE;
  wire                apb_decoder_io_output_PWRITE;
  wire       [31:0]   apb_decoder_io_output_PWDATA;
  wire                apb3Router_1_io_input_PREADY;
  wire       [31:0]   apb3Router_1_io_input_PRDATA;
  wire                apb3Router_1_io_input_PSLVERROR;
  wire       [19:0]   apb3Router_1_io_outputs_0_PADDR;
  wire       [0:0]    apb3Router_1_io_outputs_0_PSEL;
  wire                apb3Router_1_io_outputs_0_PENABLE;
  wire                apb3Router_1_io_outputs_0_PWRITE;
  wire       [31:0]   apb3Router_1_io_outputs_0_PWDATA;
  wire       [19:0]   apb3Router_1_io_outputs_1_PADDR;
  wire       [0:0]    apb3Router_1_io_outputs_1_PSEL;
  wire                apb3Router_1_io_outputs_1_PENABLE;
  wire                apb3Router_1_io_outputs_1_PWRITE;
  wire       [31:0]   apb3Router_1_io_outputs_1_PWDATA;
  wire                _zz_mem_port;
  wire                _zz_io_bram_rddata;
  reg [31:0] mem [0:255];

  assign _zz_mem_port = (apb3tobram_1_io_bram_en && (apb3tobram_1_io_bram_we == 4'b1111));
  always @(posedge clk) begin
    if(_zz_mem_port) begin
      mem[apb3tobram_1_io_bram_addr] <= apb3tobram_1_io_bram_wrdata;
    end
  end

  always @(posedge clk) begin
    if(_zz_io_bram_rddata) begin
      _zz_mem_port1 <= mem[apb3tobram_1_io_bram_addr];
    end
  end

  EmifToApb emiftoapb_1 (
    .emif_emif_addr                (emif_emif_addr                          ), //i
    .emif_emif_data_read           (emif_emif_data_read                     ), //i
    .emif_emif_data_write          (emiftoapb_1_emif_emif_data_write        ), //o
    .emif_emif_data_writeEnable    (emiftoapb_1_emif_emif_data_writeEnable  ), //o
    .emif_emif_cs                  (emif_emif_cs                            ), //i
    .emif_emif_we                  (emif_emif_we                            ), //i
    .emif_emif_oe                  (emif_emif_oe                            ), //i
    .apb_PADDR                     (emiftoapb_1_apb_PADDR                   ), //o
    .apb_PSEL                      (emiftoapb_1_apb_PSEL                    ), //o
    .apb_PENABLE                   (emiftoapb_1_apb_PENABLE                 ), //o
    .apb_PREADY                    (apb_decoder_io_input_PREADY             ), //i
    .apb_PWRITE                    (emiftoapb_1_apb_PWRITE                  ), //o
    .apb_PWDATA                    (emiftoapb_1_apb_PWDATA                  ), //o
    .apb_PRDATA                    (apb_decoder_io_input_PRDATA             ), //i
    .apb_PSLVERROR                 (apb_decoder_io_input_PSLVERROR          ), //i
    .clk                           (clk                                     ), //i
    .reset                         (reset                                   )  //i
  );
  Apb3ToBram apb3tobram_1 (
    .io_apb_PADDR        (apb3Router_1_io_outputs_0_PADDR    ), //i
    .io_apb_PSEL         (apb3Router_1_io_outputs_0_PSEL     ), //i
    .io_apb_PENABLE      (apb3Router_1_io_outputs_0_PENABLE  ), //i
    .io_apb_PREADY       (apb3tobram_1_io_apb_PREADY         ), //o
    .io_apb_PWRITE       (apb3Router_1_io_outputs_0_PWRITE   ), //i
    .io_apb_PWDATA       (apb3Router_1_io_outputs_0_PWDATA   ), //i
    .io_apb_PRDATA       (apb3tobram_1_io_apb_PRDATA         ), //o
    .io_apb_PSLVERROR    (apb3tobram_1_io_apb_PSLVERROR      ), //o
    .io_bram_en          (apb3tobram_1_io_bram_en            ), //o
    .io_bram_we          (apb3tobram_1_io_bram_we            ), //o
    .io_bram_addr        (apb3tobram_1_io_bram_addr          ), //o
    .io_bram_wrdata      (apb3tobram_1_io_bram_wrdata        ), //o
    .io_bram_rddata      (apb3tobram_1_io_bram_rddata        )  //i
  );
  Apb3Gpio gpioCtrl (
    .io_apb_PADDR           (gpioCtrl_io_apb_PADDR              ), //i
    .io_apb_PSEL            (apb3Router_1_io_outputs_1_PSEL     ), //i
    .io_apb_PENABLE         (apb3Router_1_io_outputs_1_PENABLE  ), //i
    .io_apb_PREADY          (gpioCtrl_io_apb_PREADY             ), //o
    .io_apb_PWRITE          (apb3Router_1_io_outputs_1_PWRITE   ), //i
    .io_apb_PWDATA          (apb3Router_1_io_outputs_1_PWDATA   ), //i
    .io_apb_PRDATA          (gpioCtrl_io_apb_PRDATA             ), //o
    .io_apb_PSLVERROR       (gpioCtrl_io_apb_PSLVERROR          ), //o
    .io_gpio_read           (gpio_read                          ), //i
    .io_gpio_write          (gpioCtrl_io_gpio_write             ), //o
    .io_gpio_writeEnable    (gpioCtrl_io_gpio_writeEnable       ), //o
    .io_value               (gpioCtrl_io_value                  ), //o
    .clk                    (clk                                ), //i
    .reset                  (reset                              )  //i
  );
  Apb3Decoder apb_decoder (
    .io_input_PADDR         (emiftoapb_1_apb_PADDR            ), //i
    .io_input_PSEL          (emiftoapb_1_apb_PSEL             ), //i
    .io_input_PENABLE       (emiftoapb_1_apb_PENABLE          ), //i
    .io_input_PREADY        (apb_decoder_io_input_PREADY      ), //o
    .io_input_PWRITE        (emiftoapb_1_apb_PWRITE           ), //i
    .io_input_PWDATA        (emiftoapb_1_apb_PWDATA           ), //i
    .io_input_PRDATA        (apb_decoder_io_input_PRDATA      ), //o
    .io_input_PSLVERROR     (apb_decoder_io_input_PSLVERROR   ), //o
    .io_output_PADDR        (apb_decoder_io_output_PADDR      ), //o
    .io_output_PSEL         (apb_decoder_io_output_PSEL       ), //o
    .io_output_PENABLE      (apb_decoder_io_output_PENABLE    ), //o
    .io_output_PREADY       (apb3Router_1_io_input_PREADY     ), //i
    .io_output_PWRITE       (apb_decoder_io_output_PWRITE     ), //o
    .io_output_PWDATA       (apb_decoder_io_output_PWDATA     ), //o
    .io_output_PRDATA       (apb3Router_1_io_input_PRDATA     ), //i
    .io_output_PSLVERROR    (apb3Router_1_io_input_PSLVERROR  )  //i
  );
  Apb3Router apb3Router_1 (
    .io_input_PADDR            (apb_decoder_io_output_PADDR        ), //i
    .io_input_PSEL             (apb_decoder_io_output_PSEL         ), //i
    .io_input_PENABLE          (apb_decoder_io_output_PENABLE      ), //i
    .io_input_PREADY           (apb3Router_1_io_input_PREADY       ), //o
    .io_input_PWRITE           (apb_decoder_io_output_PWRITE       ), //i
    .io_input_PWDATA           (apb_decoder_io_output_PWDATA       ), //i
    .io_input_PRDATA           (apb3Router_1_io_input_PRDATA       ), //o
    .io_input_PSLVERROR        (apb3Router_1_io_input_PSLVERROR    ), //o
    .io_outputs_0_PADDR        (apb3Router_1_io_outputs_0_PADDR    ), //o
    .io_outputs_0_PSEL         (apb3Router_1_io_outputs_0_PSEL     ), //o
    .io_outputs_0_PENABLE      (apb3Router_1_io_outputs_0_PENABLE  ), //o
    .io_outputs_0_PREADY       (apb3tobram_1_io_apb_PREADY         ), //i
    .io_outputs_0_PWRITE       (apb3Router_1_io_outputs_0_PWRITE   ), //o
    .io_outputs_0_PWDATA       (apb3Router_1_io_outputs_0_PWDATA   ), //o
    .io_outputs_0_PRDATA       (apb3tobram_1_io_apb_PRDATA         ), //i
    .io_outputs_0_PSLVERROR    (apb3tobram_1_io_apb_PSLVERROR      ), //i
    .io_outputs_1_PADDR        (apb3Router_1_io_outputs_1_PADDR    ), //o
    .io_outputs_1_PSEL         (apb3Router_1_io_outputs_1_PSEL     ), //o
    .io_outputs_1_PENABLE      (apb3Router_1_io_outputs_1_PENABLE  ), //o
    .io_outputs_1_PREADY       (gpioCtrl_io_apb_PREADY             ), //i
    .io_outputs_1_PWRITE       (apb3Router_1_io_outputs_1_PWRITE   ), //o
    .io_outputs_1_PWDATA       (apb3Router_1_io_outputs_1_PWDATA   ), //o
    .io_outputs_1_PRDATA       (gpioCtrl_io_apb_PRDATA             ), //i
    .io_outputs_1_PSLVERROR    (gpioCtrl_io_apb_PSLVERROR          ), //i
    .clk                       (clk                                ), //i
    .reset                     (reset                              )  //i
  );
  assign emif_emif_data_write = emiftoapb_1_emif_emif_data_write;
  assign emif_emif_data_writeEnable = emiftoapb_1_emif_emif_data_writeEnable;
  assign gpio_write = gpioCtrl_io_gpio_write;
  assign gpio_writeEnable = gpioCtrl_io_gpio_writeEnable;
  assign gpioCtrl_io_apb_PADDR = apb3Router_1_io_outputs_1_PADDR[3:0];
  assign _zz_io_bram_rddata = (apb3tobram_1_io_bram_en && (apb3tobram_1_io_bram_we == 4'b0000));
  assign apb3tobram_1_io_bram_rddata = _zz_mem_port1;

endmodule

module Apb3Router (
  input      [19:0]   io_input_PADDR,
  input      [1:0]    io_input_PSEL,
  input               io_input_PENABLE,
  output              io_input_PREADY,
  input               io_input_PWRITE,
  input      [31:0]   io_input_PWDATA,
  output     [31:0]   io_input_PRDATA,
  output              io_input_PSLVERROR,
  output     [19:0]   io_outputs_0_PADDR,
  output     [0:0]    io_outputs_0_PSEL,
  output              io_outputs_0_PENABLE,
  input               io_outputs_0_PREADY,
  output              io_outputs_0_PWRITE,
  output     [31:0]   io_outputs_0_PWDATA,
  input      [31:0]   io_outputs_0_PRDATA,
  input               io_outputs_0_PSLVERROR,
  output     [19:0]   io_outputs_1_PADDR,
  output     [0:0]    io_outputs_1_PSEL,
  output              io_outputs_1_PENABLE,
  input               io_outputs_1_PREADY,
  output              io_outputs_1_PWRITE,
  output     [31:0]   io_outputs_1_PWDATA,
  input      [31:0]   io_outputs_1_PRDATA,
  input               io_outputs_1_PSLVERROR,
  input               clk,
  input               reset
);
  reg                 _zz_io_input_PREADY;
  reg        [31:0]   _zz_io_input_PRDATA;
  reg                 _zz_io_input_PSLVERROR;
  wire                _zz_selIndex;
  reg        [0:0]    selIndex;

  always @(*) begin
    case(selIndex)
      1'b0 : begin
        _zz_io_input_PREADY = io_outputs_0_PREADY;
        _zz_io_input_PRDATA = io_outputs_0_PRDATA;
        _zz_io_input_PSLVERROR = io_outputs_0_PSLVERROR;
      end
      default : begin
        _zz_io_input_PREADY = io_outputs_1_PREADY;
        _zz_io_input_PRDATA = io_outputs_1_PRDATA;
        _zz_io_input_PSLVERROR = io_outputs_1_PSLVERROR;
      end
    endcase
  end

  assign io_outputs_0_PADDR = io_input_PADDR;
  assign io_outputs_0_PENABLE = io_input_PENABLE;
  assign io_outputs_0_PSEL[0] = io_input_PSEL[0];
  assign io_outputs_0_PWRITE = io_input_PWRITE;
  assign io_outputs_0_PWDATA = io_input_PWDATA;
  assign io_outputs_1_PADDR = io_input_PADDR;
  assign io_outputs_1_PENABLE = io_input_PENABLE;
  assign io_outputs_1_PSEL[0] = io_input_PSEL[1];
  assign io_outputs_1_PWRITE = io_input_PWRITE;
  assign io_outputs_1_PWDATA = io_input_PWDATA;
  assign _zz_selIndex = io_input_PSEL[1];
  assign io_input_PREADY = _zz_io_input_PREADY;
  assign io_input_PRDATA = _zz_io_input_PRDATA;
  assign io_input_PSLVERROR = _zz_io_input_PSLVERROR;
  always @(posedge clk) begin
    selIndex <= _zz_selIndex;
  end


endmodule

module Apb3Decoder (
  input      [19:0]   io_input_PADDR,
  input      [0:0]    io_input_PSEL,
  input               io_input_PENABLE,
  output reg          io_input_PREADY,
  input               io_input_PWRITE,
  input      [31:0]   io_input_PWDATA,
  output     [31:0]   io_input_PRDATA,
  output reg          io_input_PSLVERROR,
  output     [19:0]   io_output_PADDR,
  output reg [1:0]    io_output_PSEL,
  output              io_output_PENABLE,
  input               io_output_PREADY,
  output              io_output_PWRITE,
  output     [31:0]   io_output_PWDATA,
  input      [31:0]   io_output_PRDATA,
  input               io_output_PSLVERROR
);
  wire                when_Apb3Decoder_l84;

  assign io_output_PADDR = io_input_PADDR;
  assign io_output_PENABLE = io_input_PENABLE;
  assign io_output_PWRITE = io_input_PWRITE;
  assign io_output_PWDATA = io_input_PWDATA;
  always @(*) begin
    io_output_PSEL[0] = (((io_input_PADDR & (~ 20'h00fff)) == 20'h0) && io_input_PSEL[0]);
    io_output_PSEL[1] = (((io_input_PADDR & (~ 20'h00fff)) == 20'h10000) && io_input_PSEL[0]);
  end

  always @(*) begin
    io_input_PREADY = io_output_PREADY;
    if(when_Apb3Decoder_l84) begin
      io_input_PREADY = 1'b1;
    end
  end

  assign io_input_PRDATA = io_output_PRDATA;
  always @(*) begin
    io_input_PSLVERROR = io_output_PSLVERROR;
    if(when_Apb3Decoder_l84) begin
      io_input_PSLVERROR = 1'b1;
    end
  end

  assign when_Apb3Decoder_l84 = (io_input_PSEL[0] && (io_output_PSEL == 2'b00));

endmodule

module Apb3Gpio (
  input      [3:0]    io_apb_PADDR,
  input      [0:0]    io_apb_PSEL,
  input               io_apb_PENABLE,
  output              io_apb_PREADY,
  input               io_apb_PWRITE,
  input      [31:0]   io_apb_PWDATA,
  output reg [31:0]   io_apb_PRDATA,
  output              io_apb_PSLVERROR,
  input      [31:0]   io_gpio_read,
  output     [31:0]   io_gpio_write,
  output     [31:0]   io_gpio_writeEnable,
  output     [31:0]   io_value,
  input               clk,
  input               reset
);
  wire       [31:0]   io_gpio_read_buffercc_io_dataOut;
  wire                ctrl_askWrite;
  wire                ctrl_askRead;
  wire                ctrl_doWrite;
  wire                ctrl_doRead;
  reg        [31:0]   io_gpio_write_driver;
  reg        [31:0]   io_gpio_writeEnable_driver;

  BufferCC io_gpio_read_buffercc (
    .io_dataIn     (io_gpio_read                      ), //i
    .io_dataOut    (io_gpio_read_buffercc_io_dataOut  ), //o
    .clk           (clk                               ), //i
    .reset         (reset                             )  //i
  );
  assign io_value = io_gpio_read_buffercc_io_dataOut;
  assign io_apb_PREADY = 1'b1;
  always @(*) begin
    io_apb_PRDATA = 32'h0;
    case(io_apb_PADDR)
      4'b0000 : begin
        io_apb_PRDATA[31 : 0] = io_value;
      end
      4'b0100 : begin
        io_apb_PRDATA[31 : 0] = io_gpio_write_driver;
      end
      4'b1000 : begin
        io_apb_PRDATA[31 : 0] = io_gpio_writeEnable_driver;
      end
      default : begin
      end
    endcase
  end

  assign io_apb_PSLVERROR = 1'b0;
  assign ctrl_askWrite = ((io_apb_PSEL[0] && io_apb_PENABLE) && io_apb_PWRITE);
  assign ctrl_askRead = ((io_apb_PSEL[0] && io_apb_PENABLE) && (! io_apb_PWRITE));
  assign ctrl_doWrite = (((io_apb_PSEL[0] && io_apb_PENABLE) && io_apb_PREADY) && io_apb_PWRITE);
  assign ctrl_doRead = (((io_apb_PSEL[0] && io_apb_PENABLE) && io_apb_PREADY) && (! io_apb_PWRITE));
  assign io_gpio_write = io_gpio_write_driver;
  assign io_gpio_writeEnable = io_gpio_writeEnable_driver;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      io_gpio_writeEnable_driver <= 32'h0;
    end else begin
      case(io_apb_PADDR)
        4'b1000 : begin
          if(ctrl_doWrite) begin
            io_gpio_writeEnable_driver <= io_apb_PWDATA[31 : 0];
          end
        end
        default : begin
        end
      endcase
    end
  end

  always @(posedge clk) begin
    case(io_apb_PADDR)
      4'b0100 : begin
        if(ctrl_doWrite) begin
          io_gpio_write_driver <= io_apb_PWDATA[31 : 0];
        end
      end
      default : begin
      end
    endcase
  end


endmodule

module Apb3ToBram (
  input      [19:0]   io_apb_PADDR,
  input      [0:0]    io_apb_PSEL,
  input               io_apb_PENABLE,
  output              io_apb_PREADY,
  input               io_apb_PWRITE,
  input      [31:0]   io_apb_PWDATA,
  output     [31:0]   io_apb_PRDATA,
  output              io_apb_PSLVERROR,
  output              io_bram_en,
  output reg [3:0]    io_bram_we,
  output     [7:0]    io_bram_addr,
  output     [31:0]   io_bram_wrdata,
  input      [31:0]   io_bram_rddata
);
  wire                when_Apb3ToBram_l41;

  assign io_apb_PREADY = 1'b1;
  assign io_apb_PSLVERROR = 1'b0;
  assign io_bram_addr = io_apb_PADDR[7:0];
  assign io_bram_en = io_apb_PSEL[0];
  assign when_Apb3ToBram_l41 = ((io_apb_PENABLE && io_apb_PWRITE) && io_apb_PSEL[0]);
  always @(*) begin
    if(when_Apb3ToBram_l41) begin
      io_bram_we = 4'b1111;
    end else begin
      io_bram_we = 4'b0000;
    end
  end

  assign io_bram_wrdata = io_apb_PWDATA;
  assign io_apb_PRDATA = io_bram_rddata;

endmodule

module EmifToApb (
  input      [23:0]   emif_emif_addr,
  input      [15:0]   emif_emif_data_read,
  output reg [15:0]   emif_emif_data_write,
  output              emif_emif_data_writeEnable,
  input               emif_emif_cs,
  input               emif_emif_we,
  input               emif_emif_oe,
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
  reg                 penable;
  reg        [15:0]   emifdatatemp;
  reg                 penable_regNext;
  wire                when_EmifToApb_l68;
  wire                when_EmifToApb_l78;
  wire                when_EmifToApb_l79;
  reg        [15:0]   _zz_emif_emif_data_write;
  wire                when_EmifToApb_l81;
  reg        [15:0]   _zz_emif_emif_data_write_1;

  assign apb_PADDR = emif_emif_addr[19:0];
  assign apb_PSEL = (~ emif_emif_cs);
  assign apb_PENABLE = ((penable && (! penable_regNext)) ? penable : 1'b0);
  assign apb_PWRITE = (((! emif_emif_we) && emif_emif_oe) && emif_emif_addr[23]);
  assign when_EmifToApb_l68 = (((! emif_emif_we) && emif_emif_oe) && (! emif_emif_addr[23]));
  assign apb_PWDATA = {emif_emif_data_read,emifdatatemp};
  assign emif_emif_data_writeEnable = (! emif_emif_oe);
  assign when_EmifToApb_l78 = emif_emif_addr[23];
  assign when_EmifToApb_l79 = (! emif_emif_oe);
  always @(*) begin
    if(when_EmifToApb_l78) begin
      emif_emif_data_write = _zz_emif_emif_data_write;
    end else begin
      emif_emif_data_write = _zz_emif_emif_data_write_1;
    end
  end

  assign when_EmifToApb_l81 = (! emif_emif_oe);
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      penable <= 1'b0;
    end else begin
      penable <= (((! emif_emif_oe) || (! emif_emif_we)) && emif_emif_addr[23]);
    end
  end

  always @(posedge clk) begin
    penable_regNext <= penable;
    if(when_EmifToApb_l68) begin
      emifdatatemp <= emif_emif_data_read;
    end
  end

  always @(posedge clk) begin
    if(when_EmifToApb_l79) begin
      _zz_emif_emif_data_write <= apb_PRDATA[31 : 16];
    end
  end

  always @(posedge clk) begin
    if(when_EmifToApb_l81) begin
      _zz_emif_emif_data_write_1 <= apb_PRDATA[15 : 0];
    end
  end


endmodule

module BufferCC (
  input      [31:0]   io_dataIn,
  output     [31:0]   io_dataOut,
  input               clk,
  input               reset
);
  (* async_reg = "true" *) reg        [31:0]   buffers_0;
  (* async_reg = "true" *) reg        [31:0]   buffers_1;

  assign io_dataOut = buffers_1;
  always @(posedge clk) begin
    buffers_0 <= io_dataIn;
    buffers_1 <= buffers_0;
  end


endmodule
