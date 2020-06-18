`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:06:41 11/16/2019 
// Design Name: 
// Module Name:    M 
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
module M(
    input clk,
	 input reset,
	 input [31:0] I_pc,
	 output [31:0] O_pc,
	 input [31:0] I_ins,
	 output [31:0] O_ins,
	 input I_gwe,
	 output O_gwe,
    input [31:0] I_W1,
    output [31:0] O_W1,
	 input  [31:0] I_A1,
	 output [31:0] O_A1,
	 input  [4:0] I_A2,
	 output [4:0] O_A2,
	 input [31:0]  I_R2,
	 output [31:0] O_R2,
	   input I_M2,
		output O_M2,
		input  I_dwe,
		output O_dwe,
		input [1:0] I_slW,
		output [1:0] O_slW,
		input [2:0] I_L,
		output [2:0] O_L,
		input [1:0] I_S,
		output [1:0] O_S,
		input [1:0] I_delay,
		output [1:0] O_delay,
		
		input [4:0] I_ex,
		output [4:0] O_ex,
		input I_bd,
		output O_bd,
		input I_gwe2,
		output O_gwe2,
		input I_res,
		output O_res,
		input I_eret,
		output O_eret
    );
	 reg [31:0] ins,pc,W1,A1,R2;
	 reg [4:0] A2,ex;
	 reg gwe,bd,M2,gwe2,res,eret;
		reg dwe;
		reg [1:0] S,delay,slW;
		reg [2:0] L;


		assign O_pc=pc;
		assign O_ins=ins;
		assign O_gwe=gwe;
		assign O_W1=W1;
		assign O_A1=A1;
		assign O_A2=A2;
		assign O_R2=R2;
		
		assign O_M2=M2;
		assign O_dwe=dwe;
		assign O_slW=slW;
		assign O_S=S;
		assign O_L=L;
		assign O_delay=delay;
		
		assign O_ex=ex;
		assign O_bd=bd;
		assign O_gwe2=gwe2;
		assign O_res=res;
		assign O_eret=eret;

	 initial begin
		pc<='h3000;
		ins<=0;
		gwe<=0;
		W1<=0;
		A1<=0;
		A2<=0;
		R2<=0;
		
		M2<=0;
		dwe<=0;
		slW<=0;
		S<=0;
		L<=0;
		delay<=0;
		
		ex<=0;
		bd<=0;
		gwe2<=0;
		res<=0;
		eret<=0;
	 end
	always @ (posedge clk) begin
	if(reset==1) begin
	   pc<='h3000;
		ins<=0;
		gwe<=0;
		W1<=0;
		A1<=0;
		A2<=0;
		R2<=0;
		
		M2<=0;
		dwe<=0;
		slW<=0;
		S<=0;
		L<=0;
		delay<=0;
		
		ex<=0;
		bd<=0;
		gwe2<=0;
		res<=1;
		eret<=0;
	end
	else begin
		pc<=I_pc;
		ins<=I_ins;
		gwe<=I_gwe;
		W1<=I_W1;
		A2<=I_A2;
		A1<=I_A1;
		R2<=I_R2;
		
		M2<=I_M2;
		dwe<=I_dwe;
		slW<=I_slW;
		S<=I_S;
		L<=I_L;
		delay<=I_delay;
		
		ex<=I_ex;
		bd<=I_bd;
		gwe2<=I_gwe2;
		res<=I_res;
		eret<=I_eret;
		end
	end

endmodule
