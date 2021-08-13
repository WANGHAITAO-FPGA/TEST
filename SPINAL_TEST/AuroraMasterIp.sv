// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : AuroraMasterIp
// Git hash  : e92a7073a9005c8061ce6d28747ca441a4ff39f8



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
