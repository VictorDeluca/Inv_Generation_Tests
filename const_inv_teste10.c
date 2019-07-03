#include <assert.h>

int main(void) {
  unsigned int x = 0;
	__VERIFIER_assume(x <= 1);
	while (__VERIFIER_nondet_int()) {
		__VERIFIER_assume(-x <= 0);
		__VERIFIER_assume(x <= 1);
		x += 2;
	}
	__VERIFIER_assume(-x <= 0);
	__VERIFIER_assume(x <= 1);
  
	assert(!(x % 2));
	return 0;
}
