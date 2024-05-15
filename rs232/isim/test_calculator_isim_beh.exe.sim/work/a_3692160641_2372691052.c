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
static const char *ng0 = "C:/Users/Dawid/Desktop/calculator-with-rs232-main/rs232/test_calculator.vhd";



static void work_a_3692160641_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 3992U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(145, ng0);
    t2 = (t0 + 4624);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(146, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3800);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(147, ng0);
    t2 = (t0 + 4624);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(148, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3800);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_3692160641_2372691052_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int64 t4;
    int64 t5;
    int64 t6;
    int t7;
    int t8;
    char *t9;
    char *t10;
    int t11;
    int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    int64 t23;

LAB0:    t1 = (t0 + 4240U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(155, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t5 = (1 * 1000LL);
    t6 = (t4 + t5);
    t2 = (t0 + 4048);
    xsi_process_wait(t2, t6);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(158, ng0);
    t2 = (t0 + 8928);
    *((int *)t2) = 1;
    t3 = (t0 + 8932);
    *((int *)t3) = 4;
    t7 = 1;
    t8 = 4;

LAB8:    if (t7 <= t8)
        goto LAB9;

LAB11:    xsi_set_current_line(164, ng0);
    t2 = (t0 + 8936);
    *((int *)t2) = 3;
    t3 = (t0 + 8940);
    *((int *)t3) = 0;
    t7 = 3;
    t8 = 0;

LAB17:    if (t7 >= t8)
        goto LAB18;

LAB20:    xsi_set_current_line(168, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t5 = (3 * t4);
    t6 = (1 * 1000LL);
    t23 = (t5 + t6);
    t2 = (t0 + 4048);
    xsi_process_wait(t2, t23);

LAB28:    *((char **)t1) = &&LAB29;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB9:    xsi_set_current_line(159, ng0);
    t9 = (t0 + 2408U);
    t10 = *((char **)t9);
    t9 = (t0 + 8928);
    t11 = *((int *)t9);
    t12 = (t11 - 1);
    t13 = (t12 * 1);
    t14 = (8U * t13);
    t15 = (0 + t14);
    t16 = (t10 + t15);
    t17 = (t0 + 4688);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t16, 8U);
    xsi_driver_first_trans_fast(t17);
    xsi_set_current_line(160, ng0);
    t2 = (t0 + 4752);
    t3 = (t2 + 56U);
    t9 = *((char **)t3);
    t10 = (t9 + 56U);
    t16 = *((char **)t10);
    *((unsigned char *)t16) = (unsigned char)3;
    xsi_driver_first_trans_delta(t2, 0U, 1, 0LL);
    t17 = (t0 + 2288U);
    t18 = *((char **)t17);
    t4 = *((int64 *)t18);
    t17 = (t0 + 4752);
    t19 = (t17 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    *((unsigned char *)t22) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t17, 0U, 1, t4);
    xsi_set_current_line(161, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t5 = (7 * 1000LL);
    t6 = (t4 + t5);
    t2 = (t0 + 4048);
    xsi_process_wait(t2, t6);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB10:    t2 = (t0 + 8928);
    t7 = *((int *)t2);
    t3 = (t0 + 8932);
    t8 = *((int *)t3);
    if (t7 == t8)
        goto LAB11;

LAB16:    t11 = (t7 + 1);
    t7 = t11;
    t9 = (t0 + 8928);
    *((int *)t9) = t7;
    goto LAB8;

LAB12:    goto LAB10;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

LAB18:    xsi_set_current_line(165, ng0);
    t9 = (t0 + 2288U);
    t10 = *((char **)t9);
    t4 = *((int64 *)t10);
    t5 = (2 * t4);
    t6 = (1.4299999999999999 * 1000LL);
    t23 = (t5 + t6);
    t9 = (t0 + 4048);
    xsi_process_wait(t9, t23);

LAB23:    *((char **)t1) = &&LAB24;
    goto LAB1;

LAB19:    t2 = (t0 + 8936);
    t7 = *((int *)t2);
    t3 = (t0 + 8940);
    t8 = *((int *)t3);
    if (t7 == t8)
        goto LAB20;

LAB25:    t11 = (t7 + -1);
    t7 = t11;
    t9 = (t0 + 8936);
    *((int *)t9) = t7;
    goto LAB17;

LAB21:    xsi_set_current_line(166, ng0);
    t2 = (t0 + 4816);
    t3 = (t2 + 56U);
    t9 = *((char **)t3);
    t10 = (t9 + 56U);
    t16 = *((char **)t10);
    *((unsigned char *)t16) = (unsigned char)3;
    xsi_driver_first_trans_delta(t2, 0U, 1, 0LL);
    t17 = (t0 + 2288U);
    t18 = *((char **)t17);
    t4 = *((int64 *)t18);
    t17 = (t0 + 4816);
    t19 = (t17 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    *((unsigned char *)t22) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t17, 0U, 1, t4);
    goto LAB19;

LAB22:    goto LAB21;

LAB24:    goto LAB22;

LAB26:    xsi_set_current_line(171, ng0);
    t2 = (t0 + 8944);
    *((int *)t2) = 1;
    t3 = (t0 + 8948);
    *((int *)t3) = 5;
    t7 = 1;
    t8 = 5;

LAB30:    if (t7 <= t8)
        goto LAB31;

LAB33:    xsi_set_current_line(177, ng0);
    t2 = (t0 + 8952);
    *((int *)t2) = 3;
    t3 = (t0 + 8956);
    *((int *)t3) = 0;
    t7 = 3;
    t8 = 0;

LAB39:    if (t7 >= t8)
        goto LAB40;

LAB42:    xsi_set_current_line(181, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t5 = (3 * t4);
    t6 = (1 * 1000LL);
    t23 = (t5 + t6);
    t2 = (t0 + 4048);
    xsi_process_wait(t2, t23);

LAB50:    *((char **)t1) = &&LAB51;
    goto LAB1;

LAB27:    goto LAB26;

LAB29:    goto LAB27;

LAB31:    xsi_set_current_line(172, ng0);
    t9 = (t0 + 2528U);
    t10 = *((char **)t9);
    t9 = (t0 + 8944);
    t11 = *((int *)t9);
    t12 = (t11 - 1);
    t13 = (t12 * 1);
    t14 = (8U * t13);
    t15 = (0 + t14);
    t16 = (t10 + t15);
    t17 = (t0 + 4688);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t16, 8U);
    xsi_driver_first_trans_fast(t17);
    xsi_set_current_line(173, ng0);
    t2 = (t0 + 4752);
    t3 = (t2 + 56U);
    t9 = *((char **)t3);
    t10 = (t9 + 56U);
    t16 = *((char **)t10);
    *((unsigned char *)t16) = (unsigned char)3;
    xsi_driver_first_trans_delta(t2, 0U, 1, 0LL);
    t17 = (t0 + 2288U);
    t18 = *((char **)t17);
    t4 = *((int64 *)t18);
    t17 = (t0 + 4752);
    t19 = (t17 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    *((unsigned char *)t22) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t17, 0U, 1, t4);
    xsi_set_current_line(174, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t5 = (7 * 1000LL);
    t6 = (t4 + t5);
    t2 = (t0 + 4048);
    xsi_process_wait(t2, t6);

LAB36:    *((char **)t1) = &&LAB37;
    goto LAB1;

LAB32:    t2 = (t0 + 8944);
    t7 = *((int *)t2);
    t3 = (t0 + 8948);
    t8 = *((int *)t3);
    if (t7 == t8)
        goto LAB33;

LAB38:    t11 = (t7 + 1);
    t7 = t11;
    t9 = (t0 + 8944);
    *((int *)t9) = t7;
    goto LAB30;

LAB34:    goto LAB32;

LAB35:    goto LAB34;

LAB37:    goto LAB35;

LAB40:    xsi_set_current_line(178, ng0);
    t9 = (t0 + 2288U);
    t10 = *((char **)t9);
    t4 = *((int64 *)t10);
    t5 = (2 * t4);
    t6 = (1.4299999999999999 * 1000LL);
    t23 = (t5 + t6);
    t9 = (t0 + 4048);
    xsi_process_wait(t9, t23);

LAB45:    *((char **)t1) = &&LAB46;
    goto LAB1;

LAB41:    t2 = (t0 + 8952);
    t7 = *((int *)t2);
    t3 = (t0 + 8956);
    t8 = *((int *)t3);
    if (t7 == t8)
        goto LAB42;

LAB47:    t11 = (t7 + -1);
    t7 = t11;
    t9 = (t0 + 8952);
    *((int *)t9) = t7;
    goto LAB39;

LAB43:    xsi_set_current_line(179, ng0);
    t2 = (t0 + 4816);
    t3 = (t2 + 56U);
    t9 = *((char **)t3);
    t10 = (t9 + 56U);
    t16 = *((char **)t10);
    *((unsigned char *)t16) = (unsigned char)3;
    xsi_driver_first_trans_delta(t2, 0U, 1, 0LL);
    t17 = (t0 + 2288U);
    t18 = *((char **)t17);
    t4 = *((int64 *)t18);
    t17 = (t0 + 4816);
    t19 = (t17 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    *((unsigned char *)t22) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t17, 0U, 1, t4);
    goto LAB41;

LAB44:    goto LAB43;

LAB46:    goto LAB44;

LAB48:    xsi_set_current_line(184, ng0);
    t2 = (t0 + 8960);
    *((int *)t2) = 1;
    t3 = (t0 + 8964);
    *((int *)t3) = 8;
    t7 = 1;
    t8 = 8;

LAB52:    if (t7 <= t8)
        goto LAB53;

LAB55:    xsi_set_current_line(190, ng0);
    t2 = (t0 + 8968);
    *((int *)t2) = 3;
    t3 = (t0 + 8972);
    *((int *)t3) = 0;
    t7 = 3;
    t8 = 0;

LAB61:    if (t7 >= t8)
        goto LAB62;

LAB64:    xsi_set_current_line(194, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t5 = (3 * t4);
    t6 = (1 * 1000LL);
    t23 = (t5 + t6);
    t2 = (t0 + 4048);
    xsi_process_wait(t2, t23);

LAB72:    *((char **)t1) = &&LAB73;
    goto LAB1;

LAB49:    goto LAB48;

LAB51:    goto LAB49;

LAB53:    xsi_set_current_line(185, ng0);
    t9 = (t0 + 2648U);
    t10 = *((char **)t9);
    t9 = (t0 + 8960);
    t11 = *((int *)t9);
    t12 = (t11 - 1);
    t13 = (t12 * 1);
    t14 = (8U * t13);
    t15 = (0 + t14);
    t16 = (t10 + t15);
    t17 = (t0 + 4688);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t16, 8U);
    xsi_driver_first_trans_fast(t17);
    xsi_set_current_line(186, ng0);
    t2 = (t0 + 4752);
    t3 = (t2 + 56U);
    t9 = *((char **)t3);
    t10 = (t9 + 56U);
    t16 = *((char **)t10);
    *((unsigned char *)t16) = (unsigned char)3;
    xsi_driver_first_trans_delta(t2, 0U, 1, 0LL);
    t17 = (t0 + 2288U);
    t18 = *((char **)t17);
    t4 = *((int64 *)t18);
    t17 = (t0 + 4752);
    t19 = (t17 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    *((unsigned char *)t22) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t17, 0U, 1, t4);
    xsi_set_current_line(187, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t5 = (7 * 1000LL);
    t6 = (t4 + t5);
    t2 = (t0 + 4048);
    xsi_process_wait(t2, t6);

LAB58:    *((char **)t1) = &&LAB59;
    goto LAB1;

LAB54:    t2 = (t0 + 8960);
    t7 = *((int *)t2);
    t3 = (t0 + 8964);
    t8 = *((int *)t3);
    if (t7 == t8)
        goto LAB55;

LAB60:    t11 = (t7 + 1);
    t7 = t11;
    t9 = (t0 + 8960);
    *((int *)t9) = t7;
    goto LAB52;

LAB56:    goto LAB54;

LAB57:    goto LAB56;

LAB59:    goto LAB57;

LAB62:    xsi_set_current_line(191, ng0);
    t9 = (t0 + 2288U);
    t10 = *((char **)t9);
    t4 = *((int64 *)t10);
    t5 = (2 * t4);
    t6 = (1.4299999999999999 * 1000LL);
    t23 = (t5 + t6);
    t9 = (t0 + 4048);
    xsi_process_wait(t9, t23);

LAB67:    *((char **)t1) = &&LAB68;
    goto LAB1;

LAB63:    t2 = (t0 + 8968);
    t7 = *((int *)t2);
    t3 = (t0 + 8972);
    t8 = *((int *)t3);
    if (t7 == t8)
        goto LAB64;

LAB69:    t11 = (t7 + -1);
    t7 = t11;
    t9 = (t0 + 8968);
    *((int *)t9) = t7;
    goto LAB61;

LAB65:    xsi_set_current_line(192, ng0);
    t2 = (t0 + 4816);
    t3 = (t2 + 56U);
    t9 = *((char **)t3);
    t10 = (t9 + 56U);
    t16 = *((char **)t10);
    *((unsigned char *)t16) = (unsigned char)3;
    xsi_driver_first_trans_delta(t2, 0U, 1, 0LL);
    t17 = (t0 + 2288U);
    t18 = *((char **)t17);
    t4 = *((int64 *)t18);
    t17 = (t0 + 4816);
    t19 = (t17 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    *((unsigned char *)t22) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t17, 0U, 1, t4);
    goto LAB63;

LAB66:    goto LAB65;

LAB68:    goto LAB66;

LAB70:    xsi_set_current_line(197, ng0);
    t2 = (t0 + 8976);
    *((int *)t2) = 1;
    t3 = (t0 + 8980);
    *((int *)t3) = 9;
    t7 = 1;
    t8 = 9;

LAB74:    if (t7 <= t8)
        goto LAB75;

LAB77:    xsi_set_current_line(203, ng0);
    t2 = (t0 + 8984);
    *((int *)t2) = 3;
    t3 = (t0 + 8988);
    *((int *)t3) = 0;
    t7 = 3;
    t8 = 0;

LAB83:    if (t7 >= t8)
        goto LAB84;

LAB86:    xsi_set_current_line(207, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t5 = (3 * t4);
    t6 = (1 * 1000LL);
    t23 = (t5 + t6);
    t2 = (t0 + 4048);
    xsi_process_wait(t2, t23);

LAB94:    *((char **)t1) = &&LAB95;
    goto LAB1;

LAB71:    goto LAB70;

LAB73:    goto LAB71;

LAB75:    xsi_set_current_line(198, ng0);
    t9 = (t0 + 2768U);
    t10 = *((char **)t9);
    t9 = (t0 + 8976);
    t11 = *((int *)t9);
    t12 = (t11 - 1);
    t13 = (t12 * 1);
    t14 = (8U * t13);
    t15 = (0 + t14);
    t16 = (t10 + t15);
    t17 = (t0 + 4688);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t16, 8U);
    xsi_driver_first_trans_fast(t17);
    xsi_set_current_line(199, ng0);
    t2 = (t0 + 4752);
    t3 = (t2 + 56U);
    t9 = *((char **)t3);
    t10 = (t9 + 56U);
    t16 = *((char **)t10);
    *((unsigned char *)t16) = (unsigned char)3;
    xsi_driver_first_trans_delta(t2, 0U, 1, 0LL);
    t17 = (t0 + 2288U);
    t18 = *((char **)t17);
    t4 = *((int64 *)t18);
    t17 = (t0 + 4752);
    t19 = (t17 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    *((unsigned char *)t22) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t17, 0U, 1, t4);
    xsi_set_current_line(200, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t5 = (7 * 1000LL);
    t6 = (t4 + t5);
    t2 = (t0 + 4048);
    xsi_process_wait(t2, t6);

LAB80:    *((char **)t1) = &&LAB81;
    goto LAB1;

LAB76:    t2 = (t0 + 8976);
    t7 = *((int *)t2);
    t3 = (t0 + 8980);
    t8 = *((int *)t3);
    if (t7 == t8)
        goto LAB77;

LAB82:    t11 = (t7 + 1);
    t7 = t11;
    t9 = (t0 + 8976);
    *((int *)t9) = t7;
    goto LAB74;

LAB78:    goto LAB76;

LAB79:    goto LAB78;

LAB81:    goto LAB79;

LAB84:    xsi_set_current_line(204, ng0);
    t9 = (t0 + 2288U);
    t10 = *((char **)t9);
    t4 = *((int64 *)t10);
    t5 = (2 * t4);
    t6 = (1.4299999999999999 * 1000LL);
    t23 = (t5 + t6);
    t9 = (t0 + 4048);
    xsi_process_wait(t9, t23);

LAB89:    *((char **)t1) = &&LAB90;
    goto LAB1;

LAB85:    t2 = (t0 + 8984);
    t7 = *((int *)t2);
    t3 = (t0 + 8988);
    t8 = *((int *)t3);
    if (t7 == t8)
        goto LAB86;

LAB91:    t11 = (t7 + -1);
    t7 = t11;
    t9 = (t0 + 8984);
    *((int *)t9) = t7;
    goto LAB83;

LAB87:    xsi_set_current_line(205, ng0);
    t2 = (t0 + 4816);
    t3 = (t2 + 56U);
    t9 = *((char **)t3);
    t10 = (t9 + 56U);
    t16 = *((char **)t10);
    *((unsigned char *)t16) = (unsigned char)3;
    xsi_driver_first_trans_delta(t2, 0U, 1, 0LL);
    t17 = (t0 + 2288U);
    t18 = *((char **)t17);
    t4 = *((int64 *)t18);
    t17 = (t0 + 4816);
    t19 = (t17 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    *((unsigned char *)t22) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t17, 0U, 1, t4);
    goto LAB85;

LAB88:    goto LAB87;

LAB90:    goto LAB88;

LAB92:    xsi_set_current_line(210, ng0);
    t2 = (t0 + 8992);
    *((int *)t2) = 1;
    t3 = (t0 + 8996);
    *((int *)t3) = 9;
    t7 = 1;
    t8 = 9;

LAB96:    if (t7 <= t8)
        goto LAB97;

LAB99:    xsi_set_current_line(216, ng0);
    t2 = (t0 + 9000);
    *((int *)t2) = 3;
    t3 = (t0 + 9004);
    *((int *)t3) = 0;
    t7 = 3;
    t8 = 0;

LAB105:    if (t7 >= t8)
        goto LAB106;

LAB108:    xsi_set_current_line(220, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t5 = (2 * t4);
    t6 = (1 * 1000LL);
    t23 = (t5 + t6);
    t2 = (t0 + 4048);
    xsi_process_wait(t2, t23);

LAB116:    *((char **)t1) = &&LAB117;
    goto LAB1;

LAB93:    goto LAB92;

LAB95:    goto LAB93;

LAB97:    xsi_set_current_line(211, ng0);
    t9 = (t0 + 2888U);
    t10 = *((char **)t9);
    t9 = (t0 + 8992);
    t11 = *((int *)t9);
    t12 = (t11 - 1);
    t13 = (t12 * 1);
    t14 = (8U * t13);
    t15 = (0 + t14);
    t16 = (t10 + t15);
    t17 = (t0 + 4688);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t16, 8U);
    xsi_driver_first_trans_fast(t17);
    xsi_set_current_line(212, ng0);
    t2 = (t0 + 4752);
    t3 = (t2 + 56U);
    t9 = *((char **)t3);
    t10 = (t9 + 56U);
    t16 = *((char **)t10);
    *((unsigned char *)t16) = (unsigned char)3;
    xsi_driver_first_trans_delta(t2, 0U, 1, 0LL);
    t17 = (t0 + 2288U);
    t18 = *((char **)t17);
    t4 = *((int64 *)t18);
    t17 = (t0 + 4752);
    t19 = (t17 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    *((unsigned char *)t22) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t17, 0U, 1, t4);
    xsi_set_current_line(213, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t5 = (7 * 1000LL);
    t6 = (t4 + t5);
    t2 = (t0 + 4048);
    xsi_process_wait(t2, t6);

LAB102:    *((char **)t1) = &&LAB103;
    goto LAB1;

LAB98:    t2 = (t0 + 8992);
    t7 = *((int *)t2);
    t3 = (t0 + 8996);
    t8 = *((int *)t3);
    if (t7 == t8)
        goto LAB99;

LAB104:    t11 = (t7 + 1);
    t7 = t11;
    t9 = (t0 + 8992);
    *((int *)t9) = t7;
    goto LAB96;

LAB100:    goto LAB98;

LAB101:    goto LAB100;

LAB103:    goto LAB101;

LAB106:    xsi_set_current_line(217, ng0);
    t9 = (t0 + 2288U);
    t10 = *((char **)t9);
    t4 = *((int64 *)t10);
    t5 = (2 * t4);
    t6 = (1.4299999999999999 * 1000LL);
    t23 = (t5 + t6);
    t9 = (t0 + 4048);
    xsi_process_wait(t9, t23);

LAB111:    *((char **)t1) = &&LAB112;
    goto LAB1;

LAB107:    t2 = (t0 + 9000);
    t7 = *((int *)t2);
    t3 = (t0 + 9004);
    t8 = *((int *)t3);
    if (t7 == t8)
        goto LAB108;

LAB113:    t11 = (t7 + -1);
    t7 = t11;
    t9 = (t0 + 9000);
    *((int *)t9) = t7;
    goto LAB105;

LAB109:    xsi_set_current_line(218, ng0);
    t2 = (t0 + 4816);
    t3 = (t2 + 56U);
    t9 = *((char **)t3);
    t10 = (t9 + 56U);
    t16 = *((char **)t10);
    *((unsigned char *)t16) = (unsigned char)3;
    xsi_driver_first_trans_delta(t2, 0U, 1, 0LL);
    t17 = (t0 + 2288U);
    t18 = *((char **)t17);
    t4 = *((int64 *)t18);
    t17 = (t0 + 4816);
    t19 = (t17 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    *((unsigned char *)t22) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t17, 0U, 1, t4);
    goto LAB107;

LAB110:    goto LAB109;

LAB112:    goto LAB110;

LAB114:    xsi_set_current_line(223, ng0);
    t2 = (t0 + 9008);
    *((int *)t2) = 1;
    t3 = (t0 + 9012);
    *((int *)t3) = 9;
    t7 = 1;
    t8 = 9;

LAB118:    if (t7 <= t8)
        goto LAB119;

LAB121:    xsi_set_current_line(229, ng0);
    t2 = (t0 + 9016);
    *((int *)t2) = 3;
    t3 = (t0 + 9020);
    *((int *)t3) = 0;
    t7 = 3;
    t8 = 0;

LAB127:    if (t7 >= t8)
        goto LAB128;

LAB130:    xsi_set_current_line(233, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t5 = (2 * t4);
    t6 = (1 * 1000LL);
    t23 = (t5 + t6);
    t2 = (t0 + 4048);
    xsi_process_wait(t2, t23);

LAB138:    *((char **)t1) = &&LAB139;
    goto LAB1;

LAB115:    goto LAB114;

LAB117:    goto LAB115;

LAB119:    xsi_set_current_line(224, ng0);
    t9 = (t0 + 3008U);
    t10 = *((char **)t9);
    t9 = (t0 + 9008);
    t11 = *((int *)t9);
    t12 = (t11 - 1);
    t13 = (t12 * 1);
    t14 = (8U * t13);
    t15 = (0 + t14);
    t16 = (t10 + t15);
    t17 = (t0 + 4688);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t16, 8U);
    xsi_driver_first_trans_fast(t17);
    xsi_set_current_line(225, ng0);
    t2 = (t0 + 4752);
    t3 = (t2 + 56U);
    t9 = *((char **)t3);
    t10 = (t9 + 56U);
    t16 = *((char **)t10);
    *((unsigned char *)t16) = (unsigned char)3;
    xsi_driver_first_trans_delta(t2, 0U, 1, 0LL);
    t17 = (t0 + 2288U);
    t18 = *((char **)t17);
    t4 = *((int64 *)t18);
    t17 = (t0 + 4752);
    t19 = (t17 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    *((unsigned char *)t22) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t17, 0U, 1, t4);
    xsi_set_current_line(226, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t5 = (7 * 1000LL);
    t6 = (t4 + t5);
    t2 = (t0 + 4048);
    xsi_process_wait(t2, t6);

LAB124:    *((char **)t1) = &&LAB125;
    goto LAB1;

LAB120:    t2 = (t0 + 9008);
    t7 = *((int *)t2);
    t3 = (t0 + 9012);
    t8 = *((int *)t3);
    if (t7 == t8)
        goto LAB121;

LAB126:    t11 = (t7 + 1);
    t7 = t11;
    t9 = (t0 + 9008);
    *((int *)t9) = t7;
    goto LAB118;

LAB122:    goto LAB120;

LAB123:    goto LAB122;

LAB125:    goto LAB123;

LAB128:    xsi_set_current_line(230, ng0);
    t9 = (t0 + 2288U);
    t10 = *((char **)t9);
    t4 = *((int64 *)t10);
    t5 = (2 * t4);
    t6 = (1.4299999999999999 * 1000LL);
    t23 = (t5 + t6);
    t9 = (t0 + 4048);
    xsi_process_wait(t9, t23);

LAB133:    *((char **)t1) = &&LAB134;
    goto LAB1;

LAB129:    t2 = (t0 + 9016);
    t7 = *((int *)t2);
    t3 = (t0 + 9020);
    t8 = *((int *)t3);
    if (t7 == t8)
        goto LAB130;

LAB135:    t11 = (t7 + -1);
    t7 = t11;
    t9 = (t0 + 9016);
    *((int *)t9) = t7;
    goto LAB127;

LAB131:    xsi_set_current_line(231, ng0);
    t2 = (t0 + 4816);
    t3 = (t2 + 56U);
    t9 = *((char **)t3);
    t10 = (t9 + 56U);
    t16 = *((char **)t10);
    *((unsigned char *)t16) = (unsigned char)3;
    xsi_driver_first_trans_delta(t2, 0U, 1, 0LL);
    t17 = (t0 + 2288U);
    t18 = *((char **)t17);
    t4 = *((int64 *)t18);
    t17 = (t0 + 4816);
    t19 = (t17 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    *((unsigned char *)t22) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t17, 0U, 1, t4);
    goto LAB129;

LAB132:    goto LAB131;

LAB134:    goto LAB132;

LAB136:    xsi_set_current_line(235, ng0);

LAB142:    *((char **)t1) = &&LAB143;
    goto LAB1;

LAB137:    goto LAB136;

LAB139:    goto LAB137;

LAB140:    goto LAB2;

LAB141:    goto LAB140;

LAB143:    goto LAB141;

}


extern void work_a_3692160641_2372691052_init()
{
	static char *pe[] = {(void *)work_a_3692160641_2372691052_p_0,(void *)work_a_3692160641_2372691052_p_1};
	xsi_register_didat("work_a_3692160641_2372691052", "isim/test_calculator_isim_beh.exe.sim/work/a_3692160641_2372691052.didat");
	xsi_register_executes(pe);
}
