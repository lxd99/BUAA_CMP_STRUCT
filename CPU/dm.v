`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:53:47 11/08/2019 
// Design Name: 
// Module Name:    dm 
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
module DM(
	 input [31:0] pc,
    input [31:0] add,
    input [31:0] mfw,
    input mw,
    input mr,
    output [31:0] rd,
    input reset,
    input clk,
	 input [2:0] L,
	 input [1:0] S
    );
	 reg [31:0] dm[0:4095];
	 integer i;
	 initial begin
		for(i=0;i<4096;i=i+1)
			dm[i]=0;
	 end

//写出拓展----------------------------------------
	 reg [31:0] b[3:0],h[1:0],b1[3:0],h1[1:0];
	 wire [31:0] mrd;
	 
	 always @(*) begin
	  b[0]<= {24'b0,mrd[7:0]};
	  b[1]<= {24'b0,mrd[15:8]};
	  b[2]<= {24'b0,mrd[23:16]};
	  b[3]<= {24'b0,mrd[31:24]};
	 
	  b1[0]<={{24{mrd[7]}},mrd[7:0]};
	  b1[1]<={{24{mrd[15]}},mrd[15:8]};
	  b1[2]<={{24{mrd[23]}},mrd[23:16]};
	  b1[3]<={{24{mrd[31]}},mrd[31:24]};
	 
	  h[0]<={16'b0,mrd[15:0]};
	  h[1]<={16'b0,mrd[31:16]};
	  h1[0]<={{16{mrd[15]}},mrd[15:0]};
	  h1[1]<={{16{mrd[31]}},mrd[31:16]};
	 end
	 
	 assign mrd=dm[add[31:2]];
	 assign rd= L==5?mrd:
					L==1?h[add[1]]:
					L==2?h1[add[1]]:
					L==3?b[add[1:0]]:
					L==4?b1[add[1:0]]:mrd;


//写入拓展	---------------------------------
   wire[31:0] fw;
	reg [31:0] sb[3:0],sh[1:0];
	always @(*) begin
	 sb[0]<={mrd[31:8],mfw[7:0]};
	 sb[1]<={mrd[31:16],mfw[7:0],mrd[7:0]};
	 sb[2]<={mrd[31:24],mfw[7:0],mrd[15:0]};
	 sb[3]<={mfw[7:0],mrd[23:0]};
	
	 sh[0]<={mrd[31:16],mfw[15:0]};
	 sh[1]<={mfw[15:0],mrd[15:0]};
	end
	assign fw= S==3?mfw:
				  S==1?sh[add[1]]:
				  S==2?sb[add[1:0]]:mfw;
															
 	 always @(posedge clk)begin
		if(mw==1&&reset==0)begin
			dm[add/4]<= fw;
			//$display("%d@%h: *%h <= %h", $time, pc, {add[31:2],2'b0},fw);
			$display("@%h:*%h<=%h",pc,{add[31:2],2'b0},fw);
		end
		if(reset==1)
	   for(i=0;i<4096;i=i+1)
			dm[i]<=0;
	end
endmodule
