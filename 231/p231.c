#include <stdio.h>
#include <math.h>
#include <stdlib.h>

long double compute_coefficient(int n , int k);
int compute_prime_factors(long double a);
double getgcd(double n, double k);
int* compute_sieve(int *arr, int sz);

int main(int argc, char *argv[] ){

    if(argc != 4 || atoi(argv[1]) > atoi(argv[2]) ){
        printf("Usage  : prog k n sieve_size, with k <= n \n");
        return 1 ;
    }
    
    int k = atoi(argv[1]);
    int n = atoi(argv[2]);
    int s = atoi(argv[3]);
    
    printf("Given n:%d, k:%d and sieve_size:%d\n",n,k,s);

    int sieve[s];
    compute_sieve(sieve,s );
    long double res = compute_coefficient(n,k);
    
    printf("Binomial coefficient of (%d,%d) is %.0llf \n", n,k,res);
    /*printf("%.0llf",res);*/
    compute_prime_factors(res);

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

int compute_prime_factors(long double a){
    
    double primes[10] = {2,3,5,7,11,13,17,19,23,29};
    int res[10]; /*store the result here*/
    int i ;/*index of primes array*/
    int pos = 0 ; /*position in result array */

    for( i = 0 ;i < 10 ; i++){
        
        while(fmod(a,primes[i]) == 0 ){
            a = a / primes[i];
            pos++;
        }
        res[i] = pos ;
        pos = 0 ;
        printf("You need %d %.0fs\n",res[i],primes[i] );
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

int* compute_sieve(int *arr, int max){
    int i ;
    int nums[max] ;
    for (i = 2 ; i < max ; i++){
        arr[i] = i ;
        nums[i] = i;
    }
    
    for (i = 2 ; i < max ; i++){
        if (nums[i] > 0){
            printf("Found prime %d\n", nums[i]);
            int j = i ;
            while ((j)*nums[i] <=  max){
                nums[nums[i]*(j)] = -1 ;
                j++;
            }
        }
    }
    

}

