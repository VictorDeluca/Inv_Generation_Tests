#include <assert.h>

int main() {
    int n, sum, i;
    n = __VERIFIER_nondet_int();
    if (!(1 <= n && n <= 1000)) return 0;
    sum = 0;
	__VERIFIER_assume(1 <= n && n <= 1000);
	__VERIFIER_assume(-sum <= 0);
	__VERIFIER_assume(-i <= -1);
	__VERIFIER_assume(-sum + i <= 0);
	__VERIFIER_assume(-i + n - sum <= 2);
    for(i = 1; i <= n; i++) {
        sum = sum + i;
		__VERIFIER_assume(1 <= n && n <= 1000);
		__VERIFIER_assume(-sum <= 0);
		__VERIFIER_assume(-i <= -1);
		__VERIFIER_assum(-n <= -1);
		__VERIFIER_assume(-n + i <= 0);
		__VERIFIER_assume(-sum + i <= 1);
		__VERIFIER_assume(-i + n - sum <= 2);
    }
	__VERIFIER_assume(1 <= n && n <= 1000);
	__VERIFIER_assume(-sum <= 0);
	__VERIFIER_assume(-i <= -1);
	__VERIFIER_assum(-n <= -1);
	__VERIFIER_assume(n - sum <= 0);
	__VERIFIER_assume(n - i <= -1);
	__VERIFIER_assume(-sum + i <= 1);
	__VERIFIER_assume(i - sum <= 8);
    assert(2*sum == n*(n+1));
    return 0;
}
