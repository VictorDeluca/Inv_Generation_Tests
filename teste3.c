#include <assert.h>
int main(){
	int i=0, n=__VERIFIER_nondet_int();
	while(i < n){
		i++;
	}
	assert(i>=n);

	return 0;
}
