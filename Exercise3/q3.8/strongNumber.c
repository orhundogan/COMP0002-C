// Orhun Dogan
// October 22nd 2020
// This program displays power numbers in a range

#include <stdio.h>
#include <math.h>
#include <limits.h>

int factorial(int n){
    if(n<1){
        return 1;
    } else{
        return n * factorial(n-1);
    }
}

int factorialSum(int n){
    int sum = 0;
    while(n!=0){
        int digit = n%10;
        n=n/10;
        sum+= factorial(digit);
    }
    return sum;
}

void findStrongNumbers(int limit){
    for(int x = 1; x<limit; x++){
        if(factorialSum(x) == x){
            printf("%d is a strong number\n", x);
        }
    }
}

int main(void){
    findStrongNumbers(INT_MAX);
    return 0;
}