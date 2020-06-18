`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:12:45 11/24/2019 
// Design Name: 
// Module Name:    CONTROL 
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
module CONTROL(
    input [31:0] ins,
	 output gwe,
	 output [2:0] gwe1,
	 output gwe2,
	 output dwe,
	 output [1:0] slE2,
	 output [1:0] slM,
	 output [1:0] slW,
	 output [1:0] delay,
	 output D1,
	 output D2,
	 output E1,
	 output E2,
	 output M2,
	 output [2:0] L,
	 output [1:0] S,
	 output [3:0] aluop,
	 output slD,
	 output [1:0] slA2,
	 output [3:0] sl_pc,
	 output [4:0] ex,
	 output jump,
	 output awe,
	 output eret
    );
	`include "cite.v"
	wire isR;
	wire lb,lbu,lhu,lw,sb,sh,sw;
	wire add,addu,sub,subu,and1,or1,xor1,nor1;
	wire sll,srl,sra,sllv,srlv,srav;
	wire addi,addiu,andi,ori,xori,lui;
	wire slti,sltiu;
	wire beq,bne,blez,bgtz,bltz,bgez;
	wire j,jal,jalr,jr;
	wire mfhi,mflo,mthi,mtlo,mult,multu,div,divu;
	wire mfc0,mtc0,pd0,pd1,pd2;
	//eret在上方定义
	assign isR=`op=='b000000;
	assign lw=`op=='b100011;	
	assign lhu=`op=='b100101;
	assign lh=`op=='b100001;
	assign lb=`op=='b100000;
	assign lbu=`op=='b100100;
	assign sb=`op=='b101000;
	assign sh=`op=='b101001;
	assign sw=`op=='b101011;	

   assign beq=`op=='b000100;
	assign bne=`op=='b000101;
	assign blez=`op=='b000110;
	assign bgtz=`op=='b000111;
	assign bltz=(`op=='b000001&&`rt=='b00000);
	assign bgez=(`op=='b000001&&`rt=='b00001);	
//-----------------------------------0	
	assign add=(isR&&`func=='b100000);
	assign addu=(isR&&`func=='b100001);
	assign sub=(isR&&`func=='b100010);
	assign subu=(isR&&`func=='b100011);
	assign and1=(isR&&`func=='b100100);
	assign or1=(isR&&`func=='b100101);
	assign xor1=(isR&&`func=='b100110);
	assign nor1=(isR&&`func=='b100111);
	
	assign sll=(isR&&`func=='b000000);
	assign srl=(isR&&`func=='b000010);
	assign sra=(isR&&`func=='b000011);
	assign sllv=(isR&&`func=='b000100);
	assign srlv=(isR&&`func=='b000110);
	assign srav=(isR&&`func=='b000111);
	
	assign pd0=add|addu|sub|subu|and1|or1|xor1|nor1|sll|srl|sra|sllv|srlv|srav;
//---------------------------------------	1
	assign slt=(isR&&`func=='b101010);
	assign sltu=(isR&&`func=='b101011);
	
	assign addi=`op=='b001000;
	assign addiu=`op=='b001001;
	assign andi=`op=='b001100;
	assign ori=`op=='b001101;
	assign xori=`op=='b001110;
	assign lui=`op=='b001111;
	
	
	assign slti=`op=='b001010;
	assign sltiu=`op=='b001011;
		 
	 assign jal=`op=='b000011;
	 assign jr=(isR&&`func=='b001000);
	 assign j= `op=='b000010; 
	 assign jalr=(isR&&`func=='b001001);
	 
	 assign  pd1=slt|sltu|addi|addiu|andi|ori|xori|lui|slti|sltiu|jal|jr|j|jalr;
//-------------------------------2	 
	 assign mfhi=(isR&&`func=='b010000);
	 assign mflo =(isR&&`func=='b010010);
	 assign mthi =(isR&&`func=='b010001);
	 assign mtlo =(isR&&`func=='b010011);
	 assign mult =(isR&&`func=='b011000);
	 assign multu=(isR&&`func=='b011001);
	 assign div=(isR&&`func=='b011010);
	 assign divu=(isR&&`func=='b011011);
	 
	 assign mfc0=(`op=='b010000&&`rs=='b00000);
	 assign mtc0=(`op=='b010000&&`rs=='b00100);
	 assign eret=(`op=='b010000&&`func=='b011000);
	 
	 assign pd2=mfhi|mflo|mthi|mtlo|mult|multu|div|divu|mfc0|mtc0|eret;
//-----------------------控制信号	 

						
	assign S=sh?1:
				sb?2:
				sw?3:0;
	assign L=lhu?1:
				lh?2:
				lbu?3:
				lb?4:
				lw?5:0;
	assign isL=lw|lh|lhu|lb|lbu;
	assign isS=sw|sb|sh;
	assign isB=beq|bne|blez|bgtz|bltz|bgez;
	
	assign delay=(add|addu|addi|addiu|sub|subu|and1|andi|or1|ori|xor1|xori|nor1|sll|srl|sra|sllv|srlv|srav|mfhi|mflo|slti|sltiu|slt|sltu)?2:
	              (isL|mfc0)?3:0;
	assign D1=isB|jr|jalr|mult|multu|div|divu|mthi|mtlo;
	assign D2=beq|bne|mult|multu|div|divu;
	assign E1=(isB|j|jal|jalr|jr|mfhi|mflo|sll|srl|sra)?0:1;//sll为rt移动
	assign E2=add|addu|sub|subu|and1|or1|xor1|nor1|sll|srl|sra|sllv|srlv|srav|slt|sltu;
	assign M2=isS|mtc0;
	
	assign gwe=(isB|sb|sh|sw|mthi|mtlo|mult|multu|div|divu|jr|j|eret|mtc0)|(ex==10)?0:
					jal?1:
					isR?(`rd==0?0:1):
					`rt==0?0:1;
	assign dwe=sb|sh|sw;
	assign gwe1=mult?1:
					multu?2:
					div?3:
					divu?4:
					mthi?5:
					mtlo?6:
					(mflo|mfhi)?7:0;
	assign gwe2=mtc0;
	
	assign slE2=(ori|xori|andi)?0:
					 (isL|isS|slti|sltiu|addi|addiu)?1:2;
	assign slM= mflo?3:
					mfhi?2:
					(jal|jalr|lui)?1:0;
	assign slW = (isL)?1:
					  mfc0?2:0;
	assign aluop=(subu|sub)?1:
					 (or1|ori)?2:
					 (and1|andi)?3:
					 (xor1|xori)?4:
					 nor1?5:
					 sll?6:
					 sllv?7:
					 srl?8:
					 srlv?9:
					 sra?10:
					 srav?11:
					 (slt|slti)?12:
					 (sltu|sltiu)?13:0;
	assign slA2=isR?0:
				 jal?2:1;
	assign slD=(jal|jalr)?0:1;
	
	assign sl_pc=  beq?1:
						bltz?2:
						bgtz?3:
						blez?4:
						bgez?5:
						bne?6:
						(jal|j)?7:
						(jr|jalr)?8:
						 eret?9:0;
										
	assign ex=(pd0|pd1|pd2|isL|isS|isB)?0:10;
	assign jump=(isB|j|jr|jal|jalr);
	assign awe=add|addi|sub;
endmodule
