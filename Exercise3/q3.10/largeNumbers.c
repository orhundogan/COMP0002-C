// Orhun Dogan
// October 30th 2020
// This program prints large numbers

#include <stdio.h>

const char *const gap = " ";
const int rows = 5;

const char *const number[][5] = 
{
    {
        "******",
        "*    *",
        "*    *",
        "*    *",
        "******"
    },
    {
        "     *",
        "     *",
        "     *",
        "     *",
        "     *",
    },
    {
        "******",
        "     *",
        "******",
        "*     ",
        "******"
    },
    {
        "******",
        "     *",
        "******",
        "     *",
        "******"
    },
    {
        "*    *",
        "*    *",
        "******",
        "     *",
        "     *"
    },
    {
        "******",
        "*     ",
        "******",
        "     *",
        "******"
    },
    {
        "******",
        "*     ",
        "******",
        "*    *",
        "******"
    },
    {
        "******",
        "     *",
        "     *",
        "     *",
        "     *"
    },
    {
        "******",
        "*    *",
        "******",
        "*    *",
        "******"
    },
    {
        "******",
        "*    *",
        "******",
        "     *",
        "     *"
    }
}    ;

void displayRowForDigit(int row, int digit){
    printf("%s%s", number[digit][row], gap);
}

void displayRowForNumber(int row, int number){
    if(number != 0){
        displayRowForNumber(row, number/10);
        displayRowForDigit(row,number%10);
    }
}

void displayNumber(int number){
    for(int row = 0; row<rows;row++){
        if(number == 0){
            displayRowForDigit(row, 0);
        } else{
            displayRowForNumber(row, number);
        }
    printf("\n");
    }
}

int main(void){

    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("\n\n");
    displayNumber(number);
    return 0;
}