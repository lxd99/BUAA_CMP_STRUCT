`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:19:49 11/08/2019 
// Design Name: 
// Module Name:    IM 
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
module IM(
    input [31:0] add,
    output [31:0] ins,
	 output [4:0] ex
    );
	reg [31:0]im_reg [0:4095];
	integer i;
	initial begin
		for(i=0;i<4096;i=i+1)
			im_reg[i]=0;
			
		$readmemh("code.txt",im_reg);
		$readmemh("code_handler.txt",im_reg,1120,2047);
	end
	wire [31:0] in;
	assign in=(add-'h3000)/4;
	assign ex=(add[1:0]!=0)|(add>'h4fff||add<'h3000)?4:0;
	assign ins= ex==4?0:im_reg[in];
endmodule
