#include <assert.h>

int main(void) {
  unsigned int x = 0;
  while (__VERIFIER_nondet_int()) {
    x += 2;
  }
  __VERIFIER_assert(!(x % 2));
  return 0;
}
