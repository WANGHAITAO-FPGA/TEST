// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : Phpa_Top



module Phpa_Top (
  input      [18:0]   emif_emif_addr,
  input               emif_emif_cs,
  input               emif_emif_we,
  input               emif_emif_oe,
  output              ad5544_A_AD5544_CS,
  output              ad5544_A_AD5544_LDAC,
  output              ad5544_A_AD5544_MSB,
  output              ad5544_A_AD5544_RS,
  output              ad5544_A_AD5544_SCLK,
  output              ad5544_A_AD5544_SDIN,
  output              ad5544_B_AD5544_CS,
  output              ad5544_B_AD5544_LDAC,
  output              ad5544_B_AD5544_MSB,
  output              ad5544_B_AD5544_RS,
  output              ad5544_B_AD5544_SCLK,
  output              ad5544_B_AD5544_SDIN,
  output              ad5544_C_AD5544_CS,
  output              ad5544_C_AD5544_LDAC,
  output              ad5544_C_AD5544_MSB,
  output              ad5544_C_AD5544_RS,
  output              ad5544_C_AD5544_SCLK,
  output              ad5544_C_AD5544_SDIN,
  output              biss_c_enc_clk,
  input               biss_c_enc_data,
  input      [15:0]   ad7606_ad_data,
  input               ad7606_ad_busy,
  input               ad7606_first_data,
  output     [2:0]    ad7606_ad_os,
  output              ad7606_ad_cs,
  output              ad7606_ad_rd,
  output              ad7606_ad_reset,
  output              ad7606_ad_convsta,
  output              ad7606_ad_convstb,
  output              ad7606_ad_range,
  input               clk,
  input               reset,
  output              led,
   inout     [15:0]   emif_emif_data
);
  wire       [3:0]    area_apbtimer_apb_PADDR;
  wire       [3:0]    area_ad5544_triger_apb_PADDR;
  wire       [3:0]    area_ad5544_A_Ctrl_apb_PADDR;
  wire                area_ad5544_A_Ctrl_ad5544_enable;
  wire       [3:0]    area_ad5544_B_Ctrl_apb_PADDR;
  wire                area_ad5544_B_Ctrl_ad5544_enable;
  wire       [3:0]    area_ad5544_C_Ctrl_apb_PADDR;
  wire                area_ad5544_C_Ctrl_ad5544_enable;
  wire       [3:0]    area_biss_c_ctrl_apb_PADDR;
  wire       [3:0]    area_ad7606_ctrl_apb_PADDR;
  wire       [15:0]   area_emif_interface_emif_emif_data_write;
  wire                area_emif_interface_emif_emif_data_writeEnable;
  wire       [18:0]   area_emif_interface_apb_PADDR;
  wire       [0:0]    area_emif_interface_apb_PSEL;
  wire                area_emif_interface_apb_PENABLE;
  wire                area_emif_interface_apb_PWRITE;
  wire       [15:0]   area_emif_interface_apb_PWDATA;
  wire                area_apbtimer_apb_PREADY;
  wire       [15:0]   area_apbtimer_apb_PRDATA;
  wire                area_apbtimer_apb_PSLVERROR;
  wire                area_apbtimer_interrupt;
  wire                area_ad5544_triger_apb_PREADY;
  wire       [15:0]   area_ad5544_triger_apb_PRDATA;
  wire                area_ad5544_triger_apb_PSLVERROR;
  wire                area_ad5544_triger_ad5544_tri;
  wire                area_ad5544_A_Ctrl_apb_PREADY;
  wire       [15:0]   area_ad5544_A_Ctrl_apb_PRDATA;
  wire                area_ad5544_A_Ctrl_apb_PSLVERROR;
  wire                area_ad5544_A_Ctrl_ad5544Interface_AD5544_CS;
  wire                area_ad5544_A_Ctrl_ad5544Interface_AD5544_LDAC;
  wire                area_ad5544_A_Ctrl_ad5544Interface_AD5544_MSB;
  wire                area_ad5544_A_Ctrl_ad5544Interface_AD5544_RS;
  wire                area_ad5544_A_Ctrl_ad5544Interface_AD5544_SCLK;
  wire                area_ad5544_A_Ctrl_ad5544Interface_AD5544_SDIN;
  wire                area_ad5544_B_Ctrl_apb_PREADY;
  wire       [15:0]   area_ad5544_B_Ctrl_apb_PRDATA;
  wire                area_ad5544_B_Ctrl_apb_PSLVERROR;
  wire                area_ad5544_B_Ctrl_ad5544Interface_AD5544_CS;
  wire                area_ad5544_B_Ctrl_ad5544Interface_AD5544_LDAC;
  wire                area_ad5544_B_Ctrl_ad5544Interface_AD5544_MSB;
  wire                area_ad5544_B_Ctrl_ad5544Interface_AD5544_RS;
  wire                area_ad5544_B_Ctrl_ad5544Interface_AD5544_SCLK;
  wire                area_ad5544_B_Ctrl_ad5544Interface_AD5544_SDIN;
  wire                area_ad5544_C_Ctrl_apb_PREADY;
  wire       [15:0]   area_ad5544_C_Ctrl_apb_PRDATA;
  wire                area_ad5544_C_Ctrl_apb_PSLVERROR;
  wire                area_ad5544_C_Ctrl_ad5544Interface_AD5544_CS;
  wire                area_ad5544_C_Ctrl_ad5544Interface_AD5544_LDAC;
  wire                area_ad5544_C_Ctrl_ad5544Interface_AD5544_MSB;
  wire                area_ad5544_C_Ctrl_ad5544Interface_AD5544_RS;
  wire                area_ad5544_C_Ctrl_ad5544Interface_AD5544_SCLK;
  wire                area_ad5544_C_Ctrl_ad5544Interface_AD5544_SDIN;
  wire                area_biss_c_ctrl_apb_PREADY;
  wire       [15:0]   area_biss_c_ctrl_apb_PRDATA;
  wire                area_biss_c_ctrl_apb_PSLVERROR;
  wire                area_biss_c_ctrl_bisscInterface_enc_clk;
  wire                area_ad7606_ctrl_apb_PREADY;
  wire       [15:0]   area_ad7606_ctrl_apb_PRDATA;
  wire                area_ad7606_ctrl_apb_PSLVERROR;
  wire       [2:0]    area_ad7606_ctrl_ad7606Interface_ad_os;
  wire                area_ad7606_ctrl_ad7606Interface_ad_cs;
  wire                area_ad7606_ctrl_ad7606Interface_ad_rd;
  wire                area_ad7606_ctrl_ad7606Interface_ad_reset;
  wire                area_ad7606_ctrl_ad7606Interface_ad_convsta;
  wire                area_ad7606_ctrl_ad7606Interface_ad_convstb;
  wire                area_ad7606_ctrl_ad7606Interface_ad_range;
  wire                apb_decoder_io_input_PREADY;
  wire       [15:0]   apb_decoder_io_input_PRDATA;
  wire                apb_decoder_io_input_PSLVERROR;
  wire       [18:0]   apb_decoder_io_output_PADDR;
  wire       [6:0]    apb_decoder_io_output_PSEL;
  wire                apb_decoder_io_output_PENABLE;
  wire                apb_decoder_io_output_PWRITE;
  wire       [15:0]   apb_decoder_io_output_PWDATA;
  wire                apb3Router_1_io_input_PREADY;
  wire       [15:0]   apb3Router_1_io_input_PRDATA;
  wire                apb3Router_1_io_input_PSLVERROR;
  wire       [18:0]   apb3Router_1_io_outputs_0_PADDR;
  wire       [0:0]    apb3Router_1_io_outputs_0_PSEL;
  wire                apb3Router_1_io_outputs_0_PENABLE;
  wire                apb3Router_1_io_outputs_0_PWRITE;
  wire       [15:0]   apb3Router_1_io_outputs_0_PWDATA;
  wire       [18:0]   apb3Router_1_io_outputs_1_PADDR;
  wire       [0:0]    apb3Router_1_io_outputs_1_PSEL;
  wire                apb3Router_1_io_outputs_1_PENABLE;
  wire                apb3Router_1_io_outputs_1_PWRITE;
  wire       [15:0]   apb3Router_1_io_outputs_1_PWDATA;
  wire       [18:0]   apb3Router_1_io_outputs_2_PADDR;
  wire       [0:0]    apb3Router_1_io_outputs_2_PSEL;
  wire                apb3Router_1_io_outputs_2_PENABLE;
  wire                apb3Router_1_io_outputs_2_PWRITE;
  wire       [15:0]   apb3Router_1_io_outputs_2_PWDATA;
  wire       [18:0]   apb3Router_1_io_outputs_3_PADDR;
  wire       [0:0]    apb3Router_1_io_outputs_3_PSEL;
  wire                apb3Router_1_io_outputs_3_PENABLE;
  wire                apb3Router_1_io_outputs_3_PWRITE;
  wire       [15:0]   apb3Router_1_io_outputs_3_PWDATA;
  wire       [18:0]   apb3Router_1_io_outputs_4_PADDR;
  wire       [0:0]    apb3Router_1_io_outputs_4_PSEL;
  wire                apb3Router_1_io_outputs_4_PENABLE;
  wire                apb3Router_1_io_outputs_4_PWRITE;
  wire       [15:0]   apb3Router_1_io_outputs_4_PWDATA;
  wire       [18:0]   apb3Router_1_io_outputs_5_PADDR;
  wire       [0:0]    apb3Router_1_io_outputs_5_PSEL;
  wire                apb3Router_1_io_outputs_5_PENABLE;
  wire                apb3Router_1_io_outputs_5_PWRITE;
  wire       [15:0]   apb3Router_1_io_outputs_5_PWDATA;
  wire       [18:0]   apb3Router_1_io_outputs_6_PADDR;
  wire       [0:0]    apb3Router_1_io_outputs_6_PSEL;
  wire                apb3Router_1_io_outputs_6_PENABLE;
  wire                apb3Router_1_io_outputs_6_PWRITE;
  wire       [15:0]   apb3Router_1_io_outputs_6_PWDATA;
  wire       [12:0]   _zz_area_counter_valueNext;
  wire       [0:0]    _zz_area_counter_valueNext_1;
  reg                 _zz_emif_emif_data;
  wire       [15:0]   _zz_emif_emif_data_b;
  wire       [15:0]   _zz_emif_emif_data_b_1;
  wire                _zz_emif_emif_data_b_2;
  reg                 area_interrupt_temp;
  reg                 area_apbtimer_interrupt_delay_1;
  reg                 area_apbtimer_interrupt_delay_1_1;
  reg                 area_apbtimer_interrupt_delay_2;
  reg                 area_apbtimer_interrupt_delay_1_2;
  reg                 area_apbtimer_interrupt_delay_2_1;
  reg                 area_apbtimer_interrupt_delay_3;
  reg                 area_ledtemp;
  wire                area_counter_willIncrement;
  reg                 area_counter_willClear;
  reg        [12:0]   area_counter_valueNext;
  reg        [12:0]   area_counter_value;
  wire                area_counter_willOverflowIfInc;
  wire                area_counter_willOverflow;
  wire       [0:0]    emif_emif_cs_b;
  wire       [0:0]    emif_emif_oe_b;
  wire       [0:0]    emif_emif_we_b;
  wire       [32:0]   emif_emif_data_b;
  wire       [18:0]   emif_emif_addr_b;
  wire       [18:0]   apb_PADDR_b;
  wire       [0:0]    apb_PENABLE_b;
  wire       [0:0]    apb_PREADY_b;
  wire       [0:0]    apb_PSEL_b;
  wire       [15:0]   apb_PWDATA_b;
  wire       [15:0]   apb_PRDATA_b;

  assign _zz_area_counter_valueNext_1 = area_counter_willIncrement;
  assign _zz_area_counter_valueNext = {12'd0, _zz_area_counter_valueNext_1};
  Emif_Apb area_emif_interface (
    .emif_emif_addr                (emif_emif_addr                                  ), //i
    .emif_emif_data_read           (_zz_emif_emif_data_b                            ), //i
    .emif_emif_data_write          (area_emif_interface_emif_emif_data_write        ), //o
    .emif_emif_data_writeEnable    (area_emif_interface_emif_emif_data_writeEnable  ), //o
    .emif_emif_cs                  (emif_emif_cs                                    ), //i
    .emif_emif_we                  (emif_emif_we                                    ), //i
    .emif_emif_oe                  (emif_emif_oe                                    ), //i
    .apb_PADDR                     (area_emif_interface_apb_PADDR                   ), //o
    .apb_PSEL                      (area_emif_interface_apb_PSEL                    ), //o
    .apb_PENABLE                   (area_emif_interface_apb_PENABLE                 ), //o
    .apb_PREADY                    (apb_decoder_io_input_PREADY                     ), //i
    .apb_PWRITE                    (area_emif_interface_apb_PWRITE                  ), //o
    .apb_PWDATA                    (area_emif_interface_apb_PWDATA                  ), //o
    .apb_PRDATA                    (apb_decoder_io_input_PRDATA                     ), //i
    .apb_PSLVERROR                 (apb_decoder_io_input_PSLVERROR                  ), //i
    .clk                           (clk                                             ), //i
    .reset                         (reset                                           )  //i
  );
  ApbTimer area_apbtimer (
    .apb_PADDR        (area_apbtimer_apb_PADDR            ), //i
    .apb_PSEL         (apb3Router_1_io_outputs_0_PSEL     ), //i
    .apb_PENABLE      (apb3Router_1_io_outputs_0_PENABLE  ), //i
    .apb_PREADY       (area_apbtimer_apb_PREADY           ), //o
    .apb_PWRITE       (apb3Router_1_io_outputs_0_PWRITE   ), //i
    .apb_PWDATA       (apb3Router_1_io_outputs_0_PWDATA   ), //i
    .apb_PRDATA       (area_apbtimer_apb_PRDATA           ), //o
    .apb_PSLVERROR    (area_apbtimer_apb_PSLVERROR        ), //o
    .interrupt        (area_apbtimer_interrupt            ), //o
    .clk              (clk                                ), //i
    .reset            (reset                              )  //i
  );
  AD5544_triger area_ad5544_triger (
    .apb_PADDR        (area_ad5544_triger_apb_PADDR       ), //i
    .apb_PSEL         (apb3Router_1_io_outputs_1_PSEL     ), //i
    .apb_PENABLE      (apb3Router_1_io_outputs_1_PENABLE  ), //i
    .apb_PREADY       (area_ad5544_triger_apb_PREADY      ), //o
    .apb_PWRITE       (apb3Router_1_io_outputs_1_PWRITE   ), //i
    .apb_PWDATA       (apb3Router_1_io_outputs_1_PWDATA   ), //i
    .apb_PRDATA       (area_ad5544_triger_apb_PRDATA      ), //o
    .apb_PSLVERROR    (area_ad5544_triger_apb_PSLVERROR   ), //o
    .ad5544_tri       (area_ad5544_triger_ad5544_tri      ), //o
    .clk              (clk                                ), //i
    .reset            (reset                              )  //i
  );
  AD5544 area_ad5544_A_Ctrl (
    .apb_PADDR                      (area_ad5544_A_Ctrl_apb_PADDR                    ), //i
    .apb_PSEL                       (apb3Router_1_io_outputs_2_PSEL                  ), //i
    .apb_PENABLE                    (apb3Router_1_io_outputs_2_PENABLE               ), //i
    .apb_PREADY                     (area_ad5544_A_Ctrl_apb_PREADY                   ), //o
    .apb_PWRITE                     (apb3Router_1_io_outputs_2_PWRITE                ), //i
    .apb_PWDATA                     (apb3Router_1_io_outputs_2_PWDATA                ), //i
    .apb_PRDATA                     (area_ad5544_A_Ctrl_apb_PRDATA                   ), //o
    .apb_PSLVERROR                  (area_ad5544_A_Ctrl_apb_PSLVERROR                ), //o
    .ad5544Interface_AD5544_CS      (area_ad5544_A_Ctrl_ad5544Interface_AD5544_CS    ), //o
    .ad5544Interface_AD5544_LDAC    (area_ad5544_A_Ctrl_ad5544Interface_AD5544_LDAC  ), //o
    .ad5544Interface_AD5544_MSB     (area_ad5544_A_Ctrl_ad5544Interface_AD5544_MSB   ), //o
    .ad5544Interface_AD5544_RS      (area_ad5544_A_Ctrl_ad5544Interface_AD5544_RS    ), //o
    .ad5544Interface_AD5544_SCLK    (area_ad5544_A_Ctrl_ad5544Interface_AD5544_SCLK  ), //o
    .ad5544Interface_AD5544_SDIN    (area_ad5544_A_Ctrl_ad5544Interface_AD5544_SDIN  ), //o
    .clk                            (clk                                             ), //i
    .reset                          (reset                                           ), //i
    .ad5544_enable                  (area_ad5544_A_Ctrl_ad5544_enable                )  //i
  );
  AD5544 area_ad5544_B_Ctrl (
    .apb_PADDR                      (area_ad5544_B_Ctrl_apb_PADDR                    ), //i
    .apb_PSEL                       (apb3Router_1_io_outputs_3_PSEL                  ), //i
    .apb_PENABLE                    (apb3Router_1_io_outputs_3_PENABLE               ), //i
    .apb_PREADY                     (area_ad5544_B_Ctrl_apb_PREADY                   ), //o
    .apb_PWRITE                     (apb3Router_1_io_outputs_3_PWRITE                ), //i
    .apb_PWDATA                     (apb3Router_1_io_outputs_3_PWDATA                ), //i
    .apb_PRDATA                     (area_ad5544_B_Ctrl_apb_PRDATA                   ), //o
    .apb_PSLVERROR                  (area_ad5544_B_Ctrl_apb_PSLVERROR                ), //o
    .ad5544Interface_AD5544_CS      (area_ad5544_B_Ctrl_ad5544Interface_AD5544_CS    ), //o
    .ad5544Interface_AD5544_LDAC    (area_ad5544_B_Ctrl_ad5544Interface_AD5544_LDAC  ), //o
    .ad5544Interface_AD5544_MSB     (area_ad5544_B_Ctrl_ad5544Interface_AD5544_MSB   ), //o
    .ad5544Interface_AD5544_RS      (area_ad5544_B_Ctrl_ad5544Interface_AD5544_RS    ), //o
    .ad5544Interface_AD5544_SCLK    (area_ad5544_B_Ctrl_ad5544Interface_AD5544_SCLK  ), //o
    .ad5544Interface_AD5544_SDIN    (area_ad5544_B_Ctrl_ad5544Interface_AD5544_SDIN  ), //o
    .clk                            (clk                                             ), //i
    .reset                          (reset                                           ), //i
    .ad5544_enable                  (area_ad5544_B_Ctrl_ad5544_enable                )  //i
  );
  AD5544 area_ad5544_C_Ctrl (
    .apb_PADDR                      (area_ad5544_C_Ctrl_apb_PADDR                    ), //i
    .apb_PSEL                       (apb3Router_1_io_outputs_4_PSEL                  ), //i
    .apb_PENABLE                    (apb3Router_1_io_outputs_4_PENABLE               ), //i
    .apb_PREADY                     (area_ad5544_C_Ctrl_apb_PREADY                   ), //o
    .apb_PWRITE                     (apb3Router_1_io_outputs_4_PWRITE                ), //i
    .apb_PWDATA                     (apb3Router_1_io_outputs_4_PWDATA                ), //i
    .apb_PRDATA                     (area_ad5544_C_Ctrl_apb_PRDATA                   ), //o
    .apb_PSLVERROR                  (area_ad5544_C_Ctrl_apb_PSLVERROR                ), //o
    .ad5544Interface_AD5544_CS      (area_ad5544_C_Ctrl_ad5544Interface_AD5544_CS    ), //o
    .ad5544Interface_AD5544_LDAC    (area_ad5544_C_Ctrl_ad5544Interface_AD5544_LDAC  ), //o
    .ad5544Interface_AD5544_MSB     (area_ad5544_C_Ctrl_ad5544Interface_AD5544_MSB   ), //o
    .ad5544Interface_AD5544_RS      (area_ad5544_C_Ctrl_ad5544Interface_AD5544_RS    ), //o
    .ad5544Interface_AD5544_SCLK    (area_ad5544_C_Ctrl_ad5544Interface_AD5544_SCLK  ), //o
    .ad5544Interface_AD5544_SDIN    (area_ad5544_C_Ctrl_ad5544Interface_AD5544_SDIN  ), //o
    .clk                            (clk                                             ), //i
    .reset                          (reset                                           ), //i
    .ad5544_enable                  (area_ad5544_C_Ctrl_ad5544_enable                )  //i
  );
  Biss_C area_biss_c_ctrl (
    .apb_PADDR                  (area_biss_c_ctrl_apb_PADDR               ), //i
    .apb_PSEL                   (apb3Router_1_io_outputs_5_PSEL           ), //i
    .apb_PENABLE                (apb3Router_1_io_outputs_5_PENABLE        ), //i
    .apb_PREADY                 (area_biss_c_ctrl_apb_PREADY              ), //o
    .apb_PWRITE                 (apb3Router_1_io_outputs_5_PWRITE         ), //i
    .apb_PWDATA                 (apb3Router_1_io_outputs_5_PWDATA         ), //i
    .apb_PRDATA                 (area_biss_c_ctrl_apb_PRDATA              ), //o
    .apb_PSLVERROR              (area_biss_c_ctrl_apb_PSLVERROR           ), //o
    .bisscInterface_enc_clk     (area_biss_c_ctrl_bisscInterface_enc_clk  ), //o
    .bisscInterface_enc_data    (biss_c_enc_data                          ), //i
    .clk                        (clk                                      ), //i
    .reset                      (reset                                    )  //i
  );
  AD7606 area_ad7606_ctrl (
    .apb_PADDR                     (area_ad7606_ctrl_apb_PADDR                   ), //i
    .apb_PSEL                      (apb3Router_1_io_outputs_6_PSEL               ), //i
    .apb_PENABLE                   (apb3Router_1_io_outputs_6_PENABLE            ), //i
    .apb_PREADY                    (area_ad7606_ctrl_apb_PREADY                  ), //o
    .apb_PWRITE                    (apb3Router_1_io_outputs_6_PWRITE             ), //i
    .apb_PWDATA                    (apb3Router_1_io_outputs_6_PWDATA             ), //i
    .apb_PRDATA                    (area_ad7606_ctrl_apb_PRDATA                  ), //o
    .apb_PSLVERROR                 (area_ad7606_ctrl_apb_PSLVERROR               ), //o
    .ad7606Interface_ad_data       (ad7606_ad_data                               ), //i
    .ad7606Interface_ad_busy       (ad7606_ad_busy                               ), //i
    .ad7606Interface_first_data    (ad7606_first_data                            ), //i
    .ad7606Interface_ad_os         (area_ad7606_ctrl_ad7606Interface_ad_os       ), //o
    .ad7606Interface_ad_cs         (area_ad7606_ctrl_ad7606Interface_ad_cs       ), //o
    .ad7606Interface_ad_rd         (area_ad7606_ctrl_ad7606Interface_ad_rd       ), //o
    .ad7606Interface_ad_reset      (area_ad7606_ctrl_ad7606Interface_ad_reset    ), //o
    .ad7606Interface_ad_convsta    (area_ad7606_ctrl_ad7606Interface_ad_convsta  ), //o
    .ad7606Interface_ad_convstb    (area_ad7606_ctrl_ad7606Interface_ad_convstb  ), //o
    .ad7606Interface_ad_range      (area_ad7606_ctrl_ad7606Interface_ad_range    ), //o
    .clk                           (clk                                          ), //i
    .reset                         (reset                                        )  //i
  );
  Apb3Decoder apb_decoder (
    .io_input_PADDR         (area_emif_interface_apb_PADDR    ), //i
    .io_input_PSEL          (area_emif_interface_apb_PSEL     ), //i
    .io_input_PENABLE       (area_emif_interface_apb_PENABLE  ), //i
    .io_input_PREADY        (apb_decoder_io_input_PREADY      ), //o
    .io_input_PWRITE        (area_emif_interface_apb_PWRITE   ), //i
    .io_input_PWDATA        (area_emif_interface_apb_PWDATA   ), //i
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
    .io_outputs_0_PREADY       (area_apbtimer_apb_PREADY           ), //i
    .io_outputs_0_PWRITE       (apb3Router_1_io_outputs_0_PWRITE   ), //o
    .io_outputs_0_PWDATA       (apb3Router_1_io_outputs_0_PWDATA   ), //o
    .io_outputs_0_PRDATA       (area_apbtimer_apb_PRDATA           ), //i
    .io_outputs_0_PSLVERROR    (area_apbtimer_apb_PSLVERROR        ), //i
    .io_outputs_1_PADDR        (apb3Router_1_io_outputs_1_PADDR    ), //o
    .io_outputs_1_PSEL         (apb3Router_1_io_outputs_1_PSEL     ), //o
    .io_outputs_1_PENABLE      (apb3Router_1_io_outputs_1_PENABLE  ), //o
    .io_outputs_1_PREADY       (area_ad5544_triger_apb_PREADY      ), //i
    .io_outputs_1_PWRITE       (apb3Router_1_io_outputs_1_PWRITE   ), //o
    .io_outputs_1_PWDATA       (apb3Router_1_io_outputs_1_PWDATA   ), //o
    .io_outputs_1_PRDATA       (area_ad5544_triger_apb_PRDATA      ), //i
    .io_outputs_1_PSLVERROR    (area_ad5544_triger_apb_PSLVERROR   ), //i
    .io_outputs_2_PADDR        (apb3Router_1_io_outputs_2_PADDR    ), //o
    .io_outputs_2_PSEL         (apb3Router_1_io_outputs_2_PSEL     ), //o
    .io_outputs_2_PENABLE      (apb3Router_1_io_outputs_2_PENABLE  ), //o
    .io_outputs_2_PREADY       (area_ad5544_A_Ctrl_apb_PREADY      ), //i
    .io_outputs_2_PWRITE       (apb3Router_1_io_outputs_2_PWRITE   ), //o
    .io_outputs_2_PWDATA       (apb3Router_1_io_outputs_2_PWDATA   ), //o
    .io_outputs_2_PRDATA       (area_ad5544_A_Ctrl_apb_PRDATA      ), //i
    .io_outputs_2_PSLVERROR    (area_ad5544_A_Ctrl_apb_PSLVERROR   ), //i
    .io_outputs_3_PADDR        (apb3Router_1_io_outputs_3_PADDR    ), //o
    .io_outputs_3_PSEL         (apb3Router_1_io_outputs_3_PSEL     ), //o
    .io_outputs_3_PENABLE      (apb3Router_1_io_outputs_3_PENABLE  ), //o
    .io_outputs_3_PREADY       (area_ad5544_B_Ctrl_apb_PREADY      ), //i
    .io_outputs_3_PWRITE       (apb3Router_1_io_outputs_3_PWRITE   ), //o
    .io_outputs_3_PWDATA       (apb3Router_1_io_outputs_3_PWDATA   ), //o
    .io_outputs_3_PRDATA       (area_ad5544_B_Ctrl_apb_PRDATA      ), //i
    .io_outputs_3_PSLVERROR    (area_ad5544_B_Ctrl_apb_PSLVERROR   ), //i
    .io_outputs_4_PADDR        (apb3Router_1_io_outputs_4_PADDR    ), //o
    .io_outputs_4_PSEL         (apb3Router_1_io_outputs_4_PSEL     ), //o
    .io_outputs_4_PENABLE      (apb3Router_1_io_outputs_4_PENABLE  ), //o
    .io_outputs_4_PREADY       (area_ad5544_C_Ctrl_apb_PREADY      ), //i
    .io_outputs_4_PWRITE       (apb3Router_1_io_outputs_4_PWRITE   ), //o
    .io_outputs_4_PWDATA       (apb3Router_1_io_outputs_4_PWDATA   ), //o
    .io_outputs_4_PRDATA       (area_ad5544_C_Ctrl_apb_PRDATA      ), //i
    .io_outputs_4_PSLVERROR    (area_ad5544_C_Ctrl_apb_PSLVERROR   ), //i
    .io_outputs_5_PADDR        (apb3Router_1_io_outputs_5_PADDR    ), //o
    .io_outputs_5_PSEL         (apb3Router_1_io_outputs_5_PSEL     ), //o
    .io_outputs_5_PENABLE      (apb3Router_1_io_outputs_5_PENABLE  ), //o
    .io_outputs_5_PREADY       (area_biss_c_ctrl_apb_PREADY        ), //i
    .io_outputs_5_PWRITE       (apb3Router_1_io_outputs_5_PWRITE   ), //o
    .io_outputs_5_PWDATA       (apb3Router_1_io_outputs_5_PWDATA   ), //o
    .io_outputs_5_PRDATA       (area_biss_c_ctrl_apb_PRDATA        ), //i
    .io_outputs_5_PSLVERROR    (area_biss_c_ctrl_apb_PSLVERROR     ), //i
    .io_outputs_6_PADDR        (apb3Router_1_io_outputs_6_PADDR    ), //o
    .io_outputs_6_PSEL         (apb3Router_1_io_outputs_6_PSEL     ), //o
    .io_outputs_6_PENABLE      (apb3Router_1_io_outputs_6_PENABLE  ), //o
    .io_outputs_6_PREADY       (area_ad7606_ctrl_apb_PREADY        ), //i
    .io_outputs_6_PWRITE       (apb3Router_1_io_outputs_6_PWRITE   ), //o
    .io_outputs_6_PWDATA       (apb3Router_1_io_outputs_6_PWDATA   ), //o
    .io_outputs_6_PRDATA       (area_ad7606_ctrl_apb_PRDATA        ), //i
    .io_outputs_6_PSLVERROR    (area_ad7606_ctrl_apb_PSLVERROR     ), //i
    .clk                       (clk                                ), //i
    .reset                     (reset                              )  //i
  );
  ila_0 area_ila_probe (
    .clk        (clk               ), //i
    .probe0     (emif_emif_cs_b    ), //i
    .probe1     (emif_emif_oe_b    ), //i
    .probe2     (emif_emif_we_b    ), //i
    .probe3     (emif_emif_data_b  ), //i
    .probe4     (emif_emif_addr_b  ), //i
    .probe5     (apb_PADDR_b       ), //i
    .probe6     (apb_PENABLE_b     ), //i
    .probe7     (apb_PREADY_b      ), //i
    .probe8     (apb_PSEL_b        ), //i
    .probe9     (apb_PWDATA_b      ), //i
    .probe10    (apb_PRDATA_b      )  //i
  );
  assign emif_emif_data = _zz_emif_emif_data ? _zz_emif_emif_data_b_1 : 16'bzzzzzzzzzzzzzzzz;
  always @(*) begin
    _zz_emif_emif_data = 1'b0;
    if(_zz_emif_emif_data_b_2) begin
      _zz_emif_emif_data = 1'b1;
    end
  end

  assign _zz_emif_emif_data_b_1 = area_emif_interface_emif_emif_data_write;
  assign _zz_emif_emif_data_b_2 = area_emif_interface_emif_emif_data_writeEnable;
  assign ad5544_A_AD5544_CS = area_ad5544_A_Ctrl_ad5544Interface_AD5544_CS;
  assign ad5544_A_AD5544_LDAC = area_ad5544_A_Ctrl_ad5544Interface_AD5544_LDAC;
  assign ad5544_A_AD5544_MSB = area_ad5544_A_Ctrl_ad5544Interface_AD5544_MSB;
  assign ad5544_A_AD5544_RS = area_ad5544_A_Ctrl_ad5544Interface_AD5544_RS;
  assign ad5544_A_AD5544_SCLK = area_ad5544_A_Ctrl_ad5544Interface_AD5544_SCLK;
  assign ad5544_A_AD5544_SDIN = area_ad5544_A_Ctrl_ad5544Interface_AD5544_SDIN;
  assign area_ad5544_A_Ctrl_ad5544_enable = (area_ad5544_triger_ad5544_tri || area_interrupt_temp);
  assign ad5544_B_AD5544_CS = area_ad5544_B_Ctrl_ad5544Interface_AD5544_CS;
  assign ad5544_B_AD5544_LDAC = area_ad5544_B_Ctrl_ad5544Interface_AD5544_LDAC;
  assign ad5544_B_AD5544_MSB = area_ad5544_B_Ctrl_ad5544Interface_AD5544_MSB;
  assign ad5544_B_AD5544_RS = area_ad5544_B_Ctrl_ad5544Interface_AD5544_RS;
  assign ad5544_B_AD5544_SCLK = area_ad5544_B_Ctrl_ad5544Interface_AD5544_SCLK;
  assign ad5544_B_AD5544_SDIN = area_ad5544_B_Ctrl_ad5544Interface_AD5544_SDIN;
  assign area_ad5544_B_Ctrl_ad5544_enable = (area_ad5544_triger_ad5544_tri || area_interrupt_temp);
  assign ad5544_C_AD5544_CS = area_ad5544_C_Ctrl_ad5544Interface_AD5544_CS;
  assign ad5544_C_AD5544_LDAC = area_ad5544_C_Ctrl_ad5544Interface_AD5544_LDAC;
  assign ad5544_C_AD5544_MSB = area_ad5544_C_Ctrl_ad5544Interface_AD5544_MSB;
  assign ad5544_C_AD5544_RS = area_ad5544_C_Ctrl_ad5544Interface_AD5544_RS;
  assign ad5544_C_AD5544_SCLK = area_ad5544_C_Ctrl_ad5544Interface_AD5544_SCLK;
  assign ad5544_C_AD5544_SDIN = area_ad5544_C_Ctrl_ad5544Interface_AD5544_SDIN;
  assign area_ad5544_C_Ctrl_ad5544_enable = (area_ad5544_triger_ad5544_tri || area_interrupt_temp);
  assign biss_c_enc_clk = area_biss_c_ctrl_bisscInterface_enc_clk;
  assign ad7606_ad_os = area_ad7606_ctrl_ad7606Interface_ad_os;
  assign ad7606_ad_cs = area_ad7606_ctrl_ad7606Interface_ad_cs;
  assign ad7606_ad_rd = area_ad7606_ctrl_ad7606Interface_ad_rd;
  assign ad7606_ad_reset = area_ad7606_ctrl_ad7606Interface_ad_reset;
  assign ad7606_ad_convsta = area_ad7606_ctrl_ad7606Interface_ad_convsta;
  assign ad7606_ad_convstb = area_ad7606_ctrl_ad7606Interface_ad_convstb;
  assign ad7606_ad_range = area_ad7606_ctrl_ad7606Interface_ad_range;
  assign area_apbtimer_apb_PADDR = apb3Router_1_io_outputs_0_PADDR[3:0];
  assign area_ad5544_triger_apb_PADDR = apb3Router_1_io_outputs_1_PADDR[3:0];
  assign area_ad5544_A_Ctrl_apb_PADDR = apb3Router_1_io_outputs_2_PADDR[3:0];
  assign area_ad5544_B_Ctrl_apb_PADDR = apb3Router_1_io_outputs_3_PADDR[3:0];
  assign area_ad5544_C_Ctrl_apb_PADDR = apb3Router_1_io_outputs_4_PADDR[3:0];
  assign area_biss_c_ctrl_apb_PADDR = apb3Router_1_io_outputs_5_PADDR[3:0];
  assign area_ad7606_ctrl_apb_PADDR = apb3Router_1_io_outputs_6_PADDR[3:0];
  always @(*) begin
    area_counter_willClear = 1'b0;
    if(area_counter_willOverflow) begin
      area_counter_willClear = 1'b1;
    end
  end

  assign area_counter_willOverflowIfInc = (area_counter_value == 13'h1387);
  assign area_counter_willOverflow = (area_counter_willOverflowIfInc && area_counter_willIncrement);
  always @(*) begin
    if(area_counter_willOverflow) begin
      area_counter_valueNext = 13'h0;
    end else begin
      area_counter_valueNext = (area_counter_value + _zz_area_counter_valueNext);
    end
    if(area_counter_willClear) begin
      area_counter_valueNext = 13'h0;
    end
  end

  assign area_counter_willIncrement = 1'b1;
  assign led = area_ledtemp;
  assign emif_emif_cs_b = emif_emif_cs;
  assign emif_emif_oe_b = emif_emif_oe;
  assign emif_emif_we_b = emif_emif_we;
  assign emif_emif_data_b = {_zz_emif_emif_data_b_2,{_zz_emif_emif_data_b_1,_zz_emif_emif_data_b}};
  assign emif_emif_addr_b = emif_emif_addr;
  assign apb_PADDR_b = area_emif_interface_apb_PADDR;
  assign apb_PENABLE_b = area_emif_interface_apb_PENABLE;
  assign apb_PREADY_b = apb_decoder_io_input_PREADY;
  assign apb_PSEL_b = area_emif_interface_apb_PSEL;
  assign apb_PWDATA_b = area_emif_interface_apb_PWDATA;
  assign apb_PRDATA_b = apb_decoder_io_input_PRDATA;
  assign _zz_emif_emif_data_b = emif_emif_data;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      area_interrupt_temp <= 1'b0;
      area_ledtemp <= 1'b0;
      area_counter_value <= 13'h0;
    end else begin
      area_interrupt_temp <= (((area_apbtimer_interrupt || area_apbtimer_interrupt_delay_1) || area_apbtimer_interrupt_delay_2) || area_apbtimer_interrupt_delay_3);
      area_counter_value <= area_counter_valueNext;
      if(area_counter_willOverflow) begin
        area_ledtemp <= (! area_ledtemp);
      end
    end
  end

  always @(posedge clk) begin
    area_apbtimer_interrupt_delay_1 <= area_apbtimer_interrupt;
    area_apbtimer_interrupt_delay_1_1 <= area_apbtimer_interrupt;
    area_apbtimer_interrupt_delay_2 <= area_apbtimer_interrupt_delay_1_1;
    area_apbtimer_interrupt_delay_1_2 <= area_apbtimer_interrupt;
    area_apbtimer_interrupt_delay_2_1 <= area_apbtimer_interrupt_delay_1_2;
    area_apbtimer_interrupt_delay_3 <= area_apbtimer_interrupt_delay_2_1;
  end


endmodule

module Apb3Router (
  input      [18:0]   io_input_PADDR,
  input      [6:0]    io_input_PSEL,
  input               io_input_PENABLE,
  output              io_input_PREADY,
  input               io_input_PWRITE,
  input      [15:0]   io_input_PWDATA,
  output     [15:0]   io_input_PRDATA,
  output              io_input_PSLVERROR,
  output     [18:0]   io_outputs_0_PADDR,
  output     [0:0]    io_outputs_0_PSEL,
  output              io_outputs_0_PENABLE,
  input               io_outputs_0_PREADY,
  output              io_outputs_0_PWRITE,
  output     [15:0]   io_outputs_0_PWDATA,
  input      [15:0]   io_outputs_0_PRDATA,
  input               io_outputs_0_PSLVERROR,
  output     [18:0]   io_outputs_1_PADDR,
  output     [0:0]    io_outputs_1_PSEL,
  output              io_outputs_1_PENABLE,
  input               io_outputs_1_PREADY,
  output              io_outputs_1_PWRITE,
  output     [15:0]   io_outputs_1_PWDATA,
  input      [15:0]   io_outputs_1_PRDATA,
  input               io_outputs_1_PSLVERROR,
  output     [18:0]   io_outputs_2_PADDR,
  output     [0:0]    io_outputs_2_PSEL,
  output              io_outputs_2_PENABLE,
  input               io_outputs_2_PREADY,
  output              io_outputs_2_PWRITE,
  output     [15:0]   io_outputs_2_PWDATA,
  input      [15:0]   io_outputs_2_PRDATA,
  input               io_outputs_2_PSLVERROR,
  output     [18:0]   io_outputs_3_PADDR,
  output     [0:0]    io_outputs_3_PSEL,
  output              io_outputs_3_PENABLE,
  input               io_outputs_3_PREADY,
  output              io_outputs_3_PWRITE,
  output     [15:0]   io_outputs_3_PWDATA,
  input      [15:0]   io_outputs_3_PRDATA,
  input               io_outputs_3_PSLVERROR,
  output     [18:0]   io_outputs_4_PADDR,
  output     [0:0]    io_outputs_4_PSEL,
  output              io_outputs_4_PENABLE,
  input               io_outputs_4_PREADY,
  output              io_outputs_4_PWRITE,
  output     [15:0]   io_outputs_4_PWDATA,
  input      [15:0]   io_outputs_4_PRDATA,
  input               io_outputs_4_PSLVERROR,
  output     [18:0]   io_outputs_5_PADDR,
  output     [0:0]    io_outputs_5_PSEL,
  output              io_outputs_5_PENABLE,
  input               io_outputs_5_PREADY,
  output              io_outputs_5_PWRITE,
  output     [15:0]   io_outputs_5_PWDATA,
  input      [15:0]   io_outputs_5_PRDATA,
  input               io_outputs_5_PSLVERROR,
  output     [18:0]   io_outputs_6_PADDR,
  output     [0:0]    io_outputs_6_PSEL,
  output              io_outputs_6_PENABLE,
  input               io_outputs_6_PREADY,
  output              io_outputs_6_PWRITE,
  output     [15:0]   io_outputs_6_PWDATA,
  input      [15:0]   io_outputs_6_PRDATA,
  input               io_outputs_6_PSLVERROR,
  input               clk,
  input               reset
);
  reg                 _zz_io_input_PREADY;
  reg        [15:0]   _zz_io_input_PRDATA;
  reg                 _zz_io_input_PSLVERROR;
  wire                _zz_selIndex;
  wire                _zz_selIndex_1;
  wire                _zz_selIndex_2;
  wire                _zz_selIndex_3;
  wire                _zz_selIndex_4;
  wire                _zz_selIndex_5;
  reg        [2:0]    selIndex;

  always @(*) begin
    case(selIndex)
      3'b000 : begin
        _zz_io_input_PREADY = io_outputs_0_PREADY;
        _zz_io_input_PRDATA = io_outputs_0_PRDATA;
        _zz_io_input_PSLVERROR = io_outputs_0_PSLVERROR;
      end
      3'b001 : begin
        _zz_io_input_PREADY = io_outputs_1_PREADY;
        _zz_io_input_PRDATA = io_outputs_1_PRDATA;
        _zz_io_input_PSLVERROR = io_outputs_1_PSLVERROR;
      end
      3'b010 : begin
        _zz_io_input_PREADY = io_outputs_2_PREADY;
        _zz_io_input_PRDATA = io_outputs_2_PRDATA;
        _zz_io_input_PSLVERROR = io_outputs_2_PSLVERROR;
      end
      3'b011 : begin
        _zz_io_input_PREADY = io_outputs_3_PREADY;
        _zz_io_input_PRDATA = io_outputs_3_PRDATA;
        _zz_io_input_PSLVERROR = io_outputs_3_PSLVERROR;
      end
      3'b100 : begin
        _zz_io_input_PREADY = io_outputs_4_PREADY;
        _zz_io_input_PRDATA = io_outputs_4_PRDATA;
        _zz_io_input_PSLVERROR = io_outputs_4_PSLVERROR;
      end
      3'b101 : begin
        _zz_io_input_PREADY = io_outputs_5_PREADY;
        _zz_io_input_PRDATA = io_outputs_5_PRDATA;
        _zz_io_input_PSLVERROR = io_outputs_5_PSLVERROR;
      end
      default : begin
        _zz_io_input_PREADY = io_outputs_6_PREADY;
        _zz_io_input_PRDATA = io_outputs_6_PRDATA;
        _zz_io_input_PSLVERROR = io_outputs_6_PSLVERROR;
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
  assign io_outputs_2_PADDR = io_input_PADDR;
  assign io_outputs_2_PENABLE = io_input_PENABLE;
  assign io_outputs_2_PSEL[0] = io_input_PSEL[2];
  assign io_outputs_2_PWRITE = io_input_PWRITE;
  assign io_outputs_2_PWDATA = io_input_PWDATA;
  assign io_outputs_3_PADDR = io_input_PADDR;
  assign io_outputs_3_PENABLE = io_input_PENABLE;
  assign io_outputs_3_PSEL[0] = io_input_PSEL[3];
  assign io_outputs_3_PWRITE = io_input_PWRITE;
  assign io_outputs_3_PWDATA = io_input_PWDATA;
  assign io_outputs_4_PADDR = io_input_PADDR;
  assign io_outputs_4_PENABLE = io_input_PENABLE;
  assign io_outputs_4_PSEL[0] = io_input_PSEL[4];
  assign io_outputs_4_PWRITE = io_input_PWRITE;
  assign io_outputs_4_PWDATA = io_input_PWDATA;
  assign io_outputs_5_PADDR = io_input_PADDR;
  assign io_outputs_5_PENABLE = io_input_PENABLE;
  assign io_outputs_5_PSEL[0] = io_input_PSEL[5];
  assign io_outputs_5_PWRITE = io_input_PWRITE;
  assign io_outputs_5_PWDATA = io_input_PWDATA;
  assign io_outputs_6_PADDR = io_input_PADDR;
  assign io_outputs_6_PENABLE = io_input_PENABLE;
  assign io_outputs_6_PSEL[0] = io_input_PSEL[6];
  assign io_outputs_6_PWRITE = io_input_PWRITE;
  assign io_outputs_6_PWDATA = io_input_PWDATA;
  assign _zz_selIndex = io_input_PSEL[3];
  assign _zz_selIndex_1 = io_input_PSEL[5];
  assign _zz_selIndex_2 = io_input_PSEL[6];
  assign _zz_selIndex_3 = ((io_input_PSEL[1] || _zz_selIndex) || _zz_selIndex_1);
  assign _zz_selIndex_4 = ((io_input_PSEL[2] || _zz_selIndex) || _zz_selIndex_2);
  assign _zz_selIndex_5 = ((io_input_PSEL[4] || _zz_selIndex_1) || _zz_selIndex_2);
  assign io_input_PREADY = _zz_io_input_PREADY;
  assign io_input_PRDATA = _zz_io_input_PRDATA;
  assign io_input_PSLVERROR = _zz_io_input_PSLVERROR;
  always @(posedge clk) begin
    selIndex <= {_zz_selIndex_5,{_zz_selIndex_4,_zz_selIndex_3}};
  end


endmodule

module Apb3Decoder (
  input      [18:0]   io_input_PADDR,
  input      [0:0]    io_input_PSEL,
  input               io_input_PENABLE,
  output reg          io_input_PREADY,
  input               io_input_PWRITE,
  input      [15:0]   io_input_PWDATA,
  output     [15:0]   io_input_PRDATA,
  output reg          io_input_PSLVERROR,
  output     [18:0]   io_output_PADDR,
  output reg [6:0]    io_output_PSEL,
  output              io_output_PENABLE,
  input               io_output_PREADY,
  output              io_output_PWRITE,
  output     [15:0]   io_output_PWDATA,
  input      [15:0]   io_output_PRDATA,
  input               io_output_PSLVERROR
);
  wire                when_Apb3Decoder_l84;

  assign io_output_PADDR = io_input_PADDR;
  assign io_output_PENABLE = io_input_PENABLE;
  assign io_output_PWRITE = io_input_PWRITE;
  assign io_output_PWDATA = io_input_PWDATA;
  always @(*) begin
    io_output_PSEL[0] = (((io_input_PADDR & (~ 19'h000ff)) == 19'h00600) && io_input_PSEL[0]);
    io_output_PSEL[1] = (((io_input_PADDR & (~ 19'h000ff)) == 19'h0) && io_input_PSEL[0]);
    io_output_PSEL[2] = (((io_input_PADDR & (~ 19'h000ff)) == 19'h00100) && io_input_PSEL[0]);
    io_output_PSEL[3] = (((io_input_PADDR & (~ 19'h000ff)) == 19'h00200) && io_input_PSEL[0]);
    io_output_PSEL[4] = (((io_input_PADDR & (~ 19'h000ff)) == 19'h00300) && io_input_PSEL[0]);
    io_output_PSEL[5] = (((io_input_PADDR & (~ 19'h000ff)) == 19'h00400) && io_input_PSEL[0]);
    io_output_PSEL[6] = (((io_input_PADDR & (~ 19'h000ff)) == 19'h00500) && io_input_PSEL[0]);
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

  assign when_Apb3Decoder_l84 = (io_input_PSEL[0] && (io_output_PSEL == 7'h0));

endmodule

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
  output     [2:0]    ad7606Interface_ad_os,
  output              ad7606Interface_ad_cs,
  output              ad7606Interface_ad_rd,
  output              ad7606Interface_ad_reset,
  output              ad7606Interface_ad_convsta,
  output              ad7606Interface_ad_convstb,
  output              ad7606Interface_ad_range,
  input               clk,
  input               reset
);
  wire       [2:0]    area_ad7606_ctrl_ad_os;
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
      4'b0001 : begin
        apb_PRDATA[15 : 0] = area_data_temp_2;
      end
      4'b0010 : begin
        apb_PRDATA[15 : 0] = area_data_temp_3;
      end
      4'b0011 : begin
        apb_PRDATA[15 : 0] = area_data_temp_4;
      end
      4'b0100 : begin
        apb_PRDATA[15 : 0] = area_data_temp_5;
      end
      4'b0101 : begin
        apb_PRDATA[15 : 0] = area_data_temp_6;
      end
      4'b0110 : begin
        apb_PRDATA[15 : 0] = area_data_temp_7;
      end
      4'b0111 : begin
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
      area_data_temp_1 <= 16'h1234;
      area_data_temp_2 <= 16'h5678;
      area_data_temp_3 <= 16'h0a0b;
      area_data_temp_4 <= 16'h0102;
      area_data_temp_5 <= 16'h0203;
      area_data_temp_6 <= 16'h0304;
      area_data_temp_7 <= 16'h0405;
      area_data_temp_8 <= 16'h0506;
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

module Biss_C (
  input      [3:0]    apb_PADDR,
  input      [0:0]    apb_PSEL,
  input               apb_PENABLE,
  output              apb_PREADY,
  input               apb_PWRITE,
  input      [15:0]   apb_PWDATA,
  output reg [15:0]   apb_PRDATA,
  output              apb_PSLVERROR,
  output              bisscInterface_enc_clk,
  input               bisscInterface_enc_data,
  input               clk,
  input               reset
);
  wire                area_bissc_ctrl_enc_clk;
  wire       [40:0]   area_bissc_ctrl_enc_position_all;
  wire       [31:0]   area_bissc_ctrl_enc_position_out;
  wire                area_bissc_ctrl_erro_flag;
  wire                area_bissc_ctrl_warn_flag;
  wire                area_bissc_ctrl_crc_flag;
  wire       [2:0]    _zz_area_bissc_status_reg;
  wire       [31:0]   _zz_apb_PRDATA;
  wire       [31:0]   _zz_apb_PRDATA_1;
  wire                area_ctrl_askWrite;
  wire                area_ctrl_askRead;
  wire                area_ctrl_doWrite;
  wire                area_ctrl_doRead;
  reg        [31:0]   area_bissc_pos_reg;
  reg        [15:0]   area_bissc_status_reg;

  assign _zz_area_bissc_status_reg = {{area_bissc_ctrl_erro_flag,area_bissc_ctrl_warn_flag},area_bissc_ctrl_crc_flag};
  assign _zz_apb_PRDATA = area_bissc_pos_reg;
  assign _zz_apb_PRDATA_1 = area_bissc_pos_reg;
  BISS_Position area_bissc_ctrl (
    .clk                 (clk                               ), //i
    .reset               (reset                             ), //i
    .enc_data            (bisscInterface_enc_data           ), //i
    .sample_en           (1'b1                              ), //i
    .enc_clk             (area_bissc_ctrl_enc_clk           ), //o
    .enc_position_all    (area_bissc_ctrl_enc_position_all  ), //o
    .enc_position_out    (area_bissc_ctrl_enc_position_out  ), //o
    .erro_flag           (area_bissc_ctrl_erro_flag         ), //o
    .warn_flag           (area_bissc_ctrl_warn_flag         ), //o
    .crc_flag            (area_bissc_ctrl_crc_flag          )  //o
  );
  assign bisscInterface_enc_clk = area_bissc_ctrl_enc_clk;
  assign apb_PREADY = 1'b1;
  always @(*) begin
    apb_PRDATA = 16'h0;
    case(apb_PADDR)
      4'b0000 : begin
        apb_PRDATA[15 : 0] = _zz_apb_PRDATA[31 : 16];
      end
      4'b0001 : begin
        apb_PRDATA[15 : 0] = _zz_apb_PRDATA_1[15 : 0];
      end
      4'b0010 : begin
        apb_PRDATA[15 : 0] = area_bissc_status_reg;
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
      area_bissc_pos_reg <= 32'h0;
      area_bissc_status_reg <= 16'h0;
    end else begin
      area_bissc_pos_reg <= area_bissc_ctrl_enc_position_out;
      area_bissc_status_reg <= {13'd0, _zz_area_bissc_status_reg};
    end
  end


endmodule

//AD5544 replaced by AD5544

//AD5544 replaced by AD5544

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

module AD5544_triger (
  input      [3:0]    apb_PADDR,
  input      [0:0]    apb_PSEL,
  input               apb_PENABLE,
  output              apb_PREADY,
  input               apb_PWRITE,
  input      [15:0]   apb_PWDATA,
  output reg [15:0]   apb_PRDATA,
  output              apb_PSLVERROR,
  output              ad5544_tri,
  input               clk,
  input               reset
);
  reg                 area_temp;
  wire                area_ctrl_askWrite;
  wire                area_ctrl_askRead;
  wire                area_ctrl_doWrite;
  wire                area_ctrl_doRead;
  reg                 when_AD5544_l91;
  reg                 area_temp_delay_1;
  reg                 area_temp_delay_1_1;
  reg                 area_temp_delay_2;
  reg                 area_temp_delay_1_2;
  reg                 area_temp_delay_2_1;
  reg                 area_temp_delay_3;

  assign apb_PREADY = 1'b1;
  always @(*) begin
    apb_PRDATA = 16'h0;
    case(apb_PADDR)
      4'b0010 : begin
        apb_PRDATA[0 : 0] = area_temp;
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
  always @(*) begin
    when_AD5544_l91 = 1'b0;
    case(apb_PADDR)
      4'b0010 : begin
        if(area_ctrl_doWrite) begin
          when_AD5544_l91 = 1'b1;
        end
      end
      default : begin
      end
    endcase
  end

  assign ad5544_tri = (((area_temp || area_temp_delay_1) || area_temp_delay_2) || area_temp_delay_3);
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      area_temp <= 1'b0;
    end else begin
      if(when_AD5544_l91) begin
        area_temp <= 1'b1;
      end else begin
        area_temp <= 1'b0;
      end
    end
  end

  always @(posedge clk) begin
    area_temp_delay_1 <= area_temp;
    area_temp_delay_1_1 <= area_temp;
    area_temp_delay_2 <= area_temp_delay_1_1;
    area_temp_delay_1_2 <= area_temp;
    area_temp_delay_2_1 <= area_temp_delay_1_2;
    area_temp_delay_3 <= area_temp_delay_2_1;
  end


endmodule

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
  reg                 _zz_io_tick;
  reg        [15:0]   area_timerA_io_limit_driver;
  wire                when_ApbTimer_l38;

  Timer area_timerA (
    .io_tick     (_zz_io_tick                  ), //i
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
  assign when_ApbTimer_l38 = (area_timerA_io_limit_driver <= area_timerA_io_value);
  always @(*) begin
    if(when_ApbTimer_l38) begin
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
          _zz_io_tick <= apb_PWDATA[0];
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

module Emif_Apb (
  input      [18:0]   emif_emif_addr,
  input      [15:0]   emif_emif_data_read,
  output     [15:0]   emif_emif_data_write,
  output              emif_emif_data_writeEnable,
  input               emif_emif_cs,
  input               emif_emif_we,
  input               emif_emif_oe,
  output     [18:0]   apb_PADDR,
  output     [0:0]    apb_PSEL,
  output              apb_PENABLE,
  input               apb_PREADY,
  output              apb_PWRITE,
  output     [15:0]   apb_PWDATA,
  input      [15:0]   apb_PRDATA,
  input               apb_PSLVERROR,
  input               clk,
  input               reset
);
  reg                 penable;
  reg                 penable_regNext;
  wire                when_Phpa_Top_l50;
  reg        [15:0]   apb_PRDATA_regNextWhen;

  assign apb_PADDR = emif_emif_addr;
  assign apb_PSEL = (~ emif_emif_cs);
  assign apb_PENABLE = ((penable && (! penable_regNext)) ? penable : 1'b0);
  assign apb_PWRITE = ((! emif_emif_we) && emif_emif_oe);
  assign emif_emif_data_writeEnable = (! emif_emif_oe);
  assign when_Phpa_Top_l50 = (! emif_emif_oe);
  assign emif_emif_data_write = apb_PRDATA_regNextWhen;
  assign apb_PWDATA = emif_emif_data_read;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      penable <= 1'b0;
    end else begin
      penable <= ((! emif_emif_oe) || (! emif_emif_we));
    end
  end

  always @(posedge clk) begin
    penable_regNext <= penable;
    if(when_Phpa_Top_l50) begin
      apb_PRDATA_regNextWhen <= apb_PRDATA;
    end
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
