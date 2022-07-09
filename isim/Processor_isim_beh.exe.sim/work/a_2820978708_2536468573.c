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


static void work_a_2820978708_2536468573_p_0(char *t0)
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
    char *t34;
    char *t35;
    char *t36;
    unsigned char t37;
    unsigned char t38;
    unsigned char t39;
    unsigned char t40;
    int t41;
    int t42;
    int t43;
    unsigned int t44;
    unsigned int t45;

LAB0:    xsi_set_current_line(117, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 3248U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    memcpy(t1, t2, 11U);
    xsi_set_current_line(119, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t5 = (t4 == (unsigned char)3);
    if (t5 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(140, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t5 = *((unsigned char *)t2);
    t6 = (t5 == (unsigned char)3);
    if (t6 == 1)
        goto LAB34;

LAB35:    t4 = (unsigned char)0;

LAB36:    if (t4 != 0)
        goto LAB31;

LAB33:
LAB32:    t1 = (t0 + 4912);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(120, ng0);
    t1 = (t0 + 1632U);
    t6 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t6 != 0)
        goto LAB5;

LAB7:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(121, ng0);
    t3 = (t0 + 3248U);
    t7 = *((char **)t3);
    t8 = (10 - 5);
    t9 = (t8 * 1U);
    t10 = (0 + t9);
    t3 = (t7 + t10);
    t11 = (t0 + 8880U);
    t12 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t3, t11);
    t13 = (t0 + 3368U);
    t14 = *((char **)t13);
    t13 = (t14 + 0);
    *((int *)t13) = t12;
    xsi_set_current_line(122, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 3368U);
    t3 = *((char **)t1);
    t12 = *((int *)t3);
    t15 = (t12 - 0);
    t8 = (t15 * 1);
    xsi_vhdl_check_range_of_index(0, 31, 1, t12);
    t9 = (6U * t8);
    t10 = (0 + t9);
    t1 = (t2 + t10);
    t7 = (t0 + 3488U);
    t11 = *((char **)t7);
    t7 = (t11 + 0);
    memcpy(t7, t1, 6U);
    xsi_set_current_line(123, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 3368U);
    t3 = *((char **)t1);
    t12 = *((int *)t3);
    t15 = (t12 - 0);
    t8 = (t15 * 1);
    xsi_vhdl_check_range_of_index(0, 31, 1, t12);
    t9 = (6U * t8);
    t10 = (0 + t9);
    t1 = (t2 + t10);
    t7 = (t0 + 3608U);
    t11 = *((char **)t7);
    t7 = (t11 + 0);
    memcpy(t7, t1, 6U);
    xsi_set_current_line(126, ng0);
    t1 = (t0 + 3488U);
    t2 = *((char **)t1);
    t12 = (5 - 5);
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

LAB10:    t1 = (t0 + 3608U);
    t2 = *((char **)t1);
    t12 = (5 - 5);
    t8 = (t12 * -1);
    t9 = (1U * t8);
    t10 = (0 + t9);
    t1 = (t2 + t10);
    t5 = *((unsigned char *)t1);
    t6 = (t5 == (unsigned char)3);
    if (t6 == 1)
        goto LAB22;

LAB23:    t4 = (unsigned char)0;

LAB24:    if (t4 != 0)
        goto LAB20;

LAB21:    xsi_set_current_line(133, ng0);
    t1 = (t0 + 5056);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t7 = (t3 + 56U);
    t11 = *((char **)t7);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB9:    xsi_set_current_line(136, ng0);
    t1 = (t0 + 5120);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t7 = (t3 + 56U);
    t11 = *((char **)t7);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB6;

LAB8:    xsi_set_current_line(127, ng0);
    t25 = (t0 + 2792U);
    t26 = *((char **)t25);
    t25 = (t0 + 3368U);
    t27 = *((char **)t25);
    t15 = *((int *)t27);
    t28 = (t15 - 0);
    t29 = (t28 * 1);
    xsi_vhdl_check_range_of_index(0, 31, 1, t15);
    t30 = (32U * t29);
    t31 = (0 + t30);
    t25 = (t26 + t31);
    t32 = (t0 + 4992);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    memcpy(t36, t25, 32U);
    xsi_driver_first_trans_fast_port(t32);
    xsi_set_current_line(128, ng0);
    t1 = (t0 + 5056);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t7 = (t3 + 56U);
    t11 = *((char **)t7);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB9;

LAB11:    t3 = (t0 + 3488U);
    t7 = *((char **)t3);
    t16 = (5 - 4);
    t17 = (t16 * 1U);
    t18 = (0 + t17);
    t3 = (t7 + t18);
    t11 = (t0 + 3248U);
    t13 = *((char **)t11);
    t19 = (10 - 10);
    t20 = (t19 * 1U);
    t21 = (0 + t20);
    t11 = (t13 + t21);
    t22 = 1;
    if (5U == 5U)
        goto LAB14;

LAB15:    t22 = 0;

LAB16:    t4 = t22;
    goto LAB13;

LAB14:    t23 = 0;

LAB17:    if (t23 < 5U)
        goto LAB18;
    else
        goto LAB16;

LAB18:    t14 = (t3 + t23);
    t24 = (t11 + t23);
    if (*((unsigned char *)t14) != *((unsigned char *)t24))
        goto LAB15;

LAB19:    t23 = (t23 + 1);
    goto LAB17;

LAB20:    xsi_set_current_line(130, ng0);
    t25 = (t0 + 2952U);
    t26 = *((char **)t25);
    t25 = (t0 + 3368U);
    t27 = *((char **)t25);
    t15 = *((int *)t27);
    t28 = (t15 - 0);
    t29 = (t28 * 1);
    xsi_vhdl_check_range_of_index(0, 31, 1, t15);
    t30 = (32U * t29);
    t31 = (0 + t30);
    t25 = (t26 + t31);
    t32 = (t0 + 4992);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    memcpy(t36, t25, 32U);
    xsi_driver_first_trans_fast_port(t32);
    xsi_set_current_line(131, ng0);
    t1 = (t0 + 5056);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t7 = (t3 + 56U);
    t11 = *((char **)t7);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB9;

LAB22:    t3 = (t0 + 3608U);
    t7 = *((char **)t3);
    t16 = (5 - 4);
    t17 = (t16 * 1U);
    t18 = (0 + t17);
    t3 = (t7 + t18);
    t11 = (t0 + 3248U);
    t13 = *((char **)t11);
    t19 = (10 - 10);
    t20 = (t19 * 1U);
    t21 = (0 + t20);
    t11 = (t13 + t21);
    t22 = 1;
    if (5U == 5U)
        goto LAB25;

LAB26:    t22 = 0;

LAB27:    t4 = t22;
    goto LAB24;

LAB25:    t23 = 0;

LAB28:    if (t23 < 5U)
        goto LAB29;
    else
        goto LAB27;

LAB29:    t14 = (t3 + t23);
    t24 = (t11 + t23);
    if (*((unsigned char *)t14) != *((unsigned char *)t24))
        goto LAB26;

LAB30:    t23 = (t23 + 1);
    goto LAB28;

LAB31:    xsi_set_current_line(142, ng0);
    t3 = (t0 + 3248U);
    t7 = *((char **)t3);
    t8 = (10 - 5);
    t9 = (t8 * 1U);
    t10 = (0 + t9);
    t3 = (t7 + t10);
    t11 = (t0 + 8880U);
    t12 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t3, t11);
    t13 = (t0 + 3368U);
    t14 = *((char **)t13);
    t13 = (t14 + 0);
    *((int *)t13) = t12;
    xsi_set_current_line(143, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 3368U);
    t3 = *((char **)t1);
    t12 = *((int *)t3);
    t15 = (t12 - 0);
    t8 = (t15 * 1);
    xsi_vhdl_check_range_of_index(0, 31, 1, t12);
    t9 = (6U * t8);
    t10 = (0 + t9);
    t1 = (t2 + t10);
    t7 = (t0 + 3488U);
    t11 = *((char **)t7);
    t7 = (t11 + 0);
    memcpy(t7, t1, 6U);
    xsi_set_current_line(144, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 3368U);
    t3 = *((char **)t1);
    t12 = *((int *)t3);
    t15 = (t12 - 0);
    t8 = (t15 * 1);
    xsi_vhdl_check_range_of_index(0, 31, 1, t12);
    t9 = (6U * t8);
    t10 = (0 + t9);
    t1 = (t2 + t10);
    t7 = (t0 + 3608U);
    t11 = *((char **)t7);
    t7 = (t11 + 0);
    memcpy(t7, t1, 6U);
    xsi_set_current_line(146, ng0);
    t1 = (t0 + 3488U);
    t2 = *((char **)t1);
    t12 = (5 - 5);
    t8 = (t12 * -1);
    t9 = (1U * t8);
    t10 = (0 + t9);
    t1 = (t2 + t10);
    t5 = *((unsigned char *)t1);
    t6 = (t5 == (unsigned char)2);
    if (t6 == 1)
        goto LAB40;

LAB41:    t3 = (t0 + 3488U);
    t7 = *((char **)t3);
    t15 = (5 - 5);
    t16 = (t15 * -1);
    t17 = (1U * t16);
    t18 = (0 + t17);
    t3 = (t7 + t18);
    t37 = *((unsigned char *)t3);
    t38 = (t37 == (unsigned char)3);
    if (t38 == 1)
        goto LAB43;

LAB44:    t22 = (unsigned char)0;

LAB45:    t4 = t22;

LAB42:    if (t4 != 0)
        goto LAB37;

LAB39:    xsi_set_current_line(151, ng0);
    t1 = (t0 + 3368U);
    t2 = *((char **)t1);
    t12 = *((int *)t2);
    t15 = (t12 - 0);
    t8 = (t15 * 1);
    t9 = (6U * t8);
    t10 = (0U + t9);
    t28 = (5 - 5);
    t16 = (t28 * -1);
    t17 = (1 * t16);
    t18 = (t10 + t17);
    t1 = (t0 + 5312);
    t3 = (t1 + 56U);
    t7 = *((char **)t3);
    t11 = (t7 + 56U);
    t13 = *((char **)t11);
    *((unsigned char *)t13) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, t18, 1, 0LL);
    xsi_set_current_line(152, ng0);
    t1 = (t0 + 3248U);
    t2 = *((char **)t1);
    t8 = (10 - 10);
    t9 = (t8 * 1U);
    t10 = (0 + t9);
    t1 = (t2 + t10);
    t3 = (t0 + 3368U);
    t7 = *((char **)t3);
    t12 = *((int *)t7);
    t15 = (t12 - 0);
    t16 = (t15 * 1);
    t17 = (6U * t16);
    t18 = (0U + t17);
    t19 = (5 - 4);
    t20 = (1U * t19);
    t21 = (t18 + t20);
    t3 = (t0 + 5312);
    t11 = (t3 + 56U);
    t13 = *((char **)t11);
    t14 = (t13 + 56U);
    t24 = *((char **)t14);
    memcpy(t24, t1, 5U);
    xsi_driver_first_trans_delta(t3, t21, 5U, 0LL);
    xsi_set_current_line(153, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 3368U);
    t3 = *((char **)t1);
    t12 = *((int *)t3);
    t15 = (t12 - 0);
    t8 = (t15 * 1);
    t9 = (32U * t8);
    t10 = (0U + t9);
    t1 = (t0 + 5376);
    t7 = (t1 + 56U);
    t11 = *((char **)t7);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 32U);
    xsi_driver_first_trans_delta(t1, t10, 32U, 0LL);

LAB38:    xsi_set_current_line(156, ng0);
    t1 = (t0 + 5440);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t7 = (t3 + 56U);
    t11 = *((char **)t7);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB32;

LAB34:    t1 = (t0 + 1632U);
    t22 = ieee_p_2592010699_sub_1258338084_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    t4 = t22;
    goto LAB36;

LAB37:    xsi_set_current_line(147, ng0);
    t14 = (t0 + 3368U);
    t24 = *((char **)t14);
    t41 = *((int *)t24);
    t42 = (t41 - 0);
    t23 = (t42 * 1);
    t29 = (6U * t23);
    t30 = (0U + t29);
    t43 = (5 - 5);
    t31 = (t43 * -1);
    t44 = (1 * t31);
    t45 = (t30 + t44);
    t14 = (t0 + 5184);
    t25 = (t14 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t32 = *((char **)t27);
    *((unsigned char *)t32) = (unsigned char)3;
    xsi_driver_first_trans_delta(t14, t45, 1, 0LL);
    xsi_set_current_line(148, ng0);
    t1 = (t0 + 3248U);
    t2 = *((char **)t1);
    t8 = (10 - 10);
    t9 = (t8 * 1U);
    t10 = (0 + t9);
    t1 = (t2 + t10);
    t3 = (t0 + 3368U);
    t7 = *((char **)t3);
    t12 = *((int *)t7);
    t15 = (t12 - 0);
    t16 = (t15 * 1);
    t17 = (6U * t16);
    t18 = (0U + t17);
    t19 = (5 - 4);
    t20 = (1U * t19);
    t21 = (t18 + t20);
    t3 = (t0 + 5184);
    t11 = (t3 + 56U);
    t13 = *((char **)t11);
    t14 = (t13 + 56U);
    t24 = *((char **)t14);
    memcpy(t24, t1, 5U);
    xsi_driver_first_trans_delta(t3, t21, 5U, 0LL);
    xsi_set_current_line(149, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 3368U);
    t3 = *((char **)t1);
    t12 = *((int *)t3);
    t15 = (t12 - 0);
    t8 = (t15 * 1);
    t9 = (32U * t8);
    t10 = (0U + t9);
    t1 = (t0 + 5248);
    t7 = (t1 + 56U);
    t11 = *((char **)t7);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 32U);
    xsi_driver_first_trans_delta(t1, t10, 32U, 0LL);
    goto LAB38;

LAB40:    t4 = (unsigned char)1;
    goto LAB42;

LAB43:    t11 = (t0 + 3608U);
    t13 = *((char **)t11);
    t28 = (5 - 5);
    t19 = (t28 * -1);
    t20 = (1U * t19);
    t21 = (0 + t20);
    t11 = (t13 + t21);
    t39 = *((unsigned char *)t11);
    t40 = (t39 == (unsigned char)3);
    t22 = t40;
    goto LAB45;

}


extern void work_a_2820978708_2536468573_init()
{
	static char *pe[] = {(void *)work_a_2820978708_2536468573_p_0};
	xsi_register_didat("work_a_2820978708_2536468573", "isim/Processor_isim_beh.exe.sim/work/a_2820978708_2536468573.didat");
	xsi_register_executes(pe);
}
