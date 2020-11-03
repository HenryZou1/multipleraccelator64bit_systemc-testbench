// COE838 - Lab1 SystemC Intro
// BarrelShift Unit Tutorial. 
//////////////////////////////////

#ifndef CSA_H   
#define CSA_H

#include <systemc.h>       


                                
SC_MODULE(CSA) {

	sc_in <sc_uint<1> > Ain;
	sc_in <sc_uint<1> > Bin;
	sc_in <sc_uint<1> > Cin;
	sc_in <sc_uint<1> > Sin;
	sc_out <sc_uint<1> > Cout;
	sc_out <sc_uint<1> > Sout;  

 
	void CSA_method();   
 
        SC_CTOR(CSA) {

        SC_METHOD(CSA_method);
		dont_initialize();

         sensitive << Ain;
         sensitive << Bin;
         sensitive << Cin;
         sensitive << Sin;

    }

};
#endif 
