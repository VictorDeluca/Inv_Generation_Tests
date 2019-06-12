#include <assert.h>

int main() {
    int n = __VERIFIER_nondet_int();
    int m = __VERIFIER_nondet_int();
    int k = 0;
    int i,j;
    if (!(10 <= n && n <= 10000)) return 0;
    if (!(10 <= m && m <= 10000)) return 0;

    __VERIFIER_assume(n + m - k <= 2);
    __VERIFIER_assume(n + m <= 2);
    for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			k++;
			__VERIFIER_assume(n + m - k <= 2);
			__VERIFIER_assume(n + m <= 2);
			__VERIFIER_assume(n + m - i - j <= 2);
		}
		__VERIFIER_assume(n + m - k <= 2);
		__VERIFIER_assume(n + m <= 2);
		__VERIFIER_assume(n + m - k - i - j <= 2);
    }
    __VERIFIER_assume(n - j <= 2);
    __VERIFIER_assert(k >= 100);
    return 0;
}
