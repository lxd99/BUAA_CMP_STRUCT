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
static const char *ng0 = "E:/university/computer_struct/P0-P/P7/CPU/alu.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {2, 0};
static int ng4[] = {3, 0};
static int ng5[] = {4, 0};
static int ng6[] = {5, 0};
static int ng7[] = {6, 0};
static int ng8[] = {7, 0};
static int ng9[] = {8, 0};
static int ng10[] = {9, 0};
static int ng11[] = {10, 0};
static int ng12[] = {11, 0};
static int ng13[] = {12, 0};
static int ng14[] = {13, 0};



static void Always_35_0(char *t0)
{
    char t10[16];
    char t12[8];
    char t19[8];
    char t26[8];
    char t28[16];
    char t29[16];
    char t52[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t27;
    unsigned int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t53;

LAB0:    t1 = (t0 + 4128U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 4944);
    *((int *)t2) = 1;
    t3 = (t0 + 4160);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(35, ng0);

LAB5:    xsi_set_current_line(36, ng0);
    t4 = (t0 + 1528U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 32);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB33;

LAB34:
LAB35:    goto LAB2;

LAB7:    xsi_set_current_line(37, ng0);

LAB36:    xsi_set_current_line(38, ng0);
    t7 = (t0 + 1048U);
    t8 = *((char **)t7);
    t7 = (t0 + 1208U);
    t9 = *((char **)t7);
    xsi_vlog_unsigned_add(t10, 33, t8, 32, t9, 32);
    t7 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t7, t10, 0, 0, 32, 0LL);
    t11 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t11, t10, 32, 0, 1, 0LL);
    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t12, 0, 8);
    t2 = (t12 + 4);
    t4 = (t3 + 4);
    t13 = *((unsigned int *)t3);
    t14 = (t13 >> 0);
    *((unsigned int *)t12) = t14;
    t15 = *((unsigned int *)t4);
    t16 = (t15 >> 0);
    *((unsigned int *)t2) = t16;
    t17 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t17 & 2147483647U);
    t18 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t18 & 2147483647U);
    t7 = (t0 + 1208U);
    t8 = *((char **)t7);
    memset(t19, 0, 8);
    t7 = (t19 + 4);
    t9 = (t8 + 4);
    t20 = *((unsigned int *)t8);
    t21 = (t20 >> 0);
    *((unsigned int *)t19) = t21;
    t22 = *((unsigned int *)t9);
    t23 = (t22 >> 0);
    *((unsigned int *)t7) = t23;
    t24 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t24 & 2147483647U);
    t25 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t25 & 2147483647U);
    memset(t26, 0, 8);
    xsi_vlog_unsigned_add(t26, 32, t12, 32, t19, 32);
    t11 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t11, t26, 0, 0, 31, 0LL);
    t27 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t27, t26, 31, 0, 1, 0LL);
    goto LAB35;

LAB9:    xsi_set_current_line(41, ng0);

LAB37:    xsi_set_current_line(42, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    xsi_vlogtype_sign_extend(t10, 33, t4, 32);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    xsi_vlogtype_sign_extend(t28, 33, t7, 32);
    xsi_vlog_signed_minus(t29, 33, t10, 33, t28, 33);
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t29, 0, 0, 32, 0LL);
    t8 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t8, t29, 32, 0, 1, 0LL);
    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t12, 0, 8);
    t2 = (t12 + 4);
    t4 = (t3 + 4);
    t13 = *((unsigned int *)t3);
    t14 = (t13 >> 0);
    *((unsigned int *)t12) = t14;
    t15 = *((unsigned int *)t4);
    t16 = (t15 >> 0);
    *((unsigned int *)t2) = t16;
    t17 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t17 & 2147483647U);
    t18 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t18 & 2147483647U);
    t7 = (t0 + 1208U);
    t8 = *((char **)t7);
    memset(t19, 0, 8);
    t7 = (t19 + 4);
    t9 = (t8 + 4);
    t20 = *((unsigned int *)t8);
    t21 = (t20 >> 0);
    *((unsigned int *)t19) = t21;
    t22 = *((unsigned int *)t9);
    t23 = (t22 >> 0);
    *((unsigned int *)t7) = t23;
    t24 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t24 & 2147483647U);
    t25 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t25 & 2147483647U);
    memset(t26, 0, 8);
    xsi_vlog_unsigned_minus(t26, 32, t12, 32, t19, 32);
    t11 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t11, t26, 0, 0, 31, 0LL);
    t27 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t27, t26, 31, 0, 1, 0LL);
    goto LAB35;

LAB11:    xsi_set_current_line(45, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t7);
    t15 = (t13 | t14);
    *((unsigned int *)t12) = t15;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t12 + 4);
    t16 = *((unsigned int *)t3);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    *((unsigned int *)t9) = t18;
    t20 = *((unsigned int *)t9);
    t21 = (t20 != 0);
    if (t21 == 1)
        goto LAB38;

LAB39:
LAB40:    t40 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t40, t12, 0, 0, 32, 0LL);
    goto LAB35;

LAB13:    xsi_set_current_line(46, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t7);
    t15 = (t13 & t14);
    *((unsigned int *)t12) = t15;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t12 + 4);
    t16 = *((unsigned int *)t3);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    *((unsigned int *)t9) = t18;
    t20 = *((unsigned int *)t9);
    t21 = (t20 != 0);
    if (t21 == 1)
        goto LAB41;

LAB42:
LAB43:    t40 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t40, t12, 0, 0, 32, 0LL);
    goto LAB35;

LAB15:    xsi_set_current_line(47, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t7);
    t15 = (t13 ^ t14);
    *((unsigned int *)t12) = t15;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t12 + 4);
    t16 = *((unsigned int *)t3);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    *((unsigned int *)t9) = t18;
    t20 = *((unsigned int *)t9);
    t21 = (t20 != 0);
    if (t21 == 1)
        goto LAB44;

LAB45:
LAB46:    t11 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 32, 0LL);
    goto LAB35;

LAB17:    xsi_set_current_line(48, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t7);
    t15 = (t13 | t14);
    *((unsigned int *)t19) = t15;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t19 + 4);
    t16 = *((unsigned int *)t3);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    *((unsigned int *)t9) = t18;
    t20 = *((unsigned int *)t9);
    t21 = (t20 != 0);
    if (t21 == 1)
        goto LAB47;

LAB48:
LAB49:    memset(t12, 0, 8);
    t40 = (t12 + 4);
    t45 = (t19 + 4);
    t41 = *((unsigned int *)t19);
    t42 = (~(t41));
    *((unsigned int *)t12) = t42;
    *((unsigned int *)t40) = 0;
    if (*((unsigned int *)t45) != 0)
        goto LAB51;

LAB50:    t48 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t48 & 4294967295U);
    t49 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t49 & 4294967295U);
    t50 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t50, t12, 0, 0, 32, 0LL);
    goto LAB35;

LAB19:    xsi_set_current_line(49, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1368U);
    t7 = *((char **)t3);
    memset(t12, 0, 8);
    xsi_vlog_unsigned_lshift(t12, 32, t4, 32, t7, 5);
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t12, 0, 0, 32, 0LL);
    goto LAB35;

LAB21:    xsi_set_current_line(50, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1048U);
    t7 = *((char **)t3);
    memset(t12, 0, 8);
    t3 = (t12 + 4);
    t8 = (t7 + 4);
    t13 = *((unsigned int *)t7);
    t14 = (t13 >> 0);
    *((unsigned int *)t12) = t14;
    t15 = *((unsigned int *)t8);
    t16 = (t15 >> 0);
    *((unsigned int *)t3) = t16;
    t17 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t17 & 31U);
    t18 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t18 & 31U);
    memset(t19, 0, 8);
    xsi_vlog_unsigned_lshift(t19, 32, t4, 32, t12, 5);
    t9 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t9, t19, 0, 0, 32, 0LL);
    goto LAB35;

LAB23:    xsi_set_current_line(51, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1368U);
    t7 = *((char **)t3);
    memset(t12, 0, 8);
    xsi_vlog_unsigned_rshift(t12, 32, t4, 32, t7, 5);
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t12, 0, 0, 32, 0LL);
    goto LAB35;

LAB25:    xsi_set_current_line(52, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1048U);
    t7 = *((char **)t3);
    memset(t12, 0, 8);
    t3 = (t12 + 4);
    t8 = (t7 + 4);
    t13 = *((unsigned int *)t7);
    t14 = (t13 >> 0);
    *((unsigned int *)t12) = t14;
    t15 = *((unsigned int *)t8);
    t16 = (t15 >> 0);
    *((unsigned int *)t3) = t16;
    t17 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t17 & 31U);
    t18 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t18 & 31U);
    memset(t19, 0, 8);
    xsi_vlog_unsigned_rshift(t19, 32, t4, 32, t12, 5);
    t9 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t9, t19, 0, 0, 32, 0LL);
    goto LAB35;

LAB27:    xsi_set_current_line(53, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1368U);
    t7 = *((char **)t3);
    memset(t19, 0, 8);
    xsi_vlog_signed_arith_rshift(t19, 32, t4, 32, t7, 5);
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t19, 0, 0, 32, 0LL);
    goto LAB35;

LAB29:    xsi_set_current_line(54, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1048U);
    t7 = *((char **)t3);
    memset(t19, 0, 8);
    t3 = (t19 + 4);
    t8 = (t7 + 4);
    t13 = *((unsigned int *)t7);
    t14 = (t13 >> 0);
    *((unsigned int *)t19) = t14;
    t15 = *((unsigned int *)t8);
    t16 = (t15 >> 0);
    *((unsigned int *)t3) = t16;
    t17 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t17 & 31U);
    t18 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t18 & 31U);
    memset(t26, 0, 8);
    xsi_vlog_signed_arith_rshift(t26, 32, t4, 32, t19, 5);
    t9 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t9, t26, 0, 0, 32, 0LL);
    goto LAB35;

LAB31:    xsi_set_current_line(55, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t52, 0, 8);
    xsi_vlog_signed_less(t52, 32, t4, 32, t7, 32);
    memset(t19, 0, 8);
    t3 = (t52 + 4);
    t13 = *((unsigned int *)t3);
    t14 = (~(t13));
    t15 = *((unsigned int *)t52);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB52;

LAB53:    if (*((unsigned int *)t3) != 0)
        goto LAB54;

LAB55:    t9 = (t19 + 4);
    t18 = *((unsigned int *)t19);
    t20 = *((unsigned int *)t9);
    t21 = (t18 || t20);
    if (t21 > 0)
        goto LAB56;

LAB57:    t22 = *((unsigned int *)t19);
    t23 = (~(t22));
    t24 = *((unsigned int *)t9);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB58;

LAB59:    if (*((unsigned int *)t9) > 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t19) > 0)
        goto LAB62;

LAB63:    memcpy(t12, t27, 8);

LAB64:    t40 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t40, t12, 0, 0, 32, 0LL);
    goto LAB35;

LAB33:    xsi_set_current_line(56, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t26, 0, 8);
    t3 = (t4 + 4);
    if (*((unsigned int *)t3) != 0)
        goto LAB66;

LAB65:    t8 = (t7 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB66;

LAB69:    if (*((unsigned int *)t4) < *((unsigned int *)t7))
        goto LAB67;

LAB68:    memset(t19, 0, 8);
    t11 = (t26 + 4);
    t13 = *((unsigned int *)t11);
    t14 = (~(t13));
    t15 = *((unsigned int *)t26);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB70;

LAB71:    if (*((unsigned int *)t11) != 0)
        goto LAB72;

LAB73:    t40 = (t19 + 4);
    t18 = *((unsigned int *)t19);
    t20 = *((unsigned int *)t40);
    t21 = (t18 || t20);
    if (t21 > 0)
        goto LAB74;

LAB75:    t22 = *((unsigned int *)t19);
    t23 = (~(t22));
    t24 = *((unsigned int *)t40);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB76;

LAB77:    if (*((unsigned int *)t40) > 0)
        goto LAB78;

LAB79:    if (*((unsigned int *)t19) > 0)
        goto LAB80;

LAB81:    memcpy(t12, t50, 8);

LAB82:    t53 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t53, t12, 0, 0, 32, 0LL);
    goto LAB35;

LAB38:    t22 = *((unsigned int *)t12);
    t23 = *((unsigned int *)t9);
    *((unsigned int *)t12) = (t22 | t23);
    t11 = (t4 + 4);
    t27 = (t7 + 4);
    t24 = *((unsigned int *)t11);
    t25 = (~(t24));
    t30 = *((unsigned int *)t4);
    t31 = (t30 & t25);
    t32 = *((unsigned int *)t27);
    t33 = (~(t32));
    t34 = *((unsigned int *)t7);
    t35 = (t34 & t33);
    t36 = (~(t31));
    t37 = (~(t35));
    t38 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t38 & t36);
    t39 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t39 & t37);
    goto LAB40;

LAB41:    t22 = *((unsigned int *)t12);
    t23 = *((unsigned int *)t9);
    *((unsigned int *)t12) = (t22 | t23);
    t11 = (t4 + 4);
    t27 = (t7 + 4);
    t24 = *((unsigned int *)t4);
    t25 = (~(t24));
    t30 = *((unsigned int *)t11);
    t32 = (~(t30));
    t33 = *((unsigned int *)t7);
    t34 = (~(t33));
    t36 = *((unsigned int *)t27);
    t37 = (~(t36));
    t31 = (t25 & t32);
    t35 = (t34 & t37);
    t38 = (~(t31));
    t39 = (~(t35));
    t41 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t41 & t38);
    t42 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t42 & t39);
    t43 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t43 & t38);
    t44 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t44 & t39);
    goto LAB43;

LAB44:    t22 = *((unsigned int *)t12);
    t23 = *((unsigned int *)t9);
    *((unsigned int *)t12) = (t22 | t23);
    goto LAB46;

LAB47:    t22 = *((unsigned int *)t19);
    t23 = *((unsigned int *)t9);
    *((unsigned int *)t19) = (t22 | t23);
    t11 = (t4 + 4);
    t27 = (t7 + 4);
    t24 = *((unsigned int *)t11);
    t25 = (~(t24));
    t30 = *((unsigned int *)t4);
    t31 = (t30 & t25);
    t32 = *((unsigned int *)t27);
    t33 = (~(t32));
    t34 = *((unsigned int *)t7);
    t35 = (t34 & t33);
    t36 = (~(t31));
    t37 = (~(t35));
    t38 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t38 & t36);
    t39 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t39 & t37);
    goto LAB49;

LAB51:    t43 = *((unsigned int *)t12);
    t44 = *((unsigned int *)t45);
    *((unsigned int *)t12) = (t43 | t44);
    t46 = *((unsigned int *)t40);
    t47 = *((unsigned int *)t45);
    *((unsigned int *)t40) = (t46 | t47);
    goto LAB50;

LAB52:    *((unsigned int *)t19) = 1;
    goto LAB55;

LAB54:    t8 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB55;

LAB56:    t11 = ((char*)((ng2)));
    goto LAB57;

LAB58:    t27 = ((char*)((ng1)));
    goto LAB59;

LAB60:    xsi_vlog_unsigned_bit_combine(t12, 32, t11, 32, t27, 32);
    goto LAB64;

LAB62:    memcpy(t12, t11, 8);
    goto LAB64;

LAB66:    t9 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB68;

LAB67:    *((unsigned int *)t26) = 1;
    goto LAB68;

LAB70:    *((unsigned int *)t19) = 1;
    goto LAB73;

LAB72:    t27 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB73;

LAB74:    t45 = ((char*)((ng2)));
    goto LAB75;

LAB76:    t50 = ((char*)((ng1)));
    goto LAB77;

LAB78:    xsi_vlog_unsigned_bit_combine(t12, 32, t45, 32, t50, 32);
    goto LAB82;

LAB80:    memcpy(t12, t45, 8);
    goto LAB82;

}

static void Cont_59_1(char *t0)
{
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;

LAB0:    t1 = (t0 + 4376U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3208);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t7);
    t11 = (t9 ^ t10);
    *((unsigned int *)t8) = t11;
    t12 = (t4 + 4);
    t13 = (t7 + 4);
    t14 = (t8 + 4);
    t15 = *((unsigned int *)t12);
    t16 = *((unsigned int *)t13);
    t17 = (t15 | t16);
    *((unsigned int *)t14) = t17;
    t18 = *((unsigned int *)t14);
    t19 = (t18 != 0);
    if (t19 == 1)
        goto LAB4;

LAB5:
LAB6:    t22 = (t0 + 5056);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memset(t26, 0, 8);
    t27 = 1U;
    t28 = t27;
    t29 = (t8 + 4);
    t30 = *((unsigned int *)t8);
    t27 = (t27 & t30);
    t31 = *((unsigned int *)t29);
    t28 = (t28 & t31);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t33 | t27);
    t34 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t34 | t28);
    xsi_driver_vfirst_trans(t22, 0, 0);
    t35 = (t0 + 4960);
    *((int *)t35) = 1;

LAB1:    return;
LAB4:    t20 = *((unsigned int *)t8);
    t21 = *((unsigned int *)t14);
    *((unsigned int *)t8) = (t20 | t21);
    goto LAB6;

}

static void Cont_60_2(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t33[8];
    char t34[8];
    char t57[8];
    char t58[8];
    char t61[8];
    char t88[8];
    char t89[8];
    char t112[8];
    char t113[8];
    char t116[8];
    char t143[8];
    char t144[8];
    char *t1;
    char *t2;
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
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t59;
    char *t60;
    char *t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    char *t90;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    char *t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    char *t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    char *t114;
    char *t115;
    char *t117;
    char *t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    char *t131;
    char *t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    char *t138;
    char *t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    char *t145;
    char *t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    char *t152;
    char *t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    char *t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    char *t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    char *t167;
    char *t168;
    char *t169;
    char *t170;
    char *t171;
    char *t172;
    unsigned int t173;
    unsigned int t174;
    char *t175;
    unsigned int t176;
    unsigned int t177;
    char *t178;
    unsigned int t179;
    unsigned int t180;
    char *t181;

LAB0:    t1 = (t0 + 4624U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1848U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t2 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t2);
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
        goto LAB5;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB7:    memset(t4, 0, 8);
    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t22) != 0)
        goto LAB10;

LAB11:    t29 = (t4 + 4);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB12;

LAB13:    t53 = *((unsigned int *)t4);
    t54 = (~(t53));
    t55 = *((unsigned int *)t29);
    t56 = (t54 || t55);
    if (t56 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t57, 8);

LAB20:    t168 = (t0 + 5120);
    t169 = (t168 + 56U);
    t170 = *((char **)t169);
    t171 = (t170 + 56U);
    t172 = *((char **)t171);
    memset(t172, 0, 8);
    t173 = 31U;
    t174 = t173;
    t175 = (t3 + 4);
    t176 = *((unsigned int *)t3);
    t173 = (t173 & t176);
    t177 = *((unsigned int *)t175);
    t174 = (t174 & t177);
    t178 = (t172 + 4);
    t179 = *((unsigned int *)t172);
    *((unsigned int *)t172) = (t179 | t173);
    t180 = *((unsigned int *)t178);
    *((unsigned int *)t178) = (t180 | t174);
    xsi_driver_vfirst_trans(t168, 0, 4);
    t181 = (t0 + 4976);
    *((int *)t181) = 1;

LAB1:    return;
LAB5:    *((unsigned int *)t6) = 1;
    goto LAB7;

LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t28 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB11;

LAB12:    t35 = (t0 + 2328U);
    t36 = *((char **)t35);
    memset(t34, 0, 8);
    t35 = (t36 + 4);
    t37 = *((unsigned int *)t35);
    t38 = (~(t37));
    t39 = *((unsigned int *)t36);
    t40 = (t39 & t38);
    t41 = (t40 & 1U);
    if (t41 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t35) != 0)
        goto LAB23;

LAB24:    t43 = (t34 + 4);
    t44 = *((unsigned int *)t34);
    t45 = *((unsigned int *)t43);
    t46 = (t44 || t45);
    if (t46 > 0)
        goto LAB25;

LAB26:    t48 = *((unsigned int *)t34);
    t49 = (~(t48));
    t50 = *((unsigned int *)t43);
    t51 = (t49 || t50);
    if (t51 > 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t43) > 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t34) > 0)
        goto LAB31;

LAB32:    memcpy(t33, t52, 8);

LAB33:    goto LAB13;

LAB14:    t59 = (t0 + 2008U);
    t60 = *((char **)t59);
    t59 = ((char*)((ng1)));
    memset(t61, 0, 8);
    t62 = (t60 + 4);
    t63 = (t59 + 4);
    t64 = *((unsigned int *)t60);
    t65 = *((unsigned int *)t59);
    t66 = (t64 ^ t65);
    t67 = *((unsigned int *)t62);
    t68 = *((unsigned int *)t63);
    t69 = (t67 ^ t68);
    t70 = (t66 | t69);
    t71 = *((unsigned int *)t62);
    t72 = *((unsigned int *)t63);
    t73 = (t71 | t72);
    t74 = (~(t73));
    t75 = (t70 & t74);
    if (t75 != 0)
        goto LAB35;

LAB34:    if (t73 != 0)
        goto LAB36;

LAB37:    memset(t58, 0, 8);
    t77 = (t61 + 4);
    t78 = *((unsigned int *)t77);
    t79 = (~(t78));
    t80 = *((unsigned int *)t61);
    t81 = (t80 & t79);
    t82 = (t81 & 1U);
    if (t82 != 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t77) != 0)
        goto LAB40;

LAB41:    t84 = (t58 + 4);
    t85 = *((unsigned int *)t58);
    t86 = *((unsigned int *)t84);
    t87 = (t85 || t86);
    if (t87 > 0)
        goto LAB42;

LAB43:    t108 = *((unsigned int *)t58);
    t109 = (~(t108));
    t110 = *((unsigned int *)t84);
    t111 = (t109 || t110);
    if (t111 > 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t84) > 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t58) > 0)
        goto LAB48;

LAB49:    memcpy(t57, t112, 8);

LAB50:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t33, 32, t57, 32);
    goto LAB20;

LAB18:    memcpy(t3, t33, 8);
    goto LAB20;

LAB21:    *((unsigned int *)t34) = 1;
    goto LAB24;

LAB23:    t42 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB24;

LAB25:    t47 = ((char*)((ng5)));
    goto LAB26;

LAB27:    t52 = ((char*)((ng1)));
    goto LAB28;

LAB29:    xsi_vlog_unsigned_bit_combine(t33, 32, t47, 32, t52, 32);
    goto LAB33;

LAB31:    memcpy(t33, t47, 8);
    goto LAB33;

LAB35:    *((unsigned int *)t61) = 1;
    goto LAB37;

LAB36:    t76 = (t61 + 4);
    *((unsigned int *)t61) = 1;
    *((unsigned int *)t76) = 1;
    goto LAB37;

LAB38:    *((unsigned int *)t58) = 1;
    goto LAB41;

LAB40:    t83 = (t58 + 4);
    *((unsigned int *)t58) = 1;
    *((unsigned int *)t83) = 1;
    goto LAB41;

LAB42:    t90 = (t0 + 2328U);
    t91 = *((char **)t90);
    memset(t89, 0, 8);
    t90 = (t91 + 4);
    t92 = *((unsigned int *)t90);
    t93 = (~(t92));
    t94 = *((unsigned int *)t91);
    t95 = (t94 & t93);
    t96 = (t95 & 1U);
    if (t96 != 0)
        goto LAB51;

LAB52:    if (*((unsigned int *)t90) != 0)
        goto LAB53;

LAB54:    t98 = (t89 + 4);
    t99 = *((unsigned int *)t89);
    t100 = *((unsigned int *)t98);
    t101 = (t99 || t100);
    if (t101 > 0)
        goto LAB55;

LAB56:    t103 = *((unsigned int *)t89);
    t104 = (~(t103));
    t105 = *((unsigned int *)t98);
    t106 = (t104 || t105);
    if (t106 > 0)
        goto LAB57;

LAB58:    if (*((unsigned int *)t98) > 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t89) > 0)
        goto LAB61;

LAB62:    memcpy(t88, t107, 8);

LAB63:    goto LAB43;

LAB44:    t114 = (t0 + 1688U);
    t115 = *((char **)t114);
    t114 = ((char*)((ng1)));
    memset(t116, 0, 8);
    t117 = (t115 + 4);
    t118 = (t114 + 4);
    t119 = *((unsigned int *)t115);
    t120 = *((unsigned int *)t114);
    t121 = (t119 ^ t120);
    t122 = *((unsigned int *)t117);
    t123 = *((unsigned int *)t118);
    t124 = (t122 ^ t123);
    t125 = (t121 | t124);
    t126 = *((unsigned int *)t117);
    t127 = *((unsigned int *)t118);
    t128 = (t126 | t127);
    t129 = (~(t128));
    t130 = (t125 & t129);
    if (t130 != 0)
        goto LAB65;

LAB64:    if (t128 != 0)
        goto LAB66;

LAB67:    memset(t113, 0, 8);
    t132 = (t116 + 4);
    t133 = *((unsigned int *)t132);
    t134 = (~(t133));
    t135 = *((unsigned int *)t116);
    t136 = (t135 & t134);
    t137 = (t136 & 1U);
    if (t137 != 0)
        goto LAB68;

LAB69:    if (*((unsigned int *)t132) != 0)
        goto LAB70;

LAB71:    t139 = (t113 + 4);
    t140 = *((unsigned int *)t113);
    t141 = *((unsigned int *)t139);
    t142 = (t140 || t141);
    if (t142 > 0)
        goto LAB72;

LAB73:    t163 = *((unsigned int *)t113);
    t164 = (~(t163));
    t165 = *((unsigned int *)t139);
    t166 = (t164 || t165);
    if (t166 > 0)
        goto LAB74;

LAB75:    if (*((unsigned int *)t139) > 0)
        goto LAB76;

LAB77:    if (*((unsigned int *)t113) > 0)
        goto LAB78;

LAB79:    memcpy(t112, t167, 8);

LAB80:    goto LAB45;

LAB46:    xsi_vlog_unsigned_bit_combine(t57, 32, t88, 32, t112, 32);
    goto LAB50;

LAB48:    memcpy(t57, t88, 8);
    goto LAB50;

LAB51:    *((unsigned int *)t89) = 1;
    goto LAB54;

LAB53:    t97 = (t89 + 4);
    *((unsigned int *)t89) = 1;
    *((unsigned int *)t97) = 1;
    goto LAB54;

LAB55:    t102 = ((char*)((ng6)));
    goto LAB56;

LAB57:    t107 = ((char*)((ng1)));
    goto LAB58;

LAB59:    xsi_vlog_unsigned_bit_combine(t88, 32, t102, 32, t107, 32);
    goto LAB63;

LAB61:    memcpy(t88, t102, 8);
    goto LAB63;

LAB65:    *((unsigned int *)t116) = 1;
    goto LAB67;

LAB66:    t131 = (t116 + 4);
    *((unsigned int *)t116) = 1;
    *((unsigned int *)t131) = 1;
    goto LAB67;

LAB68:    *((unsigned int *)t113) = 1;
    goto LAB71;

LAB70:    t138 = (t113 + 4);
    *((unsigned int *)t113) = 1;
    *((unsigned int *)t138) = 1;
    goto LAB71;

LAB72:    t145 = (t0 + 2328U);
    t146 = *((char **)t145);
    memset(t144, 0, 8);
    t145 = (t146 + 4);
    t147 = *((unsigned int *)t145);
    t148 = (~(t147));
    t149 = *((unsigned int *)t146);
    t150 = (t149 & t148);
    t151 = (t150 & 1U);
    if (t151 != 0)
        goto LAB81;

LAB82:    if (*((unsigned int *)t145) != 0)
        goto LAB83;

LAB84:    t153 = (t144 + 4);
    t154 = *((unsigned int *)t144);
    t155 = *((unsigned int *)t153);
    t156 = (t154 || t155);
    if (t156 > 0)
        goto LAB85;

LAB86:    t158 = *((unsigned int *)t144);
    t159 = (~(t158));
    t160 = *((unsigned int *)t153);
    t161 = (t159 || t160);
    if (t161 > 0)
        goto LAB87;

LAB88:    if (*((unsigned int *)t153) > 0)
        goto LAB89;

LAB90:    if (*((unsigned int *)t144) > 0)
        goto LAB91;

LAB92:    memcpy(t143, t162, 8);

LAB93:    goto LAB73;

LAB74:    t167 = ((char*)((ng1)));
    goto LAB75;

LAB76:    xsi_vlog_unsigned_bit_combine(t112, 32, t143, 32, t167, 32);
    goto LAB80;

LAB78:    memcpy(t112, t143, 8);
    goto LAB80;

LAB81:    *((unsigned int *)t144) = 1;
    goto LAB84;

LAB83:    t152 = (t144 + 4);
    *((unsigned int *)t144) = 1;
    *((unsigned int *)t152) = 1;
    goto LAB84;

LAB85:    t157 = ((char*)((ng13)));
    goto LAB86;

LAB87:    t162 = ((char*)((ng1)));
    goto LAB88;

LAB89:    xsi_vlog_unsigned_bit_combine(t143, 32, t157, 32, t162, 32);
    goto LAB93;

LAB91:    memcpy(t143, t157, 8);
    goto LAB93;

}


extern void work_m_00000000002733713619_2725559894_init()
{
	static char *pe[] = {(void *)Always_35_0,(void *)Cont_59_1,(void *)Cont_60_2};
	xsi_register_didat("work_m_00000000002733713619_2725559894", "isim/alu_isim_beh.exe.sim/work/m_00000000002733713619_2725559894.didat");
	xsi_register_executes(pe);
}
