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
static const char *ng0 = "C:/Users/Rian/Downloads/projeto 1 - contador-20240422T204137Z-001/projeto 1 - contador/lab3_contador/lab3_contador/contador_module.vhd";
extern char *IEEE_P_3499444699;

char *ieee_p_3499444699_sub_2213602152_3536714472(char *, char *, int , int );


static void work_a_0594899276_3212880686_p_0(char *t0)
{
    char *t1;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(30, ng0);

LAB3:    t1 = (t0 + 9272);
    t3 = (t0 + 4864);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 4U);
    xsi_driver_first_trans_fast_port(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0594899276_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    int t14;
    int t15;
    char *t16;

LAB0:    xsi_set_current_line(37, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1152U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 4768);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(38, ng0);
    t1 = (t0 + 2848U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = 0;
    goto LAB3;

LAB5:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1512U);
    t8 = *((char **)t2);
    t9 = *((unsigned char *)t8);
    t2 = (t0 + 2312U);
    t10 = *((char **)t2);
    t11 = *((unsigned char *)t10);
    t12 = (t9 != t11);
    if (t12 != 0)
        goto LAB10;

LAB12:    xsi_set_current_line(48, ng0);
    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;

LAB11:    goto LAB3;

LAB7:    t2 = (t0 + 1192U);
    t5 = *((char **)t2);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t3 = t7;
    goto LAB9;

LAB10:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 2848U);
    t13 = *((char **)t2);
    t14 = *((int *)t13);
    t15 = (t14 + 1);
    t2 = (t0 + 2848U);
    t16 = *((char **)t2);
    t2 = (t16 + 0);
    *((int *)t2) = t15;
    xsi_set_current_line(43, ng0);
    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    t14 = *((int *)t2);
    t15 = (5 * 1);
    t3 = (t14 == t15);
    if (t3 != 0)
        goto LAB13;

LAB15:
LAB14:    goto LAB11;

LAB13:    xsi_set_current_line(44, ng0);
    t1 = (t0 + 1512U);
    t5 = *((char **)t1);
    t4 = *((unsigned char *)t5);
    t1 = (t0 + 4928);
    t8 = (t1 + 56U);
    t10 = *((char **)t8);
    t13 = (t10 + 56U);
    t16 = *((char **)t13);
    *((unsigned char *)t16) = t4;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(45, ng0);
    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;
    goto LAB14;

}

static void work_a_0594899276_3212880686_p_2(char *t0)
{
    char t19[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    unsigned char t12;
    unsigned char t13;
    char *t14;
    int t15;
    unsigned char t16;
    char *t17;
    int t18;
    unsigned int t20;
    char *t21;
    int t22;
    int t24;
    char *t25;
    int t27;
    char *t28;
    int t30;
    char *t31;
    int t33;
    char *t34;
    int t36;
    char *t37;
    int t39;
    char *t40;
    int t42;
    char *t43;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;

LAB0:    xsi_set_current_line(58, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 2272U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    xsi_set_current_line(80, ng0);
    t1 = (t0 + 2968U);
    t2 = *((char **)t1);
    t15 = *((int *)t2);
    t1 = ieee_p_3499444699_sub_2213602152_3536714472(IEEE_P_3499444699, t19, t15, 4);
    t5 = (t19 + 12U);
    t20 = *((unsigned int *)t5);
    t20 = (t20 * 1U);
    t3 = (4U != t20);
    if (t3 == 1)
        goto LAB22;

LAB23:    t8 = (t0 + 4992);
    t11 = (t8 + 56U);
    t14 = *((char **)t11);
    t17 = (t14 + 56U);
    t21 = *((char **)t17);
    memcpy(t21, t1, 4U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(82, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t1 = (t0 + 9276);
    t15 = xsi_mem_cmp(t1, t2, 4U);
    if (t15 == 1)
        goto LAB25;

LAB36:    t8 = (t0 + 9280);
    t18 = xsi_mem_cmp(t8, t2, 4U);
    if (t18 == 1)
        goto LAB26;

LAB37:    t14 = (t0 + 9284);
    t22 = xsi_mem_cmp(t14, t2, 4U);
    if (t22 == 1)
        goto LAB27;

LAB38:    t21 = (t0 + 9288);
    t24 = xsi_mem_cmp(t21, t2, 4U);
    if (t24 == 1)
        goto LAB28;

LAB39:    t25 = (t0 + 9292);
    t27 = xsi_mem_cmp(t25, t2, 4U);
    if (t27 == 1)
        goto LAB29;

LAB40:    t28 = (t0 + 9296);
    t30 = xsi_mem_cmp(t28, t2, 4U);
    if (t30 == 1)
        goto LAB30;

LAB41:    t31 = (t0 + 9300);
    t33 = xsi_mem_cmp(t31, t2, 4U);
    if (t33 == 1)
        goto LAB31;

LAB42:    t34 = (t0 + 9304);
    t36 = xsi_mem_cmp(t34, t2, 4U);
    if (t36 == 1)
        goto LAB32;

LAB43:    t37 = (t0 + 9308);
    t39 = xsi_mem_cmp(t37, t2, 4U);
    if (t39 == 1)
        goto LAB33;

LAB44:    t40 = (t0 + 9312);
    t42 = xsi_mem_cmp(t40, t2, 4U);
    if (t42 == 1)
        goto LAB34;

LAB45:
LAB35:    xsi_set_current_line(93, ng0);
    t1 = (t0 + 9386);
    t5 = (t0 + 5056);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t14 = (t11 + 56U);
    t17 = *((char **)t14);
    memcpy(t17, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);

LAB24:    t1 = (t0 + 4784);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(59, ng0);
    t1 = (t0 + 2968U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = 0;
    goto LAB3;

LAB5:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1032U);
    t8 = *((char **)t2);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB10;

LAB12:
LAB11:    goto LAB3;

LAB7:    t2 = (t0 + 2312U);
    t5 = *((char **)t2);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t3 = t7;
    goto LAB9;

LAB10:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1672U);
    t11 = *((char **)t2);
    t12 = *((unsigned char *)t11);
    t13 = (t12 == (unsigned char)2);
    if (t13 != 0)
        goto LAB13;

LAB15:    xsi_set_current_line(70, ng0);
    t1 = (t0 + 2968U);
    t2 = *((char **)t1);
    t15 = *((int *)t2);
    t3 = (t15 == 9);
    if (t3 != 0)
        goto LAB19;

LAB21:    xsi_set_current_line(73, ng0);
    t1 = (t0 + 2968U);
    t2 = *((char **)t1);
    t15 = *((int *)t2);
    t18 = (t15 + 1);
    t1 = (t0 + 2968U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = t18;

LAB20:
LAB14:    goto LAB11;

LAB13:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 2968U);
    t14 = *((char **)t2);
    t15 = *((int *)t14);
    t16 = (t15 == 0);
    if (t16 != 0)
        goto LAB16;

LAB18:    xsi_set_current_line(67, ng0);
    t1 = (t0 + 2968U);
    t2 = *((char **)t1);
    t15 = *((int *)t2);
    t18 = (t15 - 1);
    t1 = (t0 + 2968U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = t18;

LAB17:    goto LAB14;

LAB16:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 2968U);
    t17 = *((char **)t2);
    t2 = (t17 + 0);
    *((int *)t2) = 9;
    goto LAB17;

LAB19:    xsi_set_current_line(71, ng0);
    t1 = (t0 + 2968U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = 0;
    goto LAB20;

LAB22:    xsi_size_not_matching(4U, t20, 0);
    goto LAB23;

LAB25:    xsi_set_current_line(83, ng0);
    t43 = (t0 + 9316);
    t45 = (t0 + 5056);
    t46 = (t45 + 56U);
    t47 = *((char **)t46);
    t48 = (t47 + 56U);
    t49 = *((char **)t48);
    memcpy(t49, t43, 7U);
    xsi_driver_first_trans_fast_port(t45);
    goto LAB24;

LAB26:    xsi_set_current_line(84, ng0);
    t1 = (t0 + 9323);
    t5 = (t0 + 5056);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t14 = (t11 + 56U);
    t17 = *((char **)t14);
    memcpy(t17, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB24;

LAB27:    xsi_set_current_line(85, ng0);
    t1 = (t0 + 9330);
    t5 = (t0 + 5056);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t14 = (t11 + 56U);
    t17 = *((char **)t14);
    memcpy(t17, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB24;

LAB28:    xsi_set_current_line(86, ng0);
    t1 = (t0 + 9337);
    t5 = (t0 + 5056);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t14 = (t11 + 56U);
    t17 = *((char **)t14);
    memcpy(t17, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB24;

LAB29:    xsi_set_current_line(87, ng0);
    t1 = (t0 + 9344);
    t5 = (t0 + 5056);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t14 = (t11 + 56U);
    t17 = *((char **)t14);
    memcpy(t17, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB24;

LAB30:    xsi_set_current_line(88, ng0);
    t1 = (t0 + 9351);
    t5 = (t0 + 5056);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t14 = (t11 + 56U);
    t17 = *((char **)t14);
    memcpy(t17, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB24;

LAB31:    xsi_set_current_line(89, ng0);
    t1 = (t0 + 9358);
    t5 = (t0 + 5056);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t14 = (t11 + 56U);
    t17 = *((char **)t14);
    memcpy(t17, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB24;

LAB32:    xsi_set_current_line(90, ng0);
    t1 = (t0 + 9365);
    t5 = (t0 + 5056);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t14 = (t11 + 56U);
    t17 = *((char **)t14);
    memcpy(t17, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB24;

LAB33:    xsi_set_current_line(91, ng0);
    t1 = (t0 + 9372);
    t5 = (t0 + 5056);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t14 = (t11 + 56U);
    t17 = *((char **)t14);
    memcpy(t17, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB24;

LAB34:    xsi_set_current_line(92, ng0);
    t1 = (t0 + 9379);
    t5 = (t0 + 5056);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t14 = (t11 + 56U);
    t17 = *((char **)t14);
    memcpy(t17, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB24;

LAB46:;
}


extern void work_a_0594899276_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0594899276_3212880686_p_0,(void *)work_a_0594899276_3212880686_p_1,(void *)work_a_0594899276_3212880686_p_2};
	xsi_register_didat("work_a_0594899276_3212880686", "isim/contador_tb_isim_beh.exe.sim/work/a_0594899276_3212880686.didat");
	xsi_register_executes(pe);
}
