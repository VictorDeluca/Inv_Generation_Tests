#include <assert.h>

int main(void) {
  unsigned int w = __VERIFIER_nondet_uint();
  unsigned int x = w;
  unsigned int y = __VERIFIER_nondet_uint();
  unsigned int z = y;
  __VERIFIER_assume(-x + y - z <= 4);
  __VERIFIER_assume(w - x + z <= 2);
  while (__VERIFIER_nondet_uint()) {
    if (__VERIFIER_nondet_uint()) {
      ++w; ++x;
    } else {
      --y; --z;
    }
    __VERIFIER_assume(-x + y - z <= 4);
    __VERIFIER_assume(w - x + z <= 2);
  }
  __VERIFIER_assume(y <= 1);
  assert(w == x && y == z);
  return 0;
}
