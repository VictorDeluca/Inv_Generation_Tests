#include <assert.h>

int main(void) {
	unsigned int w = __VERIFIER_nondet_uint();
	unsigned int x = w;
	unsigned int y = __VERIFIER_nondet_uint();
	unsigned int z = y;
	__VERIFIER_assume(-y + z <= 0);
	__VERIFIER_assume(y - z <= 0);
	__VERIFIER_assume(-w + x <= 0);
	__VERIFIER_assume(w - x <= 0);
	__VERIFIER_assume(-x + y - z <= 4);
	__VERIFIER_assume(w - x + z <= 2);
	while (__VERIFIER_nondet_uint()) {
		__VERIFIER_assume(-y + z <= 0);
		__VERIFIER_assume(y - z <= 0);
		__VERIFIER_assume(-w + x <= 0);
		__VERIFIER_assume(w - x <= 0);
		__VERIFIER_assume(-x + y - z <= 4);
		__VERIFIER_assume(w - x + z <= 2);
		if (__VERIFIER_nondet_uint()) {
			__VERIFIER_assume(-y + z <= 0);
			__VERIFIER_assume(y - z <= 0);
			__VERIFIER_assume(-w + x <= 0);
			__VERIFIER_assume(w - x <= 0);
			__VERIFIER_assume(-x + y - z <= 4);
			__VERIFIER_assume(w - x + z <= 2);
			++w; ++x;
		} else {
			__VERIFIER_assume(-y + z <= 0);
			__VERIFIER_assume(y - z <= 0);
			__VERIFIER_assume(-w + x <= 0);
			__VERIFIER_assume(w - x <= 0);
			__VERIFIER_assume(-x + y - z <= 4);
			__VERIFIER_assume(w - x + z <= 2);
			--y; --z;
		}
	}
	__VERIFIER_assume(-y + z <= 0);
	__VERIFIER_assume(y - z <= 0);
	__VERIFIER_assume(-w + x <= 0);
	__VERIFIER_assume(w - x <= 0);
	__VERIFIER_assume(y <= 1);
	assert(w == x && y == z);
	return 0;
}
