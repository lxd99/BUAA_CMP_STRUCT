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
static const char *ng0 = "E:/university/computer_struct/P0-P/P7/CPU/HL_ALU.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {32, 0};
static int ng4[] = {5, 0};
static int ng5[] = {2, 0};
static unsigned int ng6[] = {0U, 0U};
static int ng7[] = {3, 0};
static int ng8[] = {10, 0};
static int ng9[] = {4, 0};
static int ng10[] = {6, 0};



static void Cont_34_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 3968U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5408);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 5280);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_35_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 4216U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5472);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 5296);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_36_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 4464U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5536);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 15U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 3);
    t18 = (t0 + 5312);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Initial_37_3(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(37, ng0);

LAB2:    xsi_set_current_line(38, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);
    xsi_set_current_line(39, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);
    xsi_set_current_line(40, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 4, 0LL);

LAB1:    return;
}

static void Always_42_4(char *t0)
{
    char t6[8];
    char t31[16];
    char t32[8];
    char t35[8];
    char t43[16];
    char t46[8];
    char t49[8];
    char t57[16];
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
    int t30;
    char *t33;
    char *t34;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t44;
    char *t45;
    char *t47;
    char *t48;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t58;
    char *t59;

LAB0:    t1 = (t0 + 4960U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 5328);
    *((int *)t2) = 1;
    t3 = (t0 + 4992);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(42, ng0);

LAB5:    xsi_set_current_line(43, ng0);
    t4 = (t0 + 2168U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
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

LAB11:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
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
        goto LAB17;

LAB14:    if (t18 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t6) = 1;

LAB17:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB18;

LAB19:
LAB20:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(43, ng0);

LAB13:    xsi_set_current_line(44, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 32, 0LL);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB12;

LAB16:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(48, ng0);

LAB21:    xsi_set_current_line(49, ng0);
    t21 = (t0 + 1688U);
    t22 = *((char **)t21);

LAB22:    t21 = ((char*)((ng2)));
    t30 = xsi_vlog_unsigned_case_compare(t22, 3, t21, 32);
    if (t30 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng5)));
    t30 = xsi_vlog_unsigned_case_compare(t22, 3, t2, 32);
    if (t30 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng7)));
    t30 = xsi_vlog_unsigned_case_compare(t22, 3, t2, 32);
    if (t30 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng9)));
    t30 = xsi_vlog_unsigned_case_compare(t22, 3, t2, 32);
    if (t30 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng4)));
    t30 = xsi_vlog_unsigned_case_compare(t22, 3, t2, 32);
    if (t30 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng10)));
    t30 = xsi_vlog_unsigned_case_compare(t22, 3, t2, 32);
    if (t30 == 1)
        goto LAB33;

LAB34:
LAB36:
LAB35:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t35, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
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
        goto LAB47;

LAB44:    if (t18 != 0)
        goto LAB46;

LAB45:    *((unsigned int *)t35) = 1;

LAB47:    memset(t32, 0, 8);
    t28 = (t35 + 4);
    t23 = *((unsigned int *)t28);
    t24 = (~(t23));
    t25 = *((unsigned int *)t35);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t28) != 0)
        goto LAB50;

LAB51:    t33 = (t32 + 4);
    t37 = *((unsigned int *)t32);
    t38 = *((unsigned int *)t33);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB52;

LAB53:    t40 = *((unsigned int *)t32);
    t41 = (~(t40));
    t42 = *((unsigned int *)t33);
    t51 = (t41 || t42);
    if (t51 > 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t33) > 0)
        goto LAB56;

LAB57:    if (*((unsigned int *)t32) > 0)
        goto LAB58;

LAB59:    memcpy(t6, t46, 8);

LAB60:    t48 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t48, t6, 0, 0, 4, 0LL);

LAB37:    goto LAB20;

LAB23:    xsi_set_current_line(50, ng0);

LAB38:    xsi_set_current_line(51, ng0);
    t28 = (t0 + 1048U);
    t29 = *((char **)t28);
    t28 = ((char*)((ng3)));
    t33 = (t0 + 1048U);
    t34 = *((char **)t33);
    memset(t35, 0, 8);
    t33 = (t35 + 4);
    t36 = (t34 + 4);
    t37 = *((unsigned int *)t34);
    t38 = (t37 >> 31);
    t39 = (t38 & 1);
    *((unsigned int *)t35) = t39;
    t40 = *((unsigned int *)t36);
    t41 = (t40 >> 31);
    t42 = (t41 & 1);
    *((unsigned int *)t33) = t42;
    xsi_vlog_mul_concat(t32, 32, 1, t28, 1U, t35, 1);
    xsi_vlogtype_concat(t31, 64, 64, 2U, t32, 32, t29, 32);
    t44 = (t0 + 1208U);
    t45 = *((char **)t44);
    t44 = ((char*)((ng3)));
    t47 = (t0 + 1208U);
    t48 = *((char **)t47);
    memset(t49, 0, 8);
    t47 = (t49 + 4);
    t50 = (t48 + 4);
    t51 = *((unsigned int *)t48);
    t52 = (t51 >> 31);
    t53 = (t52 & 1);
    *((unsigned int *)t49) = t53;
    t54 = *((unsigned int *)t50);
    t55 = (t54 >> 31);
    t56 = (t55 & 1);
    *((unsigned int *)t47) = t56;
    xsi_vlog_mul_concat(t46, 32, 1, t44, 1U, t49, 1);
    xsi_vlogtype_concat(t43, 64, 64, 2U, t46, 32, t45, 32);
    xsi_vlog_unsigned_multiply(t57, 64, t31, 64, t43, 64);
    t58 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t58, t57, 0, 0, 32, 0LL);
    t59 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t59, t57, 32, 0, 32, 0LL);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB37;

LAB25:    xsi_set_current_line(54, ng0);

LAB39:    xsi_set_current_line(55, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng6)));
    xsi_vlogtype_concat(t31, 64, 64, 2U, t3, 32, t4, 32);
    t5 = (t0 + 1208U);
    t7 = *((char **)t5);
    t5 = ((char*)((ng6)));
    xsi_vlogtype_concat(t43, 64, 64, 2U, t5, 32, t7, 32);
    xsi_vlog_unsigned_multiply(t57, 64, t31, 64, t43, 64);
    t8 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t8, t57, 0, 0, 32, 0LL);
    t21 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t21, t57, 32, 0, 32, 0LL);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB37;

LAB27:    xsi_set_current_line(58, ng0);

LAB40:    xsi_set_current_line(59, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t5 = *((char **)t3);
    memset(t35, 0, 8);
    xsi_vlog_signed_mod(t35, 32, t4, 32, t5, 32);
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t35, 0, 0, 32, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    memset(t35, 0, 8);
    xsi_vlog_signed_divide(t35, 32, t3, 32, t4, 32);
    t2 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t2, t35, 0, 0, 32, 0LL);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB37;

LAB29:    xsi_set_current_line(63, ng0);

LAB41:    xsi_set_current_line(64, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t5 = *((char **)t3);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_mod(t6, 32, t4, 32, t5, 32);
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t6, 0, 0, 32, 0LL);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_divide(t6, 32, t3, 32, t4, 32);
    t2 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t2, t6, 0, 0, 32, 0LL);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB37;

LAB31:    xsi_set_current_line(68, ng0);

LAB42:    xsi_set_current_line(69, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t4, 0, 0, 32, 0LL);
    goto LAB37;

LAB33:    xsi_set_current_line(71, ng0);

LAB43:    xsi_set_current_line(72, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t4, 0, 0, 32, 0LL);
    goto LAB37;

LAB46:    t21 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB47;

LAB48:    *((unsigned int *)t32) = 1;
    goto LAB51;

LAB50:    t29 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB51;

LAB52:    t34 = ((char*)((ng1)));
    goto LAB53;

LAB54:    t36 = (t0 + 3048);
    t44 = (t36 + 56U);
    t45 = *((char **)t44);
    t47 = ((char*)((ng2)));
    memset(t46, 0, 8);
    xsi_vlog_unsigned_minus(t46, 32, t45, 4, t47, 32);
    goto LAB55;

LAB56:    xsi_vlog_unsigned_bit_combine(t6, 32, t34, 32, t46, 32);
    goto LAB60;

LAB58:    memcpy(t6, t34, 8);
    goto LAB60;

}


extern void work_m_00000000003419547504_0229278501_init()
{
	static char *pe[] = {(void *)Cont_34_0,(void *)Cont_35_1,(void *)Cont_36_2,(void *)Initial_37_3,(void *)Always_42_4};
	xsi_register_didat("work_m_00000000003419547504_0229278501", "isim/mips_txt_isim_beh.exe.sim/work/m_00000000003419547504_0229278501.didat");
	xsi_register_executes(pe);
}
