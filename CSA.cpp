#include "CSA.h"
void CSA :: CSA_method(){
	
	sc_uint<1>  A;
	sc_uint<1>  B;
	sc_uint<1>  AB;
	A = Ain.read();
	B = Bin.read();
	AB = A & B;

	Sout.write( AB ^(Sin.read() ^ Cin.read()));
	Cout.write((AB & Cin.read())| (Sin.read() & Cin.read()) | (AB & Sin.read()));
   

	
}

