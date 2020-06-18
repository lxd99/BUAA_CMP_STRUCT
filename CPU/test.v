`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:17:13 12/07/2019
// Design Name:   mips
// Module Name:   E:/university/computer_struct/P0-P/P7/CPU/test.v
// Project Name:  CPU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mips
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test;

	// Inputs
	reg clk;
	reg reset;
	reg interrupt;

	// Outputs
	wire [31:0] addr;

	// Instantiate the Unit Under Test (UUT)
	mips uut (
		.clk(clk), 
		.reset(reset), 
		.interrupt(interrupt), 
		.addr(addr)
	);
   reg busy,pd;
	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;
		interrupt = 0;
      busy=0;
		pd=0;
		// Wait 100 ns for global reset to finish
		#10;
      reset=0;  
		// Add stimulus here

	end
	always #2 clk=~clk;
      
endmodule

