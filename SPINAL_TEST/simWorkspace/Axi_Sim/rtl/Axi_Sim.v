// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : Axi_Sim
// Git hash  : e621af020d8670015529b3e08f821a90582a5b26


`define Axi4ToBRAMPhase_binary_sequential_type [1:0]
`define Axi4ToBRAMPhase_binary_sequential_SETUP 2'b00
`define Axi4ToBRAMPhase_binary_sequential_ACCESS_1 2'b01
`define Axi4ToBRAMPhase_binary_sequential_READ 2'b10
`define Axi4ToBRAMPhase_binary_sequential_RESPONSE 2'b11

`define Axi4ToApb3BridgePhase_binary_sequential_type [1:0]
`define Axi4ToApb3BridgePhase_binary_sequential_SETUP 2'b00
`define Axi4ToApb3BridgePhase_binary_sequential_ACCESS_1 2'b01
`define Axi4ToApb3BridgePhase_binary_sequential_RESPONSE 2'b10


module Axi_Sim (
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
  output              bram_en,
  output     [3:0]    bram_we,
  output     [7:0]    bram_addr,
  output     [31:0]   bram_wrdata,
  input      [31:0]   bram_rddata,
  input               clk,
  input               reset
);
  wire                ram_io_axi_arbiter_io_output_arw_ready;
  wire                ram_io_axi_arbiter_io_output_w_ready;
  wire                apbBridge_io_axi_arbiter_io_output_arw_ready;
  wire                apbBridge_io_axi_arbiter_io_output_w_ready;
  wire                ram_io_axi_arw_ready;
  wire                ram_io_axi_w_ready;
  wire                ram_io_axi_b_valid;
  wire       [3:0]    ram_io_axi_b_payload_id;
  wire       [1:0]    ram_io_axi_b_payload_resp;
  wire                ram_io_axi_r_valid;
  wire       [31:0]   ram_io_axi_r_payload_data;
  wire       [3:0]    ram_io_axi_r_payload_id;
  wire       [1:0]    ram_io_axi_r_payload_resp;
  wire                ram_io_axi_r_payload_last;
  wire                ram_io_bram_en;
  wire       [3:0]    ram_io_bram_we;
  wire       [7:0]    ram_io_bram_addr;
  wire       [31:0]   ram_io_bram_wrdata;
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
  wire                axi_readOnly_decoder_io_input_ar_ready;
  wire                axi_readOnly_decoder_io_input_r_valid;
  wire       [31:0]   axi_readOnly_decoder_io_input_r_payload_data;
  wire       [3:0]    axi_readOnly_decoder_io_input_r_payload_id;
  wire       [1:0]    axi_readOnly_decoder_io_input_r_payload_resp;
  wire                axi_readOnly_decoder_io_input_r_payload_last;
  wire                axi_readOnly_decoder_io_outputs_0_ar_valid;
  wire       [19:0]   axi_readOnly_decoder_io_outputs_0_ar_payload_addr;
  wire       [3:0]    axi_readOnly_decoder_io_outputs_0_ar_payload_id;
  wire       [7:0]    axi_readOnly_decoder_io_outputs_0_ar_payload_len;
  wire       [2:0]    axi_readOnly_decoder_io_outputs_0_ar_payload_size;
  wire       [1:0]    axi_readOnly_decoder_io_outputs_0_ar_payload_burst;
  wire                axi_readOnly_decoder_io_outputs_0_r_ready;
  wire                axi_readOnly_decoder_io_outputs_1_ar_valid;
  wire       [19:0]   axi_readOnly_decoder_io_outputs_1_ar_payload_addr;
  wire       [3:0]    axi_readOnly_decoder_io_outputs_1_ar_payload_id;
  wire       [7:0]    axi_readOnly_decoder_io_outputs_1_ar_payload_len;
  wire       [2:0]    axi_readOnly_decoder_io_outputs_1_ar_payload_size;
  wire       [1:0]    axi_readOnly_decoder_io_outputs_1_ar_payload_burst;
  wire                axi_readOnly_decoder_io_outputs_1_r_ready;
  wire                axi_writeOnly_decoder_io_input_aw_ready;
  wire                axi_writeOnly_decoder_io_input_w_ready;
  wire                axi_writeOnly_decoder_io_input_b_valid;
  wire       [3:0]    axi_writeOnly_decoder_io_input_b_payload_id;
  wire       [1:0]    axi_writeOnly_decoder_io_input_b_payload_resp;
  wire                axi_writeOnly_decoder_io_outputs_0_aw_valid;
  wire       [19:0]   axi_writeOnly_decoder_io_outputs_0_aw_payload_addr;
  wire       [3:0]    axi_writeOnly_decoder_io_outputs_0_aw_payload_id;
  wire       [7:0]    axi_writeOnly_decoder_io_outputs_0_aw_payload_len;
  wire       [2:0]    axi_writeOnly_decoder_io_outputs_0_aw_payload_size;
  wire       [1:0]    axi_writeOnly_decoder_io_outputs_0_aw_payload_burst;
  wire                axi_writeOnly_decoder_io_outputs_0_w_valid;
  wire       [31:0]   axi_writeOnly_decoder_io_outputs_0_w_payload_data;
  wire       [3:0]    axi_writeOnly_decoder_io_outputs_0_w_payload_strb;
  wire                axi_writeOnly_decoder_io_outputs_0_w_payload_last;
  wire                axi_writeOnly_decoder_io_outputs_0_b_ready;
  wire                axi_writeOnly_decoder_io_outputs_1_aw_valid;
  wire       [19:0]   axi_writeOnly_decoder_io_outputs_1_aw_payload_addr;
  wire       [3:0]    axi_writeOnly_decoder_io_outputs_1_aw_payload_id;
  wire       [7:0]    axi_writeOnly_decoder_io_outputs_1_aw_payload_len;
  wire       [2:0]    axi_writeOnly_decoder_io_outputs_1_aw_payload_size;
  wire       [1:0]    axi_writeOnly_decoder_io_outputs_1_aw_payload_burst;
  wire                axi_writeOnly_decoder_io_outputs_1_w_valid;
  wire       [31:0]   axi_writeOnly_decoder_io_outputs_1_w_payload_data;
  wire       [3:0]    axi_writeOnly_decoder_io_outputs_1_w_payload_strb;
  wire                axi_writeOnly_decoder_io_outputs_1_w_payload_last;
  wire                axi_writeOnly_decoder_io_outputs_1_b_ready;
  wire                ram_io_axi_arbiter_io_readInputs_0_ar_ready;
  wire                ram_io_axi_arbiter_io_readInputs_0_r_valid;
  wire       [31:0]   ram_io_axi_arbiter_io_readInputs_0_r_payload_data;
  wire       [3:0]    ram_io_axi_arbiter_io_readInputs_0_r_payload_id;
  wire       [1:0]    ram_io_axi_arbiter_io_readInputs_0_r_payload_resp;
  wire                ram_io_axi_arbiter_io_readInputs_0_r_payload_last;
  wire                ram_io_axi_arbiter_io_writeInputs_0_aw_ready;
  wire                ram_io_axi_arbiter_io_writeInputs_0_w_ready;
  wire                ram_io_axi_arbiter_io_writeInputs_0_b_valid;
  wire       [3:0]    ram_io_axi_arbiter_io_writeInputs_0_b_payload_id;
  wire       [1:0]    ram_io_axi_arbiter_io_writeInputs_0_b_payload_resp;
  wire                ram_io_axi_arbiter_io_output_arw_valid;
  wire       [19:0]   ram_io_axi_arbiter_io_output_arw_payload_addr;
  wire       [3:0]    ram_io_axi_arbiter_io_output_arw_payload_id;
  wire       [7:0]    ram_io_axi_arbiter_io_output_arw_payload_len;
  wire       [2:0]    ram_io_axi_arbiter_io_output_arw_payload_size;
  wire       [1:0]    ram_io_axi_arbiter_io_output_arw_payload_burst;
  wire                ram_io_axi_arbiter_io_output_arw_payload_write;
  wire                ram_io_axi_arbiter_io_output_w_valid;
  wire       [31:0]   ram_io_axi_arbiter_io_output_w_payload_data;
  wire       [3:0]    ram_io_axi_arbiter_io_output_w_payload_strb;
  wire                ram_io_axi_arbiter_io_output_w_payload_last;
  wire                ram_io_axi_arbiter_io_output_b_ready;
  wire                ram_io_axi_arbiter_io_output_r_ready;
  wire                apbBridge_io_axi_arbiter_io_readInputs_0_ar_ready;
  wire                apbBridge_io_axi_arbiter_io_readInputs_0_r_valid;
  wire       [31:0]   apbBridge_io_axi_arbiter_io_readInputs_0_r_payload_data;
  wire       [3:0]    apbBridge_io_axi_arbiter_io_readInputs_0_r_payload_id;
  wire       [1:0]    apbBridge_io_axi_arbiter_io_readInputs_0_r_payload_resp;
  wire                apbBridge_io_axi_arbiter_io_readInputs_0_r_payload_last;
  wire                apbBridge_io_axi_arbiter_io_writeInputs_0_aw_ready;
  wire                apbBridge_io_axi_arbiter_io_writeInputs_0_w_ready;
  wire                apbBridge_io_axi_arbiter_io_writeInputs_0_b_valid;
  wire       [3:0]    apbBridge_io_axi_arbiter_io_writeInputs_0_b_payload_id;
  wire       [1:0]    apbBridge_io_axi_arbiter_io_writeInputs_0_b_payload_resp;
  wire                apbBridge_io_axi_arbiter_io_output_arw_valid;
  wire       [19:0]   apbBridge_io_axi_arbiter_io_output_arw_payload_addr;
  wire       [3:0]    apbBridge_io_axi_arbiter_io_output_arw_payload_id;
  wire       [7:0]    apbBridge_io_axi_arbiter_io_output_arw_payload_len;
  wire       [2:0]    apbBridge_io_axi_arbiter_io_output_arw_payload_size;
  wire       [1:0]    apbBridge_io_axi_arbiter_io_output_arw_payload_burst;
  wire                apbBridge_io_axi_arbiter_io_output_arw_payload_write;
  wire                apbBridge_io_axi_arbiter_io_output_w_valid;
  wire       [31:0]   apbBridge_io_axi_arbiter_io_output_w_payload_data;
  wire       [3:0]    apbBridge_io_axi_arbiter_io_output_w_payload_strb;
  wire                apbBridge_io_axi_arbiter_io_output_w_payload_last;
  wire                apbBridge_io_axi_arbiter_io_output_b_ready;
  wire                apbBridge_io_axi_arbiter_io_output_r_ready;
  wire                axi_readOnly_ar_valid;
  wire                axi_readOnly_ar_ready;
  wire       [19:0]   axi_readOnly_ar_payload_addr;
  wire       [3:0]    axi_readOnly_ar_payload_id;
  wire       [7:0]    axi_readOnly_ar_payload_len;
  wire       [2:0]    axi_readOnly_ar_payload_size;
  wire       [1:0]    axi_readOnly_ar_payload_burst;
  wire                axi_readOnly_r_valid;
  wire                axi_readOnly_r_ready;
  wire       [31:0]   axi_readOnly_r_payload_data;
  wire       [3:0]    axi_readOnly_r_payload_id;
  wire       [1:0]    axi_readOnly_r_payload_resp;
  wire                axi_readOnly_r_payload_last;
  wire                axi_writeOnly_aw_valid;
  wire                axi_writeOnly_aw_ready;
  wire       [19:0]   axi_writeOnly_aw_payload_addr;
  wire       [3:0]    axi_writeOnly_aw_payload_id;
  wire       [7:0]    axi_writeOnly_aw_payload_len;
  wire       [2:0]    axi_writeOnly_aw_payload_size;
  wire       [1:0]    axi_writeOnly_aw_payload_burst;
  wire                axi_writeOnly_w_valid;
  wire                axi_writeOnly_w_ready;
  wire       [31:0]   axi_writeOnly_w_payload_data;
  wire       [3:0]    axi_writeOnly_w_payload_strb;
  wire                axi_writeOnly_w_payload_last;
  wire                axi_writeOnly_b_valid;
  wire                axi_writeOnly_b_ready;
  wire       [3:0]    axi_writeOnly_b_payload_id;
  wire       [1:0]    axi_writeOnly_b_payload_resp;
  wire                axi_readOnly_decoder_io_outputs_0_ar_validPipe_valid;
  wire                axi_readOnly_decoder_io_outputs_0_ar_validPipe_ready;
  wire       [19:0]   axi_readOnly_decoder_io_outputs_0_ar_validPipe_payload_addr;
  wire       [3:0]    axi_readOnly_decoder_io_outputs_0_ar_validPipe_payload_id;
  wire       [7:0]    axi_readOnly_decoder_io_outputs_0_ar_validPipe_payload_len;
  wire       [2:0]    axi_readOnly_decoder_io_outputs_0_ar_validPipe_payload_size;
  wire       [1:0]    axi_readOnly_decoder_io_outputs_0_ar_validPipe_payload_burst;
  reg                 axi_readOnly_decoder_io_outputs_0_ar_rValid;
  wire                axi_readOnly_decoder_io_outputs_0_ar_validPipe_fire;
  wire                axi_readOnly_decoder_io_outputs_0_ar_validPipe_fire_1;
  wire                axi_readOnly_decoder_io_outputs_1_ar_validPipe_valid;
  wire                axi_readOnly_decoder_io_outputs_1_ar_validPipe_ready;
  wire       [19:0]   axi_readOnly_decoder_io_outputs_1_ar_validPipe_payload_addr;
  wire       [3:0]    axi_readOnly_decoder_io_outputs_1_ar_validPipe_payload_id;
  wire       [7:0]    axi_readOnly_decoder_io_outputs_1_ar_validPipe_payload_len;
  wire       [2:0]    axi_readOnly_decoder_io_outputs_1_ar_validPipe_payload_size;
  wire       [1:0]    axi_readOnly_decoder_io_outputs_1_ar_validPipe_payload_burst;
  reg                 axi_readOnly_decoder_io_outputs_1_ar_rValid;
  wire                axi_readOnly_decoder_io_outputs_1_ar_validPipe_fire;
  wire                axi_readOnly_decoder_io_outputs_1_ar_validPipe_fire_1;
  wire                axi_writeOnly_decoder_io_outputs_0_aw_validPipe_valid;
  wire                axi_writeOnly_decoder_io_outputs_0_aw_validPipe_ready;
  wire       [19:0]   axi_writeOnly_decoder_io_outputs_0_aw_validPipe_payload_addr;
  wire       [3:0]    axi_writeOnly_decoder_io_outputs_0_aw_validPipe_payload_id;
  wire       [7:0]    axi_writeOnly_decoder_io_outputs_0_aw_validPipe_payload_len;
  wire       [2:0]    axi_writeOnly_decoder_io_outputs_0_aw_validPipe_payload_size;
  wire       [1:0]    axi_writeOnly_decoder_io_outputs_0_aw_validPipe_payload_burst;
  reg                 axi_writeOnly_decoder_io_outputs_0_aw_rValid;
  wire                axi_writeOnly_decoder_io_outputs_0_aw_validPipe_fire;
  wire                axi_writeOnly_decoder_io_outputs_0_aw_validPipe_fire_1;
  wire                axi_writeOnly_decoder_io_outputs_1_aw_validPipe_valid;
  wire                axi_writeOnly_decoder_io_outputs_1_aw_validPipe_ready;
  wire       [19:0]   axi_writeOnly_decoder_io_outputs_1_aw_validPipe_payload_addr;
  wire       [3:0]    axi_writeOnly_decoder_io_outputs_1_aw_validPipe_payload_id;
  wire       [7:0]    axi_writeOnly_decoder_io_outputs_1_aw_validPipe_payload_len;
  wire       [2:0]    axi_writeOnly_decoder_io_outputs_1_aw_validPipe_payload_size;
  wire       [1:0]    axi_writeOnly_decoder_io_outputs_1_aw_validPipe_payload_burst;
  reg                 axi_writeOnly_decoder_io_outputs_1_aw_rValid;
  wire                axi_writeOnly_decoder_io_outputs_1_aw_validPipe_fire;
  wire                axi_writeOnly_decoder_io_outputs_1_aw_validPipe_fire_1;
  wire                ram_io_axi_arbiter_io_output_arw_halfPipe_valid;
  wire                ram_io_axi_arbiter_io_output_arw_halfPipe_ready;
  wire       [19:0]   ram_io_axi_arbiter_io_output_arw_halfPipe_payload_addr;
  wire       [3:0]    ram_io_axi_arbiter_io_output_arw_halfPipe_payload_id;
  wire       [7:0]    ram_io_axi_arbiter_io_output_arw_halfPipe_payload_len;
  wire       [2:0]    ram_io_axi_arbiter_io_output_arw_halfPipe_payload_size;
  wire       [1:0]    ram_io_axi_arbiter_io_output_arw_halfPipe_payload_burst;
  wire                ram_io_axi_arbiter_io_output_arw_halfPipe_payload_write;
  reg                 ram_io_axi_arbiter_io_output_arw_rValid;
  wire                ram_io_axi_arbiter_io_output_arw_halfPipe_fire;
  reg        [19:0]   ram_io_axi_arbiter_io_output_arw_rData_addr;
  reg        [3:0]    ram_io_axi_arbiter_io_output_arw_rData_id;
  reg        [7:0]    ram_io_axi_arbiter_io_output_arw_rData_len;
  reg        [2:0]    ram_io_axi_arbiter_io_output_arw_rData_size;
  reg        [1:0]    ram_io_axi_arbiter_io_output_arw_rData_burst;
  reg                 ram_io_axi_arbiter_io_output_arw_rData_write;
  wire                ram_io_axi_arbiter_io_output_w_s2mPipe_valid;
  reg                 ram_io_axi_arbiter_io_output_w_s2mPipe_ready;
  wire       [31:0]   ram_io_axi_arbiter_io_output_w_s2mPipe_payload_data;
  wire       [3:0]    ram_io_axi_arbiter_io_output_w_s2mPipe_payload_strb;
  wire                ram_io_axi_arbiter_io_output_w_s2mPipe_payload_last;
  reg                 ram_io_axi_arbiter_io_output_w_rValid;
  reg        [31:0]   ram_io_axi_arbiter_io_output_w_rData_data;
  reg        [3:0]    ram_io_axi_arbiter_io_output_w_rData_strb;
  reg                 ram_io_axi_arbiter_io_output_w_rData_last;
  wire                ram_io_axi_arbiter_io_output_w_s2mPipe_m2sPipe_valid;
  wire                ram_io_axi_arbiter_io_output_w_s2mPipe_m2sPipe_ready;
  wire       [31:0]   ram_io_axi_arbiter_io_output_w_s2mPipe_m2sPipe_payload_data;
  wire       [3:0]    ram_io_axi_arbiter_io_output_w_s2mPipe_m2sPipe_payload_strb;
  wire                ram_io_axi_arbiter_io_output_w_s2mPipe_m2sPipe_payload_last;
  reg                 ram_io_axi_arbiter_io_output_w_s2mPipe_rValid;
  reg        [31:0]   ram_io_axi_arbiter_io_output_w_s2mPipe_rData_data;
  reg        [3:0]    ram_io_axi_arbiter_io_output_w_s2mPipe_rData_strb;
  reg                 ram_io_axi_arbiter_io_output_w_s2mPipe_rData_last;
  wire                when_Stream_l342;
  wire                apbBridge_io_axi_arbiter_io_output_arw_halfPipe_valid;
  wire                apbBridge_io_axi_arbiter_io_output_arw_halfPipe_ready;
  wire       [19:0]   apbBridge_io_axi_arbiter_io_output_arw_halfPipe_payload_addr;
  wire       [3:0]    apbBridge_io_axi_arbiter_io_output_arw_halfPipe_payload_id;
  wire       [7:0]    apbBridge_io_axi_arbiter_io_output_arw_halfPipe_payload_len;
  wire       [2:0]    apbBridge_io_axi_arbiter_io_output_arw_halfPipe_payload_size;
  wire       [1:0]    apbBridge_io_axi_arbiter_io_output_arw_halfPipe_payload_burst;
  wire                apbBridge_io_axi_arbiter_io_output_arw_halfPipe_payload_write;
  reg                 apbBridge_io_axi_arbiter_io_output_arw_rValid;
  wire                apbBridge_io_axi_arbiter_io_output_arw_halfPipe_fire;
  reg        [19:0]   apbBridge_io_axi_arbiter_io_output_arw_rData_addr;
  reg        [3:0]    apbBridge_io_axi_arbiter_io_output_arw_rData_id;
  reg        [7:0]    apbBridge_io_axi_arbiter_io_output_arw_rData_len;
  reg        [2:0]    apbBridge_io_axi_arbiter_io_output_arw_rData_size;
  reg        [1:0]    apbBridge_io_axi_arbiter_io_output_arw_rData_burst;
  reg                 apbBridge_io_axi_arbiter_io_output_arw_rData_write;
  wire                apbBridge_io_axi_arbiter_io_output_w_halfPipe_valid;
  wire                apbBridge_io_axi_arbiter_io_output_w_halfPipe_ready;
  wire       [31:0]   apbBridge_io_axi_arbiter_io_output_w_halfPipe_payload_data;
  wire       [3:0]    apbBridge_io_axi_arbiter_io_output_w_halfPipe_payload_strb;
  wire                apbBridge_io_axi_arbiter_io_output_w_halfPipe_payload_last;
  reg                 apbBridge_io_axi_arbiter_io_output_w_rValid;
  wire                apbBridge_io_axi_arbiter_io_output_w_halfPipe_fire;
  reg        [31:0]   apbBridge_io_axi_arbiter_io_output_w_rData_data;
  reg        [3:0]    apbBridge_io_axi_arbiter_io_output_w_rData_strb;
  reg                 apbBridge_io_axi_arbiter_io_output_w_rData_last;
  reg                 apb3busif_readError;
  reg        [31:0]   apb3busif_readData;
  wire                apb3busif_askWrite;
  wire                apb3busif_askRead;
  wire                apb3busif_doWrite;
  wire                apb3busif_doRead;
  wire                when_RegInst_l153;
  reg        [31:0]   Apb3_reg0;
  wire                when_RegInst_l153_1;
  reg        [31:0]   Apb3_reg1;
  wire                when_RegInst_l153_2;
  reg        [31:0]   Apb3_reg2;
  wire                when_RegInst_l153_3;
  reg        [31:0]   Apb3_reg3;

  Axi4SharedToBram ram (
    .io_axi_arw_valid            (ram_io_axi_arbiter_io_output_arw_halfPipe_valid              ), //i
    .io_axi_arw_ready            (ram_io_axi_arw_ready                                         ), //o
    .io_axi_arw_payload_addr     (ram_io_axi_arbiter_io_output_arw_halfPipe_payload_addr       ), //i
    .io_axi_arw_payload_id       (ram_io_axi_arbiter_io_output_arw_halfPipe_payload_id         ), //i
    .io_axi_arw_payload_len      (ram_io_axi_arbiter_io_output_arw_halfPipe_payload_len        ), //i
    .io_axi_arw_payload_size     (ram_io_axi_arbiter_io_output_arw_halfPipe_payload_size       ), //i
    .io_axi_arw_payload_burst    (ram_io_axi_arbiter_io_output_arw_halfPipe_payload_burst      ), //i
    .io_axi_arw_payload_write    (ram_io_axi_arbiter_io_output_arw_halfPipe_payload_write      ), //i
    .io_axi_w_valid              (ram_io_axi_arbiter_io_output_w_s2mPipe_m2sPipe_valid         ), //i
    .io_axi_w_ready              (ram_io_axi_w_ready                                           ), //o
    .io_axi_w_payload_data       (ram_io_axi_arbiter_io_output_w_s2mPipe_m2sPipe_payload_data  ), //i
    .io_axi_w_payload_strb       (ram_io_axi_arbiter_io_output_w_s2mPipe_m2sPipe_payload_strb  ), //i
    .io_axi_w_payload_last       (ram_io_axi_arbiter_io_output_w_s2mPipe_m2sPipe_payload_last  ), //i
    .io_axi_b_valid              (ram_io_axi_b_valid                                           ), //o
    .io_axi_b_ready              (ram_io_axi_arbiter_io_output_b_ready                         ), //i
    .io_axi_b_payload_id         (ram_io_axi_b_payload_id                                      ), //o
    .io_axi_b_payload_resp       (ram_io_axi_b_payload_resp                                    ), //o
    .io_axi_r_valid              (ram_io_axi_r_valid                                           ), //o
    .io_axi_r_ready              (ram_io_axi_arbiter_io_output_r_ready                         ), //i
    .io_axi_r_payload_data       (ram_io_axi_r_payload_data                                    ), //o
    .io_axi_r_payload_id         (ram_io_axi_r_payload_id                                      ), //o
    .io_axi_r_payload_resp       (ram_io_axi_r_payload_resp                                    ), //o
    .io_axi_r_payload_last       (ram_io_axi_r_payload_last                                    ), //o
    .io_bram_en                  (ram_io_bram_en                                               ), //o
    .io_bram_we                  (ram_io_bram_we                                               ), //o
    .io_bram_addr                (ram_io_bram_addr                                             ), //o
    .io_bram_wrdata              (ram_io_bram_wrdata                                           ), //o
    .io_bram_rddata              (bram_rddata                                                  ), //i
    .clk                         (clk                                                          ), //i
    .reset                       (reset                                                        )  //i
  );
  Axi4SharedToApb3Bridge apbBridge (
    .io_axi_arw_valid            (apbBridge_io_axi_arbiter_io_output_arw_halfPipe_valid          ), //i
    .io_axi_arw_ready            (apbBridge_io_axi_arw_ready                                     ), //o
    .io_axi_arw_payload_addr     (apbBridge_io_axi_arbiter_io_output_arw_halfPipe_payload_addr   ), //i
    .io_axi_arw_payload_id       (apbBridge_io_axi_arbiter_io_output_arw_halfPipe_payload_id     ), //i
    .io_axi_arw_payload_len      (apbBridge_io_axi_arbiter_io_output_arw_halfPipe_payload_len    ), //i
    .io_axi_arw_payload_size     (apbBridge_io_axi_arbiter_io_output_arw_halfPipe_payload_size   ), //i
    .io_axi_arw_payload_burst    (apbBridge_io_axi_arbiter_io_output_arw_halfPipe_payload_burst  ), //i
    .io_axi_arw_payload_write    (apbBridge_io_axi_arbiter_io_output_arw_halfPipe_payload_write  ), //i
    .io_axi_w_valid              (apbBridge_io_axi_arbiter_io_output_w_halfPipe_valid            ), //i
    .io_axi_w_ready              (apbBridge_io_axi_w_ready                                       ), //o
    .io_axi_w_payload_data       (apbBridge_io_axi_arbiter_io_output_w_halfPipe_payload_data     ), //i
    .io_axi_w_payload_strb       (apbBridge_io_axi_arbiter_io_output_w_halfPipe_payload_strb     ), //i
    .io_axi_w_payload_last       (apbBridge_io_axi_arbiter_io_output_w_halfPipe_payload_last     ), //i
    .io_axi_b_valid              (apbBridge_io_axi_b_valid                                       ), //o
    .io_axi_b_ready              (apbBridge_io_axi_arbiter_io_output_b_ready                     ), //i
    .io_axi_b_payload_id         (apbBridge_io_axi_b_payload_id                                  ), //o
    .io_axi_b_payload_resp       (apbBridge_io_axi_b_payload_resp                                ), //o
    .io_axi_r_valid              (apbBridge_io_axi_r_valid                                       ), //o
    .io_axi_r_ready              (apbBridge_io_axi_arbiter_io_output_r_ready                     ), //i
    .io_axi_r_payload_data       (apbBridge_io_axi_r_payload_data                                ), //o
    .io_axi_r_payload_id         (apbBridge_io_axi_r_payload_id                                  ), //o
    .io_axi_r_payload_resp       (apbBridge_io_axi_r_payload_resp                                ), //o
    .io_axi_r_payload_last       (apbBridge_io_axi_r_payload_last                                ), //o
    .io_apb_PADDR                (apbBridge_io_apb_PADDR                                         ), //o
    .io_apb_PSEL                 (apbBridge_io_apb_PSEL                                          ), //o
    .io_apb_PENABLE              (apbBridge_io_apb_PENABLE                                       ), //o
    .io_apb_PREADY               (1'b1                                                           ), //i
    .io_apb_PWRITE               (apbBridge_io_apb_PWRITE                                        ), //o
    .io_apb_PWDATA               (apbBridge_io_apb_PWDATA                                        ), //o
    .io_apb_PRDATA               (apb3busif_readData                                             ), //i
    .io_apb_PSLVERROR            (apb3busif_readError                                            ), //i
    .clk                         (clk                                                            ), //i
    .reset                       (reset                                                          )  //i
  );
  Axi4ReadOnlyDecoder axi_readOnly_decoder (
    .io_input_ar_valid                (axi_readOnly_ar_valid                                    ), //i
    .io_input_ar_ready                (axi_readOnly_decoder_io_input_ar_ready                   ), //o
    .io_input_ar_payload_addr         (axi_readOnly_ar_payload_addr                             ), //i
    .io_input_ar_payload_id           (axi_readOnly_ar_payload_id                               ), //i
    .io_input_ar_payload_len          (axi_readOnly_ar_payload_len                              ), //i
    .io_input_ar_payload_size         (axi_readOnly_ar_payload_size                             ), //i
    .io_input_ar_payload_burst        (axi_readOnly_ar_payload_burst                            ), //i
    .io_input_r_valid                 (axi_readOnly_decoder_io_input_r_valid                    ), //o
    .io_input_r_ready                 (axi_readOnly_r_ready                                     ), //i
    .io_input_r_payload_data          (axi_readOnly_decoder_io_input_r_payload_data             ), //o
    .io_input_r_payload_id            (axi_readOnly_decoder_io_input_r_payload_id               ), //o
    .io_input_r_payload_resp          (axi_readOnly_decoder_io_input_r_payload_resp             ), //o
    .io_input_r_payload_last          (axi_readOnly_decoder_io_input_r_payload_last             ), //o
    .io_outputs_0_ar_valid            (axi_readOnly_decoder_io_outputs_0_ar_valid               ), //o
    .io_outputs_0_ar_ready            (axi_readOnly_decoder_io_outputs_0_ar_validPipe_fire_1    ), //i
    .io_outputs_0_ar_payload_addr     (axi_readOnly_decoder_io_outputs_0_ar_payload_addr        ), //o
    .io_outputs_0_ar_payload_id       (axi_readOnly_decoder_io_outputs_0_ar_payload_id          ), //o
    .io_outputs_0_ar_payload_len      (axi_readOnly_decoder_io_outputs_0_ar_payload_len         ), //o
    .io_outputs_0_ar_payload_size     (axi_readOnly_decoder_io_outputs_0_ar_payload_size        ), //o
    .io_outputs_0_ar_payload_burst    (axi_readOnly_decoder_io_outputs_0_ar_payload_burst       ), //o
    .io_outputs_0_r_valid             (apbBridge_io_axi_arbiter_io_readInputs_0_r_valid         ), //i
    .io_outputs_0_r_ready             (axi_readOnly_decoder_io_outputs_0_r_ready                ), //o
    .io_outputs_0_r_payload_data      (apbBridge_io_axi_arbiter_io_readInputs_0_r_payload_data  ), //i
    .io_outputs_0_r_payload_id        (apbBridge_io_axi_arbiter_io_readInputs_0_r_payload_id    ), //i
    .io_outputs_0_r_payload_resp      (apbBridge_io_axi_arbiter_io_readInputs_0_r_payload_resp  ), //i
    .io_outputs_0_r_payload_last      (apbBridge_io_axi_arbiter_io_readInputs_0_r_payload_last  ), //i
    .io_outputs_1_ar_valid            (axi_readOnly_decoder_io_outputs_1_ar_valid               ), //o
    .io_outputs_1_ar_ready            (axi_readOnly_decoder_io_outputs_1_ar_validPipe_fire_1    ), //i
    .io_outputs_1_ar_payload_addr     (axi_readOnly_decoder_io_outputs_1_ar_payload_addr        ), //o
    .io_outputs_1_ar_payload_id       (axi_readOnly_decoder_io_outputs_1_ar_payload_id          ), //o
    .io_outputs_1_ar_payload_len      (axi_readOnly_decoder_io_outputs_1_ar_payload_len         ), //o
    .io_outputs_1_ar_payload_size     (axi_readOnly_decoder_io_outputs_1_ar_payload_size        ), //o
    .io_outputs_1_ar_payload_burst    (axi_readOnly_decoder_io_outputs_1_ar_payload_burst       ), //o
    .io_outputs_1_r_valid             (ram_io_axi_arbiter_io_readInputs_0_r_valid               ), //i
    .io_outputs_1_r_ready             (axi_readOnly_decoder_io_outputs_1_r_ready                ), //o
    .io_outputs_1_r_payload_data      (ram_io_axi_arbiter_io_readInputs_0_r_payload_data        ), //i
    .io_outputs_1_r_payload_id        (ram_io_axi_arbiter_io_readInputs_0_r_payload_id          ), //i
    .io_outputs_1_r_payload_resp      (ram_io_axi_arbiter_io_readInputs_0_r_payload_resp        ), //i
    .io_outputs_1_r_payload_last      (ram_io_axi_arbiter_io_readInputs_0_r_payload_last        ), //i
    .clk                              (clk                                                      ), //i
    .reset                            (reset                                                    )  //i
  );
  Axi4WriteOnlyDecoder axi_writeOnly_decoder (
    .io_input_aw_valid                (axi_writeOnly_aw_valid                                    ), //i
    .io_input_aw_ready                (axi_writeOnly_decoder_io_input_aw_ready                   ), //o
    .io_input_aw_payload_addr         (axi_writeOnly_aw_payload_addr                             ), //i
    .io_input_aw_payload_id           (axi_writeOnly_aw_payload_id                               ), //i
    .io_input_aw_payload_len          (axi_writeOnly_aw_payload_len                              ), //i
    .io_input_aw_payload_size         (axi_writeOnly_aw_payload_size                             ), //i
    .io_input_aw_payload_burst        (axi_writeOnly_aw_payload_burst                            ), //i
    .io_input_w_valid                 (axi_writeOnly_w_valid                                     ), //i
    .io_input_w_ready                 (axi_writeOnly_decoder_io_input_w_ready                    ), //o
    .io_input_w_payload_data          (axi_writeOnly_w_payload_data                              ), //i
    .io_input_w_payload_strb          (axi_writeOnly_w_payload_strb                              ), //i
    .io_input_w_payload_last          (axi_writeOnly_w_payload_last                              ), //i
    .io_input_b_valid                 (axi_writeOnly_decoder_io_input_b_valid                    ), //o
    .io_input_b_ready                 (axi_writeOnly_b_ready                                     ), //i
    .io_input_b_payload_id            (axi_writeOnly_decoder_io_input_b_payload_id               ), //o
    .io_input_b_payload_resp          (axi_writeOnly_decoder_io_input_b_payload_resp             ), //o
    .io_outputs_0_aw_valid            (axi_writeOnly_decoder_io_outputs_0_aw_valid               ), //o
    .io_outputs_0_aw_ready            (axi_writeOnly_decoder_io_outputs_0_aw_validPipe_fire_1    ), //i
    .io_outputs_0_aw_payload_addr     (axi_writeOnly_decoder_io_outputs_0_aw_payload_addr        ), //o
    .io_outputs_0_aw_payload_id       (axi_writeOnly_decoder_io_outputs_0_aw_payload_id          ), //o
    .io_outputs_0_aw_payload_len      (axi_writeOnly_decoder_io_outputs_0_aw_payload_len         ), //o
    .io_outputs_0_aw_payload_size     (axi_writeOnly_decoder_io_outputs_0_aw_payload_size        ), //o
    .io_outputs_0_aw_payload_burst    (axi_writeOnly_decoder_io_outputs_0_aw_payload_burst       ), //o
    .io_outputs_0_w_valid             (axi_writeOnly_decoder_io_outputs_0_w_valid                ), //o
    .io_outputs_0_w_ready             (apbBridge_io_axi_arbiter_io_writeInputs_0_w_ready         ), //i
    .io_outputs_0_w_payload_data      (axi_writeOnly_decoder_io_outputs_0_w_payload_data         ), //o
    .io_outputs_0_w_payload_strb      (axi_writeOnly_decoder_io_outputs_0_w_payload_strb         ), //o
    .io_outputs_0_w_payload_last      (axi_writeOnly_decoder_io_outputs_0_w_payload_last         ), //o
    .io_outputs_0_b_valid             (apbBridge_io_axi_arbiter_io_writeInputs_0_b_valid         ), //i
    .io_outputs_0_b_ready             (axi_writeOnly_decoder_io_outputs_0_b_ready                ), //o
    .io_outputs_0_b_payload_id        (apbBridge_io_axi_arbiter_io_writeInputs_0_b_payload_id    ), //i
    .io_outputs_0_b_payload_resp      (apbBridge_io_axi_arbiter_io_writeInputs_0_b_payload_resp  ), //i
    .io_outputs_1_aw_valid            (axi_writeOnly_decoder_io_outputs_1_aw_valid               ), //o
    .io_outputs_1_aw_ready            (axi_writeOnly_decoder_io_outputs_1_aw_validPipe_fire_1    ), //i
    .io_outputs_1_aw_payload_addr     (axi_writeOnly_decoder_io_outputs_1_aw_payload_addr        ), //o
    .io_outputs_1_aw_payload_id       (axi_writeOnly_decoder_io_outputs_1_aw_payload_id          ), //o
    .io_outputs_1_aw_payload_len      (axi_writeOnly_decoder_io_outputs_1_aw_payload_len         ), //o
    .io_outputs_1_aw_payload_size     (axi_writeOnly_decoder_io_outputs_1_aw_payload_size        ), //o
    .io_outputs_1_aw_payload_burst    (axi_writeOnly_decoder_io_outputs_1_aw_payload_burst       ), //o
    .io_outputs_1_w_valid             (axi_writeOnly_decoder_io_outputs_1_w_valid                ), //o
    .io_outputs_1_w_ready             (ram_io_axi_arbiter_io_writeInputs_0_w_ready               ), //i
    .io_outputs_1_w_payload_data      (axi_writeOnly_decoder_io_outputs_1_w_payload_data         ), //o
    .io_outputs_1_w_payload_strb      (axi_writeOnly_decoder_io_outputs_1_w_payload_strb         ), //o
    .io_outputs_1_w_payload_last      (axi_writeOnly_decoder_io_outputs_1_w_payload_last         ), //o
    .io_outputs_1_b_valid             (ram_io_axi_arbiter_io_writeInputs_0_b_valid               ), //i
    .io_outputs_1_b_ready             (axi_writeOnly_decoder_io_outputs_1_b_ready                ), //o
    .io_outputs_1_b_payload_id        (ram_io_axi_arbiter_io_writeInputs_0_b_payload_id          ), //i
    .io_outputs_1_b_payload_resp      (ram_io_axi_arbiter_io_writeInputs_0_b_payload_resp        ), //i
    .clk                              (clk                                                       ), //i
    .reset                            (reset                                                     )  //i
  );
  Axi4SharedArbiter ram_io_axi_arbiter (
    .io_readInputs_0_ar_valid             (axi_readOnly_decoder_io_outputs_1_ar_validPipe_valid           ), //i
    .io_readInputs_0_ar_ready             (ram_io_axi_arbiter_io_readInputs_0_ar_ready                    ), //o
    .io_readInputs_0_ar_payload_addr      (axi_readOnly_decoder_io_outputs_1_ar_validPipe_payload_addr    ), //i
    .io_readInputs_0_ar_payload_id        (axi_readOnly_decoder_io_outputs_1_ar_validPipe_payload_id      ), //i
    .io_readInputs_0_ar_payload_len       (axi_readOnly_decoder_io_outputs_1_ar_validPipe_payload_len     ), //i
    .io_readInputs_0_ar_payload_size      (axi_readOnly_decoder_io_outputs_1_ar_validPipe_payload_size    ), //i
    .io_readInputs_0_ar_payload_burst     (axi_readOnly_decoder_io_outputs_1_ar_validPipe_payload_burst   ), //i
    .io_readInputs_0_r_valid              (ram_io_axi_arbiter_io_readInputs_0_r_valid                     ), //o
    .io_readInputs_0_r_ready              (axi_readOnly_decoder_io_outputs_1_r_ready                      ), //i
    .io_readInputs_0_r_payload_data       (ram_io_axi_arbiter_io_readInputs_0_r_payload_data              ), //o
    .io_readInputs_0_r_payload_id         (ram_io_axi_arbiter_io_readInputs_0_r_payload_id                ), //o
    .io_readInputs_0_r_payload_resp       (ram_io_axi_arbiter_io_readInputs_0_r_payload_resp              ), //o
    .io_readInputs_0_r_payload_last       (ram_io_axi_arbiter_io_readInputs_0_r_payload_last              ), //o
    .io_writeInputs_0_aw_valid            (axi_writeOnly_decoder_io_outputs_1_aw_validPipe_valid          ), //i
    .io_writeInputs_0_aw_ready            (ram_io_axi_arbiter_io_writeInputs_0_aw_ready                   ), //o
    .io_writeInputs_0_aw_payload_addr     (axi_writeOnly_decoder_io_outputs_1_aw_validPipe_payload_addr   ), //i
    .io_writeInputs_0_aw_payload_id       (axi_writeOnly_decoder_io_outputs_1_aw_validPipe_payload_id     ), //i
    .io_writeInputs_0_aw_payload_len      (axi_writeOnly_decoder_io_outputs_1_aw_validPipe_payload_len    ), //i
    .io_writeInputs_0_aw_payload_size     (axi_writeOnly_decoder_io_outputs_1_aw_validPipe_payload_size   ), //i
    .io_writeInputs_0_aw_payload_burst    (axi_writeOnly_decoder_io_outputs_1_aw_validPipe_payload_burst  ), //i
    .io_writeInputs_0_w_valid             (axi_writeOnly_decoder_io_outputs_1_w_valid                     ), //i
    .io_writeInputs_0_w_ready             (ram_io_axi_arbiter_io_writeInputs_0_w_ready                    ), //o
    .io_writeInputs_0_w_payload_data      (axi_writeOnly_decoder_io_outputs_1_w_payload_data              ), //i
    .io_writeInputs_0_w_payload_strb      (axi_writeOnly_decoder_io_outputs_1_w_payload_strb              ), //i
    .io_writeInputs_0_w_payload_last      (axi_writeOnly_decoder_io_outputs_1_w_payload_last              ), //i
    .io_writeInputs_0_b_valid             (ram_io_axi_arbiter_io_writeInputs_0_b_valid                    ), //o
    .io_writeInputs_0_b_ready             (axi_writeOnly_decoder_io_outputs_1_b_ready                     ), //i
    .io_writeInputs_0_b_payload_id        (ram_io_axi_arbiter_io_writeInputs_0_b_payload_id               ), //o
    .io_writeInputs_0_b_payload_resp      (ram_io_axi_arbiter_io_writeInputs_0_b_payload_resp             ), //o
    .io_output_arw_valid                  (ram_io_axi_arbiter_io_output_arw_valid                         ), //o
    .io_output_arw_ready                  (ram_io_axi_arbiter_io_output_arw_ready                         ), //i
    .io_output_arw_payload_addr           (ram_io_axi_arbiter_io_output_arw_payload_addr                  ), //o
    .io_output_arw_payload_id             (ram_io_axi_arbiter_io_output_arw_payload_id                    ), //o
    .io_output_arw_payload_len            (ram_io_axi_arbiter_io_output_arw_payload_len                   ), //o
    .io_output_arw_payload_size           (ram_io_axi_arbiter_io_output_arw_payload_size                  ), //o
    .io_output_arw_payload_burst          (ram_io_axi_arbiter_io_output_arw_payload_burst                 ), //o
    .io_output_arw_payload_write          (ram_io_axi_arbiter_io_output_arw_payload_write                 ), //o
    .io_output_w_valid                    (ram_io_axi_arbiter_io_output_w_valid                           ), //o
    .io_output_w_ready                    (ram_io_axi_arbiter_io_output_w_ready                           ), //i
    .io_output_w_payload_data             (ram_io_axi_arbiter_io_output_w_payload_data                    ), //o
    .io_output_w_payload_strb             (ram_io_axi_arbiter_io_output_w_payload_strb                    ), //o
    .io_output_w_payload_last             (ram_io_axi_arbiter_io_output_w_payload_last                    ), //o
    .io_output_b_valid                    (ram_io_axi_b_valid                                             ), //i
    .io_output_b_ready                    (ram_io_axi_arbiter_io_output_b_ready                           ), //o
    .io_output_b_payload_id               (ram_io_axi_b_payload_id                                        ), //i
    .io_output_b_payload_resp             (ram_io_axi_b_payload_resp                                      ), //i
    .io_output_r_valid                    (ram_io_axi_r_valid                                             ), //i
    .io_output_r_ready                    (ram_io_axi_arbiter_io_output_r_ready                           ), //o
    .io_output_r_payload_data             (ram_io_axi_r_payload_data                                      ), //i
    .io_output_r_payload_id               (ram_io_axi_r_payload_id                                        ), //i
    .io_output_r_payload_resp             (ram_io_axi_r_payload_resp                                      ), //i
    .io_output_r_payload_last             (ram_io_axi_r_payload_last                                      ), //i
    .clk                                  (clk                                                            ), //i
    .reset                                (reset                                                          )  //i
  );
  Axi4SharedArbiter apbBridge_io_axi_arbiter (
    .io_readInputs_0_ar_valid             (axi_readOnly_decoder_io_outputs_0_ar_validPipe_valid           ), //i
    .io_readInputs_0_ar_ready             (apbBridge_io_axi_arbiter_io_readInputs_0_ar_ready              ), //o
    .io_readInputs_0_ar_payload_addr      (axi_readOnly_decoder_io_outputs_0_ar_validPipe_payload_addr    ), //i
    .io_readInputs_0_ar_payload_id        (axi_readOnly_decoder_io_outputs_0_ar_validPipe_payload_id      ), //i
    .io_readInputs_0_ar_payload_len       (axi_readOnly_decoder_io_outputs_0_ar_validPipe_payload_len     ), //i
    .io_readInputs_0_ar_payload_size      (axi_readOnly_decoder_io_outputs_0_ar_validPipe_payload_size    ), //i
    .io_readInputs_0_ar_payload_burst     (axi_readOnly_decoder_io_outputs_0_ar_validPipe_payload_burst   ), //i
    .io_readInputs_0_r_valid              (apbBridge_io_axi_arbiter_io_readInputs_0_r_valid               ), //o
    .io_readInputs_0_r_ready              (axi_readOnly_decoder_io_outputs_0_r_ready                      ), //i
    .io_readInputs_0_r_payload_data       (apbBridge_io_axi_arbiter_io_readInputs_0_r_payload_data        ), //o
    .io_readInputs_0_r_payload_id         (apbBridge_io_axi_arbiter_io_readInputs_0_r_payload_id          ), //o
    .io_readInputs_0_r_payload_resp       (apbBridge_io_axi_arbiter_io_readInputs_0_r_payload_resp        ), //o
    .io_readInputs_0_r_payload_last       (apbBridge_io_axi_arbiter_io_readInputs_0_r_payload_last        ), //o
    .io_writeInputs_0_aw_valid            (axi_writeOnly_decoder_io_outputs_0_aw_validPipe_valid          ), //i
    .io_writeInputs_0_aw_ready            (apbBridge_io_axi_arbiter_io_writeInputs_0_aw_ready             ), //o
    .io_writeInputs_0_aw_payload_addr     (axi_writeOnly_decoder_io_outputs_0_aw_validPipe_payload_addr   ), //i
    .io_writeInputs_0_aw_payload_id       (axi_writeOnly_decoder_io_outputs_0_aw_validPipe_payload_id     ), //i
    .io_writeInputs_0_aw_payload_len      (axi_writeOnly_decoder_io_outputs_0_aw_validPipe_payload_len    ), //i
    .io_writeInputs_0_aw_payload_size     (axi_writeOnly_decoder_io_outputs_0_aw_validPipe_payload_size   ), //i
    .io_writeInputs_0_aw_payload_burst    (axi_writeOnly_decoder_io_outputs_0_aw_validPipe_payload_burst  ), //i
    .io_writeInputs_0_w_valid             (axi_writeOnly_decoder_io_outputs_0_w_valid                     ), //i
    .io_writeInputs_0_w_ready             (apbBridge_io_axi_arbiter_io_writeInputs_0_w_ready              ), //o
    .io_writeInputs_0_w_payload_data      (axi_writeOnly_decoder_io_outputs_0_w_payload_data              ), //i
    .io_writeInputs_0_w_payload_strb      (axi_writeOnly_decoder_io_outputs_0_w_payload_strb              ), //i
    .io_writeInputs_0_w_payload_last      (axi_writeOnly_decoder_io_outputs_0_w_payload_last              ), //i
    .io_writeInputs_0_b_valid             (apbBridge_io_axi_arbiter_io_writeInputs_0_b_valid              ), //o
    .io_writeInputs_0_b_ready             (axi_writeOnly_decoder_io_outputs_0_b_ready                     ), //i
    .io_writeInputs_0_b_payload_id        (apbBridge_io_axi_arbiter_io_writeInputs_0_b_payload_id         ), //o
    .io_writeInputs_0_b_payload_resp      (apbBridge_io_axi_arbiter_io_writeInputs_0_b_payload_resp       ), //o
    .io_output_arw_valid                  (apbBridge_io_axi_arbiter_io_output_arw_valid                   ), //o
    .io_output_arw_ready                  (apbBridge_io_axi_arbiter_io_output_arw_ready                   ), //i
    .io_output_arw_payload_addr           (apbBridge_io_axi_arbiter_io_output_arw_payload_addr            ), //o
    .io_output_arw_payload_id             (apbBridge_io_axi_arbiter_io_output_arw_payload_id              ), //o
    .io_output_arw_payload_len            (apbBridge_io_axi_arbiter_io_output_arw_payload_len             ), //o
    .io_output_arw_payload_size           (apbBridge_io_axi_arbiter_io_output_arw_payload_size            ), //o
    .io_output_arw_payload_burst          (apbBridge_io_axi_arbiter_io_output_arw_payload_burst           ), //o
    .io_output_arw_payload_write          (apbBridge_io_axi_arbiter_io_output_arw_payload_write           ), //o
    .io_output_w_valid                    (apbBridge_io_axi_arbiter_io_output_w_valid                     ), //o
    .io_output_w_ready                    (apbBridge_io_axi_arbiter_io_output_w_ready                     ), //i
    .io_output_w_payload_data             (apbBridge_io_axi_arbiter_io_output_w_payload_data              ), //o
    .io_output_w_payload_strb             (apbBridge_io_axi_arbiter_io_output_w_payload_strb              ), //o
    .io_output_w_payload_last             (apbBridge_io_axi_arbiter_io_output_w_payload_last              ), //o
    .io_output_b_valid                    (apbBridge_io_axi_b_valid                                       ), //i
    .io_output_b_ready                    (apbBridge_io_axi_arbiter_io_output_b_ready                     ), //o
    .io_output_b_payload_id               (apbBridge_io_axi_b_payload_id                                  ), //i
    .io_output_b_payload_resp             (apbBridge_io_axi_b_payload_resp                                ), //i
    .io_output_r_valid                    (apbBridge_io_axi_r_valid                                       ), //i
    .io_output_r_ready                    (apbBridge_io_axi_arbiter_io_output_r_ready                     ), //o
    .io_output_r_payload_data             (apbBridge_io_axi_r_payload_data                                ), //i
    .io_output_r_payload_id               (apbBridge_io_axi_r_payload_id                                  ), //i
    .io_output_r_payload_resp             (apbBridge_io_axi_r_payload_resp                                ), //i
    .io_output_r_payload_last             (apbBridge_io_axi_r_payload_last                                ), //i
    .clk                                  (clk                                                            ), //i
    .reset                                (reset                                                          )  //i
  );
  assign bram_en = ram_io_bram_en;
  assign bram_we = ram_io_bram_we;
  assign bram_addr = ram_io_bram_addr;
  assign bram_wrdata = ram_io_bram_wrdata;
  assign axi_readOnly_ar_valid = axi_ar_valid;
  assign axi_ar_ready = axi_readOnly_ar_ready;
  assign axi_readOnly_ar_payload_addr = axi_ar_payload_addr;
  assign axi_readOnly_ar_payload_id = axi_ar_payload_id;
  assign axi_readOnly_ar_payload_len = axi_ar_payload_len;
  assign axi_readOnly_ar_payload_size = axi_ar_payload_size;
  assign axi_readOnly_ar_payload_burst = axi_ar_payload_burst;
  assign axi_r_valid = axi_readOnly_r_valid;
  assign axi_readOnly_r_ready = axi_r_ready;
  assign axi_r_payload_data = axi_readOnly_r_payload_data;
  assign axi_r_payload_last = axi_readOnly_r_payload_last;
  assign axi_r_payload_id = axi_readOnly_r_payload_id;
  assign axi_r_payload_resp = axi_readOnly_r_payload_resp;
  assign axi_writeOnly_aw_valid = axi_aw_valid;
  assign axi_aw_ready = axi_writeOnly_aw_ready;
  assign axi_writeOnly_aw_payload_addr = axi_aw_payload_addr;
  assign axi_writeOnly_aw_payload_id = axi_aw_payload_id;
  assign axi_writeOnly_aw_payload_len = axi_aw_payload_len;
  assign axi_writeOnly_aw_payload_size = axi_aw_payload_size;
  assign axi_writeOnly_aw_payload_burst = axi_aw_payload_burst;
  assign axi_writeOnly_w_valid = axi_w_valid;
  assign axi_w_ready = axi_writeOnly_w_ready;
  assign axi_writeOnly_w_payload_data = axi_w_payload_data;
  assign axi_writeOnly_w_payload_strb = axi_w_payload_strb;
  assign axi_writeOnly_w_payload_last = axi_w_payload_last;
  assign axi_b_valid = axi_writeOnly_b_valid;
  assign axi_writeOnly_b_ready = axi_b_ready;
  assign axi_b_payload_id = axi_writeOnly_b_payload_id;
  assign axi_b_payload_resp = axi_writeOnly_b_payload_resp;
  assign axi_readOnly_decoder_io_outputs_0_ar_validPipe_fire = (axi_readOnly_decoder_io_outputs_0_ar_validPipe_valid && axi_readOnly_decoder_io_outputs_0_ar_validPipe_ready);
  assign axi_readOnly_decoder_io_outputs_0_ar_validPipe_fire_1 = (axi_readOnly_decoder_io_outputs_0_ar_validPipe_valid && axi_readOnly_decoder_io_outputs_0_ar_validPipe_ready);
  assign axi_readOnly_decoder_io_outputs_0_ar_validPipe_valid = axi_readOnly_decoder_io_outputs_0_ar_rValid;
  assign axi_readOnly_decoder_io_outputs_0_ar_validPipe_payload_addr = axi_readOnly_decoder_io_outputs_0_ar_payload_addr;
  assign axi_readOnly_decoder_io_outputs_0_ar_validPipe_payload_id = axi_readOnly_decoder_io_outputs_0_ar_payload_id;
  assign axi_readOnly_decoder_io_outputs_0_ar_validPipe_payload_len = axi_readOnly_decoder_io_outputs_0_ar_payload_len;
  assign axi_readOnly_decoder_io_outputs_0_ar_validPipe_payload_size = axi_readOnly_decoder_io_outputs_0_ar_payload_size;
  assign axi_readOnly_decoder_io_outputs_0_ar_validPipe_payload_burst = axi_readOnly_decoder_io_outputs_0_ar_payload_burst;
  assign axi_readOnly_decoder_io_outputs_0_ar_validPipe_ready = apbBridge_io_axi_arbiter_io_readInputs_0_ar_ready;
  assign axi_readOnly_decoder_io_outputs_1_ar_validPipe_fire = (axi_readOnly_decoder_io_outputs_1_ar_validPipe_valid && axi_readOnly_decoder_io_outputs_1_ar_validPipe_ready);
  assign axi_readOnly_decoder_io_outputs_1_ar_validPipe_fire_1 = (axi_readOnly_decoder_io_outputs_1_ar_validPipe_valid && axi_readOnly_decoder_io_outputs_1_ar_validPipe_ready);
  assign axi_readOnly_decoder_io_outputs_1_ar_validPipe_valid = axi_readOnly_decoder_io_outputs_1_ar_rValid;
  assign axi_readOnly_decoder_io_outputs_1_ar_validPipe_payload_addr = axi_readOnly_decoder_io_outputs_1_ar_payload_addr;
  assign axi_readOnly_decoder_io_outputs_1_ar_validPipe_payload_id = axi_readOnly_decoder_io_outputs_1_ar_payload_id;
  assign axi_readOnly_decoder_io_outputs_1_ar_validPipe_payload_len = axi_readOnly_decoder_io_outputs_1_ar_payload_len;
  assign axi_readOnly_decoder_io_outputs_1_ar_validPipe_payload_size = axi_readOnly_decoder_io_outputs_1_ar_payload_size;
  assign axi_readOnly_decoder_io_outputs_1_ar_validPipe_payload_burst = axi_readOnly_decoder_io_outputs_1_ar_payload_burst;
  assign axi_readOnly_decoder_io_outputs_1_ar_validPipe_ready = ram_io_axi_arbiter_io_readInputs_0_ar_ready;
  assign axi_readOnly_ar_ready = axi_readOnly_decoder_io_input_ar_ready;
  assign axi_readOnly_r_valid = axi_readOnly_decoder_io_input_r_valid;
  assign axi_readOnly_r_payload_data = axi_readOnly_decoder_io_input_r_payload_data;
  assign axi_readOnly_r_payload_last = axi_readOnly_decoder_io_input_r_payload_last;
  assign axi_readOnly_r_payload_id = axi_readOnly_decoder_io_input_r_payload_id;
  assign axi_readOnly_r_payload_resp = axi_readOnly_decoder_io_input_r_payload_resp;
  assign axi_writeOnly_decoder_io_outputs_0_aw_validPipe_fire = (axi_writeOnly_decoder_io_outputs_0_aw_validPipe_valid && axi_writeOnly_decoder_io_outputs_0_aw_validPipe_ready);
  assign axi_writeOnly_decoder_io_outputs_0_aw_validPipe_fire_1 = (axi_writeOnly_decoder_io_outputs_0_aw_validPipe_valid && axi_writeOnly_decoder_io_outputs_0_aw_validPipe_ready);
  assign axi_writeOnly_decoder_io_outputs_0_aw_validPipe_valid = axi_writeOnly_decoder_io_outputs_0_aw_rValid;
  assign axi_writeOnly_decoder_io_outputs_0_aw_validPipe_payload_addr = axi_writeOnly_decoder_io_outputs_0_aw_payload_addr;
  assign axi_writeOnly_decoder_io_outputs_0_aw_validPipe_payload_id = axi_writeOnly_decoder_io_outputs_0_aw_payload_id;
  assign axi_writeOnly_decoder_io_outputs_0_aw_validPipe_payload_len = axi_writeOnly_decoder_io_outputs_0_aw_payload_len;
  assign axi_writeOnly_decoder_io_outputs_0_aw_validPipe_payload_size = axi_writeOnly_decoder_io_outputs_0_aw_payload_size;
  assign axi_writeOnly_decoder_io_outputs_0_aw_validPipe_payload_burst = axi_writeOnly_decoder_io_outputs_0_aw_payload_burst;
  assign axi_writeOnly_decoder_io_outputs_0_aw_validPipe_ready = apbBridge_io_axi_arbiter_io_writeInputs_0_aw_ready;
  assign axi_writeOnly_decoder_io_outputs_1_aw_validPipe_fire = (axi_writeOnly_decoder_io_outputs_1_aw_validPipe_valid && axi_writeOnly_decoder_io_outputs_1_aw_validPipe_ready);
  assign axi_writeOnly_decoder_io_outputs_1_aw_validPipe_fire_1 = (axi_writeOnly_decoder_io_outputs_1_aw_validPipe_valid && axi_writeOnly_decoder_io_outputs_1_aw_validPipe_ready);
  assign axi_writeOnly_decoder_io_outputs_1_aw_validPipe_valid = axi_writeOnly_decoder_io_outputs_1_aw_rValid;
  assign axi_writeOnly_decoder_io_outputs_1_aw_validPipe_payload_addr = axi_writeOnly_decoder_io_outputs_1_aw_payload_addr;
  assign axi_writeOnly_decoder_io_outputs_1_aw_validPipe_payload_id = axi_writeOnly_decoder_io_outputs_1_aw_payload_id;
  assign axi_writeOnly_decoder_io_outputs_1_aw_validPipe_payload_len = axi_writeOnly_decoder_io_outputs_1_aw_payload_len;
  assign axi_writeOnly_decoder_io_outputs_1_aw_validPipe_payload_size = axi_writeOnly_decoder_io_outputs_1_aw_payload_size;
  assign axi_writeOnly_decoder_io_outputs_1_aw_validPipe_payload_burst = axi_writeOnly_decoder_io_outputs_1_aw_payload_burst;
  assign axi_writeOnly_decoder_io_outputs_1_aw_validPipe_ready = ram_io_axi_arbiter_io_writeInputs_0_aw_ready;
  assign axi_writeOnly_aw_ready = axi_writeOnly_decoder_io_input_aw_ready;
  assign axi_writeOnly_w_ready = axi_writeOnly_decoder_io_input_w_ready;
  assign axi_writeOnly_b_valid = axi_writeOnly_decoder_io_input_b_valid;
  assign axi_writeOnly_b_payload_id = axi_writeOnly_decoder_io_input_b_payload_id;
  assign axi_writeOnly_b_payload_resp = axi_writeOnly_decoder_io_input_b_payload_resp;
  assign ram_io_axi_arbiter_io_output_arw_halfPipe_fire = (ram_io_axi_arbiter_io_output_arw_halfPipe_valid && ram_io_axi_arbiter_io_output_arw_halfPipe_ready);
  assign ram_io_axi_arbiter_io_output_arw_ready = (! ram_io_axi_arbiter_io_output_arw_rValid);
  assign ram_io_axi_arbiter_io_output_arw_halfPipe_valid = ram_io_axi_arbiter_io_output_arw_rValid;
  assign ram_io_axi_arbiter_io_output_arw_halfPipe_payload_addr = ram_io_axi_arbiter_io_output_arw_rData_addr;
  assign ram_io_axi_arbiter_io_output_arw_halfPipe_payload_id = ram_io_axi_arbiter_io_output_arw_rData_id;
  assign ram_io_axi_arbiter_io_output_arw_halfPipe_payload_len = ram_io_axi_arbiter_io_output_arw_rData_len;
  assign ram_io_axi_arbiter_io_output_arw_halfPipe_payload_size = ram_io_axi_arbiter_io_output_arw_rData_size;
  assign ram_io_axi_arbiter_io_output_arw_halfPipe_payload_burst = ram_io_axi_arbiter_io_output_arw_rData_burst;
  assign ram_io_axi_arbiter_io_output_arw_halfPipe_payload_write = ram_io_axi_arbiter_io_output_arw_rData_write;
  assign ram_io_axi_arbiter_io_output_arw_halfPipe_ready = ram_io_axi_arw_ready;
  assign ram_io_axi_arbiter_io_output_w_ready = (! ram_io_axi_arbiter_io_output_w_rValid);
  assign ram_io_axi_arbiter_io_output_w_s2mPipe_valid = (ram_io_axi_arbiter_io_output_w_valid || ram_io_axi_arbiter_io_output_w_rValid);
  assign ram_io_axi_arbiter_io_output_w_s2mPipe_payload_data = (ram_io_axi_arbiter_io_output_w_rValid ? ram_io_axi_arbiter_io_output_w_rData_data : ram_io_axi_arbiter_io_output_w_payload_data);
  assign ram_io_axi_arbiter_io_output_w_s2mPipe_payload_strb = (ram_io_axi_arbiter_io_output_w_rValid ? ram_io_axi_arbiter_io_output_w_rData_strb : ram_io_axi_arbiter_io_output_w_payload_strb);
  assign ram_io_axi_arbiter_io_output_w_s2mPipe_payload_last = (ram_io_axi_arbiter_io_output_w_rValid ? ram_io_axi_arbiter_io_output_w_rData_last : ram_io_axi_arbiter_io_output_w_payload_last);
  always @(*) begin
    ram_io_axi_arbiter_io_output_w_s2mPipe_ready = ram_io_axi_arbiter_io_output_w_s2mPipe_m2sPipe_ready;
    if(when_Stream_l342) begin
      ram_io_axi_arbiter_io_output_w_s2mPipe_ready = 1'b1;
    end
  end

  assign when_Stream_l342 = (! ram_io_axi_arbiter_io_output_w_s2mPipe_m2sPipe_valid);
  assign ram_io_axi_arbiter_io_output_w_s2mPipe_m2sPipe_valid = ram_io_axi_arbiter_io_output_w_s2mPipe_rValid;
  assign ram_io_axi_arbiter_io_output_w_s2mPipe_m2sPipe_payload_data = ram_io_axi_arbiter_io_output_w_s2mPipe_rData_data;
  assign ram_io_axi_arbiter_io_output_w_s2mPipe_m2sPipe_payload_strb = ram_io_axi_arbiter_io_output_w_s2mPipe_rData_strb;
  assign ram_io_axi_arbiter_io_output_w_s2mPipe_m2sPipe_payload_last = ram_io_axi_arbiter_io_output_w_s2mPipe_rData_last;
  assign ram_io_axi_arbiter_io_output_w_s2mPipe_m2sPipe_ready = ram_io_axi_w_ready;
  assign apbBridge_io_axi_arbiter_io_output_arw_halfPipe_fire = (apbBridge_io_axi_arbiter_io_output_arw_halfPipe_valid && apbBridge_io_axi_arbiter_io_output_arw_halfPipe_ready);
  assign apbBridge_io_axi_arbiter_io_output_arw_ready = (! apbBridge_io_axi_arbiter_io_output_arw_rValid);
  assign apbBridge_io_axi_arbiter_io_output_arw_halfPipe_valid = apbBridge_io_axi_arbiter_io_output_arw_rValid;
  assign apbBridge_io_axi_arbiter_io_output_arw_halfPipe_payload_addr = apbBridge_io_axi_arbiter_io_output_arw_rData_addr;
  assign apbBridge_io_axi_arbiter_io_output_arw_halfPipe_payload_id = apbBridge_io_axi_arbiter_io_output_arw_rData_id;
  assign apbBridge_io_axi_arbiter_io_output_arw_halfPipe_payload_len = apbBridge_io_axi_arbiter_io_output_arw_rData_len;
  assign apbBridge_io_axi_arbiter_io_output_arw_halfPipe_payload_size = apbBridge_io_axi_arbiter_io_output_arw_rData_size;
  assign apbBridge_io_axi_arbiter_io_output_arw_halfPipe_payload_burst = apbBridge_io_axi_arbiter_io_output_arw_rData_burst;
  assign apbBridge_io_axi_arbiter_io_output_arw_halfPipe_payload_write = apbBridge_io_axi_arbiter_io_output_arw_rData_write;
  assign apbBridge_io_axi_arbiter_io_output_arw_halfPipe_ready = apbBridge_io_axi_arw_ready;
  assign apbBridge_io_axi_arbiter_io_output_w_halfPipe_fire = (apbBridge_io_axi_arbiter_io_output_w_halfPipe_valid && apbBridge_io_axi_arbiter_io_output_w_halfPipe_ready);
  assign apbBridge_io_axi_arbiter_io_output_w_ready = (! apbBridge_io_axi_arbiter_io_output_w_rValid);
  assign apbBridge_io_axi_arbiter_io_output_w_halfPipe_valid = apbBridge_io_axi_arbiter_io_output_w_rValid;
  assign apbBridge_io_axi_arbiter_io_output_w_halfPipe_payload_data = apbBridge_io_axi_arbiter_io_output_w_rData_data;
  assign apbBridge_io_axi_arbiter_io_output_w_halfPipe_payload_strb = apbBridge_io_axi_arbiter_io_output_w_rData_strb;
  assign apbBridge_io_axi_arbiter_io_output_w_halfPipe_payload_last = apbBridge_io_axi_arbiter_io_output_w_rData_last;
  assign apbBridge_io_axi_arbiter_io_output_w_halfPipe_ready = apbBridge_io_axi_w_ready;
  assign apb3busif_askWrite = ((apbBridge_io_apb_PSEL[0] && apbBridge_io_apb_PENABLE) && apbBridge_io_apb_PWRITE);
  assign apb3busif_askRead = ((apbBridge_io_apb_PSEL[0] && apbBridge_io_apb_PENABLE) && (! apbBridge_io_apb_PWRITE));
  assign apb3busif_doWrite = (((apbBridge_io_apb_PSEL[0] && apbBridge_io_apb_PENABLE) && 1'b1) && apbBridge_io_apb_PWRITE);
  assign apb3busif_doRead = (((apbBridge_io_apb_PSEL[0] && apbBridge_io_apb_PENABLE) && 1'b1) && (! apbBridge_io_apb_PWRITE));
  assign when_RegInst_l153 = ((apbBridge_io_apb_PADDR == 20'h0) && apb3busif_doWrite);
  assign when_RegInst_l153_1 = ((apbBridge_io_apb_PADDR == 20'h00004) && apb3busif_doWrite);
  assign when_RegInst_l153_2 = ((apbBridge_io_apb_PADDR == 20'h01010) && apb3busif_doWrite);
  assign when_RegInst_l153_3 = ((apbBridge_io_apb_PADDR == 20'h01014) && apb3busif_doWrite);
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      axi_readOnly_decoder_io_outputs_0_ar_rValid <= 1'b0;
      axi_readOnly_decoder_io_outputs_1_ar_rValid <= 1'b0;
      axi_writeOnly_decoder_io_outputs_0_aw_rValid <= 1'b0;
      axi_writeOnly_decoder_io_outputs_1_aw_rValid <= 1'b0;
      ram_io_axi_arbiter_io_output_arw_rValid <= 1'b0;
      ram_io_axi_arbiter_io_output_w_rValid <= 1'b0;
      ram_io_axi_arbiter_io_output_w_s2mPipe_rValid <= 1'b0;
      apbBridge_io_axi_arbiter_io_output_arw_rValid <= 1'b0;
      apbBridge_io_axi_arbiter_io_output_w_rValid <= 1'b0;
      apb3busif_readError <= 1'b0;
      apb3busif_readData <= 32'h0;
      Apb3_reg0 <= 32'h0;
      Apb3_reg1 <= 32'h0;
      Apb3_reg2 <= 32'h0;
      Apb3_reg3 <= 32'h0;
    end else begin
      if(axi_readOnly_decoder_io_outputs_0_ar_valid) begin
        axi_readOnly_decoder_io_outputs_0_ar_rValid <= 1'b1;
      end
      if(axi_readOnly_decoder_io_outputs_0_ar_validPipe_fire) begin
        axi_readOnly_decoder_io_outputs_0_ar_rValid <= 1'b0;
      end
      if(axi_readOnly_decoder_io_outputs_1_ar_valid) begin
        axi_readOnly_decoder_io_outputs_1_ar_rValid <= 1'b1;
      end
      if(axi_readOnly_decoder_io_outputs_1_ar_validPipe_fire) begin
        axi_readOnly_decoder_io_outputs_1_ar_rValid <= 1'b0;
      end
      if(axi_writeOnly_decoder_io_outputs_0_aw_valid) begin
        axi_writeOnly_decoder_io_outputs_0_aw_rValid <= 1'b1;
      end
      if(axi_writeOnly_decoder_io_outputs_0_aw_validPipe_fire) begin
        axi_writeOnly_decoder_io_outputs_0_aw_rValid <= 1'b0;
      end
      if(axi_writeOnly_decoder_io_outputs_1_aw_valid) begin
        axi_writeOnly_decoder_io_outputs_1_aw_rValid <= 1'b1;
      end
      if(axi_writeOnly_decoder_io_outputs_1_aw_validPipe_fire) begin
        axi_writeOnly_decoder_io_outputs_1_aw_rValid <= 1'b0;
      end
      if(ram_io_axi_arbiter_io_output_arw_valid) begin
        ram_io_axi_arbiter_io_output_arw_rValid <= 1'b1;
      end
      if(ram_io_axi_arbiter_io_output_arw_halfPipe_fire) begin
        ram_io_axi_arbiter_io_output_arw_rValid <= 1'b0;
      end
      if(ram_io_axi_arbiter_io_output_w_valid) begin
        ram_io_axi_arbiter_io_output_w_rValid <= 1'b1;
      end
      if(ram_io_axi_arbiter_io_output_w_s2mPipe_ready) begin
        ram_io_axi_arbiter_io_output_w_rValid <= 1'b0;
      end
      if(ram_io_axi_arbiter_io_output_w_s2mPipe_ready) begin
        ram_io_axi_arbiter_io_output_w_s2mPipe_rValid <= ram_io_axi_arbiter_io_output_w_s2mPipe_valid;
      end
      if(apbBridge_io_axi_arbiter_io_output_arw_valid) begin
        apbBridge_io_axi_arbiter_io_output_arw_rValid <= 1'b1;
      end
      if(apbBridge_io_axi_arbiter_io_output_arw_halfPipe_fire) begin
        apbBridge_io_axi_arbiter_io_output_arw_rValid <= 1'b0;
      end
      if(apbBridge_io_axi_arbiter_io_output_w_valid) begin
        apbBridge_io_axi_arbiter_io_output_w_rValid <= 1'b1;
      end
      if(apbBridge_io_axi_arbiter_io_output_w_halfPipe_fire) begin
        apbBridge_io_axi_arbiter_io_output_w_rValid <= 1'b0;
      end
      if(when_RegInst_l153) begin
        Apb3_reg0 <= apbBridge_io_apb_PWDATA[31 : 0];
      end
      if(when_RegInst_l153_1) begin
        Apb3_reg1 <= apbBridge_io_apb_PWDATA[31 : 0];
      end
      if(when_RegInst_l153_2) begin
        Apb3_reg2 <= apbBridge_io_apb_PWDATA[31 : 0];
      end
      if(when_RegInst_l153_3) begin
        Apb3_reg3 <= apbBridge_io_apb_PWDATA[31 : 0];
      end
      if(apb3busif_doRead) begin
        case(apbBridge_io_apb_PADDR)
          20'h0 : begin
            apb3busif_readData <= Apb3_reg0;
            apb3busif_readError <= 1'b0;
          end
          20'h00004 : begin
            apb3busif_readData <= Apb3_reg1;
            apb3busif_readError <= 1'b0;
          end
          20'h01010 : begin
            apb3busif_readData <= Apb3_reg2;
            apb3busif_readError <= 1'b0;
          end
          20'h01014 : begin
            apb3busif_readData <= Apb3_reg3;
            apb3busif_readError <= 1'b0;
          end
          default : begin
            apb3busif_readData <= 32'h0;
            apb3busif_readError <= 1'b1;
          end
        endcase
      end
    end
  end

  always @(posedge clk) begin
    if(ram_io_axi_arbiter_io_output_arw_ready) begin
      ram_io_axi_arbiter_io_output_arw_rData_addr <= ram_io_axi_arbiter_io_output_arw_payload_addr;
      ram_io_axi_arbiter_io_output_arw_rData_id <= ram_io_axi_arbiter_io_output_arw_payload_id;
      ram_io_axi_arbiter_io_output_arw_rData_len <= ram_io_axi_arbiter_io_output_arw_payload_len;
      ram_io_axi_arbiter_io_output_arw_rData_size <= ram_io_axi_arbiter_io_output_arw_payload_size;
      ram_io_axi_arbiter_io_output_arw_rData_burst <= ram_io_axi_arbiter_io_output_arw_payload_burst;
      ram_io_axi_arbiter_io_output_arw_rData_write <= ram_io_axi_arbiter_io_output_arw_payload_write;
    end
    if(ram_io_axi_arbiter_io_output_w_ready) begin
      ram_io_axi_arbiter_io_output_w_rData_data <= ram_io_axi_arbiter_io_output_w_payload_data;
      ram_io_axi_arbiter_io_output_w_rData_strb <= ram_io_axi_arbiter_io_output_w_payload_strb;
      ram_io_axi_arbiter_io_output_w_rData_last <= ram_io_axi_arbiter_io_output_w_payload_last;
    end
    if(ram_io_axi_arbiter_io_output_w_s2mPipe_ready) begin
      ram_io_axi_arbiter_io_output_w_s2mPipe_rData_data <= ram_io_axi_arbiter_io_output_w_s2mPipe_payload_data;
      ram_io_axi_arbiter_io_output_w_s2mPipe_rData_strb <= ram_io_axi_arbiter_io_output_w_s2mPipe_payload_strb;
      ram_io_axi_arbiter_io_output_w_s2mPipe_rData_last <= ram_io_axi_arbiter_io_output_w_s2mPipe_payload_last;
    end
    if(apbBridge_io_axi_arbiter_io_output_arw_ready) begin
      apbBridge_io_axi_arbiter_io_output_arw_rData_addr <= apbBridge_io_axi_arbiter_io_output_arw_payload_addr;
      apbBridge_io_axi_arbiter_io_output_arw_rData_id <= apbBridge_io_axi_arbiter_io_output_arw_payload_id;
      apbBridge_io_axi_arbiter_io_output_arw_rData_len <= apbBridge_io_axi_arbiter_io_output_arw_payload_len;
      apbBridge_io_axi_arbiter_io_output_arw_rData_size <= apbBridge_io_axi_arbiter_io_output_arw_payload_size;
      apbBridge_io_axi_arbiter_io_output_arw_rData_burst <= apbBridge_io_axi_arbiter_io_output_arw_payload_burst;
      apbBridge_io_axi_arbiter_io_output_arw_rData_write <= apbBridge_io_axi_arbiter_io_output_arw_payload_write;
    end
    if(apbBridge_io_axi_arbiter_io_output_w_ready) begin
      apbBridge_io_axi_arbiter_io_output_w_rData_data <= apbBridge_io_axi_arbiter_io_output_w_payload_data;
      apbBridge_io_axi_arbiter_io_output_w_rData_strb <= apbBridge_io_axi_arbiter_io_output_w_payload_strb;
      apbBridge_io_axi_arbiter_io_output_w_rData_last <= apbBridge_io_axi_arbiter_io_output_w_payload_last;
    end
  end


endmodule

//Axi4SharedArbiter replaced by Axi4SharedArbiter

module Axi4SharedArbiter (
  input               io_readInputs_0_ar_valid,
  output              io_readInputs_0_ar_ready,
  input      [19:0]   io_readInputs_0_ar_payload_addr,
  input      [3:0]    io_readInputs_0_ar_payload_id,
  input      [7:0]    io_readInputs_0_ar_payload_len,
  input      [2:0]    io_readInputs_0_ar_payload_size,
  input      [1:0]    io_readInputs_0_ar_payload_burst,
  output              io_readInputs_0_r_valid,
  input               io_readInputs_0_r_ready,
  output     [31:0]   io_readInputs_0_r_payload_data,
  output     [3:0]    io_readInputs_0_r_payload_id,
  output     [1:0]    io_readInputs_0_r_payload_resp,
  output              io_readInputs_0_r_payload_last,
  input               io_writeInputs_0_aw_valid,
  output              io_writeInputs_0_aw_ready,
  input      [19:0]   io_writeInputs_0_aw_payload_addr,
  input      [3:0]    io_writeInputs_0_aw_payload_id,
  input      [7:0]    io_writeInputs_0_aw_payload_len,
  input      [2:0]    io_writeInputs_0_aw_payload_size,
  input      [1:0]    io_writeInputs_0_aw_payload_burst,
  input               io_writeInputs_0_w_valid,
  output              io_writeInputs_0_w_ready,
  input      [31:0]   io_writeInputs_0_w_payload_data,
  input      [3:0]    io_writeInputs_0_w_payload_strb,
  input               io_writeInputs_0_w_payload_last,
  output              io_writeInputs_0_b_valid,
  input               io_writeInputs_0_b_ready,
  output     [3:0]    io_writeInputs_0_b_payload_id,
  output     [1:0]    io_writeInputs_0_b_payload_resp,
  output              io_output_arw_valid,
  input               io_output_arw_ready,
  output     [19:0]   io_output_arw_payload_addr,
  output     [3:0]    io_output_arw_payload_id,
  output     [7:0]    io_output_arw_payload_len,
  output     [2:0]    io_output_arw_payload_size,
  output     [1:0]    io_output_arw_payload_burst,
  output              io_output_arw_payload_write,
  output              io_output_w_valid,
  input               io_output_w_ready,
  output     [31:0]   io_output_w_payload_data,
  output     [3:0]    io_output_w_payload_strb,
  output              io_output_w_payload_last,
  input               io_output_b_valid,
  output              io_output_b_ready,
  input      [3:0]    io_output_b_payload_id,
  input      [1:0]    io_output_b_payload_resp,
  input               io_output_r_valid,
  output              io_output_r_ready,
  input      [31:0]   io_output_r_payload_data,
  input      [3:0]    io_output_r_payload_id,
  input      [1:0]    io_output_r_payload_resp,
  input               io_output_r_payload_last,
  input               clk,
  input               reset
);
  reg                 cmdArbiter_io_output_fork_io_outputs_1_ready;
  wire                cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo_io_pop_ready;
  wire                cmdArbiter_io_inputs_0_ready;
  wire                cmdArbiter_io_inputs_1_ready;
  wire                cmdArbiter_io_output_valid;
  wire       [19:0]   cmdArbiter_io_output_payload_addr;
  wire       [3:0]    cmdArbiter_io_output_payload_id;
  wire       [7:0]    cmdArbiter_io_output_payload_len;
  wire       [2:0]    cmdArbiter_io_output_payload_size;
  wire       [1:0]    cmdArbiter_io_output_payload_burst;
  wire                cmdArbiter_io_output_payload_write;
  wire       [0:0]    cmdArbiter_io_chosen;
  wire       [1:0]    cmdArbiter_io_chosenOH;
  wire                cmdArbiter_io_output_fork_io_input_ready;
  wire                cmdArbiter_io_output_fork_io_outputs_0_valid;
  wire       [19:0]   cmdArbiter_io_output_fork_io_outputs_0_payload_addr;
  wire       [3:0]    cmdArbiter_io_output_fork_io_outputs_0_payload_id;
  wire       [7:0]    cmdArbiter_io_output_fork_io_outputs_0_payload_len;
  wire       [2:0]    cmdArbiter_io_output_fork_io_outputs_0_payload_size;
  wire       [1:0]    cmdArbiter_io_output_fork_io_outputs_0_payload_burst;
  wire                cmdArbiter_io_output_fork_io_outputs_0_payload_write;
  wire                cmdArbiter_io_output_fork_io_outputs_1_valid;
  wire       [19:0]   cmdArbiter_io_output_fork_io_outputs_1_payload_addr;
  wire       [3:0]    cmdArbiter_io_output_fork_io_outputs_1_payload_id;
  wire       [7:0]    cmdArbiter_io_output_fork_io_outputs_1_payload_len;
  wire       [2:0]    cmdArbiter_io_output_fork_io_outputs_1_payload_size;
  wire       [1:0]    cmdArbiter_io_output_fork_io_outputs_1_payload_burst;
  wire                cmdArbiter_io_output_fork_io_outputs_1_payload_write;
  wire                cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo_io_push_ready;
  wire                cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo_io_pop_valid;
  wire       [2:0]    cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo_io_occupancy;
  wire                inputsCmd_0_valid;
  wire                inputsCmd_0_ready;
  wire       [19:0]   inputsCmd_0_payload_addr;
  wire       [3:0]    inputsCmd_0_payload_id;
  wire       [7:0]    inputsCmd_0_payload_len;
  wire       [2:0]    inputsCmd_0_payload_size;
  wire       [1:0]    inputsCmd_0_payload_burst;
  wire                inputsCmd_0_payload_write;
  wire                inputsCmd_1_valid;
  wire                inputsCmd_1_ready;
  wire       [19:0]   inputsCmd_1_payload_addr;
  wire       [3:0]    inputsCmd_1_payload_id;
  wire       [7:0]    inputsCmd_1_payload_len;
  wire       [2:0]    inputsCmd_1_payload_size;
  wire       [1:0]    inputsCmd_1_payload_burst;
  wire                inputsCmd_1_payload_write;
  wire                when_Stream_l408;
  reg                 cmdArbiter_io_output_fork_io_outputs_1_thrown_valid;
  wire                cmdArbiter_io_output_fork_io_outputs_1_thrown_ready;
  wire       [19:0]   cmdArbiter_io_output_fork_io_outputs_1_thrown_payload_addr;
  wire       [3:0]    cmdArbiter_io_output_fork_io_outputs_1_thrown_payload_id;
  wire       [7:0]    cmdArbiter_io_output_fork_io_outputs_1_thrown_payload_len;
  wire       [2:0]    cmdArbiter_io_output_fork_io_outputs_1_thrown_payload_size;
  wire       [1:0]    cmdArbiter_io_output_fork_io_outputs_1_thrown_payload_burst;
  wire                cmdArbiter_io_output_fork_io_outputs_1_thrown_payload_write;
  wire                cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_valid;
  wire                cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_ready;
  wire                writeLogic_routeDataInput_valid;
  wire                writeLogic_routeDataInput_ready;
  wire       [31:0]   writeLogic_routeDataInput_payload_data;
  wire       [3:0]    writeLogic_routeDataInput_payload_strb;
  wire                writeLogic_routeDataInput_payload_last;
  wire                io_output_w_fire;
  wire                writeLogic_writeRspSels_0;
  wire                readRspSels_0;

  StreamArbiter cmdArbiter (
    .io_inputs_0_valid            (inputsCmd_0_valid                         ), //i
    .io_inputs_0_ready            (cmdArbiter_io_inputs_0_ready              ), //o
    .io_inputs_0_payload_addr     (inputsCmd_0_payload_addr                  ), //i
    .io_inputs_0_payload_id       (inputsCmd_0_payload_id                    ), //i
    .io_inputs_0_payload_len      (inputsCmd_0_payload_len                   ), //i
    .io_inputs_0_payload_size     (inputsCmd_0_payload_size                  ), //i
    .io_inputs_0_payload_burst    (inputsCmd_0_payload_burst                 ), //i
    .io_inputs_0_payload_write    (inputsCmd_0_payload_write                 ), //i
    .io_inputs_1_valid            (inputsCmd_1_valid                         ), //i
    .io_inputs_1_ready            (cmdArbiter_io_inputs_1_ready              ), //o
    .io_inputs_1_payload_addr     (inputsCmd_1_payload_addr                  ), //i
    .io_inputs_1_payload_id       (inputsCmd_1_payload_id                    ), //i
    .io_inputs_1_payload_len      (inputsCmd_1_payload_len                   ), //i
    .io_inputs_1_payload_size     (inputsCmd_1_payload_size                  ), //i
    .io_inputs_1_payload_burst    (inputsCmd_1_payload_burst                 ), //i
    .io_inputs_1_payload_write    (inputsCmd_1_payload_write                 ), //i
    .io_output_valid              (cmdArbiter_io_output_valid                ), //o
    .io_output_ready              (cmdArbiter_io_output_fork_io_input_ready  ), //i
    .io_output_payload_addr       (cmdArbiter_io_output_payload_addr         ), //o
    .io_output_payload_id         (cmdArbiter_io_output_payload_id           ), //o
    .io_output_payload_len        (cmdArbiter_io_output_payload_len          ), //o
    .io_output_payload_size       (cmdArbiter_io_output_payload_size         ), //o
    .io_output_payload_burst      (cmdArbiter_io_output_payload_burst        ), //o
    .io_output_payload_write      (cmdArbiter_io_output_payload_write        ), //o
    .io_chosen                    (cmdArbiter_io_chosen                      ), //o
    .io_chosenOH                  (cmdArbiter_io_chosenOH                    ), //o
    .clk                          (clk                                       ), //i
    .reset                        (reset                                     )  //i
  );
  StreamFork cmdArbiter_io_output_fork (
    .io_input_valid                (cmdArbiter_io_output_valid                            ), //i
    .io_input_ready                (cmdArbiter_io_output_fork_io_input_ready              ), //o
    .io_input_payload_addr         (cmdArbiter_io_output_payload_addr                     ), //i
    .io_input_payload_id           (cmdArbiter_io_output_payload_id                       ), //i
    .io_input_payload_len          (cmdArbiter_io_output_payload_len                      ), //i
    .io_input_payload_size         (cmdArbiter_io_output_payload_size                     ), //i
    .io_input_payload_burst        (cmdArbiter_io_output_payload_burst                    ), //i
    .io_input_payload_write        (cmdArbiter_io_output_payload_write                    ), //i
    .io_outputs_0_valid            (cmdArbiter_io_output_fork_io_outputs_0_valid          ), //o
    .io_outputs_0_ready            (io_output_arw_ready                                   ), //i
    .io_outputs_0_payload_addr     (cmdArbiter_io_output_fork_io_outputs_0_payload_addr   ), //o
    .io_outputs_0_payload_id       (cmdArbiter_io_output_fork_io_outputs_0_payload_id     ), //o
    .io_outputs_0_payload_len      (cmdArbiter_io_output_fork_io_outputs_0_payload_len    ), //o
    .io_outputs_0_payload_size     (cmdArbiter_io_output_fork_io_outputs_0_payload_size   ), //o
    .io_outputs_0_payload_burst    (cmdArbiter_io_output_fork_io_outputs_0_payload_burst  ), //o
    .io_outputs_0_payload_write    (cmdArbiter_io_output_fork_io_outputs_0_payload_write  ), //o
    .io_outputs_1_valid            (cmdArbiter_io_output_fork_io_outputs_1_valid          ), //o
    .io_outputs_1_ready            (cmdArbiter_io_output_fork_io_outputs_1_ready          ), //i
    .io_outputs_1_payload_addr     (cmdArbiter_io_output_fork_io_outputs_1_payload_addr   ), //o
    .io_outputs_1_payload_id       (cmdArbiter_io_output_fork_io_outputs_1_payload_id     ), //o
    .io_outputs_1_payload_len      (cmdArbiter_io_output_fork_io_outputs_1_payload_len    ), //o
    .io_outputs_1_payload_size     (cmdArbiter_io_output_fork_io_outputs_1_payload_size   ), //o
    .io_outputs_1_payload_burst    (cmdArbiter_io_output_fork_io_outputs_1_payload_burst  ), //o
    .io_outputs_1_payload_write    (cmdArbiter_io_output_fork_io_outputs_1_payload_write  ), //o
    .clk                           (clk                                                   ), //i
    .reset                         (reset                                                 )  //i
  );
  StreamFifoLowLatency cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo (
    .io_push_valid    (cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_valid               ), //i
    .io_push_ready    (cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo_io_push_ready  ), //o
    .io_pop_valid     (cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo_io_pop_valid   ), //o
    .io_pop_ready     (cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo_io_pop_ready   ), //i
    .io_flush         (1'b0                                                                         ), //i
    .io_occupancy     (cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo_io_occupancy   ), //o
    .clk              (clk                                                                          ), //i
    .reset            (reset                                                                        )  //i
  );
  assign inputsCmd_0_valid = io_readInputs_0_ar_valid;
  assign io_readInputs_0_ar_ready = inputsCmd_0_ready;
  assign inputsCmd_0_payload_addr = io_readInputs_0_ar_payload_addr;
  assign inputsCmd_0_payload_id = io_readInputs_0_ar_payload_id;
  assign inputsCmd_0_payload_len = io_readInputs_0_ar_payload_len;
  assign inputsCmd_0_payload_size = io_readInputs_0_ar_payload_size;
  assign inputsCmd_0_payload_burst = io_readInputs_0_ar_payload_burst;
  assign inputsCmd_0_payload_write = 1'b0;
  assign inputsCmd_1_valid = io_writeInputs_0_aw_valid;
  assign io_writeInputs_0_aw_ready = inputsCmd_1_ready;
  assign inputsCmd_1_payload_addr = io_writeInputs_0_aw_payload_addr;
  assign inputsCmd_1_payload_id = io_writeInputs_0_aw_payload_id;
  assign inputsCmd_1_payload_len = io_writeInputs_0_aw_payload_len;
  assign inputsCmd_1_payload_size = io_writeInputs_0_aw_payload_size;
  assign inputsCmd_1_payload_burst = io_writeInputs_0_aw_payload_burst;
  assign inputsCmd_1_payload_write = 1'b1;
  assign inputsCmd_0_ready = cmdArbiter_io_inputs_0_ready;
  assign inputsCmd_1_ready = cmdArbiter_io_inputs_1_ready;
  assign io_output_arw_valid = cmdArbiter_io_output_fork_io_outputs_0_valid;
  assign io_output_arw_payload_addr = cmdArbiter_io_output_fork_io_outputs_0_payload_addr;
  assign io_output_arw_payload_len = cmdArbiter_io_output_fork_io_outputs_0_payload_len;
  assign io_output_arw_payload_size = cmdArbiter_io_output_fork_io_outputs_0_payload_size;
  assign io_output_arw_payload_burst = cmdArbiter_io_output_fork_io_outputs_0_payload_burst;
  assign io_output_arw_payload_write = cmdArbiter_io_output_fork_io_outputs_0_payload_write;
  assign io_output_arw_payload_id = (cmdArbiter_io_output_fork_io_outputs_0_payload_write ? cmdArbiter_io_output_fork_io_outputs_0_payload_id : cmdArbiter_io_output_fork_io_outputs_0_payload_id);
  assign when_Stream_l408 = (! cmdArbiter_io_output_fork_io_outputs_1_payload_write);
  always @(*) begin
    cmdArbiter_io_output_fork_io_outputs_1_thrown_valid = cmdArbiter_io_output_fork_io_outputs_1_valid;
    if(when_Stream_l408) begin
      cmdArbiter_io_output_fork_io_outputs_1_thrown_valid = 1'b0;
    end
  end

  always @(*) begin
    cmdArbiter_io_output_fork_io_outputs_1_ready = cmdArbiter_io_output_fork_io_outputs_1_thrown_ready;
    if(when_Stream_l408) begin
      cmdArbiter_io_output_fork_io_outputs_1_ready = 1'b1;
    end
  end

  assign cmdArbiter_io_output_fork_io_outputs_1_thrown_payload_addr = cmdArbiter_io_output_fork_io_outputs_1_payload_addr;
  assign cmdArbiter_io_output_fork_io_outputs_1_thrown_payload_id = cmdArbiter_io_output_fork_io_outputs_1_payload_id;
  assign cmdArbiter_io_output_fork_io_outputs_1_thrown_payload_len = cmdArbiter_io_output_fork_io_outputs_1_payload_len;
  assign cmdArbiter_io_output_fork_io_outputs_1_thrown_payload_size = cmdArbiter_io_output_fork_io_outputs_1_payload_size;
  assign cmdArbiter_io_output_fork_io_outputs_1_thrown_payload_burst = cmdArbiter_io_output_fork_io_outputs_1_payload_burst;
  assign cmdArbiter_io_output_fork_io_outputs_1_thrown_payload_write = cmdArbiter_io_output_fork_io_outputs_1_payload_write;
  assign cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_valid = cmdArbiter_io_output_fork_io_outputs_1_thrown_valid;
  assign cmdArbiter_io_output_fork_io_outputs_1_thrown_ready = cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_ready;
  assign cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_ready = cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo_io_push_ready;
  assign writeLogic_routeDataInput_valid = io_writeInputs_0_w_valid;
  assign writeLogic_routeDataInput_ready = io_writeInputs_0_w_ready;
  assign writeLogic_routeDataInput_payload_data = io_writeInputs_0_w_payload_data;
  assign writeLogic_routeDataInput_payload_strb = io_writeInputs_0_w_payload_strb;
  assign writeLogic_routeDataInput_payload_last = io_writeInputs_0_w_payload_last;
  assign io_output_w_valid = (cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo_io_pop_valid && writeLogic_routeDataInput_valid);
  assign io_output_w_payload_data = writeLogic_routeDataInput_payload_data;
  assign io_output_w_payload_strb = writeLogic_routeDataInput_payload_strb;
  assign io_output_w_payload_last = writeLogic_routeDataInput_payload_last;
  assign io_writeInputs_0_w_ready = ((cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo_io_pop_valid && io_output_w_ready) && 1'b1);
  assign io_output_w_fire = (io_output_w_valid && io_output_w_ready);
  assign cmdArbiter_io_output_fork_io_outputs_1_thrown_translated_fifo_io_pop_ready = (io_output_w_fire && io_output_w_payload_last);
  assign writeLogic_writeRspSels_0 = 1'b1;
  assign io_writeInputs_0_b_valid = (io_output_b_valid && writeLogic_writeRspSels_0);
  assign io_writeInputs_0_b_payload_resp = io_output_b_payload_resp;
  assign io_writeInputs_0_b_payload_id = io_output_b_payload_id;
  assign io_output_b_ready = io_writeInputs_0_b_ready;
  assign readRspSels_0 = 1'b1;
  assign io_readInputs_0_r_valid = (io_output_r_valid && readRspSels_0);
  assign io_readInputs_0_r_payload_data = io_output_r_payload_data;
  assign io_readInputs_0_r_payload_resp = io_output_r_payload_resp;
  assign io_readInputs_0_r_payload_last = io_output_r_payload_last;
  assign io_readInputs_0_r_payload_id = io_output_r_payload_id;
  assign io_output_r_ready = io_readInputs_0_r_ready;

endmodule

module Axi4WriteOnlyDecoder (
  input               io_input_aw_valid,
  output              io_input_aw_ready,
  input      [19:0]   io_input_aw_payload_addr,
  input      [3:0]    io_input_aw_payload_id,
  input      [7:0]    io_input_aw_payload_len,
  input      [2:0]    io_input_aw_payload_size,
  input      [1:0]    io_input_aw_payload_burst,
  input               io_input_w_valid,
  output              io_input_w_ready,
  input      [31:0]   io_input_w_payload_data,
  input      [3:0]    io_input_w_payload_strb,
  input               io_input_w_payload_last,
  output              io_input_b_valid,
  input               io_input_b_ready,
  output reg [3:0]    io_input_b_payload_id,
  output reg [1:0]    io_input_b_payload_resp,
  output              io_outputs_0_aw_valid,
  input               io_outputs_0_aw_ready,
  output     [19:0]   io_outputs_0_aw_payload_addr,
  output     [3:0]    io_outputs_0_aw_payload_id,
  output     [7:0]    io_outputs_0_aw_payload_len,
  output     [2:0]    io_outputs_0_aw_payload_size,
  output     [1:0]    io_outputs_0_aw_payload_burst,
  output              io_outputs_0_w_valid,
  input               io_outputs_0_w_ready,
  output     [31:0]   io_outputs_0_w_payload_data,
  output     [3:0]    io_outputs_0_w_payload_strb,
  output              io_outputs_0_w_payload_last,
  input               io_outputs_0_b_valid,
  output              io_outputs_0_b_ready,
  input      [3:0]    io_outputs_0_b_payload_id,
  input      [1:0]    io_outputs_0_b_payload_resp,
  output              io_outputs_1_aw_valid,
  input               io_outputs_1_aw_ready,
  output     [19:0]   io_outputs_1_aw_payload_addr,
  output     [3:0]    io_outputs_1_aw_payload_id,
  output     [7:0]    io_outputs_1_aw_payload_len,
  output     [2:0]    io_outputs_1_aw_payload_size,
  output     [1:0]    io_outputs_1_aw_payload_burst,
  output              io_outputs_1_w_valid,
  input               io_outputs_1_w_ready,
  output     [31:0]   io_outputs_1_w_payload_data,
  output     [3:0]    io_outputs_1_w_payload_strb,
  output              io_outputs_1_w_payload_last,
  input               io_outputs_1_b_valid,
  output              io_outputs_1_b_ready,
  input      [3:0]    io_outputs_1_b_payload_id,
  input      [1:0]    io_outputs_1_b_payload_resp,
  input               clk,
  input               reset
);
  wire                errorSlave_io_axi_aw_valid;
  wire                errorSlave_io_axi_w_valid;
  wire                errorSlave_io_axi_aw_ready;
  wire                errorSlave_io_axi_w_ready;
  wire                errorSlave_io_axi_b_valid;
  wire       [3:0]    errorSlave_io_axi_b_payload_id;
  wire       [1:0]    errorSlave_io_axi_b_payload_resp;
  wire                cmdAllowedStart;
  wire                io_input_aw_fire;
  wire                io_input_b_fire;
  reg                 pendingCmdCounter_incrementIt;
  reg                 pendingCmdCounter_decrementIt;
  wire       [2:0]    pendingCmdCounter_valueNext;
  reg        [2:0]    pendingCmdCounter_value;
  wire                pendingCmdCounter_willOverflowIfInc;
  wire                pendingCmdCounter_willOverflow;
  reg        [2:0]    pendingCmdCounter_finalIncrement;
  wire                when_Utils_l494;
  wire                when_Utils_l496;
  wire                io_input_w_fire;
  wire                when_Utils_l469;
  reg                 pendingDataCounter_incrementIt;
  reg                 pendingDataCounter_decrementIt;
  wire       [2:0]    pendingDataCounter_valueNext;
  reg        [2:0]    pendingDataCounter_value;
  wire                pendingDataCounter_willOverflowIfInc;
  wire                pendingDataCounter_willOverflow;
  reg        [2:0]    pendingDataCounter_finalIncrement;
  wire                when_Utils_l494_1;
  wire                when_Utils_l496_1;
  wire       [1:0]    decodedCmdSels;
  wire                decodedCmdError;
  reg        [1:0]    pendingSels;
  reg                 pendingError;
  wire                allowCmd;
  wire                allowData;
  reg                 _zz_cmdAllowedStart;
  wire                _zz_io_input_b_payload_id;
  wire                _zz_io_outputs_1_w_valid;
  wire       [0:0]    writeRspIndex;

  Axi4WriteOnlyErrorSlave errorSlave (
    .io_axi_aw_valid            (errorSlave_io_axi_aw_valid        ), //i
    .io_axi_aw_ready            (errorSlave_io_axi_aw_ready        ), //o
    .io_axi_aw_payload_addr     (io_input_aw_payload_addr          ), //i
    .io_axi_aw_payload_id       (io_input_aw_payload_id            ), //i
    .io_axi_aw_payload_len      (io_input_aw_payload_len           ), //i
    .io_axi_aw_payload_size     (io_input_aw_payload_size          ), //i
    .io_axi_aw_payload_burst    (io_input_aw_payload_burst         ), //i
    .io_axi_w_valid             (errorSlave_io_axi_w_valid         ), //i
    .io_axi_w_ready             (errorSlave_io_axi_w_ready         ), //o
    .io_axi_w_payload_data      (io_input_w_payload_data           ), //i
    .io_axi_w_payload_strb      (io_input_w_payload_strb           ), //i
    .io_axi_w_payload_last      (io_input_w_payload_last           ), //i
    .io_axi_b_valid             (errorSlave_io_axi_b_valid         ), //o
    .io_axi_b_ready             (io_input_b_ready                  ), //i
    .io_axi_b_payload_id        (errorSlave_io_axi_b_payload_id    ), //o
    .io_axi_b_payload_resp      (errorSlave_io_axi_b_payload_resp  ), //o
    .clk                        (clk                               ), //i
    .reset                      (reset                             )  //i
  );
  assign io_input_aw_fire = (io_input_aw_valid && io_input_aw_ready);
  assign io_input_b_fire = (io_input_b_valid && io_input_b_ready);
  always @(*) begin
    pendingCmdCounter_incrementIt = 1'b0;
    if(io_input_aw_fire) begin
      pendingCmdCounter_incrementIt = 1'b1;
    end
  end

  always @(*) begin
    pendingCmdCounter_decrementIt = 1'b0;
    if(io_input_b_fire) begin
      pendingCmdCounter_decrementIt = 1'b1;
    end
  end

  assign pendingCmdCounter_willOverflowIfInc = ((pendingCmdCounter_value == 3'b111) && (! pendingCmdCounter_decrementIt));
  assign pendingCmdCounter_willOverflow = (pendingCmdCounter_willOverflowIfInc && pendingCmdCounter_incrementIt);
  assign when_Utils_l494 = (pendingCmdCounter_incrementIt && (! pendingCmdCounter_decrementIt));
  always @(*) begin
    if(when_Utils_l494) begin
      pendingCmdCounter_finalIncrement = 3'b001;
    end else begin
      if(when_Utils_l496) begin
        pendingCmdCounter_finalIncrement = 3'b111;
      end else begin
        pendingCmdCounter_finalIncrement = 3'b000;
      end
    end
  end

  assign when_Utils_l496 = ((! pendingCmdCounter_incrementIt) && pendingCmdCounter_decrementIt);
  assign pendingCmdCounter_valueNext = (pendingCmdCounter_value + pendingCmdCounter_finalIncrement);
  assign io_input_w_fire = (io_input_w_valid && io_input_w_ready);
  assign when_Utils_l469 = (io_input_w_fire && io_input_w_payload_last);
  always @(*) begin
    pendingDataCounter_incrementIt = 1'b0;
    if(cmdAllowedStart) begin
      pendingDataCounter_incrementIt = 1'b1;
    end
  end

  always @(*) begin
    pendingDataCounter_decrementIt = 1'b0;
    if(when_Utils_l469) begin
      pendingDataCounter_decrementIt = 1'b1;
    end
  end

  assign pendingDataCounter_willOverflowIfInc = ((pendingDataCounter_value == 3'b111) && (! pendingDataCounter_decrementIt));
  assign pendingDataCounter_willOverflow = (pendingDataCounter_willOverflowIfInc && pendingDataCounter_incrementIt);
  assign when_Utils_l494_1 = (pendingDataCounter_incrementIt && (! pendingDataCounter_decrementIt));
  always @(*) begin
    if(when_Utils_l494_1) begin
      pendingDataCounter_finalIncrement = 3'b001;
    end else begin
      if(when_Utils_l496_1) begin
        pendingDataCounter_finalIncrement = 3'b111;
      end else begin
        pendingDataCounter_finalIncrement = 3'b000;
      end
    end
  end

  assign when_Utils_l496_1 = ((! pendingDataCounter_incrementIt) && pendingDataCounter_decrementIt);
  assign pendingDataCounter_valueNext = (pendingDataCounter_value + pendingDataCounter_finalIncrement);
  assign decodedCmdSels = {(((io_input_aw_payload_addr & (~ 20'h00fff)) == 20'h04000) && io_input_aw_valid),(((io_input_aw_payload_addr & (~ 20'h00fff)) == 20'h02000) && io_input_aw_valid)};
  assign decodedCmdError = (decodedCmdSels == 2'b00);
  assign allowCmd = ((pendingCmdCounter_value == 3'b000) || ((pendingCmdCounter_value != 3'b111) && (pendingSels == decodedCmdSels)));
  assign allowData = (pendingDataCounter_value != 3'b000);
  assign cmdAllowedStart = ((io_input_aw_valid && allowCmd) && _zz_cmdAllowedStart);
  assign io_input_aw_ready = ((((decodedCmdSels & {io_outputs_1_aw_ready,io_outputs_0_aw_ready}) != 2'b00) || (decodedCmdError && errorSlave_io_axi_aw_ready)) && allowCmd);
  assign errorSlave_io_axi_aw_valid = ((io_input_aw_valid && decodedCmdError) && allowCmd);
  assign io_outputs_0_aw_valid = ((io_input_aw_valid && decodedCmdSels[0]) && allowCmd);
  assign io_outputs_0_aw_payload_addr = io_input_aw_payload_addr;
  assign io_outputs_0_aw_payload_id = io_input_aw_payload_id;
  assign io_outputs_0_aw_payload_len = io_input_aw_payload_len;
  assign io_outputs_0_aw_payload_size = io_input_aw_payload_size;
  assign io_outputs_0_aw_payload_burst = io_input_aw_payload_burst;
  assign io_outputs_1_aw_valid = ((io_input_aw_valid && decodedCmdSels[1]) && allowCmd);
  assign io_outputs_1_aw_payload_addr = io_input_aw_payload_addr;
  assign io_outputs_1_aw_payload_id = io_input_aw_payload_id;
  assign io_outputs_1_aw_payload_len = io_input_aw_payload_len;
  assign io_outputs_1_aw_payload_size = io_input_aw_payload_size;
  assign io_outputs_1_aw_payload_burst = io_input_aw_payload_burst;
  assign io_input_w_ready = ((((pendingSels & {io_outputs_1_w_ready,io_outputs_0_w_ready}) != 2'b00) || (pendingError && errorSlave_io_axi_w_ready)) && allowData);
  assign errorSlave_io_axi_w_valid = ((io_input_w_valid && pendingError) && allowData);
  assign _zz_io_input_b_payload_id = pendingSels[0];
  assign _zz_io_outputs_1_w_valid = pendingSels[1];
  assign io_outputs_0_w_valid = ((io_input_w_valid && _zz_io_input_b_payload_id) && allowData);
  assign io_outputs_0_w_payload_data = io_input_w_payload_data;
  assign io_outputs_0_w_payload_strb = io_input_w_payload_strb;
  assign io_outputs_0_w_payload_last = io_input_w_payload_last;
  assign io_outputs_1_w_valid = ((io_input_w_valid && _zz_io_outputs_1_w_valid) && allowData);
  assign io_outputs_1_w_payload_data = io_input_w_payload_data;
  assign io_outputs_1_w_payload_strb = io_input_w_payload_strb;
  assign io_outputs_1_w_payload_last = io_input_w_payload_last;
  assign writeRspIndex = _zz_io_outputs_1_w_valid;
  assign io_input_b_valid = (({io_outputs_1_b_valid,io_outputs_0_b_valid} != 2'b00) || errorSlave_io_axi_b_valid);
  always @(*) begin
    io_input_b_payload_id = (_zz_io_input_b_payload_id ? io_outputs_0_b_payload_id : io_outputs_1_b_payload_id);
    if(pendingError) begin
      io_input_b_payload_id = errorSlave_io_axi_b_payload_id;
    end
  end

  always @(*) begin
    io_input_b_payload_resp = (_zz_io_input_b_payload_id ? io_outputs_0_b_payload_resp : io_outputs_1_b_payload_resp);
    if(pendingError) begin
      io_input_b_payload_resp = errorSlave_io_axi_b_payload_resp;
    end
  end

  assign io_outputs_0_b_ready = io_input_b_ready;
  assign io_outputs_1_b_ready = io_input_b_ready;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      pendingCmdCounter_value <= 3'b000;
      pendingDataCounter_value <= 3'b000;
      pendingSels <= 2'b00;
      pendingError <= 1'b0;
      _zz_cmdAllowedStart <= 1'b1;
    end else begin
      pendingCmdCounter_value <= pendingCmdCounter_valueNext;
      pendingDataCounter_value <= pendingDataCounter_valueNext;
      if(cmdAllowedStart) begin
        pendingSels <= decodedCmdSels;
      end
      if(cmdAllowedStart) begin
        pendingError <= decodedCmdError;
      end
      if(cmdAllowedStart) begin
        _zz_cmdAllowedStart <= 1'b0;
      end
      if(io_input_aw_ready) begin
        _zz_cmdAllowedStart <= 1'b1;
      end
    end
  end


endmodule

module Axi4ReadOnlyDecoder (
  input               io_input_ar_valid,
  output              io_input_ar_ready,
  input      [19:0]   io_input_ar_payload_addr,
  input      [3:0]    io_input_ar_payload_id,
  input      [7:0]    io_input_ar_payload_len,
  input      [2:0]    io_input_ar_payload_size,
  input      [1:0]    io_input_ar_payload_burst,
  output reg          io_input_r_valid,
  input               io_input_r_ready,
  output     [31:0]   io_input_r_payload_data,
  output reg [3:0]    io_input_r_payload_id,
  output reg [1:0]    io_input_r_payload_resp,
  output reg          io_input_r_payload_last,
  output              io_outputs_0_ar_valid,
  input               io_outputs_0_ar_ready,
  output     [19:0]   io_outputs_0_ar_payload_addr,
  output     [3:0]    io_outputs_0_ar_payload_id,
  output     [7:0]    io_outputs_0_ar_payload_len,
  output     [2:0]    io_outputs_0_ar_payload_size,
  output     [1:0]    io_outputs_0_ar_payload_burst,
  input               io_outputs_0_r_valid,
  output              io_outputs_0_r_ready,
  input      [31:0]   io_outputs_0_r_payload_data,
  input      [3:0]    io_outputs_0_r_payload_id,
  input      [1:0]    io_outputs_0_r_payload_resp,
  input               io_outputs_0_r_payload_last,
  output              io_outputs_1_ar_valid,
  input               io_outputs_1_ar_ready,
  output     [19:0]   io_outputs_1_ar_payload_addr,
  output     [3:0]    io_outputs_1_ar_payload_id,
  output     [7:0]    io_outputs_1_ar_payload_len,
  output     [2:0]    io_outputs_1_ar_payload_size,
  output     [1:0]    io_outputs_1_ar_payload_burst,
  input               io_outputs_1_r_valid,
  output              io_outputs_1_r_ready,
  input      [31:0]   io_outputs_1_r_payload_data,
  input      [3:0]    io_outputs_1_r_payload_id,
  input      [1:0]    io_outputs_1_r_payload_resp,
  input               io_outputs_1_r_payload_last,
  input               clk,
  input               reset
);
  wire                errorSlave_io_axi_ar_valid;
  wire                errorSlave_io_axi_ar_ready;
  wire                errorSlave_io_axi_r_valid;
  wire       [31:0]   errorSlave_io_axi_r_payload_data;
  wire       [3:0]    errorSlave_io_axi_r_payload_id;
  wire       [1:0]    errorSlave_io_axi_r_payload_resp;
  wire                errorSlave_io_axi_r_payload_last;
  wire                io_input_ar_fire;
  wire                io_input_r_fire;
  wire                when_Utils_l469;
  reg                 pendingCmdCounter_incrementIt;
  reg                 pendingCmdCounter_decrementIt;
  wire       [2:0]    pendingCmdCounter_valueNext;
  reg        [2:0]    pendingCmdCounter_value;
  wire                pendingCmdCounter_willOverflowIfInc;
  wire                pendingCmdCounter_willOverflow;
  reg        [2:0]    pendingCmdCounter_finalIncrement;
  wire                when_Utils_l494;
  wire                when_Utils_l496;
  wire       [1:0]    decodedCmdSels;
  wire                decodedCmdError;
  reg        [1:0]    pendingSels;
  reg                 pendingError;
  wire                allowCmd;
  wire                _zz_io_input_r_payload_data;
  wire                _zz_readRspIndex;
  wire       [0:0]    readRspIndex;

  Axi4ReadOnlyErrorSlave errorSlave (
    .io_axi_ar_valid            (errorSlave_io_axi_ar_valid        ), //i
    .io_axi_ar_ready            (errorSlave_io_axi_ar_ready        ), //o
    .io_axi_ar_payload_addr     (io_input_ar_payload_addr          ), //i
    .io_axi_ar_payload_id       (io_input_ar_payload_id            ), //i
    .io_axi_ar_payload_len      (io_input_ar_payload_len           ), //i
    .io_axi_ar_payload_size     (io_input_ar_payload_size          ), //i
    .io_axi_ar_payload_burst    (io_input_ar_payload_burst         ), //i
    .io_axi_r_valid             (errorSlave_io_axi_r_valid         ), //o
    .io_axi_r_ready             (io_input_r_ready                  ), //i
    .io_axi_r_payload_data      (errorSlave_io_axi_r_payload_data  ), //o
    .io_axi_r_payload_id        (errorSlave_io_axi_r_payload_id    ), //o
    .io_axi_r_payload_resp      (errorSlave_io_axi_r_payload_resp  ), //o
    .io_axi_r_payload_last      (errorSlave_io_axi_r_payload_last  ), //o
    .clk                        (clk                               ), //i
    .reset                      (reset                             )  //i
  );
  assign io_input_ar_fire = (io_input_ar_valid && io_input_ar_ready);
  assign io_input_r_fire = (io_input_r_valid && io_input_r_ready);
  assign when_Utils_l469 = (io_input_r_fire && io_input_r_payload_last);
  always @(*) begin
    pendingCmdCounter_incrementIt = 1'b0;
    if(io_input_ar_fire) begin
      pendingCmdCounter_incrementIt = 1'b1;
    end
  end

  always @(*) begin
    pendingCmdCounter_decrementIt = 1'b0;
    if(when_Utils_l469) begin
      pendingCmdCounter_decrementIt = 1'b1;
    end
  end

  assign pendingCmdCounter_willOverflowIfInc = ((pendingCmdCounter_value == 3'b111) && (! pendingCmdCounter_decrementIt));
  assign pendingCmdCounter_willOverflow = (pendingCmdCounter_willOverflowIfInc && pendingCmdCounter_incrementIt);
  assign when_Utils_l494 = (pendingCmdCounter_incrementIt && (! pendingCmdCounter_decrementIt));
  always @(*) begin
    if(when_Utils_l494) begin
      pendingCmdCounter_finalIncrement = 3'b001;
    end else begin
      if(when_Utils_l496) begin
        pendingCmdCounter_finalIncrement = 3'b111;
      end else begin
        pendingCmdCounter_finalIncrement = 3'b000;
      end
    end
  end

  assign when_Utils_l496 = ((! pendingCmdCounter_incrementIt) && pendingCmdCounter_decrementIt);
  assign pendingCmdCounter_valueNext = (pendingCmdCounter_value + pendingCmdCounter_finalIncrement);
  assign decodedCmdSels = {(((io_input_ar_payload_addr & (~ 20'h00fff)) == 20'h04000) && io_input_ar_valid),(((io_input_ar_payload_addr & (~ 20'h00fff)) == 20'h02000) && io_input_ar_valid)};
  assign decodedCmdError = (decodedCmdSels == 2'b00);
  assign allowCmd = ((pendingCmdCounter_value == 3'b000) || ((pendingCmdCounter_value != 3'b111) && (pendingSels == decodedCmdSels)));
  assign io_input_ar_ready = ((((decodedCmdSels & {io_outputs_1_ar_ready,io_outputs_0_ar_ready}) != 2'b00) || (decodedCmdError && errorSlave_io_axi_ar_ready)) && allowCmd);
  assign errorSlave_io_axi_ar_valid = ((io_input_ar_valid && decodedCmdError) && allowCmd);
  assign io_outputs_0_ar_valid = ((io_input_ar_valid && decodedCmdSels[0]) && allowCmd);
  assign io_outputs_0_ar_payload_addr = io_input_ar_payload_addr;
  assign io_outputs_0_ar_payload_id = io_input_ar_payload_id;
  assign io_outputs_0_ar_payload_len = io_input_ar_payload_len;
  assign io_outputs_0_ar_payload_size = io_input_ar_payload_size;
  assign io_outputs_0_ar_payload_burst = io_input_ar_payload_burst;
  assign io_outputs_1_ar_valid = ((io_input_ar_valid && decodedCmdSels[1]) && allowCmd);
  assign io_outputs_1_ar_payload_addr = io_input_ar_payload_addr;
  assign io_outputs_1_ar_payload_id = io_input_ar_payload_id;
  assign io_outputs_1_ar_payload_len = io_input_ar_payload_len;
  assign io_outputs_1_ar_payload_size = io_input_ar_payload_size;
  assign io_outputs_1_ar_payload_burst = io_input_ar_payload_burst;
  assign _zz_io_input_r_payload_data = pendingSels[0];
  assign _zz_readRspIndex = pendingSels[1];
  assign readRspIndex = _zz_readRspIndex;
  always @(*) begin
    io_input_r_valid = ({io_outputs_1_r_valid,io_outputs_0_r_valid} != 2'b00);
    if(errorSlave_io_axi_r_valid) begin
      io_input_r_valid = 1'b1;
    end
  end

  assign io_input_r_payload_data = (_zz_io_input_r_payload_data ? io_outputs_0_r_payload_data : io_outputs_1_r_payload_data);
  always @(*) begin
    io_input_r_payload_id = (_zz_io_input_r_payload_data ? io_outputs_0_r_payload_id : io_outputs_1_r_payload_id);
    if(pendingError) begin
      io_input_r_payload_id = errorSlave_io_axi_r_payload_id;
    end
  end

  always @(*) begin
    io_input_r_payload_resp = (_zz_io_input_r_payload_data ? io_outputs_0_r_payload_resp : io_outputs_1_r_payload_resp);
    if(pendingError) begin
      io_input_r_payload_resp = errorSlave_io_axi_r_payload_resp;
    end
  end

  always @(*) begin
    io_input_r_payload_last = (_zz_io_input_r_payload_data ? io_outputs_0_r_payload_last : io_outputs_1_r_payload_last);
    if(pendingError) begin
      io_input_r_payload_last = errorSlave_io_axi_r_payload_last;
    end
  end

  assign io_outputs_0_r_ready = io_input_r_ready;
  assign io_outputs_1_r_ready = io_input_r_ready;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      pendingCmdCounter_value <= 3'b000;
      pendingSels <= 2'b00;
      pendingError <= 1'b0;
    end else begin
      pendingCmdCounter_value <= pendingCmdCounter_valueNext;
      if(io_input_ar_ready) begin
        pendingSels <= decodedCmdSels;
      end
      if(io_input_ar_ready) begin
        pendingError <= decodedCmdError;
      end
    end
  end


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

module Axi4SharedToBram (
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
  output reg          io_bram_en,
  output     [3:0]    io_bram_we,
  output     [7:0]    io_bram_addr,
  output     [31:0]   io_bram_wrdata,
  input      [31:0]   io_bram_rddata,
  input               clk,
  input               reset
);
  wire       [1:0]    _zz_Axi4Incr_alignMask;
  wire       [11:0]   _zz_Axi4Incr_base;
  wire       [11:0]   _zz_Axi4Incr_base_1;
  wire       [11:0]   _zz_Axi4Incr_baseIncr;
  wire       [2:0]    _zz_Axi4Incr_wrapCase_1;
  wire       [2:0]    _zz_Axi4Incr_wrapCase_2;
  reg        [11:0]   _zz_Axi4Incr_result;
  wire       [10:0]   _zz_Axi4Incr_result_1;
  wire       [0:0]    _zz_Axi4Incr_result_2;
  wire       [9:0]    _zz_Axi4Incr_result_3;
  wire       [1:0]    _zz_Axi4Incr_result_4;
  wire       [8:0]    _zz_Axi4Incr_result_5;
  wire       [2:0]    _zz_Axi4Incr_result_6;
  wire       [7:0]    _zz_Axi4Incr_result_7;
  wire       [3:0]    _zz_Axi4Incr_result_8;
  wire       [6:0]    _zz_Axi4Incr_result_9;
  wire       [4:0]    _zz_Axi4Incr_result_10;
  wire       [5:0]    _zz_Axi4Incr_result_11;
  wire       [5:0]    _zz_Axi4Incr_result_12;
  reg        `Axi4ToBRAMPhase_binary_sequential_type phase;
  reg        [7:0]    lenBurst;
  reg        [19:0]   arw_addr;
  reg        [3:0]    arw_id;
  reg        [7:0]    arw_len;
  reg        [2:0]    arw_size;
  reg        [1:0]    arw_burst;
  reg                 arw_write;
  reg        [31:0]   readData;
  wire                when_Axi4SharedToBRAM_l121;
  wire       [1:0]    Axi4Incr_validSize;
  reg        [19:0]   Axi4Incr_result;
  wire       [7:0]    Axi4Incr_highCat;
  wire       [2:0]    Axi4Incr_sizeValue;
  wire       [11:0]   Axi4Incr_alignMask;
  wire       [11:0]   Axi4Incr_base;
  wire       [11:0]   Axi4Incr_baseIncr;
  reg        [1:0]    _zz_Axi4Incr_wrapCase;
  wire       [2:0]    Axi4Incr_wrapCase;
  wire                when_Axi4SharedToBRAM_l128;
  wire                when_Axi4SharedToBRAM_l132;
  wire                when_Axi4SharedToBRAM_l149;
  `ifndef SYNTHESIS
  reg [63:0] phase_string;
  `endif


  assign _zz_Axi4Incr_alignMask = {(2'b01 < Axi4Incr_validSize),(2'b00 < Axi4Incr_validSize)};
  assign _zz_Axi4Incr_base_1 = arw_addr[11 : 0];
  assign _zz_Axi4Incr_base = _zz_Axi4Incr_base_1;
  assign _zz_Axi4Incr_baseIncr = {9'd0, Axi4Incr_sizeValue};
  assign _zz_Axi4Incr_wrapCase_1 = {1'd0, Axi4Incr_validSize};
  assign _zz_Axi4Incr_wrapCase_2 = {1'd0, _zz_Axi4Incr_wrapCase};
  assign _zz_Axi4Incr_result_1 = Axi4Incr_base[11 : 1];
  assign _zz_Axi4Incr_result_2 = Axi4Incr_baseIncr[0 : 0];
  assign _zz_Axi4Incr_result_3 = Axi4Incr_base[11 : 2];
  assign _zz_Axi4Incr_result_4 = Axi4Incr_baseIncr[1 : 0];
  assign _zz_Axi4Incr_result_5 = Axi4Incr_base[11 : 3];
  assign _zz_Axi4Incr_result_6 = Axi4Incr_baseIncr[2 : 0];
  assign _zz_Axi4Incr_result_7 = Axi4Incr_base[11 : 4];
  assign _zz_Axi4Incr_result_8 = Axi4Incr_baseIncr[3 : 0];
  assign _zz_Axi4Incr_result_9 = Axi4Incr_base[11 : 5];
  assign _zz_Axi4Incr_result_10 = Axi4Incr_baseIncr[4 : 0];
  assign _zz_Axi4Incr_result_11 = Axi4Incr_base[11 : 6];
  assign _zz_Axi4Incr_result_12 = Axi4Incr_baseIncr[5 : 0];
  always @(*) begin
    case(Axi4Incr_wrapCase)
      3'b000 : begin
        _zz_Axi4Incr_result = {_zz_Axi4Incr_result_1,_zz_Axi4Incr_result_2};
      end
      3'b001 : begin
        _zz_Axi4Incr_result = {_zz_Axi4Incr_result_3,_zz_Axi4Incr_result_4};
      end
      3'b010 : begin
        _zz_Axi4Incr_result = {_zz_Axi4Incr_result_5,_zz_Axi4Incr_result_6};
      end
      3'b011 : begin
        _zz_Axi4Incr_result = {_zz_Axi4Incr_result_7,_zz_Axi4Incr_result_8};
      end
      3'b100 : begin
        _zz_Axi4Incr_result = {_zz_Axi4Incr_result_9,_zz_Axi4Incr_result_10};
      end
      default : begin
        _zz_Axi4Incr_result = {_zz_Axi4Incr_result_11,_zz_Axi4Incr_result_12};
      end
    endcase
  end

  `ifndef SYNTHESIS
  always @(*) begin
    case(phase)
      `Axi4ToBRAMPhase_binary_sequential_SETUP : phase_string = "SETUP   ";
      `Axi4ToBRAMPhase_binary_sequential_ACCESS_1 : phase_string = "ACCESS_1";
      `Axi4ToBRAMPhase_binary_sequential_READ : phase_string = "READ    ";
      `Axi4ToBRAMPhase_binary_sequential_RESPONSE : phase_string = "RESPONSE";
      default : phase_string = "????????";
    endcase
  end
  `endif

  always @(*) begin
    io_axi_arw_ready = 1'b0;
    case(phase)
      `Axi4ToBRAMPhase_binary_sequential_SETUP : begin
        if(io_axi_arw_valid) begin
          io_axi_arw_ready = 1'b1;
        end
      end
      `Axi4ToBRAMPhase_binary_sequential_ACCESS_1 : begin
      end
      `Axi4ToBRAMPhase_binary_sequential_READ : begin
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    io_axi_w_ready = 1'b0;
    case(phase)
      `Axi4ToBRAMPhase_binary_sequential_SETUP : begin
      end
      `Axi4ToBRAMPhase_binary_sequential_ACCESS_1 : begin
        io_axi_w_ready = (io_axi_w_valid && arw_write);
      end
      `Axi4ToBRAMPhase_binary_sequential_READ : begin
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    io_axi_b_valid = 1'b0;
    case(phase)
      `Axi4ToBRAMPhase_binary_sequential_SETUP : begin
      end
      `Axi4ToBRAMPhase_binary_sequential_ACCESS_1 : begin
      end
      `Axi4ToBRAMPhase_binary_sequential_READ : begin
      end
      default : begin
        if(arw_write) begin
          io_axi_b_valid = 1'b1;
        end
      end
    endcase
  end

  assign io_axi_b_payload_resp = 2'b00;
  assign io_axi_b_payload_id = arw_id;
  always @(*) begin
    io_axi_r_valid = 1'b0;
    case(phase)
      `Axi4ToBRAMPhase_binary_sequential_SETUP : begin
      end
      `Axi4ToBRAMPhase_binary_sequential_ACCESS_1 : begin
      end
      `Axi4ToBRAMPhase_binary_sequential_READ : begin
      end
      default : begin
        if(!arw_write) begin
          io_axi_r_valid = 1'b1;
        end
      end
    endcase
  end

  assign io_axi_r_payload_resp = 2'b00;
  assign io_axi_r_payload_id = arw_id;
  assign io_axi_r_payload_data = readData;
  assign io_axi_r_payload_last = ((lenBurst == 8'h0) && (! arw_write));
  always @(*) begin
    io_bram_en = 1'b0;
    case(phase)
      `Axi4ToBRAMPhase_binary_sequential_SETUP : begin
      end
      `Axi4ToBRAMPhase_binary_sequential_ACCESS_1 : begin
        if(when_Axi4SharedToBRAM_l121) begin
          io_bram_en = 1'b1;
        end
      end
      `Axi4ToBRAMPhase_binary_sequential_READ : begin
      end
      default : begin
      end
    endcase
  end

  assign io_bram_addr = arw_addr[7:0];
  assign io_bram_wrdata = io_axi_w_payload_data;
  assign io_bram_we = (arw_write ? 4'b1111 : 4'b0000);
  assign when_Axi4SharedToBRAM_l121 = (io_axi_w_valid || (! arw_write));
  assign Axi4Incr_validSize = arw_size[1 : 0];
  assign Axi4Incr_highCat = arw_addr[19 : 12];
  assign Axi4Incr_sizeValue = {(2'b10 == Axi4Incr_validSize),{(2'b01 == Axi4Incr_validSize),(2'b00 == Axi4Incr_validSize)}};
  assign Axi4Incr_alignMask = {10'd0, _zz_Axi4Incr_alignMask};
  assign Axi4Incr_base = (_zz_Axi4Incr_base & (~ Axi4Incr_alignMask));
  assign Axi4Incr_baseIncr = (Axi4Incr_base + _zz_Axi4Incr_baseIncr);
  always @(*) begin
    casez(arw_len)
      8'b????1??? : begin
        _zz_Axi4Incr_wrapCase = 2'b11;
      end
      8'b????01?? : begin
        _zz_Axi4Incr_wrapCase = 2'b10;
      end
      8'b????001? : begin
        _zz_Axi4Incr_wrapCase = 2'b01;
      end
      default : begin
        _zz_Axi4Incr_wrapCase = 2'b00;
      end
    endcase
  end

  assign Axi4Incr_wrapCase = (_zz_Axi4Incr_wrapCase_1 + _zz_Axi4Incr_wrapCase_2);
  always @(*) begin
    case(arw_burst)
      2'b00 : begin
        Axi4Incr_result = arw_addr;
      end
      2'b10 : begin
        Axi4Incr_result = {Axi4Incr_highCat,_zz_Axi4Incr_result};
      end
      default : begin
        Axi4Incr_result = {Axi4Incr_highCat,Axi4Incr_baseIncr};
      end
    endcase
  end

  assign when_Axi4SharedToBRAM_l128 = (arw_write && (io_axi_w_payload_last || (arw_len == 8'h0)));
  assign when_Axi4SharedToBRAM_l132 = (! arw_write);
  assign when_Axi4SharedToBRAM_l149 = (lenBurst == 8'h0);
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      phase <= `Axi4ToBRAMPhase_binary_sequential_SETUP;
    end else begin
      case(phase)
        `Axi4ToBRAMPhase_binary_sequential_SETUP : begin
          if(io_axi_arw_valid) begin
            phase <= `Axi4ToBRAMPhase_binary_sequential_ACCESS_1;
          end
        end
        `Axi4ToBRAMPhase_binary_sequential_ACCESS_1 : begin
          if(when_Axi4SharedToBRAM_l128) begin
            phase <= `Axi4ToBRAMPhase_binary_sequential_RESPONSE;
          end
          if(when_Axi4SharedToBRAM_l132) begin
            phase <= `Axi4ToBRAMPhase_binary_sequential_READ;
          end
        end
        `Axi4ToBRAMPhase_binary_sequential_READ : begin
          phase <= `Axi4ToBRAMPhase_binary_sequential_RESPONSE;
        end
        default : begin
          if(arw_write) begin
            if(io_axi_b_ready) begin
              phase <= `Axi4ToBRAMPhase_binary_sequential_SETUP;
            end
          end else begin
            if(io_axi_r_ready) begin
              if(when_Axi4SharedToBRAM_l149) begin
                phase <= `Axi4ToBRAMPhase_binary_sequential_SETUP;
              end else begin
                phase <= `Axi4ToBRAMPhase_binary_sequential_ACCESS_1;
              end
            end
          end
        end
      endcase
    end
  end

  always @(posedge clk) begin
    case(phase)
      `Axi4ToBRAMPhase_binary_sequential_SETUP : begin
        arw_addr <= io_axi_arw_payload_addr;
        arw_id <= io_axi_arw_payload_id;
        arw_len <= io_axi_arw_payload_len;
        arw_size <= io_axi_arw_payload_size;
        arw_burst <= io_axi_arw_payload_burst;
        arw_write <= io_axi_arw_payload_write;
        lenBurst <= io_axi_arw_payload_len;
      end
      `Axi4ToBRAMPhase_binary_sequential_ACCESS_1 : begin
        if(when_Axi4SharedToBRAM_l121) begin
          arw_addr <= Axi4Incr_result;
        end
      end
      `Axi4ToBRAMPhase_binary_sequential_READ : begin
        readData <= io_bram_rddata;
      end
      default : begin
        if(!arw_write) begin
          if(io_axi_r_ready) begin
            if(!when_Axi4SharedToBRAM_l149) begin
              lenBurst <= (lenBurst - 8'h01);
            end
          end
        end
      end
    endcase
  end


endmodule

//StreamFifoLowLatency replaced by StreamFifoLowLatency

//StreamFork replaced by StreamFork

//StreamArbiter replaced by StreamArbiter

module StreamFifoLowLatency (
  input               io_push_valid,
  output              io_push_ready,
  output reg          io_pop_valid,
  input               io_pop_ready,
  input               io_flush,
  output     [2:0]    io_occupancy,
  input               clk,
  input               reset
);
  wire       [1:0]    _zz_pushPtr_valueNext;
  wire       [0:0]    _zz_pushPtr_valueNext_1;
  wire       [1:0]    _zz_popPtr_valueNext;
  wire       [0:0]    _zz_popPtr_valueNext_1;
  reg                 pushPtr_willIncrement;
  reg                 pushPtr_willClear;
  reg        [1:0]    pushPtr_valueNext;
  reg        [1:0]    pushPtr_value;
  wire                pushPtr_willOverflowIfInc;
  wire                pushPtr_willOverflow;
  reg                 popPtr_willIncrement;
  reg                 popPtr_willClear;
  reg        [1:0]    popPtr_valueNext;
  reg        [1:0]    popPtr_value;
  wire                popPtr_willOverflowIfInc;
  wire                popPtr_willOverflow;
  wire                ptrMatch;
  reg                 risingOccupancy;
  wire                empty;
  wire                full;
  wire                pushing;
  wire                popping;
  wire                when_Stream_l995;
  wire                when_Stream_l1008;
  wire       [1:0]    ptrDif;

  assign _zz_pushPtr_valueNext_1 = pushPtr_willIncrement;
  assign _zz_pushPtr_valueNext = {1'd0, _zz_pushPtr_valueNext_1};
  assign _zz_popPtr_valueNext_1 = popPtr_willIncrement;
  assign _zz_popPtr_valueNext = {1'd0, _zz_popPtr_valueNext_1};
  always @(*) begin
    pushPtr_willIncrement = 1'b0;
    if(pushing) begin
      pushPtr_willIncrement = 1'b1;
    end
  end

  always @(*) begin
    pushPtr_willClear = 1'b0;
    if(io_flush) begin
      pushPtr_willClear = 1'b1;
    end
  end

  assign pushPtr_willOverflowIfInc = (pushPtr_value == 2'b11);
  assign pushPtr_willOverflow = (pushPtr_willOverflowIfInc && pushPtr_willIncrement);
  always @(*) begin
    pushPtr_valueNext = (pushPtr_value + _zz_pushPtr_valueNext);
    if(pushPtr_willClear) begin
      pushPtr_valueNext = 2'b00;
    end
  end

  always @(*) begin
    popPtr_willIncrement = 1'b0;
    if(popping) begin
      popPtr_willIncrement = 1'b1;
    end
  end

  always @(*) begin
    popPtr_willClear = 1'b0;
    if(io_flush) begin
      popPtr_willClear = 1'b1;
    end
  end

  assign popPtr_willOverflowIfInc = (popPtr_value == 2'b11);
  assign popPtr_willOverflow = (popPtr_willOverflowIfInc && popPtr_willIncrement);
  always @(*) begin
    popPtr_valueNext = (popPtr_value + _zz_popPtr_valueNext);
    if(popPtr_willClear) begin
      popPtr_valueNext = 2'b00;
    end
  end

  assign ptrMatch = (pushPtr_value == popPtr_value);
  assign empty = (ptrMatch && (! risingOccupancy));
  assign full = (ptrMatch && risingOccupancy);
  assign pushing = (io_push_valid && io_push_ready);
  assign popping = (io_pop_valid && io_pop_ready);
  assign io_push_ready = (! full);
  assign when_Stream_l995 = (! empty);
  always @(*) begin
    if(when_Stream_l995) begin
      io_pop_valid = 1'b1;
    end else begin
      io_pop_valid = io_push_valid;
    end
  end

  assign when_Stream_l1008 = (pushing != popping);
  assign ptrDif = (pushPtr_value - popPtr_value);
  assign io_occupancy = {(risingOccupancy && ptrMatch),ptrDif};
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      pushPtr_value <= 2'b00;
      popPtr_value <= 2'b00;
      risingOccupancy <= 1'b0;
    end else begin
      pushPtr_value <= pushPtr_valueNext;
      popPtr_value <= popPtr_valueNext;
      if(when_Stream_l1008) begin
        risingOccupancy <= pushing;
      end
      if(io_flush) begin
        risingOccupancy <= 1'b0;
      end
    end
  end


endmodule

module StreamFork (
  input               io_input_valid,
  output reg          io_input_ready,
  input      [19:0]   io_input_payload_addr,
  input      [3:0]    io_input_payload_id,
  input      [7:0]    io_input_payload_len,
  input      [2:0]    io_input_payload_size,
  input      [1:0]    io_input_payload_burst,
  input               io_input_payload_write,
  output              io_outputs_0_valid,
  input               io_outputs_0_ready,
  output     [19:0]   io_outputs_0_payload_addr,
  output     [3:0]    io_outputs_0_payload_id,
  output     [7:0]    io_outputs_0_payload_len,
  output     [2:0]    io_outputs_0_payload_size,
  output     [1:0]    io_outputs_0_payload_burst,
  output              io_outputs_0_payload_write,
  output              io_outputs_1_valid,
  input               io_outputs_1_ready,
  output     [19:0]   io_outputs_1_payload_addr,
  output     [3:0]    io_outputs_1_payload_id,
  output     [7:0]    io_outputs_1_payload_len,
  output     [2:0]    io_outputs_1_payload_size,
  output     [1:0]    io_outputs_1_payload_burst,
  output              io_outputs_1_payload_write,
  input               clk,
  input               reset
);
  reg                 _zz_io_outputs_0_valid;
  reg                 _zz_io_outputs_1_valid;
  wire                when_Stream_l806;
  wire                when_Stream_l806_1;
  wire                io_outputs_0_fire;
  wire                io_outputs_1_fire;

  always @(*) begin
    io_input_ready = 1'b1;
    if(when_Stream_l806) begin
      io_input_ready = 1'b0;
    end
    if(when_Stream_l806_1) begin
      io_input_ready = 1'b0;
    end
  end

  assign when_Stream_l806 = ((! io_outputs_0_ready) && _zz_io_outputs_0_valid);
  assign when_Stream_l806_1 = ((! io_outputs_1_ready) && _zz_io_outputs_1_valid);
  assign io_outputs_0_valid = (io_input_valid && _zz_io_outputs_0_valid);
  assign io_outputs_0_payload_addr = io_input_payload_addr;
  assign io_outputs_0_payload_id = io_input_payload_id;
  assign io_outputs_0_payload_len = io_input_payload_len;
  assign io_outputs_0_payload_size = io_input_payload_size;
  assign io_outputs_0_payload_burst = io_input_payload_burst;
  assign io_outputs_0_payload_write = io_input_payload_write;
  assign io_outputs_0_fire = (io_outputs_0_valid && io_outputs_0_ready);
  assign io_outputs_1_valid = (io_input_valid && _zz_io_outputs_1_valid);
  assign io_outputs_1_payload_addr = io_input_payload_addr;
  assign io_outputs_1_payload_id = io_input_payload_id;
  assign io_outputs_1_payload_len = io_input_payload_len;
  assign io_outputs_1_payload_size = io_input_payload_size;
  assign io_outputs_1_payload_burst = io_input_payload_burst;
  assign io_outputs_1_payload_write = io_input_payload_write;
  assign io_outputs_1_fire = (io_outputs_1_valid && io_outputs_1_ready);
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      _zz_io_outputs_0_valid <= 1'b1;
      _zz_io_outputs_1_valid <= 1'b1;
    end else begin
      if(io_outputs_0_fire) begin
        _zz_io_outputs_0_valid <= 1'b0;
      end
      if(io_outputs_1_fire) begin
        _zz_io_outputs_1_valid <= 1'b0;
      end
      if(io_input_ready) begin
        _zz_io_outputs_0_valid <= 1'b1;
        _zz_io_outputs_1_valid <= 1'b1;
      end
    end
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
  input               io_inputs_0_payload_write,
  input               io_inputs_1_valid,
  output              io_inputs_1_ready,
  input      [19:0]   io_inputs_1_payload_addr,
  input      [3:0]    io_inputs_1_payload_id,
  input      [7:0]    io_inputs_1_payload_len,
  input      [2:0]    io_inputs_1_payload_size,
  input      [1:0]    io_inputs_1_payload_burst,
  input               io_inputs_1_payload_write,
  output              io_output_valid,
  input               io_output_ready,
  output     [19:0]   io_output_payload_addr,
  output     [3:0]    io_output_payload_id,
  output     [7:0]    io_output_payload_len,
  output     [2:0]    io_output_payload_size,
  output     [1:0]    io_output_payload_burst,
  output              io_output_payload_write,
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
  assign io_output_payload_write = (maskRouted_0 ? io_inputs_0_payload_write : io_inputs_1_payload_write);
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

module Axi4WriteOnlyErrorSlave (
  input               io_axi_aw_valid,
  output              io_axi_aw_ready,
  input      [19:0]   io_axi_aw_payload_addr,
  input      [3:0]    io_axi_aw_payload_id,
  input      [7:0]    io_axi_aw_payload_len,
  input      [2:0]    io_axi_aw_payload_size,
  input      [1:0]    io_axi_aw_payload_burst,
  input               io_axi_w_valid,
  output              io_axi_w_ready,
  input      [31:0]   io_axi_w_payload_data,
  input      [3:0]    io_axi_w_payload_strb,
  input               io_axi_w_payload_last,
  output              io_axi_b_valid,
  input               io_axi_b_ready,
  output     [3:0]    io_axi_b_payload_id,
  output     [1:0]    io_axi_b_payload_resp,
  input               clk,
  input               reset
);
  reg                 consumeData;
  reg                 sendRsp;
  reg        [3:0]    id;
  wire                io_axi_aw_fire;
  wire                io_axi_w_fire;
  wire                when_Axi4ErrorSlave_l24;
  wire                io_axi_b_fire;

  assign io_axi_aw_ready = (! (consumeData || sendRsp));
  assign io_axi_aw_fire = (io_axi_aw_valid && io_axi_aw_ready);
  assign io_axi_w_ready = consumeData;
  assign io_axi_w_fire = (io_axi_w_valid && io_axi_w_ready);
  assign when_Axi4ErrorSlave_l24 = (io_axi_w_fire && io_axi_w_payload_last);
  assign io_axi_b_valid = sendRsp;
  assign io_axi_b_payload_resp = 2'b11;
  assign io_axi_b_payload_id = id;
  assign io_axi_b_fire = (io_axi_b_valid && io_axi_b_ready);
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      consumeData <= 1'b0;
      sendRsp <= 1'b0;
    end else begin
      if(io_axi_aw_fire) begin
        consumeData <= 1'b1;
      end
      if(when_Axi4ErrorSlave_l24) begin
        consumeData <= 1'b0;
        sendRsp <= 1'b1;
      end
      if(io_axi_b_fire) begin
        sendRsp <= 1'b0;
      end
    end
  end

  always @(posedge clk) begin
    if(io_axi_aw_fire) begin
      id <= io_axi_aw_payload_id;
    end
  end


endmodule

module Axi4ReadOnlyErrorSlave (
  input               io_axi_ar_valid,
  output              io_axi_ar_ready,
  input      [19:0]   io_axi_ar_payload_addr,
  input      [3:0]    io_axi_ar_payload_id,
  input      [7:0]    io_axi_ar_payload_len,
  input      [2:0]    io_axi_ar_payload_size,
  input      [1:0]    io_axi_ar_payload_burst,
  output              io_axi_r_valid,
  input               io_axi_r_ready,
  output     [31:0]   io_axi_r_payload_data,
  output     [3:0]    io_axi_r_payload_id,
  output     [1:0]    io_axi_r_payload_resp,
  output              io_axi_r_payload_last,
  input               clk,
  input               reset
);
  reg                 sendRsp;
  reg        [3:0]    id;
  reg        [7:0]    remaining;
  wire                remainingZero;
  wire                io_axi_ar_fire;

  assign remainingZero = (remaining == 8'h0);
  assign io_axi_ar_ready = (! sendRsp);
  assign io_axi_ar_fire = (io_axi_ar_valid && io_axi_ar_ready);
  assign io_axi_r_valid = sendRsp;
  assign io_axi_r_payload_id = id;
  assign io_axi_r_payload_resp = 2'b11;
  assign io_axi_r_payload_last = remainingZero;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      sendRsp <= 1'b0;
    end else begin
      if(io_axi_ar_fire) begin
        sendRsp <= 1'b1;
      end
      if(sendRsp) begin
        if(io_axi_r_ready) begin
          if(remainingZero) begin
            sendRsp <= 1'b0;
          end
        end
      end
    end
  end

  always @(posedge clk) begin
    if(io_axi_ar_fire) begin
      remaining <= io_axi_ar_payload_len;
      id <= io_axi_ar_payload_id;
    end
    if(sendRsp) begin
      if(io_axi_r_ready) begin
        remaining <= (remaining - 8'h01);
      end
    end
  end


endmodule
