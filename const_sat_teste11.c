#include <assert.h>

int main()
{
	  int idBitLength, material_length, nlen;
	  int j = 0;

	  nlen = __VERIFIER_nondet_int();
	  idBitLength = __VERIFIER_nondet_int();
	  material_length = __VERIFIER_nondet_int();


	unsigned long x0 = 0; //artificial variable for difference systems
	// transform bound inequalities into difference inequalities by adding 
	// x0 with the appropriate sign


	// Vars template    
	int c_01 = __VERIFIER_nondet_int();       
	__VERIFIER_assume(c_01 >= -1 && c_01 <= 1);
	int c_02 = __VERIFIER_nondet_int();       
	__VERIFIER_assume(c_02 >= -1 && c_02 <= 1);
	int c_03 = __VERIFIER_nondet_int();       
	__VERIFIER_assume(c_03 >= -1 && c_03 <= 1);
	int c_11 = __VERIFIER_nondet_int();       
	__VERIFIER_assume(c_11 >= -1 && c_11 <= 1);
	int c_12 = __VERIFIER_nondet_int();
	__VERIFIER_assume(c_12 >= -1 && c_12 <= 1);       
	int c_13 = __VERIFIER_nondet_int();
	__VERIFIER_assume(c_13 >= -1 && c_13 <= 1);       
	int c_21 = __VERIFIER_nondet_int(); 
	__VERIFIER_assume(c_21 >= -1 && c_21 <= 1);      
	int c_22 = __VERIFIER_nondet_int();
	__VERIFIER_assume(c_22 >= -1 && c_22 <= 1);       
	int c_23 = __VERIFIER_nondet_int();       
	__VERIFIER_assume(c_23 >= -1 && c_23 <= 1);
	int c_31 = __VERIFIER_nondet_int(); 
	__VERIFIER_assume(c_31 >= -1 && c_31 <= 1);      
	int c_32 = __VERIFIER_nondet_int();
	__VERIFIER_assume(c_32 >= -1 && c_32 <= 1);       
	int c_33 = __VERIFIER_nondet_int();       
	__VERIFIER_assume(c_33 >= -1 && c_33 <= 1);
	int c_41 = __VERIFIER_nondet_int(); 
	__VERIFIER_assume(c_41 >= -1 && c_41 <= 1);      
	int c_42 = __VERIFIER_nondet_int();
	__VERIFIER_assume(c_42 >= -1 && c_42 <= 1);       
	int c_43 = __VERIFIER_nondet_int();       
	__VERIFIER_assume(c_43 >= -1 && c_43 <= 1);



	int d_1 = __VERIFIER_nondet_int();
	__VERIFIER_assume(d_1 >= 1 && d_1 <= 5);       
	int d_2 = __VERIFIER_nondet_int();  
	__VERIFIER_assume(d_2 >= 1 && d_2 <= 5);  
	int d_3 = __VERIFIER_nondet_int();
	__VERIFIER_assume(d_3 >= 1 && d_3 <= 5);        

	__VERIFIER_assume(nlen == idBitLength/32);
	assert(!((j + x0 < idBitLength / 8) && (j + x0 < material_length)) && !(c_01*x0 + c_11*idBitLength + c_21*material_length + c_31*nlen + c_41*j <= d_1));
	//L1

	__VERIFIER_assume(-material_length <= 0);
	__VERIFIER_assume(-j <= 0);
	__VERIFIER_assume(-j/4 <= 0);
	__VERIFIER_assume(nlen == idBitLength/32);
	__VERIFIER_assume((j < idBitLength / 8) && (j < material_length));
	__VERIFIER_assume(-material_length + j <= -1);
	assert(!((j + x0 < idBitLength / 8) && (j + x0 < material_length)) && !(c_01*x0 + c_11*idBitLength + c_21*material_length + c_31*nlen + c_41*j <= d_1) && !(c_02*x0 + c_12*idBitLength + c_22*material_length + c_32*nlen + c_42*j <= d_2));
	//L2

	assert(((j + x0 < idBitLength / 8) && (j + x0 < material_length)) && !(c_03*x0 + c_13*idBitLength + c_23*material_length + c_33*nlen + c_43*j <= d_3));
	//L3


}
