#include <stdio.h>
#include <math.h>
#include <p4.h>

void generatePalindromes(int *arr);
factors FermatFact(int N);

int main(void){
	factors ff ;
	int palindromes[899];
	generatePalindromes(palindromes);
	int b ;
	for (b = 899 ; b >= 0 ; b--){
		printf("Running for %d , b %d...\n", palindromes[b],b);
		
		ff = FermatFact(palindromes[b]);
		
		if(ff.a > 100 && ff.a < 1000 && ff.b > 100 && ff.b < 1000){
			printf("\t Found palindrome with 3-digit factors, it is %d, factors (%d,%d) \n", palindromes[b], ff.a,ff.b);
			break;
		}
	}

	return 0 ;
}

void generatePalindromes( int *arr){
	int a ; 
	int b ;
	int c;
	int palindrome = 0 ;
	for (a = 9 ; a > 0 ; a--){
		for (b = 9 ; b >= 0 ; b--){
			for (c = 9 ; c >= 0 ;c--){
				palindrome = a*(1+(int) pow(10,5))+b*(10+(int) pow(10,4))+c*((int) pow(10,2) + (int) pow(10,3));
				arr[a*100+b*10+c - 100] = palindrome;
			}
		}
	}
}

factors FermatFact(int N){
	factors ff ;
	double a = ceil(sqrt(N));
	double b = a*a-N ;

	while (sqrt(b) - ceil(sqrt(b)) != 0 ){
		a = a + 1 ;
		b = a*a -N ;
	}

	ff.a = (int) a ; 
	ff.b = (int) b ; 
	return ff;
}
