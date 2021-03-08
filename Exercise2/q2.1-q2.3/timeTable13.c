// Orhun Dogan
// October 13th 2020
// This program prints the time table for 13 by using three different methods

#include <stdio.h>

int main(void) {

    // USING WHILE LOOP
    int i = 0; 
    int j = 0;
    int x = 0;
    char string[] = "* 13 = ";
    printf("\nUsing While Loop \n");
    while(i < 21){
        int total = i*13;
        printf("%d * 13 = %d \n", i, total);
        i++;
    }

    // USING FOR LOOP

    printf("\nUsing For Loop \n");
    for(int j; j<21; j++){
        int total2 = j*13;
        printf("%d * 13 = %d \n", j, total2);
    }

    // USING DO LOOP
    
    printf("\n Using Do Loop \n");
    do{
        int total3 = x*13;
        printf("%d * 13 = %d \n", x, total3);
        x++;
    } while(x<21);
        return 0;
    



    return 0;
}