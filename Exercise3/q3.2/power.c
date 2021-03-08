// Orhun Dogan  
// October 19th 2020
// This program creates power functions in two different ways

#include <stdio.h>

int powerLoop(int x, int y){
    int power = 1;

    for(int i = 0; i<y; i++){
        power = power * x;
    }

    return power;
}

int powerRecursive(int x, int y){
    int i = 0;

    if(y != 0){
        return (x*powerRecursive(x,y-1));
    }
    else{
        return 1;
    }
}

int main(void) {

    printf("%d\n", powerLoop(11,2));
    printf("%d\n", powerRecursive(3,3));

    return 0;
}