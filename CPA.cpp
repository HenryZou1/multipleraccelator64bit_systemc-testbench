#include "CPA.h"
void CPA :: CPA_method(){
	
	sc_uint<1>  A;
	sc_uint<1>  B;

	A = Ain.read();
	B = Bin.read();

	Sout.write( A ^(B ^ Cin.read()));
	Cout.write((A & Cin.read())| (B & Cin.read()) | (A & B));

	
}
