#include <stdio.h>
#include <stdlib.h>

/*
I think this solves it. Get all Fibos up to the limit, ensure that both are bellow the limit, and if fib%2==0, they are even, so add them to the sum
*/

int main(void){

	int n1 = 1 ;
	int n2 = 2 ;
	int sum = 2 ;	
	int limit =  4000000 ;

	while(n1 < limit && n2 < limit){
	
		n1 = n1 + n2 ;
		n2 = n1 + n2 ; 
		
		if ( n1%2 == 0 && n1 < limit ) {
			sum += n1 ;
		}
		if ( n2%2 == 0 && n2 < limit ) {
			sum += n2 ;
		}
		
		printf("n1: %i , n2: %i \n", n1 , n2);
	}
	
	printf("The sum is : %i  \n", sum);

	return 0 ;
}
