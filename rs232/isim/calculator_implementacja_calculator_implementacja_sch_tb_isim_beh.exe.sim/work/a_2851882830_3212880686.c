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
static const char *ng0 = "C:/Users/Dawid/Desktop/calculator-with-rs232/rs232/test_receiver_calculator.vhd";



static void work_a_2851882830_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 3352U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 3984);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 2128U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3160);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 3984);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 2128U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3160);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_2851882830_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int64 t4;
    int64 t5;
    int64 t6;
    int64 t7;
    int t8;
    int t9;
    char *t10;
    char *t11;
    int t12;
    int t13;
    char *t14;
    char *t15;
    int t16;
    int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    int t21;
    int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    unsigned char t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;

LAB0:    t1 = (t0 + 3600U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 2248U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t5 = (2 * t4);
    t6 = (3 * 1000LL);
    t7 = (t5 + t6);
    t2 = (t0 + 3408);
    xsi_process_wait(t2, t7);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 7248);
    *((int *)t2) = 1;
    t3 = (t0 + 7252);
    *((int *)t3) = 4;
    t8 = 1;
    t9 = 4;

LAB8:    if (t8 <= t9)
        goto LAB9;

LAB11:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 2248U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t5 = (2 * t4);
    t2 = (t0 + 3408);
    xsi_process_wait(t2, t5);

LAB28:    *((char **)t1) = &&LAB29;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB9:    xsi_set_current_line(82, ng0);
    t10 = (t0 + 7256);
    *((int *)t10) = 0;
    t11 = (t0 + 7260);
    *((int *)t11) = 9;
    t12 = 0;
    t13 = 9;

LAB12:    if (t12 <= t13)
        goto LAB13;

LAB15:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 2248U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t5 = (1.4299999999999999 * t4);
    t2 = (t0 + 3408);
    xsi_process_wait(t2, t5);

LAB23:    *((char **)t1) = &&LAB24;
    goto LAB1;

LAB10:    t2 = (t0 + 7248);
    t8 = *((int *)t2);
    t3 = (t0 + 7252);
    t9 = *((int *)t3);
    if (t8 == t9)
        goto LAB11;

LAB25:    t12 = (t8 + 1);
    t8 = t12;
    t10 = (t0 + 7248);
    *((int *)t10) = t8;
    goto LAB8;

LAB13:    xsi_set_current_line(83, ng0);
    t14 = (t0 + 2368U);
    t15 = *((char **)t14);
    t14 = (t0 + 7256);
    t16 = *((int *)t14);
    t17 = (t16 - 9);
    t18 = (t17 * -1);
    xsi_vhdl_check_range_of_index(9, 0, -1, *((int *)t14));
    t19 = (1U * t18);
    t20 = (t0 + 7248);
    t21 = *((int *)t20);
    t22 = (t21 - 1);
    t23 = (t22 * 1);
    xsi_vhdl_check_range_of_index(1, 4, 1, *((int *)t20));
    t24 = (10U * t23);
    t25 = (0 + t24);
    t26 = (t25 + t19);
    t27 = (t15 + t26);
    t28 = *((unsigned char *)t27);
    t29 = (t0 + 4048);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    *((unsigned char *)t33) = t28;
    xsi_driver_first_trans_fast(t29);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 2248U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t2 = (t0 + 3408);
    xsi_process_wait(t2, t4);

LAB18:    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB14:    t2 = (t0 + 7256);
    t12 = *((int *)t2);
    t3 = (t0 + 7260);
    t13 = *((int *)t3);
    if (t12 == t13)
        goto LAB15;

LAB20:    t16 = (t12 + 1);
    t12 = t16;
    t10 = (t0 + 7256);
    *((int *)t10) = t12;
    goto LAB12;

LAB16:    goto LAB14;

LAB17:    goto LAB16;

LAB19:    goto LAB17;

LAB21:    goto LAB10;

LAB22:    goto LAB21;

LAB24:    goto LAB22;

LAB26:    xsi_set_current_line(90, ng0);

LAB32:    *((char **)t1) = &&LAB33;
    goto LAB1;

LAB27:    goto LAB26;

LAB29:    goto LAB27;

LAB30:    goto LAB2;

LAB31:    goto LAB30;

LAB33:    goto LAB31;

}


extern void work_a_2851882830_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2851882830_3212880686_p_0,(void *)work_a_2851882830_3212880686_p_1};
	xsi_register_didat("work_a_2851882830_3212880686", "isim/calculator_implementacja_calculator_implementacja_sch_tb_isim_beh.exe.sim/work/a_2851882830_3212880686.didat");
	xsi_register_executes(pe);
}
