// By Orhun Dogan
// October 5th 2020
// This program displays a square in a circle

#include "graphics.h"

int main(void) {

    drawLine(50,50,100,50);
    drawLine(100,50,100,100);
    drawLine(100,100,50,100);
    drawLine(50,100,50,50); 

    drawArc(40, 40, 70, 70, 0, 360);

    return 0;
}