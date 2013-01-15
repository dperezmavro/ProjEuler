#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <gmp.h>

int main(void){
	mpz_t a  ;
	mpz_init_set_d(a,1);
	mpz_t b  ;
	mpz_init_set_d(b,2);
	mpz_t next ;
	mpz_init_set_d(next,0);

	int count = 2;
	mpz_t limit ;
	mpz_init(limit);
	mpz_init_set_d(next,2);
	mpz_ui_pow_ui(limit,10,999);

	while (mpz_cmp(next,limit) <= 0 ){//limit ){
	/*
		next = a + b ;
		a = b ;
		b = next ;
		count++;
	*/
	}

	printf("The first 1000-digit Fibonacci number is %d \n",count);
	return 0 ;
}
