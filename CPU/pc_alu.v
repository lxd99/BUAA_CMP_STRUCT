`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:31:16 11/09/2019 
// Design Name: 
// Module Name:    pc_alu 
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
module pc_alu(
    input [31:0] in,
	 input [31:0] in1,
	 output [31:0] adder,
	 output [31:0] adder1,
    output [31:0] nadder,
    output [31:0] nadder1,
	 input [15:0] imm,
    input [25:0] index
    );
	 wire [31:0] s_shift_imm;
	 assign s_shift_imm={{14{imm[15]}},imm[15:0],1'b0,1'b0};
	 assign adder=in+4;
	 assign adder1=in+8;
	 assign nadder=in1+4+s_shift_imm;//beq
	 assign nadder1={in1[31:28],index,2'b00};//j»òjal

endmodule
