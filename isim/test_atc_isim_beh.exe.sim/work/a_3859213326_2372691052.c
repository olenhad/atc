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

/* This file is designed for use with ISim build 0x1cce1bb2 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/pc richard/Documents/EE4218/l1/lab1b/test_atc.vhd";



static void work_a_3859213326_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 3744);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 2128U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 2920);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 3744);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 2128U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 2920);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_3859213326_2372691052_p_1(char *t0)
{
    char *t1;
    char *t2;
    int64 t3;
    char *t4;
    int64 t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    unsigned int t13;
    unsigned char t14;
    unsigned char t15;
    unsigned char t16;

LAB0:    t1 = (t0 + 3360U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(93, ng0);
    t3 = (100 * 1000LL);
    t2 = (t0 + 3168);
    xsi_process_wait(t2, t3);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 2128U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t5 = (t3 * 10);
    t2 = (t0 + 3168);
    xsi_process_wait(t2, t5);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 6388);
    t6 = (t0 + 3808);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 3U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(102, ng0);
    t2 = (t0 + 3872);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(103, ng0);
    t2 = (t0 + 2128U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t2 = (t0 + 3168);
    xsi_process_wait(t2, t3);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t11 = *((unsigned char *)t4);
    t12 = (t11 == (unsigned char)3);
    if (t12 == 0)
        goto LAB16;

LAB17:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 3872);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 2128U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t5 = (t3 * 3);
    t2 = (t0 + 3168);
    xsi_process_wait(t2, t5);

LAB20:    *((char **)t1) = &&LAB21;
    goto LAB1;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

LAB16:    t2 = (t0 + 6391);
    xsi_report(t2, 9U, (unsigned char)2);
    goto LAB17;

LAB18:    xsi_set_current_line(108, ng0);
    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t11 = *((unsigned char *)t4);
    t12 = (t11 == (unsigned char)2);
    if (t12 == 0)
        goto LAB22;

LAB23:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 1832U);
    t4 = *((char **)t2);
    t2 = (t0 + 6409);
    t11 = 1;
    if (4U == 4U)
        goto LAB26;

LAB27:    t11 = 0;

LAB28:    if (t11 == 0)
        goto LAB24;

LAB25:    xsi_set_current_line(115, ng0);
    t2 = (t0 + 6427);
    t6 = (t0 + 3808);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 3U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(116, ng0);
    t2 = (t0 + 3872);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(117, ng0);
    t2 = (t0 + 2128U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t2 = (t0 + 3168);
    xsi_process_wait(t2, t3);

LAB34:    *((char **)t1) = &&LAB35;
    goto LAB1;

LAB19:    goto LAB18;

LAB21:    goto LAB19;

LAB22:    t2 = (t0 + 6400);
    xsi_report(t2, 9U, (unsigned char)2);
    goto LAB23;

LAB24:    t9 = (t0 + 6413);
    xsi_report(t9, 14U, (unsigned char)2);
    goto LAB25;

LAB26:    t13 = 0;

LAB29:    if (t13 < 4U)
        goto LAB30;
    else
        goto LAB28;

LAB30:    t7 = (t4 + t13);
    t8 = (t2 + t13);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB27;

LAB31:    t13 = (t13 + 1);
    goto LAB29;

LAB32:    xsi_set_current_line(118, ng0);
    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t11 = *((unsigned char *)t4);
    t12 = (t11 == (unsigned char)3);
    if (t12 == 0)
        goto LAB36;

LAB37:    xsi_set_current_line(119, ng0);
    t2 = (t0 + 1832U);
    t4 = *((char **)t2);
    t2 = (t0 + 6439);
    t11 = 1;
    if (4U == 4U)
        goto LAB40;

LAB41:    t11 = 0;

LAB42:    if (t11 == 0)
        goto LAB38;

LAB39:    xsi_set_current_line(120, ng0);
    t2 = (t0 + 3872);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(122, ng0);
    t2 = (t0 + 2128U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t5 = (t3 * 3);
    t2 = (t0 + 3168);
    xsi_process_wait(t2, t5);

LAB48:    *((char **)t1) = &&LAB49;
    goto LAB1;

LAB33:    goto LAB32;

LAB35:    goto LAB33;

LAB36:    t2 = (t0 + 6430);
    xsi_report(t2, 9U, (unsigned char)2);
    goto LAB37;

LAB38:    t9 = (t0 + 6443);
    xsi_report(t9, 14U, (unsigned char)2);
    goto LAB39;

LAB40:    t13 = 0;

LAB43:    if (t13 < 4U)
        goto LAB44;
    else
        goto LAB42;

LAB44:    t7 = (t4 + t13);
    t8 = (t2 + t13);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB41;

LAB45:    t13 = (t13 + 1);
    goto LAB43;

LAB46:    xsi_set_current_line(123, ng0);
    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t12 = *((unsigned char *)t4);
    t14 = (t12 == (unsigned char)2);
    if (t14 == 1)
        goto LAB52;

LAB53:    t11 = (unsigned char)0;

LAB54:    if (t11 == 0)
        goto LAB50;

LAB51:    xsi_set_current_line(124, ng0);
    t2 = (t0 + 1832U);
    t4 = *((char **)t2);
    t2 = (t0 + 6466);
    t11 = 1;
    if (4U == 4U)
        goto LAB57;

LAB58:    t11 = 0;

LAB59:    if (t11 == 0)
        goto LAB55;

LAB56:    xsi_set_current_line(126, ng0);
    t2 = (t0 + 6484);
    t6 = (t0 + 3808);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 3U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(127, ng0);
    t2 = (t0 + 3872);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(128, ng0);
    t2 = (t0 + 2128U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t2 = (t0 + 3168);
    xsi_process_wait(t2, t3);

LAB65:    *((char **)t1) = &&LAB66;
    goto LAB1;

LAB47:    goto LAB46;

LAB49:    goto LAB47;

LAB50:    t2 = (t0 + 6457);
    xsi_report(t2, 9U, (unsigned char)2);
    goto LAB51;

LAB52:    t2 = (t0 + 1672U);
    t6 = *((char **)t2);
    t15 = *((unsigned char *)t6);
    t16 = (t15 == (unsigned char)2);
    t11 = t16;
    goto LAB54;

LAB55:    t9 = (t0 + 6470);
    xsi_report(t9, 14U, (unsigned char)2);
    goto LAB56;

LAB57:    t13 = 0;

LAB60:    if (t13 < 4U)
        goto LAB61;
    else
        goto LAB59;

LAB61:    t7 = (t4 + t13);
    t8 = (t2 + t13);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB58;

LAB62:    t13 = (t13 + 1);
    goto LAB60;

LAB63:    xsi_set_current_line(129, ng0);
    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t11 = *((unsigned char *)t4);
    t12 = (t11 == (unsigned char)3);
    if (t12 == 0)
        goto LAB67;

LAB68:    xsi_set_current_line(130, ng0);
    t2 = (t0 + 1832U);
    t4 = *((char **)t2);
    t2 = (t0 + 6496);
    t11 = 1;
    if (4U == 4U)
        goto LAB71;

LAB72:    t11 = 0;

LAB73:    if (t11 == 0)
        goto LAB69;

LAB70:    xsi_set_current_line(131, ng0);
    t2 = (t0 + 3872);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(132, ng0);
    t2 = (t0 + 2128U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t5 = (t3 * 3);
    t2 = (t0 + 3168);
    xsi_process_wait(t2, t5);

LAB79:    *((char **)t1) = &&LAB80;
    goto LAB1;

LAB64:    goto LAB63;

LAB66:    goto LAB64;

LAB67:    t2 = (t0 + 6487);
    xsi_report(t2, 9U, (unsigned char)2);
    goto LAB68;

LAB69:    t9 = (t0 + 6500);
    xsi_report(t9, 14U, (unsigned char)2);
    goto LAB70;

LAB71:    t13 = 0;

LAB74:    if (t13 < 4U)
        goto LAB75;
    else
        goto LAB73;

LAB75:    t7 = (t4 + t13);
    t8 = (t2 + t13);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB72;

LAB76:    t13 = (t13 + 1);
    goto LAB74;

LAB77:    xsi_set_current_line(133, ng0);
    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t12 = *((unsigned char *)t4);
    t14 = (t12 == (unsigned char)2);
    if (t14 == 1)
        goto LAB83;

LAB84:    t11 = (unsigned char)0;

LAB85:    if (t11 == 0)
        goto LAB81;

LAB82:    xsi_set_current_line(136, ng0);
    t2 = (t0 + 6523);
    t6 = (t0 + 3808);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 3U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(137, ng0);
    t2 = (t0 + 3872);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(138, ng0);
    t2 = (t0 + 2128U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t2 = (t0 + 3168);
    xsi_process_wait(t2, t3);

LAB88:    *((char **)t1) = &&LAB89;
    goto LAB1;

LAB78:    goto LAB77;

LAB80:    goto LAB78;

LAB81:    t2 = (t0 + 6514);
    xsi_report(t2, 9U, (unsigned char)2);
    goto LAB82;

LAB83:    t2 = (t0 + 1672U);
    t6 = *((char **)t2);
    t15 = *((unsigned char *)t6);
    t16 = (t15 == (unsigned char)2);
    t11 = t16;
    goto LAB85;

LAB86:    xsi_set_current_line(139, ng0);
    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t12 = *((unsigned char *)t4);
    t14 = (t12 == (unsigned char)2);
    if (t14 == 1)
        goto LAB92;

LAB93:    t11 = (unsigned char)0;

LAB94:    if (t11 == 0)
        goto LAB90;

LAB91:    xsi_set_current_line(140, ng0);
    t2 = (t0 + 3872);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(141, ng0);
    t2 = (t0 + 2128U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t5 = (t3 * 3);
    t2 = (t0 + 3168);
    xsi_process_wait(t2, t5);

LAB97:    *((char **)t1) = &&LAB98;
    goto LAB1;

LAB87:    goto LAB86;

LAB89:    goto LAB87;

LAB90:    t2 = (t0 + 6526);
    xsi_report(t2, 9U, (unsigned char)2);
    goto LAB91;

LAB92:    t2 = (t0 + 1512U);
    t6 = *((char **)t2);
    t15 = *((unsigned char *)t6);
    t16 = (t15 == (unsigned char)3);
    t11 = t16;
    goto LAB94;

LAB95:    xsi_set_current_line(142, ng0);
    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t12 = *((unsigned char *)t4);
    t14 = (t12 == (unsigned char)2);
    if (t14 == 1)
        goto LAB101;

LAB102:    t11 = (unsigned char)0;

LAB103:    if (t11 == 0)
        goto LAB99;

LAB100:    xsi_set_current_line(144, ng0);
    t2 = (t0 + 6544);
    t6 = (t0 + 3808);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 3U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(145, ng0);
    t2 = (t0 + 3872);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(146, ng0);
    t2 = (t0 + 2128U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t2 = (t0 + 3168);
    xsi_process_wait(t2, t3);

LAB106:    *((char **)t1) = &&LAB107;
    goto LAB1;

LAB96:    goto LAB95;

LAB98:    goto LAB96;

LAB99:    t2 = (t0 + 6535);
    xsi_report(t2, 9U, (unsigned char)2);
    goto LAB100;

LAB101:    t2 = (t0 + 1672U);
    t6 = *((char **)t2);
    t15 = *((unsigned char *)t6);
    t16 = (t15 == (unsigned char)2);
    t11 = t16;
    goto LAB103;

LAB104:    xsi_set_current_line(147, ng0);
    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t12 = *((unsigned char *)t4);
    t14 = (t12 == (unsigned char)2);
    if (t14 == 1)
        goto LAB110;

LAB111:    t11 = (unsigned char)0;

LAB112:    if (t11 == 0)
        goto LAB108;

LAB109:    xsi_set_current_line(148, ng0);
    t2 = (t0 + 3872);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(149, ng0);
    t2 = (t0 + 2128U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t5 = (t3 * 3);
    t2 = (t0 + 3168);
    xsi_process_wait(t2, t5);

LAB115:    *((char **)t1) = &&LAB116;
    goto LAB1;

LAB105:    goto LAB104;

LAB107:    goto LAB105;

LAB108:    t2 = (t0 + 6547);
    xsi_report(t2, 9U, (unsigned char)2);
    goto LAB109;

LAB110:    t2 = (t0 + 1512U);
    t6 = *((char **)t2);
    t15 = *((unsigned char *)t6);
    t16 = (t15 == (unsigned char)3);
    t11 = t16;
    goto LAB112;

LAB113:    xsi_set_current_line(151, ng0);
    t2 = (t0 + 6556);
    t6 = (t0 + 3808);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 3U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(152, ng0);
    t2 = (t0 + 3872);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(153, ng0);
    t2 = (t0 + 2128U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t2 = (t0 + 3168);
    xsi_process_wait(t2, t3);

LAB119:    *((char **)t1) = &&LAB120;
    goto LAB1;

LAB114:    goto LAB113;

LAB116:    goto LAB114;

LAB117:    xsi_set_current_line(154, ng0);
    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t12 = *((unsigned char *)t4);
    t14 = (t12 == (unsigned char)2);
    if (t14 == 1)
        goto LAB123;

LAB124:    t11 = (unsigned char)0;

LAB125:    if (t11 == 0)
        goto LAB121;

LAB122:    xsi_set_current_line(155, ng0);
    t2 = (t0 + 3872);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(156, ng0);
    t2 = (t0 + 2128U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t5 = (t3 * 3);
    t2 = (t0 + 3168);
    xsi_process_wait(t2, t5);

LAB128:    *((char **)t1) = &&LAB129;
    goto LAB1;

LAB118:    goto LAB117;

LAB120:    goto LAB118;

LAB121:    t2 = (t0 + 6559);
    xsi_report(t2, 9U, (unsigned char)2);
    goto LAB122;

LAB123:    t2 = (t0 + 1512U);
    t6 = *((char **)t2);
    t15 = *((unsigned char *)t6);
    t16 = (t15 == (unsigned char)3);
    t11 = t16;
    goto LAB125;

LAB126:    xsi_set_current_line(158, ng0);
    t2 = (t0 + 6568);
    t6 = (t0 + 3808);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 3U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(159, ng0);
    t2 = (t0 + 3872);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(160, ng0);
    t2 = (t0 + 2128U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t2 = (t0 + 3168);
    xsi_process_wait(t2, t3);

LAB132:    *((char **)t1) = &&LAB133;
    goto LAB1;

LAB127:    goto LAB126;

LAB129:    goto LAB127;

LAB130:    xsi_set_current_line(161, ng0);
    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t12 = *((unsigned char *)t4);
    t14 = (t12 == (unsigned char)3);
    if (t14 == 1)
        goto LAB136;

LAB137:    t11 = (unsigned char)0;

LAB138:    if (t11 == 0)
        goto LAB134;

LAB135:    xsi_set_current_line(162, ng0);
    t2 = (t0 + 3872);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(163, ng0);
    t2 = (t0 + 2128U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t5 = (t3 * 3);
    t2 = (t0 + 3168);
    xsi_process_wait(t2, t5);

LAB141:    *((char **)t1) = &&LAB142;
    goto LAB1;

LAB131:    goto LAB130;

LAB133:    goto LAB131;

LAB134:    t2 = (t0 + 6571);
    xsi_report(t2, 9U, (unsigned char)2);
    goto LAB135;

LAB136:    t2 = (t0 + 1512U);
    t6 = *((char **)t2);
    t15 = *((unsigned char *)t6);
    t16 = (t15 == (unsigned char)2);
    t11 = t16;
    goto LAB138;

LAB139:    xsi_set_current_line(164, ng0);
    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t12 = *((unsigned char *)t4);
    t14 = (t12 == (unsigned char)2);
    if (t14 == 1)
        goto LAB145;

LAB146:    t11 = (unsigned char)0;

LAB147:    if (t11 == 0)
        goto LAB143;

LAB144:    xsi_set_current_line(166, ng0);
    t2 = (t0 + 6589);
    t6 = (t0 + 3808);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 3U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(167, ng0);
    t2 = (t0 + 3872);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(168, ng0);
    t2 = (t0 + 2128U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t2 = (t0 + 3168);
    xsi_process_wait(t2, t3);

LAB150:    *((char **)t1) = &&LAB151;
    goto LAB1;

LAB140:    goto LAB139;

LAB142:    goto LAB140;

LAB143:    t2 = (t0 + 6580);
    xsi_report(t2, 9U, (unsigned char)2);
    goto LAB144;

LAB145:    t2 = (t0 + 1672U);
    t6 = *((char **)t2);
    t15 = *((unsigned char *)t6);
    t16 = (t15 == (unsigned char)2);
    t11 = t16;
    goto LAB147;

LAB148:    xsi_set_current_line(169, ng0);
    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t12 = *((unsigned char *)t4);
    t14 = (t12 == (unsigned char)3);
    if (t14 == 1)
        goto LAB154;

LAB155:    t11 = (unsigned char)0;

LAB156:    if (t11 == 0)
        goto LAB152;

LAB153:    xsi_set_current_line(170, ng0);
    t2 = (t0 + 3872);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(171, ng0);
    t2 = (t0 + 2128U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t5 = (t3 * 3);
    t2 = (t0 + 3168);
    xsi_process_wait(t2, t5);

LAB159:    *((char **)t1) = &&LAB160;
    goto LAB1;

LAB149:    goto LAB148;

LAB151:    goto LAB149;

LAB152:    t2 = (t0 + 6592);
    xsi_report(t2, 9U, (unsigned char)2);
    goto LAB153;

LAB154:    t2 = (t0 + 1512U);
    t6 = *((char **)t2);
    t15 = *((unsigned char *)t6);
    t16 = (t15 == (unsigned char)2);
    t11 = t16;
    goto LAB156;

LAB157:    xsi_set_current_line(172, ng0);
    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t12 = *((unsigned char *)t4);
    t14 = (t12 == (unsigned char)2);
    if (t14 == 1)
        goto LAB163;

LAB164:    t11 = (unsigned char)0;

LAB165:    if (t11 == 0)
        goto LAB161;

LAB162:    xsi_set_current_line(175, ng0);
    t2 = (t0 + 6610);
    t6 = (t0 + 3808);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 3U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(176, ng0);
    t2 = (t0 + 3872);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(178, ng0);
    t2 = (t0 + 2128U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t2 = (t0 + 3168);
    xsi_process_wait(t2, t3);

LAB168:    *((char **)t1) = &&LAB169;
    goto LAB1;

LAB158:    goto LAB157;

LAB160:    goto LAB158;

LAB161:    t2 = (t0 + 6601);
    xsi_report(t2, 9U, (unsigned char)2);
    goto LAB162;

LAB163:    t2 = (t0 + 1672U);
    t6 = *((char **)t2);
    t15 = *((unsigned char *)t6);
    t16 = (t15 == (unsigned char)2);
    t11 = t16;
    goto LAB165;

LAB166:    xsi_set_current_line(179, ng0);
    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t12 = *((unsigned char *)t4);
    t14 = (t12 == (unsigned char)2);
    if (t14 == 1)
        goto LAB172;

LAB173:    t11 = (unsigned char)0;

LAB174:    if (t11 == 0)
        goto LAB170;

LAB171:    xsi_set_current_line(180, ng0);
    t2 = (t0 + 6622);
    t6 = (t0 + 3808);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 3U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(181, ng0);
    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t12 = *((unsigned char *)t4);
    t14 = (t12 == (unsigned char)2);
    if (t14 == 1)
        goto LAB177;

LAB178:    t11 = (unsigned char)0;

LAB179:    if (t11 == 0)
        goto LAB175;

LAB176:    xsi_set_current_line(182, ng0);
    t2 = (t0 + 2128U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t5 = (t3 * 3);
    t2 = (t0 + 3168);
    xsi_process_wait(t2, t5);

LAB182:    *((char **)t1) = &&LAB183;
    goto LAB1;

LAB167:    goto LAB166;

LAB169:    goto LAB167;

LAB170:    t2 = (t0 + 6613);
    xsi_report(t2, 9U, (unsigned char)2);
    goto LAB171;

LAB172:    t2 = (t0 + 1512U);
    t6 = *((char **)t2);
    t15 = *((unsigned char *)t6);
    t16 = (t15 == (unsigned char)3);
    t11 = t16;
    goto LAB174;

LAB175:    t2 = (t0 + 6625);
    xsi_report(t2, 9U, (unsigned char)2);
    goto LAB176;

LAB177:    t2 = (t0 + 1512U);
    t6 = *((char **)t2);
    t15 = *((unsigned char *)t6);
    t16 = (t15 == (unsigned char)3);
    t11 = t16;
    goto LAB179;

LAB180:    xsi_set_current_line(184, ng0);
    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t12 = *((unsigned char *)t4);
    t14 = (t12 == (unsigned char)2);
    if (t14 == 1)
        goto LAB186;

LAB187:    t11 = (unsigned char)0;

LAB188:    if (t11 == 0)
        goto LAB184;

LAB185:    xsi_set_current_line(186, ng0);
    t2 = (t0 + 2128U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t5 = (t3 * 10);
    t2 = (t0 + 3168);
    xsi_process_wait(t2, t5);

LAB191:    *((char **)t1) = &&LAB192;
    goto LAB1;

LAB181:    goto LAB180;

LAB183:    goto LAB181;

LAB184:    t2 = (t0 + 6634);
    xsi_report(t2, 9U, (unsigned char)2);
    goto LAB185;

LAB186:    t2 = (t0 + 1672U);
    t6 = *((char **)t2);
    t15 = *((unsigned char *)t6);
    t16 = (t15 == (unsigned char)3);
    t11 = t16;
    goto LAB188;

LAB189:    xsi_set_current_line(188, ng0);

LAB195:    *((char **)t1) = &&LAB196;
    goto LAB1;

LAB190:    goto LAB189;

LAB192:    goto LAB190;

LAB193:    goto LAB2;

LAB194:    goto LAB193;

LAB196:    goto LAB194;

}


extern void work_a_3859213326_2372691052_init()
{
	static char *pe[] = {(void *)work_a_3859213326_2372691052_p_0,(void *)work_a_3859213326_2372691052_p_1};
	xsi_register_didat("work_a_3859213326_2372691052", "isim/test_atc_isim_beh.exe.sim/work/a_3859213326_2372691052.didat");
	xsi_register_executes(pe);
}
