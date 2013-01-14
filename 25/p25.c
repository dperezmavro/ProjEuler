#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <gmp.h>

int main(void){
	long double a = 1 ;
	long double b = 1 ;
	long double next = 2;
	int count = 2;
	long double limit = pow(10,999);

	while (next < limit ){
		next = a + b ;
		a = b ;
		b = next ;
		count++;
	}

	printf("The first 1000-digit Fibonacci number is %d \n",count);
	return 0 ;
}
