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
static const char *ng0 = "C:/Users/Rian/Documents/MICROELETRONICA/LAB3/LAB3_OK/TEMPORIZADOR/TEMPORIZADOR.vhd";
extern char *IEEE_P_3499444699;

char *ieee_p_3499444699_sub_2213602152_3536714472(char *, char *, int , int );


static void work_a_0091040383_3212880686_p_0(char *t0)
{
    char *t1;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(28, ng0);

LAB3:    t1 = (t0 + 7344);
    t3 = (t0 + 4240);
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

static void work_a_0091040383_3212880686_p_1(char *t0)
{
    char t17[16];
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
    int t12;
    int t13;
    char *t14;
    int t15;
    int t16;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t22;
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
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;

LAB0:    xsi_set_current_line(36, ng0);
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
LAB3:    xsi_set_current_line(53, ng0);
    t1 = (t0 + 2608U);
    t2 = *((char **)t1);
    t12 = *((int *)t2);
    t1 = ieee_p_3499444699_sub_2213602152_3536714472(IEEE_P_3499444699, t17, t12, 4);
    t5 = (t17 + 12U);
    t18 = *((unsigned int *)t5);
    t18 = (t18 * 1U);
    t3 = (4U != t18);
    if (t3 == 1)
        goto LAB19;

LAB20:    t8 = (t0 + 4304);
    t11 = (t8 + 56U);
    t14 = *((char **)t11);
    t19 = (t14 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t1, 4U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(55, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 7348);
    t12 = xsi_mem_cmp(t1, t2, 4U);
    if (t12 == 1)
        goto LAB22;

LAB33:    t8 = (t0 + 7352);
    t13 = xsi_mem_cmp(t8, t2, 4U);
    if (t13 == 1)
        goto LAB23;

LAB34:    t14 = (t0 + 7356);
    t15 = xsi_mem_cmp(t14, t2, 4U);
    if (t15 == 1)
        goto LAB24;

LAB35:    t20 = (t0 + 7360);
    t16 = xsi_mem_cmp(t20, t2, 4U);
    if (t16 == 1)
        goto LAB25;

LAB36:    t22 = (t0 + 7364);
    t24 = xsi_mem_cmp(t22, t2, 4U);
    if (t24 == 1)
        goto LAB26;

LAB37:    t25 = (t0 + 7368);
    t27 = xsi_mem_cmp(t25, t2, 4U);
    if (t27 == 1)
        goto LAB27;

LAB38:    t28 = (t0 + 7372);
    t30 = xsi_mem_cmp(t28, t2, 4U);
    if (t30 == 1)
        goto LAB28;

LAB39:    t31 = (t0 + 7376);
    t33 = xsi_mem_cmp(t31, t2, 4U);
    if (t33 == 1)
        goto LAB29;

LAB40:    t34 = (t0 + 7380);
    t36 = xsi_mem_cmp(t34, t2, 4U);
    if (t36 == 1)
        goto LAB30;

LAB41:    t37 = (t0 + 7384);
    t39 = xsi_mem_cmp(t37, t2, 4U);
    if (t39 == 1)
        goto LAB31;

LAB42:
LAB32:    xsi_set_current_line(66, ng0);
    t1 = (t0 + 7458);
    t5 = (t0 + 4368);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t14 = (t11 + 56U);
    t19 = *((char **)t14);
    memcpy(t19, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);

LAB21:    t1 = (t0 + 4160);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(37, ng0);
    t1 = (t0 + 2608U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(38, ng0);
    t1 = (t0 + 2488U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;
    goto LAB3;

LAB5:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1032U);
    t8 = *((char **)t2);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB10;

LAB12:
LAB11:    goto LAB3;

LAB7:    t2 = (t0 + 1192U);
    t5 = *((char **)t2);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t3 = t7;
    goto LAB9;

LAB10:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 2488U);
    t11 = *((char **)t2);
    t12 = *((int *)t11);
    t13 = (t12 + 1);
    t2 = (t0 + 2488U);
    t14 = *((char **)t2);
    t2 = (t14 + 0);
    *((int *)t2) = t13;
    xsi_set_current_line(43, ng0);
    t1 = (t0 + 2488U);
    t2 = *((char **)t1);
    t12 = *((int *)t2);
    t1 = (t0 + 2368U);
    t5 = *((char **)t1);
    t13 = *((int *)t5);
    t3 = (t12 == t13);
    if (t3 != 0)
        goto LAB13;

LAB15:
LAB14:    goto LAB11;

LAB13:    xsi_set_current_line(44, ng0);
    t1 = (t0 + 2608U);
    t8 = *((char **)t1);
    t15 = *((int *)t8);
    t16 = (t15 + 1);
    t1 = (t0 + 2608U);
    t11 = *((char **)t1);
    t1 = (t11 + 0);
    *((int *)t1) = t16;
    xsi_set_current_line(45, ng0);
    t1 = (t0 + 2488U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(46, ng0);
    t1 = (t0 + 2608U);
    t2 = *((char **)t1);
    t12 = *((int *)t2);
    t3 = (t12 == 10);
    if (t3 != 0)
        goto LAB16;

LAB18:
LAB17:    goto LAB14;

LAB16:    xsi_set_current_line(47, ng0);
    t1 = (t0 + 2608U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = 0;
    goto LAB17;

LAB19:    xsi_size_not_matching(4U, t18, 0);
    goto LAB20;

LAB22:    xsi_set_current_line(56, ng0);
    t40 = (t0 + 7388);
    t42 = (t0 + 4368);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    memcpy(t46, t40, 7U);
    xsi_driver_first_trans_fast_port(t42);
    goto LAB21;

LAB23:    xsi_set_current_line(57, ng0);
    t1 = (t0 + 7395);
    t5 = (t0 + 4368);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t14 = (t11 + 56U);
    t19 = *((char **)t14);
    memcpy(t19, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB21;

LAB24:    xsi_set_current_line(58, ng0);
    t1 = (t0 + 7402);
    t5 = (t0 + 4368);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t14 = (t11 + 56U);
    t19 = *((char **)t14);
    memcpy(t19, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB21;

LAB25:    xsi_set_current_line(59, ng0);
    t1 = (t0 + 7409);
    t5 = (t0 + 4368);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t14 = (t11 + 56U);
    t19 = *((char **)t14);
    memcpy(t19, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB21;

LAB26:    xsi_set_current_line(60, ng0);
    t1 = (t0 + 7416);
    t5 = (t0 + 4368);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t14 = (t11 + 56U);
    t19 = *((char **)t14);
    memcpy(t19, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB21;

LAB27:    xsi_set_current_line(61, ng0);
    t1 = (t0 + 7423);
    t5 = (t0 + 4368);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t14 = (t11 + 56U);
    t19 = *((char **)t14);
    memcpy(t19, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB21;

LAB28:    xsi_set_current_line(62, ng0);
    t1 = (t0 + 7430);
    t5 = (t0 + 4368);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t14 = (t11 + 56U);
    t19 = *((char **)t14);
    memcpy(t19, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB21;

LAB29:    xsi_set_current_line(63, ng0);
    t1 = (t0 + 7437);
    t5 = (t0 + 4368);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t14 = (t11 + 56U);
    t19 = *((char **)t14);
    memcpy(t19, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB21;

LAB30:    xsi_set_current_line(64, ng0);
    t1 = (t0 + 7444);
    t5 = (t0 + 4368);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t14 = (t11 + 56U);
    t19 = *((char **)t14);
    memcpy(t19, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB21;

LAB31:    xsi_set_current_line(65, ng0);
    t1 = (t0 + 7451);
    t5 = (t0 + 4368);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t14 = (t11 + 56U);
    t19 = *((char **)t14);
    memcpy(t19, t1, 7U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB21;

LAB43:;
}


extern void work_a_0091040383_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0091040383_3212880686_p_0,(void *)work_a_0091040383_3212880686_p_1};
	xsi_register_didat("work_a_0091040383_3212880686", "isim/TEMPORIZADOR_TB_isim_beh.exe.sim/work/a_0091040383_3212880686.didat");
	xsi_register_executes(pe);
}
