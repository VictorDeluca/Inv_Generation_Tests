#include <assert.h>

int main()
{
    int x = 0, y = 0;
    
    
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
    __VERIFIER_assume(d_1 >= 1 && d_1 <= 20);       
    int d_2 = __VERIFIER_nondet_int();  
    __VERIFIER_assume(d_2 >= 1 && d_2 <= 20);  
    int d_3 = __VERIFIER_nondet_int();
    __VERIFIER_assume(d_3 >= 1 && d_3 <= 20);        

__VERIFIER_assume(-x <= 0);
__VERIFIER_assume(-y <= 0);
__VERIFIER_assume(-x + y <= 0);
    assert(!(y >= 0) && !(c_01*x0 + c_11*x + c_21*y <= d_1));
    //__VERIFIER_assume( -i + -t + -p <= -2);

__VERIFIER_assume(-x <= 0);
__VERIFIER_assume(-y <= 0);
__VERIFIER_assume(-y + 1 <= 0);
__VERIFIER_assume(-y - 1 <= 0);
__VERIFIER_assume(-x + y <= 0);
    assert(!(y >= 0) && !(c_01*x0 + c_11*x + c_21*y <= d_2) && !(c_02*x0 + c_12*x + c_22*y <= d_2));
    //__VERIFIER_assume(-i + -t + -p <= -1);
__VERIFIER_assume(-x <= 0);
__VERIFIER_assume(-y <= 0);
__VERIFIER_assume(-y + 1 <= 0);
__VERIFIER_assume(-y - 1 <= 0);
__VERIFIER_assume(-x + y <= 0);
    assert(!(y < 0) && !(c_03*x0 + c_13*x + c_23*y <= d_3));
    //__VERIFIER_assume(-i + -t + -p <= -1);

    
}
