int main(void) {
  unsigned int x = 0;

  __VERIFIER_assume(-x <= 0);
  while (x < 100000000) {
    if (x < 10000000) {
      x++;
    } else {
      x += 2;
    }
  __VERIFIER_assume(-x <= 0);
  }
  __VERIFIER_assume(-x <= 0);
  assert(x == 100000000) ;
}
