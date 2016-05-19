// sudoankit 19/05/2016
// C++ Implementation of Modular Exponentiation;
// Source : Wikipedia.

long modular_pow(long base,long exponent, const long modulus){
	
	long long compute;
	
	if(modulus == 1) 	
		return 0;

	for(long evry_prime = 1; evry_prime < exponent ; evry_prime++)
		compute = (compute * base) % modulus;


	return compute;

}