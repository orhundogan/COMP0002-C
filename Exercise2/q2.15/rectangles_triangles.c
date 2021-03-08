// Orhun Dogan
// October 19th 2020
// This program creates a function that draws rectangle and triangle

#include "graphics.h"

int drawRectangle(int x, int y, int width, int height){

    drawLine(x,y,x+width, y);
    drawLine(x+width, y, x+width, y+height);
    drawLine(x+width, y+height, x, y+height);
    drawLine(x, y+height, x, y);
    return 0;
}

int drawTriangle(int x, int y, int x2, int y2, int x3, int y3){
    
    drawLine(x,y,x2,y2);
    drawLine(x2,y2,x3,y3);
    drawLine(x3,y3,x,y);
    return 0;
}

int main(void){

    drawRectangle(50,50,100,75);
    drawTriangle(50,50,150,50,100,20);
    drawRectangle(80,95,40,30);
    drawRectangle(60,60,20,20);
    drawRectangle(120,60,20,20);


    return 0;
}