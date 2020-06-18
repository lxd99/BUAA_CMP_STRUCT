`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:02:40 11/16/2019 
// Design Name: 
// Module Name:    E 
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
module E(
	input lock,
	 input clk,
	 input reset,
	 input [31:0] I_ins,
    output [31:0] O_ins,
	 input [31:0]	I_pc,
	 output [31:0] O_pc,
	 input I_gwe,
	 output O_gwe,
    input [31:0] I_R1,
    output [31:0] O_R1,
	 input [31:0] I_R2,
    output [31:0] O_R2,
    input [31:0] I_W1,
    output [31:0] O_W1,
	 input [4:0] I_A2,
	 output [4:0] O_A2,
	 
		input I_E1,
		output O_E1,
		input I_E2,
		output O_E2,
      input I_M2,
      output O_M2,		
		input  I_dwe,
		output O_dwe,
		input [2:0] I_gwe1,
		output [2:0] O_gwe1,
		input  [1:0] I_slE2,
		output [1:0] O_slE2,
		input [1:0] I_slM,
		output [1:0] O_slM,
		input [1:0] I_slW,
		output [1:0] O_slW,
		input [2:0] I_L,
		output [2:0] O_L,
		input [1:0] I_S,
		output [1:0] O_S,
		input [3:0] I_aluop,
		output [3:0] O_aluop,
		input [1:0] I_delay,
		output [1:0] O_delay,
		
		input [4:0] I_ex,
		output [4:0] O_ex,
		input I_bd,
		output O_bd,
		input I_awe,
		output O_awe,
		input I_gwe2,
		output O_gwe2,
		input I_res,
		output O_res,
		input I_eret,
		output O_eret

    );
	reg [31:0] pc,ins,R1,R2,W1;
	reg [4:0] A2,ex;	
	reg gwe,bd,awe,gwe2,res,eret;
		reg dwe,E1,E2,M2;
		reg [1:0] slE2,slM,S,delay,slW;
		reg [2:0] L,gwe1;
		reg [3:0] aluop;
		
	 assign O_pc=pc;
	 assign O_ins=ins;
	 assign O_gwe=gwe;	 
	 assign O_R1=R1;
	 assign O_R2=R2;
	 assign O_W1=W1;
	 assign O_A2=A2;
	 
		assign O_E1=E1;
		assign O_E2=E2;
		assign O_M2=M2;
		assign O_dwe=dwe;
		assign O_gwe1=gwe1;
		assign O_slE2=slE2;
		assign O_slM=slM;
		assign O_slW=slW;
		assign O_S=S;
		assign O_L=L;
		assign O_aluop=aluop;
		assign O_delay=delay;
		
		assign O_ex=ex;
		assign O_bd=bd;
		assign O_awe=awe;
		assign O_gwe2=gwe2;
		assign O_res=res;
		assign O_eret=eret;
		
	
	initial begin
			pc<='h3000;
			ins<=0;
			gwe<=0;
			R1<=0;
			R2<=0;
			W1<=0;
			A2<=0;
		E1<=0;
		E2<=0;
		M2<=0;
		dwe<=0;
		gwe1<=0;
		slE2<=0;
		slM<=0;
		slW<=0;
		S<=0;
		L<=0;
		aluop<=0;
		delay<=0;
		
		ex<=0;
		bd<=0;
		awe<=0;
		gwe2<=0;
		res<=0;
		eret<=0;
	end
	 always @ (posedge clk) begin
		if(reset==1) begin
		   pc<='h3000;
			ins<=0;
			gwe<=0;
			R1<=0;
			R2<=0;
			W1<=0;
			A2<=0;
		E1<=0;
		E2<=0;
		M2<=0;
		dwe<=0;
		gwe1<=0;
		slE2<=0;
		slM<=0;
		slW<=0;
		S<=0;
		L<=0;
		aluop<=0;
		delay<=0;
		
		ex<=0;
		bd<=0;
		awe<=0;
		gwe2<=0;
		res<=1;
		eret<=0;
		end
		
		else if(lock==0)	begin
			pc<=I_pc;
			ins<=I_ins;
			gwe<=I_gwe;
			W1<=I_W1;
			A2<=I_A2;
			R1<=I_R1;
			R2<=I_R2;
		E1<=I_E1;
		E2<=I_E2;
		M2<=I_M2;
		dwe<=I_dwe;
		gwe1<=I_gwe1;
		slE2<=I_slE2;
		slM<=I_slM;
		slW<=I_slW;
		S<=I_S;
		L<=I_L;
		aluop<=I_aluop;
		delay<=I_delay;
		
		ex<=I_ex;
		bd<=I_bd;
		awe<=I_awe;
		gwe2<=I_gwe2;
		res<=I_res;
		eret<=I_eret;
		end
	 end


endmodule
