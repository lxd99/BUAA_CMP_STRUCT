`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:44:39 11/16/2019 
// Design Name: 
// Module Name:    Trans 
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
module Trans(
	input [4:0] D1_Ad,
	input [4:0] D2_Ad,
	input [4:0] E1_Ad,
	input [4:0] E2_Ad,
	input [4:0] M2_Ad,
	input [4:0] E_Ad2,
	input [4:0] M_Ad2,
	input [4:0] W_Ad2,
	input [4:0] F_Ad2,
	input [4:0] G_Ad2,
	input E_we,
	input M_we,
	input W_we,
	input F_we,
	input G_we,
	input [31:0] D1_default,
	input [31:0] D2_default,
	input [31:0] E1_default,
	input [31:0] E2_default,
	input [31:0] M2_default,
	input [31:0] E_Wd1,
	input [31:0] M_Wd1,
	input [31:0] W_Wd1,
	input [31:0] F_Wd1,
	input [31:0] G_Wd1,
	input [1:0] E_delay,
	input [1:0] M_delay,
	output [31:0] D1,
	output [31:0] D2,
	output [31:0] E1,
	output [31:0] E2,
	output [31:0] M2
);
	assign D1= (E_we==1&&E_delay==0&&E_Ad2==D1_Ad)?E_Wd1:
				  (M_we==1&&M_delay==0&&M_Ad2==D1_Ad)?M_Wd1:
				  (W_we==1&&W_Ad2==D1_Ad)?W_Wd1:D1_default;

	assign D2= (E_we==1&&E_delay==0&&E_Ad2==D2_Ad)?E_Wd1:
				  (M_we==1&&M_delay==0&&M_Ad2==D2_Ad)?M_Wd1:
	           (W_we==1&&W_Ad2==D2_Ad)?W_Wd1:D2_default;
	

	assign E1= (M_we==1&&M_delay==0&&M_Ad2==E1_Ad)?M_Wd1:
	           (W_we==1&&W_Ad2==E1_Ad)?W_Wd1:
	           (F_we==1&&F_Ad2==E1_Ad)?F_Wd1:
	           (G_we==1&&G_Ad2==E1_Ad)?G_Wd1:E1_default;

	assign E2= (M_we==1&&M_delay==0&&M_Ad2==E2_Ad)?M_Wd1:
	           (W_we==1&&W_Ad2==E2_Ad)?W_Wd1:
	           (F_we==1&&F_Ad2==E2_Ad)?F_Wd1:
	           (G_we==1&&G_Ad2==E2_Ad)?G_Wd1:E2_default;
	
	assign M2= (W_we==1&&W_Ad2==M2_Ad)?W_Wd1:
	           (F_we==1&&F_Ad2==M2_Ad)?F_Wd1:
	           (G_we==1&&G_Ad2==M2_Ad)?G_Wd1:M2_default;

endmodule
