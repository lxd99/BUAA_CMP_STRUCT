/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "E:/university/computer_struct/P0-P/P7/CPU/EPC.v";
static int ng1[] = {14, 0};
static int ng2[] = {12, 0};
static int ng3[] = {15, 0};
static int ng4[] = {0, 0};
static int ng5[] = {1, 0};
static int ng6[] = {13, 0};
static int ng7[] = {31, 0};
static int ng8[] = {10, 0};
static int ng9[] = {6, 0};
static int ng10[] = {2, 0};
static unsigned int ng11[] = {1U, 0U};
static unsigned int ng12[] = {0U, 0U};
static unsigned int ng13[] = {4U, 0U};
static const char *ng14 = "@%h:$(%d %h)";
static const char *ng15 = "@%h:$cp0_%d<=%h";



static void Cont_49_0(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 4608U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3528);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3528);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 1368U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t13, 5, 2);
    t12 = (t0 + 6048);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t12, 0, 31);
    t18 = (t0 + 5920);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_50_1(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 4856U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3528);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3528);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t0 + 6112);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t13, 0, 31);
    t18 = (t0 + 5936);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_51_2(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 5104U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3528);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3528);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng2)));
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t0 + 6176);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t13, 0, 31);
    t18 = (t0 + 5952);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Initial_54_3(char *t0)
{
    char t5[8];
    char t14[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    int t34;
    int t35;

LAB0:    xsi_set_current_line(54, ng0);

LAB2:    xsi_set_current_line(55, ng0);
    xsi_set_current_line(55, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 3688);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 3688);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng3)));
    memset(t5, 0, 8);
    xsi_vlog_signed_leq(t5, 32, t3, 32, t4, 32);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    xsi_set_current_line(56, ng0);
    t12 = ((char*)((ng4)));
    t13 = (t0 + 3528);
    t16 = (t0 + 3528);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 3528);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 3688);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlog_generic_convert_array_indices(t14, t15, t18, t21, 2, 1, t24, 32, 1);
    t25 = (t14 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(55, ng0);
    t1 = (t0 + 3688);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng5)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 3688);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB3;

LAB6:    t32 = *((unsigned int *)t14);
    t33 = *((unsigned int *)t15);
    t34 = (t32 - t33);
    t35 = (t34 + 1);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, *((unsigned int *)t15), t35, 0LL);
    goto LAB7;

}

static void Always_59_4(char *t0)
{
    char t6[8];
    char t30[8];
    char t31[8];
    char t45[8];
    char t56[8];
    char t68[8];
    char t73[8];
    char t74[8];
    char t81[8];
    char t82[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    int t39;
    char *t40;
    int t41;
    int t42;
    int t43;
    int t44;
    char *t46;
    char *t47;
    unsigned int t48;
    char *t49;
    unsigned int t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    int t55;
    int t57;
    int t58;
    int t59;
    int t60;
    int t61;
    int t62;
    int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    unsigned int t87;
    char *t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;

LAB0:    t1 = (t0 + 5600U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 5968);
    *((int *)t2) = 1;
    t3 = (t0 + 5632);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(59, ng0);

LAB5:    xsi_set_current_line(60, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng5)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(63, ng0);

LAB18:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 2488U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB22;

LAB19:    if (t18 != 0)
        goto LAB21;

LAB20:    *((unsigned int *)t6) = 1;

LAB22:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB23;

LAB24:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 3128U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB57;

LAB54:    if (t18 != 0)
        goto LAB56;

LAB55:    *((unsigned int *)t6) = 1;

LAB57:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB58;

LAB59:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB69;

LAB66:    if (t18 != 0)
        goto LAB68;

LAB67:    *((unsigned int *)t6) = 1;

LAB69:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB70;

LAB71:
LAB72:
LAB60:
LAB25:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(61, ng0);
    xsi_set_current_line(61, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 3688);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 32);

LAB13:    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_leq(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB14;

LAB15:    goto LAB12;

LAB14:    xsi_set_current_line(62, ng0);
    t8 = ((char*)((ng4)));
    t21 = (t0 + 3528);
    t22 = (t0 + 3528);
    t28 = (t22 + 72U);
    t29 = *((char **)t28);
    t32 = (t0 + 3528);
    t33 = (t32 + 64U);
    t34 = *((char **)t33);
    t35 = (t0 + 3688);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    xsi_vlog_generic_convert_array_indices(t30, t31, t29, t34, 2, 1, t37, 32, 1);
    t38 = (t30 + 4);
    t14 = *((unsigned int *)t38);
    t39 = (!(t14));
    t40 = (t31 + 4);
    t15 = *((unsigned int *)t40);
    t41 = (!(t15));
    t42 = (t39 && t41);
    if (t42 == 1)
        goto LAB16;

LAB17:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 3688);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB13;

LAB16:    t16 = *((unsigned int *)t30);
    t17 = *((unsigned int *)t31);
    t43 = (t16 - t17);
    t44 = (t43 + 1);
    xsi_vlogvar_wait_assign_value(t21, t8, 0, *((unsigned int *)t31), t44, 0LL);
    goto LAB17;

LAB21:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB22;

LAB23:    xsi_set_current_line(65, ng0);

LAB26:    xsi_set_current_line(66, ng0);
    t21 = (t0 + 2648U);
    t22 = *((char **)t21);
    t21 = (t0 + 3528);
    t28 = (t0 + 3528);
    t29 = (t28 + 72U);
    t32 = *((char **)t29);
    t33 = (t0 + 3528);
    t34 = (t33 + 64U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng6)));
    xsi_vlog_generic_convert_array_indices(t30, t31, t32, t35, 2, 1, t36, 32, 1);
    t37 = (t0 + 3528);
    t38 = (t37 + 72U);
    t40 = *((char **)t38);
    t46 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t45, t40, 2, t46, 32, 1);
    t47 = (t30 + 4);
    t48 = *((unsigned int *)t47);
    t39 = (!(t48));
    t49 = (t31 + 4);
    t50 = *((unsigned int *)t49);
    t41 = (!(t50));
    t42 = (t39 && t41);
    t51 = (t45 + 4);
    t52 = *((unsigned int *)t51);
    t43 = (!(t52));
    t44 = (t42 && t43);
    if (t44 == 1)
        goto LAB27;

LAB28:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 2968U);
    t3 = *((char **)t2);
    t2 = (t0 + 3528);
    t4 = (t0 + 3528);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t8 = (t0 + 3528);
    t21 = (t8 + 64U);
    t22 = *((char **)t21);
    t28 = ((char*)((ng6)));
    xsi_vlog_generic_convert_array_indices(t6, t30, t7, t22, 2, 1, t28, 32, 1);
    t29 = (t0 + 3528);
    t32 = (t29 + 72U);
    t33 = *((char **)t32);
    t34 = ((char*)((ng3)));
    t35 = ((char*)((ng8)));
    xsi_vlog_convert_partindices(t31, t45, t56, ((int*)(t33)), 2, t34, 32, 1, t35, 32, 1);
    t36 = (t6 + 4);
    t9 = *((unsigned int *)t36);
    t39 = (!(t9));
    t37 = (t30 + 4);
    t10 = *((unsigned int *)t37);
    t41 = (!(t10));
    t42 = (t39 && t41);
    t38 = (t31 + 4);
    t11 = *((unsigned int *)t38);
    t43 = (!(t11));
    t44 = (t42 && t43);
    t40 = (t45 + 4);
    t12 = *((unsigned int *)t40);
    t55 = (!(t12));
    t57 = (t44 && t55);
    t46 = (t56 + 4);
    t13 = *((unsigned int *)t46);
    t58 = (!(t13));
    t59 = (t57 && t58);
    if (t59 == 1)
        goto LAB29;

LAB30:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 2808U);
    t3 = *((char **)t2);
    t2 = (t0 + 3528);
    t4 = (t0 + 3528);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t8 = (t0 + 3528);
    t21 = (t8 + 64U);
    t22 = *((char **)t21);
    t28 = ((char*)((ng6)));
    xsi_vlog_generic_convert_array_indices(t6, t30, t7, t22, 2, 1, t28, 32, 1);
    t29 = (t0 + 3528);
    t32 = (t29 + 72U);
    t33 = *((char **)t32);
    t34 = ((char*)((ng9)));
    t35 = ((char*)((ng10)));
    xsi_vlog_convert_partindices(t31, t45, t56, ((int*)(t33)), 2, t34, 32, 1, t35, 32, 1);
    t36 = (t6 + 4);
    t9 = *((unsigned int *)t36);
    t39 = (!(t9));
    t37 = (t30 + 4);
    t10 = *((unsigned int *)t37);
    t41 = (!(t10));
    t42 = (t39 && t41);
    t38 = (t31 + 4);
    t11 = *((unsigned int *)t38);
    t43 = (!(t11));
    t44 = (t42 && t43);
    t40 = (t45 + 4);
    t12 = *((unsigned int *)t40);
    t55 = (!(t12));
    t57 = (t44 && t55);
    t46 = (t56 + 4);
    t13 = *((unsigned int *)t46);
    t58 = (!(t13));
    t59 = (t57 && t58);
    if (t59 == 1)
        goto LAB31;

LAB32:    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 3528);
    t4 = (t0 + 3528);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t8 = (t0 + 3528);
    t21 = (t8 + 64U);
    t22 = *((char **)t21);
    t28 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t6, t30, t7, t22, 2, 1, t28, 32, 1);
    t29 = (t0 + 3528);
    t32 = (t29 + 72U);
    t33 = *((char **)t32);
    t34 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t31, t33, 2, t34, 32, 1);
    t35 = (t6 + 4);
    t9 = *((unsigned int *)t35);
    t39 = (!(t9));
    t36 = (t30 + 4);
    t10 = *((unsigned int *)t36);
    t41 = (!(t10));
    t42 = (t39 && t41);
    t37 = (t31 + 4);
    t11 = *((unsigned int *)t37);
    t43 = (!(t11));
    t44 = (t42 && t43);
    if (t44 == 1)
        goto LAB33;

LAB34:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 2648U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t31, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB38;

LAB35:    if (t18 != 0)
        goto LAB37;

LAB36:    *((unsigned int *)t31) = 1;

LAB38:    memset(t30, 0, 8);
    t8 = (t31 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t31);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t8) != 0)
        goto LAB41;

LAB42:    t22 = (t30 + 4);
    t48 = *((unsigned int *)t30);
    t50 = *((unsigned int *)t22);
    t52 = (t48 || t50);
    if (t52 > 0)
        goto LAB43;

LAB44:    t69 = *((unsigned int *)t30);
    t70 = (~(t69));
    t71 = *((unsigned int *)t22);
    t72 = (t70 || t71);
    if (t72 > 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t22) > 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t30) > 0)
        goto LAB49;

LAB50:    memcpy(t6, t73, 8);

LAB51:    t40 = (t0 + 3528);
    t46 = (t0 + 3528);
    t47 = (t46 + 72U);
    t49 = *((char **)t47);
    t51 = (t0 + 3528);
    t83 = (t51 + 64U);
    t84 = *((char **)t83);
    t85 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t81, t82, t49, t84, 2, 1, t85, 32, 1);
    t86 = (t81 + 4);
    t87 = *((unsigned int *)t86);
    t39 = (!(t87));
    t88 = (t82 + 4);
    t89 = *((unsigned int *)t88);
    t41 = (!(t89));
    t42 = (t39 && t41);
    if (t42 == 1)
        goto LAB52;

LAB53:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t0 + 2648U);
    t4 = *((char **)t2);
    t2 = (t0 + 2808U);
    t5 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng14, 4, t0, (char)118, t3, 32, (char)118, t4, 1, (char)118, t5, 5);
    goto LAB25;

LAB27:    t53 = *((unsigned int *)t31);
    t54 = *((unsigned int *)t45);
    t55 = (t53 + t54);
    xsi_vlogvar_wait_assign_value(t21, t22, 0, t55, 1, 0LL);
    goto LAB28;

LAB29:    t14 = *((unsigned int *)t56);
    t60 = (t14 + 0);
    t15 = *((unsigned int *)t30);
    t16 = *((unsigned int *)t45);
    t61 = (t15 + t16);
    t17 = *((unsigned int *)t31);
    t18 = *((unsigned int *)t45);
    t62 = (t17 - t18);
    t63 = (t62 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, t60, t61, t63, 0LL);
    goto LAB30;

LAB31:    t14 = *((unsigned int *)t56);
    t60 = (t14 + 0);
    t15 = *((unsigned int *)t30);
    t16 = *((unsigned int *)t45);
    t61 = (t15 + t16);
    t17 = *((unsigned int *)t31);
    t18 = *((unsigned int *)t45);
    t62 = (t17 - t18);
    t63 = (t62 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, t60, t61, t63, 0LL);
    goto LAB32;

LAB33:    t12 = *((unsigned int *)t30);
    t13 = *((unsigned int *)t31);
    t55 = (t12 + t13);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, t55, 1, 0LL);
    goto LAB34;

LAB37:    t7 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB38;

LAB39:    *((unsigned int *)t30) = 1;
    goto LAB42;

LAB41:    t21 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB42;

LAB43:    t28 = ((char*)((ng12)));
    t29 = (t0 + 2008U);
    t32 = *((char **)t29);
    memset(t56, 0, 8);
    t29 = (t56 + 4);
    t33 = (t32 + 4);
    t53 = *((unsigned int *)t32);
    t54 = (t53 >> 2);
    *((unsigned int *)t56) = t54;
    t64 = *((unsigned int *)t33);
    t65 = (t64 >> 2);
    *((unsigned int *)t29) = t65;
    t66 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t66 & 1073741823U);
    t67 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t67 & 1073741823U);
    xsi_vlogtype_concat(t45, 32, 32, 2U, t56, 30, t28, 2);
    t34 = ((char*)((ng13)));
    memset(t68, 0, 8);
    xsi_vlog_unsigned_minus(t68, 32, t45, 32, t34, 32);
    goto LAB44;

LAB45:    t35 = ((char*)((ng12)));
    t36 = (t0 + 2008U);
    t37 = *((char **)t36);
    memset(t74, 0, 8);
    t36 = (t74 + 4);
    t38 = (t37 + 4);
    t75 = *((unsigned int *)t37);
    t76 = (t75 >> 2);
    *((unsigned int *)t74) = t76;
    t77 = *((unsigned int *)t38);
    t78 = (t77 >> 2);
    *((unsigned int *)t36) = t78;
    t79 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t79 & 1073741823U);
    t80 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t80 & 1073741823U);
    xsi_vlogtype_concat(t73, 32, 32, 2U, t74, 30, t35, 2);
    goto LAB46;

LAB47:    xsi_vlog_unsigned_bit_combine(t6, 32, t68, 32, t73, 32);
    goto LAB51;

LAB49:    memcpy(t6, t68, 8);
    goto LAB51;

LAB52:    t90 = *((unsigned int *)t81);
    t91 = *((unsigned int *)t82);
    t43 = (t90 - t91);
    t44 = (t43 + 1);
    xsi_vlogvar_wait_assign_value(t40, t6, 0, *((unsigned int *)t82), t44, 0LL);
    goto LAB53;

LAB56:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB57;

LAB58:    xsi_set_current_line(73, ng0);

LAB61:    xsi_set_current_line(74, ng0);
    t21 = ((char*)((ng12)));
    t22 = (t0 + 3528);
    t28 = (t0 + 3528);
    t29 = (t28 + 72U);
    t32 = *((char **)t29);
    t33 = (t0 + 3528);
    t34 = (t33 + 64U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t30, t31, t32, t35, 2, 1, t36, 32, 1);
    t37 = (t0 + 3528);
    t38 = (t37 + 72U);
    t40 = *((char **)t38);
    t46 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t45, t40, 2, t46, 32, 1);
    t47 = (t30 + 4);
    t48 = *((unsigned int *)t47);
    t39 = (!(t48));
    t49 = (t31 + 4);
    t50 = *((unsigned int *)t49);
    t41 = (!(t50));
    t42 = (t39 && t41);
    t51 = (t45 + 4);
    t52 = *((unsigned int *)t51);
    t43 = (!(t52));
    t44 = (t42 && t43);
    if (t44 == 1)
        goto LAB62;

LAB63:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 2968U);
    t3 = *((char **)t2);
    t2 = (t0 + 3528);
    t4 = (t0 + 3528);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t8 = (t0 + 3528);
    t21 = (t8 + 64U);
    t22 = *((char **)t21);
    t28 = ((char*)((ng6)));
    xsi_vlog_generic_convert_array_indices(t6, t30, t7, t22, 2, 1, t28, 32, 1);
    t29 = (t0 + 3528);
    t32 = (t29 + 72U);
    t33 = *((char **)t32);
    t34 = ((char*)((ng3)));
    t35 = ((char*)((ng8)));
    xsi_vlog_convert_partindices(t31, t45, t56, ((int*)(t33)), 2, t34, 32, 1, t35, 32, 1);
    t36 = (t6 + 4);
    t9 = *((unsigned int *)t36);
    t39 = (!(t9));
    t37 = (t30 + 4);
    t10 = *((unsigned int *)t37);
    t41 = (!(t10));
    t42 = (t39 && t41);
    t38 = (t31 + 4);
    t11 = *((unsigned int *)t38);
    t43 = (!(t11));
    t44 = (t42 && t43);
    t40 = (t45 + 4);
    t12 = *((unsigned int *)t40);
    t55 = (!(t12));
    t57 = (t44 && t55);
    t46 = (t56 + 4);
    t13 = *((unsigned int *)t46);
    t58 = (!(t13));
    t59 = (t57 && t58);
    if (t59 == 1)
        goto LAB64;

LAB65:    goto LAB60;

LAB62:    t53 = *((unsigned int *)t31);
    t54 = *((unsigned int *)t45);
    t55 = (t53 + t54);
    xsi_vlogvar_wait_assign_value(t22, t21, 0, t55, 1, 0LL);
    goto LAB63;

LAB64:    t14 = *((unsigned int *)t56);
    t60 = (t14 + 0);
    t15 = *((unsigned int *)t30);
    t16 = *((unsigned int *)t45);
    t61 = (t15 + t16);
    t17 = *((unsigned int *)t31);
    t18 = *((unsigned int *)t45);
    t62 = (t17 - t18);
    t63 = (t62 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, t60, t61, t63, 0LL);
    goto LAB65;

LAB68:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB69;

LAB70:    xsi_set_current_line(77, ng0);

LAB73:    xsi_set_current_line(78, ng0);
    t21 = (t0 + 1528U);
    t22 = *((char **)t21);
    t21 = (t0 + 3528);
    t28 = (t0 + 3528);
    t29 = (t28 + 72U);
    t32 = *((char **)t29);
    t33 = (t0 + 3528);
    t34 = (t33 + 64U);
    t35 = *((char **)t34);
    t36 = (t0 + 1368U);
    t37 = *((char **)t36);
    xsi_vlog_generic_convert_array_indices(t30, t31, t32, t35, 2, 1, t37, 5, 2);
    t36 = (t30 + 4);
    t48 = *((unsigned int *)t36);
    t39 = (!(t48));
    t38 = (t31 + 4);
    t50 = *((unsigned int *)t38);
    t41 = (!(t50));
    t42 = (t39 && t41);
    if (t42 == 1)
        goto LAB74;

LAB75:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 2968U);
    t3 = *((char **)t2);
    t2 = (t0 + 3528);
    t4 = (t0 + 3528);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t8 = (t0 + 3528);
    t21 = (t8 + 64U);
    t22 = *((char **)t21);
    t28 = ((char*)((ng6)));
    xsi_vlog_generic_convert_array_indices(t6, t30, t7, t22, 2, 1, t28, 32, 1);
    t29 = (t0 + 3528);
    t32 = (t29 + 72U);
    t33 = *((char **)t32);
    t34 = ((char*)((ng3)));
    t35 = ((char*)((ng8)));
    xsi_vlog_convert_partindices(t31, t45, t56, ((int*)(t33)), 2, t34, 32, 1, t35, 32, 1);
    t36 = (t6 + 4);
    t9 = *((unsigned int *)t36);
    t39 = (!(t9));
    t37 = (t30 + 4);
    t10 = *((unsigned int *)t37);
    t41 = (!(t10));
    t42 = (t39 && t41);
    t38 = (t31 + 4);
    t11 = *((unsigned int *)t38);
    t43 = (!(t11));
    t44 = (t42 && t43);
    t40 = (t45 + 4);
    t12 = *((unsigned int *)t40);
    t55 = (!(t12));
    t57 = (t44 && t55);
    t46 = (t56 + 4);
    t13 = *((unsigned int *)t46);
    t58 = (!(t13));
    t59 = (t57 && t58);
    if (t59 == 1)
        goto LAB76;

LAB77:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    t2 = (t0 + 1528U);
    t5 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng15, 4, t0, (char)118, t3, 32, (char)118, t4, 5, (char)118, t5, 32);
    goto LAB72;

LAB74:    t52 = *((unsigned int *)t30);
    t53 = *((unsigned int *)t31);
    t43 = (t52 - t53);
    t44 = (t43 + 1);
    xsi_vlogvar_wait_assign_value(t21, t22, 0, *((unsigned int *)t31), t44, 0LL);
    goto LAB75;

LAB76:    t14 = *((unsigned int *)t56);
    t60 = (t14 + 0);
    t15 = *((unsigned int *)t30);
    t16 = *((unsigned int *)t45);
    t61 = (t15 + t16);
    t17 = *((unsigned int *)t31);
    t18 = *((unsigned int *)t45);
    t62 = (t17 - t18);
    t63 = (t62 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, t60, t61, t63, 0LL);
    goto LAB77;

}


extern void work_m_00000000003570117021_3975733304_init()
{
	static char *pe[] = {(void *)Cont_49_0,(void *)Cont_50_1,(void *)Cont_51_2,(void *)Initial_54_3,(void *)Always_59_4};
	xsi_register_didat("work_m_00000000003570117021_3975733304", "isim/mips_txt_isim_beh.exe.sim/work/m_00000000003570117021_3975733304.didat");
	xsi_register_executes(pe);
}
