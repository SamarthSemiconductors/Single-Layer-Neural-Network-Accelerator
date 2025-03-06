// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2024 Advanced Micro Devices, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2024.2 (win64) Build 5239630 Fri Nov 08 22:35:27 MST 2024
// Date        : Thu Mar  6 13:28:35 2025
// Host        : DevilSlayer running 64-bit major release  (build 9200)
// Command     : write_verilog -mode timesim -nolib -sdf_anno true -force -file
//               D:/Projects/project_1/project_1.sim/sim_1/impl/timing/xsim/mac_top_time_impl.v
// Design      : mac_top
// Purpose     : This verilog netlist is a timing simulation representation of the design and should not be modified or
//               synthesized. Please ensure that this netlist is used with the corresponding SDF file.
// Device      : xc7a35ticsg324-1L
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps
`define XIL_TIMING

(* ECO_CHECKSUM = "c178ad06" *) 
(* NotValidForBitStream *)
(* \DesignAttr:ENABLE_NOC_NETLIST_VIEW  *) 
(* \DesignAttr:ENABLE_AIE_NETLIST_VIEW  *) 
module mac_top
   (clk,
    btn0,
    sw0,
    led);
  input clk;
  input btn0;
  input sw0;
  output [3:0]led;

  wire btn0;
  wire btn0_IBUF;
  wire clk;
  wire clk_IBUF;
  wire clk_IBUF_BUFG;
  wire [3:0]led;
  wire [2:0]led_OBUF;
  wire mac_n_1;
  wire mac_n_2;
  wire mac_n_5;
  wire mac_n_6;
  wire mac_n_7;
  wire [4:1]result;
  wire sw0;
  wire sw0_IBUF;

initial begin
 $sdf_annotate("mac_top_time_impl.sdf",,,,"tool_control");
end
  IBUF btn0_IBUF_inst
       (.I(btn0),
        .O(btn0_IBUF));
  BUFG clk_IBUF_BUFG_inst
       (.I(clk_IBUF),
        .O(clk_IBUF_BUFG));
  IBUF clk_IBUF_inst
       (.I(clk),
        .O(clk_IBUF));
  OBUF \led_OBUF[0]_inst 
       (.I(led_OBUF[0]),
        .O(led[0]));
  OBUF \led_OBUF[1]_inst 
       (.I(1'b0),
        .O(led[1]));
  OBUF \led_OBUF[2]_inst 
       (.I(led_OBUF[2]),
        .O(led[2]));
  OBUF \led_OBUF[3]_inst 
       (.I(led_OBUF[2]),
        .O(led[3]));
  mac_unit mac
       (.AR(btn0_IBUF),
        .D(sw0_IBUF),
        .DI({result[4],mac_n_1,mac_n_2}),
        .Q({result[3],result[1]}),
        .S({mac_n_5,mac_n_6,mac_n_7}),
        .clk_IBUF_BUFG(clk_IBUF_BUFG));
  sigmoid_lut sig
       (.DI({result[4],mac_n_1,mac_n_2}),
        .Q({result[3],result[1]}),
        .S({mac_n_5,mac_n_6,mac_n_7}),
        .led_OBUF({led_OBUF[2],led_OBUF[0]}));
  IBUF sw0_IBUF_inst
       (.I(sw0),
        .O(sw0_IBUF));
endmodule

module mac_unit
   (DI,
    Q,
    S,
    D,
    clk_IBUF_BUFG,
    AR);
  output [2:0]DI;
  output [1:0]Q;
  output [2:0]S;
  input [0:0]D;
  input clk_IBUF_BUFG;
  input [0:0]AR;

  wire [0:0]AR;
  wire [0:0]D;
  wire [2:0]DI;
  wire [1:0]Q;
  wire [2:0]S;
  wire clk_IBUF_BUFG;
  wire [0:0]inputs_3;

  LUT1 #(
    .INIT(2'h1)) 
    \result[4]_i_1 
       (.I0(D),
        .O(inputs_3));
  FDCE #(
    .INIT(1'b0)) 
    \result_reg[1] 
       (.C(clk_IBUF_BUFG),
        .CE(1'b1),
        .CLR(AR),
        .D(1'b1),
        .Q(Q[0]));
  FDCE #(
    .INIT(1'b0)) 
    \result_reg[3] 
       (.C(clk_IBUF_BUFG),
        .CE(1'b1),
        .CLR(AR),
        .D(D),
        .Q(Q[1]));
  FDCE #(
    .INIT(1'b0)) 
    \result_reg[4] 
       (.C(clk_IBUF_BUFG),
        .CE(1'b1),
        .CLR(AR),
        .D(inputs_3),
        .Q(DI[2]));
  LUT2 #(
    .INIT(4'h8)) 
    y1_carry_i_1
       (.I0(DI[2]),
        .I1(Q[1]),
        .O(DI[1]));
  LUT2 #(
    .INIT(4'hE)) 
    y1_carry_i_2
       (.I0(DI[2]),
        .I1(Q[0]),
        .O(DI[0]));
  LUT1 #(
    .INIT(2'h1)) 
    y1_carry_i_3
       (.I0(DI[2]),
        .O(S[2]));
  LUT2 #(
    .INIT(4'h2)) 
    y1_carry_i_4
       (.I0(Q[1]),
        .I1(DI[2]),
        .O(S[1]));
  LUT2 #(
    .INIT(4'h1)) 
    y1_carry_i_5
       (.I0(DI[2]),
        .I1(Q[0]),
        .O(S[0]));
endmodule

module sigmoid_lut
   (led_OBUF,
    DI,
    S,
    Q);
  output [1:0]led_OBUF;
  input [2:0]DI;
  input [2:0]S;
  input [1:0]Q;

  wire [2:0]DI;
  wire [1:0]Q;
  wire [2:0]S;
  wire [1:0]led_OBUF;
  wire y1_carry_n_1;
  wire [3:0]NLW_y1_carry_CO_UNCONNECTED;
  wire [3:0]NLW_y1_carry_O_UNCONNECTED;

  (* SOFT_HLUTNM = "soft_lutpair0" *) 
  LUT4 #(
    .INIT(16'hABAC)) 
    \led_OBUF[0]_inst_i_1 
       (.I0(y1_carry_n_1),
        .I1(Q[1]),
        .I2(DI[2]),
        .I3(Q[0]),
        .O(led_OBUF[0]));
  (* SOFT_HLUTNM = "soft_lutpair0" *) 
  LUT4 #(
    .INIT(16'hA8AC)) 
    \led_OBUF[3]_inst_i_1 
       (.I0(y1_carry_n_1),
        .I1(Q[1]),
        .I2(DI[2]),
        .I3(Q[0]),
        .O(led_OBUF[1]));
  CARRY4 y1_carry
       (.CI(1'b0),
        .CO({NLW_y1_carry_CO_UNCONNECTED[3],y1_carry_n_1,NLW_y1_carry_CO_UNCONNECTED[1:0]}),
        .CYINIT(1'b0),
        .DI({1'b0,DI}),
        .O(NLW_y1_carry_O_UNCONNECTED[3:0]),
        .S({1'b0,S}));
endmodule
`ifndef GLBL
`define GLBL
`timescale  1 ps / 1 ps

module glbl ();

    parameter ROC_WIDTH = 100000;
    parameter TOC_WIDTH = 0;
    parameter GRES_WIDTH = 10000;
    parameter GRES_START = 10000;

//--------   STARTUP Globals --------------
    wire GSR;
    wire GTS;
    wire GWE;
    wire PRLD;
    wire GRESTORE;
    tri1 p_up_tmp;
    tri (weak1, strong0) PLL_LOCKG = p_up_tmp;

    wire PROGB_GLBL;
    wire CCLKO_GLBL;
    wire FCSBO_GLBL;
    wire [3:0] DO_GLBL;
    wire [3:0] DI_GLBL;
   
    reg GSR_int;
    reg GTS_int;
    reg PRLD_int;
    reg GRESTORE_int;

//--------   JTAG Globals --------------
    wire JTAG_TDO_GLBL;
    wire JTAG_TCK_GLBL;
    wire JTAG_TDI_GLBL;
    wire JTAG_TMS_GLBL;
    wire JTAG_TRST_GLBL;

    reg JTAG_CAPTURE_GLBL;
    reg JTAG_RESET_GLBL;
    reg JTAG_SHIFT_GLBL;
    reg JTAG_UPDATE_GLBL;
    reg JTAG_RUNTEST_GLBL;

    reg JTAG_SEL1_GLBL = 0;
    reg JTAG_SEL2_GLBL = 0 ;
    reg JTAG_SEL3_GLBL = 0;
    reg JTAG_SEL4_GLBL = 0;

    reg JTAG_USER_TDO1_GLBL = 1'bz;
    reg JTAG_USER_TDO2_GLBL = 1'bz;
    reg JTAG_USER_TDO3_GLBL = 1'bz;
    reg JTAG_USER_TDO4_GLBL = 1'bz;

    assign (strong1, weak0) GSR = GSR_int;
    assign (strong1, weak0) GTS = GTS_int;
    assign (weak1, weak0) PRLD = PRLD_int;
    assign (strong1, weak0) GRESTORE = GRESTORE_int;

    initial begin
	GSR_int = 1'b1;
	PRLD_int = 1'b1;
	#(ROC_WIDTH)
	GSR_int = 1'b0;
	PRLD_int = 1'b0;
    end

    initial begin
	GTS_int = 1'b1;
	#(TOC_WIDTH)
	GTS_int = 1'b0;
    end

    initial begin 
	GRESTORE_int = 1'b0;
	#(GRES_START);
	GRESTORE_int = 1'b1;
	#(GRES_WIDTH);
	GRESTORE_int = 1'b0;
    end

endmodule
`endif
