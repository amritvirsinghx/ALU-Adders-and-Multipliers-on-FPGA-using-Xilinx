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
static const char *ng0 = "F:/Training/Synthesis/Adders/Carry Look Ahead Adder/Cla_with_cascading/Cla.vhd";
extern char *IEEE_P_2592010699;

char *ieee_p_2592010699_sub_1697423399_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_795620321_503743352(char *, char *, char *, char *, char *, char *);


static void work_a_2804042273_3140140613_p_0(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(32, ng0);

LAB3:    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t2 = (t0 + 7252U);
    t4 = (t0 + 1192U);
    t5 = *((char **)t4);
    t4 = (t0 + 7268U);
    t6 = ieee_p_2592010699_sub_1697423399_503743352(IEEE_P_2592010699, t1, t3, t2, t5, t4);
    t7 = (t1 + 12U);
    t8 = *((unsigned int *)t7);
    t9 = (1U * t8);
    t10 = (4U != t9);
    if (t10 == 1)
        goto LAB5;

LAB6:    t11 = (t0 + 4504);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 4U);
    xsi_driver_first_trans_fast(t11);

LAB2:    t16 = (t0 + 4376);
    *((int *)t16) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(4U, t9, 0);
    goto LAB6;

}

static void work_a_2804042273_3140140613_p_1(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(33, ng0);

LAB3:    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t2 = (t0 + 7252U);
    t4 = (t0 + 1192U);
    t5 = *((char **)t4);
    t4 = (t0 + 7268U);
    t6 = ieee_p_2592010699_sub_795620321_503743352(IEEE_P_2592010699, t1, t3, t2, t5, t4);
    t7 = (t1 + 12U);
    t8 = *((unsigned int *)t7);
    t9 = (1U * t8);
    t10 = (4U != t9);
    if (t10 == 1)
        goto LAB5;

LAB6:    t11 = (t0 + 4568);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 4U);
    xsi_driver_first_trans_fast(t11);

LAB2:    t16 = (t0 + 4392);
    *((int *)t16) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(4U, t9, 0);
    goto LAB6;

}

static void work_a_2804042273_3140140613_p_2(char *t0)
{
    char t1[16];
    char t7[16];
    char t15[16];
    char *t2;
    char *t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    char *t8;
    char *t9;
    int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t16;
    char *t17;
    int t18;
    unsigned int t19;
    char *t20;
    unsigned int t21;
    unsigned char t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;

LAB0:    xsi_set_current_line(37, ng0);

LAB3:    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t4 = (3 - 3);
    t5 = (t4 * 1U);
    t6 = (0 + t5);
    t2 = (t3 + t6);
    t8 = (t7 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 3;
    t9 = (t8 + 4U);
    *((int *)t9) = 0;
    t9 = (t8 + 8U);
    *((int *)t9) = -1;
    t10 = (0 - 3);
    t11 = (t10 * -1);
    t11 = (t11 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t11;
    t9 = (t0 + 2152U);
    t12 = *((char **)t9);
    t11 = (4 - 3);
    t13 = (t11 * 1U);
    t14 = (0 + t13);
    t9 = (t12 + t14);
    t16 = (t15 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = 3;
    t17 = (t16 + 4U);
    *((int *)t17) = 0;
    t17 = (t16 + 8U);
    *((int *)t17) = -1;
    t18 = (0 - 3);
    t19 = (t18 * -1);
    t19 = (t19 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t19;
    t17 = ieee_p_2592010699_sub_1697423399_503743352(IEEE_P_2592010699, t1, t2, t7, t9, t15);
    t20 = (t1 + 12U);
    t19 = *((unsigned int *)t20);
    t21 = (1U * t19);
    t22 = (4U != t21);
    if (t22 == 1)
        goto LAB5;

LAB6:    t23 = (t0 + 4632);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    memcpy(t27, t17, 4U);
    xsi_driver_first_trans_delta(t23, 0U, 4U, 0LL);

LAB2:    t28 = (t0 + 4408);
    *((int *)t28) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(4U, t21, 0);
    goto LAB6;

}

static void work_a_2804042273_3140140613_p_3(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(38, ng0);

LAB3:    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t3 = (4 - 4);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 4696);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast_port(t8);

LAB2:    t13 = (t0 + 4424);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_2804042273_3140140613_init()
{
	static char *pe[] = {(void *)work_a_2804042273_3140140613_p_0,(void *)work_a_2804042273_3140140613_p_1,(void *)work_a_2804042273_3140140613_p_2,(void *)work_a_2804042273_3140140613_p_3};
	xsi_register_didat("work_a_2804042273_3140140613", "isim/top_mod_isim_beh.exe.sim/work/a_2804042273_3140140613.didat");
	xsi_register_executes(pe);
}
