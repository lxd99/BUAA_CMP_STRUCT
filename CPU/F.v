`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:26:30 11/18/2019 
// Design Name: 
// Module Name:    F 
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
module F(
    input  [4:0] I_A2,
    output [4:0] O_A2,
    input [31:0] I_W1,
    output [31:0] O_W1,
    input I_gwe,
    output O_gwe,
	 input clk,
	 input reset
    );
	 reg [31:0] W1;
	 reg [4:0] A2;
	 reg gwe;
	 assign O_W1=W1;
	 assign O_gwe=gwe;
	 assign O_A2=A2; 
	initial begin
		W1<=0;
		A2<=0;
		gwe<=0;
	end
	always @(posedge clk) begin
		if(reset==1) begin
			W1<=0;
			A2<=0;
			gwe<=0;
		end
		else begin
			W1<=I_W1;
			A2<=I_A2;
			gwe<=I_gwe;
		end
	end


endmodule
