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
static const char *ng0 = "C:/Users/Top/Documents/Uni/ForthSem/CA/Project/CA-Project---Memory-Hierarchy/PageTable.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

int ieee_p_1242562249_sub_1657552908_1035706684(char *, char *, char *);
unsigned char ieee_p_2592010699_sub_1258338084_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_1546792116_3212880686_p_0(char *t0)
{
    char t22[16];
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
    int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t23;

LAB0:    xsi_set_current_line(42, ng0);
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
LAB3:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 == 1)
        goto LAB14;

LAB15:    t1 = (unsigned char)0;

LAB16:    if (t1 != 0)
        goto LAB11;

LAB13:
LAB12:    t2 = (t0 + 4472);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(44, ng0);
    t7 = (t0 + 1352U);
    t8 = *((char **)t7);
    t7 = (t0 + 7824U);
    t9 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t8, t7);
    t10 = (t0 + 2568U);
    t11 = *((char **)t10);
    t10 = (t11 + 0);
    *((int *)t10) = t9;
    xsi_set_current_line(45, ng0);
    t2 = (t0 + 2152U);
    t3 = *((char **)t2);
    t2 = (t0 + 2568U);
    t7 = *((char **)t2);
    t9 = *((int *)t7);
    t12 = (t9 - 0);
    t13 = (t12 * 1);
    xsi_vhdl_check_range_of_index(0, 511, 1, t9);
    t14 = (5U * t13);
    t15 = (0 + t14);
    t2 = (t3 + t15);
    t8 = (t0 + 2448U);
    t10 = *((char **)t8);
    t8 = (t10 + 0);
    memcpy(t8, t2, 5U);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 2448U);
    t3 = *((char **)t2);
    t9 = (4 - 4);
    t13 = (t9 * -1);
    t14 = (1U * t13);
    t15 = (0 + t14);
    t2 = (t3 + t15);
    t1 = *((unsigned char *)t2);
    t4 = (t1 == (unsigned char)3);
    if (t4 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 4616);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);
    t8 = (t7 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);

LAB9:    goto LAB3;

LAB5:    t2 = (t0 + 1632U);
    t6 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t2, 0U, 0U);
    t1 = t6;
    goto LAB7;

LAB8:    xsi_set_current_line(47, ng0);
    t7 = (t0 + 2448U);
    t8 = *((char **)t7);
    t16 = (4 - 3);
    t17 = (t16 * 1U);
    t18 = (0 + t17);
    t7 = (t8 + t18);
    t10 = (t0 + 4552);
    t11 = (t10 + 56U);
    t19 = *((char **)t11);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t7, 4U);
    xsi_driver_first_trans_fast_port(t10);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 4616);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);
    t8 = (t7 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB9;

LAB11:    xsi_set_current_line(56, ng0);
    t7 = (t0 + 1352U);
    t8 = *((char **)t7);
    t7 = (t0 + 7824U);
    t9 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t8, t7);
    t10 = (t0 + 2568U);
    t11 = *((char **)t10);
    t10 = (t11 + 0);
    *((int *)t10) = t9;
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t7 = ((IEEE_P_2592010699) + 4024);
    t8 = (t0 + 7840U);
    t2 = xsi_base_array_concat(t2, t22, t7, (char)99, (unsigned char)3, (char)97, t3, t8, (char)101);
    t13 = (1U + 4U);
    t1 = (5U != t13);
    if (t1 == 1)
        goto LAB17;

LAB18:    t10 = (t0 + 2568U);
    t11 = *((char **)t10);
    t9 = *((int *)t11);
    t12 = (t9 - 0);
    t14 = (t12 * 1);
    t15 = (5U * t14);
    t16 = (0U + t15);
    t10 = (t0 + 4680);
    t19 = (t10 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t23 = *((char **)t21);
    memcpy(t23, t2, 5U);
    xsi_driver_first_trans_delta(t10, t16, 5U, 0LL);
    goto LAB12;

LAB14:    t2 = (t0 + 1632U);
    t6 = ieee_p_2592010699_sub_1258338084_503743352(IEEE_P_2592010699, t2, 0U, 0U);
    t1 = t6;
    goto LAB16;

LAB17:    xsi_size_not_matching(5U, t13, 0);
    goto LAB18;

}


extern void work_a_1546792116_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1546792116_3212880686_p_0};
	xsi_register_didat("work_a_1546792116_3212880686", "isim/Processor_isim_beh.exe.sim/work/a_1546792116_3212880686.didat");
	xsi_register_executes(pe);
}
