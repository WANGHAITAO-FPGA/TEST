// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : AuroraSlaveIp
// Git hash  : e92a7073a9005c8061ce6d28747ca441a4ff39f8



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
