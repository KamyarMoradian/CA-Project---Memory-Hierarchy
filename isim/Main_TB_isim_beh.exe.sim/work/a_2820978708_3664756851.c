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
static const char *ng0 = "C:/Users/Top/Documents/Uni/ForthSem/CA/Project/CA-Project---Memory-Hierarchy/Cache.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

int ieee_p_1242562249_sub_1657552908_1035706684(char *, char *, char *);
unsigned char ieee_p_2592010699_sub_1258338084_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_2820978708_3664756851_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    int t12;
    char *t13;
    char *t14;
    int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned char t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;

LAB0:    xsi_set_current_line(43, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 2608U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    memcpy(t1, t2, 11U);
    xsi_set_current_line(45, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t5 = (t4 == (unsigned char)3);
    if (t5 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(65, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t5 = (t4 == (unsigned char)3);
    if (t5 != 0)
        goto LAB23;

LAB25:
LAB24:    t1 = (t0 + 4272);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(46, ng0);
    t1 = (t0 + 1632U);
    t6 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t6 != 0)
        goto LAB5;

LAB7:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(47, ng0);
    t3 = (t0 + 2608U);
    t7 = *((char **)t3);
    t8 = (10 - 7);
    t9 = (t8 * 1U);
    t10 = (0 + t9);
    t3 = (t7 + t10);
    t11 = (t0 + 7548U);
    t12 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t3, t11);
    t13 = (t0 + 2728U);
    t14 = *((char **)t13);
    t13 = (t14 + 0);
    *((int *)t13) = t12;
    xsi_set_current_line(48, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t1 = (t0 + 2728U);
    t3 = *((char **)t1);
    t12 = *((int *)t3);
    t15 = (t12 - 0);
    t8 = (t15 * 1);
    xsi_vhdl_check_range_of_index(0, 31, 1, t12);
    t9 = (4U * t8);
    t10 = (0 + t9);
    t1 = (t2 + t10);
    t7 = (t0 + 2848U);
    t11 = *((char **)t7);
    t7 = (t11 + 0);
    memcpy(t7, t1, 4U);
    xsi_set_current_line(51, ng0);
    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    t12 = (3 - 3);
    t8 = (t12 * -1);
    t9 = (1U * t8);
    t10 = (0 + t9);
    t1 = (t2 + t10);
    t5 = *((unsigned char *)t1);
    t6 = (t5 == (unsigned char)3);
    if (t6 == 1)
        goto LAB11;

LAB12:    t4 = (unsigned char)0;

LAB13:    if (t4 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(60, ng0);
    t1 = (t0 + 4416);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t7 = (t3 + 56U);
    t11 = *((char **)t7);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB9:    goto LAB6;

LAB8:    xsi_set_current_line(52, ng0);
    t25 = (t0 + 2312U);
    t26 = *((char **)t25);
    t25 = (t0 + 2728U);
    t27 = *((char **)t25);
    t15 = *((int *)t27);
    t28 = (t15 - 0);
    t29 = (t28 * 1);
    xsi_vhdl_check_range_of_index(0, 31, 1, t15);
    t30 = (64U * t29);
    t31 = (0 + t30);
    t25 = (t26 + t31);
    t32 = (t0 + 2968U);
    t33 = *((char **)t32);
    t32 = (t33 + 0);
    memcpy(t32, t25, 64U);
    xsi_set_current_line(53, ng0);
    t1 = (t0 + 2608U);
    t2 = *((char **)t1);
    t12 = (2 - 10);
    t8 = (t12 * -1);
    t9 = (1U * t8);
    t10 = (0 + t9);
    t1 = (t2 + t10);
    t4 = *((unsigned char *)t1);
    t5 = (t4 == (unsigned char)2);
    if (t5 != 0)
        goto LAB20;

LAB22:    xsi_set_current_line(56, ng0);
    t1 = (t0 + 2968U);
    t2 = *((char **)t1);
    t8 = (63 - 63);
    t9 = (t8 * 1U);
    t10 = (0 + t9);
    t1 = (t2 + t10);
    t3 = (t0 + 4352);
    t7 = (t3 + 56U);
    t11 = *((char **)t7);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t1, 32U);
    xsi_driver_first_trans_fast_port(t3);

LAB21:    xsi_set_current_line(58, ng0);
    t1 = (t0 + 4416);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t7 = (t3 + 56U);
    t11 = *((char **)t7);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB9;

LAB11:    t3 = (t0 + 2848U);
    t7 = *((char **)t3);
    t16 = (3 - 2);
    t17 = (t16 * 1U);
    t18 = (0 + t17);
    t3 = (t7 + t18);
    t11 = (t0 + 2608U);
    t13 = *((char **)t11);
    t19 = (10 - 10);
    t20 = (t19 * 1U);
    t21 = (0 + t20);
    t11 = (t13 + t21);
    t22 = 1;
    if (3U == 3U)
        goto LAB14;

LAB15:    t22 = 0;

LAB16:    t4 = t22;
    goto LAB13;

LAB14:    t23 = 0;

LAB17:    if (t23 < 3U)
        goto LAB18;
    else
        goto LAB16;

LAB18:    t14 = (t3 + t23);
    t24 = (t11 + t23);
    if (*((unsigned char *)t14) != *((unsigned char *)t24))
        goto LAB15;

LAB19:    t23 = (t23 + 1);
    goto LAB17;

LAB20:    xsi_set_current_line(54, ng0);
    t3 = (t0 + 2968U);
    t7 = *((char **)t3);
    t16 = (63 - 31);
    t17 = (t16 * 1U);
    t18 = (0 + t17);
    t3 = (t7 + t18);
    t11 = (t0 + 4352);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    t24 = (t14 + 56U);
    t25 = *((char **)t24);
    memcpy(t25, t3, 32U);
    xsi_driver_first_trans_fast_port(t11);
    goto LAB21;

LAB23:    xsi_set_current_line(66, ng0);
    t1 = (t0 + 1632U);
    t6 = ieee_p_2592010699_sub_1258338084_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t6 != 0)
        goto LAB26;

LAB28:
LAB27:    goto LAB24;

LAB26:    xsi_set_current_line(67, ng0);
    t3 = (t0 + 2608U);
    t7 = *((char **)t3);
    t8 = (10 - 7);
    t9 = (t8 * 1U);
    t10 = (0 + t9);
    t3 = (t7 + t10);
    t11 = (t0 + 7548U);
    t12 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t3, t11);
    t13 = (t0 + 2728U);
    t14 = *((char **)t13);
    t13 = (t14 + 0);
    *((int *)t13) = t12;
    xsi_set_current_line(68, ng0);
    t1 = (t0 + 2728U);
    t2 = *((char **)t1);
    t12 = *((int *)t2);
    t15 = (t12 - 0);
    t8 = (t15 * 1);
    t9 = (4U * t8);
    t10 = (0U + t9);
    t28 = (3 - 3);
    t16 = (t28 * -1);
    t17 = (1 * t16);
    t18 = (t10 + t17);
    t1 = (t0 + 4480);
    t3 = (t1 + 56U);
    t7 = *((char **)t3);
    t11 = (t7 + 56U);
    t13 = *((char **)t11);
    *((unsigned char *)t13) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, t18, 1, 0LL);
    xsi_set_current_line(69, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 2728U);
    t3 = *((char **)t1);
    t12 = *((int *)t3);
    t15 = (t12 - 0);
    t8 = (t15 * 1);
    t9 = (64U * t8);
    t10 = (0U + t9);
    t1 = (t0 + 4544);
    t7 = (t1 + 56U);
    t11 = *((char **)t7);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 64U);
    xsi_driver_first_trans_delta(t1, t10, 64U, 0LL);
    goto LAB27;

}


extern void work_a_2820978708_3664756851_init()
{
	static char *pe[] = {(void *)work_a_2820978708_3664756851_p_0};
	xsi_register_didat("work_a_2820978708_3664756851", "isim/Main_TB_isim_beh.exe.sim/work/a_2820978708_3664756851.didat");
	xsi_register_executes(pe);
}
