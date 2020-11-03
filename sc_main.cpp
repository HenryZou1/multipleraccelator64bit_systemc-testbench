

#include <systemc.h>

     
#include "CSA.h"
#include "CPA.h" 


int sc_main(int argc, char* argv[]){
	sc_trace_file *tf; 
	sc_signal <sc_uint<1> > a0, a1, a2, a3, a4, a5, a6,a7;
	sc_signal <sc_uint<1> > b0, b1, b2, b3, b4, b5, b6,b7;

	sc_signal <sc_uint<1> > p0, p1, p2, p3, p4, p5, p6,p7,p8,p9,p10,p11,p12,p13,p14,p15;
	sc_signal  <sc_uint<1> > zero;
	sc_clock clk("clk",10,SC_NS,0.5);   //Create a clock signal
	zero.write(0);
	//first row of adder
	sc_signal <sc_uint<1> > s0, s1, s2, s3, s4, s5, s6,s7;
	sc_signal <sc_uint<1> > c0, c1, c2, c3, c4, c5, c6,c7;
	CSA *adder0, *adder1, *adder2, *adder3, *adder4, *adder5, *adder6, *adder7;
	adder0 = new CSA ("s0");
	adder1 = new CSA ("s1");
	adder2 = new CSA ("s2");
	adder3 = new CSA ("s3");
	adder4 = new CSA ("s4");
	adder5 = new CSA ("s5");
	adder6 = new CSA ("s6");
	adder7 = new CSA ("s7");
	(*adder0) (a0, b0, zero, zero,c0,p0);
	(*adder1) (a1, b0, zero, zero,c1,s1 );
	(*adder2) (a2, b0, zero, zero,c2,s2 );
	(*adder3) (a3, b0, zero, zero,c3,s3);
	(*adder4) (a4, b0, zero, zero,c4,s4 );
	(*adder5) (a5, b0, zero, zero,c5,s5 );
	(*adder6) (a6, b0, zero, zero,c6,s6);
	(*adder7) (a7, b0, zero, zero,c7,s7 );
	//second row of adder
	sc_signal <sc_uint<1> >  s8, s9, s10, s11, s12, s13,s14,s15;
	sc_signal <sc_uint<1> >  c8, c9, c10, c11, c12, c13,c14,c15;
	CSA  *adder8, *adder9, *adder10, *adder11, *adder12, *adder13, *adder14,*adder15;
	adder8 = new CSA ("s8");
	adder9 = new CSA ("s9");
	adder10 = new CSA ("s10");
	adder11 = new CSA ("s11");
	adder12 = new CSA ("s12");
	adder13 = new CSA ("s13");
	adder14 = new CSA ("s14");
	adder15 = new CSA ("s15");
	
	(*adder8) (a0, b1, c0, s1,c8,p1 );
	(*adder9) (a1, b1, c1, s2,c9,s9 );
	(*adder10) (a2, b1, c2, s3,c10,s10);
	(*adder11) (a3, b1, c3, s4,c11,s11 );
	(*adder12) (a4, b1, c4, s5,c12,s12 );
	(*adder13) (a5, b1, c5, s6,c13,s13);
	(*adder14) (a6, b1, c6, s7,c14,s14 );
	(*adder15) (a7, b1, c7, zero,c15,s15 );
	//third row of adder
	sc_signal <sc_uint<1> >  s16, s17, s18, s19, s20, s21,s22,s23;
	sc_signal <sc_uint<1> >  c16, c17, c18, c19, c20, c21,c22,c23;
	CSA  *adder16, *adder17, *adder18, *adder19, *adder20, *adder21, *adder22,*adder23;
	adder16 = new CSA ("s16");
	adder17 = new CSA ("s17");
	adder18 = new CSA ("s18");
	adder19 = new CSA ("s19");
	adder20 = new CSA ("s20");
	adder21 = new CSA ("s21");
	adder22 = new CSA ("s22");
	adder23 = new CSA ("s23");
	
	(*adder16) (a0, b2, c8, s9,c16,p2 );
	(*adder17) (a1, b2, c9, s10,c17,s17 );
	(*adder18) (a2, b2, c10, s11,c18,s18);
	(*adder19) (a3, b2, c11, s12,c19,s19 );
	(*adder20) (a4, b2, c12, s13,c20,s20 );
	(*adder21) (a5, b2, c13, s14,c21,s21);
	(*adder22) (a6, b2, c14, s15,c22,s22 );
	(*adder23) (a7, b2, c15, zero,c23,s23 );
	//fouth row of adder
	sc_signal <sc_uint<1> >  s24, s25, s26, s27, s28, s29,s30,s31;
	sc_signal <sc_uint<1> >  c24, c25, c26, c27, c28, c29,c30,c31;
	CSA  *adder24, *adder25, *adder26, *adder27, *adder28, *adder29, *adder30,*adder31;
	adder24 = new CSA ("s24");
	adder25 = new CSA ("s25");
	adder26 = new CSA ("s26");
	adder27 = new CSA ("s27");
	adder28 = new CSA ("s28");
	adder29 = new CSA ("s29");
	adder30 = new CSA ("s30");
	adder31 = new CSA ("s31");
	
	(*adder24) (a0, b3, c16, s17,c24,p3 );
	(*adder25) (a1, b3, c17, s18,c25,s25 );
	(*adder26) (a2, b3, c18, s19,c26,s26);
	(*adder27) (a3, b3, c19, s20,c27,s27 );
	(*adder28) (a4, b3, c20, s21,c28,s28 );
	(*adder29) (a5, b3, c21, s22,c29,s29);
	(*adder30) (a6, b3, c22, s23,c30,s30 );
	(*adder31) (a7, b3, c23, zero,c31,s31 );
	//fifth row of adder
	sc_signal <sc_uint<1> >  s32, s33, s34, s35, s36, s37,s38,s39;
	sc_signal <sc_uint<1> >  c32, c33, c34, c35, c36, c37,c38,c39;
	CSA  *adder32, *adder33, *adder34, *adder35, *adder36, *adder37, *adder38,*adder39;
	adder32 = new CSA ("s32");
	adder33 = new CSA ("s33");
	adder34 = new CSA ("s34");
	adder35 = new CSA ("s35");
	adder36 = new CSA ("s36");
	adder37 = new CSA ("s37");
	adder38 = new CSA ("s38");
	adder39 = new CSA ("s39");
	
	(*adder32) (a0, b4, c24, s25,c32,p4 );
	(*adder33) (a1, b4, c25, s26,c33,s33 );
	(*adder34) (a2, b4, c26, s27,c34,s34);
	(*adder35) (a3, b4, c27, s28,c35,s35 );
	(*adder36) (a4, b4, c28, s29,c36,s36 );
	(*adder37) (a5, b4, c29, s30,c37,s37);
	(*adder38) (a6, b4, c30, s31,c38,s38 );
	(*adder39) (a7, b4, c31, zero,c39,s39 );
	//sixth row of adder
	sc_signal <sc_uint<1> >  s40, s41, s42, s43, s44, s45,s46,s47;
	sc_signal <sc_uint<1> >  c40, c41, c42, c43, c44, c45,c46,c47;
	CSA  *adder40, *adder41, *adder42, *adder43, *adder44, *adder45, *adder46,*adder47;
	adder40 = new CSA ("s40");
	adder41 = new CSA ("s41");
	adder42 = new CSA ("s42");
	adder43 = new CSA ("s43");
	adder44 = new CSA ("s44");
	adder45 = new CSA ("s45");
	adder46 = new CSA ("s46");
	adder47 = new CSA ("s47");
	
	(*adder40) (a0, b5, c32, s33,c40,p5 );
	(*adder41) (a1, b5, c33, s34,c41,s41 );
	(*adder42) (a2, b5, c34, s35,c42,s42);
	(*adder43) (a3, b5, c35, s36,c43,s43 );
	(*adder44) (a4, b5, c36, s37,c44,s44 );
	(*adder45) (a5, b5, c37, s38,c45,s45);
	(*adder46) (a6, b5, c38, s39,c46,s46 );
	(*adder47) (a7, b5, c39, zero,c47,s47 );
	//7th row of adder
	sc_signal <sc_uint<1> >  s48, s49, s50, s51, s52, s53,s54,s55;
	sc_signal <sc_uint<1> >  c48, c49, c50, c51, c52, c53,c54,c55;
	CSA  *adder48, *adder49, *adder50, *adder51, *adder52, *adder53, *adder54,*adder55;
	adder48 = new CSA ("s48");
	adder49 = new CSA ("s49");
	adder50 = new CSA ("s50");
	adder51 = new CSA ("s51");
	adder52 = new CSA ("s52");
	adder53 = new CSA ("s53");
	adder54 = new CSA ("s54");
	adder55 = new CSA ("s55");
	
	(*adder48) (a0, b6, c40, s41,c48,p6 );
	(*adder49) (a1, b6, c41, s42,c49,s49 );
	(*adder50) (a2, b6, c42, s43,c50,s50);
	(*adder51) (a3, b6, c43, s44,c51,s51 );
	(*adder52) (a4, b6, c44, s45,c52,s52 );
	(*adder53) (a5, b6, c45, s46,c53,s53);
	(*adder54) (a6, b6, c46, s47,c54,s54 );
	(*adder55) (a7, b6, c47, zero,c55,s55 );
	//8th row of adder
	sc_signal <sc_uint<1> >  s56, s57, s58, s59, s60, s61,s62,s63;
	sc_signal <sc_uint<1> >  c56, c57, c58, c59, c60, c61,c62,c63;
	CSA  *adder56, *adder57, *adder58, *adder59, *adder60, *adder61, *adder62,*adder63;
	adder56 = new CSA ("s56");
	adder57 = new CSA ("s57");
	adder58 = new CSA ("s58");
	adder59 = new CSA ("s59");
	adder60 = new CSA ("s60");
	adder61 = new CSA ("s61");
	adder62 = new CSA ("s62");
	adder63 = new CSA ("s63");
	
	(*adder56) (a0, b7, c48, s49,c56,p7 );
	(*adder57) (a1, b7, c49, s50,c57,s57 );
	(*adder58) (a2, b7, c50, s51,c58,s58);
	(*adder59) (a3, b7, c51, s52,c59,s59 );
	(*adder60) (a4, b7, c52, s53,c60,s60 );
	(*adder61) (a5, b7, c53, s54,c61,s61);
	(*adder62) (a6, b7, c54, s55,c62,s62 );
	(*adder63) (a7, b7, c55, zero,c63,s63 );

	//9th row of adder
	sc_signal <sc_uint<1> >  c64, c65, c66, c67, c68, c69,c70,c71;
	CPA  *adder64, *adder65, *adder66, *adder67, *adder68, *adder69, *adder70,*adder71;
	adder64 = new CPA ("s64");
	adder65 = new CPA ("s65");
	adder66 = new CPA ("s66");
	adder67 = new CPA ("s67");
	adder68 = new CPA ("s68");
	adder69 = new CPA ("s69");
	adder70 = new CPA ("s70");
	adder71 = new CPA ("s71");
	
	(*adder64) (s57, c56 ,zero,c64,p8 );
	(*adder65) (s58, c57 ,c64, c65,p9 );
	(*adder66) (s59, c58, c65,c66, p10);
	(*adder67) (s60, c59, c66,c67, p11 );
	(*adder68) (s61, c60, c67,c68, p12 );
	(*adder69) (s62, c61, c68,c69, p13);
	(*adder70) (s63, c62, c69,c70, p14);
	(*adder71) (zero, c63, c70,c71, p15 );
	

	// Create wave file and trace the signals executing
	tf = sc_create_vcd_trace_file("trace_file");
    tf->set_time_unit(1, SC_NS);
	
	sc_trace(tf, a0, "a0");
	sc_trace(tf, a1, "a1");
	sc_trace(tf, a2, "a2");
	sc_trace(tf, a3, "a3");
	sc_trace(tf, a4, "a4");
	sc_trace(tf, a5, "a5");
	sc_trace(tf, a6, "a6");
	sc_trace(tf, a7, "a7");

	sc_trace(tf, b0, "b0");
	sc_trace(tf, b1, "b1");
	sc_trace(tf, b2, "b2");
	sc_trace(tf, b3, "b3");
	sc_trace(tf, b4, "b4");
	sc_trace(tf, b5, "b5");
	sc_trace(tf, b6, "b6");
	sc_trace(tf, b7, "b7");

	sc_trace(tf, p0, "p0");
	sc_trace(tf, p1, "p1");
	sc_trace(tf, p2, "p2");
	sc_trace(tf, p3, "p3");
	sc_trace(tf, p4, "p4");
	sc_trace(tf, p5, "p5");
	sc_trace(tf, p6, "p6");
	sc_trace(tf, p7, "p7");

	sc_trace(tf, p8, "p8");
	sc_trace(tf, p9, "p9");
	sc_trace(tf, p10, "p10");
	sc_trace(tf, p11, "p11");
	sc_trace(tf, p12, "p12");
	sc_trace(tf, p13, "p13");
	sc_trace(tf, p14, "p14");
	sc_trace(tf, p15, "p15");
	
	a0.write(1);
	a1.write(0);
	a2.write(0);
	a3.write(0);
	a4.write(0);
	a5.write(0);
	a6.write(0);
	a7.write(0);
	b0.write(1);
	b1.write(1);
	b2.write(0);
	b3.write(0);
	b4.write(0);
	b5.write(0);
	b6.write(0);
	b7.write(0);	
	cout <<"a "<<a7<<a6<<a5<<a4<<a3<< a2<< a1<< a0 <<"\n";
	cout <<"b "<<b7<<b6<<b5<<b4<<b3<< b2<< b1<< b0 <<"\n";
	cout <<"p "<<p15<<p14<<p13<<p12<<p11<< p10<< p9<<p8<<p7<<p6<<p5<<p4<<p3<< p2<< p1<<p0 <<"\n";
	sc_start(10, SC_NS);

	a0.write(1);
	a1.write(1);
	a2.write(1);
	a3.write(1);
	a4.write(1);
	a5.write(1);
	a6.write(1);
	a7.write(1);
	b0.write(1);
	b1.write(1);
	b2.write(1);
	b3.write(1);
	b4.write(1);
	b5.write(1);
	b6.write(1);
	b7.write(1);

	cout <<"a "<<a7<<a6<<a5<<a4<<a3<< a2<< a1<< a0 <<"\n";
	cout <<"b "<<b7<<b6<<b5<<b4<<b3<< b2<< b1<< b0 <<"\n";
	cout <<"p "<<p15<<p14<<p13<<p12<<p11<< p10<< p9<<p8<<p7<<p6<<p5<<p4<<p3<< p2<< p1<<p0 <<"\n";
	sc_start(10, SC_NS);	
	a0.write(1);
	a1.write(1);
	a2.write(1);
	a3.write(1);
	a4.write(0);
	a5.write(0);
	a6.write(0);
	a7.write(0);
	b0.write(1);
	b1.write(1);
	b2.write(1);
	b3.write(1);
	b4.write(0);
	b5.write(0);
	b6.write(0);
	b7.write(0);

	cout <<"a "<<a7<<a6<<a5<<a4<<a3<< a2<< a1<< a0 <<"\n";
	cout <<"b "<<b7<<b6<<b5<<b4<<b3<< b2<< b1<< b0 <<"\n";
	cout <<"p "<<p15<<p14<<p13<<p12<<p11<< p10<< p9<<p8<<p7<<p6<<p5<<p4<<p3<< p2<< p1<<p0 <<"\n";
	sc_start(10, SC_NS);
	a0.write(1);
	a1.write(1);
	a2.write(1);
	a3.write(1);
	a4.write(0);
	a5.write(0);
	a6.write(0);
	a7.write(0);
	b0.write(1);
	b1.write(1);
	b2.write(1);
	b3.write(1);
	b4.write(0);
	b5.write(0);
	b6.write(0);
	b7.write(0);

	cout <<"a "<<a7<<a6<<a5<<a4<<a3<< a2<< a1<< a0 <<"\n";
	cout <<"b "<<b7<<b6<<b5<<b4<<b3<< b2<< b1<< b0 <<"\n";
	cout <<"p "<<p15<<p14<<p13<<p12<<p11<< p10<< p9<<p8<<p7<<p6<<p5<<p4<<p3<< p2<< p1<<p0 <<"\n";
	sc_start(10, SC_NS);
	

	sc_close_vcd_trace_file(tf);


	return 0;                         
}
