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
static const char *ng0 = "D:/Politechnika-Wroclawska/semestr-6/ucisw-2/ucisw-projekt/rs232/rs232_transmitter.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_2455703382_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    static char *nl0[] = {&&LAB6, &&LAB5};

LAB0:    t1 = (t0 + 3792U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t2 = (char *)((nl0) + t4);
    goto **((char **)t2);

LAB4:    xsi_set_current_line(70, ng0);

LAB9:    t2 = (t0 + 5352);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB10;

LAB1:    return;
LAB5:    xsi_set_current_line(71, ng0);
    t5 = (t0 + 5512);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast(t5);
    goto LAB4;

LAB6:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 5512);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB4;

LAB7:    t3 = (t0 + 5352);
    *((int *)t3) = 0;
    goto LAB2;

LAB8:    goto LAB7;

LAB10:    goto LAB8;

}

static void work_a_2455703382_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    static char *nl0[] = {&&LAB6, &&LAB5};

LAB0:    t1 = (t0 + 4040U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t2 = (char *)((nl0) + t4);
    goto **((char **)t2);

LAB4:    xsi_set_current_line(75, ng0);

LAB9:    t2 = (t0 + 5368);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB10;

LAB1:    return;
LAB5:    xsi_set_current_line(76, ng0);
    t5 = (t0 + 5576);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t5);
    goto LAB4;

LAB6:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 5576);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB4;

LAB7:    t3 = (t0 + 5368);
    *((int *)t3) = 0;
    goto LAB2;

LAB8:    goto LAB7;

LAB10:    goto LAB8;

}

static void work_a_2455703382_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
    int t13;
    unsigned int t14;
    unsigned int t15;
    static char *nl0[] = {&&LAB3, &&LAB4};

LAB0:    xsi_set_current_line(81, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 5384);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(83, ng0);
    t4 = (t0 + 5640);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t4);
    goto LAB2;

LAB4:    xsi_set_current_line(85, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 9359);
    t3 = 1;
    if (4U == 4U)
        goto LAB8;

LAB9:    t3 = 0;

LAB10:    if (t3 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(88, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t13 = (0 - 8);
    t9 = (t13 * -1);
    t14 = (1U * t9);
    t15 = (0 + t14);
    t1 = (t2 + t15);
    t3 = *((unsigned char *)t1);
    t4 = (t0 + 5640);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_fast_port(t4);

LAB6:    goto LAB2;

LAB5:    xsi_set_current_line(86, ng0);
    t7 = (t0 + 5640);
    t8 = (t7 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t7);
    goto LAB6;

LAB8:    t9 = 0;

LAB11:    if (t9 < 4U)
        goto LAB12;
    else
        goto LAB10;

LAB12:    t5 = (t2 + t9);
    t6 = (t1 + t9);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB9;

LAB13:    t9 = (t9 + 1);
    goto LAB11;

}

static void work_a_2455703382_3212880686_p_3(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    xsi_set_current_line(95, ng0);
    t1 = (t0 + 1472U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 5400);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(96, ng0);
    t3 = (t0 + 1352U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(99, ng0);
    t1 = (t0 + 2152U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 5704);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t2;
    xsi_driver_first_trans_fast(t1);

LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(97, ng0);
    t3 = (t0 + 5704);
    t7 = (t3 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)0;
    xsi_driver_first_trans_fast(t3);
    goto LAB6;

}

static void work_a_2455703382_3212880686_p_4(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    char *t11;
    unsigned int t12;
    char *t13;
    char *t14;
    static char *nl0[] = {&&LAB3, &&LAB4};

LAB0:    xsi_set_current_line(106, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 5768);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(107, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 5416);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(110, ng0);
    t4 = (t0 + 1192U);
    t5 = *((char **)t4);
    t8 = *((unsigned char *)t5);
    t9 = (t8 == (unsigned char)3);
    if (t9 != 0)
        goto LAB5;

LAB7:
LAB6:    goto LAB2;

LAB4:    xsi_set_current_line(116, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 9363);
    t3 = 1;
    if (4U == 4U)
        goto LAB11;

LAB12:    t3 = 0;

LAB13:    if (t3 != 0)
        goto LAB8;

LAB10:
LAB9:    goto LAB2;

LAB5:    xsi_set_current_line(111, ng0);
    t4 = (t0 + 5768);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)1;
    xsi_driver_first_trans_fast(t4);
    goto LAB6;

LAB8:    xsi_set_current_line(117, ng0);
    t7 = (t0 + 5768);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)0;
    xsi_driver_first_trans_fast(t7);
    goto LAB9;

LAB11:    t12 = 0;

LAB14:    if (t12 < 4U)
        goto LAB15;
    else
        goto LAB13;

LAB15:    t5 = (t2 + t12);
    t6 = (t1 + t12);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB12;

LAB16:    t12 = (t12 + 1);
    goto LAB14;

}

static void work_a_2455703382_3212880686_p_5(char *t0)
{
    char t12[16];
    char t14[16];
    char t28[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    char *t15;
    char *t16;
    int t17;
    unsigned int t18;
    unsigned char t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;

LAB0:    xsi_set_current_line(124, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)1);
    if (t4 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 5432);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(125, ng0);
    t1 = (t0 + 2632U);
    t5 = *((char **)t1);
    t1 = (t0 + 9367);
    t7 = xsi_mem_cmp(t1, t5, 4U);
    if (t7 == 1)
        goto LAB6;

LAB8:
LAB7:    xsi_set_current_line(129, ng0);
    t1 = (t0 + 9372);
    t5 = (t0 + 2312U);
    t6 = *((char **)t5);
    t18 = (8 - 8);
    t25 = (t18 * 1U);
    t26 = (0 + t25);
    t5 = (t6 + t26);
    t9 = ((IEEE_P_2592010699) + 4024);
    t10 = (t14 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 0;
    t11 = (t10 + 4U);
    *((int *)t11) = 0;
    t11 = (t10 + 8U);
    *((int *)t11) = 1;
    t7 = (0 - 0);
    t27 = (t7 * 1);
    t27 = (t27 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t27;
    t11 = (t28 + 0U);
    t13 = (t11 + 0U);
    *((int *)t13) = 8;
    t13 = (t11 + 4U);
    *((int *)t13) = 1;
    t13 = (t11 + 8U);
    *((int *)t13) = -1;
    t17 = (1 - 8);
    t27 = (t17 * -1);
    t27 = (t27 + 1);
    t13 = (t11 + 12U);
    *((unsigned int *)t13) = t27;
    t8 = xsi_base_array_concat(t8, t12, t9, (char)97, t1, t14, (char)97, t5, t28, (char)101);
    t27 = (1U + 8U);
    t3 = (9U != t27);
    if (t3 == 1)
        goto LAB12;

LAB13:    t13 = (t0 + 5832);
    t15 = (t13 + 56U);
    t16 = *((char **)t15);
    t20 = (t16 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t8, 9U);
    xsi_driver_first_trans_fast(t13);

LAB5:    goto LAB3;

LAB6:    xsi_set_current_line(127, ng0);
    t8 = (t0 + 9371);
    t10 = (t0 + 1032U);
    t11 = *((char **)t10);
    t13 = ((IEEE_P_2592010699) + 4024);
    t15 = (t14 + 0U);
    t16 = (t15 + 0U);
    *((int *)t16) = 0;
    t16 = (t15 + 4U);
    *((int *)t16) = 0;
    t16 = (t15 + 8U);
    *((int *)t16) = 1;
    t17 = (0 - 0);
    t18 = (t17 * 1);
    t18 = (t18 + 1);
    t16 = (t15 + 12U);
    *((unsigned int *)t16) = t18;
    t16 = (t0 + 9276U);
    t10 = xsi_base_array_concat(t10, t12, t13, (char)97, t8, t14, (char)97, t11, t16, (char)101);
    t18 = (1U + 8U);
    t19 = (9U != t18);
    if (t19 == 1)
        goto LAB10;

LAB11:    t20 = (t0 + 5832);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t10, 9U);
    xsi_driver_first_trans_fast(t20);
    goto LAB5;

LAB9:;
LAB10:    xsi_size_not_matching(9U, t18, 0);
    goto LAB11;

LAB12:    xsi_size_not_matching(9U, t27, 0);
    goto LAB13;

}


extern void work_a_2455703382_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2455703382_3212880686_p_0,(void *)work_a_2455703382_3212880686_p_1,(void *)work_a_2455703382_3212880686_p_2,(void *)work_a_2455703382_3212880686_p_3,(void *)work_a_2455703382_3212880686_p_4,(void *)work_a_2455703382_3212880686_p_5};
	xsi_register_didat("work_a_2455703382_3212880686", "isim/rs232_transmitter_isim_beh.exe.sim/work/a_2455703382_3212880686.didat");
	xsi_register_executes(pe);
}
