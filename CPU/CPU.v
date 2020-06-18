`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:12:07 11/16/2019 
// Design Name: 
// Module Name:    mips 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
	 module CPU(
    input reset,
    input clk,
	 input hit0,
	 input [31:0] owd,//dm1读出数据
	 input [5:0] hwint,//dm1中断请求
	 output [31:0] ord,//dm1数据
	 output [31:0] oadd,//dm1写入地址
	 output owe,//CPU写出信号
	 output t_lock,
	 output [31:0] cpu_add
    );
	 `define op 31:26
	 `define rs 25:21
	 `define rt 20:16
	 `define rd 15:11
	 `define s 10:6
wire cpu_bd;
assign cpu_add= M_res==0?M_pc:
	             E_res==0?E_pc:
					 D_res==0?D_pc:pc_out;
assign cpu_bd= M_res==0?M_bd:
               E_res==0?E_bd:D_bd;
assign t_lock=cp0_we;
assign oadd=M_A1;
assign owe= M_S==3;
assign ord=M2;
//回传---------------------------------
wire staE,staD;
wire [31:0] D1,D2,E1,E2,M2;
Stall STALL (
    .D1_A(D_ins[`rs]), 
    .D2_A(D_ins[`rt]), 
    .E1_A(E_ins[`rs]), 
    .E2_A(E_ins[`rt]), 
    .E_A2(E_A2), 
    .M_A2(M_A2), 
    .D1_we(D_D1), 
    .D2_we(D_D2), 
    .E1_we(E_E1), 
    .E2_we(E_E2), 
	 .E_we(E_gwe),
	 .M_we(M_gwe),
    .E_delay(E_delay), 
    .M_delay(M_delay),
    .start(start),	 
	 .busy(busy),
	 .D_gwe1(D_gwe1),
    .staE(staE), 
    .staD(staD)
    );	 
Trans TRANS (
    .D1_Ad(D_ins[`rs]), //
    .D2_Ad(D_ins[`rt]), 
    .E1_Ad(E_ins[`rs]), 
    .E2_Ad(E_ins[`rt]),
	 .M2_Ad(M_ins[`rt]),
    .E_Ad2(E_A2), 
    .M_Ad2(M_A2), 
    .W_Ad2(W_A2),
	 .F_Ad2(F_A2),
	 .G_Ad2(G_A2),
	 .E_Wd1(E_W1),
    .M_Wd1(M_W1), 
    .W_Wd1(W_W1),
	 .F_Wd1(F_W1),
	 .G_Wd1(G_W1),
    .E_we(E_gwe),	 
    .M_we(M_gwe), 
    .W_we(W_gwe),
	 .F_we(F_gwe),
	 .G_we(G_gwe),
    .D1_default(rd1),//default理解为无冲突情况 
    .D2_default(rd2), 
    .E1_default(E_R1), 
    .E2_default(E_R2),
	 .M2_default(M_R2),	 
    .E_delay(E_delay), 
    .M_delay(M_delay), 
    .D1(D1), 
    .D2(D2),	 
    .E1(E1), 
    .E2(E2),
	 .M2(M2)
    );

//-----------------------PC 级别
wire [31:0] pc_nex,pc_out,ins,I_D_W1;
wire gwe,staPC,jump,awe,gwe2,eret;
wire [31:0] adder,adder1,nadder,nadder1;
wire [4:0] I_D_A2,ex0,ex1,I_D_ex;
		wire dwe,slD,I_D_D1,I_D_D2,I_D_E1,I_D_E2,I_D_M2;//使用I_D_D2是因为D2已被占用
		wire [1:0] slE2,slM,slA2,S,delay,slW;
		wire [2:0] L,gwe1;
		wire [3:0] slpc,aluop;
assign staPC=staD|staE|sta_eret;
PC  PC(
    .lock(staPC),
    .pc_nex(pc_nex), 
    .pc_out(pc_out), 
    .reset(reset), 
    .clk(clk),
	 .handle(cp0_we)
    );	 
	
IM IM (
    .add(pc_out), 
    .ins(ins),
	 .ex(ex0)
    );
CONTROL CONTROL (
    .ins(ins), 
    .gwe(gwe), 
    .gwe1(gwe1), 
    .dwe(dwe), 
    .slE2(slE2), 
    .slM(slM), 
    .slW(slW), 
    .delay(delay), 
    .D1(I_D_D1), 
    .D2(I_D_D2), 	 
    .E1(I_D_E1), 
    .E2(I_D_E2), 
	 .M2(I_D_M2),
    .L(L), 
    .S(S), 
    .aluop(aluop), 
    .slD(slD), 
    .slA2(slA2),
	 .sl_pc(slpc),
	 .ex(ex1),
	 .jump(jump),
	 .awe(awe),
	 .gwe2(gwe2),
	 .eret(eret)
    );
	 
pc_alu PC_ALU (
    .in(pc_out),
	 .in1(D_pc),
    .adder(adder),
	 .adder1(adder1),
    .nadder(nadder), 
    .nadder1(nadder1), 
    .imm (D_ins[15:0]), 
    .index(D_ins[25:0])
    );
assign I_D_W1 = slD==0?adder1:
					{ins[15:0],16'b0};
					
assign I_D_A2= slA2==0?ins[`rd]:
					slA2==1?ins[`rt]:31;
assign I_D_ex= ex1?10:
					ex0?4:0;
//assign I_D_ins
//---------------------D级
wire [31:0] D_ins,D_W1,D_pc,rd1,rd2,fD2,EPC;
wire [4:0] D_A2,D_ex;
wire D_gwe,D_res,D_jum,D_bd,D_awe,D_reset,D_gwe2,sta_eret,D_eret;
		wire D_dwe,D_D1,D_D2,D_E1,D_E2,D_M2,D_nop;
		wire [1:0] pd,D_slE2,D_slM,D_slW,D_S,D_delay,I_E_delay;
		wire [2:0] D_L,D_gwe1;
		wire [3:0] D_aluop,D_slpc;
assign D_reset= reset|(D_slpc==9&&E_gwe2==0&&M_gwe2==0)|cp0_we;
assign sta_eret= (D_slpc==9)&(E_gwe2|M_gwe2);
D  D(
	 .lock(staD|staE|sta_eret),
    .I_pc(pc_out), 
    .O_pc(D_pc), 
    .I_ins(ins), 
    .O_ins(D_ins), 
    .clk(clk), 
    .reset(D_reset), 
    .I_W1(I_D_W1), 
    .O_W1(D_W1), 
    .I_gwe(gwe), 
    .O_gwe(D_gwe), 
    .I_A2(I_D_A2), 
    .O_A2(D_A2),
    .I_dwe(dwe), 
    .O_dwe(D_dwe), 
	 .I_D1(I_D_D1),
	 .O_D1(D_D1),
	 .I_D2(I_D_D2),
	 .O_D2(D_D2),
	 .I_E1(I_D_E1),
	 .O_E1(D_E1),
	 .I_E2(I_D_E2),
	 .O_E2(D_E2),
	 .I_M2(I_D_M2),
	 .O_M2(D_M2),
    .I_gwe1(gwe1), 
    .O_gwe1(D_gwe1), 
    .I_slE2(slE2), 
    .O_slE2(D_slE2), 
    .I_slM(slM), 
    .O_slM(D_slM), 
    .I_slW(slW), 
    .O_slW(D_slW), 
    .I_L(L), 
    .O_L(D_L), 
    .I_S(S), 
    .O_S(D_S), 
    .I_aluop(aluop), 
    .O_aluop(D_aluop),
	 .I_delay(delay),
	 .O_delay(D_delay),
	 .I_slpc(slpc),
	 .O_slpc(D_slpc),
	 .I_ex(I_D_ex),
	 .O_ex(D_ex),
	 .I_bd(D_jump),
	 .O_bd(D_bd),
	 .I_jump(jump),
	 .O_jump(D_jump),
	 .I_awe(awe),
	 .O_awe(D_awe),
	 .I_gwe2(gwe2),
	 .O_gwe2(D_gwe2),
	 .I_res('b0),
	 .O_res(D_res),
	 .I_eret(eret),
	 .O_eret(D_eret)
    );
GRF GRF(
    .pc(W_pc), 
    .rs(D_ins[`rs]), 
    .rt(D_ins[`rt]), 
    .rd(W_A2), 
    .wd(W_W1), 
    .rd1(rd1), 
    .rd2(rd2), 
    .reset(reset), 
    .clk(clk), 
    .we(W_gwe)
    );
cmp CMP (
    .A(D1), 
    .B(fD2), 
    .pd(pd)
    );
	
assign fD2= D_D2?D2:0;
//pc选择信号

assign I_E_delay= D_delay==0?0:D_delay-1;

assign pc_nex= D_slpc==9?EPC:
					D_slpc==8?D1:
					D_slpc==7?nadder1:
					(D_slpc==1&&pd==1)?nadder:
					(D_slpc==2&&pd==0)?nadder:
					(D_slpc==3&&pd==2)?nadder:
					(D_slpc==4&&pd!=2)?nadder:
					(D_slpc==5&&pd!=0)?nadder:
					(D_slpc==6&&pd!=1)?nadder:
					adder;

//------------------------------E级
wire [31:0] E_pc,E_ins,E_R1,E_R2,E_W1,alub,I_M_W1,alu;
wire [4:0] E_A2,E_ex,I_M_ex,aluex;
wire E_gwe,E_reset,start,E_bd,E_awe,E_gwe2,E_res,E_eret;

		wire E_dwe,E_E1,E_E2,E_M2;
		wire [1:0] E_slE2,E_slM,E_slW,E_S,E_delay,I_M_delay;
		wire [2:0] E_L,E_gwe1;
		wire [3:0] E_aluop,busy;
		wire [31:0] hi,lo;
assign E_reset=reset|((staD|sta_eret)&(~staE))|cp0_we;
assign start= E_gwe1==1||E_gwe1==2||E_gwe1==3||E_gwe1==4;
E E (
	 .lock(staE),
    .clk(clk), 
    .reset(E_reset), 
    .I_ins(D_ins), 
    .O_ins(E_ins), 
    .I_pc(D_pc), 
    .O_pc(E_pc), 
    .I_gwe(D_gwe), 
    .O_gwe(E_gwe), 
    .I_R1(D1), 
    .O_R1(E_R1), 
    .I_R2(D2), 
    .O_R2(E_R2), 
    .I_W1(D_W1), 
    .O_W1(E_W1), 
    .I_A2(D_A2), 
    .O_A2(E_A2),
	 .I_E1(D_E1),
	 .O_E1(E_E1),
	 .I_E2(D_E2),
	 .O_E2(E_E2),
	 .I_M2(D_M2),
	 .O_M2(E_M2),
    .I_dwe(D_dwe), 
    .O_dwe(E_dwe), 
    .I_gwe1(D_gwe1), 
    .O_gwe1(E_gwe1), 
    .I_slE2(D_slE2), 
    .O_slE2(E_slE2), 
    .I_slM(D_slM), 
    .O_slM(E_slM), 
    .I_slW(D_slW), 
    .O_slW(E_slW), 
    .I_L(D_L), 
    .O_L(E_L), 
    .I_S(D_S), 
    .O_S(E_S), 
    .I_aluop(D_aluop), 
    .O_aluop(E_aluop),
	 .I_delay(I_E_delay),
	 .O_delay(E_delay),
	 .I_ex(D_ex),
	 .O_ex(E_ex),
	 .I_bd(D_bd),
	 .O_bd(E_bd),
	 .I_awe(D_awe),
	 .O_awe(E_awe),
	 .I_gwe2(D_gwe2),
	 .O_gwe2(E_gwe2),
	 .I_res(D_res),
	 .O_res(E_res),
	 .I_eret(D_eret),
	 .O_eret(E_eret)
    );
alu ALU(
    .A(E1), 
    .B(alub), 
    .op(E_aluop),
	 .s(E_ins[`s]),	 
    .result(alu),
	 .aluex(aluex),
	 .awe(E_awe),
	 .L(E_L),
	 .S(E_S)
    );
HL_ALU HL_ALU (
    .A(E1), 
    .B(E2), 
    .O_hi(hi), 
    .O_lo(lo), 
    .aluop(E_gwe1), 
    .O_busy(busy), 
    .clk(clk), 
    .reset(reset),
	 .lock(cp0_we)
    );
	 
assign alub=(E_slE2==2)?E2:
				(E_slE2==1)?{{16{E_ins[15]}},E_ins[15:0]}:
				{16'b0,E_ins[15:0]};
assign I_M_W1= E_slM==0?alu:
					E_slM==1?E_W1:
					E_slM==2?hi:lo;
assign I_M_delay =E_delay==0?0:E_delay-1;
assign I_M_ex= aluex==0?E_ex:aluex;
//--------------------------------M级
wire [31:0] M_pc,M_ins,M_W1,M_A1,da,I_W_W1,M_R2,SR;
wire [4:0] M_A2,M_ex,fex;
wire M_gwe,M_reset,M_bd,cp0_we,M_M2,M_gwe2,M_res,M_eret;
		wire M_dwe,fdwe;
		wire [1:0] M_S,M_slW,M_delay;
		wire [2:0] M_L;
//wire []
assign M_reset=reset|staE|cp0_we;
M M (
    .clk(clk), 
    .reset(M_reset), 
    .I_pc(E_pc), 
    .O_pc(M_pc), 
    .I_ins(E_ins), 
    .O_ins(M_ins), 
    .I_gwe(E_gwe), 
    .O_gwe(M_gwe), 
    .I_W1(I_M_W1), 
    .O_W1(M_W1),  
    .I_A1(alu), 
    .O_A1(M_A1), 
    .I_A2(E_A2), 
    .O_A2(M_A2),
	 .I_R2(E2),
	 .O_R2(M_R2),
	 .I_M2(E_M2),
	 .O_M2(M_M2),
    .I_dwe(E_dwe), 
    .O_dwe(M_dwe), 
    .I_slW(E_slW), 
    .O_slW(M_slW), 
    .I_L(E_L), 
    .O_L(M_L), 
    .I_S(E_S), 
    .O_S(M_S),
	 .I_delay(I_M_delay),
	 .O_delay(M_delay),
	 .I_ex(I_M_ex),
	 .O_ex(M_ex),
	 .I_bd(E_bd),
	 .O_bd(M_bd),
	 .I_gwe2(E_gwe2),
	 .O_gwe2(M_gwe2),
	 .I_res(E_res),
	 .O_res(M_res),
	 .I_eret(E_eret),
	 .O_eret(M_eret)
    );
DM 	DM (
    .pc(M_pc), 
    .add(M_A1), 
    .mfw(M2), 
    .mw(fdwe), 
    .mr('b1), 
    .rd(da), 
    .reset(reset), 
    .clk(clk),
	 .L(M_L),
	 .S(M_S)
    );
E_I_C  E_I_C(
    .M_ex(M_ex), //M级异常
    .hit0(hit0), 
    .L(M_L), 
    .S(M_S), 
    .add(M_A1), 
	 
    .hwint(hwint), //中断
    .SR(SR), 
  
    .fex(fex),//最终pd  
    .cp0_we(cp0_we)
    );

//-----------------------CP0

wire [31:0] C_rd;
wire mtc0;
assign mtc0=(M_ins[`op]=='b010000&&M_ins[`rs]=='b00100);
CP0 CP0 (
    .clk(clk),//general
	 .reset(reset),
	 
    .add(M_ins[`rd]), //读写
    .wd(M2), 
    .rd(C_rd), 
	 .we(mtc0),
	 
    .I_EPC(cpu_add),//中断异常处理 
    .O_EPC(EPC),
    .hwint(hwint),
    .ex(fex),
    .bd(cpu_bd),	 
	 .we1(cp0_we),
	 .O_SR(SR),
	 
	 .we2(M_eret)//eret
    );
assign fdwe=M_dwe&(~hit0)&(~cp0_we);
assign  I_W_W1= M_slW==2?C_rd:
					 M_slW==1?(hit0==1?owd:da):M_W1;
//----------------------------W级别
wire [31:0] W_ins,W_pc,W_W1;
wire [4:0] W_A2;
wire W_gwe,W_reset;
assign W_reset=reset|cp0_we;
W 	W(
    .clk(clk), 
    .reset(W_reset), 
    .I_ins(M_ins), 
    .O_ins(W_ins), 
    .I_pc(M_pc), 
    .O_pc(W_pc), 
    .I_gwe(M_gwe), 
    .O_gwe(W_gwe), 
    .I_W1(I_W_W1), 
    .O_W1(W_W1), 
    .I_A2(M_A2), 
    .O_A2(W_A2)
    );
//-----------------------------F级别(转发寄存器)
wire [31:0] F_W1,G_W1;
wire [4:0] F_A2,G_A2;
wire F_gwe,G_gwe;
F 	F (
    .I_A2(W_A2), 
    .O_A2(F_A2), 
    .I_W1(W_W1), 
    .O_W1(F_W1), 
    .I_gwe(W_gwe), 
    .O_gwe(F_gwe), 
    .clk(clk), 
    .reset(reset)
    );
F G (
    .I_A2(F_A2), 
    .O_A2(G_A2), 
    .I_W1(F_W1), 
    .O_W1(G_W1), 
    .I_gwe(F_gwe), 
    .O_gwe(G_gwe), 
    .clk(clk), 
    .reset(reset)
    );

endmodule
