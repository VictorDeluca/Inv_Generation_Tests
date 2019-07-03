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
	while (__VERIFIER_nondet_uint()) {
		__VERIFIER_assume(-y + z <= 0);
		__VERIFIER_assume(y - z <= 0);
		__VERIFIER_assume(-w + x <= 0);
		__VERIFIER_assume(w - x <= 0);
		if (__VERIFIER_nondet_uint()) {
			__VERIFIER_assume(-y + z <= 0);
			__VERIFIER_assume(y - z <= 0);
			__VERIFIER_assume(-w + x <= 0);
			__VERIFIER_assume(w - x <= 0);
			++w; ++x;
		} else {
			__VERIFIER_assume(-y + z <= 0);
			__VERIFIER_assume(y - z <= 0);
			__VERIFIER_assume(-w + x <= 0);
			__VERIFIER_assume(w - x <= 0);
			--y; --z;
		}
	}
	__VERIFIER_assume(-y + z <= 0);
	__VERIFIER_assume(y - z <= 0);
	__VERIFIER_assume(-w + x <= 0);
	__VERIFIER_assume(w - x <= 0);
	assert(w == x && y == z);
	return 0;
}
