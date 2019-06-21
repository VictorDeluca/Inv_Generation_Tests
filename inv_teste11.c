int main() {
  int idBitLength, material_length, nlen;
  int j, k;

  nlen = __VERIFIER_nondet_int();
  idBitLength = __VERIFIER_nondet_int();
  material_length = __VERIFIER_nondet_int();
    if (!( nlen  ==  idBitLength / 32 )) return 0;
  
  __VERIFIER_assume(material_length + nlen - j <= 2);
  __VERIFIER_assume(nlen <= 4 && idBitLength + material_length <= 2);
  for (j = 0; (j < idBitLength / 8) && (j < material_length); j++) {
    assert( 0 <= j);
    assert( j < material_length );
    assert( 0 <= j/4 );
    assert( j/4 < nlen);
    __VERIFIER_assume(material_length + nlen - j <= 2);
    __VERIFIER_assume(nlen <= 4 && idBitLength + material_length <= 2);
  }
  __VERIFIER_assume(idBitLength + material_length <= 2);  

  return 0;
}
