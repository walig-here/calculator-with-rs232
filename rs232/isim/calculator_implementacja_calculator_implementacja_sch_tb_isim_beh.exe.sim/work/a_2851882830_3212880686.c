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
static const char *ng0 = "C:/Users/Dawid/Desktop/calculator-with-rs232/rs232/test_receiver_calculator_receiver.vhd";



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

LAB0:    t1 = (t0 + 3392U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 4024);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 1808U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3200);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 4024);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 1808U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3200);
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
    int t6;
    int t7;
    char *t8;
    char *t9;
    int t10;
    int t11;
    char *t12;
    char *t13;
    int t14;
    int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    int t19;
    int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned char t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    int64 t32;
    int64 t33;

LAB0:    t1 = (t0 + 3640U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 1928U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t5 = (1.3000000000000000 * t4);
    t2 = (t0 + 3448);
    xsi_process_wait(t2, t5);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 7770);
    *((int *)t2) = 1;
    t3 = (t0 + 7774);
    *((int *)t3) = 4;
    t6 = 1;
    t7 = 4;

LAB8:    if (t6 <= t7)
        goto LAB9;

LAB11:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 1928U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t5 = (40 * t4);
    t32 = (1 * 1000LL);
    t33 = (t5 + t32);
    t2 = (t0 + 3448);
    xsi_process_wait(t2, t33);

LAB24:    *((char **)t1) = &&LAB25;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB9:    xsi_set_current_line(104, ng0);
    t8 = (t0 + 7778);
    *((int *)t8) = 0;
    t9 = (t0 + 7782);
    *((int *)t9) = 9;
    t10 = 0;
    t11 = 9;

LAB12:    if (t10 <= t11)
        goto LAB13;

LAB15:
LAB10:    t2 = (t0 + 7770);
    t6 = *((int *)t2);
    t3 = (t0 + 7774);
    t7 = *((int *)t3);
    if (t6 == t7)
        goto LAB11;

LAB21:    t10 = (t6 + 1);
    t6 = t10;
    t8 = (t0 + 7770);
    *((int *)t8) = t6;
    goto LAB8;

LAB13:    xsi_set_current_line(105, ng0);
    t12 = (t0 + 2048U);
    t13 = *((char **)t12);
    t12 = (t0 + 7778);
    t14 = *((int *)t12);
    t15 = (t14 - 9);
    t16 = (t15 * -1);
    xsi_vhdl_check_range_of_index(9, 0, -1, *((int *)t12));
    t17 = (1U * t16);
    t18 = (t0 + 7770);
    t19 = *((int *)t18);
    t20 = (t19 - 1);
    t21 = (t20 * 1);
    xsi_vhdl_check_range_of_index(1, 4, 1, *((int *)t18));
    t22 = (10U * t21);
    t23 = (0 + t22);
    t24 = (t23 + t17);
    t25 = (t13 + t24);
    t26 = *((unsigned char *)t25);
    t27 = (t0 + 4088);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    *((unsigned char *)t31) = t26;
    xsi_driver_first_trans_fast(t27);
    xsi_set_current_line(106, ng0);
    t2 = (t0 + 1928U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t2 = (t0 + 3448);
    xsi_process_wait(t2, t4);

LAB18:    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB14:    t2 = (t0 + 7778);
    t10 = *((int *)t2);
    t3 = (t0 + 7782);
    t11 = *((int *)t3);
    if (t10 == t11)
        goto LAB15;

LAB20:    t14 = (t10 + 1);
    t10 = t14;
    t8 = (t0 + 7778);
    *((int *)t8) = t10;
    goto LAB12;

LAB16:    goto LAB14;

LAB17:    goto LAB16;

LAB19:    goto LAB17;

LAB22:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 7786);
    *((int *)t2) = 1;
    t3 = (t0 + 7790);
    *((int *)t3) = 4;
    t6 = 1;
    t7 = 4;

LAB26:    if (t6 <= t7)
        goto LAB27;

LAB29:    xsi_set_current_line(117, ng0);
    t2 = (t0 + 1928U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t5 = (40 * t4);
    t32 = (1 * 1000LL);
    t33 = (t5 + t32);
    t2 = (t0 + 3448);
    xsi_process_wait(t2, t33);

LAB42:    *((char **)t1) = &&LAB43;
    goto LAB1;

LAB23:    goto LAB22;

LAB25:    goto LAB23;

LAB27:    xsi_set_current_line(112, ng0);
    t8 = (t0 + 7794);
    *((int *)t8) = 0;
    t9 = (t0 + 7798);
    *((int *)t9) = 9;
    t10 = 0;
    t11 = 9;

LAB30:    if (t10 <= t11)
        goto LAB31;

LAB33:
LAB28:    t2 = (t0 + 7786);
    t6 = *((int *)t2);
    t3 = (t0 + 7790);
    t7 = *((int *)t3);
    if (t6 == t7)
        goto LAB29;

LAB39:    t10 = (t6 + 1);
    t6 = t10;
    t8 = (t0 + 7786);
    *((int *)t8) = t6;
    goto LAB26;

LAB31:    xsi_set_current_line(113, ng0);
    t12 = (t0 + 2168U);
    t13 = *((char **)t12);
    t12 = (t0 + 7794);
    t14 = *((int *)t12);
    t15 = (t14 - 9);
    t16 = (t15 * -1);
    xsi_vhdl_check_range_of_index(9, 0, -1, *((int *)t12));
    t17 = (1U * t16);
    t18 = (t0 + 7786);
    t19 = *((int *)t18);
    t20 = (t19 - 1);
    t21 = (t20 * 1);
    xsi_vhdl_check_range_of_index(1, 4, 1, *((int *)t18));
    t22 = (10U * t21);
    t23 = (0 + t22);
    t24 = (t23 + t17);
    t25 = (t13 + t24);
    t26 = *((unsigned char *)t25);
    t27 = (t0 + 4088);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    *((unsigned char *)t31) = t26;
    xsi_driver_first_trans_fast(t27);
    xsi_set_current_line(114, ng0);
    t2 = (t0 + 1928U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t2 = (t0 + 3448);
    xsi_process_wait(t2, t4);

LAB36:    *((char **)t1) = &&LAB37;
    goto LAB1;

LAB32:    t2 = (t0 + 7794);
    t10 = *((int *)t2);
    t3 = (t0 + 7798);
    t11 = *((int *)t3);
    if (t10 == t11)
        goto LAB33;

LAB38:    t14 = (t10 + 1);
    t10 = t14;
    t8 = (t0 + 7794);
    *((int *)t8) = t10;
    goto LAB30;

LAB34:    goto LAB32;

LAB35:    goto LAB34;

LAB37:    goto LAB35;

LAB40:    xsi_set_current_line(119, ng0);
    t2 = (t0 + 7802);
    *((int *)t2) = 1;
    t3 = (t0 + 7806);
    *((int *)t3) = 8;
    t6 = 1;
    t7 = 8;

LAB44:    if (t6 <= t7)
        goto LAB45;

LAB47:    xsi_set_current_line(125, ng0);
    t2 = (t0 + 1928U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t5 = (40 * t4);
    t32 = (1 * 1000LL);
    t33 = (t5 + t32);
    t2 = (t0 + 3448);
    xsi_process_wait(t2, t33);

LAB60:    *((char **)t1) = &&LAB61;
    goto LAB1;

LAB41:    goto LAB40;

LAB43:    goto LAB41;

LAB45:    xsi_set_current_line(120, ng0);
    t8 = (t0 + 7810);
    *((int *)t8) = 0;
    t9 = (t0 + 7814);
    *((int *)t9) = 9;
    t10 = 0;
    t11 = 9;

LAB48:    if (t10 <= t11)
        goto LAB49;

LAB51:
LAB46:    t2 = (t0 + 7802);
    t6 = *((int *)t2);
    t3 = (t0 + 7806);
    t7 = *((int *)t3);
    if (t6 == t7)
        goto LAB47;

LAB57:    t10 = (t6 + 1);
    t6 = t10;
    t8 = (t0 + 7802);
    *((int *)t8) = t6;
    goto LAB44;

LAB49:    xsi_set_current_line(121, ng0);
    t12 = (t0 + 2288U);
    t13 = *((char **)t12);
    t12 = (t0 + 7810);
    t14 = *((int *)t12);
    t15 = (t14 - 9);
    t16 = (t15 * -1);
    xsi_vhdl_check_range_of_index(9, 0, -1, *((int *)t12));
    t17 = (1U * t16);
    t18 = (t0 + 7802);
    t19 = *((int *)t18);
    t20 = (t19 - 1);
    t21 = (t20 * 1);
    xsi_vhdl_check_range_of_index(1, 8, 1, *((int *)t18));
    t22 = (10U * t21);
    t23 = (0 + t22);
    t24 = (t23 + t17);
    t25 = (t13 + t24);
    t26 = *((unsigned char *)t25);
    t27 = (t0 + 4088);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    *((unsigned char *)t31) = t26;
    xsi_driver_first_trans_fast(t27);
    xsi_set_current_line(122, ng0);
    t2 = (t0 + 1928U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t2 = (t0 + 3448);
    xsi_process_wait(t2, t4);

LAB54:    *((char **)t1) = &&LAB55;
    goto LAB1;

LAB50:    t2 = (t0 + 7810);
    t10 = *((int *)t2);
    t3 = (t0 + 7814);
    t11 = *((int *)t3);
    if (t10 == t11)
        goto LAB51;

LAB56:    t14 = (t10 + 1);
    t10 = t14;
    t8 = (t0 + 7810);
    *((int *)t8) = t10;
    goto LAB48;

LAB52:    goto LAB50;

LAB53:    goto LAB52;

LAB55:    goto LAB53;

LAB58:    xsi_set_current_line(127, ng0);
    t2 = (t0 + 7818);
    *((int *)t2) = 1;
    t3 = (t0 + 7822);
    *((int *)t3) = 7;
    t6 = 1;
    t7 = 7;

LAB62:    if (t6 <= t7)
        goto LAB63;

LAB65:    xsi_set_current_line(134, ng0);

LAB78:    *((char **)t1) = &&LAB79;
    goto LAB1;

LAB59:    goto LAB58;

LAB61:    goto LAB59;

LAB63:    xsi_set_current_line(128, ng0);
    t8 = (t0 + 7826);
    *((int *)t8) = 0;
    t9 = (t0 + 7830);
    *((int *)t9) = 9;
    t10 = 0;
    t11 = 9;

LAB66:    if (t10 <= t11)
        goto LAB67;

LAB69:
LAB64:    t2 = (t0 + 7818);
    t6 = *((int *)t2);
    t3 = (t0 + 7822);
    t7 = *((int *)t3);
    if (t6 == t7)
        goto LAB65;

LAB75:    t10 = (t6 + 1);
    t6 = t10;
    t8 = (t0 + 7818);
    *((int *)t8) = t6;
    goto LAB62;

LAB67:    xsi_set_current_line(129, ng0);
    t12 = (t0 + 2408U);
    t13 = *((char **)t12);
    t12 = (t0 + 7826);
    t14 = *((int *)t12);
    t15 = (t14 - 9);
    t16 = (t15 * -1);
    xsi_vhdl_check_range_of_index(9, 0, -1, *((int *)t12));
    t17 = (1U * t16);
    t18 = (t0 + 7818);
    t19 = *((int *)t18);
    t20 = (t19 - 1);
    t21 = (t20 * 1);
    xsi_vhdl_check_range_of_index(1, 7, 1, *((int *)t18));
    t22 = (10U * t21);
    t23 = (0 + t22);
    t24 = (t23 + t17);
    t25 = (t13 + t24);
    t26 = *((unsigned char *)t25);
    t27 = (t0 + 4088);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    *((unsigned char *)t31) = t26;
    xsi_driver_first_trans_fast(t27);
    xsi_set_current_line(130, ng0);
    t2 = (t0 + 1928U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t2 = (t0 + 3448);
    xsi_process_wait(t2, t4);

LAB72:    *((char **)t1) = &&LAB73;
    goto LAB1;

LAB68:    t2 = (t0 + 7826);
    t10 = *((int *)t2);
    t3 = (t0 + 7830);
    t11 = *((int *)t3);
    if (t10 == t11)
        goto LAB69;

LAB74:    t14 = (t10 + 1);
    t10 = t14;
    t8 = (t0 + 7826);
    *((int *)t8) = t10;
    goto LAB66;

LAB70:    goto LAB68;

LAB71:    goto LAB70;

LAB73:    goto LAB71;

LAB76:    goto LAB2;

LAB77:    goto LAB76;

LAB79:    goto LAB77;

}


extern void work_a_2851882830_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2851882830_3212880686_p_0,(void *)work_a_2851882830_3212880686_p_1};
	xsi_register_didat("work_a_2851882830_3212880686", "isim/calculator_implementacja_calculator_implementacja_sch_tb_isim_beh.exe.sim/work/a_2851882830_3212880686.didat");
	xsi_register_executes(pe);
}
