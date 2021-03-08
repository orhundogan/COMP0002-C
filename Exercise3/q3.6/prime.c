// Orhun Dogan
// October 20th 2020
// This program inputs a long and checks if it is a prime number

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(long n){
    if(n<2L){
        return false;
    }
    if(n==2L){
        return true;
    }
    if((n%2L) == 0){
        return false;
    }

    long divisor = 3L;
    const long limit = sqrt(n);
    while(divisor<=limit){
        if((n%divisor) == 0L){
            return false;
        }
        divisor +=2L;
    }
    return true;
}

int main(void){

    int count = 0;
    // How many 
    for(long i = 2L; i<30L; i++){
        if(isPrime(i)){
            printf("%ld is prime\n", i);
            count++;
        }
    }
    printf("%d primes found \n", count);

    return 0;
}