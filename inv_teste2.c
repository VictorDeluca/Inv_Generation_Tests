int main(void) {
	unsigned int x = 0;

	__VERIFIER_assume(x <= 2);
	while (x < 100000000) {
		if (x < 10000000) {
			x++;
		} else {
			x += 2;
		}
		__VERIFIER_assume(x <= 2);
	}
	__VERIFIER_assume(x <= 2);
	assert(x == 100000000) ;
}
