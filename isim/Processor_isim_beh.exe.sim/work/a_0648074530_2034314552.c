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
static const char *ng0 = "C:/Users/Top/Documents/Uni/ForthSem/CA/Project/CA-Project---Memory-Hierarchy/TLB.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3972351953;

unsigned char ieee_p_2592010699_sub_1258338084_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
double ieee_p_3972351953_sub_28498392_2984157535(char *, double );
void ieee_p_3972351953_sub_3007962107_2984157535(char *, char *, char *, char *, char *);


static void work_a_0648074530_2034314552_p_0(char *t0)
{
    char t39[16];
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    int t9;
    int t10;
    int t11;
    int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    int t33;
    double t34;
    double t35;
    double t36;
    double t37;
    double t38;

LAB0:    xsi_set_current_line(40, ng0);
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
LAB3:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 == 1)
        goto LAB32;

LAB33:    t1 = (unsigned char)0;

LAB34:    if (t1 != 0)
        goto LAB29;

LAB31:
LAB30:    t2 = (t0 + 4352);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(41, ng0);
    t7 = (t0 + 2568U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 8408);
    *((int *)t2) = 0;
    t3 = (t0 + 8412);
    *((int *)t3) = 47;
    t9 = 0;
    t10 = 47;

LAB8:    if (t9 <= t10)
        goto LAB9;

LAB11:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2568U);
    t3 = *((char **)t2);
    t1 = *((unsigned char *)t3);
    t4 = (t1 == (unsigned char)2);
    if (t4 != 0)
        goto LAB26;

LAB28:
LAB27:    goto LAB3;

LAB5:    t2 = (t0 + 1632U);
    t6 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t2, 0U, 0U);
    t1 = t6;
    goto LAB7;

LAB9:    xsi_set_current_line(43, ng0);
    t7 = (t0 + 2152U);
    t8 = *((char **)t7);
    t7 = (t0 + 8408);
    t11 = *((int *)t7);
    t12 = (t11 - 0);
    t13 = (t12 * 1);
    xsi_vhdl_check_range_of_index(0, 47, 1, *((int *)t7));
    t14 = (14U * t13);
    t15 = (0 + t14);
    t16 = (t8 + t15);
    t17 = (t0 + 2448U);
    t18 = *((char **)t17);
    t17 = (t18 + 0);
    memcpy(t17, t16, 14U);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 2448U);
    t3 = *((char **)t2);
    t11 = (13 - 13);
    t13 = (t11 * -1);
    t14 = (1U * t13);
    t15 = (0 + t14);
    t2 = (t3 + t15);
    t4 = *((unsigned char *)t2);
    t5 = (t4 == (unsigned char)3);
    if (t5 == 1)
        goto LAB15;

LAB16:    t1 = (unsigned char)0;

LAB17:    if (t1 != 0)
        goto LAB12;

LAB14:
LAB13:
LAB10:    t2 = (t0 + 8408);
    t9 = *((int *)t2);
    t3 = (t0 + 8412);
    t10 = *((int *)t3);
    if (t9 == t10)
        goto LAB11;

LAB25:    t11 = (t9 + 1);
    t9 = t11;
    t7 = (t0 + 8408);
    *((int *)t7) = t9;
    goto LAB8;

LAB12:    xsi_set_current_line(45, ng0);
    t23 = (t0 + 2448U);
    t24 = *((char **)t23);
    t25 = (13 - 3);
    t26 = (t25 * 1U);
    t27 = (0 + t26);
    t23 = (t24 + t27);
    t28 = (t0 + 4432);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memcpy(t32, t23, 4U);
    xsi_driver_first_trans_fast_port(t28);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 4496);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);
    t8 = (t7 + 56U);
    t16 = *((char **)t8);
    *((unsigned char *)t16) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 2568U);
    t3 = *((char **)t2);
    t2 = (t3 + 0);
    *((unsigned char *)t2) = (unsigned char)3;
    xsi_set_current_line(48, ng0);
    goto LAB11;

LAB15:    t7 = (t0 + 2448U);
    t8 = *((char **)t7);
    t19 = (13 - 12);
    t20 = (t19 * 1U);
    t21 = (0 + t20);
    t7 = (t8 + t21);
    t16 = (t0 + 1352U);
    t17 = *((char **)t16);
    t6 = 1;
    if (9U == 9U)
        goto LAB18;

LAB19:    t6 = 0;

LAB20:    t1 = t6;
    goto LAB17;

LAB18:    t22 = 0;

LAB21:    if (t22 < 9U)
        goto LAB22;
    else
        goto LAB20;

LAB22:    t16 = (t7 + t22);
    t18 = (t17 + t22);
    if (*((unsigned char *)t16) != *((unsigned char *)t18))
        goto LAB19;

LAB23:    t22 = (t22 + 1);
    goto LAB21;

LAB24:    goto LAB13;

LAB26:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 4496);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t16 = (t8 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB27;

LAB29:    xsi_set_current_line(58, ng0);
    t7 = (t0 + 2568U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 8416);
    *((int *)t2) = 0;
    t3 = (t0 + 8420);
    *((int *)t3) = 47;
    t9 = 0;
    t10 = 47;

LAB35:    if (t9 <= t10)
        goto LAB36;

LAB38:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 2568U);
    t3 = *((char **)t2);
    t1 = *((unsigned char *)t3);
    t4 = (t1 == (unsigned char)2);
    if (t4 != 0)
        goto LAB44;

LAB46:
LAB45:    goto LAB30;

LAB32:    t2 = (t0 + 1632U);
    t6 = ieee_p_2592010699_sub_1258338084_503743352(IEEE_P_2592010699, t2, 0U, 0U);
    t1 = t6;
    goto LAB34;

LAB36:    xsi_set_current_line(61, ng0);
    t7 = (t0 + 2152U);
    t8 = *((char **)t7);
    t7 = (t0 + 8416);
    t11 = *((int *)t7);
    t12 = (t11 - 0);
    t13 = (t12 * 1);
    xsi_vhdl_check_range_of_index(0, 47, 1, *((int *)t7));
    t14 = (14U * t13);
    t15 = (0 + t14);
    t16 = (t8 + t15);
    t17 = (t0 + 2448U);
    t18 = *((char **)t17);
    t17 = (t18 + 0);
    memcpy(t17, t16, 14U);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2448U);
    t3 = *((char **)t2);
    t11 = (13 - 13);
    t13 = (t11 * -1);
    t14 = (1U * t13);
    t15 = (0 + t14);
    t2 = (t3 + t15);
    t1 = *((unsigned char *)t2);
    t4 = (t1 == (unsigned char)2);
    if (t4 != 0)
        goto LAB39;

LAB41:
LAB40:
LAB37:    t2 = (t0 + 8416);
    t9 = *((int *)t2);
    t3 = (t0 + 8420);
    t10 = *((int *)t3);
    if (t9 == t10)
        goto LAB38;

LAB43:    t11 = (t9 + 1);
    t9 = t11;
    t7 = (t0 + 8416);
    *((int *)t7) = t9;
    goto LAB35;

LAB39:    xsi_set_current_line(63, ng0);
    t7 = (t0 + 1352U);
    t8 = *((char **)t7);
    t7 = (t0 + 8416);
    t12 = *((int *)t7);
    t33 = (t12 - 0);
    t19 = (t33 * 1);
    t20 = (14U * t19);
    t21 = (0U + t20);
    t22 = (13 - 12);
    t25 = (1U * t22);
    t26 = (t21 + t25);
    t16 = (t0 + 4560);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t23 = (t18 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t8, 9U);
    xsi_driver_first_trans_delta(t16, t26, 9U, 0LL);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 2568U);
    t3 = *((char **)t2);
    t2 = (t3 + 0);
    *((unsigned char *)t2) = (unsigned char)3;
    xsi_set_current_line(65, ng0);
    goto LAB38;

LAB42:    goto LAB40;

LAB44:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 2688U);
    t7 = *((char **)t2);
    t2 = (t7 + 0);
    *((int *)t2) = 1;
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 2808U);
    t3 = *((char **)t2);
    t2 = (t3 + 0);
    *((int *)t2) = 1;
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 3840);
    t3 = (t0 + 2688U);
    t7 = *((char **)t3);
    t3 = (t7 + 0);
    t8 = (t0 + 2808U);
    t16 = *((char **)t8);
    t8 = (t16 + 0);
    t17 = (t0 + 2928U);
    t18 = *((char **)t17);
    t17 = (t18 + 0);
    ieee_p_3972351953_sub_3007962107_2984157535(IEEE_P_3972351953, t2, t3, t8, t17);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 2928U);
    t3 = *((char **)t2);
    t34 = *((double *)t3);
    t35 = (t34 * 48.000000000000000);
    t36 = ieee_p_3972351953_sub_28498392_2984157535(IEEE_P_3972351953, t35);
    t1 = (t36 >= 0);
    if (t1 == 1)
        goto LAB47;

LAB48:    t38 = (t36 - 0.50000000000000000);
    t9 = ((int)(t38));

LAB49:    t2 = (t0 + 3048U);
    t7 = *((char **)t2);
    t2 = (t7 + 0);
    *((int *)t2) = t9;
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t7 = ((IEEE_P_2592010699) + 4024);
    t8 = (t0 + 7580U);
    t2 = xsi_base_array_concat(t2, t39, t7, (char)99, (unsigned char)3, (char)97, t3, t8, (char)101);
    t13 = (1U + 9U);
    t1 = (10U != t13);
    if (t1 == 1)
        goto LAB52;

LAB53:    t16 = (t0 + 3048U);
    t17 = *((char **)t16);
    t9 = *((int *)t17);
    t10 = (t9 - 0);
    t14 = (t10 * 1);
    t15 = (14U * t14);
    t19 = (0U + t15);
    t20 = (13 - 13);
    t21 = (1U * t20);
    t22 = (t19 + t21);
    t16 = (t0 + 4560);
    t18 = (t16 + 56U);
    t23 = *((char **)t18);
    t24 = (t23 + 56U);
    t28 = *((char **)t24);
    memcpy(t28, t2, 10U);
    xsi_driver_first_trans_delta(t16, t22, 10U, 0LL);
    goto LAB45;

LAB47:    t4 = (t36 >= 2147483647);
    if (t4 == 1)
        goto LAB50;

LAB51:    t37 = (t36 + 0.50000000000000000);
    t9 = ((int)(t37));
    goto LAB49;

LAB50:    t9 = 2147483647;
    goto LAB49;

LAB52:    xsi_size_not_matching(10U, t13, 0);
    goto LAB53;

}


extern void work_a_0648074530_2034314552_init()
{
	static char *pe[] = {(void *)work_a_0648074530_2034314552_p_0};
	xsi_register_didat("work_a_0648074530_2034314552", "isim/Processor_isim_beh.exe.sim/work/a_0648074530_2034314552.didat");
	xsi_register_executes(pe);
}
