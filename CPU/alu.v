`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:25:23 11/08/2019 
// Design Name: 
// Module Name:    alu 
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
module alu(
    input [31:0] A,
    input [31:0] B,
	 input [4:0] s,
    input [3:0] op,
    output reg [31:0] result,
	  input awe,
	  input [2:0] L,
	  input [1:0] S,
	 output [4:0] aluex
    );
	reg [30:0] mid;
	reg pd0;
	wire pd1;
	always @(*) begin
    case(op)
	 0: begin
		{pd0,result}<={A[31],A}+{B[31],B};
	 end
	 1: begin
		{pd0,result}<={A[31],A}-{B[31],B};
	 end
	 2: result<=A|B;
	 3: result<=A&B;
	 4: result<=A^B;
	 5: result <= ~(A|B);
	 6: result <= (B<<s);
	 7: result <= (B<<(A[4:0]));
	 8: result <= (B>>s);
	 9: result <= (B>>(A[4:0]));
	 10: result <= ($signed(B)>>>s);
	 11: result <= ($signed(B)>>>A[4:0]);
	 12: result <=$signed(A)<$signed(B)?1:0;
	 13:result <= A<B?1:0;
	endcase
	end
	assign pd1=pd0^result[31];
  assign aluex= L!=0?(pd1?4:0):
                S!=0?(pd1?5:0):
					 awe!=0?(pd1?12:0):0;
endmodule
