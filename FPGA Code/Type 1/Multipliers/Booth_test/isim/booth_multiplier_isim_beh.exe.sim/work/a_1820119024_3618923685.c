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
static const char *ng0 = "E:/Softwares/Xtesting/Vhdl Projects/Workplace/Booth_test/Booth_Multiplier.vhd";
extern char *IEEE_P_3620187407;
extern char *IEEE_P_2592010699;

char *ieee_p_2592010699_sub_1837678034_503743352(char *, char *, char *, char *);
char *ieee_p_3620187407_sub_767668596_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_1820119024_3618923685_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(26, ng0);

LAB3:    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 6720);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 4U);
    xsi_driver_first_trans_delta(t1, 0U, 4U, 0LL);

LAB2:    t7 = (t0 + 6576);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1820119024_3618923685_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(27, ng0);

LAB3:    t1 = xsi_get_transient_memory(5U);
    memset(t1, 0, 5U);
    t2 = t1;
    memset(t2, (unsigned char)2, 5U);
    t3 = (t0 + 6784);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 5U);
    xsi_driver_first_trans_delta(t3, 4U, 5U, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1820119024_3618923685_p_2(char *t0)
{
    char t1[16];
    char t2[16];
    char t8[16];
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t9;
    char *t10;
    int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned char t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(29, ng0);

LAB3:    t3 = (t0 + 1032U);
    t4 = *((char **)t3);
    t3 = (t0 + 11168U);
    t5 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t2, t4, t3);
    t6 = (t0 + 11427);
    t9 = (t8 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 0;
    t10 = (t9 + 4U);
    *((int *)t10) = 3;
    t10 = (t9 + 8U);
    *((int *)t10) = 1;
    t11 = (3 - 0);
    t12 = (t11 * 1);
    t12 = (t12 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t12;
    t10 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t1, t5, t2, t6, t8);
    t13 = (t1 + 12U);
    t12 = *((unsigned int *)t13);
    t14 = (1U * t12);
    t15 = (4U != t14);
    if (t15 == 1)
        goto LAB5;

LAB6:    t16 = (t0 + 6848);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t10, 4U);
    xsi_driver_first_trans_delta(t16, 0U, 4U, 0LL);

LAB2:    t21 = (t0 + 6592);
    *((int *)t21) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(4U, t14, 0);
    goto LAB6;

}

static void work_a_1820119024_3618923685_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(30, ng0);

LAB3:    t1 = xsi_get_transient_memory(5U);
    memset(t1, 0, 5U);
    t2 = t1;
    memset(t2, (unsigned char)2, 5U);
    t3 = (t0 + 6912);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 5U);
    xsi_driver_first_trans_delta(t3, 4U, 5U, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1820119024_3618923685_p_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(32, ng0);

LAB3:    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t2 = t1;
    memset(t2, (unsigned char)2, 4U);
    t3 = (t0 + 6976);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 4U);
    xsi_driver_first_trans_delta(t3, 0U, 4U, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1820119024_3618923685_p_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(33, ng0);

LAB3:    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t1 = (t0 + 7040);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 4U);
    xsi_driver_first_trans_delta(t1, 4U, 4U, 0LL);

LAB2:    t7 = (t0 + 6608);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1820119024_3618923685_p_6(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(34, ng0);

LAB3:    t1 = (t0 + 7104);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 8U, 1, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1820119024_3618923685_p_7(char *t0)
{
    char t21[16];
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    int t11;
    char *t12;
    char *t13;
    int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned char t22;

LAB0:    xsi_set_current_line(38, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = (8 - 1);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 11431);
    t8 = xsi_mem_cmp(t6, t1, 2U);
    if (t8 == 1)
        goto LAB3;

LAB7:    t9 = (t0 + 11433);
    t11 = xsi_mem_cmp(t9, t1, 2U);
    if (t11 == 1)
        goto LAB4;

LAB8:    t12 = (t0 + 11435);
    t14 = xsi_mem_cmp(t12, t1, 2U);
    if (t14 == 1)
        goto LAB5;

LAB9:
LAB6:    xsi_set_current_line(46, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 7168);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 9U);
    xsi_driver_first_trans_fast(t1);

LAB2:    xsi_set_current_line(49, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t3 = (8 - 8);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 7232);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    t10 = (t9 + 56U);
    t12 = *((char **)t10);
    memcpy(t12, t1, 8U);
    xsi_driver_first_trans_delta(t6, 1U, 8U, 0LL);
    xsi_set_current_line(50, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t8 = (8 - 8);
    t3 = (t8 * -1);
    t4 = (1U * t3);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t22 = *((unsigned char *)t1);
    t6 = (t0 + 7232);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    t10 = (t9 + 56U);
    t12 = *((char **)t10);
    *((unsigned char *)t12) = t22;
    xsi_driver_first_trans_delta(t6, 0U, 1, 0LL);
    xsi_set_current_line(52, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t3 = (8 - 1);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 11437);
    t8 = xsi_mem_cmp(t6, t1, 2U);
    if (t8 == 1)
        goto LAB16;

LAB20:    t9 = (t0 + 11439);
    t11 = xsi_mem_cmp(t9, t1, 2U);
    if (t11 == 1)
        goto LAB17;

LAB21:    t12 = (t0 + 11441);
    t14 = xsi_mem_cmp(t12, t1, 2U);
    if (t14 == 1)
        goto LAB18;

LAB22:
LAB19:    xsi_set_current_line(60, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t1 = (t0 + 7296);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 9U);
    xsi_driver_first_trans_fast(t1);

LAB15:    xsi_set_current_line(63, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = (8 - 8);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 7360);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    t10 = (t9 + 56U);
    t12 = *((char **)t10);
    memcpy(t12, t1, 8U);
    xsi_driver_first_trans_delta(t6, 1U, 8U, 0LL);
    xsi_set_current_line(64, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t8 = (8 - 8);
    t3 = (t8 * -1);
    t4 = (1U * t3);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t22 = *((unsigned char *)t1);
    t6 = (t0 + 7360);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    t10 = (t9 + 56U);
    t12 = *((char **)t10);
    *((unsigned char *)t12) = t22;
    xsi_driver_first_trans_delta(t6, 0U, 1, 0LL);
    xsi_set_current_line(66, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t3 = (8 - 1);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 11443);
    t8 = xsi_mem_cmp(t6, t1, 2U);
    if (t8 == 1)
        goto LAB29;

LAB33:    t9 = (t0 + 11445);
    t11 = xsi_mem_cmp(t9, t1, 2U);
    if (t11 == 1)
        goto LAB30;

LAB34:    t12 = (t0 + 11447);
    t14 = xsi_mem_cmp(t12, t1, 2U);
    if (t14 == 1)
        goto LAB31;

LAB35:
LAB32:    xsi_set_current_line(74, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 7424);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 9U);
    xsi_driver_first_trans_fast(t1);

LAB28:    xsi_set_current_line(77, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t3 = (8 - 8);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 7488);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    t10 = (t9 + 56U);
    t12 = *((char **)t10);
    memcpy(t12, t1, 8U);
    xsi_driver_first_trans_delta(t6, 1U, 8U, 0LL);
    xsi_set_current_line(78, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t8 = (8 - 8);
    t3 = (t8 * -1);
    t4 = (1U * t3);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t22 = *((unsigned char *)t1);
    t6 = (t0 + 7488);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    t10 = (t9 + 56U);
    t12 = *((char **)t10);
    *((unsigned char *)t12) = t22;
    xsi_driver_first_trans_delta(t6, 0U, 1, 0LL);
    xsi_set_current_line(80, ng0);
    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t3 = (8 - 1);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 11449);
    t8 = xsi_mem_cmp(t6, t1, 2U);
    if (t8 == 1)
        goto LAB42;

LAB46:    t9 = (t0 + 11451);
    t11 = xsi_mem_cmp(t9, t1, 2U);
    if (t11 == 1)
        goto LAB43;

LAB47:    t12 = (t0 + 11453);
    t14 = xsi_mem_cmp(t12, t1, 2U);
    if (t14 == 1)
        goto LAB44;

LAB48:
LAB45:    xsi_set_current_line(88, ng0);
    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t1 = (t0 + 7552);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 9U);
    xsi_driver_first_trans_fast(t1);

LAB41:    xsi_set_current_line(91, ng0);
    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t3 = (8 - 8);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 7616);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    t10 = (t9 + 56U);
    t12 = *((char **)t10);
    memcpy(t12, t1, 8U);
    xsi_driver_first_trans_delta(t6, 1U, 8U, 0LL);
    xsi_set_current_line(92, ng0);
    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t8 = (8 - 8);
    t3 = (t8 * -1);
    t4 = (1U * t3);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t22 = *((unsigned char *)t1);
    t6 = (t0 + 7616);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    t10 = (t9 + 56U);
    t12 = *((char **)t10);
    *((unsigned char *)t12) = t22;
    xsi_driver_first_trans_delta(t6, 0U, 1, 0LL);
    t1 = (t0 + 6624);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(40, ng0);
    t15 = (t0 + 1832U);
    t16 = *((char **)t15);
    t15 = (t0 + 7168);
    t17 = (t15 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t16, 9U);
    xsi_driver_first_trans_fast(t15);
    goto LAB2;

LAB4:    xsi_set_current_line(42, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 11232U);
    t6 = (t0 + 1512U);
    t7 = *((char **)t6);
    t6 = (t0 + 11200U);
    t9 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t21, t2, t1, t7, t6);
    t10 = (t21 + 12U);
    t3 = *((unsigned int *)t10);
    t4 = (1U * t3);
    t22 = (9U != t4);
    if (t22 == 1)
        goto LAB11;

LAB12:    t12 = (t0 + 7168);
    t13 = (t12 + 56U);
    t15 = *((char **)t13);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t9, 9U);
    xsi_driver_first_trans_fast(t12);
    goto LAB2;

LAB5:    xsi_set_current_line(44, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 11232U);
    t6 = (t0 + 1672U);
    t7 = *((char **)t6);
    t6 = (t0 + 11216U);
    t9 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t21, t2, t1, t7, t6);
    t10 = (t21 + 12U);
    t3 = *((unsigned int *)t10);
    t4 = (1U * t3);
    t22 = (9U != t4);
    if (t22 == 1)
        goto LAB13;

LAB14:    t12 = (t0 + 7168);
    t13 = (t12 + 56U);
    t15 = *((char **)t13);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t9, 9U);
    xsi_driver_first_trans_fast(t12);
    goto LAB2;

LAB10:;
LAB11:    xsi_size_not_matching(9U, t4, 0);
    goto LAB12;

LAB13:    xsi_size_not_matching(9U, t4, 0);
    goto LAB14;

LAB16:    xsi_set_current_line(54, ng0);
    t15 = (t0 + 2152U);
    t16 = *((char **)t15);
    t15 = (t0 + 7296);
    t17 = (t15 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t16, 9U);
    xsi_driver_first_trans_fast(t15);
    goto LAB15;

LAB17:    xsi_set_current_line(56, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t1 = (t0 + 11248U);
    t6 = (t0 + 1512U);
    t7 = *((char **)t6);
    t6 = (t0 + 11200U);
    t9 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t21, t2, t1, t7, t6);
    t10 = (t21 + 12U);
    t3 = *((unsigned int *)t10);
    t4 = (1U * t3);
    t22 = (9U != t4);
    if (t22 == 1)
        goto LAB24;

LAB25:    t12 = (t0 + 7296);
    t13 = (t12 + 56U);
    t15 = *((char **)t13);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t9, 9U);
    xsi_driver_first_trans_fast(t12);
    goto LAB15;

LAB18:    xsi_set_current_line(58, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t1 = (t0 + 11248U);
    t6 = (t0 + 1672U);
    t7 = *((char **)t6);
    t6 = (t0 + 11216U);
    t9 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t21, t2, t1, t7, t6);
    t10 = (t21 + 12U);
    t3 = *((unsigned int *)t10);
    t4 = (1U * t3);
    t22 = (9U != t4);
    if (t22 == 1)
        goto LAB26;

LAB27:    t12 = (t0 + 7296);
    t13 = (t12 + 56U);
    t15 = *((char **)t13);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t9, 9U);
    xsi_driver_first_trans_fast(t12);
    goto LAB15;

LAB23:;
LAB24:    xsi_size_not_matching(9U, t4, 0);
    goto LAB25;

LAB26:    xsi_size_not_matching(9U, t4, 0);
    goto LAB27;

LAB29:    xsi_set_current_line(68, ng0);
    t15 = (t0 + 2472U);
    t16 = *((char **)t15);
    t15 = (t0 + 7424);
    t17 = (t15 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t16, 9U);
    xsi_driver_first_trans_fast(t15);
    goto LAB28;

LAB30:    xsi_set_current_line(70, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 11264U);
    t6 = (t0 + 1512U);
    t7 = *((char **)t6);
    t6 = (t0 + 11200U);
    t9 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t21, t2, t1, t7, t6);
    t10 = (t21 + 12U);
    t3 = *((unsigned int *)t10);
    t4 = (1U * t3);
    t22 = (9U != t4);
    if (t22 == 1)
        goto LAB37;

LAB38:    t12 = (t0 + 7424);
    t13 = (t12 + 56U);
    t15 = *((char **)t13);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t9, 9U);
    xsi_driver_first_trans_fast(t12);
    goto LAB28;

LAB31:    xsi_set_current_line(72, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 11264U);
    t6 = (t0 + 1672U);
    t7 = *((char **)t6);
    t6 = (t0 + 11216U);
    t9 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t21, t2, t1, t7, t6);
    t10 = (t21 + 12U);
    t3 = *((unsigned int *)t10);
    t4 = (1U * t3);
    t22 = (9U != t4);
    if (t22 == 1)
        goto LAB39;

LAB40:    t12 = (t0 + 7424);
    t13 = (t12 + 56U);
    t15 = *((char **)t13);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t9, 9U);
    xsi_driver_first_trans_fast(t12);
    goto LAB28;

LAB36:;
LAB37:    xsi_size_not_matching(9U, t4, 0);
    goto LAB38;

LAB39:    xsi_size_not_matching(9U, t4, 0);
    goto LAB40;

LAB42:    xsi_set_current_line(82, ng0);
    t15 = (t0 + 2792U);
    t16 = *((char **)t15);
    t15 = (t0 + 7552);
    t17 = (t15 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t16, 9U);
    xsi_driver_first_trans_fast(t15);
    goto LAB41;

LAB43:    xsi_set_current_line(84, ng0);
    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t1 = (t0 + 11280U);
    t6 = (t0 + 1512U);
    t7 = *((char **)t6);
    t6 = (t0 + 11200U);
    t9 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t21, t2, t1, t7, t6);
    t10 = (t21 + 12U);
    t3 = *((unsigned int *)t10);
    t4 = (1U * t3);
    t22 = (9U != t4);
    if (t22 == 1)
        goto LAB50;

LAB51:    t12 = (t0 + 7552);
    t13 = (t12 + 56U);
    t15 = *((char **)t13);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t9, 9U);
    xsi_driver_first_trans_fast(t12);
    goto LAB41;

LAB44:    xsi_set_current_line(86, ng0);
    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t1 = (t0 + 11280U);
    t6 = (t0 + 1672U);
    t7 = *((char **)t6);
    t6 = (t0 + 11216U);
    t9 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t21, t2, t1, t7, t6);
    t10 = (t21 + 12U);
    t3 = *((unsigned int *)t10);
    t4 = (1U * t3);
    t22 = (9U != t4);
    if (t22 == 1)
        goto LAB52;

LAB53:    t12 = (t0 + 7552);
    t13 = (t12 + 56U);
    t15 = *((char **)t13);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t9, 9U);
    xsi_driver_first_trans_fast(t12);
    goto LAB41;

LAB49:;
LAB50:    xsi_size_not_matching(9U, t4, 0);
    goto LAB51;

LAB52:    xsi_size_not_matching(9U, t4, 0);
    goto LAB53;

}

static void work_a_1820119024_3618923685_p_8(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(96, ng0);

LAB3:    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t3 = (8 - 8);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 7680);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_fast_port(t6);

LAB2:    t11 = (t0 + 6640);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_1820119024_3618923685_init()
{
	static char *pe[] = {(void *)work_a_1820119024_3618923685_p_0,(void *)work_a_1820119024_3618923685_p_1,(void *)work_a_1820119024_3618923685_p_2,(void *)work_a_1820119024_3618923685_p_3,(void *)work_a_1820119024_3618923685_p_4,(void *)work_a_1820119024_3618923685_p_5,(void *)work_a_1820119024_3618923685_p_6,(void *)work_a_1820119024_3618923685_p_7,(void *)work_a_1820119024_3618923685_p_8};
	xsi_register_didat("work_a_1820119024_3618923685", "isim/booth_multiplier_isim_beh.exe.sim/work/a_1820119024_3618923685.didat");
	xsi_register_executes(pe);
}
