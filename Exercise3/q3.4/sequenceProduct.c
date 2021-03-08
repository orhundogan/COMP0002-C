// Orhun Dogan
// October 20th 2020
// This program inputs min and max integers and multiplies every integer between min and max

#include <stdio.h>

int multiply(int min, int max){

    int total = 1;

    for(int i = min; i<(max+1); i++){
        total = total * i;
    }

    return total;
}

int main(void){

int min, max;
printf("Enter the minimum number: ");
scanf("%d", &min);

printf("Enter the maximum number: ");
scanf("%d", &max);

printf("Product of numbers between %d and %d is %d! \n", min, max, multiply(min,max));


    return 0;
}
