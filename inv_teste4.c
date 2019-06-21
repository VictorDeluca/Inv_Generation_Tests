#include <assert.h>

int main(){
	int i, n=__VERIFIER_nondet_int();
	__VERIFIER_assume(-i + n <= 4);
	__VERIFIER_assume(n <= 2);
	for(i=0;i<n;i+=2){
		__VERIFIER_assume(-i + n <= 4);
		__VERIFIER_assume(n <= 2);
	}
	__VERIFIER_assume(n <= 2);
	assert(i>=n);

	return 0;
}
