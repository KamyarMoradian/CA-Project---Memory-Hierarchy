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

unsigned char ieee_p_2592010699_sub_1258338084_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_0648074530_2034314552_p_0(char *t0)
{
    char t52[16];
    char t53[16];
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
    unsigned int t12;
    unsigned int t13;
    int t14;
    int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    int t25;
    int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    int t40;
    int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    int64 t54;

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
LAB3:    xsi_set_current_line(47, ng0);
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
LAB30:    t2 = (t0 + 3872);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(32, ng0);
    t7 = (t0 + 2448U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_set_current_line(33, ng0);
    t2 = (t0 + 7472);
    *((int *)t2) = 0;
    t3 = (t0 + 7476);
    *((int *)t3) = 47;
    t9 = 0;
    t10 = 47;

LAB8:    if (t9 <= t10)
        goto LAB9;

LAB11:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 2448U);
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

LAB9:    xsi_set_current_line(34, ng0);
    t7 = (t0 + 2152U);
    t8 = *((char **)t7);
    t11 = (13 - 13);
    t12 = (t11 * -1);
    t13 = (1U * t12);
    t7 = (t0 + 7472);
    t14 = *((int *)t7);
    t15 = (t14 - 0);
    t16 = (t15 * 1);
    xsi_vhdl_check_range_of_index(0, 47, 1, *((int *)t7));
    t17 = (14U * t16);
    t18 = (0 + t17);
    t19 = (t18 + t13);
    t20 = (t8 + t19);
    t4 = *((unsigned char *)t20);
    t5 = (t4 == (unsigned char)3);
    if (t5 == 1)
        goto LAB15;

LAB16:    t1 = (unsigned char)0;

LAB17:    if (t1 != 0)
        goto LAB12;

LAB14:
LAB13:
LAB10:    t2 = (t0 + 7472);
    t9 = *((int *)t2);
    t3 = (t0 + 7476);
    t10 = *((int *)t3);
    if (t9 == t10)
        goto LAB11;

LAB25:    t11 = (t9 + 1);
    t9 = t11;
    t7 = (t0 + 7472);
    *((int *)t7) = t9;
    goto LAB8;

LAB12:    xsi_set_current_line(35, ng0);
    t36 = (t0 + 2152U);
    t37 = *((char **)t36);
    t38 = (13 - 3);
    t39 = (t38 * 1U);
    t36 = (t0 + 7472);
    t40 = *((int *)t36);
    t41 = (t40 - 0);
    t42 = (t41 * 1);
    xsi_vhdl_check_range_of_index(0, 47, 1, *((int *)t36));
    t43 = (14U * t42);
    t44 = (0 + t43);
    t45 = (t44 + t39);
    t46 = (t37 + t45);
    t47 = (t0 + 3952);
    t48 = (t47 + 56U);
    t49 = *((char **)t48);
    t50 = (t49 + 56U);
    t51 = *((char **)t50);
    memcpy(t51, t46, 4U);
    xsi_driver_first_trans_fast_port(t47);
    xsi_set_current_line(36, ng0);
    t2 = (t0 + 4016);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);
    t8 = (t7 + 56U);
    t20 = *((char **)t8);
    *((unsigned char *)t20) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 2448U);
    t3 = *((char **)t2);
    t2 = (t3 + 0);
    *((unsigned char *)t2) = (unsigned char)3;
    xsi_set_current_line(38, ng0);
    goto LAB11;

LAB15:    t21 = (t0 + 2152U);
    t22 = *((char **)t21);
    t23 = (13 - 12);
    t24 = (t23 * 1U);
    t21 = (t0 + 7472);
    t25 = *((int *)t21);
    t26 = (t25 - 0);
    t27 = (t26 * 1);
    xsi_vhdl_check_range_of_index(0, 47, 1, *((int *)t21));
    t28 = (14U * t27);
    t29 = (0 + t28);
    t30 = (t29 + t24);
    t31 = (t22 + t30);
    t32 = (t0 + 1352U);
    t33 = *((char **)t32);
    t6 = 1;
    if (9U == 9U)
        goto LAB18;

LAB19:    t6 = 0;

LAB20:    t1 = t6;
    goto LAB17;

LAB18:    t34 = 0;

LAB21:    if (t34 < 9U)
        goto LAB22;
    else
        goto LAB20;

LAB22:    t32 = (t31 + t34);
    t35 = (t33 + t34);
    if (*((unsigned char *)t32) != *((unsigned char *)t35))
        goto LAB19;

LAB23:    t34 = (t34 + 1);
    goto LAB21;

LAB24:    goto LAB13;

LAB26:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 4016);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t20 = (t8 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB27;

LAB29:    xsi_set_current_line(48, ng0);
    t7 = (t0 + 2448U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 7480);
    *((int *)t2) = 0;
    t3 = (t0 + 7484);
    *((int *)t3) = 47;
    t9 = 0;
    t10 = 47;

LAB35:    if (t9 <= t10)
        goto LAB36;

LAB38:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 2448U);
    t3 = *((char **)t2);
    t1 = *((unsigned char *)t3);
    t4 = (t1 == (unsigned char)2);
    if (t4 != 0)
        goto LAB46;

LAB48:
LAB47:    goto LAB30;

LAB32:    t2 = (t0 + 1632U);
    t6 = ieee_p_2592010699_sub_1258338084_503743352(IEEE_P_2592010699, t2, 0U, 0U);
    t1 = t6;
    goto LAB34;

LAB36:    xsi_set_current_line(51, ng0);
    t7 = (t0 + 2152U);
    t8 = *((char **)t7);
    t11 = (13 - 13);
    t12 = (t11 * -1);
    t13 = (1U * t12);
    t7 = (t0 + 7480);
    t14 = *((int *)t7);
    t15 = (t14 - 0);
    t16 = (t15 * 1);
    xsi_vhdl_check_range_of_index(0, 47, 1, *((int *)t7));
    t17 = (14U * t16);
    t18 = (0 + t17);
    t19 = (t18 + t13);
    t20 = (t8 + t19);
    t1 = *((unsigned char *)t20);
    t4 = (t1 == (unsigned char)2);
    if (t4 != 0)
        goto LAB39;

LAB41:
LAB40:
LAB37:    t2 = (t0 + 7480);
    t9 = *((int *)t2);
    t3 = (t0 + 7484);
    t10 = *((int *)t3);
    if (t9 == t10)
        goto LAB38;

LAB45:    t11 = (t9 + 1);
    t9 = t11;
    t7 = (t0 + 7480);
    *((int *)t7) = t9;
    goto LAB35;

LAB39:    xsi_set_current_line(52, ng0);
    t21 = (t0 + 1352U);
    t22 = *((char **)t21);
    t31 = ((IEEE_P_2592010699) + 4024);
    t32 = (t0 + 6720U);
    t21 = xsi_base_array_concat(t21, t52, t31, (char)99, (unsigned char)3, (char)97, t22, t32, (char)101);
    t33 = (t0 + 1512U);
    t35 = *((char **)t33);
    t36 = ((IEEE_P_2592010699) + 4024);
    t37 = (t0 + 6736U);
    t33 = xsi_base_array_concat(t33, t53, t36, (char)97, t21, t52, (char)97, t35, t37, (char)101);
    t23 = (1U + 9U);
    t24 = (t23 + 4U);
    t5 = (14U != t24);
    if (t5 == 1)
        goto LAB42;

LAB43:    t46 = (t0 + 7480);
    t25 = *((int *)t46);
    t26 = (t25 - 0);
    t27 = (t26 * 1);
    t28 = (14U * t27);
    t29 = (0U + t28);
    t47 = (t0 + 4080);
    t48 = (t47 + 56U);
    t49 = *((char **)t48);
    t50 = (t49 + 56U);
    t51 = *((char **)t50);
    memcpy(t51, t33, 14U);
    xsi_driver_first_trans_delta(t47, t29, 14U, 0LL);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 2448U);
    t3 = *((char **)t2);
    t2 = (t3 + 0);
    *((unsigned char *)t2) = (unsigned char)3;
    xsi_set_current_line(54, ng0);
    goto LAB38;

LAB42:    xsi_size_not_matching(14U, t24, 0);
    goto LAB43;

LAB44:    goto LAB40;

LAB46:    xsi_set_current_line(60, ng0);
    t54 = xsi_get_sim_current_time();
    t9 = xsi_vhdl_mod(((int)(t54)), 48);
    t2 = (t0 + 2568U);
    t7 = *((char **)t2);
    t2 = (t7 + 0);
    *((int *)t2) = t9;
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t7 = ((IEEE_P_2592010699) + 4024);
    t8 = (t0 + 6720U);
    t2 = xsi_base_array_concat(t2, t52, t7, (char)99, (unsigned char)3, (char)97, t3, t8, (char)101);
    t20 = (t0 + 1512U);
    t21 = *((char **)t20);
    t22 = ((IEEE_P_2592010699) + 4024);
    t31 = (t0 + 6736U);
    t20 = xsi_base_array_concat(t20, t53, t22, (char)97, t2, t52, (char)97, t21, t31, (char)101);
    t12 = (1U + 9U);
    t13 = (t12 + 4U);
    t1 = (14U != t13);
    if (t1 == 1)
        goto LAB49;

LAB50:    t32 = (t0 + 2568U);
    t33 = *((char **)t32);
    t9 = *((int *)t33);
    t10 = (t9 - 0);
    t16 = (t10 * 1);
    t17 = (14U * t16);
    t18 = (0U + t17);
    t32 = (t0 + 4080);
    t35 = (t32 + 56U);
    t36 = *((char **)t35);
    t37 = (t36 + 56U);
    t46 = *((char **)t37);
    memcpy(t46, t20, 14U);
    xsi_driver_first_trans_delta(t32, t18, 14U, 0LL);
    goto LAB47;

LAB49:    xsi_size_not_matching(14U, t13, 0);
    goto LAB50;

}


extern void work_a_0648074530_2034314552_init()
{
	static char *pe[] = {(void *)work_a_0648074530_2034314552_p_0};
	xsi_register_didat("work_a_0648074530_2034314552", "isim/Main_TB_isim_beh.exe.sim/work/a_0648074530_2034314552.didat");
	xsi_register_executes(pe);
}
