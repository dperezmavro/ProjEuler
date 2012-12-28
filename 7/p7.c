#include <stdio.h>
#include <stdlib.h>

void compute_sieve( int sz);

int main(int argc , char *argv[]){
	int a ;
	if (argc != 2 || (a = atoi(argv[1])) <= 2){
		printf("Please give a number > 2 to calculate all primes before that..\n");
	}
	compute_sieve(a);
	return 0;
}


void compute_sieve( int max){
	int i ;
	int j = 0 ;
	int primes = 0 ;
	double arr[max];

	for (i = 2 ; i < max ; i++){
		arr[i] = i ;
	}

	for (i = 2 ; i < max ; i++){
		if (arr[i] > 0){
			printf("Found prime %.0f, #%d\n", arr[i], ++primes);
			if(primes == 10001){
				exit(0);
			}
			j = i ;
			while ((j)*arr[i] <=  max){
				arr[i*(j)] = -1 ;
				j++;
			}
		}
	}
}