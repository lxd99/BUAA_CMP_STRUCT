`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:46:53 12/06/2019 
// Design Name: 
// Module Name:    CP0 
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
`define SR mem[12]
`define Caus mem[13]
`define EPC mem[14]
`define PRId
`define bd `Caus[31]
`define hwint `Caus[15:10]
`define ex `Caus[6:2]
`define exl  `SR[1]
module CP0(
    input clk,//general
	 input reset,
	 
    input [4:0] add,//∂¡–¥
    input [31:0] wd,
    output [31:0] rd,
	 input we,
	 
	 input [31:0] I_EPC,//÷–∂œ/“Ï≥£
	 output [31:0] O_EPC,
	 output [31:0] O_SR,
	 input we1,
	 input bd,
	 input [4:0] ex,
	 input [5:0] hwint,
	 
	 input we2//eret
    );
	reg [31:0] mem [15:12];
	assign rd=mem[add]; 
	assign O_EPC=`EPC;
	assign O_SR=`SR;
	
	integer i; 
	initial begin
		for(i=12;i<=15;i=i+1) 
			mem[i]<=0;
	end
	
always @(posedge clk) begin
	if(reset==1) 
		for(i=12;i<=15;i=i+1) 
			mem[i]<=0;
	else begin
		
		if(we1==1) begin//“Ï≥£/÷–∂œ
			`bd<=bd;
			`hwint<=hwint;
			`ex<=ex;			
			`exl<=1'b1;
			`EPC<= bd==1?{I_EPC[31:2],2'b0}-32'b100:{I_EPC[31:2],2'b0};
			$display("@%h:$(%d %h)",I_EPC,bd,ex);
		end	
      else if(we2==1) begin//eret
        `exl<=1'b0;
		  `hwint<=hwint;
		end		
		else if(we==1) begin//∂¡–¥
			 mem[add]<=wd;
			 `hwint<=hwint;
			 $display("@%h:$cp0_%d<=%h",I_EPC,add,wd);
		end
	end

end

endmodule
