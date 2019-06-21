#include <assert.h>

int main(){
	int i=0, n=__VERIFIER_nondet_int();
	__VERIFIER_assume(-i + n <= 4);
	__VERIFIER_assume(n <= 2);
	while(i < n){
		i++;
		__VERIFIER_assume(-i + n <= 4);
		__VERIFIER_assume(n <= 2);
	}
	assume(n <= 2);
	assert(i>=n);

	return 0;
}
