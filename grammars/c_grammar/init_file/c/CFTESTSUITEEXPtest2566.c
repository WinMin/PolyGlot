
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x2 = UINT8_MAX;
int8_t x6 = INT8_MAX;
volatile int8_t x9 = INT8_MIN;
int16_t x15 = INT16_MAX;
int32_t t3 = 258342096;
uint8_t x18 = UINT8_MAX;
static volatile int8_t x33 = INT8_MIN;
uint64_t x35 = 438803481588529796LLU;
volatile int64_t x36 = -1LL;
int64_t x39 = INT64_MIN;
static uint64_t t10 = 34347423982684631LLU;
int16_t x51 = -1;
int8_t x54 = -4;
volatile int16_t x56 = -1;
static int64_t x72 = -1LL;
int32_t x75 = INT32_MIN;
volatile int32_t t17 = 968184;
volatile int64_t x78 = 1854050212LL;
uint64_t t20 = 6921736869372771LLU;
int32_t x90 = INT32_MIN;
int16_t x98 = INT16_MIN;
int32_t x101 = 20764375;
volatile uint32_t t24 = 16148U;
volatile uint64_t t25 = 0LLU;
static uint64_t x112 = UINT64_MAX;
uint32_t x113 = 5614022U;
static uint8_t x114 = UINT8_MAX;
int64_t x120 = INT64_MIN;
uint8_t x123 = 0U;
int64_t x125 = INT64_MAX;
uint32_t x127 = 10030801U;
uint16_t x128 = 1433U;
int64_t t30 = 11LL;
static uint8_t x140 = UINT8_MAX;
int64_t x145 = -33082838743077LL;
static volatile int64_t t33 = -1811034LL;
int64_t x157 = INT64_MAX;
static int16_t x158 = -4;
volatile uint32_t x167 = UINT32_MAX;
uint32_t t38 = 1548307U;
volatile uint64_t x169 = 106085522LLU;
int16_t x170 = INT16_MIN;
int64_t x172 = -1LL;
uint64_t t39 = 506145LLU;
volatile int32_t x173 = 7377036;
int64_t x181 = INT64_MIN;
static uint32_t x182 = UINT32_MAX;
int16_t x184 = -7;
uint16_t x192 = 3U;
uint64_t t44 = 259536578858636LLU;
int16_t x213 = INT16_MIN;
uint8_t x225 = 1U;
static int64_t x233 = INT64_MAX;
int64_t t55 = -3174510632638657806LL;
static int32_t x260 = INT32_MIN;
volatile uint64_t x262 = UINT64_MAX;
int32_t x263 = -1;
int32_t x265 = INT32_MAX;
int64_t x269 = INT64_MAX;
int8_t x272 = -1;
int64_t x274 = INT64_MAX;
int64_t x278 = -1LL;
uint32_t t66 = 4U;
volatile uint64_t t68 = 76132875LLU;
static uint8_t x299 = 127U;
uint16_t x312 = UINT16_MAX;
uint32_t t74 = 3947362U;
int64_t x321 = -2788115LL;
uint64_t x332 = 4824888188691218160LLU;
int8_t x335 = -1;
volatile int8_t x338 = -1;
int64_t x356 = INT64_MIN;
volatile int64_t x358 = -1LL;
volatile int64_t x371 = -630176199087843439LL;
int16_t x372 = INT16_MIN;
volatile int16_t x374 = -1;
volatile uint8_t x377 = 1U;
int32_t x379 = INT32_MAX;
int8_t x380 = 0;
int8_t x384 = 1;
int32_t x388 = INT32_MAX;
static int64_t t90 = 7227311LL;
int64_t x395 = -2261206268006LL;
static uint64_t x396 = 23358868074LLU;
uint16_t x399 = UINT16_MAX;
volatile int16_t x402 = INT16_MIN;
volatile int32_t t93 = 0;
uint64_t t94 = 56367516185570LLU;
static volatile int32_t x419 = 5877;
int32_t t97 = 9572;
int64_t x421 = 4239582556393758543LL;
uint32_t x426 = 10966000U;
int8_t x430 = INT8_MIN;
int64_t x438 = INT64_MIN;
int32_t x439 = INT32_MAX;
volatile int64_t t103 = -364507054LL;
volatile int64_t x447 = -1LL;
uint64_t t105 = 239198LLU;
volatile uint64_t x453 = 3436717878875LLU;
uint32_t x458 = 13207928U;
volatile uint16_t x461 = 30622U;
int32_t x470 = INT32_MIN;
volatile int32_t x471 = INT32_MIN;
uint16_t x479 = 5209U;
volatile uint64_t t111 = 0LLU;
uint64_t x493 = 5785396176950455LLU;
int16_t x498 = INT16_MIN;
int32_t x499 = -1;
volatile int16_t x511 = 1303;
volatile uint32_t x514 = 1U;
uint16_t x516 = UINT16_MAX;
int64_t t121 = -69271LL;
static int32_t x521 = INT32_MIN;
volatile uint32_t x522 = UINT32_MAX;
static int8_t x526 = -1;
volatile uint64_t t123 = 1828LLU;
int8_t x530 = INT8_MIN;
uint32_t x536 = UINT32_MAX;
volatile uint32_t x537 = 8865995U;
static volatile int64_t t128 = -475380LL;
static uint16_t x570 = UINT16_MAX;
int32_t x583 = INT32_MIN;
int64_t x591 = -1LL;
volatile int64_t t135 = 57580LL;
static int32_t x600 = INT32_MAX;
volatile int8_t x602 = INT8_MAX;
volatile int64_t x604 = 4104988192LL;
volatile int64_t t138 = 2917825101452LL;
int8_t x618 = 2;
int16_t x622 = INT16_MIN;
static uint32_t x627 = 330610777U;
static volatile int16_t x633 = 232;
int32_t t143 = 240;
static int16_t x644 = INT16_MIN;
volatile int64_t t147 = -5257LL;
int64_t x659 = -1LL;
static uint32_t x663 = 538U;
int8_t x671 = INT8_MIN;
volatile int8_t x677 = 13;
volatile int16_t x680 = INT16_MIN;
int16_t x691 = -1;
volatile int64_t t155 = -16821466LL;
static uint8_t x701 = 0U;
volatile int8_t x703 = 0;
static volatile int32_t t159 = -31831;
int8_t x721 = 1;
uint8_t x722 = UINT8_MAX;
int8_t x723 = INT8_MAX;
int64_t x733 = -1LL;
volatile int32_t x737 = INT32_MAX;
static int8_t x743 = INT8_MIN;
static int64_t x744 = INT64_MAX;
static volatile uint32_t t166 = 1639U;
uint64_t x749 = UINT64_MAX;
int8_t x756 = -60;
static int32_t x759 = 722768618;
int16_t x771 = -359;
static int16_t x772 = INT16_MAX;
volatile int16_t x774 = INT16_MIN;
volatile int64_t t173 = -1LL;
static int64_t t175 = -133992248434LL;
uint64_t x789 = 601200985945309900LLU;
int8_t x795 = INT8_MIN;
int8_t x803 = 16;
volatile uint64_t t179 = 194145954140578287LLU;
int8_t x808 = -1;
int16_t x810 = -27;
uint16_t x811 = 6U;
int16_t x814 = INT16_MAX;
int64_t x824 = INT64_MIN;
int16_t x828 = -1;
uint16_t x835 = 30553U;
int32_t t187 = -7971861;
uint32_t x840 = UINT32_MAX;
int16_t x844 = INT16_MIN;
int64_t x845 = -1LL;
volatile int8_t x867 = INT8_MAX;
static int32_t t194 = 14;
uint32_t x871 = UINT32_MAX;
uint16_t x878 = UINT16_MAX;
volatile uint64_t t197 = 1181511LLU;


void f0(void) {
    	volatile int64_t x1 = INT64_MIN;
	volatile uint16_t x3 = UINT16_MAX;
	uint32_t x4 = UINT32_MAX;
	static int64_t t0 = -3850306103269LL;

    t0 = (x1/((x2^x3)-x4));

    if (t0 != -141287235747840LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = -310304;
	volatile uint32_t x7 = 35U;
	int32_t x8 = INT32_MIN;
	volatile uint32_t t1 = 407U;

    t1 = (x5/((x6^x7)-x8));

    if (t1 != 1U) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x10 = -1;
	uint8_t x11 = 59U;
	static uint32_t x12 = UINT32_MAX;
	static uint32_t t2 = 3672705U;

    t2 = (x9/((x10^x11)-x12));

    if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = INT32_MIN;
	int32_t x14 = INT32_MIN;
	int32_t x16 = -1;

    t3 = (x13/((x14^x15)-x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile int64_t x17 = INT64_MIN;
	uint8_t x19 = 0U;
	int16_t x20 = 17;
	int64_t t4 = -2926879583720296LL;

    t4 = (x17/((x18^x19)-x20));

    if (t4 != -38753664020398217LL) { NG(); } else { ; }
	
}

void f5(void) {
    	static int8_t x21 = INT8_MAX;
	uint64_t x22 = UINT64_MAX;
	static int32_t x23 = -1;
	volatile int8_t x24 = -1;
	uint64_t t5 = 9985733LLU;

    t5 = (x21/((x22^x23)-x24));

    if (t5 != 127LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = 4;
	static int8_t x26 = INT8_MAX;
	uint16_t x27 = UINT16_MAX;
	uint64_t x28 = UINT64_MAX;
	uint64_t t6 = 530685827054170LLU;

    t6 = (x25/((x26^x27)-x28));

    if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = INT32_MIN;
	int8_t x30 = INT8_MIN;
	volatile int64_t x31 = INT64_MIN;
	uint64_t x32 = 129452796084898238LLU;
	volatile uint64_t t7 = 4695080734333403LLU;

    t7 = (x29/((x30^x31)-x32));

    if (t7 != 2LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x34 = -1LL;
	uint64_t t8 = 3746485031740988LLU;

    t8 = (x33/((x34^x35)-x36));

    if (t8 != 1LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x37 = INT32_MIN;
	uint8_t x38 = 11U;
	volatile uint16_t x40 = 7U;
	int64_t t9 = 1230098710496475LL;

    t9 = (x37/((x38^x39)-x40));

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int16_t x41 = INT16_MIN;
	static int16_t x42 = 151;
	int16_t x43 = -1;
	uint64_t x44 = 2100377117914LLU;

    t10 = (x41/((x42^x43)-x44));

    if (t10 != 1LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	static int64_t x45 = INT64_MAX;
	int64_t x46 = INT64_MAX;
	uint16_t x47 = 12338U;
	int32_t x48 = INT32_MAX;
	volatile int64_t t11 = -932490LL;

    t11 = (x45/((x46^x47)-x48));

    if (t11 != 1LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x49 = 23270U;
	int64_t x50 = INT64_MIN;
	uint16_t x52 = 194U;
	int64_t t12 = 3951411459LL;

    t12 = (x49/((x50^x51)-x52));

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x53 = 1002;
	int8_t x55 = -14;
	static int32_t t13 = -217236435;

    t13 = (x53/((x54^x55)-x56));

    if (t13 != 66) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = INT64_MIN;
	volatile int32_t x58 = -96109;
	uint64_t x59 = UINT64_MAX;
	static int16_t x60 = 5163;
	uint64_t t14 = 54537436131284LLU;

    t14 = (x57/((x58^x59)-x60));

    if (t14 != 101417032677494LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x65 = 3U;
	uint64_t x66 = UINT64_MAX;
	volatile int8_t x67 = INT8_MIN;
	uint64_t x68 = 333134753LLU;
	volatile uint64_t t15 = 10LLU;

    t15 = (x65/((x66^x67)-x68));

    if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int32_t x69 = INT32_MIN;
	int8_t x70 = -17;
	uint16_t x71 = UINT16_MAX;
	int64_t t16 = 22755688776468LL;

    t16 = (x69/((x70^x71)-x72));

    if (t16 != 32776LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x73 = INT32_MAX;
	int32_t x74 = 22331161;
	volatile int16_t x76 = INT16_MAX;

    t17 = (x73/((x74^x75)-x76));

    if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x77 = INT32_MIN;
	volatile int8_t x79 = 1;
	int16_t x80 = INT16_MAX;
	int64_t t18 = -2LL;

    t18 = (x77/((x78^x79)-x80));

    if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x81 = -1LL;
	volatile uint64_t x82 = 931993958LLU;
	int8_t x83 = INT8_MIN;
	uint64_t x84 = 1556LLU;
	static uint64_t t19 = 42134LLU;

    t19 = (x81/((x82^x83)-x84));

    if (t19 != 1LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	static int16_t x85 = INT16_MAX;
	int8_t x86 = INT8_MIN;
	int16_t x87 = INT16_MIN;
	uint64_t x88 = UINT64_MAX;

    t20 = (x85/((x86^x87)-x88));

    if (t20 != 1LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x89 = INT8_MIN;
	volatile int16_t x91 = INT16_MIN;
	int32_t x92 = -1;
	int32_t t21 = 24;

    t21 = (x89/((x90^x91)-x92));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static int32_t x93 = -410;
	uint8_t x94 = 22U;
	int64_t x95 = -1LL;
	uint8_t x96 = UINT8_MAX;
	volatile int64_t t22 = -178LL;

    t22 = (x93/((x94^x95)-x96));

    if (t22 != 1LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x97 = -44LL;
	volatile int32_t x99 = 1017;
	static volatile uint64_t x100 = 34498965216528310LLU;
	uint64_t t23 = 8239458576028LLU;

    t23 = (x97/((x98^x99)-x100));

    if (t23 != 1LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x102 = 168U;
	int32_t x103 = -265675223;
	int32_t x104 = 642;

    t24 = (x101/((x102^x103)-x104));

    if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x105 = INT32_MIN;
	uint64_t x106 = 0LLU;
	static int16_t x107 = INT16_MIN;
	uint32_t x108 = 477U;

    t25 = (x105/((x106^x107)-x108));

    if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x109 = -140;
	uint8_t x110 = UINT8_MAX;
	int8_t x111 = 51;
	static uint64_t t26 = 22637025148LLU;

    t26 = (x109/((x110^x111)-x112));

    if (t26 != 89984117432729519LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile int16_t x115 = INT16_MAX;
	int16_t x116 = INT16_MAX;
	volatile uint32_t t27 = 585043204U;

    t27 = (x113/((x114^x115)-x116));

    if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x117 = 103U;
	uint64_t x118 = 522363400LLU;
	static uint8_t x119 = UINT8_MAX;
	volatile uint64_t t28 = 0LLU;

    t28 = (x117/((x118^x119)-x120));

    if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x121 = 0U;
	uint64_t x122 = 3153720719440LLU;
	uint16_t x124 = UINT16_MAX;
	volatile uint64_t t29 = 5242059201111020694LLU;

    t29 = (x121/((x122^x123)-x124));

    if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint32_t x126 = UINT32_MAX;

    t30 = (x125/((x126^x127)-x128));

    if (t30 != 2152511509LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x137 = -1;
	volatile int8_t x138 = 0;
	static volatile uint32_t x139 = 1021U;
	static volatile uint32_t t31 = 766U;

    t31 = (x137/((x138^x139)-x140));

    if (t31 != 5607006U) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x141 = INT8_MIN;
	volatile int64_t x142 = INT64_MAX;
	int64_t x143 = INT64_MIN;
	int8_t x144 = 58;
	int64_t t32 = -26398757460LL;

    t32 = (x141/((x142^x143)-x144));

    if (t32 != 2LL) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint16_t x146 = UINT16_MAX;
	int16_t x147 = INT16_MAX;
	int16_t x148 = -1;

    t33 = (x145/((x146^x147)-x148));

    if (t33 != -1009577306LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x149 = 2U;
	int16_t x150 = -1;
	int32_t x151 = -3;
	volatile int16_t x152 = -4;
	volatile int32_t t34 = 28;

    t34 = (x149/((x150^x151)-x152));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x153 = UINT8_MAX;
	uint8_t x154 = 1U;
	int16_t x155 = INT16_MAX;
	static volatile int8_t x156 = -1;
	int32_t t35 = 209219603;

    t35 = (x153/((x154^x155)-x156));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint64_t x159 = UINT64_MAX;
	static int64_t x160 = INT64_MIN;
	volatile uint64_t t36 = 3330388042700LLU;

    t36 = (x157/((x158^x159)-x160));

    if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint32_t x161 = UINT32_MAX;
	volatile int32_t x162 = -1;
	volatile int16_t x163 = -1;
	uint8_t x164 = UINT8_MAX;
	volatile uint32_t t37 = 239062187U;

    t37 = (x161/((x162^x163)-x164));

    if (t37 != 1U) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int8_t x165 = INT8_MIN;
	static int16_t x166 = 1;
	volatile uint16_t x168 = 6883U;

    t38 = (x165/((x166^x167)-x168));

    if (t38 != 1U) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int8_t x171 = INT8_MIN;

    t39 = (x169/((x170^x171)-x172));

    if (t39 != 3250LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x174 = 0U;
	int8_t x175 = 0;
	static volatile int8_t x176 = -21;
	static volatile int32_t t40 = 76405;

    t40 = (x173/((x174^x175)-x176));

    if (t40 != 351287) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x183 = INT8_MAX;
	volatile int64_t t41 = -511378418LL;

    t41 = (x181/((x182^x183)-x184));

    if (t41 != -2147483708LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x185 = INT32_MAX;
	uint8_t x186 = 1U;
	int32_t x187 = 8146325;
	int8_t x188 = -1;
	int32_t t42 = 298771;

    t42 = (x185/((x186^x187)-x188));

    if (t42 != 263) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x189 = UINT32_MAX;
	static volatile int32_t x190 = INT32_MAX;
	uint32_t x191 = 39793U;
	uint32_t t43 = 305319905U;

    t43 = (x189/((x190^x191)-x192));

    if (t43 != 2U) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int64_t x193 = 127537630502297LL;
	int16_t x194 = INT16_MAX;
	uint64_t x195 = UINT64_MAX;
	int64_t x196 = INT64_MIN;

    t44 = (x193/((x194^x195)-x196));

    if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	static int64_t x197 = INT64_MAX;
	int64_t x198 = INT64_MAX;
	int32_t x199 = -535880204;
	int32_t x200 = -1;
	int64_t t45 = 241734LL;

    t45 = (x197/((x198^x199)-x200));

    if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x201 = 11559U;
	static int8_t x202 = INT8_MIN;
	int8_t x203 = -21;
	static volatile int16_t x204 = 33;
	static volatile uint32_t t46 = 5332U;

    t46 = (x201/((x202^x203)-x204));

    if (t46 != 156U) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x205 = 25271U;
	int32_t x206 = INT32_MAX;
	int8_t x207 = 2;
	uint64_t x208 = 57615335300LLU;
	volatile uint64_t t47 = 1425235070300LLU;

    t47 = (x205/((x206^x207)-x208));

    if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x209 = INT16_MAX;
	int32_t x210 = -88952;
	static volatile uint64_t x211 = UINT64_MAX;
	int64_t x212 = INT64_MIN;
	volatile uint64_t t48 = 0LLU;

    t48 = (x209/((x210^x211)-x212));

    if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x214 = INT64_MIN;
	uint16_t x215 = 958U;
	static volatile int64_t x216 = 0LL;
	int64_t t49 = -182595LL;

    t49 = (x213/((x214^x215)-x216));

    if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x217 = 10395733LLU;
	int16_t x218 = 4912;
	int32_t x219 = -2964548;
	static int32_t x220 = -1;
	volatile uint64_t t50 = 132861335292115LLU;

    t50 = (x217/((x218^x219)-x220));

    if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x221 = 116845803260466LLU;
	int8_t x222 = 16;
	uint64_t x223 = 3258122914111236989LLU;
	uint8_t x224 = 7U;
	volatile uint64_t t51 = 3316057850698649547LLU;

    t51 = (x221/((x222^x223)-x224));

    if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x226 = -1;
	uint16_t x227 = UINT16_MAX;
	int8_t x228 = INT8_MAX;
	volatile int32_t t52 = 31349;

    t52 = (x225/((x226^x227)-x228));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x229 = INT16_MIN;
	volatile int32_t x230 = -101206;
	static int16_t x231 = INT16_MIN;
	uint16_t x232 = 78U;
	static volatile int32_t t53 = -17;

    t53 = (x229/((x230^x231)-x232));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile int8_t x234 = INT8_MIN;
	volatile uint64_t x235 = 507350506602355883LLU;
	int8_t x236 = INT8_MIN;
	volatile uint64_t t54 = 491505485713326837LLU;

    t54 = (x233/((x234^x235)-x236));

    if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x237 = INT32_MIN;
	int64_t x238 = 3774986106598440LL;
	static int8_t x239 = INT8_MIN;
	static uint16_t x240 = UINT16_MAX;

    t55 = (x237/((x238^x239)-x240));

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x241 = 1326U;
	volatile int64_t x242 = -16425845227391LL;
	int64_t x243 = INT64_MIN;
	static uint8_t x244 = UINT8_MAX;
	volatile int64_t t56 = -117LL;

    t56 = (x241/((x242^x243)-x244));

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x245 = INT8_MAX;
	int64_t x246 = 40639553LL;
	int16_t x247 = INT16_MIN;
	int32_t x248 = INT32_MAX;
	static volatile int64_t t57 = -107465731122818182LL;

    t57 = (x245/((x246^x247)-x248));

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x249 = 2;
	volatile uint8_t x250 = 1U;
	int16_t x251 = 16117;
	int8_t x252 = INT8_MAX;
	int32_t t58 = -72622704;

    t58 = (x249/((x250^x251)-x252));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x253 = INT64_MIN;
	uint16_t x254 = 980U;
	static int8_t x255 = INT8_MAX;
	int8_t x256 = INT8_MAX;
	int64_t t59 = -29LL;

    t59 = (x253/((x254^x255)-x256));

    if (t59 != -11358832557702925LL) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint32_t x257 = UINT32_MAX;
	int16_t x258 = -1;
	uint8_t x259 = 0U;
	volatile uint32_t t60 = 7079U;

    t60 = (x257/((x258^x259)-x260));

    if (t60 != 2U) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x261 = INT64_MIN;
	uint8_t x264 = UINT8_MAX;
	volatile uint64_t t61 = 5871804340LLU;

    t61 = (x261/((x262^x263)-x264));

    if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x266 = 114466663345LLU;
	int8_t x267 = INT8_MIN;
	volatile int64_t x268 = INT64_MIN;
	volatile uint64_t t62 = 220730LLU;

    t62 = (x265/((x266^x267)-x268));

    if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint16_t x270 = 0U;
	int8_t x271 = INT8_MIN;
	static int64_t t63 = -4408500437390095LL;

    t63 = (x269/((x270^x271)-x272));

    if (t63 != -72624976668147841LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x273 = 472473681523675LL;
	int8_t x275 = INT8_MIN;
	int8_t x276 = INT8_MAX;
	static int64_t t64 = 5688197739LL;

    t64 = (x273/((x274^x275)-x276));

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x277 = 9U;
	volatile int16_t x279 = INT16_MAX;
	volatile int32_t x280 = -66;
	int64_t t65 = -20289426637LL;

    t65 = (x277/((x278^x279)-x280));

    if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x281 = -11312;
	int16_t x282 = INT16_MAX;
	static int32_t x283 = INT32_MIN;
	uint32_t x284 = UINT32_MAX;

    t66 = (x281/((x282^x283)-x284));

    if (t66 != 1U) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x285 = INT64_MIN;
	uint16_t x286 = UINT16_MAX;
	uint32_t x287 = 37015U;
	int8_t x288 = -1;
	volatile int64_t t67 = -193496357LL;

    t67 = (x285/((x286^x287)-x288));

    if (t67 != -323388802526376LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x289 = -1;
	int32_t x290 = INT32_MIN;
	uint32_t x291 = 411U;
	uint64_t x292 = UINT64_MAX;

    t68 = (x289/((x290^x291)-x292));

    if (t68 != 8589932944LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x293 = INT32_MIN;
	static uint8_t x294 = 70U;
	uint64_t x295 = 5714176655LLU;
	int16_t x296 = 14340;
	uint64_t t69 = 193806343957812778LLU;

    t69 = (x293/((x294^x295)-x296));

    if (t69 != 3228249893LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x297 = -25;
	static volatile int16_t x298 = 0;
	int16_t x300 = INT16_MAX;
	volatile int32_t t70 = -58870;

    t70 = (x297/((x298^x299)-x300));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x305 = 99020047567715LLU;
	static int8_t x306 = -5;
	volatile int64_t x307 = INT64_MIN;
	int8_t x308 = 2;
	static volatile uint64_t t71 = 106LLU;

    t71 = (x305/((x306^x307)-x308));

    if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int8_t x309 = -40;
	int32_t x310 = -64376;
	uint64_t x311 = UINT64_MAX;
	uint64_t t72 = 27624577339LLU;

    t72 = (x309/((x310^x311)-x312));

    if (t72 != 1LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x313 = 1U;
	int8_t x314 = INT8_MAX;
	int16_t x315 = INT16_MIN;
	int16_t x316 = INT16_MIN;
	int32_t t73 = -444;

    t73 = (x313/((x314^x315)-x316));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x317 = 13U;
	static uint8_t x318 = 80U;
	int8_t x319 = INT8_MIN;
	int32_t x320 = -108580192;

    t74 = (x317/((x318^x319)-x320));

    if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x322 = -26764;
	uint32_t x323 = UINT32_MAX;
	volatile int64_t x324 = -1LL;
	volatile int64_t t75 = -25420LL;

    t75 = (x321/((x322^x323)-x324));

    if (t75 != -104LL) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int16_t x325 = INT16_MIN;
	uint16_t x326 = UINT16_MAX;
	volatile int8_t x327 = INT8_MIN;
	static uint64_t x328 = 127948LLU;
	volatile uint64_t t76 = 5LLU;

    t76 = (x325/((x326^x327)-x328));

    if (t76 != 1LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x329 = INT16_MAX;
	int32_t x330 = INT32_MIN;
	int16_t x331 = INT16_MIN;
	uint64_t t77 = 0LLU;

    t77 = (x329/((x330^x331)-x332));

    if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int64_t x333 = -782608136814LL;
	int64_t x334 = INT64_MIN;
	uint16_t x336 = 46U;
	static int64_t t78 = -17850114518691807LL;

    t78 = (x333/((x334^x335)-x336));

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int8_t x337 = 2;
	int16_t x339 = INT16_MAX;
	uint8_t x340 = UINT8_MAX;
	int32_t t79 = -305492;

    t79 = (x337/((x338^x339)-x340));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x345 = -1LL;
	static uint8_t x346 = 2U;
	static uint16_t x347 = 0U;
	volatile uint16_t x348 = 4710U;
	volatile int64_t t80 = -225LL;

    t80 = (x345/((x346^x347)-x348));

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int32_t x349 = -4751;
	int16_t x350 = -201;
	static int64_t x351 = -1LL;
	int16_t x352 = -1;
	volatile int64_t t81 = 3061562LL;

    t81 = (x349/((x350^x351)-x352));

    if (t81 != -23LL) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int16_t x353 = INT16_MIN;
	static int16_t x354 = INT16_MIN;
	uint8_t x355 = UINT8_MAX;
	int64_t t82 = -2060441394887LL;

    t82 = (x353/((x354^x355)-x356));

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x357 = -421;
	volatile int32_t x359 = INT32_MAX;
	volatile int32_t x360 = -1;
	int64_t t83 = 17790488310110041LL;

    t83 = (x357/((x358^x359)-x360));

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x361 = INT64_MIN;
	uint16_t x362 = 2984U;
	int64_t x363 = 8470584013460LL;
	int8_t x364 = INT8_MIN;
	volatile int64_t t84 = 760LL;

    t84 = (x361/((x362^x363)-x364));

    if (t84 != -1088870LL) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint8_t x369 = 1U;
	int64_t x370 = INT64_MIN;
	volatile int64_t t85 = 1124038149854LL;

    t85 = (x369/((x370^x371)-x372));

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x373 = 44U;
	int32_t x375 = -1238228;
	uint16_t x376 = 511U;
	volatile uint32_t t86 = 34U;

    t86 = (x373/((x374^x375)-x376));

    if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x378 = 6U;
	volatile int32_t t87 = -263;

    t87 = (x377/((x378^x379)-x380));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x381 = 0;
	int32_t x382 = 0;
	static volatile uint32_t x383 = 195149U;
	volatile uint32_t t88 = 1519149021U;

    t88 = (x381/((x382^x383)-x384));

    if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x385 = INT32_MIN;
	uint64_t x386 = 5065085100411959LLU;
	uint32_t x387 = 1023942U;
	volatile uint64_t t89 = 980825068313771LLU;

    t89 = (x385/((x386^x387)-x388));

    if (t89 != 3641LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x389 = INT8_MAX;
	int32_t x390 = INT32_MAX;
	int64_t x391 = INT64_MAX;
	int8_t x392 = -1;

    t90 = (x389/((x390^x391)-x392));

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x393 = 135;
	uint64_t x394 = UINT64_MAX;
	volatile uint64_t t91 = 28431468LLU;

    t91 = (x393/((x394^x395)-x396));

    if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint32_t x397 = 1002U;
	volatile int16_t x398 = INT16_MAX;
	int16_t x400 = 289;
	static volatile uint32_t t92 = 417098U;

    t92 = (x397/((x398^x399)-x400));

    if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
    	static int16_t x401 = INT16_MAX;
	int16_t x403 = INT16_MIN;
	int32_t x404 = 39095963;

    t93 = (x401/((x402^x403)-x404));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x405 = 3LLU;
	uint8_t x406 = 1U;
	int8_t x407 = -4;
	int16_t x408 = INT16_MIN;

    t94 = (x405/((x406^x407)-x408));

    if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x409 = 246;
	static int64_t x410 = INT64_MIN;
	uint16_t x411 = 94U;
	uint16_t x412 = 13U;
	int64_t t95 = 260782106102LL;

    t95 = (x409/((x410^x411)-x412));

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x413 = 3;
	static int16_t x414 = -250;
	int64_t x415 = -1LL;
	int64_t x416 = -1LL;
	int64_t t96 = 126026368883LL;

    t96 = (x413/((x414^x415)-x416));

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x417 = INT32_MAX;
	int16_t x418 = -1;
	volatile int8_t x420 = INT8_MIN;

    t97 = (x417/((x418^x419)-x420));

    if (t97 != -373475) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x422 = 2510597LLU;
	uint8_t x423 = UINT8_MAX;
	static volatile int16_t x424 = INT16_MIN;
	static volatile uint64_t t98 = 2455354271984LLU;

    t98 = (x421/((x422^x423)-x424));

    if (t98 != 1666758094359LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x425 = INT64_MAX;
	static int16_t x427 = -1;
	int32_t x428 = INT32_MAX;
	int64_t t99 = -207535703724983404LL;

    t99 = (x425/((x426^x427)-x428));

    if (t99 != 4317011865LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x429 = 1459U;
	int64_t x431 = INT64_MIN;
	static uint64_t x432 = 787819730LLU;
	volatile uint64_t t100 = 512614125443946LLU;

    t100 = (x429/((x430^x431)-x432));

    if (t100 != 0LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x433 = -418;
	volatile uint8_t x434 = UINT8_MAX;
	int32_t x435 = -1;
	volatile uint16_t x436 = 2772U;
	int32_t t101 = -146617;

    t101 = (x433/((x434^x435)-x436));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static int32_t x437 = INT32_MIN;
	uint32_t x440 = 13746953U;
	static volatile int64_t t102 = 99LL;

    t102 = (x437/((x438^x439)-x440));

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x441 = 5LL;
	int16_t x442 = INT16_MIN;
	volatile int64_t x443 = INT64_MIN;
	volatile int8_t x444 = -1;

    t103 = (x441/((x442^x443)-x444));

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x445 = 985514635LL;
	int16_t x446 = INT16_MIN;
	uint64_t x448 = UINT64_MAX;
	static volatile uint64_t t104 = 804376427841172LLU;

    t104 = (x445/((x446^x447)-x448));

    if (t104 != 30075LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint8_t x449 = UINT8_MAX;
	int32_t x450 = INT32_MAX;
	uint64_t x451 = 640704357369807628LLU;
	int32_t x452 = 72;

    t105 = (x449/((x450^x451)-x452));

    if (t105 != 0LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x454 = INT16_MIN;
	int64_t x455 = -1LL;
	int16_t x456 = -1;
	uint64_t t106 = 16762228532181449LLU;

    t106 = (x453/((x454^x455)-x456));

    if (t106 != 104880306LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint8_t x457 = 39U;
	int16_t x459 = 3493;
	int32_t x460 = INT32_MIN;
	volatile uint32_t t107 = 62191339U;

    t107 = (x457/((x458^x459)-x460));

    if (t107 != 0U) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x462 = -401147LL;
	volatile int32_t x463 = INT32_MIN;
	uint16_t x464 = 171U;
	volatile int64_t t108 = -1721LL;

    t108 = (x461/((x462^x463)-x464));

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x465 = 538859;
	uint16_t x466 = UINT16_MAX;
	int16_t x467 = INT16_MIN;
	int64_t x468 = INT64_MIN;
	int64_t t109 = 6241732872189876LL;

    t109 = (x465/((x466^x467)-x468));

    if (t109 != 0LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x469 = 12;
	int64_t x472 = 31673061716093510LL;
	int64_t t110 = -2879812LL;

    t110 = (x469/((x470^x471)-x472));

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint64_t x477 = UINT64_MAX;
	int32_t x478 = INT32_MAX;
	volatile uint16_t x480 = UINT16_MAX;

    t111 = (x477/((x478^x479)-x480));

    if (t111 != 8590217581LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x481 = INT32_MAX;
	uint16_t x482 = 76U;
	int16_t x483 = INT16_MAX;
	int8_t x484 = -1;
	int32_t t112 = 2661454;

    t112 = (x481/((x482^x483)-x484));

    if (t112 != 65688) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x485 = INT16_MIN;
	volatile uint8_t x486 = 7U;
	int8_t x487 = INT8_MIN;
	uint8_t x488 = 6U;
	int32_t t113 = 93786;

    t113 = (x485/((x486^x487)-x488));

    if (t113 != 258) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x489 = INT32_MIN;
	volatile int8_t x490 = -1;
	uint64_t x491 = 265LLU;
	static int32_t x492 = INT32_MIN;
	volatile uint64_t t114 = 68760337LLU;

    t114 = (x489/((x490^x491)-x492));

    if (t114 != 8589935655LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x494 = -1;
	volatile int64_t x495 = -1LL;
	int8_t x496 = 5;
	static volatile uint64_t t115 = 8012487084781538LLU;

    t115 = (x493/((x494^x495)-x496));

    if (t115 != 0LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x497 = INT64_MIN;
	int64_t x500 = -134015641LL;
	int64_t t116 = 65151678445014266LL;

    t116 = (x497/((x498^x499)-x500));

    if (t116 != -68806278078LL) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint64_t x501 = 704580722632LLU;
	int32_t x502 = 4;
	static int64_t x503 = 38197179008690543LL;
	int64_t x504 = -1LL;
	volatile uint64_t t117 = 38LLU;

    t117 = (x501/((x502^x503)-x504));

    if (t117 != 0LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int8_t x505 = INT8_MIN;
	static int16_t x506 = -1;
	static uint16_t x507 = 7U;
	uint64_t x508 = UINT64_MAX;
	volatile uint64_t t118 = 533001342549714LLU;

    t118 = (x505/((x506^x507)-x508));

    if (t118 != 0LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x509 = 21U;
	int64_t x510 = -1027842LL;
	uint64_t x512 = UINT64_MAX;
	static uint64_t t119 = 436639900LLU;

    t119 = (x509/((x510^x511)-x512));

    if (t119 != 0LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	static int32_t x513 = -19;
	int8_t x515 = INT8_MIN;
	uint32_t t120 = 76U;

    t120 = (x513/((x514^x515)-x516));

    if (t120 != 1U) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x517 = -3LL;
	static int64_t x518 = -88LL;
	volatile int64_t x519 = INT64_MIN;
	int8_t x520 = -1;

    t121 = (x517/((x518^x519)-x520));

    if (t121 != 0LL) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile int64_t x523 = INT64_MIN;
	static uint8_t x524 = 0U;
	volatile int64_t t122 = 10350869LL;

    t122 = (x521/((x522^x523)-x524));

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint64_t x525 = 43129154102LLU;
	uint64_t x527 = 2759LLU;
	volatile int16_t x528 = INT16_MIN;

    t123 = (x525/((x526^x527)-x528));

    if (t123 != 1437255LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x529 = INT16_MIN;
	uint8_t x531 = 11U;
	volatile int16_t x532 = INT16_MAX;
	int32_t t124 = 2336;

    t124 = (x529/((x530^x531)-x532));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x533 = -5;
	int32_t x534 = INT32_MAX;
	int16_t x535 = -1;
	static volatile uint32_t t125 = 9286816U;

    t125 = (x533/((x534^x535)-x536));

    if (t125 != 1U) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x538 = -1;
	int16_t x539 = 8;
	uint64_t x540 = UINT64_MAX;
	volatile uint64_t t126 = 292206136884413LLU;

    t126 = (x537/((x538^x539)-x540));

    if (t126 != 0LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x545 = 37U;
	int64_t x546 = -1LL;
	int16_t x547 = INT16_MIN;
	int32_t x548 = INT32_MIN;
	int64_t t127 = 8527424524766237LL;

    t127 = (x545/((x546^x547)-x548));

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x553 = -27673387831714LL;
	static int8_t x554 = INT8_MAX;
	volatile int32_t x555 = INT32_MIN;
	volatile int16_t x556 = 0;

    t128 = (x553/((x554^x555)-x556));

    if (t128 != 12886LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x557 = INT8_MAX;
	volatile uint16_t x558 = 2024U;
	int8_t x559 = INT8_MAX;
	int8_t x560 = INT8_MAX;
	int32_t t129 = 10634;

    t129 = (x557/((x558^x559)-x560));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x561 = INT32_MAX;
	uint32_t x562 = 260288182U;
	uint64_t x563 = 131297297824957718LLU;
	volatile uint32_t x564 = 32850554U;
	uint64_t t130 = 9LLU;

    t130 = (x561/((x562^x563)-x564));

    if (t130 != 0LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x569 = -2;
	uint8_t x571 = 82U;
	volatile uint16_t x572 = UINT16_MAX;
	volatile int32_t t131 = -551;

    t131 = (x569/((x570^x571)-x572));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x573 = 303U;
	uint16_t x574 = UINT16_MAX;
	volatile int8_t x575 = 7;
	uint64_t x576 = 3047663033912LLU;
	static volatile uint64_t t132 = 7288121LLU;

    t132 = (x573/((x574^x575)-x576));

    if (t132 != 0LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x581 = UINT64_MAX;
	static int16_t x582 = -727;
	uint16_t x584 = 13051U;
	static volatile uint64_t t133 = 25162248565253LLU;

    t133 = (x581/((x582^x583)-x584));

    if (t133 != 8589989704LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x585 = 35;
	int64_t x586 = 207919141LL;
	int16_t x587 = -46;
	uint8_t x588 = 1U;
	int64_t t134 = 111LL;

    t134 = (x585/((x586^x587)-x588));

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x589 = INT64_MAX;
	volatile uint8_t x590 = 1U;
	int8_t x592 = -1;

    t135 = (x589/((x590^x591)-x592));

    if (t135 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int64_t x593 = INT64_MAX;
	int32_t x594 = 2445485;
	volatile uint32_t x595 = 12875719U;
	uint16_t x596 = 28766U;
	int64_t t136 = -171057881459153163LL;

    t136 = (x593/((x594^x595)-x596));

    if (t136 != 626293178185LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x597 = 275LLU;
	int32_t x598 = -150091;
	int8_t x599 = INT8_MIN;
	static uint64_t t137 = 6867177747961864LLU;

    t137 = (x597/((x598^x599)-x600));

    if (t137 != 0LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x601 = 1729U;
	int64_t x603 = 1LL;

    t138 = (x601/((x602^x603)-x604));

    if (t138 != 0LL) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int64_t x609 = 2292974613573084316LL;
	int32_t x610 = -1;
	uint16_t x611 = 26U;
	uint16_t x612 = 4U;
	volatile int64_t t139 = -351608226879LL;

    t139 = (x609/((x610^x611)-x612));

    if (t139 != -73966923018486590LL) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint64_t x617 = 7330044627587LLU;
	uint16_t x619 = 238U;
	int32_t x620 = -3564288;
	static uint64_t t140 = 78450116797712705LLU;

    t140 = (x617/((x618^x619)-x620));

    if (t140 != 2056388LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x621 = -1;
	int16_t x623 = -1;
	int8_t x624 = -1;
	volatile int32_t t141 = 5;

    t141 = (x621/((x622^x623)-x624));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x625 = -947;
	static int8_t x626 = INT8_MIN;
	int32_t x628 = -1;
	volatile uint32_t t142 = 202U;

    t142 = (x625/((x626^x627)-x628));

    if (t142 != 1U) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x634 = -1;
	int8_t x635 = INT8_MAX;
	uint16_t x636 = UINT16_MAX;

    t143 = (x633/((x634^x635)-x636));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x637 = -1;
	int16_t x638 = INT16_MIN;
	int32_t x639 = INT32_MIN;
	uint32_t x640 = UINT32_MAX;
	volatile uint32_t t144 = 61U;

    t144 = (x637/((x638^x639)-x640));

    if (t144 != 2U) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x641 = 198497519LLU;
	int64_t x642 = INT64_MIN;
	static int16_t x643 = 0;
	uint64_t t145 = 37LLU;

    t145 = (x641/((x642^x643)-x644));

    if (t145 != 0LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x645 = -2;
	int16_t x646 = -1;
	uint64_t x647 = 8794465112480875LLU;
	int64_t x648 = INT64_MIN;
	static volatile uint64_t t146 = 60200055536LLU;

    t146 = (x645/((x646^x647)-x648));

    if (t146 != 2LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	static int64_t x649 = 15LL;
	int16_t x650 = INT16_MAX;
	int64_t x651 = 2009107232704LL;
	int16_t x652 = 1279;

    t147 = (x649/((x650^x651)-x652));

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x657 = UINT8_MAX;
	uint32_t x658 = 1U;
	volatile int8_t x660 = -1;
	volatile int64_t t148 = 542073654LL;

    t148 = (x657/((x658^x659)-x660));

    if (t148 != -255LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x661 = INT32_MIN;
	static int32_t x662 = INT32_MIN;
	int32_t x664 = -794;
	volatile uint32_t t149 = 41U;

    t149 = (x661/((x662^x663)-x664));

    if (t149 != 0U) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x669 = INT64_MIN;
	int32_t x670 = INT32_MIN;
	volatile uint8_t x672 = UINT8_MAX;
	volatile int64_t t150 = -3368904116838515682LL;

    t150 = (x669/((x670^x671)-x672));

    if (t150 != -4294968062LL) { NG(); } else { ; }
	
}

void f151(void) {
    	static int32_t x673 = INT32_MIN;
	uint32_t x674 = 120262576U;
	static int32_t x675 = 10749;
	int16_t x676 = INT16_MIN;
	uint32_t t151 = 58U;

    t151 = (x673/((x674^x675)-x676));

    if (t151 != 17U) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x678 = -1;
	int16_t x679 = -1;
	volatile int32_t t152 = 2723;

    t152 = (x677/((x678^x679)-x680));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static int64_t x685 = -1LL;
	int16_t x686 = -395;
	int8_t x687 = INT8_MAX;
	static uint16_t x688 = 38U;
	volatile int64_t t153 = 1797733304LL;

    t153 = (x685/((x686^x687)-x688));

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x689 = UINT64_MAX;
	int16_t x690 = INT16_MAX;
	uint16_t x692 = 386U;
	uint64_t t154 = 271LLU;

    t154 = (x689/((x690^x691)-x692));

    if (t154 != 1LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x693 = 21U;
	int64_t x694 = -1LL;
	int8_t x695 = INT8_MAX;
	int32_t x696 = INT32_MIN;

    t155 = (x693/((x694^x695)-x696));

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x697 = UINT32_MAX;
	static int64_t x698 = -1651241610492465LL;
	int8_t x699 = INT8_MIN;
	volatile int16_t x700 = INT16_MIN;
	volatile int64_t t156 = -13069LL;

    t156 = (x697/((x698^x699)-x700));

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x702 = 24U;
	uint64_t x704 = 694299648242LLU;
	static uint64_t t157 = 8LLU;

    t157 = (x701/((x702^x703)-x704));

    if (t157 != 0LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile int32_t x705 = -1;
	volatile int8_t x706 = INT8_MIN;
	volatile int32_t x707 = INT32_MAX;
	volatile int8_t x708 = 0;
	int32_t t158 = 0;

    t158 = (x705/((x706^x707)-x708));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x713 = INT16_MIN;
	uint16_t x714 = 1574U;
	static int32_t x715 = 201;
	int16_t x716 = -187;

    t159 = (x713/((x714^x715)-x716));

    if (t159 != -16) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x717 = -18654223928LL;
	int64_t x718 = INT64_MAX;
	static int32_t x719 = -13398;
	int16_t x720 = INT16_MIN;
	int64_t t160 = 7902396440480LL;

    t160 = (x717/((x718^x719)-x720));

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x724 = UINT64_MAX;
	uint64_t t161 = 1405359688334244607LLU;

    t161 = (x721/((x722^x723)-x724));

    if (t161 != 0LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x729 = 357364U;
	int16_t x730 = -6468;
	volatile int8_t x731 = -29;
	volatile uint8_t x732 = 125U;
	static volatile uint32_t t162 = 246917405U;

    t162 = (x729/((x730^x731)-x732));

    if (t162 != 56U) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint8_t x734 = 116U;
	int8_t x735 = INT8_MIN;
	int64_t x736 = 111917761LL;
	volatile int64_t t163 = 12LL;

    t163 = (x733/((x734^x735)-x736));

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x738 = 5819470U;
	int16_t x739 = -1;
	int64_t x740 = 6377797LL;
	volatile int64_t t164 = 618631463508264538LL;

    t164 = (x737/((x738^x739)-x740));

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x741 = 1U;
	volatile int64_t x742 = INT64_MIN;
	static volatile int64_t t165 = 644194LL;

    t165 = (x741/((x742^x743)-x744));

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x745 = -139;
	uint32_t x746 = 88330059U;
	uint8_t x747 = 47U;
	int16_t x748 = -1;

    t166 = (x745/((x746^x747)-x748));

    if (t166 != 48U) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int32_t x750 = INT32_MIN;
	volatile uint64_t x751 = 149862970989LLU;
	int32_t x752 = INT32_MIN;
	uint64_t t167 = 25339495466LLU;

    t167 = (x749/((x750^x751)-x752));

    if (t167 != 1LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x753 = INT64_MIN;
	uint8_t x754 = 0U;
	volatile int16_t x755 = -6;
	int64_t t168 = -7LL;

    t168 = (x753/((x754^x755)-x756));

    if (t168 != -170803185867681033LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x757 = 6;
	uint32_t x758 = 4U;
	uint32_t x760 = UINT32_MAX;
	uint32_t t169 = 4U;

    t169 = (x757/((x758^x759)-x760));

    if (t169 != 0U) { NG(); } else { ; }
	
}

void f170(void) {
    	static int16_t x761 = -1;
	static volatile uint64_t x762 = 34200316876700LLU;
	volatile int64_t x763 = INT64_MIN;
	int32_t x764 = -672216306;
	uint64_t t170 = 202969088LLU;

    t170 = (x761/((x762^x763)-x764));

    if (t170 != 1LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x765 = 0U;
	static int64_t x766 = 136840556LL;
	int16_t x767 = -10567;
	int32_t x768 = 49;
	int64_t t171 = 484213530LL;

    t171 = (x765/((x766^x767)-x768));

    if (t171 != 0LL) { NG(); } else { ; }
	
}

void f172(void) {
    	static int8_t x769 = 29;
	static uint64_t x770 = 1276864760102099LLU;
	volatile uint64_t t172 = 41LLU;

    t172 = (x769/((x770^x771)-x772));

    if (t172 != 0LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x773 = INT8_MIN;
	static volatile int64_t x775 = 125LL;
	int16_t x776 = INT16_MIN;

    t173 = (x773/((x774^x775)-x776));

    if (t173 != -1LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x777 = 1097;
	int8_t x778 = INT8_MIN;
	uint8_t x779 = 6U;
	static int16_t x780 = INT16_MIN;
	int32_t t174 = 326;

    t174 = (x777/((x778^x779)-x780));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int64_t x785 = 932LL;
	volatile int8_t x786 = INT8_MIN;
	uint8_t x787 = 20U;
	int16_t x788 = 1053;

    t175 = (x785/((x786^x787)-x788));

    if (t175 != 0LL) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x790 = 6769777624717543LLU;
	static int64_t x791 = INT64_MIN;
	int64_t x792 = -1LL;
	volatile uint64_t t176 = 32930458LLU;

    t176 = (x789/((x790^x791)-x792));

    if (t176 != 0LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x793 = INT64_MIN;
	int16_t x794 = 1157;
	uint16_t x796 = 2U;
	int64_t t177 = 2501552722263744LL;

    t177 = (x793/((x794^x795)-x796));

    if (t177 != 7222687577803270LL) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int8_t x797 = 0;
	static int32_t x798 = INT32_MIN;
	volatile int32_t x799 = INT32_MIN;
	int8_t x800 = INT8_MAX;
	static int32_t t178 = 6498196;

    t178 = (x797/((x798^x799)-x800));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint64_t x801 = 11023365987316LLU;
	uint16_t x802 = 0U;
	volatile uint64_t x804 = 6507352878736801LLU;

    t179 = (x801/((x802^x803)-x804));

    if (t179 != 0LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x805 = INT32_MAX;
	uint32_t x806 = 10801440U;
	int8_t x807 = INT8_MIN;
	volatile uint32_t t180 = 23239U;

    t180 = (x805/((x806^x807)-x808));

    if (t180 != 0U) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x809 = INT8_MIN;
	static int16_t x812 = -3018;
	volatile int32_t t181 = 208439;

    t181 = (x809/((x810^x811)-x812));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x813 = INT16_MIN;
	volatile int16_t x815 = -3;
	int32_t x816 = -1;
	int32_t t182 = 3;

    t182 = (x813/((x814^x815)-x816));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x817 = -412LL;
	uint32_t x818 = UINT32_MAX;
	int32_t x819 = INT32_MIN;
	static volatile uint32_t x820 = 40212U;
	volatile int64_t t183 = 1600587387773475LL;

    t183 = (x817/((x818^x819)-x820));

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x821 = -19295275682173750LL;
	uint64_t x822 = 454033581817LLU;
	uint16_t x823 = 48U;
	uint64_t t184 = 16694298LLU;

    t184 = (x821/((x822^x823)-x824));

    if (t184 != 1LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile int8_t x825 = INT8_MAX;
	volatile int16_t x826 = -1;
	uint32_t x827 = 196U;
	volatile uint32_t t185 = 311U;

    t185 = (x825/((x826^x827)-x828));

    if (t185 != 0U) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x829 = INT32_MAX;
	int64_t x830 = -1LL;
	volatile uint64_t x831 = 4873746555LLU;
	int64_t x832 = INT64_MIN;
	volatile uint64_t t186 = 86793115347197LLU;

    t186 = (x829/((x830^x831)-x832));

    if (t186 != 0LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	static int8_t x833 = 1;
	int16_t x834 = -1;
	int16_t x836 = INT16_MAX;

    t187 = (x833/((x834^x835)-x836));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x837 = 14;
	uint16_t x838 = 31589U;
	uint16_t x839 = 127U;
	volatile uint32_t t188 = 1U;

    t188 = (x837/((x838^x839)-x840));

    if (t188 != 0U) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x841 = -13LL;
	int16_t x842 = -1;
	uint32_t x843 = UINT32_MAX;
	int64_t t189 = -1539LL;

    t189 = (x841/((x842^x843)-x844));

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int16_t x846 = INT16_MAX;
	int16_t x847 = -4;
	uint32_t x848 = UINT32_MAX;
	int64_t t190 = -3240LL;

    t190 = (x845/((x846^x847)-x848));

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x849 = 97U;
	int64_t x850 = INT64_MIN;
	int32_t x851 = 621548306;
	volatile uint32_t x852 = 14U;
	volatile int64_t t191 = 77294581242LL;

    t191 = (x849/((x850^x851)-x852));

    if (t191 != 0LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x853 = INT64_MIN;
	uint32_t x854 = UINT32_MAX;
	uint8_t x855 = 20U;
	uint16_t x856 = 7585U;
	static volatile int64_t t192 = 134402LL;

    t192 = (x853/((x854^x855)-x856));

    if (t192 != -2147487451LL) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int64_t x857 = -3498458400787265742LL;
	uint64_t x858 = 7582460878LLU;
	int32_t x859 = INT32_MAX;
	static uint32_t x860 = UINT32_MAX;
	volatile uint64_t t193 = 3777LLU;

    t193 = (x857/((x858^x859)-x860));

    if (t193 != 4738030964LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x865 = -235789;
	uint16_t x866 = 19789U;
	static volatile uint8_t x868 = 79U;

    t194 = (x865/((x866^x867)-x868));

    if (t194 != -11) { NG(); } else { ; }
	
}

void f195(void) {
    	static int8_t x869 = INT8_MIN;
	uint32_t x870 = 63024990U;
	int16_t x872 = INT16_MIN;
	volatile uint32_t t195 = 10877U;

    t195 = (x869/((x870^x871)-x872));

    if (t195 != 1U) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x873 = INT16_MAX;
	int64_t x874 = -64LL;
	static uint16_t x875 = 40U;
	int8_t x876 = INT8_MIN;
	int64_t t196 = 154702703436114LL;

    t196 = (x873/((x874^x875)-x876));

    if (t196 != 315LL) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x877 = 504240663843LLU;
	static uint16_t x879 = 23678U;
	static volatile int16_t x880 = -4;

    t197 = (x877/((x878^x879)-x880));

    if (t197 != 12045595LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x881 = INT32_MIN;
	int32_t x882 = 12200931;
	int16_t x883 = 1001;
	int32_t x884 = -1733;
	int32_t t198 = 1344621;

    t198 = (x881/((x882^x883)-x884));

    if (t198 != -175) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x885 = -1;
	int16_t x886 = -1;
	volatile uint64_t x887 = 267064102LLU;
	int16_t x888 = INT16_MIN;
	volatile uint64_t t199 = 6856201LLU;

    t199 = (x885/((x886^x887)-x888));

    if (t199 != 1LLU) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    f10();
    f11();
    f12();
    f13();
    f14();
    f15();
    f16();
    f17();
    f18();
    f19();
    f20();
    f21();
    f22();
    f23();
    f24();
    f25();
    f26();
    f27();
    f28();
    f29();
    f30();
    f31();
    f32();
    f33();
    f34();
    f35();
    f36();
    f37();
    f38();
    f39();
    f40();
    f41();
    f42();
    f43();
    f44();
    f45();
    f46();
    f47();
    f48();
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();
    f55();
    f56();
    f57();
    f58();
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();
    f97();
    f98();
    f99();
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}

