// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : AuroraIp
// Git hash  : e92a7073a9005c8061ce6d28747ca441a4ff39f8



module AuroraIp (
  input               axiw_0_valid,
  output              axiw_0_ready,
  input      [31:0]   axiw_0_payload_data,
  input               axiw_0_payload_last,
  input               axiw_1_valid,
  output              axiw_1_ready,
  input      [31:0]   axiw_1_payload_data,
  input               axiw_1_payload_last,
  output              axir_0_valid,
  input               axir_0_ready,
  output     [31:0]   axir_0_payload_data,
  output              axir_0_payload_last,
  output              axir_1_valid,
  input               axir_1_ready,
  output     [31:0]   axir_1_payload_data,
  output              axir_1_payload_last,
  input               rxp_0,
  input               rxp_1,
  input               rxn_0,
  input               rxn_1,
  output              txp_0,
  output              txp_1,
  output              txn_0,
  output              txn_1,
  input               init_clk_in,
  input               gt_refclk1_p,
  input               gt_refclk1_n,
  output     [31:0]   fiber_status_0,
  output     [31:0]   fiber_status_1,
  input               gt_reset,
  input               reset,
  input               power_down
);
  wire                auroramaster_axiw_ready;
  wire                auroramaster_axir_valid;
  wire       [31:0]   auroramaster_axir_payload_data;
  wire                auroramaster_axir_payload_last;
  wire                auroramaster_txp;
  wire                auroramaster_txn;
  wire       [31:0]   auroramaster_fiber_status;
  wire                auroramaster_gt_refclk1_out;
  wire                auroramaster_user_clk_out;
  wire                auroramaster_sync_clk_out;
  wire                auroramaster_gt0_qplllock_out;
  wire                auroramaster_gt0_qpllrefclklost_out;
  wire                auroramaster_gt_qpllclk_quad3_out;
  wire                auroramaster_gt_qpllrefclk_quad3_out;
  wire                auroraslave_axiw_ready;
  wire                auroraslave_axir_valid;
  wire       [31:0]   auroraslave_axir_payload_data;
  wire                auroraslave_axir_payload_last;
  wire                auroraslave_txp;
  wire                auroraslave_txn;
  wire       [31:0]   auroraslave_fiber_status;

  AuroraMasterIp auroramaster (
    .axiw_valid                 (axiw_0_valid                          ), //i
    .axiw_ready                 (auroramaster_axiw_ready               ), //o
    .axiw_payload_data          (axiw_0_payload_data                   ), //i
    .axiw_payload_last          (axiw_0_payload_last                   ), //i
    .axir_valid                 (auroramaster_axir_valid               ), //o
    .axir_ready                 (axir_0_ready                          ), //i
    .axir_payload_data          (auroramaster_axir_payload_data        ), //o
    .axir_payload_last          (auroramaster_axir_payload_last        ), //o
    .rxp                        (rxp_0                                 ), //i
    .rxn                        (rxn_0                                 ), //i
    .txp                        (auroramaster_txp                      ), //o
    .txn                        (auroramaster_txn                      ), //o
    .init_clk_in                (init_clk_in                           ), //i
    .gt_refclk1_p               (gt_refclk1_p                          ), //i
    .gt_refclk1_n               (gt_refclk1_n                          ), //i
    .fiber_status               (auroramaster_fiber_status             ), //o
    .gt_reset                   (gt_reset                              ), //i
    .reset                      (reset                                 ), //i
    .power_down                 (power_down                            ), //i
    .gt_refclk1_out             (auroramaster_gt_refclk1_out           ), //o
    .user_clk_out               (auroramaster_user_clk_out             ), //o
    .sync_clk_out               (auroramaster_sync_clk_out             ), //o
    .gt0_qplllock_out           (auroramaster_gt0_qplllock_out         ), //o
    .gt0_qpllrefclklost_out     (auroramaster_gt0_qpllrefclklost_out   ), //o
    .gt_qpllclk_quad3_out       (auroramaster_gt_qpllclk_quad3_out     ), //o
    .gt_qpllrefclk_quad3_out    (auroramaster_gt_qpllrefclk_quad3_out  )  //o
  );
  AuroraSlaveIp auroraslave (
    .axiw_valid                (axiw_1_valid                          ), //i
    .axiw_ready                (auroraslave_axiw_ready                ), //o
    .axiw_payload_data         (axiw_1_payload_data                   ), //i
    .axiw_payload_last         (axiw_1_payload_last                   ), //i
    .axir_valid                (auroraslave_axir_valid                ), //o
    .axir_ready                (axir_1_ready                          ), //i
    .axir_payload_data         (auroraslave_axir_payload_data         ), //o
    .axir_payload_last         (auroraslave_axir_payload_last         ), //o
    .rxp                       (rxp_1                                 ), //i
    .rxn                       (rxn_1                                 ), //i
    .txp                       (auroraslave_txp                       ), //o
    .txn                       (auroraslave_txn                       ), //o
    .init_clk_in               (init_clk_in                           ), //i
    .fiber_status              (auroraslave_fiber_status              ), //o
    .gt_reset                  (gt_reset                              ), //i
    .reset                     (reset                                 ), //i
    .power_down                (power_down                            ), //i
    .gt0_qplllock_in           (auroramaster_gt0_qplllock_out         ), //i
    .gt0_qpllrefclklost_in     (auroramaster_gt0_qpllrefclklost_out   ), //i
    .gt_qpllclk_quad3_in       (auroramaster_gt_qpllclk_quad3_out     ), //i
    .gt_qpllrefclk_quad3_in    (auroramaster_gt_qpllrefclk_quad3_out  ), //i
    .user_clk                  (auroramaster_user_clk_out             ), //i
    .sync_clk                  (auroramaster_sync_clk_out             ), //i
    .gt_refclk1                (auroramaster_gt_refclk1_out           )  //i
  );
  assign axiw_0_ready = auroramaster_axiw_ready;
  assign axir_0_valid = auroramaster_axir_valid;
  assign axir_0_payload_data = auroramaster_axir_payload_data;
  assign axir_0_payload_last = auroramaster_axir_payload_last;
  assign axiw_1_ready = auroraslave_axiw_ready;
  assign axir_1_valid = auroraslave_axir_valid;
  assign axir_1_payload_data = auroraslave_axir_payload_data;
  assign axir_1_payload_last = auroraslave_axir_payload_last;
  assign txp_0 = auroramaster_txp;
  assign txn_0 = auroramaster_txn;
  assign txp_1 = auroraslave_txp;
  assign txn_1 = auroraslave_txn;
  assign fiber_status_0 = auroramaster_fiber_status;
  assign fiber_status_1 = auroraslave_fiber_status;

endmodule

module AuroraSlaveIp (
  input               axiw_valid,
  output              axiw_ready,
  input      [31:0]   axiw_payload_data,
  input               axiw_payload_last,
  output              axir_valid,
  input               axir_ready,
  output     [31:0]   axir_payload_data,
  output              axir_payload_last,
  input               rxp,
  input               rxn,
  output              txp,
  output              txn,
  input               init_clk_in,
  output     [31:0]   fiber_status,
  input               gt_reset,
  input               reset,
  input               power_down,
  input               gt0_qplllock_in,
  input               gt0_qpllrefclklost_in,
  input               gt_qpllclk_quad3_in,
  input               gt_qpllrefclk_quad3_in,
  input               user_clk,
  input               sync_clk,
  input               gt_refclk1
);
  wire                aurora_channelb_s_axi_tx_tready;
  wire       [31:0]   aurora_channelb_m_axi_rx_tdata;
  wire       [3:0]    aurora_channelb_m_axi_rx_tkeep;
  wire                aurora_channelb_m_axi_rx_tvalid;
  wire                aurora_channelb_m_axi_rx_tlast;
  wire       [15:0]   aurora_channelb_drpdo_out;
  wire                aurora_channelb_drprdy_out;
  wire                aurora_channelb_txp;
  wire                aurora_channelb_txn;
  wire                aurora_channelb_channel_up;
  wire                aurora_channelb_frame_err;
  wire                aurora_channelb_hard_err;
  wire                aurora_channelb_lane_up;
  wire                aurora_channelb_rx_resetdone_out;
  wire                aurora_channelb_soft_err;
  wire                aurora_channelb_tx_lock;
  wire                aurora_channelb_tx_resetdone_out;
  wire                aurora_channelb_link_reset_out;
  wire                aurora_channelb_sys_reset_out;
  wire                aurora_channelb_gt0_qpllreset_out;
  wire                aurora_channelb_tx_out_clk;
  wire       [4:0]    _zz_fiber_status;

  assign _zz_fiber_status = {{{{aurora_channelb_frame_err,aurora_channelb_hard_err},aurora_channelb_soft_err},aurora_channelb_lane_up},aurora_channelb_channel_up};
  Gtx_Slave aurora_channelb (
    .s_axi_tx_tdata            (axiw_payload_data                  ), //i
    .s_axi_tx_tkeep            (4'b1111                            ), //i
    .s_axi_tx_tvalid           (axiw_valid                         ), //i
    .s_axi_tx_tlast            (axiw_payload_last                  ), //i
    .s_axi_tx_tready           (aurora_channelb_s_axi_tx_tready    ), //o
    .m_axi_rx_tdata            (aurora_channelb_m_axi_rx_tdata     ), //o
    .m_axi_rx_tkeep            (aurora_channelb_m_axi_rx_tkeep     ), //o
    .m_axi_rx_tvalid           (aurora_channelb_m_axi_rx_tvalid    ), //o
    .m_axi_rx_tlast            (aurora_channelb_m_axi_rx_tlast     ), //o
    .drpaddr_in                (9'h0                               ), //i
    .drpen_in                  (1'b0                               ), //i
    .drpdi_in                  (1'b0                               ), //i
    .drpdo_out                 (aurora_channelb_drpdo_out          ), //o
    .drprdy_out                (aurora_channelb_drprdy_out         ), //o
    .drpwe_in                  (1'b0                               ), //i
    .loopback                  (3'b000                             ), //i
    .power_down                (power_down                         ), //i
    .rxp                       (rxp                                ), //i
    .rxn                       (rxn                                ), //i
    .txp                       (aurora_channelb_txp                ), //o
    .txn                       (aurora_channelb_txn                ), //o
    .reset                     (reset                              ), //i
    .gt_reset                  (gt_reset                           ), //i
    .drpclk_in                 (init_clk_in                        ), //i
    .init_clk_in               (init_clk_in                        ), //i
    .channel_up                (aurora_channelb_channel_up         ), //o
    .frame_err                 (aurora_channelb_frame_err          ), //o
    .hard_err                  (aurora_channelb_hard_err           ), //o
    .lane_up                   (aurora_channelb_lane_up            ), //o
    .rx_resetdone_out          (aurora_channelb_rx_resetdone_out   ), //o
    .soft_err                  (aurora_channelb_soft_err           ), //o
    .tx_lock                   (aurora_channelb_tx_lock            ), //o
    .tx_resetdone_out          (aurora_channelb_tx_resetdone_out   ), //o
    .link_reset_out            (aurora_channelb_link_reset_out     ), //o
    .sys_reset_out             (aurora_channelb_sys_reset_out      ), //o
    .pll_not_locked            (1'b0                               ), //i
    .gt0_qplllock_in           (gt0_qplllock_in                    ), //i
    .gt0_qpllrefclklost_in     (gt0_qpllrefclklost_in              ), //i
    .gt_qpllclk_quad3_in       (gt_qpllclk_quad3_in                ), //i
    .gt_qpllrefclk_quad3_in    (gt_qpllrefclk_quad3_in             ), //i
    .user_clk                  (user_clk                           ), //i
    .sync_clk                  (sync_clk                           ), //i
    .gt_refclk1                (gt_refclk1                         ), //i
    .gt0_qpllreset_out         (aurora_channelb_gt0_qpllreset_out  ), //o
    .tx_out_clk                (aurora_channelb_tx_out_clk         )  //o
  );
  assign axiw_ready = aurora_channelb_s_axi_tx_tready;
  assign axir_payload_data = aurora_channelb_m_axi_rx_tdata;
  assign axir_payload_last = aurora_channelb_m_axi_rx_tlast;
  assign axir_valid = aurora_channelb_m_axi_rx_tvalid;
  assign txn = aurora_channelb_txn;
  assign txp = aurora_channelb_txp;
  assign fiber_status = {27'd0, _zz_fiber_status};

endmodule

module AuroraMasterIp (
  input               axiw_valid,
  output              axiw_ready,
  input      [31:0]   axiw_payload_data,
  input               axiw_payload_last,
  output              axir_valid,
  input               axir_ready,
  output     [31:0]   axir_payload_data,
  output              axir_payload_last,
  input               rxp,
  input               rxn,
  output              txp,
  output              txn,
  input               init_clk_in,
  input               gt_refclk1_p,
  input               gt_refclk1_n,
  output     [31:0]   fiber_status,
  input               gt_reset,
  input               reset,
  input               power_down,
  output              gt_refclk1_out,
  output              user_clk_out,
  output              sync_clk_out,
  output              gt0_qplllock_out,
  output              gt0_qpllrefclklost_out,
  output              gt_qpllclk_quad3_out,
  output              gt_qpllrefclk_quad3_out
);
  wire                aurora_channela_s_axi_tx_tready;
  wire       [31:0]   aurora_channela_m_axi_rx_tdata;
  wire       [3:0]    aurora_channela_m_axi_rx_tkeep;
  wire                aurora_channela_m_axi_rx_tvalid;
  wire                aurora_channela_m_axi_rx_tlast;
  wire       [15:0]   aurora_channela_drpdo_out;
  wire                aurora_channela_drprdy_out;
  wire                aurora_channela_txp;
  wire                aurora_channela_txn;
  wire                aurora_channela_channel_up;
  wire                aurora_channela_frame_err;
  wire                aurora_channela_hard_err;
  wire                aurora_channela_lane_up;
  wire                aurora_channela_rx_resetdone_out;
  wire                aurora_channela_soft_err;
  wire                aurora_channela_tx_lock;
  wire                aurora_channela_tx_resetdone_out;
  wire                aurora_channela_link_reset_out;
  wire                aurora_channela_sys_reset_out;
  wire                aurora_channela_pll_not_locked_out;
  wire                aurora_channela_gt0_qplllock_out;
  wire                aurora_channela_gt0_qpllrefclklost_out;
  wire                aurora_channela_user_clk_out;
  wire                aurora_channela_sync_clk_out;
  wire                aurora_channela_gt_reset_out;
  wire                aurora_channela_gt_refclk1_out;
  wire                aurora_channela_gt_qpllclk_quad3_out;
  wire                aurora_channela_gt_qpllrefclk_quad3_out;
  wire       [4:0]    _zz_fiber_status;

  assign _zz_fiber_status = {{{{aurora_channela_frame_err,aurora_channela_hard_err},aurora_channela_soft_err},aurora_channela_lane_up},aurora_channela_channel_up};
  Gtx_Master aurora_channela (
    .s_axi_tx_tdata             (axiw_payload_data                        ), //i
    .s_axi_tx_tkeep             (4'b1111                                  ), //i
    .s_axi_tx_tvalid            (axiw_valid                               ), //i
    .s_axi_tx_tlast             (axiw_payload_last                        ), //i
    .s_axi_tx_tready            (aurora_channela_s_axi_tx_tready          ), //o
    .m_axi_rx_tdata             (aurora_channela_m_axi_rx_tdata           ), //o
    .m_axi_rx_tkeep             (aurora_channela_m_axi_rx_tkeep           ), //o
    .m_axi_rx_tvalid            (aurora_channela_m_axi_rx_tvalid          ), //o
    .m_axi_rx_tlast             (aurora_channela_m_axi_rx_tlast           ), //o
    .drpaddr_in                 (9'h0                                     ), //i
    .drpen_in                   (1'b0                                     ), //i
    .drpdi_in                   (1'b0                                     ), //i
    .drpdo_out                  (aurora_channela_drpdo_out                ), //o
    .drprdy_out                 (aurora_channela_drprdy_out               ), //o
    .drpwe_in                   (1'b0                                     ), //i
    .loopback                   (3'b000                                   ), //i
    .power_down                 (power_down                               ), //i
    .rxp                        (rxp                                      ), //i
    .rxn                        (rxn                                      ), //i
    .txp                        (aurora_channela_txp                      ), //o
    .txn                        (aurora_channela_txn                      ), //o
    .reset                      (reset                                    ), //i
    .gt_reset                   (gt_reset                                 ), //i
    .drpclk_in                  (init_clk_in                              ), //i
    .init_clk_in                (init_clk_in                              ), //i
    .channel_up                 (aurora_channela_channel_up               ), //o
    .frame_err                  (aurora_channela_frame_err                ), //o
    .hard_err                   (aurora_channela_hard_err                 ), //o
    .lane_up                    (aurora_channela_lane_up                  ), //o
    .rx_resetdone_out           (aurora_channela_rx_resetdone_out         ), //o
    .soft_err                   (aurora_channela_soft_err                 ), //o
    .tx_lock                    (aurora_channela_tx_lock                  ), //o
    .tx_resetdone_out           (aurora_channela_tx_resetdone_out         ), //o
    .link_reset_out             (aurora_channela_link_reset_out           ), //o
    .sys_reset_out              (aurora_channela_sys_reset_out            ), //o
    .gt_refclk1_p               (gt_refclk1_p                             ), //i
    .gt_refclk1_n               (gt_refclk1_n                             ), //i
    .pll_not_locked_out         (aurora_channela_pll_not_locked_out       ), //o
    .gt0_qplllock_out           (aurora_channela_gt0_qplllock_out         ), //o
    .gt0_qpllrefclklost_out     (aurora_channela_gt0_qpllrefclklost_out   ), //o
    .user_clk_out               (aurora_channela_user_clk_out             ), //o
    .sync_clk_out               (aurora_channela_sync_clk_out             ), //o
    .gt_reset_out               (aurora_channela_gt_reset_out             ), //o
    .gt_refclk1_out             (aurora_channela_gt_refclk1_out           ), //o
    .gt_qpllclk_quad3_out       (aurora_channela_gt_qpllclk_quad3_out     ), //o
    .gt_qpllrefclk_quad3_out    (aurora_channela_gt_qpllrefclk_quad3_out  )  //o
  );
  assign axiw_ready = aurora_channela_s_axi_tx_tready;
  assign axir_payload_data = aurora_channela_m_axi_rx_tdata;
  assign axir_payload_last = aurora_channela_m_axi_rx_tlast;
  assign axir_valid = aurora_channela_m_axi_rx_tvalid;
  assign txn = aurora_channela_txn;
  assign txp = aurora_channela_txp;
  assign gt_refclk1_out = aurora_channela_gt_refclk1_out;
  assign user_clk_out = aurora_channela_user_clk_out;
  assign fiber_status = {27'd0, _zz_fiber_status};
  assign sync_clk_out = aurora_channela_sync_clk_out;
  assign gt0_qplllock_out = aurora_channela_gt0_qplllock_out;
  assign gt0_qpllrefclklost_out = aurora_channela_gt0_qpllrefclklost_out;
  assign gt_qpllclk_quad3_out = aurora_channela_gt_qpllclk_quad3_out;
  assign gt_qpllrefclk_quad3_out = aurora_channela_gt_qpllrefclk_quad3_out;

endmodule
