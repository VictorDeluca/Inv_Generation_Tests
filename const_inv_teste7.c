#include <assert.h>

int main() {
    int i = 0;
    int n = 0;
    int k = __VERIFIER_nondet_int();
    if (!(k <= 1000000 && k >= -1000000)) return 0;
	
	__VERIFIER_assume(k <= 1000000 && k >= -1000000);
	__VERIFIER_assume(-n <= 0);
	__VERIFIER_assume(-i <= 0);
	__VERIFIER_assume(n-i <= 0);
	__VERIFIER_assume(-n + k <= 2);
	__VERIFIER_assume(-n <= 4);
    for(i = 0; i < 2*k; i++) {
		if (i % 2 == 0) {
			n ++;
		}
		__VERIFIER_assume(k <= 1000000 && k >= -1000000);
		__VERIFIER_assume(-n <= 0);
		__VERIFIER_assume(-i <= 0);
		__VERIFIER_assume(n-i <= -1);
		__VERIFIER_assume(-2*k <= -1);
		__VERIFIER_assume(-2*k + i <= -1);
		__VERIFIER_assume(-2*k + n <= -1);
		__VERIFIER_assume(-n + k <= 2);
		__VERIFIER_assume(-n <= 4);
    }
	__VERIFIER_assume(k <= 1000000 && k >= -1000000);
	__VERIFIER_assume(-n <= 0);
	__VERIFIER_assume(-i <= 0);
	__VERIFIER_assume(2*k - i <= 0);
	__VERIFIER_assume(-i - k <= 1);
    assert(k < 0 || n == k);
    return 0;
}
