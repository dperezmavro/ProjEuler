#include <stdio.h>
#include <stdlib.h>

double compute_coefficient(int n , int k);
int fact(int a);
int compute_prime_factors(double a);

int main(int argc, char *argv[] ){
    
    if(argc != 3 || atoi(argv[1]) > atoi(argv[2]) ){
        printf("Usage  : prog k n, with k <= n \n");
        return 1 ;
    }
    
    int k = atoi(argv[1]);
    int n = atoi(argv[2]);
    
    /*gcd(&n, &k);*/
    double res = compute_coefficient(n,k);
    
    printf("Binomial coefficient of (%d,%d) is %.0f \n", n,k,res);
    return 0;
}

double compute_coefficient(int n , int k){
    double res = 0 ;
    if (n == 0 ){
        res =  0 ;
    }else if (k == 0 ){
       res = 1 ;
    }else{    
        res = n*compute_coefficient(n-1,k-1) / k;
    }
    
    printf("Binomial coefficient of (%d,%d) is %.0f \n", n,k,res);
    return res ;
}

int fact(int a){
    if( a < 0 ){
        printf("Factorial only coputer for a >= 0 , given %d\n",a);
        exit(1);
    }else if( a == 0 ){
        return 1;
    }else{
        int i = 1 ;
        int res = 1 ;
        for(; i < a+1 ; i++){
            res = res*i ;
        }

        return res ;
    }
}

int compute_prime_factors(double a){
    
    double primes[10] = {3,5,7,11,13,17,19,23,29,31};
    int res[8]; /*store the result here*/
    int i = 0 ;/*index of primes array*/
    int pos = 0 ; /*position in result array */
    double b = 1; /*temp variable*/

    for(;i < 10 ; i++){

    }
    return 0 ;
}
