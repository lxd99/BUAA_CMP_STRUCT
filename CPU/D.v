`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:56:18 11/16/2019 
// Design Name: 
// Module Name:    D 
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
module D(
		input lock,
		input[31:0] I_pc,
		output [31:0] O_pc,
		input [31:0] I_ins,
		output [31:0] O_ins,
		input clk,
		input reset,
		input [31:0] I_W1,
		output [31:0] O_W1,
		input I_gwe,
		output O_gwe,
		input [4:0] I_A2,
		output [4:0] O_A2,
		
		input I_D1,
		output O_D1,
		input I_D2,
		output O_D2,
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
		input [3:0] I_slpc,
		output [3:0] O_slpc,
		
		input [4:0] I_ex,
		output [4:0] O_ex,
		input I_bd,
		output O_bd,
		input I_jump,
		output O_jump,
		input I_awe,
		output O_awe,
		input I_gwe2,
		output O_gwe2,
		input I_res,
		output O_res,
		input I_eret,
		output O_eret
    );
		reg [31:0] W1,pc,ins;
		reg [4:0] A2,ex;
		reg gwe,bd,jump,awe,gwe2,res;
		
		reg dwe,eret,D1,D2,E1,E2,M2;
		reg [1:0] slE2,slM,S;
		reg [2:0] L,gwe1;
		reg [3:0] slpc,aluop;
		reg [1:0] delay,slW;


		
		
		assign O_W1=W1;
		assign O_pc=pc;
		assign O_ins=ins;
		assign O_gwe=gwe;
		assign O_A2=A2;
		
		assign O_D1=D1;
		assign O_D2=D2;
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
		assign O_slpc=slpc;
		
		assign O_ex=ex;
		assign O_bd=bd;
		assign O_jump=jump;
		assign O_awe=awe;
		assign O_gwe2=gwe2;
		assign O_res=res;
		assign O_eret=eret;
	 initial begin
		pc<='h3000;
		ins<=0;
		W1<=0;
		A2<=0;
		gwe<=0;
		
		D1<=0;
		D2<=0;
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
		slpc<=0;
		
		ex<=0;
		bd<=0;
		awe<=0;
		jump<=0;
		gwe2<=0;
		res<=0;
		eret<=0;
	 end
	 always @(posedge clk) begin
		if(reset==1) begin
		   pc<='h3000;
			W1<=0;
			A2<=0;
			ins<=0;
			gwe<=0;
			
		D1<=0;
		D2<=0;
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
		slpc<=0;
		
		ex<=0;
		bd<=0;
		jump<=0;
		awe<=0;
		gwe2<=0;
		res<=1;
		eret<=0;
		end
		
		else if(lock==0) begin
		W1<=I_W1;
		A2<=I_A2;		
		pc<=I_pc;
		ins<=I_ins;
		gwe<=I_gwe;
		
		D1<=I_D1;
		D2<=I_D2;
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
		slpc<=I_slpc;
		
		ex<=I_ex;
		bd<=I_bd;
		jump<=I_jump;
		awe<=I_awe;
		gwe2<=I_gwe2;
		res<=I_res;
		eret<=I_eret;
		end
	end


endmodule
