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


static void work_a_3978357126_3212880686_p_0(char *t0)
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

LAB0:    t1 = (t0 + 3952U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t2 = (char *)((nl0) + t4);
    goto **((char **)t2);

LAB4:    xsi_set_current_line(86, ng0);

LAB9:    t2 = (t0 + 5512);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB10;

LAB1:    return;
LAB5:    xsi_set_current_line(87, ng0);
    t5 = (t0 + 5672);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast(t5);
    goto LAB4;

LAB6:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 5672);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB4;

LAB7:    t3 = (t0 + 5512);
    *((int *)t3) = 0;
    goto LAB2;

LAB8:    goto LAB7;

LAB10:    goto LAB8;

}

static void work_a_3978357126_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(91, ng0);

LAB3:    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 5736);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 5528);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3978357126_3212880686_p_2(char *t0)
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
LAB3:    t1 = (t0 + 5544);
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
    t1 = (t0 + 5800);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t2;
    xsi_driver_first_trans_fast(t1);

LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(97, ng0);
    t3 = (t0 + 5800);
    t7 = (t3 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)0;
    xsi_driver_first_trans_fast(t3);
    goto LAB6;

}

static void work_a_3978357126_3212880686_p_3(char *t0)
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
    t1 = (t0 + 5864);
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

LAB2:    t1 = (t0 + 5560);
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
    t1 = (t0 + 9776);
    t3 = 1;
    if (4U == 4U)
        goto LAB11;

LAB12:    t3 = 0;

LAB13:    if (t3 != 0)
        goto LAB8;

LAB10:
LAB9:    goto LAB2;

LAB5:    xsi_set_current_line(111, ng0);
    t4 = (t0 + 5864);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)1;
    xsi_driver_first_trans_fast(t4);
    goto LAB6;

LAB8:    xsi_set_current_line(117, ng0);
    t7 = (t0 + 5864);
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

static void work_a_3978357126_3212880686_p_4(char *t0)
{
    char t14[16];
    char t22[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    unsigned int t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    int t23;
    unsigned int t24;

LAB0:    xsi_set_current_line(124, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t11 = (t4 == (unsigned char)3);
    if (t11 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:    t1 = (t0 + 2752U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB12;

LAB13:    xsi_set_current_line(131, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 5928);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 9U);
    xsi_driver_first_trans_fast(t1);

LAB3:    t1 = (t0 + 5576);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(125, ng0);
    t1 = xsi_get_transient_memory(9U);
    memset(t1, 0, 9U);
    t5 = t1;
    memset(t5, (unsigned char)3, 9U);
    t6 = (t0 + 5928);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 9U);
    xsi_driver_first_trans_fast(t6);
    goto LAB3;

LAB5:    xsi_set_current_line(127, ng0);
    t1 = (t0 + 1032U);
    t6 = *((char **)t1);
    t7 = ((IEEE_P_2592010699) + 4024);
    t8 = (t0 + 9692U);
    t1 = xsi_base_array_concat(t1, t14, t7, (char)97, t6, t8, (char)99, (unsigned char)2, (char)101);
    t15 = (8U + 1U);
    t16 = (9U != t15);
    if (t16 == 1)
        goto LAB10;

LAB11:    t9 = (t0 + 5928);
    t10 = (t9 + 56U);
    t17 = *((char **)t10);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t1, 9U);
    xsi_driver_first_trans_fast(t9);
    goto LAB3;

LAB7:    t1 = (t0 + 2472U);
    t5 = *((char **)t1);
    t12 = *((unsigned char *)t5);
    t13 = (t12 == (unsigned char)2);
    t3 = t13;
    goto LAB9;

LAB10:    xsi_size_not_matching(9U, t15, 0);
    goto LAB11;

LAB12:    xsi_set_current_line(129, ng0);
    t2 = (t0 + 2312U);
    t5 = *((char **)t2);
    t15 = (8 - 8);
    t20 = (t15 * 1U);
    t21 = (0 + t20);
    t2 = (t5 + t21);
    t7 = ((IEEE_P_2592010699) + 4024);
    t8 = (t22 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 8;
    t9 = (t8 + 4U);
    *((int *)t9) = 1;
    t9 = (t8 + 8U);
    *((int *)t9) = -1;
    t23 = (1 - 8);
    t24 = (t23 * -1);
    t24 = (t24 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t24;
    t6 = xsi_base_array_concat(t6, t14, t7, (char)99, (unsigned char)3, (char)97, t2, t22, (char)101);
    t24 = (1U + 8U);
    t4 = (9U != t24);
    if (t4 == 1)
        goto LAB14;

LAB15:    t9 = (t0 + 5928);
    t10 = (t9 + 56U);
    t17 = *((char **)t10);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t6, 9U);
    xsi_driver_first_trans_fast(t9);
    goto LAB3;

LAB14:    xsi_size_not_matching(9U, t24, 0);
    goto LAB15;

}

static void work_a_3978357126_3212880686_p_5(char *t0)
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

LAB0:    xsi_set_current_line(136, ng0);

LAB3:    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = (0 - 8);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 5992);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast_port(t8);

LAB2:    t13 = (t0 + 5592);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_3978357126_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3978357126_3212880686_p_0,(void *)work_a_3978357126_3212880686_p_1,(void *)work_a_3978357126_3212880686_p_2,(void *)work_a_3978357126_3212880686_p_3,(void *)work_a_3978357126_3212880686_p_4,(void *)work_a_3978357126_3212880686_p_5};
	xsi_register_didat("work_a_3978357126_3212880686", "isim/test_rs232_transmitter_isim_beh.exe.sim/work/a_3978357126_3212880686.didat");
	xsi_register_executes(pe);
}
