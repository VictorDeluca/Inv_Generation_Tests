#include <assert.h>

int main(void) {
  unsigned int x = 0;
  while (__VERIFIER_nondet_int()) {
	__VERIFIER_assume(-x <= 0);
    x += 2;
  }
  __VERIFIER_assume(-x <= 0);
  
  assert(!(x % 2));
  return 0;
}
