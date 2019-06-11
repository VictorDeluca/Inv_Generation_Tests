#include <assert.h>

int main()
{
    unsigned int n = __VERIFIER_nondet_uint();
    unsigned int x=n, y=0;

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
    

    int klim_inf = 10;
    int klim_sup = 10;

    int d_1 = __VERIFIER_nondet_int();       
    __VERIFIER_assume(d_1 >= klim_inf && d_1 <= klim_sup); 
    int d_2 = __VERIFIER_nondet_int(); 
    __VERIFIER_assume(d_2 >= klim_inf && d_2 <= klim_sup); 
    int d_3 = __VERIFIER_nondet_int();       
    __VERIFIER_assume(d_3 >= klim_inf && d_3 <= klim_sup); 


    assert( !(x>0) && !(c_01*x0 + c_11*x + c_21*y + c_31*n <= d_1) );

    assert( !(x>0) && !(c_01*x0 + c_11*x + c_21*y + c_31*n <= d_1) && !(c_02*x0 + c_12*x + c_22*y + c_32*n <= d_2) );

    assert( !(x<=0) && !(c_03*x0 + c_13*x + c_23*y + c_33*n <= d_3) );



}