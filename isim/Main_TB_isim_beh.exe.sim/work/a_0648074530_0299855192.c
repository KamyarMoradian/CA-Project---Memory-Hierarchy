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
extern char *IEEE_P_1242562249;
extern char *IEEE_P_3972351953;

int ieee_p_1242562249_sub_1657552908_1035706684(char *, char *, char *);
unsigned char ieee_p_2592010699_sub_1258338084_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
double ieee_p_3972351953_sub_28498392_2984157535(char *, double );
void ieee_p_3972351953_sub_3007962107_2984157535(char *, char *, char *, char *, char *);


static void work_a_0648074530_0299855192_p_0(char *t0)
{
    char t74[16];
    char t75[16];
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    int t12;
    int t13;
    char *t14;
    int t15;
    int t16;
    int t17;
    unsigned int t18;
    char *t19;
    int t20;
    int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    int t36;
    int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    int t42;
    int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    int t56;
    int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    char *t61;
    int t62;
    int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    double t76;
    double t77;
    double t78;
    double t79;
    double t80;

LAB0:    xsi_set_current_line(99, ng0);
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
LAB3:    xsi_set_current_line(118, ng0);
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
LAB30:    t2 = (t0 + 4472);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(100, ng0);
    t7 = (t0 + 2688U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_set_current_line(101, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 2448U);
    t7 = *((char **)t2);
    t2 = (t7 + 0);
    memcpy(t2, t3, 9U);
    xsi_set_current_line(102, ng0);
    t2 = (t0 + 2448U);
    t3 = *((char **)t2);
    t9 = (8 - 3);
    t10 = (t9 * 1U);
    t11 = (0 + t10);
    t2 = (t3 + t11);
    t7 = (t0 + 7892U);
    t12 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t2, t7);
    t13 = xsi_vhdl_mod(t12, 12);
    t8 = (t0 + 2568U);
    t14 = *((char **)t8);
    t8 = (t14 + 0);
    *((int *)t8) = t13;
    xsi_set_current_line(104, ng0);
    t2 = (t0 + 8456);
    *((int *)t2) = 0;
    t3 = (t0 + 8460);
    *((int *)t3) = 3;
    t12 = 0;
    t13 = 3;

LAB8:    if (t12 <= t13)
        goto LAB9;

LAB11:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 2688U);
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

LAB9:    xsi_set_current_line(105, ng0);
    t7 = (t0 + 2152U);
    t8 = *((char **)t7);
    t15 = (9 - 9);
    t9 = (t15 * -1);
    t10 = (1U * t9);
    t7 = (t0 + 8456);
    t16 = *((int *)t7);
    t17 = (t16 - 0);
    t11 = (t17 * 1);
    xsi_vhdl_check_range_of_index(0, 3, 1, *((int *)t7));
    t18 = (10U * t11);
    t14 = (t0 + 2568U);
    t19 = *((char **)t14);
    t20 = *((int *)t19);
    t21 = (t20 - 11);
    t22 = (t21 * -1);
    xsi_vhdl_check_range_of_index(11, 0, -1, t20);
    t23 = (40U * t22);
    t24 = (0 + t23);
    t25 = (t24 + t18);
    t26 = (t25 + t10);
    t14 = (t8 + t26);
    t4 = *((unsigned char *)t14);
    t5 = (t4 == (unsigned char)3);
    if (t5 == 1)
        goto LAB15;

LAB16:    t1 = (unsigned char)0;

LAB17:    if (t1 != 0)
        goto LAB12;

LAB14:
LAB13:
LAB10:    t2 = (t0 + 8456);
    t12 = *((int *)t2);
    t3 = (t0 + 8460);
    t13 = *((int *)t3);
    if (t12 == t13)
        goto LAB11;

LAB25:    t15 = (t12 + 1);
    t12 = t15;
    t7 = (t0 + 8456);
    *((int *)t7) = t12;
    goto LAB8;

LAB12:    xsi_set_current_line(106, ng0);
    t52 = (t0 + 2152U);
    t53 = *((char **)t52);
    t54 = (9 - 3);
    t55 = (t54 * 1U);
    t52 = (t0 + 8456);
    t56 = *((int *)t52);
    t57 = (t56 - 0);
    t58 = (t57 * 1);
    xsi_vhdl_check_range_of_index(0, 3, 1, *((int *)t52));
    t59 = (10U * t58);
    t60 = (t0 + 2568U);
    t61 = *((char **)t60);
    t62 = *((int *)t61);
    t63 = (t62 - 11);
    t64 = (t63 * -1);
    xsi_vhdl_check_range_of_index(11, 0, -1, t62);
    t65 = (40U * t64);
    t66 = (0 + t65);
    t67 = (t66 + t59);
    t68 = (t67 + t55);
    t60 = (t53 + t68);
    t69 = (t0 + 4552);
    t70 = (t69 + 56U);
    t71 = *((char **)t70);
    t72 = (t71 + 56U);
    t73 = *((char **)t72);
    memcpy(t73, t60, 4U);
    xsi_driver_first_trans_fast_port(t69);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 4616);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);
    t8 = (t7 + 56U);
    t14 = *((char **)t8);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(108, ng0);
    t2 = (t0 + 2688U);
    t3 = *((char **)t2);
    t2 = (t3 + 0);
    *((unsigned char *)t2) = (unsigned char)3;
    xsi_set_current_line(109, ng0);
    goto LAB11;

LAB15:    t27 = (t0 + 2448U);
    t28 = *((char **)t27);
    t29 = (8 - 8);
    t30 = (t29 * 1U);
    t31 = (0 + t30);
    t27 = (t28 + t31);
    t32 = (t0 + 2152U);
    t33 = *((char **)t32);
    t34 = (9 - 8);
    t35 = (t34 * 1U);
    t32 = (t0 + 8456);
    t36 = *((int *)t32);
    t37 = (t36 - 0);
    t38 = (t37 * 1);
    xsi_vhdl_check_range_of_index(0, 3, 1, *((int *)t32));
    t39 = (10U * t38);
    t40 = (t0 + 2568U);
    t41 = *((char **)t40);
    t42 = *((int *)t41);
    t43 = (t42 - 11);
    t44 = (t43 * -1);
    xsi_vhdl_check_range_of_index(11, 0, -1, t42);
    t45 = (40U * t44);
    t46 = (0 + t45);
    t47 = (t46 + t39);
    t48 = (t47 + t35);
    t40 = (t33 + t48);
    t6 = 1;
    if (5U == 5U)
        goto LAB18;

LAB19:    t6 = 0;

LAB20:    t1 = t6;
    goto LAB17;

LAB18:    t49 = 0;

LAB21:    if (t49 < 5U)
        goto LAB22;
    else
        goto LAB20;

LAB22:    t50 = (t27 + t49);
    t51 = (t40 + t49);
    if (*((unsigned char *)t50) != *((unsigned char *)t51))
        goto LAB19;

LAB23:    t49 = (t49 + 1);
    goto LAB21;

LAB24:    goto LAB13;

LAB26:    xsi_set_current_line(114, ng0);
    t2 = (t0 + 4616);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t14 = (t8 + 56U);
    t19 = *((char **)t14);
    *((unsigned char *)t19) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB27;

LAB29:    xsi_set_current_line(119, ng0);
    t7 = (t0 + 2688U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_set_current_line(120, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 2448U);
    t7 = *((char **)t2);
    t2 = (t7 + 0);
    memcpy(t2, t3, 9U);
    xsi_set_current_line(121, ng0);
    t2 = (t0 + 2448U);
    t3 = *((char **)t2);
    t9 = (8 - 3);
    t10 = (t9 * 1U);
    t11 = (0 + t10);
    t2 = (t3 + t11);
    t7 = (t0 + 7892U);
    t12 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t2, t7);
    t13 = xsi_vhdl_mod(t12, 12);
    t8 = (t0 + 2568U);
    t14 = *((char **)t8);
    t8 = (t14 + 0);
    *((int *)t8) = t13;
    xsi_set_current_line(123, ng0);
    t2 = (t0 + 8464);
    *((int *)t2) = 0;
    t3 = (t0 + 8468);
    *((int *)t3) = 3;
    t12 = 0;
    t13 = 3;

LAB35:    if (t12 <= t13)
        goto LAB36;

LAB38:    xsi_set_current_line(131, ng0);
    t2 = (t0 + 2688U);
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

LAB36:    xsi_set_current_line(124, ng0);
    t7 = (t0 + 2152U);
    t8 = *((char **)t7);
    t15 = (9 - 9);
    t9 = (t15 * -1);
    t10 = (1U * t9);
    t7 = (t0 + 8464);
    t16 = *((int *)t7);
    t17 = (t16 - 0);
    t11 = (t17 * 1);
    xsi_vhdl_check_range_of_index(0, 3, 1, *((int *)t7));
    t18 = (10U * t11);
    t14 = (t0 + 2568U);
    t19 = *((char **)t14);
    t20 = *((int *)t19);
    t21 = (t20 - 11);
    t22 = (t21 * -1);
    xsi_vhdl_check_range_of_index(11, 0, -1, t20);
    t23 = (40U * t22);
    t24 = (0 + t23);
    t25 = (t24 + t18);
    t26 = (t25 + t10);
    t14 = (t8 + t26);
    t1 = *((unsigned char *)t14);
    t4 = (t1 == (unsigned char)2);
    if (t4 != 0)
        goto LAB39;

LAB41:
LAB40:
LAB37:    t2 = (t0 + 8464);
    t12 = *((int *)t2);
    t3 = (t0 + 8468);
    t13 = *((int *)t3);
    if (t12 == t13)
        goto LAB38;

LAB45:    t15 = (t12 + 1);
    t12 = t15;
    t7 = (t0 + 8464);
    *((int *)t7) = t12;
    goto LAB35;

LAB39:    xsi_set_current_line(125, ng0);
    t27 = (t0 + 2448U);
    t28 = *((char **)t27);
    t29 = (8 - 8);
    t30 = (t29 * 1U);
    t31 = (0 + t30);
    t27 = (t28 + t31);
    t33 = ((IEEE_P_2592010699) + 4024);
    t40 = (t0 + 7876U);
    t32 = xsi_base_array_concat(t32, t74, t33, (char)99, (unsigned char)3, (char)97, t27, t40, (char)101);
    t41 = (t0 + 1512U);
    t50 = *((char **)t41);
    t51 = ((IEEE_P_2592010699) + 4024);
    t52 = (t0 + 7828U);
    t41 = xsi_base_array_concat(t41, t75, t51, (char)97, t32, t74, (char)97, t50, t52, (char)101);
    t34 = (1U + 5U);
    t35 = (t34 + 4U);
    t5 = (10U != t35);
    if (t5 == 1)
        goto LAB42;

LAB43:    t53 = (t0 + 2568U);
    t60 = *((char **)t53);
    t36 = *((int *)t60);
    t37 = (t36 - 11);
    t38 = (t37 * -1);
    t39 = (40U * t38);
    t44 = (0U + t39);
    t53 = (t0 + 8464);
    t42 = *((int *)t53);
    t43 = (t42 - 0);
    t45 = (t43 * 1);
    t46 = (10U * t45);
    t47 = (t44 + t46);
    t61 = (t0 + 4680);
    t69 = (t61 + 56U);
    t70 = *((char **)t69);
    t71 = (t70 + 56U);
    t72 = *((char **)t71);
    memcpy(t72, t41, 10U);
    xsi_driver_first_trans_delta(t61, t47, 10U, 0LL);
    xsi_set_current_line(126, ng0);
    t2 = (t0 + 2688U);
    t3 = *((char **)t2);
    t2 = (t3 + 0);
    *((unsigned char *)t2) = (unsigned char)3;
    xsi_set_current_line(127, ng0);
    goto LAB38;

LAB42:    xsi_size_not_matching(10U, t35, 0);
    goto LAB43;

LAB44:    goto LAB40;

LAB46:    xsi_set_current_line(133, ng0);
    t2 = (t0 + 2808U);
    t7 = *((char **)t2);
    t2 = (t7 + 0);
    *((int *)t2) = 1;
    xsi_set_current_line(134, ng0);
    t2 = (t0 + 2928U);
    t3 = *((char **)t2);
    t2 = (t3 + 0);
    *((int *)t2) = 1;
    xsi_set_current_line(135, ng0);
    t2 = (t0 + 3960);
    t3 = (t0 + 2808U);
    t7 = *((char **)t3);
    t3 = (t7 + 0);
    t8 = (t0 + 2928U);
    t14 = *((char **)t8);
    t8 = (t14 + 0);
    t19 = (t0 + 3048U);
    t27 = *((char **)t19);
    t19 = (t27 + 0);
    ieee_p_3972351953_sub_3007962107_2984157535(IEEE_P_3972351953, t2, t3, t8, t19);
    xsi_set_current_line(136, ng0);
    t2 = (t0 + 3048U);
    t3 = *((char **)t2);
    t76 = *((double *)t3);
    t77 = (t76 * 12.000000000000000);
    t78 = ieee_p_3972351953_sub_28498392_2984157535(IEEE_P_3972351953, t77);
    t1 = (t78 >= 0);
    if (t1 == 1)
        goto LAB49;

LAB50:    t80 = (t78 - 0.50000000000000000);
    t12 = ((int)(t80));

LAB51:    t2 = (t0 + 3168U);
    t7 = *((char **)t2);
    t2 = (t7 + 0);
    *((int *)t2) = t12;
    xsi_set_current_line(138, ng0);
    t2 = (t0 + 2448U);
    t3 = *((char **)t2);
    t9 = (8 - 8);
    t10 = (t9 * 1U);
    t11 = (0 + t10);
    t2 = (t3 + t11);
    t8 = ((IEEE_P_2592010699) + 4024);
    t14 = (t0 + 7876U);
    t7 = xsi_base_array_concat(t7, t74, t8, (char)99, (unsigned char)3, (char)97, t2, t14, (char)101);
    t19 = (t0 + 1512U);
    t27 = *((char **)t19);
    t28 = ((IEEE_P_2592010699) + 4024);
    t32 = (t0 + 7828U);
    t19 = xsi_base_array_concat(t19, t75, t28, (char)97, t7, t74, (char)97, t27, t32, (char)101);
    t18 = (1U + 5U);
    t22 = (t18 + 4U);
    t1 = (10U != t22);
    if (t1 == 1)
        goto LAB54;

LAB55:    t33 = (t0 + 2568U);
    t40 = *((char **)t33);
    t12 = *((int *)t40);
    t13 = (t12 - 11);
    t23 = (t13 * -1);
    t24 = (40U * t23);
    t25 = (0U + t24);
    t33 = (t0 + 3168U);
    t41 = *((char **)t33);
    t15 = *((int *)t41);
    t16 = (t15 - 0);
    t26 = (t16 * 1);
    t29 = (10U * t26);
    t30 = (t25 + t29);
    t33 = (t0 + 4680);
    t50 = (t33 + 56U);
    t51 = *((char **)t50);
    t52 = (t51 + 56U);
    t53 = *((char **)t52);
    memcpy(t53, t19, 10U);
    xsi_driver_first_trans_delta(t33, t30, 10U, 0LL);
    goto LAB47;

LAB49:    t4 = (t78 >= 2147483647);
    if (t4 == 1)
        goto LAB52;

LAB53:    t79 = (t78 + 0.50000000000000000);
    t12 = ((int)(t79));
    goto LAB51;

LAB52:    t12 = 2147483647;
    goto LAB51;

LAB54:    xsi_size_not_matching(10U, t22, 0);
    goto LAB55;

}


extern void work_a_0648074530_0299855192_init()
{
	static char *pe[] = {(void *)work_a_0648074530_0299855192_p_0};
	xsi_register_didat("work_a_0648074530_0299855192", "isim/Main_TB_isim_beh.exe.sim/work/a_0648074530_0299855192.didat");
	xsi_register_executes(pe);
}
