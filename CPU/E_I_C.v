`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:57:39 12/07/2019 
// Design Name: 
// Module Name:    E_I_C 
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
`define im SR[15:10]
`define exl SR[1]
`define ie  SR[0] 
module E_I_C(
	input[4:0] M_ex,
	input hit0,
	input [2:0] L,
	input [1:0] S,
	input [31:0] add,
	
	input [5:0] hwint,//ÖÐ¶ÏÐÅºÅ
	input [31:0] SR,
	output [4:0] fex,//
	output cp0_we
    );
  wire hit1;
  wire L_ad0,S_ad0;
  wire L_ad1,S_ad1;
  wire T_Lhb,T_Shb;
  wire T_t,intq;
  
  assign  hit1= add<='h2fff;
  assign  L_ad0= L&&(!hit0)&&(!hit1);
  assign  S_ad0= S&&(!hit0)&&(!hit1);
  assign  L_ad1= (L==5&&add[1:0]!=0)||((L==1||L==2)&&add[0]!=0);
  assign  S_ad1= (S==3&&add[1:0]!=0)||(S==1&&add[0]!=0);
  assign T_Lhb= hit0&&(L==1||L==2||L==3||L==4);
  assign T_Shb= hit0&&(S==1||S==2);
  assign T_t= S==3&&hit0&&add[3:2]==2;
  assign intq= |(hwint[5:0]&`im)&`ie&!`exl; 
  assign fex= intq?0:
             (L_ad0|L_ad1|T_Lhb)?4:
				 (S_ad0|S_ad1|T_Shb|T_t)?5:M_ex;
  assign cp0_we= intq?1:
                 fex!=0?1:0;
endmodule
