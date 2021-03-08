// Orhun Dogan
// October 13th 2020
// This program draws different images with *

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int q2_4(void){

    printf("\n Q2.4 \n");

    for(int row = 0; row<5; row++) {
        for(int cols = 0; cols<5; cols++) {

            if(row == 0 || row == 4 || cols == 0 || cols == 4){
                printf("*");
            }
            else{
                printf(" ");
            }

        }
        printf("\n");
    }
    return 0;
}

int q2_5(void) {

    printf("\n Q2.5 \n");
    int i,j,k;

    for(i= 6; i>0; i--) {

        for(j=6; j>i;j--) {
            printf(" ");
        }

        for(k=1; k<=i;k++){

            printf("*");
        }
        printf("\n");
    }

    return 0;
}

int q2_6(void) {

    printf("\n Q2.6 \n");

    for(int rows = 0; rows<9;rows++){
        for(int cols = 0; cols<9; cols++){
            if((cols<=3 - abs(rows-4)) || (cols >= 9- abs(rows-4))){
                printf(" ");
            } else{
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}

int q2_7() {

    printf("\n Q2_7 \n");
    int row, cols;

    for(row=0; row <7; row++) {
        for(cols=0; cols<7; cols++) {

            if(row == 0 || row == 6 || cols == 0 || cols == 6){
                printf("*");
            }
           else if (row == 2 && 1<cols && cols<5|| row == 4 && 1<cols && cols<5){
                printf("#");
            }
            else if (row == 3 && cols== 2 || row == 3 && cols == 4)
            {
                printf("#");
            }
            else{
                printf(" ");
            }

        }
        printf("\n");
    }
    return 0;
}

int q2_8(void){

    printf("\n  Q2_8 \n");
    int row, cols;

    for(row=1; row<7; row++){
        for(cols = 1; cols<7;cols++){
            if(row % 2 == 0 && cols % 2 == 0){
                printf("*");
            }
            else if(row % 2 == 1 && cols % 2 == 1){
                printf("*");
            }
            else{
                printf("#");
            }
        }
    printf("\n");
    }
    return 0;
}

int q2_9(void){

    printf("\n Q2_9 \n");
    int row,cols;

    for(row=1; row<10; row++){
        for(cols=1; cols<6; cols++){
            if(cols == 1){
                printf("*");
            } 
            else if(cols == row && cols !=1){
                printf("*");
            }
            else if(cols + row == 10 && row >= 6 && row !=9){
                 printf("*");
             }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

int q2_10(void) {

    printf("\n Q2_10 \n");

    int row,cols;

    for (row = 1; row<9; row++){
        for(cols = 1; cols<8; cols++){

            if(row == 1){
                printf("*");
            } 
            else if(row == 8){
                printf("#");
            }
            else if(cols == 1 && row > 1 && row < 8){
                printf("#");
            }
            else if(cols == 7 && row > 1 && row < 8){
                printf("*");
            }
            else if(row == cols){
                printf("*");
            }
            else if(row == cols+1){
                printf("#");
            } 
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
int main(void) {

    q2_4();
    q2_5();
    q2_6();
    q2_7();
    q2_8();
    q2_9();
    q2_10();


    return 0; 
}

