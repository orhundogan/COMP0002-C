// Orhun Dogan
// October 14th 2020
// This program prints squares and prime numbers

#include <stdio.h>

int main() {

// Printing the squares of numbers 1-100

printf("\nPrinting the squares of numbers 1-100 \n");
for(int i = 1; i<101; i++) {
    int square = i*i;
    printf("%d * %d = %d \n", i, i, square);
}

// Printing the squares of even numbers in 1-101
printf("\n Printing the squares of even numbers in 1-101 \n");
for(int j = 1; j<102; j++){
    if(j % 2 == 0){
        int square2 = j*j;
        printf("%d * %d = %d \n", j, j, square2);
    }
}

// Printing prime numbers between 1-100
printf("\n Printing prime numbers in 1-100 \n");

int y;
for(int x = 2; x<=100; x++){
    for(y = 2; y<=x; y++){

        if(x % y == 0){
            break;
        }
    }
    if(x==y) {
        printf("%d\n", x);
    }
}
    return 0;
}