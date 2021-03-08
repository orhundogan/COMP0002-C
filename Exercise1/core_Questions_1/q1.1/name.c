// Written by Orhun Dogan 
// October 5th 2020
// This program displays my name 

#include <stdio.h>
#include <string.h>

int main(void) {

    char myName[] = "Orhun";
    printf("Hello, my name is %s\n", myName);
    
    int index = 0;
    while(index < strlen(myName)) {
        printf("%c", myName[index]);
        index++;
    }


    // This part can print the name backwards.
    /* int index = strlen(myName) - 1;
    while(index > -1) {
        printf("%c", myName[index]);
        index = index - 1;
    } */

printf("\n");

    return 0;
}