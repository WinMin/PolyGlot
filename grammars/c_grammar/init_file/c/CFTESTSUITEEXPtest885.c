
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

uint32_t x1 = UINT32_MAX;
volatile int64_t x4 = INT64_MAX;
uint64_t x7 = UINT64_MAX;
int32_t x15 = INT32_MAX;
static volatile int64_t x16 = INT64_MIN;
volatile int32_t x22 = -1;
static volatile int32_t t6 = 10;
int32_t x29 = INT32_MIN;
int8_t x32 = INT8_MAX;
int16_t x44 = INT16_MIN;
int16_t x51 = INT16_MIN;
volatile int32_t t12 = 12319126;
volatile uint8_t x55 = 6U;
static int16_t x56 = 24;
volatile uint64_t t14 = 2LLU;
int64_t x63 = INT64_MIN;
static int64_t x73 = INT64_MAX;
static volatile int64_t t18 = -1325LL;
int32_t t19 = -311720;
uint16_t x85 = 516U;
int8_t x88 = 20;
int64_t x89 = -1LL;
volatile int32_t x91 = 349597570;
int8_t x93 = -1;
int16_t x94 = INT16_MIN;
int16_t x102 = INT16_MIN;
volatile int8_t x114 = -1;
volatile int8_t x116 = -46;
static volatile int32_t t28 = 91388534;
volatile int32_t t30 = 5083245;
uint32_t x129 = UINT32_MAX;
uint64_t x137 = UINT64_MAX;
static volatile int32_t x138 = -1;
int8_t x140 = INT8_MIN;
static int64_t x142 = INT64_MIN;
uint64_t x143 = UINT64_MAX;
volatile int16_t x147 = INT16_MAX;
int32_t t38 = 823146;
uint32_t x160 = 49U;
static int32_t t39 = 1;
volatile int8_t x164 = -57;
int16_t x165 = 98;
int32_t t41 = -3;
int64_t x172 = -1LL;
volatile int32_t t43 = -436;
volatile int16_t x177 = INT16_MAX;
int64_t x181 = 1LL;
uint8_t x183 = 4U;
volatile uint32_t t46 = 249U;
int64_t x190 = INT64_MIN;
int32_t x194 = 1600;
volatile int8_t x196 = -1;
static volatile int32_t t49 = -71;
uint32_t x201 = 170443290U;
volatile int8_t x206 = INT8_MIN;
static int32_t x219 = INT32_MIN;
uint8_t x222 = 105U;
int16_t x231 = INT16_MIN;
int16_t x236 = INT16_MIN;
static int32_t x239 = INT32_MIN;
int64_t x242 = INT64_MIN;
static int32_t x255 = -1;
static int8_t x260 = 1;
uint8_t x262 = 1U;
int64_t t63 = 5523LL;
static volatile uint64_t x267 = 6046490861824034LLU;
volatile int32_t t64 = -7028;
uint16_t x269 = 2U;
static int32_t x270 = -1;
volatile int32_t x277 = 433;
static int32_t t67 = -3;
int64_t x291 = -1LL;
static int32_t x295 = INT32_MIN;
static int64_t x300 = INT64_MAX;
int32_t x302 = INT32_MIN;
static int16_t x303 = -1;
volatile int16_t x304 = -6;
int32_t t73 = 357486;
uint8_t x309 = 15U;
uint64_t x310 = 64683984067604006LLU;
int64_t x311 = INT64_MIN;
volatile int8_t x314 = -7;
volatile uint32_t x319 = 1641U;
uint16_t x323 = 29U;
volatile int32_t t78 = -5044;
static volatile int16_t x325 = -1;
uint8_t x326 = 0U;
uint64_t x327 = UINT64_MAX;
volatile uint16_t x328 = UINT16_MAX;
volatile int32_t t79 = 1;
static int64_t x335 = INT64_MIN;
volatile int64_t t82 = -17962151620112LL;
volatile uint8_t x346 = 28U;
int32_t t84 = 64625151;
int64_t x360 = INT64_MIN;
int8_t x364 = -1;
static uint8_t x368 = 1U;
static int32_t x371 = INT32_MIN;
static int64_t t90 = -36556362407LL;
volatile int16_t x376 = INT16_MIN;
uint32_t t91 = 87U;
uint16_t x377 = UINT16_MAX;
int32_t x381 = INT32_MIN;
volatile uint16_t x386 = 31U;
static uint32_t x392 = 2U;
static int32_t x397 = -302;
static int32_t x404 = INT32_MAX;
volatile int64_t x421 = INT64_MAX;
int64_t t102 = 413142LL;
uint16_t x426 = 4U;
volatile uint32_t x434 = 1541U;
int16_t x438 = -1;
static int16_t x449 = INT16_MIN;
int8_t x451 = INT8_MAX;
uint16_t x453 = UINT16_MAX;
int16_t x454 = INT16_MAX;
uint32_t t112 = 9052U;
int8_t x466 = -1;
int8_t x469 = INT8_MIN;
volatile int8_t x470 = 1;
uint64_t x483 = 7020386045335LLU;
int16_t x485 = 0;
static uint8_t x488 = UINT8_MAX;
int16_t x491 = INT16_MIN;
volatile int32_t t119 = -956;
volatile int32_t x503 = -13;
int32_t x507 = INT32_MIN;
volatile int32_t t123 = -369927;
uint8_t x513 = 9U;
int64_t x517 = 15489139444256LL;
volatile int16_t x522 = 125;
int16_t x524 = 10095;
volatile int8_t x530 = INT8_MIN;
uint32_t x531 = 4022369U;
int64_t t129 = 21131LL;
volatile int16_t x537 = INT16_MIN;
int8_t x540 = INT8_MAX;
int8_t x541 = INT8_MIN;
int32_t x544 = INT32_MIN;
int32_t t131 = 0;
int32_t t134 = -31203694;
uint8_t x560 = UINT8_MAX;
volatile int32_t x570 = -1;
int16_t x575 = INT16_MIN;
volatile int16_t x579 = -4062;
uint16_t x580 = UINT16_MAX;
volatile int32_t t139 = 87;
uint32_t x589 = 10364784U;
uint16_t x601 = UINT16_MAX;
static int32_t t145 = 14126124;
static int32_t x618 = INT32_MAX;
volatile uint32_t x623 = 431U;
int8_t x631 = INT8_MAX;
uint32_t x638 = 11U;
uint32_t t156 = 107U;
int64_t t160 = 12318342LL;
static volatile int32_t t161 = -5947645;
volatile uint32_t x671 = UINT32_MAX;
volatile uint8_t x672 = 51U;
int8_t x676 = INT8_MIN;
volatile int32_t t166 = -503676;
uint32_t x692 = 1031U;
uint16_t x708 = UINT16_MAX;
int32_t t171 = 1;
int64_t x711 = -1307LL;
int16_t x712 = INT16_MIN;
int8_t x740 = INT8_MIN;
uint8_t x742 = UINT8_MAX;
int64_t x743 = INT64_MIN;
static int16_t x745 = INT16_MAX;
uint16_t x747 = UINT16_MAX;
volatile int32_t t181 = 3096;
uint32_t x753 = 2021U;
static uint16_t x754 = 277U;
int32_t t184 = -11645451;
volatile int64_t x765 = 31627962LL;
static volatile int32_t t189 = 6;
volatile int32_t x783 = INT32_MIN;
uint32_t x789 = UINT32_MAX;
static uint16_t x792 = 16302U;
static volatile int32_t x799 = -9;
int32_t t194 = 30;
int64_t x801 = -25981032819317998LL;
static uint32_t x804 = 1U;
static int16_t x812 = INT16_MIN;
int8_t x814 = -1;
volatile int32_t t198 = 1986;
static int16_t x819 = INT16_MAX;


void f0(void) {
    	uint16_t x2 = 13U;
	int64_t x3 = 7721485701LL;
	volatile uint32_t t0 = 9218U;

    t0 = (x1*((x2%x3)==x4));

    if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = INT8_MAX;
	uint32_t x6 = 1987U;
	static uint32_t x8 = 3U;
	volatile int32_t t1 = 36642;

    t1 = (x5*((x6%x7)==x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MIN;
	static int8_t x10 = -1;
	uint16_t x11 = 7888U;
	int8_t x12 = -1;
	static volatile int32_t t2 = 42417;

    t2 = (x9*((x10%x11)==x12));

    if (t2 != -128) { NG(); } else { ; }
	
}

void f3(void) {
    	static int16_t x13 = -237;
	int16_t x14 = INT16_MAX;
	int32_t t3 = -7;

    t3 = (x13*((x14%x15)==x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = -202187832161861LL;
	int32_t x18 = -1;
	int16_t x19 = -1217;
	uint64_t x20 = UINT64_MAX;
	int64_t t4 = 28573513177807343LL;

    t4 = (x17*((x18%x19)==x20));

    if (t4 != -202187832161861LL) { NG(); } else { ; }
	
}

void f5(void) {
    	static int16_t x21 = -4;
	uint8_t x23 = 88U;
	static int8_t x24 = -1;
	volatile int32_t t5 = -115;

    t5 = (x21*((x22%x23)==x24));

    if (t5 != -4) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = 0;
	int16_t x26 = INT16_MIN;
	static int32_t x27 = -11010;
	volatile int8_t x28 = INT8_MAX;

    t6 = (x25*((x26%x27)==x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint16_t x30 = 14516U;
	int32_t x31 = INT32_MIN;
	static volatile int32_t t7 = -309;

    t7 = (x29*((x30%x31)==x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x33 = 6U;
	volatile int32_t x34 = INT32_MIN;
	static volatile int32_t x35 = INT32_MIN;
	int16_t x36 = -1;
	int32_t t8 = 170;

    t8 = (x33*((x34%x35)==x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int64_t x37 = INT64_MIN;
	static uint64_t x38 = 2605671907453055LLU;
	int64_t x39 = 161550058LL;
	int16_t x40 = -1;
	int64_t t9 = 80640LL;

    t9 = (x37*((x38%x39)==x40));

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = 0;
	static uint64_t x42 = 516686422408LLU;
	volatile uint8_t x43 = 8U;
	int32_t t10 = 3;

    t10 = (x41*((x42%x43)==x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x45 = INT8_MIN;
	volatile int64_t x46 = 343LL;
	uint8_t x47 = 26U;
	uint64_t x48 = UINT64_MAX;
	int32_t t11 = 51;

    t11 = (x45*((x46%x47)==x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static int16_t x49 = -1;
	int64_t x50 = INT64_MIN;
	static int64_t x52 = -1LL;

    t12 = (x49*((x50%x51)==x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint64_t x53 = 473682154207LLU;
	uint32_t x54 = 8U;
	volatile uint64_t t13 = 47779204LLU;

    t13 = (x53*((x54%x55)==x56));

    if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint64_t x57 = 15LLU;
	int32_t x58 = -1;
	volatile int64_t x59 = -160866129830LL;
	uint32_t x60 = UINT32_MAX;

    t14 = (x57*((x58%x59)==x60));

    if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile int16_t x61 = -102;
	uint8_t x62 = 8U;
	int64_t x64 = INT64_MAX;
	volatile int32_t t15 = 702089097;

    t15 = (x61*((x62%x63)==x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = 3;
	static uint16_t x66 = 74U;
	uint32_t x67 = UINT32_MAX;
	int16_t x68 = -15;
	static int32_t t16 = 754813;

    t16 = (x65*((x66%x67)==x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = INT32_MAX;
	uint16_t x70 = 3U;
	uint32_t x71 = 167U;
	int32_t x72 = INT32_MAX;
	static int32_t t17 = -3968450;

    t17 = (x69*((x70%x71)==x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x74 = 1;
	static uint32_t x75 = 7487U;
	int64_t x76 = -3428LL;

    t18 = (x73*((x74%x75)==x76));

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile int32_t x77 = INT32_MIN;
	int16_t x78 = 0;
	uint8_t x79 = 15U;
	int32_t x80 = INT32_MIN;

    t19 = (x77*((x78%x79)==x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x81 = 155764U;
	uint64_t x82 = UINT64_MAX;
	uint32_t x83 = UINT32_MAX;
	static volatile uint8_t x84 = 11U;
	volatile uint32_t t20 = 7936U;

    t20 = (x81*((x82%x83)==x84));

    if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x86 = INT32_MAX;
	static int16_t x87 = INT16_MAX;
	int32_t t21 = -814;

    t21 = (x85*((x86%x87)==x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x90 = -1;
	uint16_t x92 = 83U;
	static volatile int64_t t22 = -16430604728228728LL;

    t22 = (x89*((x90%x91)==x92));

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x95 = INT16_MIN;
	uint64_t x96 = 1274833111604LLU;
	volatile int32_t t23 = 7590;

    t23 = (x93*((x94%x95)==x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static int64_t x97 = 30040710887978LL;
	int64_t x98 = 0LL;
	static int8_t x99 = INT8_MIN;
	int64_t x100 = INT64_MIN;
	static int64_t t24 = -29845147LL;

    t24 = (x97*((x98%x99)==x100));

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int32_t x101 = 2375;
	uint8_t x103 = 2U;
	int32_t x104 = 12032046;
	static volatile int32_t t25 = 1;

    t25 = (x101*((x102%x103)==x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x105 = INT16_MIN;
	uint32_t x106 = UINT32_MAX;
	uint32_t x107 = 1998141U;
	int64_t x108 = -1LL;
	volatile int32_t t26 = 998329013;

    t26 = (x105*((x106%x107)==x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x109 = 1752224;
	uint16_t x110 = UINT16_MAX;
	int16_t x111 = INT16_MAX;
	static int64_t x112 = -1LL;
	int32_t t27 = -140;

    t27 = (x109*((x110%x111)==x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x113 = 94508357;
	uint16_t x115 = 6411U;

    t28 = (x113*((x114%x115)==x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x117 = INT32_MIN;
	static int32_t x118 = 1;
	uint16_t x119 = 6U;
	int64_t x120 = 2579006LL;
	volatile int32_t t29 = -7536796;

    t29 = (x117*((x118%x119)==x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x121 = 1;
	volatile uint32_t x122 = 51141U;
	int32_t x123 = 110118430;
	int16_t x124 = INT16_MIN;

    t30 = (x121*((x122%x123)==x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x125 = 1LL;
	int8_t x126 = -1;
	static volatile int64_t x127 = INT64_MIN;
	static uint8_t x128 = 33U;
	static volatile int64_t t31 = 417LL;

    t31 = (x125*((x126%x127)==x128));

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x130 = 3U;
	uint8_t x131 = UINT8_MAX;
	int16_t x132 = INT16_MIN;
	uint32_t t32 = 197933962U;

    t32 = (x129*((x130%x131)==x132));

    if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x133 = -6;
	int32_t x134 = INT32_MIN;
	static int32_t x135 = INT32_MIN;
	int8_t x136 = INT8_MAX;
	volatile int32_t t33 = -3970;

    t33 = (x133*((x134%x135)==x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x139 = -1;
	static volatile uint64_t t34 = 2629040835496154433LLU;

    t34 = (x137*((x138%x139)==x140));

    if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x141 = INT32_MAX;
	int8_t x144 = -1;
	static volatile int32_t t35 = -128329;

    t35 = (x141*((x142%x143)==x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x145 = 48228520;
	volatile int64_t x146 = INT64_MAX;
	uint32_t x148 = 876536369U;
	volatile int32_t t36 = 193;

    t36 = (x145*((x146%x147)==x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint16_t x149 = 27693U;
	int32_t x150 = -1;
	int32_t x151 = -4;
	volatile int8_t x152 = INT8_MIN;
	int32_t t37 = -819482;

    t37 = (x149*((x150%x151)==x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x153 = UINT8_MAX;
	int8_t x154 = -1;
	int8_t x155 = 1;
	uint32_t x156 = 1908U;

    t38 = (x153*((x154%x155)==x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int32_t x157 = INT32_MIN;
	int64_t x158 = INT64_MIN;
	int8_t x159 = -1;

    t39 = (x157*((x158%x159)==x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x161 = -1;
	static uint32_t x162 = 18U;
	uint8_t x163 = 7U;
	int32_t t40 = -397446878;

    t40 = (x161*((x162%x163)==x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x166 = -751384LL;
	volatile int16_t x167 = -1;
	uint32_t x168 = 106339346U;

    t41 = (x165*((x166%x167)==x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x169 = UINT8_MAX;
	uint64_t x170 = UINT64_MAX;
	static int32_t x171 = 489093;
	int32_t t42 = 41736489;

    t42 = (x169*((x170%x171)==x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x173 = -1;
	int64_t x174 = INT64_MIN;
	int8_t x175 = 2;
	int16_t x176 = 1227;

    t43 = (x173*((x174%x175)==x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x178 = UINT32_MAX;
	static int16_t x179 = -1;
	static uint8_t x180 = 44U;
	volatile int32_t t44 = -11543;

    t44 = (x177*((x178%x179)==x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int64_t x182 = -62462662503879056LL;
	uint8_t x184 = 4U;
	int64_t t45 = 4470257712449355839LL;

    t45 = (x181*((x182%x183)==x184));

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint32_t x185 = 89U;
	static int32_t x186 = 473;
	int64_t x187 = INT64_MIN;
	int32_t x188 = -2106461;

    t46 = (x185*((x186%x187)==x188));

    if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x189 = INT8_MIN;
	int64_t x191 = INT64_MIN;
	static int16_t x192 = INT16_MAX;
	volatile int32_t t47 = -3860838;

    t47 = (x189*((x190%x191)==x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x193 = -3093;
	static volatile uint8_t x195 = UINT8_MAX;
	static volatile int32_t t48 = 7;

    t48 = (x193*((x194%x195)==x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int32_t x197 = INT32_MIN;
	volatile int16_t x198 = INT16_MAX;
	static uint8_t x199 = UINT8_MAX;
	static int32_t x200 = INT32_MAX;

    t49 = (x197*((x198%x199)==x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x202 = -1LL;
	int16_t x203 = INT16_MAX;
	int64_t x204 = 69798261LL;
	static uint32_t t50 = 215U;

    t50 = (x201*((x202%x203)==x204));

    if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x205 = INT32_MIN;
	static uint8_t x207 = 1U;
	int8_t x208 = INT8_MIN;
	int32_t t51 = -64218;

    t51 = (x205*((x206%x207)==x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x209 = UINT32_MAX;
	uint16_t x210 = 10U;
	uint8_t x211 = 1U;
	int32_t x212 = -10894995;
	volatile uint32_t t52 = 58U;

    t52 = (x209*((x210%x211)==x212));

    if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x217 = -342520;
	int16_t x218 = -1;
	static int32_t x220 = INT32_MIN;
	int32_t t53 = 92;

    t53 = (x217*((x218%x219)==x220));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x221 = -1;
	volatile int32_t x223 = -1;
	int8_t x224 = -1;
	static volatile int32_t t54 = -462758530;

    t54 = (x221*((x222%x223)==x224));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static int16_t x225 = -6818;
	int16_t x226 = INT16_MIN;
	int64_t x227 = 680082LL;
	int8_t x228 = -1;
	int32_t t55 = -10846;

    t55 = (x225*((x226%x227)==x228));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x229 = INT8_MAX;
	int16_t x230 = -1;
	int16_t x232 = INT16_MAX;
	int32_t t56 = -1853568;

    t56 = (x229*((x230%x231)==x232));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x233 = 3U;
	int8_t x234 = -1;
	int8_t x235 = -1;
	static int32_t t57 = -43897701;

    t57 = (x233*((x234%x235)==x236));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x237 = UINT16_MAX;
	int64_t x238 = 28082548494949LL;
	int64_t x240 = -5LL;
	int32_t t58 = 1386233;

    t58 = (x237*((x238%x239)==x240));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint16_t x241 = UINT16_MAX;
	uint16_t x243 = 3U;
	int8_t x244 = -1;
	static int32_t t59 = -508893;

    t59 = (x241*((x242%x243)==x244));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x245 = -12046503365LL;
	int32_t x246 = -1;
	volatile int8_t x247 = INT8_MAX;
	int16_t x248 = -1;
	int64_t t60 = -2490882970199641LL;

    t60 = (x245*((x246%x247)==x248));

    if (t60 != -12046503365LL) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint8_t x253 = 61U;
	int8_t x254 = INT8_MAX;
	int64_t x256 = INT64_MAX;
	int32_t t61 = 140467;

    t61 = (x253*((x254%x255)==x256));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x257 = INT32_MIN;
	uint64_t x258 = UINT64_MAX;
	static uint8_t x259 = 80U;
	int32_t t62 = -4;

    t62 = (x257*((x258%x259)==x260));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int64_t x261 = -83LL;
	uint8_t x263 = 1U;
	volatile int64_t x264 = 562623439979894550LL;

    t63 = (x261*((x262%x263)==x264));

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	static int8_t x265 = 1;
	int16_t x266 = -13655;
	uint16_t x268 = 9U;

    t64 = (x265*((x266%x267)==x268));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x271 = UINT32_MAX;
	uint8_t x272 = 58U;
	static int32_t t65 = 173;

    t65 = (x269*((x270%x271)==x272));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x273 = 1U;
	volatile uint8_t x274 = UINT8_MAX;
	uint64_t x275 = UINT64_MAX;
	static int16_t x276 = INT16_MIN;
	static int32_t t66 = 0;

    t66 = (x273*((x274%x275)==x276));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x278 = INT32_MIN;
	int8_t x279 = -1;
	static int64_t x280 = INT64_MIN;

    t67 = (x277*((x278%x279)==x280));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x281 = -4183;
	volatile int32_t x282 = INT32_MAX;
	int16_t x283 = 31;
	volatile int64_t x284 = -7414941964792195LL;
	int32_t t68 = 1;

    t68 = (x281*((x282%x283)==x284));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x285 = 0U;
	int64_t x286 = -1LL;
	int8_t x287 = -1;
	int32_t x288 = INT32_MIN;
	volatile int32_t t69 = 125454285;

    t69 = (x285*((x286%x287)==x288));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint64_t x289 = 1440330LLU;
	volatile uint64_t x290 = UINT64_MAX;
	int32_t x292 = 4160403;
	volatile uint64_t t70 = 42366596194LLU;

    t70 = (x289*((x290%x291)==x292));

    if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint64_t x293 = UINT64_MAX;
	uint32_t x294 = 104423U;
	uint8_t x296 = 1U;
	uint64_t t71 = 180645482532LLU;

    t71 = (x293*((x294%x295)==x296));

    if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x297 = 18556U;
	static int8_t x298 = INT8_MIN;
	uint16_t x299 = 11U;
	int32_t t72 = -10945173;

    t72 = (x297*((x298%x299)==x300));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x301 = 376495987;

    t73 = (x301*((x302%x303)==x304));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x305 = -1;
	uint16_t x306 = 151U;
	int64_t x307 = INT64_MIN;
	static volatile int64_t x308 = INT64_MAX;
	int32_t t74 = -104429202;

    t74 = (x305*((x306%x307)==x308));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x312 = -55;
	static volatile int32_t t75 = -152559621;

    t75 = (x309*((x310%x311)==x312));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile int32_t x313 = INT32_MIN;
	volatile int32_t x315 = INT32_MIN;
	int32_t x316 = -4786;
	volatile int32_t t76 = -1076;

    t76 = (x313*((x314%x315)==x316));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x317 = 13U;
	static volatile uint64_t x318 = 3LLU;
	uint8_t x320 = 4U;
	int32_t t77 = -15286;

    t77 = (x317*((x318%x319)==x320));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x321 = INT16_MAX;
	static int8_t x322 = -1;
	int32_t x324 = INT32_MIN;

    t78 = (x321*((x322%x323)==x324));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    

    t79 = (x325*((x326%x327)==x328));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x329 = 3345587U;
	int8_t x330 = INT8_MIN;
	static int16_t x331 = -1;
	static int64_t x332 = -891250274171LL;
	volatile uint32_t t80 = 1166U;

    t80 = (x329*((x330%x331)==x332));

    if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x333 = INT16_MAX;
	int16_t x334 = -303;
	int32_t x336 = -1;
	int32_t t81 = -3978314;

    t81 = (x333*((x334%x335)==x336));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static int64_t x337 = INT64_MAX;
	int32_t x338 = INT32_MIN;
	uint64_t x339 = 461600222688384LLU;
	uint8_t x340 = 15U;

    t82 = (x337*((x338%x339)==x340));

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint8_t x341 = 91U;
	uint8_t x342 = UINT8_MAX;
	static volatile int8_t x343 = INT8_MIN;
	int8_t x344 = INT8_MIN;
	static volatile int32_t t83 = -1;

    t83 = (x341*((x342%x343)==x344));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int32_t x345 = INT32_MIN;
	int64_t x347 = 507LL;
	int64_t x348 = INT64_MIN;

    t84 = (x345*((x346%x347)==x348));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static int8_t x349 = INT8_MAX;
	int32_t x350 = INT32_MIN;
	int16_t x351 = INT16_MIN;
	int64_t x352 = 5488LL;
	int32_t t85 = -65839383;

    t85 = (x349*((x350%x351)==x352));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x353 = 9U;
	int8_t x354 = INT8_MIN;
	uint8_t x355 = 42U;
	volatile int8_t x356 = 11;
	int32_t t86 = 21;

    t86 = (x353*((x354%x355)==x356));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x357 = INT8_MIN;
	volatile uint8_t x358 = 6U;
	static uint16_t x359 = 13570U;
	int32_t t87 = 731229135;

    t87 = (x357*((x358%x359)==x360));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x361 = UINT16_MAX;
	static int32_t x362 = -2;
	int16_t x363 = 144;
	volatile int32_t t88 = 3741530;

    t88 = (x361*((x362%x363)==x364));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x365 = -11065059;
	uint16_t x366 = 2U;
	volatile uint32_t x367 = 2919U;
	volatile int32_t t89 = -45115373;

    t89 = (x365*((x366%x367)==x368));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile int64_t x369 = 369LL;
	volatile int8_t x370 = INT8_MAX;
	volatile int64_t x372 = INT64_MAX;

    t90 = (x369*((x370%x371)==x372));

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x373 = 14658783U;
	int64_t x374 = INT64_MAX;
	static int32_t x375 = 15825;

    t91 = (x373*((x374%x375)==x376));

    if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x378 = 11709U;
	int64_t x379 = INT64_MIN;
	int64_t x380 = -986203027590590LL;
	int32_t t92 = 546;

    t92 = (x377*((x378%x379)==x380));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x382 = 10911362LL;
	int32_t x383 = INT32_MIN;
	int64_t x384 = INT64_MAX;
	volatile int32_t t93 = -975;

    t93 = (x381*((x382%x383)==x384));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x385 = INT32_MIN;
	volatile int16_t x387 = INT16_MIN;
	int8_t x388 = -1;
	volatile int32_t t94 = 270565;

    t94 = (x385*((x386%x387)==x388));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x389 = INT64_MIN;
	static uint32_t x390 = 579918887U;
	int64_t x391 = INT64_MIN;
	int64_t t95 = -760433169292894LL;

    t95 = (x389*((x390%x391)==x392));

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint64_t x398 = UINT64_MAX;
	int64_t x399 = INT64_MIN;
	static int16_t x400 = INT16_MAX;
	int32_t t96 = 158567;

    t96 = (x397*((x398%x399)==x400));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile uint32_t x401 = UINT32_MAX;
	volatile int64_t x402 = 39777245125263LL;
	int16_t x403 = INT16_MAX;
	uint32_t t97 = 11U;

    t97 = (x401*((x402%x403)==x404));

    if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x405 = 491;
	int64_t x406 = INT64_MIN;
	static int32_t x407 = -249776523;
	static uint16_t x408 = 14163U;
	int32_t t98 = -118216;

    t98 = (x405*((x406%x407)==x408));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static int16_t x409 = INT16_MAX;
	int16_t x410 = 491;
	uint16_t x411 = UINT16_MAX;
	int32_t x412 = -1;
	volatile int32_t t99 = 1;

    t99 = (x409*((x410%x411)==x412));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x413 = 15U;
	int64_t x414 = -59449978803785513LL;
	volatile int32_t x415 = INT32_MAX;
	static int32_t x416 = INT32_MAX;
	int32_t t100 = -183235680;

    t100 = (x413*((x414%x415)==x416));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x417 = 3993117LL;
	uint8_t x418 = UINT8_MAX;
	uint8_t x419 = UINT8_MAX;
	int16_t x420 = -1;
	int64_t t101 = 30714710186524LL;

    t101 = (x417*((x418%x419)==x420));

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x422 = 3U;
	uint8_t x423 = 7U;
	volatile int8_t x424 = -1;

    t102 = (x421*((x422%x423)==x424));

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile int64_t x425 = 47126202234285239LL;
	int16_t x427 = INT16_MAX;
	uint8_t x428 = 9U;
	volatile int64_t t103 = 60678102916667423LL;

    t103 = (x425*((x426%x427)==x428));

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x429 = UINT32_MAX;
	volatile int8_t x430 = INT8_MAX;
	volatile uint32_t x431 = UINT32_MAX;
	int32_t x432 = -347;
	static uint32_t t104 = 1632262390U;

    t104 = (x429*((x430%x431)==x432));

    if (t104 != 0U) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x433 = -7274250702625456LL;
	int16_t x435 = INT16_MIN;
	static int16_t x436 = -1;
	volatile int64_t t105 = 10LL;

    t105 = (x433*((x434%x435)==x436));

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int32_t x437 = -1;
	volatile int8_t x439 = INT8_MIN;
	int16_t x440 = 7628;
	static int32_t t106 = 267;

    t106 = (x437*((x438%x439)==x440));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile int64_t x441 = -1LL;
	int16_t x442 = INT16_MIN;
	uint8_t x443 = 6U;
	uint32_t x444 = UINT32_MAX;
	volatile int64_t t107 = -1458776469320LL;

    t107 = (x441*((x442%x443)==x444));

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int64_t x445 = INT64_MIN;
	int64_t x446 = INT64_MAX;
	volatile uint32_t x447 = UINT32_MAX;
	volatile int8_t x448 = INT8_MAX;
	volatile int64_t t108 = -21043587LL;

    t108 = (x445*((x446%x447)==x448));

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint32_t x450 = 1U;
	volatile int64_t x452 = -376241820108126293LL;
	static volatile int32_t t109 = 1;

    t109 = (x449*((x450%x451)==x452));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x455 = 16U;
	uint8_t x456 = 1U;
	int32_t t110 = -7638;

    t110 = (x453*((x454%x455)==x456));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x457 = -1;
	int64_t x458 = -551LL;
	int64_t x459 = -1980580331287421LL;
	int16_t x460 = INT16_MIN;
	int32_t t111 = 670459771;

    t111 = (x457*((x458%x459)==x460));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x461 = 349371U;
	int64_t x462 = INT64_MIN;
	static int8_t x463 = 13;
	static int32_t x464 = INT32_MIN;

    t112 = (x461*((x462%x463)==x464));

    if (t112 != 0U) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x465 = INT32_MIN;
	int16_t x467 = INT16_MIN;
	int64_t x468 = 62506730265248498LL;
	static volatile int32_t t113 = 5;

    t113 = (x465*((x466%x467)==x468));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x471 = -1LL;
	volatile int16_t x472 = INT16_MIN;
	volatile int32_t t114 = 39240063;

    t114 = (x469*((x470%x471)==x472));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile int8_t x473 = INT8_MIN;
	uint16_t x474 = UINT16_MAX;
	int16_t x475 = -3819;
	uint16_t x476 = UINT16_MAX;
	int32_t t115 = 638954;

    t115 = (x473*((x474%x475)==x476));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int8_t x477 = INT8_MIN;
	int8_t x478 = -1;
	volatile int16_t x479 = -1;
	int16_t x480 = INT16_MIN;
	int32_t t116 = 0;

    t116 = (x477*((x478%x479)==x480));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x481 = 7U;
	uint64_t x482 = UINT64_MAX;
	volatile int8_t x484 = -1;
	volatile int32_t t117 = -11290282;

    t117 = (x481*((x482%x483)==x484));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x486 = INT32_MIN;
	static int32_t x487 = -1;
	int32_t t118 = 1;

    t118 = (x485*((x486%x487)==x488));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x489 = INT32_MIN;
	static int64_t x490 = INT64_MIN;
	volatile int8_t x492 = -20;

    t119 = (x489*((x490%x491)==x492));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x493 = INT8_MAX;
	int8_t x494 = -9;
	uint16_t x495 = 1130U;
	int16_t x496 = INT16_MIN;
	int32_t t120 = 3952414;

    t120 = (x493*((x494%x495)==x496));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint64_t x497 = 11725275418938689LLU;
	uint8_t x498 = 10U;
	int32_t x499 = INT32_MIN;
	uint64_t x500 = 172304456823408060LLU;
	volatile uint64_t t121 = 105468125550LLU;

    t121 = (x497*((x498%x499)==x500));

    if (t121 != 0LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x501 = 17;
	int16_t x502 = 5;
	volatile int8_t x504 = INT8_MIN;
	volatile int32_t t122 = -272317565;

    t122 = (x501*((x502%x503)==x504));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x505 = 2U;
	int8_t x506 = -9;
	static int8_t x508 = 9;

    t123 = (x505*((x506%x507)==x508));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint64_t x509 = 1LLU;
	int8_t x510 = INT8_MIN;
	int8_t x511 = -16;
	volatile uint64_t x512 = UINT64_MAX;
	volatile uint64_t t124 = 7351726950853860LLU;

    t124 = (x509*((x510%x511)==x512));

    if (t124 != 0LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x514 = INT16_MAX;
	int8_t x515 = 52;
	int16_t x516 = 786;
	static volatile int32_t t125 = 25266228;

    t125 = (x513*((x514%x515)==x516));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x518 = INT8_MIN;
	static int32_t x519 = INT32_MAX;
	volatile uint32_t x520 = 9147014U;
	volatile int64_t t126 = 999458553006LL;

    t126 = (x517*((x518%x519)==x520));

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x521 = 1438U;
	static int16_t x523 = -1;
	volatile int32_t t127 = -1838428;

    t127 = (x521*((x522%x523)==x524));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x525 = -1;
	uint64_t x526 = UINT64_MAX;
	int16_t x527 = 57;
	int16_t x528 = INT16_MIN;
	volatile int32_t t128 = -54740448;

    t128 = (x525*((x526%x527)==x528));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x529 = -307832153326LL;
	uint8_t x532 = 1U;

    t129 = (x529*((x530%x531)==x532));

    if (t129 != 0LL) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x538 = UINT32_MAX;
	static volatile int64_t x539 = INT64_MIN;
	volatile int32_t t130 = 0;

    t130 = (x537*((x538%x539)==x540));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint64_t x542 = UINT64_MAX;
	int64_t x543 = INT64_MIN;

    t131 = (x541*((x542%x543)==x544));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x545 = 454314740U;
	static int16_t x546 = INT16_MAX;
	int8_t x547 = 2;
	static uint16_t x548 = 31065U;
	uint32_t t132 = 634657357U;

    t132 = (x545*((x546%x547)==x548));

    if (t132 != 0U) { NG(); } else { ; }
	
}

void f133(void) {
    	static int16_t x549 = 7245;
	static int8_t x550 = -13;
	int64_t x551 = INT64_MIN;
	static uint16_t x552 = 90U;
	volatile int32_t t133 = -1;

    t133 = (x549*((x550%x551)==x552));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x553 = INT32_MAX;
	uint8_t x554 = UINT8_MAX;
	int16_t x555 = -26;
	volatile uint16_t x556 = 15U;

    t134 = (x553*((x554%x555)==x556));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x557 = UINT8_MAX;
	int32_t x558 = INT32_MIN;
	volatile uint32_t x559 = 635422383U;
	int32_t t135 = 412;

    t135 = (x557*((x558%x559)==x560));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x561 = INT32_MAX;
	volatile uint16_t x562 = UINT16_MAX;
	int8_t x563 = INT8_MAX;
	int8_t x564 = -1;
	int32_t t136 = 0;

    t136 = (x561*((x562%x563)==x564));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x569 = 1628;
	int16_t x571 = INT16_MIN;
	volatile int64_t x572 = INT64_MIN;
	int32_t t137 = 11294;

    t137 = (x569*((x570%x571)==x572));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x573 = 843LLU;
	static volatile int64_t x574 = INT64_MAX;
	uint32_t x576 = 461146383U;
	volatile uint64_t t138 = 32055091928224LLU;

    t138 = (x573*((x574%x575)==x576));

    if (t138 != 0LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x577 = 3009U;
	volatile uint8_t x578 = 0U;

    t139 = (x577*((x578%x579)==x580));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x581 = INT32_MAX;
	int32_t x582 = INT32_MIN;
	static int16_t x583 = -60;
	static int16_t x584 = INT16_MAX;
	static volatile int32_t t140 = 39346;

    t140 = (x581*((x582%x583)==x584));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x585 = INT16_MIN;
	static int32_t x586 = INT32_MAX;
	volatile int32_t x587 = INT32_MIN;
	int8_t x588 = -23;
	int32_t t141 = 192636343;

    t141 = (x585*((x586%x587)==x588));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int64_t x590 = 337716LL;
	int64_t x591 = -1LL;
	volatile uint32_t x592 = 5U;
	volatile uint32_t t142 = 70U;

    t142 = (x589*((x590%x591)==x592));

    if (t142 != 0U) { NG(); } else { ; }
	
}

void f143(void) {
    	static int64_t x593 = INT64_MIN;
	static int8_t x594 = INT8_MIN;
	static int8_t x595 = 2;
	uint64_t x596 = 15LLU;
	volatile int64_t t143 = 693205LL;

    t143 = (x593*((x594%x595)==x596));

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x597 = INT8_MIN;
	static uint8_t x598 = 28U;
	volatile int16_t x599 = -1;
	int16_t x600 = INT16_MIN;
	volatile int32_t t144 = 105;

    t144 = (x597*((x598%x599)==x600));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x602 = 14605542048LLU;
	int32_t x603 = 23;
	uint8_t x604 = 7U;

    t145 = (x601*((x602%x603)==x604));

    if (t145 != 65535) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x605 = INT16_MIN;
	int32_t x606 = INT32_MIN;
	uint16_t x607 = 17185U;
	int8_t x608 = INT8_MIN;
	volatile int32_t t146 = -1;

    t146 = (x605*((x606%x607)==x608));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x609 = 0;
	uint64_t x610 = 39769634215LLU;
	volatile uint16_t x611 = UINT16_MAX;
	int32_t x612 = -120;
	int32_t t147 = 977163;

    t147 = (x609*((x610%x611)==x612));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x613 = 70002677;
	uint32_t x614 = 292333170U;
	int64_t x615 = INT64_MAX;
	int32_t x616 = -1;
	volatile int32_t t148 = 844011;

    t148 = (x613*((x614%x615)==x616));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x617 = 8U;
	int64_t x619 = INT64_MAX;
	int8_t x620 = INT8_MIN;
	int32_t t149 = 1;

    t149 = (x617*((x618%x619)==x620));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int64_t x621 = -1LL;
	static int16_t x622 = INT16_MIN;
	static int64_t x624 = INT64_MIN;
	int64_t t150 = -11864418253765LL;

    t150 = (x621*((x622%x623)==x624));

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x625 = 15558628LL;
	int16_t x626 = -1;
	volatile int8_t x627 = -1;
	volatile uint16_t x628 = 23U;
	volatile int64_t t151 = -1968783LL;

    t151 = (x625*((x626%x627)==x628));

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	static int8_t x629 = INT8_MIN;
	volatile int16_t x630 = -1861;
	int64_t x632 = INT64_MIN;
	int32_t t152 = -178364783;

    t152 = (x629*((x630%x631)==x632));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint8_t x633 = UINT8_MAX;
	int64_t x634 = -1LL;
	int64_t x635 = INT64_MIN;
	int32_t x636 = -28528;
	volatile int32_t t153 = -5132;

    t153 = (x633*((x634%x635)==x636));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x637 = 1;
	volatile int8_t x639 = INT8_MIN;
	uint32_t x640 = 1415U;
	volatile int32_t t154 = -212242;

    t154 = (x637*((x638%x639)==x640));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x641 = INT16_MIN;
	int64_t x642 = INT64_MIN;
	int8_t x643 = -1;
	static volatile int16_t x644 = -5940;
	int32_t t155 = -3767662;

    t155 = (x641*((x642%x643)==x644));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint32_t x645 = 2931U;
	int8_t x646 = INT8_MIN;
	int8_t x647 = -1;
	uint64_t x648 = 7139045604517902930LLU;

    t156 = (x645*((x646%x647)==x648));

    if (t156 != 0U) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x649 = 7399;
	uint16_t x650 = UINT16_MAX;
	int8_t x651 = -43;
	static int8_t x652 = INT8_MIN;
	int32_t t157 = 13855755;

    t157 = (x649*((x650%x651)==x652));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile int32_t x653 = 167868;
	static volatile int64_t x654 = 2040965387LL;
	uint64_t x655 = UINT64_MAX;
	uint32_t x656 = 1804U;
	static int32_t t158 = -90;

    t158 = (x653*((x654%x655)==x656));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x657 = INT32_MAX;
	static int32_t x658 = INT32_MIN;
	volatile int8_t x659 = INT8_MIN;
	int8_t x660 = -1;
	int32_t t159 = 650;

    t159 = (x657*((x658%x659)==x660));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x661 = INT64_MIN;
	static uint32_t x662 = 344U;
	static volatile int16_t x663 = -1;
	int32_t x664 = INT32_MIN;

    t160 = (x661*((x662%x663)==x664));

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x665 = UINT8_MAX;
	static uint16_t x666 = UINT16_MAX;
	int64_t x667 = INT64_MIN;
	static uint16_t x668 = 1960U;

    t161 = (x665*((x666%x667)==x668));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static int64_t x669 = INT64_MAX;
	int8_t x670 = -17;
	int64_t t162 = 14LL;

    t162 = (x669*((x670%x671)==x672));

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int64_t x673 = INT64_MIN;
	int8_t x674 = -1;
	int8_t x675 = INT8_MIN;
	volatile int64_t t163 = -1513303374087208LL;

    t163 = (x673*((x674%x675)==x676));

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x677 = 3234459258729LLU;
	int16_t x678 = INT16_MIN;
	uint64_t x679 = UINT64_MAX;
	int32_t x680 = 167549789;
	volatile uint64_t t164 = 272346733796LLU;

    t164 = (x677*((x678%x679)==x680));

    if (t164 != 0LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x681 = 281;
	int16_t x682 = -1;
	volatile int64_t x683 = INT64_MAX;
	uint64_t x684 = 2743026472194399751LLU;
	int32_t t165 = -13;

    t165 = (x681*((x682%x683)==x684));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint8_t x685 = UINT8_MAX;
	int8_t x686 = -1;
	uint64_t x687 = 1756652139390756LLU;
	static volatile uint16_t x688 = 11U;

    t166 = (x685*((x686%x687)==x688));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x689 = INT16_MIN;
	static uint32_t x690 = 6629U;
	static volatile int16_t x691 = INT16_MIN;
	int32_t t167 = -806777;

    t167 = (x689*((x690%x691)==x692));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile int64_t x693 = 1208LL;
	int32_t x694 = INT32_MIN;
	volatile int64_t x695 = INT64_MIN;
	int32_t x696 = INT32_MIN;
	int64_t t168 = -1623704336504LL;

    t168 = (x693*((x694%x695)==x696));

    if (t168 != 1208LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x697 = -3;
	int64_t x698 = INT64_MIN;
	int16_t x699 = INT16_MIN;
	int32_t x700 = -1;
	volatile int32_t t169 = -2;

    t169 = (x697*((x698%x699)==x700));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x701 = 1854LLU;
	volatile int32_t x702 = 3255;
	int8_t x703 = -1;
	int16_t x704 = -1;
	static uint64_t t170 = 4761772217442LLU;

    t170 = (x701*((x702%x703)==x704));

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x705 = -5;
	int8_t x706 = INT8_MIN;
	int32_t x707 = -6363839;

    t171 = (x705*((x706%x707)==x708));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x709 = 334206985U;
	static uint64_t x710 = UINT64_MAX;
	volatile uint32_t t172 = 455U;

    t172 = (x709*((x710%x711)==x712));

    if (t172 != 0U) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int32_t x713 = INT32_MIN;
	int16_t x714 = 142;
	int32_t x715 = 1816285;
	int16_t x716 = 0;
	int32_t t173 = 3;

    t173 = (x713*((x714%x715)==x716));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x717 = INT16_MAX;
	uint16_t x718 = 2U;
	int16_t x719 = INT16_MIN;
	static int8_t x720 = -1;
	volatile int32_t t174 = -5842948;

    t174 = (x717*((x718%x719)==x720));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x721 = INT32_MIN;
	int64_t x722 = INT64_MIN;
	volatile int32_t x723 = -55118;
	uint64_t x724 = 26590LLU;
	volatile int32_t t175 = -420;

    t175 = (x721*((x722%x723)==x724));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint32_t x725 = 13U;
	uint8_t x726 = 7U;
	int32_t x727 = 25746607;
	static volatile uint64_t x728 = 2088883551LLU;
	static uint32_t t176 = 18612321U;

    t176 = (x725*((x726%x727)==x728));

    if (t176 != 0U) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint8_t x729 = 18U;
	int16_t x730 = INT16_MIN;
	int32_t x731 = -1;
	uint32_t x732 = 1U;
	int32_t t177 = 1177;

    t177 = (x729*((x730%x731)==x732));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static int64_t x733 = INT64_MIN;
	static uint64_t x734 = 61521LLU;
	static int8_t x735 = -2;
	int64_t x736 = -1LL;
	static volatile int64_t t178 = 252141725LL;

    t178 = (x733*((x734%x735)==x736));

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x737 = -1;
	uint16_t x738 = 3U;
	int64_t x739 = -66033079175LL;
	int32_t t179 = -241;

    t179 = (x737*((x738%x739)==x740));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x741 = 6;
	static volatile int8_t x744 = INT8_MIN;
	static volatile int32_t t180 = 550391;

    t180 = (x741*((x742%x743)==x744));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x746 = -12;
	volatile int64_t x748 = INT64_MIN;

    t181 = (x745*((x746%x747)==x748));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x749 = INT64_MAX;
	volatile int32_t x750 = 16947160;
	static uint64_t x751 = UINT64_MAX;
	uint8_t x752 = 14U;
	int64_t t182 = -2518220LL;

    t182 = (x749*((x750%x751)==x752));

    if (t182 != 0LL) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x755 = UINT8_MAX;
	int64_t x756 = INT64_MIN;
	uint32_t t183 = 572390U;

    t183 = (x753*((x754%x755)==x756));

    if (t183 != 0U) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile uint8_t x757 = 3U;
	uint64_t x758 = UINT64_MAX;
	uint32_t x759 = 504655U;
	int8_t x760 = -6;

    t184 = (x757*((x758%x759)==x760));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int64_t x761 = INT64_MIN;
	int8_t x762 = -2;
	static int32_t x763 = -1;
	int32_t x764 = -1;
	int64_t t185 = 239970172485LL;

    t185 = (x761*((x762%x763)==x764));

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x766 = UINT64_MAX;
	volatile int16_t x767 = -1;
	uint64_t x768 = 12865513174574410LLU;
	static volatile int64_t t186 = 28587LL;

    t186 = (x765*((x766%x767)==x768));

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x769 = INT8_MIN;
	int64_t x770 = -1LL;
	int8_t x771 = INT8_MIN;
	int8_t x772 = INT8_MIN;
	volatile int32_t t187 = -94162801;

    t187 = (x769*((x770%x771)==x772));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x773 = 123U;
	volatile int64_t x774 = INT64_MAX;
	uint32_t x775 = UINT32_MAX;
	int16_t x776 = -3834;
	static volatile int32_t t188 = 1337979;

    t188 = (x773*((x774%x775)==x776));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x777 = 21;
	uint32_t x778 = UINT32_MAX;
	int32_t x779 = INT32_MIN;
	static volatile int32_t x780 = INT32_MIN;

    t189 = (x777*((x778%x779)==x780));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x781 = -65886234310186LL;
	uint64_t x782 = 7181782LLU;
	int64_t x784 = INT64_MIN;
	volatile int64_t t190 = -1344384053898828LL;

    t190 = (x781*((x782%x783)==x784));

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint8_t x785 = 58U;
	volatile int32_t x786 = 22;
	static int16_t x787 = -1;
	volatile int16_t x788 = INT16_MIN;
	static int32_t t191 = 2;

    t191 = (x785*((x786%x787)==x788));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x790 = -1;
	int32_t x791 = INT32_MAX;
	uint32_t t192 = 993988151U;

    t192 = (x789*((x790%x791)==x792));

    if (t192 != 0U) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x793 = 2464;
	uint16_t x794 = 20742U;
	int32_t x795 = INT32_MIN;
	static uint64_t x796 = 16134918579LLU;
	int32_t t193 = 664122;

    t193 = (x793*((x794%x795)==x796));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x797 = INT8_MIN;
	static int8_t x798 = INT8_MIN;
	int16_t x800 = -1;

    t194 = (x797*((x798%x799)==x800));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x802 = -1;
	int32_t x803 = 1;
	int64_t t195 = -413403LL;

    t195 = (x801*((x802%x803)==x804));

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	static int8_t x805 = 4;
	int16_t x806 = -1;
	uint8_t x807 = 1U;
	uint64_t x808 = UINT64_MAX;
	static volatile int32_t t196 = 720;

    t196 = (x805*((x806%x807)==x808));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x809 = INT32_MIN;
	int64_t x810 = -2LL;
	int8_t x811 = 2;
	int32_t t197 = -58921266;

    t197 = (x809*((x810%x811)==x812));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x813 = 15;
	volatile int32_t x815 = -1;
	static int8_t x816 = 55;

    t198 = (x813*((x814%x815)==x816));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x817 = INT32_MIN;
	uint8_t x818 = UINT8_MAX;
	volatile uint16_t x820 = 3843U;
	int32_t t199 = 672336;

    t199 = (x817*((x818%x819)==x820));

    if (t199 != 0) { NG(); } else { ; }
	
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

