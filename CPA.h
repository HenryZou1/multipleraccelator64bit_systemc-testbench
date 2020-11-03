// COE838 - Lab1 SystemC Intro
// BarrelShift Unit Tutorial. 
//////////////////////////////////

#ifndef CPA_H   
#define CPA_H

#include <systemc.h>       


                                
SC_MODULE(CPA) {

	sc_in <sc_uint<1> > Ain;
	sc_in <sc_uint<1> > Bin;
	sc_in <sc_uint<1> > Cin;
	sc_out <sc_uint<1> > Cout;
	sc_out <sc_uint<1> > Sout;  

 
	void CPA_method();   
 
        SC_CTOR(CPA) {

        SC_METHOD(CPA_method);
		dont_initialize();

         sensitive << Ain;
         sensitive << Bin;
         sensitive << Cin;


    }

};
#endif 
