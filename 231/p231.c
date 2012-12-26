#include <stdio.h>
#include <math.h>
#include <stdlib.h>

long double compute_coefficient(int n , int k);
int compute_prime_factors(double a);
double getgcd(double n, double k);

int main(int argc, char *argv[] ){

    if(argc != 3 || atoi(argv[1]) > atoi(argv[2]) ){
        printf("Usage  : prog k n, with k <= n \n");
        return 1 ;
    }
    
    int k = atoi(argv[1]);
    int n = atoi(argv[2]);
    
    /*gcd(&n, &k);*/
    long double res = compute_coefficient(n,k);
    
    printf("Binomial coefficient of (%d,%d) is %.0llf \n", n,k,res);
    return 0;
}

long double compute_coefficient(int n , int k){
     long double res = 0 ;
    if (n == 0 ){
        res =  0 ;
    }else if (k == 0 ){
       res = 1 ;
    }else{    
        double gcd = getgcd(n,k);
        res = (n*gcd)*compute_coefficient(n-1,k-1) / (k*gcd);
    }
    
/*    printf("Binomial coefficient of (%d,%d) is %.0llf \n", n,k,res);*/
    return res ;
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

double getgcd(double a , double b){
    double res = fmod(a,b);
    if( res == 0 ){
        return b ;
    }else{
        return getgcd(b, fmod(a,b));
    }
}
