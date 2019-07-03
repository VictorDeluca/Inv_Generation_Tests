int main() {
	int idBitLength, material_length, nlen;
	int j, k;

	nlen = __VERIFIER_nondet_int();
	idBitLength = __VERIFIER_nondet_int();
	material_length = __VERIFIER_nondet_int();
	if (!( nlen  ==  idBitLength / 32 )) return 0;

	__VERIFIER_assume(nlen == idBitLength/32);
	for (j = 0; (j < idBitLength / 8) && (j < material_length); j++) {
		assert( 0 <= j);
		__VERIFIER_assume(-j <= 0);
		__VERIFIER_assume(nlen == idBitLength/32);
		__VERIFIER_assume((j < idBitLength / 8) && (j < material_length));
		assert( j < material_length );
		__VERIFIER_assume(-material_length <= 0);
		__VERIFIER_assume(-j <= 0);
		__VERIFIER_assume(nlen == idBitLength/32);
		__VERIFIER_assume((j < idBitLength / 8) && (j < material_length));
		__VERIFIER_assume(-material_length + j <= -1);
		assert( 0 <= j/4 );
		__VERIFIER_assume(-material_length <= 0);
		__VERIFIER_assume(-j <= 0);
		__VERIFIER_assume(-j/4 <= 0);
		__VERIFIER_assume(nlen == idBitLength/32);
		__VERIFIER_assume((j < idBitLength / 8) && (j < material_length));
		__VERIFIER_assume(-material_length + j <= -1);
	}
	return 0;
}
