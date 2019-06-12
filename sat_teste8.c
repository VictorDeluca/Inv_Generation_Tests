#include <assert.h>

int main()
{
	int n = __VERIFIER_nondet_int(), m = __VERIFIER_nondet_int();
	int k = 0, i = 0, j = 0;


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
	int c_04 = __VERIFIER_nondet_int();       
	__VERIFIER_assume(c_04 >= -1 && c_04 <= 1);
	int c_05 = __VERIFIER_nondet_int();       
	__VERIFIER_assume(c_05 >= -1 && c_05 <= 1);
	int c_11 = __VERIFIER_nondet_int();       
	__VERIFIER_assume(c_11 >= -1 && c_11 <= 1);
	int c_12 = __VERIFIER_nondet_int();
	__VERIFIER_assume(c_12 >= -1 && c_12 <= 1);       
	int c_13 = __VERIFIER_nondet_int();
	__VERIFIER_assume(c_13 >= -1 && c_13 <= 1);  
	int c_14 = __VERIFIER_nondet_int();
	__VERIFIER_assume(c_14 >= -1 && c_14 <= 1);  
	int c_15 = __VERIFIER_nondet_int();
	__VERIFIER_assume(c_15 >= -1 && c_15 <= 1);       
	int c_21 = __VERIFIER_nondet_int(); 
	__VERIFIER_assume(c_21 >= -1 && c_21 <= 1);      
	int c_22 = __VERIFIER_nondet_int();
	__VERIFIER_assume(c_22 >= -1 && c_22 <= 1);       
	int c_23 = __VERIFIER_nondet_int();       
	__VERIFIER_assume(c_23 >= -1 && c_23 <= 1);
	int c_24 = __VERIFIER_nondet_int();       
	__VERIFIER_assume(c_24 >= -1 && c_24 <= 1);
	int c_25 = __VERIFIER_nondet_int();       
	__VERIFIER_assume(c_25 >= -1 && c_25 <= 1);
	int c_31 = __VERIFIER_nondet_int(); 
	__VERIFIER_assume(c_31 >= -1 && c_31 <= 1);      
	int c_32 = __VERIFIER_nondet_int();
	__VERIFIER_assume(c_32 >= -1 && c_32 <= 1);       
	int c_33 = __VERIFIER_nondet_int();       
	__VERIFIER_assume(c_33 >= -1 && c_33 <= 1);
	int c_34 = __VERIFIER_nondet_int();       
	__VERIFIER_assume(c_34 >= -1 && c_34 <= 1);
	int c_35 = __VERIFIER_nondet_int();       
	__VERIFIER_assume(c_35 >= -1 && c_35 <= 1);
	int c_41 = __VERIFIER_nondet_int(); 
	__VERIFIER_assume(c_41 >= -1 && c_41 <= 1);      
	int c_42 = __VERIFIER_nondet_int();
	__VERIFIER_assume(c_42 >= -1 && c_42 <= 1);       
	int c_43 = __VERIFIER_nondet_int();       
	__VERIFIER_assume(c_43 >= -1 && c_43 <= 1);
	int c_44 = __VERIFIER_nondet_int();       
	__VERIFIER_assume(c_44 >= -1 && c_44 <= 1);
	int c_45 = __VERIFIER_nondet_int();       
	__VERIFIER_assume(c_45 >= -1 && c_45 <= 1);
	int c_51 = __VERIFIER_nondet_int(); 
	__VERIFIER_assume(c_51 >= -1 && c_51 <= 1);      
	int c_52 = __VERIFIER_nondet_int();
	__VERIFIER_assume(c_52 >= -1 && c_51 <= 1);       
	int c_53 = __VERIFIER_nondet_int();       
	__VERIFIER_assume(c_53 >= -1 && c_53 <= 1);
	int c_54 = __VERIFIER_nondet_int();       
	__VERIFIER_assume(c_54 >= -1 && c_54 <= 1);
	int c_55 = __VERIFIER_nondet_int();       
	__VERIFIER_assume(c_55 >= -1 && c_55 <= 1);



	int d_1 = __VERIFIER_nondet_int();
	__VERIFIER_assume(d_1 >= 1 && d_1 <= 5);       
	int d_2 = __VERIFIER_nondet_int();  
	__VERIFIER_assume(d_2 >= 1 && d_2 <= 5);  
	int d_3 = __VERIFIER_nondet_int();
	__VERIFIER_assume(d_3 >= 1 && d_3 <= 5); 
	int d_4 = __VERIFIER_nondet_int();
	__VERIFIER_assume(d_4 >= 1 && d_4 <= 5); 
	int d_5 = __VERIFIER_nondet_int();
	__VERIFIER_assume(d_5 >= 1 && d_5 <= 5);        

	assert(!(i - x0 < n) && !(c_01*x0 + c_11*n + c_21*m + c_31*k + c_41*i + c_51*j <= d_1));
	//L1
	assert(!(i - x0 < n) && !(c_01*x0 + c_11*n + c_21*m + c_31*k + c_41*i + c_51*j <= d_1) && !(c_02*x0 + c_12*n + c_22*m + c_32*k + c_42*i + c_52*j <= d_2));
	//L2
	assert(!(i - x0 < n) && !(j - x0 < m) && !(c_01*x0 + c_11*n + c_21*m + c_31*k + c_41*i + c_51*j <= d_1) && !(c_02*x0 + c_12*n + c_22*m + c_32*k + c_42*i + c_52*j <= d_2) && !(c_03*x0 + c_13*n + c_23*m + c_33*k + c_43*i + c_53*j <= d_3));
	//L3
	assert(!(i - x0 < n) && !(j - x0 >= m) && !(c_01*x0 + c_11*n + c_21*m + c_31*k + c_41*i + c_51*j <= d_1) && !(c_04*x0 + c_14*n + c_24*m + c_34*k + c_44*i + c_54*j <= d_4));
	//L4
	assert(!(i - x0 >= n) && !(j - x0 >= m) && !(c_05*x0 + c_15*n + c_25*m + c_35*k + c_45*i + c_55*j <= d_5));
	//L5

}
