`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:20:30 12/06/2019 
// Design Name: 
// Module Name:    BRIDGE 
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
module BRIDGE(
	input [31:0] wd,
	input [31:0] add,
	input we,
	input [31:0] rd0,
	input [31:0] rd1,
	output  hit0,
	output hit1,
	output [31:0] dev_rd
    );
	 wire pd;
	assign pd=add[3:0]<='hb;
	assign hit0=pd&(add[31:4]=='h00007f0);
	assign hit1=pd&(add[31:4]=='h00007f1);
	assign dev_rd= hit0==1?rd0:
	            hit1==1?rd1:0;
	
	

endmodule
