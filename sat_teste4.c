#include <assert.h>

int main()
{
    unsigned int n = __VERIFIER_nondet_int(), i = 0;
    
    
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
    


    int d_1 = __VERIFIER_nondet_int();
    __VERIFIER_assume(d_1 >= 1 && d_1 <= 5);       
    int d_2 = __VERIFIER_nondet_int();  
    __VERIFIER_assume(d_2 >= 1 && d_2 <= 5);  
    int d_3 = __VERIFIER_nondet_int();
    __VERIFIER_assume(d_3 >= 1 && d_3 <= 5);        

    assert((i-x0 < n) && !(c_01*x0 + c_11*i + c_21*n <= d_1));
    //__VERIFIER_assume( -i + -t + -p <= -2);

    assert((i-x0 < n) && !(c_01*x0 + c_11*i + c_21*n <= d_1) && !(c_02*x0 + c_12*i + c_22*n <= d_2));
    //__VERIFIER_assume(-i + -t + -p <= -1);

    assert((i-x0 >= n) && !(c_03*x0 + c_13*i + c_23*n <= d_3));
    //__VERIFIER_assume(-i + -t + -p <= -1);

    
}
