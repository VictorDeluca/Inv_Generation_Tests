#include <assert.h>

int main() {
  int x=0;

  __VERIFIER_assume(-x <= 3);
  while(1)
  {
    __VERIFIER_assert(x==0);   
    __VERIFIER_assume(-x <= 3); 
  }
  __VERIFIER_assume(-x <= 3);
  assert(x!=0);
}
