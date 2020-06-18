`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:50:20 11/08/2019 
// Design Name: 
// Module Name:    grf 
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
module GRF(
	 input [31:0] pc,
    input [4:0] rs,
    input [4:0] rt,
    input [4:0] rd,
    input [31:0] wd,
    output [31:0] rd1,
    output [31:0] rd2,
    input reset,
	 input clk,
	 input we
    );
	 reg [31:0] grf[31:0];
	 integer i;
	 initial begin
		for(i=0;i<=31;i=i+1)
			grf[i]=0;
	 end
	 
	assign rd1=grf[rs];
	assign rd2=grf[rt];
	always@ (posedge clk)	begin
		if(we==1&&reset==0) begin
			grf[rd]<=wd;
			//$display("%d@%h: $%d <= %h", $time, pc, rd,wd);
			$display("@%h:$%d<=%h",pc,rd,wd);
		end
		if(reset==1)
			for(i=0;i<=31;i=i+1)
				grf[i]<=0;
	end

endmodule
