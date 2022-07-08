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

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


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

LAB0:    xsi_set_current_line(121, ng0);
    t1 = (t0 + 992U);
    t2 = xsi_signal_has_event(t1);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 7984);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(122, ng0);
    t3 = (10 * 1000LL);
    t4 = (t0 + 5192U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t4 = (t0 + 8128);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_delta(t4, 0U, 1, t3);
    t11 = (t0 + 8128);
    xsi_driver_intertial_reject(t11, t3, t3);
    goto LAB3;

}

static void work_a_1667949733_3212880686_p_1(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    int64 t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    static char *nl0[] = {&&LAB6, &&LAB7, &&LAB8, &&LAB9, &&LAB11, &&LAB10, &&LAB12, &&LAB13, &&LAB16, &&LAB14, &&LAB15};

LAB0:    xsi_set_current_line(128, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 8000);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(129, ng0);
    t3 = (t0 + 5032U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t3 = (char *)((nl0) + t5);
    goto **((char **)t3);

LAB5:    goto LAB3;

LAB6:    xsi_set_current_line(131, ng0);
    t6 = (10 * 1000LL);
    t7 = (t0 + 8192);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)1;
    xsi_driver_first_trans_delta(t7, 0U, 1, t6);
    t12 = (t0 + 8192);
    xsi_driver_intertial_reject(t12, t6, t6);
    goto LAB5;

LAB7:    xsi_set_current_line(134, ng0);
    t6 = (10 * 1000LL);
    t1 = (t0 + 8192);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 0U, 1, t6);
    t9 = (t0 + 8192);
    xsi_driver_intertial_reject(t9, t6, t6);
    goto LAB5;

LAB8:    xsi_set_current_line(137, ng0);
    t1 = (t0 + 3592U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB17;

LAB19:    xsi_set_current_line(140, ng0);
    t6 = (10 * 1000LL);
    t1 = (t0 + 8192);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)4;
    xsi_driver_first_trans_delta(t1, 0U, 1, t6);
    t9 = (t0 + 8192);
    xsi_driver_intertial_reject(t9, t6, t6);

LAB18:    goto LAB5;

LAB9:    xsi_set_current_line(144, ng0);
    t1 = (t0 + 2152U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB20;

LAB22:    xsi_set_current_line(147, ng0);
    t6 = (10 * 1000LL);
    t1 = (t0 + 8192);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)5;
    xsi_driver_first_trans_delta(t1, 0U, 1, t6);
    t9 = (t0 + 8192);
    xsi_driver_intertial_reject(t9, t6, t6);

LAB21:    goto LAB5;

LAB10:    xsi_set_current_line(151, ng0);
    t1 = (t0 + 2632U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB23;

LAB25:    xsi_set_current_line(154, ng0);
    t6 = (10 * 1000LL);
    t1 = (t0 + 8192);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)6;
    xsi_driver_first_trans_delta(t1, 0U, 1, t6);
    t9 = (t0 + 8192);
    xsi_driver_intertial_reject(t9, t6, t6);

LAB24:    goto LAB5;

LAB11:    xsi_set_current_line(158, ng0);
    t6 = (10 * 1000LL);
    t1 = (t0 + 8192);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)7;
    xsi_driver_first_trans_delta(t1, 0U, 1, t6);
    t9 = (t0 + 8192);
    xsi_driver_intertial_reject(t9, t6, t6);
    goto LAB5;

LAB12:    xsi_set_current_line(161, ng0);
    t6 = (10 * 1000LL);
    t1 = (t0 + 8192);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)9;
    xsi_driver_first_trans_delta(t1, 0U, 1, t6);
    t9 = (t0 + 8192);
    xsi_driver_intertial_reject(t9, t6, t6);
    goto LAB5;

LAB13:    xsi_set_current_line(164, ng0);
    t6 = (10 * 1000LL);
    t1 = (t0 + 8192);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 0U, 1, t6);
    t9 = (t0 + 8192);
    xsi_driver_intertial_reject(t9, t6, t6);
    goto LAB5;

LAB14:    xsi_set_current_line(167, ng0);
    t6 = (10 * 1000LL);
    t1 = (t0 + 8192);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)10;
    xsi_driver_first_trans_delta(t1, 0U, 1, t6);
    t9 = (t0 + 8192);
    xsi_driver_intertial_reject(t9, t6, t6);
    goto LAB5;

LAB15:    xsi_set_current_line(170, ng0);
    t6 = (10 * 1000LL);
    t1 = (t0 + 8192);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)5;
    xsi_driver_first_trans_delta(t1, 0U, 1, t6);
    t9 = (t0 + 8192);
    xsi_driver_intertial_reject(t9, t6, t6);
    goto LAB5;

LAB16:    xsi_set_current_line(173, ng0);
    t6 = (10 * 1000LL);
    t1 = (t0 + 8192);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 0U, 1, t6);
    t9 = (t0 + 8192);
    xsi_driver_intertial_reject(t9, t6, t6);
    goto LAB5;

LAB17:    xsi_set_current_line(138, ng0);
    t6 = (10 * 1000LL);
    t1 = (t0 + 8192);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)1;
    xsi_driver_first_trans_delta(t1, 0U, 1, t6);
    t10 = (t0 + 8192);
    xsi_driver_intertial_reject(t10, t6, t6);
    goto LAB18;

LAB20:    xsi_set_current_line(145, ng0);
    t6 = (10 * 1000LL);
    t1 = (t0 + 8192);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 0U, 1, t6);
    t10 = (t0 + 8192);
    xsi_driver_intertial_reject(t10, t6, t6);
    goto LAB21;

LAB23:    xsi_set_current_line(152, ng0);
    t6 = (10 * 1000LL);
    t1 = (t0 + 8192);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)8;
    xsi_driver_first_trans_delta(t1, 0U, 1, t6);
    t10 = (t0 + 8192);
    xsi_driver_intertial_reject(t10, t6, t6);
    goto LAB24;

}

static void work_a_1667949733_3212880686_p_2(char *t0)
{
    char t16[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    int t13;
    int t14;
    unsigned int t15;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    static char *nl0[] = {&&LAB13, &&LAB3, &&LAB4, &&LAB5, &&LAB7, &&LAB6, &&LAB8, &&LAB9, &&LAB12, &&LAB10, &&LAB11};

LAB0:    xsi_set_current_line(181, ng0);
    t1 = (t0 + 8256);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(182, ng0);
    t1 = (t0 + 8320);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(183, ng0);
    t1 = (t0 + 8384);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(184, ng0);
    t1 = (t0 + 8448);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(185, ng0);
    t1 = (t0 + 8512);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(186, ng0);
    t1 = (t0 + 8576);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(187, ng0);
    t1 = (t0 + 8640);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(188, ng0);
    t1 = (t0 + 8704);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(189, ng0);
    t1 = (t0 + 8768);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(191, ng0);
    t1 = (t0 + 5032U);
    t2 = *((char **)t1);
    t6 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t6);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 8016);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(193, ng0);
    t3 = xsi_get_transient_memory(16U);
    memset(t3, 0, 16U);
    t4 = t3;
    memset(t4, (unsigned char)2, 16U);
    t5 = (t0 + 8832);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t3, 16U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(194, ng0);
    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t2 = t1;
    memset(t2, (unsigned char)2, 4U);
    t3 = (t0 + 8896);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 4U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(195, ng0);
    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t2 = t1;
    memset(t2, (unsigned char)2, 4U);
    t3 = (t0 + 8960);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 4U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(196, ng0);
    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t2 = t1;
    memset(t2, (unsigned char)2, 4U);
    t3 = (t0 + 9024);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 4U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(197, ng0);
    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)2, 32U);
    t3 = (t0 + 9088);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 32U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(198, ng0);
    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)2, 32U);
    t3 = (t0 + 9152);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 32U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(199, ng0);
    t1 = xsi_get_transient_memory(1024U);
    memset(t1, 0, 1024U);
    t2 = t1;
    t11 = (32U * 1U);
    t3 = t2;
    memset(t3, (unsigned char)2, t11);
    t6 = (t11 != 0);
    if (t6 == 1)
        goto LAB14;

LAB15:    t4 = (t0 + 9216);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 1024U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(200, ng0);
    t1 = xsi_get_transient_memory(11U);
    memset(t1, 0, 11U);
    t2 = t1;
    memset(t2, (unsigned char)2, 11U);
    t3 = (t0 + 9280);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 11U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(202, ng0);
    t1 = (t0 + 5352U);
    t2 = *((char **)t1);
    t1 = (t0 + 5512U);
    t3 = *((char **)t1);
    t13 = *((int *)t3);
    t14 = (t13 - 0);
    t11 = (t14 * 1);
    xsi_vhdl_check_range_of_index(0, 9, 1, t13);
    t12 = (16U * t11);
    t15 = (0 + t12);
    t1 = (t2 + t15);
    t4 = (t0 + 8832);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(203, ng0);
    t1 = (t0 + 5512U);
    t2 = *((char **)t1);
    t13 = *((int *)t2);
    t14 = (t13 + 1);
    t1 = (t0 + 9344);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    *((int *)t7) = t14;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB4:    xsi_set_current_line(207, ng0);
    t1 = (t0 + 8640);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB5:    xsi_set_current_line(211, ng0);
    t1 = (t0 + 8256);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    xsi_set_current_line(215, ng0);
    t1 = (t0 + 8384);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(217, ng0);
    t1 = (t0 + 3912U);
    t2 = *((char **)t1);
    t1 = (t0 + 3752U);
    t3 = *((char **)t1);
    t11 = (15 - 6);
    t12 = (t11 * 1U);
    t15 = (0 + t12);
    t1 = (t3 + t15);
    t5 = ((IEEE_P_2592010699) + 4024);
    t7 = (t0 + 16284U);
    t8 = (t0 + 16268U);
    t4 = xsi_base_array_concat(t4, t16, t5, (char)97, t2, t7, (char)97, t1, t8, (char)101);
    t17 = (4U + 7U);
    t6 = (11U != t17);
    if (t6 == 1)
        goto LAB16;

LAB17:    t9 = (t0 + 9280);
    t10 = (t9 + 56U);
    t18 = *((char **)t10);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t4, 11U);
    xsi_driver_first_trans_fast(t9);
    goto LAB2;

LAB7:    xsi_set_current_line(220, ng0);
    t1 = (t0 + 8512);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB8:    xsi_set_current_line(224, ng0);
    t1 = (t0 + 8768);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB9:    xsi_set_current_line(228, ng0);
    t1 = (t0 + 8704);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB10:    xsi_set_current_line(232, ng0);
    t1 = (t0 + 8576);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB11:    xsi_set_current_line(236, ng0);
    t1 = (t0 + 8448);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB12:    xsi_set_current_line(240, ng0);
    t1 = (t0 + 8320);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB13:    xsi_set_current_line(244, ng0);
    goto LAB2;

LAB14:    t12 = (1024U / t11);
    xsi_mem_set_data(t2, t2, t11, t12);
    goto LAB15;

LAB16:    xsi_size_not_matching(11U, t17, 0);
    goto LAB17;

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

LAB0:    xsi_set_current_line(250, ng0);
    t1 = (t0 + 5032U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 9408);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);
    t1 = (t0 + 8032);
    *((int *)t1) = 1;

LAB1:    return;
}

static void work_a_1667949733_3212880686_p_4(char *t0)
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

LAB0:    xsi_set_current_line(255, ng0);
    t1 = (t0 + 5032U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 8048);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(256, ng0);
    t1 = (t0 + 4392U);
    t5 = *((char **)t1);
    t1 = (t0 + 9472);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 32U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB3;

}


extern void work_a_1667949733_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1667949733_3212880686_p_0,(void *)work_a_1667949733_3212880686_p_1,(void *)work_a_1667949733_3212880686_p_2,(void *)work_a_1667949733_3212880686_p_3,(void *)work_a_1667949733_3212880686_p_4};
	xsi_register_didat("work_a_1667949733_3212880686", "isim/Processor_isim_beh.exe.sim/work/a_1667949733_3212880686.didat");
	xsi_register_executes(pe);
}
