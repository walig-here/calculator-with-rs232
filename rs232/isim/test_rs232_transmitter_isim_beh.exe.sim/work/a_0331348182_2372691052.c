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
static const char *ng0 = "D:/Politechnika-Wroclawska/semestr-6/ucisw-2/ucisw-projekt/rs232/test_rs232_transmitter.vhd";



static void work_a_0331348182_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 3712U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 4408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 2608U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3520);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 4408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(99, ng0);
    t2 = (t0 + 2608U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3520);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_0331348182_2372691052_p_1(char *t0)
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
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    int t21;
    int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned char t26;
    unsigned char t27;
    unsigned char t28;
    unsigned char t29;
    unsigned char t30;
    int64 t31;

LAB0:    t1 = (t0 + 3960U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 2728U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t5 = (t4 * 0.75000000000000000);
    t6 = (5 * 1000LL);
    t7 = (t5 + t6);
    t2 = (t0 + 3768);
    xsi_process_wait(t2, t7);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 8272);
    *((int *)t2) = 1;
    t3 = (t0 + 8276);
    *((int *)t3) = 5;
    t8 = 1;
    t9 = 5;

LAB8:    if (t8 <= t9)
        goto LAB9;

LAB11:    xsi_set_current_line(115, ng0);
    t2 = (t0 + 4472);
    t3 = (t2 + 56U);
    t10 = *((char **)t3);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(118, ng0);
    t2 = (t0 + 2248U);
    t3 = *((char **)t2);
    t2 = (t0 + 4536);
    t10 = (t2 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t3, 8U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(119, ng0);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t26 = *((unsigned char *)t3);
    t27 = (t26 == (unsigned char)3);
    if (t27 != 0)
        goto LAB21;

LAB23:    xsi_set_current_line(122, ng0);
    t2 = (t0 + 2728U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t5 = (2 * t4);
    t2 = (t0 + 3768);
    xsi_process_wait(t2, t5);

LAB30:    *((char **)t1) = &&LAB31;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB9:    xsi_set_current_line(110, ng0);
    t10 = (t0 + 4472);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_first_trans_delta(t10, 0U, 1, 0LL);
    t15 = (t0 + 2728U);
    t16 = *((char **)t15);
    t4 = *((int64 *)t16);
    t5 = (2 * t4);
    t15 = (t0 + 4472);
    t17 = (t15 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t15, 0U, 1, t5);
    xsi_set_current_line(111, ng0);
    t2 = (t0 + 2128U);
    t3 = *((char **)t2);
    t2 = (t0 + 8272);
    t21 = *((int *)t2);
    t22 = (t21 - 1);
    t23 = (t22 * 1);
    t24 = (8U * t23);
    t25 = (0 + t24);
    t10 = (t3 + t25);
    t11 = (t0 + 4536);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t10, 8U);
    xsi_driver_first_trans_fast(t11);
    xsi_set_current_line(112, ng0);

LAB14:    t2 = (t0 + 4280);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB10:    t2 = (t0 + 8272);
    t8 = *((int *)t2);
    t3 = (t0 + 8276);
    t9 = *((int *)t3);
    if (t8 == t9)
        goto LAB11;

LAB20:    t21 = (t8 + 1);
    t8 = t21;
    t10 = (t0 + 8272);
    *((int *)t10) = t8;
    goto LAB8;

LAB12:    t3 = (t0 + 4280);
    *((int *)t3) = 0;
    xsi_set_current_line(113, ng0);
    t4 = (2 * 1000LL);
    t2 = (t0 + 3768);
    xsi_process_wait(t2, t4);

LAB18:    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB13:    t3 = (t0 + 1832U);
    t10 = *((char **)t3);
    t26 = *((unsigned char *)t10);
    t27 = (t26 == (unsigned char)2);
    if (t27 == 1)
        goto LAB12;
    else
        goto LAB14;

LAB15:    goto LAB13;

LAB16:    goto LAB10;

LAB17:    goto LAB16;

LAB19:    goto LAB17;

LAB21:    xsi_set_current_line(120, ng0);

LAB26:    t2 = (t0 + 4296);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB22:    xsi_set_current_line(126, ng0);
    t2 = (t0 + 4472);
    t3 = (t2 + 56U);
    t10 = *((char **)t3);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_delta(t2, 0U, 1, 0LL);
    t13 = (t0 + 2728U);
    t14 = *((char **)t13);
    t4 = *((int64 *)t14);
    t5 = (2 * t4);
    t13 = (t0 + 4472);
    t15 = (t13 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t13, 0U, 1, t5);
    xsi_set_current_line(127, ng0);
    t2 = (t0 + 2248U);
    t3 = *((char **)t2);
    t2 = (t0 + 4536);
    t10 = (t2 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t3, 8U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(128, ng0);
    t2 = (t0 + 2728U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t5 = (4 * t4);
    t2 = (t0 + 4600);
    t10 = (t2 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)3;
    xsi_driver_first_trans_delta(t2, 0U, 1, t5);
    t14 = (t0 + 2728U);
    t15 = *((char **)t14);
    t6 = *((int64 *)t15);
    t7 = (4.5000000000000000 * t6);
    t14 = (t0 + 4600);
    t16 = (t14 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t14, 0U, 1, t7);
    t20 = (t0 + 4600);
    xsi_driver_intertial_reject(t20, t5, t5);
    xsi_set_current_line(132, ng0);

LAB34:    t2 = (t0 + 4312);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB35;
    goto LAB1;

LAB24:    t10 = (t0 + 4296);
    *((int *)t10) = 0;
    goto LAB22;

LAB25:    t10 = (t0 + 1832U);
    t11 = *((char **)t10);
    t28 = *((unsigned char *)t11);
    t29 = (t28 == (unsigned char)2);
    if (t29 == 1)
        goto LAB24;
    else
        goto LAB26;

LAB27:    goto LAB25;

LAB28:    goto LAB22;

LAB29:    goto LAB28;

LAB31:    goto LAB29;

LAB32:    t3 = (t0 + 4312);
    *((int *)t3) = 0;
    xsi_set_current_line(133, ng0);
    t4 = (2 * 1000LL);
    t2 = (t0 + 4472);
    t3 = (t2 + 56U);
    t10 = *((char **)t3);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_delta(t2, 0U, 1, t4);
    t13 = (t0 + 2728U);
    t14 = *((char **)t13);
    t5 = *((int64 *)t14);
    t6 = (2 * t5);
    t7 = (2 * 1000LL);
    t31 = (t6 + t7);
    t13 = (t0 + 4472);
    t15 = (t13 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t13, 0U, 1, t31);
    t19 = (t0 + 4472);
    xsi_driver_intertial_reject(t19, t4, t4);
    xsi_set_current_line(134, ng0);
    t2 = (t0 + 2368U);
    t3 = *((char **)t2);
    t2 = (t0 + 4536);
    t10 = (t2 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t3, 8U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(137, ng0);

LAB41:    t2 = (t0 + 4328);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB42;
    goto LAB1;

LAB33:    t3 = (t0 + 1832U);
    t10 = *((char **)t3);
    t27 = *((unsigned char *)t10);
    t28 = (t27 == (unsigned char)2);
    if (t28 == 1)
        goto LAB36;

LAB37:    t26 = (unsigned char)0;

LAB38:    if (t26 == 1)
        goto LAB32;
    else
        goto LAB34;

LAB35:    goto LAB33;

LAB36:    t3 = (t0 + 1352U);
    t11 = *((char **)t3);
    t29 = *((unsigned char *)t11);
    t30 = (t29 == (unsigned char)2);
    t26 = t30;
    goto LAB38;

LAB39:    t3 = (t0 + 4328);
    *((int *)t3) = 0;
    xsi_set_current_line(138, ng0);
    t2 = (t0 + 2728U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t5 = (5 * t4);
    t2 = (t0 + 3768);
    xsi_process_wait(t2, t5);

LAB45:    *((char **)t1) = &&LAB46;
    goto LAB1;

LAB40:    t3 = (t0 + 1832U);
    t10 = *((char **)t3);
    t26 = *((unsigned char *)t10);
    t27 = (t26 == (unsigned char)2);
    if (t27 == 1)
        goto LAB39;
    else
        goto LAB41;

LAB42:    goto LAB40;

LAB43:    xsi_set_current_line(141, ng0);
    t2 = (t0 + 4472);
    t3 = (t2 + 56U);
    t10 = *((char **)t3);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_delta(t2, 0U, 1, 0LL);
    t13 = (t0 + 2728U);
    t14 = *((char **)t13);
    t4 = *((int64 *)t14);
    t5 = (2 * t4);
    t13 = (t0 + 4472);
    t15 = (t13 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t13, 0U, 1, t5);
    xsi_set_current_line(142, ng0);
    t2 = (t0 + 2488U);
    t3 = *((char **)t2);
    t2 = (t0 + 4536);
    t10 = (t2 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t3, 8U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(144, ng0);

LAB49:    *((char **)t1) = &&LAB50;
    goto LAB1;

LAB44:    goto LAB43;

LAB46:    goto LAB44;

LAB47:    goto LAB2;

LAB48:    goto LAB47;

LAB50:    goto LAB48;

}


extern void work_a_0331348182_2372691052_init()
{
	static char *pe[] = {(void *)work_a_0331348182_2372691052_p_0,(void *)work_a_0331348182_2372691052_p_1};
	xsi_register_didat("work_a_0331348182_2372691052", "isim/test_rs232_transmitter_isim_beh.exe.sim/work/a_0331348182_2372691052.didat");
	xsi_register_executes(pe);
}
