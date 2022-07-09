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
static const char *ng0 = "C:/Users/Top/Documents/Uni/ForthSem/CA/Project/CA-Project---Memory-Hierarchy/MainMemory.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

int ieee_p_1242562249_sub_1657552908_1035706684(char *, char *, char *);
char *ieee_p_1242562249_sub_180853171_1035706684(char *, char *, int , int );
unsigned char ieee_p_2592010699_sub_1258338084_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_2172777829_3212880686_p_0(char *t0)
{
    char t15[16];
    char t16[16];
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    int t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t17;
    int t18;
    char *t19;
    int t20;
    int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    int t28;
    int t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t37;

LAB0:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 == 1)
        goto LAB13;

LAB14:    t1 = (unsigned char)0;

LAB15:    if (t1 != 0)
        goto LAB10;

LAB12:
LAB11:    t2 = (t0 + 4432);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(35, ng0);
    t7 = (t0 + 1352U);
    t8 = *((char **)t7);
    t7 = (t0 + 7904U);
    t9 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t8, t7);
    t10 = (t0 + 2768U);
    t11 = *((char **)t10);
    t10 = (t11 + 0);
    *((int *)t10) = t9;
    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t12 = (6 - 6);
    t13 = (t12 * 1U);
    t14 = (0 + t13);
    t2 = (t3 + t14);
    t8 = ((IEEE_P_2592010699) + 4024);
    t10 = (t16 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 6;
    t11 = (t10 + 4U);
    *((int *)t11) = 3;
    t11 = (t10 + 8U);
    *((int *)t11) = -1;
    t9 = (3 - 6);
    t17 = (t9 * -1);
    t17 = (t17 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t17;
    t7 = xsi_base_array_concat(t7, t15, t8, (char)97, t2, t16, (char)99, (unsigned char)2, (char)101);
    t18 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t7, t15);
    t11 = (t0 + 2888U);
    t19 = *((char **)t11);
    t11 = (t19 + 0);
    *((int *)t11) = t18;
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 2312U);
    t3 = *((char **)t2);
    t2 = (t0 + 2888U);
    t7 = *((char **)t2);
    t9 = *((int *)t7);
    t18 = (t9 - 0);
    t12 = (t18 * 1);
    xsi_vhdl_check_range_of_index(0, 31, 1, t9);
    t13 = (32U * t12);
    t2 = (t0 + 2768U);
    t8 = *((char **)t2);
    t20 = *((int *)t8);
    t21 = (t20 - 0);
    t14 = (t21 * 1);
    xsi_vhdl_check_range_of_index(0, 12, 1, t20);
    t17 = (1024U * t14);
    t22 = (0 + t17);
    t23 = (t22 + t13);
    t2 = (t3 + t23);
    t10 = (t0 + 3008U);
    t11 = *((char **)t10);
    t10 = (t11 + 0);
    memcpy(t10, t2, 32U);
    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t12 = (6 - 6);
    t13 = (t12 * 1U);
    t14 = (0 + t13);
    t2 = (t3 + t14);
    t8 = ((IEEE_P_2592010699) + 4024);
    t10 = (t16 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 6;
    t11 = (t10 + 4U);
    *((int *)t11) = 3;
    t11 = (t10 + 8U);
    *((int *)t11) = -1;
    t9 = (3 - 6);
    t17 = (t9 * -1);
    t17 = (t17 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t17;
    t7 = xsi_base_array_concat(t7, t15, t8, (char)97, t2, t16, (char)99, (unsigned char)3, (char)101);
    t18 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t7, t15);
    t11 = (t0 + 2888U);
    t19 = *((char **)t11);
    t11 = (t19 + 0);
    *((int *)t11) = t18;
    xsi_set_current_line(39, ng0);
    t2 = (t0 + 2312U);
    t3 = *((char **)t2);
    t2 = (t0 + 2888U);
    t7 = *((char **)t2);
    t9 = *((int *)t7);
    t18 = (t9 - 0);
    t12 = (t18 * 1);
    xsi_vhdl_check_range_of_index(0, 31, 1, t9);
    t13 = (32U * t12);
    t2 = (t0 + 2768U);
    t8 = *((char **)t2);
    t20 = *((int *)t8);
    t21 = (t20 - 0);
    t14 = (t21 * 1);
    xsi_vhdl_check_range_of_index(0, 12, 1, t20);
    t17 = (1024U * t14);
    t22 = (0 + t17);
    t23 = (t22 + t13);
    t2 = (t3 + t23);
    t10 = (t0 + 3128U);
    t11 = *((char **)t10);
    t10 = (t11 + 0);
    memcpy(t10, t2, 32U);
    xsi_set_current_line(40, ng0);
    t2 = (t0 + 3128U);
    t3 = *((char **)t2);
    t2 = (t0 + 3008U);
    t7 = *((char **)t2);
    t8 = ((IEEE_P_2592010699) + 4024);
    t10 = (t0 + 8000U);
    t11 = (t0 + 7984U);
    t2 = xsi_base_array_concat(t2, t15, t8, (char)97, t3, t10, (char)97, t7, t11, (char)101);
    t12 = (32U + 32U);
    t1 = (64U != t12);
    if (t1 == 1)
        goto LAB8;

LAB9:    t19 = (t0 + 4512);
    t24 = (t19 + 56U);
    t25 = *((char **)t24);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    memcpy(t27, t2, 64U);
    xsi_driver_first_trans_fast_port(t19);
    goto LAB3;

LAB5:    t2 = (t0 + 1792U);
    t6 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t2, 0U, 0U);
    t1 = t6;
    goto LAB7;

LAB8:    xsi_size_not_matching(64U, t12, 0);
    goto LAB9;

LAB10:    xsi_set_current_line(44, ng0);
    t7 = (t0 + 22452);
    *((int *)t7) = 0;
    t8 = (t0 + 22456);
    *((int *)t8) = 31;
    t9 = 0;
    t18 = 31;

LAB16:    if (t9 <= t18)
        goto LAB17;

LAB19:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 2472U);
    t3 = *((char **)t2);
    t9 = *((int *)t3);
    t2 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t15, t9, 4);
    t7 = (t0 + 4640);
    t8 = (t7 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t19 = *((char **)t11);
    memcpy(t19, t2, 4U);
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 2472U);
    t3 = *((char **)t2);
    t9 = *((int *)t3);
    t18 = (t9 + 1);
    t2 = (t0 + 4704);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    *((int *)t11) = t18;
    xsi_driver_first_trans_fast(t2);
    goto LAB11;

LAB13:    t2 = (t0 + 1792U);
    t6 = ieee_p_2592010699_sub_1258338084_503743352(IEEE_P_2592010699, t2, 0U, 0U);
    t1 = t6;
    goto LAB15;

LAB17:    xsi_set_current_line(45, ng0);
    t10 = (t0 + 1672U);
    t11 = *((char **)t10);
    t10 = (t0 + 22452);
    t20 = *((int *)t10);
    t21 = (t20 - 0);
    t12 = (t21 * 1);
    xsi_vhdl_check_range_of_index(0, 31, 1, *((int *)t10));
    t13 = (32U * t12);
    t14 = (0 + t13);
    t19 = (t11 + t14);
    t24 = (t0 + 2472U);
    t25 = *((char **)t24);
    t28 = *((int *)t25);
    t29 = (t28 - 0);
    t17 = (t29 * 1);
    t22 = (1024U * t17);
    t23 = (0U + t22);
    t24 = (t0 + 22452);
    t30 = *((int *)t24);
    t31 = (t30 - 0);
    t32 = (t31 * 1);
    t33 = (32U * t32);
    t34 = (t23 + t33);
    t26 = (t0 + 4576);
    t27 = (t26 + 56U);
    t35 = *((char **)t27);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    memcpy(t37, t19, 32U);
    xsi_driver_first_trans_delta(t26, t34, 32U, 0LL);

LAB18:    t2 = (t0 + 22452);
    t9 = *((int *)t2);
    t3 = (t0 + 22456);
    t18 = *((int *)t3);
    if (t9 == t18)
        goto LAB19;

LAB20:    t20 = (t9 + 1);
    t9 = t20;
    t7 = (t0 + 22452);
    *((int *)t7) = t9;
    goto LAB16;

}


extern void work_a_2172777829_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2172777829_3212880686_p_0};
	xsi_register_didat("work_a_2172777829_3212880686", "isim/Main_TB_isim_beh.exe.sim/work/a_2172777829_3212880686.didat");
	xsi_register_executes(pe);
}
