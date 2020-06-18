`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:18:56 12/06/2019 
// Design Name: 
// Module Name:    mips 
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
module mips(
    input clk,
    input reset,
    input interrupt,
    output [31:0] addr
    );
wire [31:0] cp_wd,cp_rd,dev_add,rd0,rd1;
wire we,hit0,hit1,iqr0,iqr1,iqr2,t_lock;
//------------------CPU
assign iqr2=interrupt;
CPU CPU (
    .reset(reset), 
    .clk(clk), 
    .ord(cp_rd), //cpu读出数据
    .hwint({3'b0,iqr2,iqr1,iqr0}), 
    .owd(cp_wd),//cpu写入数据 
    .oadd(dev_add), 
    .owe(we),
	 .hit0(hit0|hit1),
	 .cpu_add(addr),
	  .t_lock(t_lock)
    );
//---------------------------BREDGE	 
BRIDGE BRIDGE (
    .wd(cp_rd), 
    .add(dev_add), 
    .we(we), 
    .rd0(rd0), 
    .rd1(rd1), 
    .hit0(hit0), 
    .hit1(hit1), 
    .dev_rd(cp_wd)
    );
//----------------------------Timer
TC T0(
    .clk(clk), 
    .reset(reset), 
    .Addr(dev_add[31:2]), 
    .WE(hit0&(~t_lock)&we), 
    .Din(cp_rd), 
    .Dout(rd0), 
    .IRQ(iqr0)
    );
	 
TC T1 (
    .clk(clk), 
    .reset(reset), 
    .Addr(dev_add[31:2]), 
    .WE(hit1&(~t_lock)&we), 
    .Din(cp_rd), 
    .Dout(rd1), 
    .IRQ(iqr1)
    );

endmodule
