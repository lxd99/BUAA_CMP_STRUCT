`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:11:29 11/08/2019 
// Design Name: 
// Module Name:    PC 
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
module PC(
	 input lock,
    input [31:0] pc_nex,
    output[31:0] pc_out,
	 input reset,
	 input clk,
	 input handle
    );
	 reg [31:0] pc;
	 initial begin
		pc<='h3000;
	 end
	 always @(posedge clk) begin
		if(reset==1)
			pc<='h3000;
		else if(handle) 
			pc<='h4180;

		else  if(lock==0)
			pc<= pc_nex;
	end
	assign pc_out=pc;
endmodule
