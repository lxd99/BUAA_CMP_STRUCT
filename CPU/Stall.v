`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:53:33 11/17/2019 
// Design Name: 
// Module Name:    Stall 
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
module Stall(
	input [4:0] D1_A,
	input [4:0] D2_A,
	input [4:0] E1_A,
	input [4:0] E2_A,
	input [4:0] E_A2,
	input [4:0] M_A2,
	input D1_we,
	input D2_we,
	input E1_we,
	input E2_we,
	input E_we,
	input M_we,
	input [1:0] E_delay,
	input [1:0] M_delay,
	input [2:0] D_gwe1,
	input [3:0] busy,
	input start,
	output staE,
	output staD
	);
	wire staE1M,staE2M,staD1E,staD2E;
	wire tranD1E,transD2E;
	wire staD1M,staD2M;
	assign staE1M=(E1_we&&M_delay&&E1_A==M_A2);
	assign staE2M=(E2_we&&M_delay&&E2_A==M_A2);
	
	assign tranD1E=(D1_we&&E_we&&D1_A==E_A2&&E_delay==0);
	assign tranD2E=(D2_we&&E_we&&D2_A==E_A2&&E_delay==0);
	
	assign staD1E=(D1_we&&E_we&&E_delay&&D1_A==E_A2);
	assign staD2E=(D2_we&&E_we&&E_delay&&D2_A==E_A2);
	
	assign staD1M=((!tranD1E)&&D1_we&&M_we&&M_delay&&D1_A==M_A2);
	assign staD2M=((!tranD2E)&&D2_we&&M_we&&M_delay&&D2_A==M_A2);
	
	assign staE=(staE1M|staE2M);
	assign staD=(staE|staD1E|staD2E|staD1M|staD2M)|(D_gwe1!=0&&(busy||start));
	
endmodule
