#include <stdio.h>

int main(void){
    long unsigned size =  1001 ;
    long unsigned currSize = 3 ;
    long unsigned total = 1 ;
    long unsigned i = 1 ;
    long unsigned j = 0 ;
    long unsigned currRoot = 1 ;
    for( ; i <= (size-1)/2  ; i++ ){
        currRoot = currRoot + i*8 ;
        printf("current root is %lu\n", currRoot);
        for( ; j < 4 ; j++){
            total += currRoot - j*(currSize -1);
        }
        j = 0 ;
        currSize += 2 ;
    }

    printf("total is %lu\n", total);
    return 0 ;
}
