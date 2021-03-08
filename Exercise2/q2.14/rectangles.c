// Orhun Dogan
// October 15th 2020
// This program displays rectangles with * and %

#include <stdio.h>
#include <string.h>

int drawRect(row, cols, u) {

    int x, y;

    for(x = 1; x<=row; x++){
        for(y=1; y<=cols; y++){
            printf("%c", u);
        }
    printf("\n");
    }
    return 0;
}

int main(void){

    int row = 3;
    int cols = 5;
    char c = '*';

    int row2 = 7;
    int cols2 = 3;
    char c2 = '%';

    printf("\n");
    drawRect(row,cols,c);
    printf("\n");
    drawRect(row2,cols2,c2);
    printf("\n");

    return 0;
}
