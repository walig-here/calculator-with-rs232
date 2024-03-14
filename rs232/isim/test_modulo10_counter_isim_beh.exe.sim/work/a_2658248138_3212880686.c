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
static const char *ng0 = "D:/Politechnika-Wroclawska/semestr-6/ucisw-2/ucisw-projekt/rs232/divider_50MHz_to_115200Hz.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_1547198987_1035706684(char *, char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_1547270861_1035706684(char *, char *, char *, char *, char *, char *);
unsigned char ieee_p_1242562249_sub_2110411308_1035706684(char *, char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_2658248138_3212880686_p_0(char *t0)
{
    char t16[16];
    char t19[16];
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
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    int t17;
    unsigned int t18;
    char *t20;
    int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;

LAB0:    xsi_set_current_line(51, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 3480);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(52, ng0);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)2);
    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(56, ng0);
    t1 = (t0 + 1512U);
    t3 = *((char **)t1);
    t13 = (15 - 14);
    t14 = (t13 * 1U);
    t15 = (0 + t14);
    t1 = (t3 + t15);
    t4 = (t16 + 0U);
    t7 = (t4 + 0U);
    *((int *)t7) = 14;
    t7 = (t4 + 4U);
    *((int *)t7) = 0;
    t7 = (t4 + 8U);
    *((int *)t7) = -1;
    t17 = (0 - 14);
    t18 = (t17 * -1);
    t18 = (t18 + 1);
    t7 = (t4 + 12U);
    *((unsigned int *)t7) = t18;
    t7 = (t0 + 1928U);
    t8 = *((char **)t7);
    t7 = (t0 + 6016U);
    t9 = (t0 + 1808U);
    t10 = *((char **)t9);
    t9 = (t0 + 6000U);
    t11 = ieee_p_1242562249_sub_1547270861_1035706684(IEEE_P_1242562249, t19, t8, t7, t10, t9);
    t2 = ieee_p_1242562249_sub_2110411308_1035706684(IEEE_P_1242562249, t1, t16, t11, t19);
    if (t2 != 0)
        goto LAB8;

LAB10:
LAB9:    xsi_set_current_line(59, ng0);
    t1 = (t0 + 1512U);
    t3 = *((char **)t1);
    t13 = (15 - 14);
    t14 = (t13 * 1U);
    t15 = (0 + t14);
    t1 = (t3 + t15);
    t4 = (t19 + 0U);
    t7 = (t4 + 0U);
    *((int *)t7) = 14;
    t7 = (t4 + 4U);
    *((int *)t7) = 0;
    t7 = (t4 + 8U);
    *((int *)t7) = -1;
    t17 = (0 - 14);
    t18 = (t17 * -1);
    t18 = (t18 + 1);
    t7 = (t4 + 12U);
    *((unsigned int *)t7) = t18;
    t7 = (t0 + 1808U);
    t8 = *((char **)t7);
    t7 = (t0 + 6000U);
    t9 = ieee_p_1242562249_sub_1547198987_1035706684(IEEE_P_1242562249, t16, t1, t19, t8, t7);
    t10 = (t16 + 12U);
    t18 = *((unsigned int *)t10);
    t22 = (1U * t18);
    t2 = (15U != t22);
    if (t2 == 1)
        goto LAB11;

LAB12:    t11 = (t0 + 3576);
    t12 = (t11 + 56U);
    t20 = *((char **)t12);
    t24 = (t20 + 56U);
    t25 = *((char **)t24);
    memcpy(t25, t9, 15U);
    xsi_driver_first_trans_delta(t11, 1U, 15U, 0LL);

LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(53, ng0);
    t3 = xsi_get_transient_memory(15U);
    memset(t3, 0, 15U);
    t7 = t3;
    memset(t7, (unsigned char)2, 15U);
    t8 = (t0 + 3576);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t3, 15U);
    xsi_driver_first_trans_delta(t8, 1U, 15U, 0LL);
    xsi_set_current_line(54, ng0);
    t1 = (t0 + 3576);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    goto LAB6;

LAB8:    xsi_set_current_line(57, ng0);
    t12 = (t0 + 1512U);
    t20 = *((char **)t12);
    t21 = (15 - 15);
    t18 = (t21 * -1);
    t22 = (1U * t18);
    t23 = (0 + t22);
    t12 = (t20 + t23);
    t5 = *((unsigned char *)t12);
    t6 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t5);
    t24 = (t0 + 3576);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    *((unsigned char *)t28) = t6;
    xsi_driver_first_trans_delta(t24, 0U, 1, 0LL);
    goto LAB9;

LAB11:    xsi_size_not_matching(15U, t22, 0);
    goto LAB12;

}

static void work_a_2658248138_3212880686_p_1(char *t0)
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

LAB0:    xsi_set_current_line(65, ng0);

LAB3:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = (15 - 15);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 3640);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast_port(t8);

LAB2:    t13 = (t0 + 3496);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_2658248138_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2658248138_3212880686_p_0,(void *)work_a_2658248138_3212880686_p_1};
	xsi_register_didat("work_a_2658248138_3212880686", "isim/test_modulo10_counter_isim_beh.exe.sim/work/a_2658248138_3212880686.didat");
	xsi_register_executes(pe);
}
