#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void compute_sieve(double *arr, int sz);
int compute_prime_factors(long double a,int s );

int main(int argc , char *argv[]){
	int a ;
	if (argc != 2 || (a = atoi(argv[1])) <= 2){
		printf("Please give a number > 2 to calculate all primes before that..\n");
	}
	double primes[a];
	compute_sieve(primes,a);
	return 0;
}

void compute_sieve(double *arr, int max){
	int i ;
	int j = 0 ;
	int primes = 0 ;

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

int compute_prime_factors(long double a,int sz){
    
    double primes[sz];
    compute_sieve(primes,sz);
    int res[sz]; /*store the result here*/
    int i ;/*index of primes array*/
    int pos = 0 ; /*position in result array */

    for( i = 2 ;i < sz ; i++){ 
        if(primes[i] > 0 ){
            while(fmod(a,primes[i]) == 0 ){
                a = a / primes[i];
                pos++;
            }
            res[i] = pos ;
            pos = 0 ;
            if(res[i] > 0 ){
                printf("You need %d %.0f(s)\n",res[i],primes[i] );
            }
        }
    }
    return 0 ;
}