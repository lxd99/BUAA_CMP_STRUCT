`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:24:38 11/24/2019 
// Design Name: 
// Module Name:    HL_ALU 
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
module HL_ALU(
    input [31:0] A,
    input [31:0] B,
    output [31:0] O_hi,
    output [31:0] O_lo,
	 input [2:0] aluop,
	 output [3:0] O_busy,
	 input clk,
	 input reset,
	 input lock
	);
	reg [31:0] hi,lo;
	reg [3:0] busy;
	assign O_hi=hi;
	assign O_lo=lo;
	assign O_busy=busy;
	initial begin
		hi<=0;
		lo<=0;
		busy<=0;
	end
	always @(posedge clk) begin
		if(reset==1) begin
			hi<=0;
			lo<=0;
			busy<=0;
		end
		else if(lock==0) begin
				case(aluop)
					1:begin
						{hi,lo}<={{32{A[31]}},A}*{{32{B[31]}},B};
						busy<=5;
					end
					2:begin
						{hi,lo}<={32'b0,A}*{32'b0,B};
						busy<=5;
						end
					3:begin
						hi<=$signed(A)%$signed(B);
						lo<=$signed(A)/$signed(B);
						busy<=10;
					 end
					4: begin
						hi<=A%B;
						lo<=A/B;
						busy<=10;
					end
					5:begin
						hi<=A;
					end
					6:begin
						lo<=A;
					end
					default:
						busy<= busy==0?0:busy-1;
				endcase
			 end
	end	 
endmodule
