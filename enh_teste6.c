#include <assert.h>

int main(void) {
  unsigned int w = __VERIFIER_nondet_uint();
  unsigned int x = w;
  unsigned int y = __VERIFIER_nondet_uint();
  unsigned int z = y;
  __VERIFIER_assume(x + y + z <= 2);
  __VERIFIER_assume(w + x -y + z <= 1);
  while (__VERIFIER_nondet_uint()) {
    if (__VERIFIER_nondet_uint()) {
      ++w; ++x;
    } else {
      --y; --z;
    }
    __VERIFIER_assume(x + y + z <= 2);
    __VERIFIER_assume(w + x -y + z <= 1);
  }
  __VERIFIER_assume(-w -x <= 4);
  assert(w == x && y == z);
  return 0;
}
