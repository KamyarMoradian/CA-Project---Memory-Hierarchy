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
    unsigned int t16;
    int t17;
    int t18;
    int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    int t25;
    int t26;
    int t27;
    int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;

LAB0:    xsi_set_current_line(31, ng0);
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
LAB3:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 == 1)
        goto LAB11;

LAB12:    t1 = (unsigned char)0;

LAB13:    if (t1 != 0)
        goto LAB8;

LAB10:
LAB9:    t2 = (t0 + 4192);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(32, ng0);
    t7 = (t0 + 1352U);
    t8 = *((char **)t7);
    t7 = (t0 + 7436U);
    t9 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t8, t7);
    t10 = (t0 + 2768U);
    t11 = *((char **)t10);
    t10 = (t11 + 0);
    *((int *)t10) = t9;
    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t12 = (6 - 6);
    t13 = (t12 * 1U);
    t14 = (0 + t13);
    t2 = (t3 + t14);
    t7 = (t15 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 6;
    t8 = (t7 + 4U);
    *((int *)t8) = 2;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t9 = (2 - 6);
    t16 = (t9 * -1);
    t16 = (t16 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t16;
    t17 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t2, t15);
    t8 = (t0 + 2888U);
    t10 = *((char **)t8);
    t8 = (t10 + 0);
    *((int *)t8) = t17;
    xsi_set_current_line(34, ng0);
    t2 = (t0 + 2312U);
    t3 = *((char **)t2);
    t2 = (t0 + 2888U);
    t7 = *((char **)t2);
    t9 = *((int *)t7);
    t17 = (t9 - 0);
    t12 = (t17 * 1);
    xsi_vhdl_check_range_of_index(0, 31, 1, t9);
    t13 = (32U * t12);
    t2 = (t0 + 2768U);
    t8 = *((char **)t2);
    t18 = *((int *)t8);
    t19 = (t18 - 0);
    t14 = (t19 * 1);
    xsi_vhdl_check_range_of_index(0, 12, 1, t18);
    t16 = (1024U * t14);
    t20 = (0 + t16);
    t21 = (t20 + t13);
    t2 = (t3 + t21);
    t10 = (t0 + 4272);
    t11 = (t10 + 56U);
    t22 = *((char **)t11);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t2, 32U);
    xsi_driver_first_trans_fast_port(t10);
    goto LAB3;

LAB5:    t2 = (t0 + 1792U);
    t6 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t2, 0U, 0U);
    t1 = t6;
    goto LAB7;

LAB8:    xsi_set_current_line(38, ng0);
    t7 = (t0 + 21888);
    *((int *)t7) = 0;
    t8 = (t0 + 21892);
    *((int *)t8) = 31;
    t9 = 0;
    t17 = 31;

LAB14:    if (t9 <= t17)
        goto LAB15;

LAB17:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 2472U);
    t3 = *((char **)t2);
    t9 = *((int *)t3);
    t2 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t15, t9, 4);
    t7 = (t0 + 4400);
    t8 = (t7 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t22 = *((char **)t11);
    memcpy(t22, t2, 4U);
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 2472U);
    t3 = *((char **)t2);
    t9 = *((int *)t3);
    t17 = (t9 + 1);
    t2 = (t0 + 4464);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    *((int *)t11) = t17;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB11:    t2 = (t0 + 1792U);
    t6 = ieee_p_2592010699_sub_1258338084_503743352(IEEE_P_2592010699, t2, 0U, 0U);
    t1 = t6;
    goto LAB13;

LAB15:    xsi_set_current_line(39, ng0);
    t10 = (t0 + 1672U);
    t11 = *((char **)t10);
    t10 = (t0 + 21888);
    t18 = *((int *)t10);
    t19 = (t18 - 0);
    t12 = (t19 * 1);
    xsi_vhdl_check_range_of_index(0, 31, 1, *((int *)t10));
    t13 = (32U * t12);
    t14 = (0 + t13);
    t22 = (t11 + t14);
    t23 = (t0 + 2472U);
    t24 = *((char **)t23);
    t25 = *((int *)t24);
    t26 = (t25 - 0);
    t16 = (t26 * 1);
    t20 = (1024U * t16);
    t21 = (0U + t20);
    t23 = (t0 + 21888);
    t27 = *((int *)t23);
    t28 = (t27 - 0);
    t29 = (t28 * 1);
    t30 = (32U * t29);
    t31 = (t21 + t30);
    t32 = (t0 + 4336);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    memcpy(t36, t22, 32U);
    xsi_driver_first_trans_delta(t32, t31, 32U, 0LL);

LAB16:    t2 = (t0 + 21888);
    t9 = *((int *)t2);
    t3 = (t0 + 21892);
    t17 = *((int *)t3);
    if (t9 == t17)
        goto LAB17;

LAB18:    t18 = (t9 + 1);
    t9 = t18;
    t7 = (t0 + 21888);
    *((int *)t7) = t9;
    goto LAB14;

}


extern void work_a_2172777829_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2172777829_3212880686_p_0};
	xsi_register_didat("work_a_2172777829_3212880686", "isim/Processor_isim_beh.exe.sim/work/a_2172777829_3212880686.didat");
	xsi_register_executes(pe);
}
