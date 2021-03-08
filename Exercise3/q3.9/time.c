// Orhun Dogan
// October 22nd 2020
// This program inputs 24 hour format time and converts it to 12 hour format

#include <stdio.h>


int to12(int h, int m){

    if(h == 13){
        h = 1;
        printf("%d : %d PM", h,m);
    }
    if(h == 14){
        h = 2;
        printf("%d : %d PM", h,m);
    }
    if(h == 15){
        h = 3;
        printf("%d : %d PM", h,m);
    }
    if(h == 16){
        h = 4;
        printf("%d : %d PM", h,m);
    }
    if(h == 17){
        h = 5;
        printf("%d : %d PM", h,m);
    }
    if(h == 18){
        h = 6;
        printf("%d : %d PM", h,m);
    }
    if(h == 19){
        h = 7;
        printf("%d : %d PM", h,m);
    }
    if(h == 20){
        h = 8;
        printf("%d : %d PM", h,m);
    }
    if(h == 21){
        h = 9;
        printf("%d : %d PM", h,m);
    }
    if(h == 22){
        h = 10;
        printf("%d : %d PM", h,m);
    }
    if(h == 23){
        h = 11;
        printf("%d : %d PM", h,m);
    }

    if(h == 0){
        h = 12;
        printf("%d : %d AM", h,m);
    }

    else if (h<13 && h>0)
    {
        printf("%d : %d AM", h,m);
    }
    return 0;
}

int main(void){

    int minutes, hours;
    printf("Enter time in 24 hour format: ");
    scanf("%d : %d", &hours, &minutes);

    printf("%d", to12(hours,minutes));


    return 0;
}