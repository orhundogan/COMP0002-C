// By Orhun Dogan
// October 5th 2020
// This program displays 2 rectangles

#include "graphics.h"

int main(void) {

    // First rectangle 
    drawLine(30,30,120,30);
    drawLine(120,30,120,80);
    drawLine(120,80,30,80);
    drawLine(30,80,30,30);

    // Second rectangle
    drawRect(150,50,60,140);

    return 0;
}