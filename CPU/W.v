`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:12:07 11/16/2019 
// Design Name: 
// Module Name:    W 
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
module W(
	 input clk,
	 input reset,
	 input [31:0] I_ins,
	 output [31:0] O_ins,
	 input [31:0] I_pc,
	 output [31:0] O_pc,
	 input I_gwe,
	 output O_gwe,
	 input [31:0] I_W1,
    output [31:0] O_W1,
	 input [4:0] I_A2,
	 output [4:0] O_A2
    );
		reg [31:0] pc,W1,ins;
		reg [4:0] A2;
		reg gwe;
		assign O_ins=ins;
		assign O_W1=W1;
		assign O_pc=pc;
		assign O_gwe=gwe;
		assign O_A2=A2;
	 initial begin
		pc<='h3000;
		ins<=0;
		gwe<=0;
		W1<=0;
		A2<=0;
	 end
	 always @ (posedge clk) begin
		if(reset==1) begin
			pc<='h3000;
			ins<=0;
			gwe<=0;
			W1<=0;
			A2<=0;
		end
		else begin
			ins<=I_ins;
			pc<=I_pc;
			gwe<=I_gwe;
			W1<= I_W1;
			A2<=I_A2;
		end
	end

endmodule
