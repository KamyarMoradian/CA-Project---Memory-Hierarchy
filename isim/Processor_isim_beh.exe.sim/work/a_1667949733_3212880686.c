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
static const char *ng0 = "C:/Users/Top/Documents/Uni/ForthSem/CA/Project/CA-Project---Memory-Hierarchy/Processor.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1258338084_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_1667949733_3212880686_p_0(char *t0)
{
    char *t1;
    unsigned char t2;
    int64 t3;
    char *t4;
    char *t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(89, ng0);
    t1 = (t0 + 992U);
    t2 = xsi_signal_has_event(t1);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 11216);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(90, ng0);
    t3 = (50 * 1000LL);
    t4 = (t0 + 7272U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t4 = (t0 + 11424);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_delta(t4, 0U, 1, t3);
    t11 = (t0 + 11424);
    xsi_driver_intertial_reject(t11, t3, t3);
    goto LAB3;

}

static void work_a_1667949733_3212880686_p_1(char *t0)
{
    char t17[16];
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    char *t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    static char *nl0[] = {&&LAB9, &&LAB10, &&LAB11, &&LAB12, &&LAB14, &&LAB13, &&LAB15, &&LAB16, &&LAB19, &&LAB17, &&LAB18};

LAB0:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 7752U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    if (t4 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 11232);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(97, ng0);
    t6 = (t0 + 7112U);
    t7 = *((char **)t6);
    t8 = *((unsigned char *)t7);
    t6 = (char *)((nl0) + t8);
    goto **((char **)t6);

LAB5:    t2 = (t0 + 992U);
    t5 = ieee_p_2592010699_sub_1258338084_503743352(IEEE_P_2592010699, t2, 0U, 0U);
    t1 = t5;
    goto LAB7;

LAB8:    goto LAB3;

LAB9:    xsi_set_current_line(99, ng0);
    t9 = (t0 + 11488);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)1;
    xsi_driver_first_trans_fast(t9);
    goto LAB8;

LAB10:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 11488);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB8;

LAB11:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 4872U);
    t3 = *((char **)t2);
    t1 = *((unsigned char *)t3);
    t4 = (t1 == (unsigned char)3);
    if (t4 != 0)
        goto LAB20;

LAB22:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 11488);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    *((unsigned char *)t9) = (unsigned char)4;
    xsi_driver_first_trans_fast(t2);

LAB21:    goto LAB8;

LAB12:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 2792U);
    t3 = *((char **)t2);
    t1 = *((unsigned char *)t3);
    t4 = (t1 == (unsigned char)3);
    if (t4 != 0)
        goto LAB23;

LAB25:    xsi_set_current_line(121, ng0);
    t2 = (t0 + 11488);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    *((unsigned char *)t9) = (unsigned char)5;
    xsi_driver_first_trans_fast(t2);

LAB24:    goto LAB8;

LAB13:    xsi_set_current_line(125, ng0);
    t2 = (t0 + 3272U);
    t3 = *((char **)t2);
    t1 = *((unsigned char *)t3);
    t4 = (t1 == (unsigned char)3);
    if (t4 != 0)
        goto LAB33;

LAB35:    xsi_set_current_line(128, ng0);
    t2 = (t0 + 11488);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    *((unsigned char *)t9) = (unsigned char)6;
    xsi_driver_first_trans_fast(t2);

LAB34:    goto LAB8;

LAB14:    xsi_set_current_line(132, ng0);
    t2 = (t0 + 11488);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    *((unsigned char *)t9) = (unsigned char)7;
    xsi_driver_first_trans_fast(t2);
    goto LAB8;

LAB15:    xsi_set_current_line(136, ng0);
    t2 = (t0 + 11488);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    *((unsigned char *)t9) = (unsigned char)9;
    xsi_driver_first_trans_fast(t2);
    goto LAB8;

LAB16:    xsi_set_current_line(139, ng0);
    t2 = (t0 + 11488);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB8;

LAB17:    xsi_set_current_line(142, ng0);
    t2 = (t0 + 11488);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    *((unsigned char *)t9) = (unsigned char)10;
    xsi_driver_first_trans_fast(t2);
    goto LAB8;

LAB18:    xsi_set_current_line(145, ng0);
    t2 = (t0 + 11488);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    *((unsigned char *)t9) = (unsigned char)5;
    xsi_driver_first_trans_fast(t2);
    goto LAB8;

LAB19:    xsi_set_current_line(148, ng0);
    t2 = (t0 + 11488);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB8;

LAB20:    xsi_set_current_line(107, ng0);
    t2 = (t0 + 11488);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)1;
    xsi_driver_first_trans_fast(t2);
    goto LAB21;

LAB23:    xsi_set_current_line(114, ng0);
    t2 = (t0 + 11488);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(115, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t1 = *((unsigned char *)t3);
    t4 = (t1 == (unsigned char)2);
    if (t4 != 0)
        goto LAB26;

LAB28:    xsi_set_current_line(118, ng0);
    t2 = (t0 + 5512U);
    t3 = *((char **)t2);
    t2 = (t0 + 5032U);
    t6 = *((char **)t2);
    t14 = (15 - 6);
    t15 = (t14 * 1U);
    t16 = (0 + t15);
    t2 = (t6 + t16);
    t9 = ((IEEE_P_2592010699) + 4024);
    t10 = (t0 + 22348U);
    t11 = (t0 + 22300U);
    t7 = xsi_base_array_concat(t7, t17, t9, (char)97, t3, t10, (char)97, t2, t11, (char)101);
    t18 = (4U + 7U);
    t1 = (11U != t18);
    if (t1 == 1)
        goto LAB31;

LAB32:    t12 = (t0 + 11616);
    t13 = (t12 + 56U);
    t19 = *((char **)t13);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t7, 11U);
    xsi_driver_first_trans_fast(t12);

LAB27:    goto LAB24;

LAB26:    xsi_set_current_line(116, ng0);
    t2 = (t0 + 5512U);
    t6 = *((char **)t2);
    t2 = (t0 + 5032U);
    t7 = *((char **)t2);
    t14 = (15 - 6);
    t15 = (t14 * 1U);
    t16 = (0 + t15);
    t2 = (t7 + t16);
    t10 = ((IEEE_P_2592010699) + 4024);
    t11 = (t0 + 22348U);
    t12 = (t0 + 22300U);
    t9 = xsi_base_array_concat(t9, t17, t10, (char)97, t6, t11, (char)97, t2, t12, (char)101);
    t18 = (4U + 7U);
    t5 = (11U != t18);
    if (t5 == 1)
        goto LAB29;

LAB30:    t13 = (t0 + 11552);
    t19 = (t13 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t9, 11U);
    xsi_driver_first_trans_fast(t13);
    goto LAB27;

LAB29:    xsi_size_not_matching(11U, t18, 0);
    goto LAB30;

LAB31:    xsi_size_not_matching(11U, t18, 0);
    goto LAB32;

LAB33:    xsi_set_current_line(126, ng0);
    t2 = (t0 + 11488);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)8;
    xsi_driver_first_trans_fast(t2);
    goto LAB34;

}

static void work_a_1667949733_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned char t6;
    int t7;
    int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned char t17;
    int t18;
    static char *nl0[] = {&&LAB12, &&LAB3, &&LAB4, &&LAB5, &&LAB7, &&LAB6, &&LAB8, &&LAB9, &&LAB11, &&LAB12, &&LAB10};

LAB0:    xsi_set_current_line(156, ng0);
    t1 = (t0 + 11680);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(157, ng0);
    t1 = (t0 + 11744);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(158, ng0);
    t1 = (t0 + 11808);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(159, ng0);
    t1 = (t0 + 11872);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(160, ng0);
    t1 = (t0 + 11936);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(161, ng0);
    t1 = (t0 + 12000);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(162, ng0);
    t1 = (t0 + 12064);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(163, ng0);
    t1 = (t0 + 12128);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(164, ng0);
    t1 = (t0 + 12192);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(165, ng0);
    t1 = (t0 + 12256);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(166, ng0);
    t1 = (t0 + 12320);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(167, ng0);
    t1 = (t0 + 12384);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(169, ng0);
    t1 = (t0 + 7112U);
    t2 = *((char **)t1);
    t6 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t6);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 11248);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(171, ng0);
    t3 = (t0 + 7432U);
    t4 = *((char **)t3);
    t3 = (t0 + 7592U);
    t5 = *((char **)t3);
    t7 = *((int *)t5);
    t8 = (t7 - 0);
    t9 = (t8 * 1);
    xsi_vhdl_check_range_of_index(0, 13, 1, t7);
    t10 = (16U * t9);
    t11 = (0 + t10);
    t3 = (t4 + t11);
    t12 = (t0 + 12448);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t3, 16U);
    xsi_driver_first_trans_fast(t12);
    xsi_set_current_line(172, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t6 = *((unsigned char *)t2);
    t17 = (t6 == (unsigned char)2);
    if (t17 != 0)
        goto LAB13;

LAB15:    xsi_set_current_line(175, ng0);
    t1 = (t0 + 6152U);
    t2 = *((char **)t1);
    t1 = (t0 + 12512);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t12 = *((char **)t5);
    memcpy(t12, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB14:    xsi_set_current_line(177, ng0);
    t1 = (t0 + 7592U);
    t2 = *((char **)t1);
    t7 = *((int *)t2);
    t8 = (t7 + 1);
    t18 = xsi_vhdl_mod(t8, 22);
    t1 = (t0 + 12576);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t12 = *((char **)t5);
    *((int *)t12) = t18;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB4:    xsi_set_current_line(180, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t6 = *((unsigned char *)t2);
    t17 = (t6 == (unsigned char)2);
    if (t17 != 0)
        goto LAB16;

LAB18:    xsi_set_current_line(183, ng0);
    t1 = (t0 + 12192);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);

LAB17:    goto LAB2;

LAB5:    xsi_set_current_line(187, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t6 = *((unsigned char *)t2);
    t17 = (t6 == (unsigned char)2);
    if (t17 != 0)
        goto LAB19;

LAB21:    xsi_set_current_line(190, ng0);
    t1 = (t0 + 11744);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);

LAB20:    goto LAB2;

LAB6:    xsi_set_current_line(195, ng0);
    t1 = (t0 + 11936);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB7:    xsi_set_current_line(199, ng0);
    t1 = (t0 + 12064);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB8:    xsi_set_current_line(203, ng0);
    t1 = (t0 + 12384);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB9:    xsi_set_current_line(207, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t6 = *((unsigned char *)t2);
    t17 = (t6 == (unsigned char)2);
    if (t17 != 0)
        goto LAB22;

LAB24:    xsi_set_current_line(210, ng0);
    t1 = (t0 + 12320);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);

LAB23:    goto LAB2;

LAB10:    xsi_set_current_line(215, ng0);
    t1 = (t0 + 12000);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB11:    xsi_set_current_line(219, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t6 = *((unsigned char *)t2);
    t17 = (t6 == (unsigned char)2);
    if (t17 != 0)
        goto LAB25;

LAB27:    xsi_set_current_line(222, ng0);
    t1 = (t0 + 11872);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);

LAB26:    goto LAB2;

LAB12:    xsi_set_current_line(227, ng0);
    goto LAB2;

LAB13:    xsi_set_current_line(173, ng0);
    t1 = (t0 + 5992U);
    t3 = *((char **)t1);
    t1 = (t0 + 12512);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t12 = (t5 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t3, 32U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB14;

LAB16:    xsi_set_current_line(181, ng0);
    t1 = (t0 + 12128);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t12 = *((char **)t5);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB17;

LAB19:    xsi_set_current_line(188, ng0);
    t1 = (t0 + 11680);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t12 = *((char **)t5);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB20;

LAB22:    xsi_set_current_line(208, ng0);
    t1 = (t0 + 12256);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t12 = *((char **)t5);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB23;

LAB25:    xsi_set_current_line(220, ng0);
    t1 = (t0 + 11808);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t12 = *((char **)t5);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB26;

}

static void work_a_1667949733_3212880686_p_3(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(233, ng0);
    t1 = (t0 + 7112U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 12640);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);
    t1 = (t0 + 11264);
    *((int *)t1) = 1;

LAB1:    return;
}

static void work_a_1667949733_3212880686_p_4(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    int t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    int t13;
    int t14;

LAB0:    xsi_set_current_line(238, ng0);
    t2 = (t0 + 7112U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)9);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(241, ng0);
    t2 = (t0 + 12704);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);

LAB3:    xsi_set_current_line(243, ng0);
    t2 = (t0 + 7112U);
    t3 = *((char **)t2);
    t1 = *((unsigned char *)t3);
    t4 = (t1 == (unsigned char)9);
    if (t4 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(245, ng0);
    t2 = (t0 + 12768);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    *((int *)t10) = 0;
    xsi_driver_first_trans_fast(t2);

LAB9:    t2 = (t0 + 11280);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(239, ng0);
    t2 = (t0 + 12704);
    t9 = (t2 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

LAB5:    t2 = (t0 + 6952U);
    t6 = *((char **)t2);
    t7 = *((int *)t6);
    t8 = (t7 >= 2);
    t1 = t8;
    goto LAB7;

LAB8:    xsi_set_current_line(244, ng0);
    t2 = (t0 + 6952U);
    t6 = *((char **)t2);
    t7 = *((int *)t6);
    t13 = (t7 + 1);
    t14 = xsi_vhdl_mod(t13, 5);
    t2 = (t0 + 12768);
    t9 = (t2 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((int *)t12) = t14;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

}

static void work_a_1667949733_3212880686_p_5(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    xsi_set_current_line(251, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(254, ng0);
    t1 = (t0 + 4712U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 12832);
    t5 = (t1 + 56U);
    t7 = *((char **)t5);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t3;
    xsi_driver_first_trans_fast(t1);

LAB3:    t1 = (t0 + 11296);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(252, ng0);
    t1 = (t0 + 4232U);
    t5 = *((char **)t1);
    t6 = *((unsigned char *)t5);
    t1 = (t0 + 12832);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

}

static void work_a_1667949733_3212880686_p_6(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    xsi_set_current_line(260, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(263, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 12896);
    t5 = (t1 + 56U);
    t7 = *((char **)t5);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t3;
    xsi_driver_first_trans_fast(t1);

LAB3:    t1 = (t0 + 11312);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(261, ng0);
    t1 = (t0 + 2152U);
    t5 = *((char **)t1);
    t6 = *((unsigned char *)t5);
    t1 = (t0 + 12896);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

}

static void work_a_1667949733_3212880686_p_7(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    xsi_set_current_line(269, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(272, ng0);
    t1 = (t0 + 5352U);
    t2 = *((char **)t1);
    t1 = (t0 + 12960);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t1);

LAB3:    t1 = (t0 + 11328);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(270, ng0);
    t1 = (t0 + 5192U);
    t5 = *((char **)t1);
    t1 = (t0 + 12960);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 4U);
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

}

static void a_1667949733_3212880686present_state_implicit_stable_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 13024);
    xsi_driver_trans_implicit_signal_stable_or_quiet(t1, 0LL);
    t2 = (t0 + 11344);
    *((int *)t2) = 1;

LAB1:    return;
}


extern void work_a_1667949733_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1667949733_3212880686_p_0,(void *)work_a_1667949733_3212880686_p_1,(void *)work_a_1667949733_3212880686_p_2,(void *)work_a_1667949733_3212880686_p_3,(void *)work_a_1667949733_3212880686_p_4,(void *)work_a_1667949733_3212880686_p_5,(void *)work_a_1667949733_3212880686_p_6,(void *)work_a_1667949733_3212880686_p_7,(void *)a_1667949733_3212880686present_state_implicit_stable_0};
	xsi_register_didat("work_a_1667949733_3212880686", "isim/Processor_isim_beh.exe.sim/work/a_1667949733_3212880686.didat");
	xsi_register_executes(pe);
}
