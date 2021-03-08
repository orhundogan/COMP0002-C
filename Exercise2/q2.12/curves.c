// Orhun Dogan
// October 22nd 2020
// This program draws y= sin(x) and y=cos(x) graphs

#include <math.h>
#include <stdio.h>
#include "graphic.h"

#define PI 3.14159265
#define PIXELWIDTH 500
#define PIXELHEIGHT 300
#define PIXELMIDY (PIXELHEIGHT/2)
#define PIXELMIDX (PIXELWIDTH/2)

void drawAxes(void);
void labelXAxis(int);
void labelYAxis(int);
void drawGraph(void);
void plotSin(int,int);
void plotCos(int,int);
void plotTan(int,int);

// Drawing Axes
void drawAxes(void){
    drawLine(0, PIXELMIDY, PIXELWIDTH, PIXELMIDY);
    drawLine(PIXELMIDX, 0, PIXELMIDX, PIXELHEIGHT);
}

void labelXAxis(int limit){

    char buffer[10];
    int n = -limit;
    int gap = PIXELWIDTH / (limit*2);
    int xPosition;

    for(xPosition = 0; xPosition<PIXELWIDTH; xPosition+=gap){
        if(n!=0){
            drawLine(xPosition, PIXELMIDY, xPosition, PIXELMIDY+5);
            sprintf(buffer, "%d", n);
            drawString(buffer, xPosition-6, PIXELMIDY+20);
        }
        n++;
    }
}

void labelYAxis(int limit){
    char buffer[10];
    int n = limit;
    int gap = PIXELHEIGHT / (limit*2);
    int yPosition;

    for(yPosition=0; yPosition<PIXELHEIGHT;yPosition+=gap){
        if(n!=0){
            drawLine(PIXELMIDX, yPosition, PIXELMIDX+5, yPosition);
            sprintf(buffer, "%d", n);
            drawString(buffer,PIXELMIDX+8,yPosition+5);
        }
        n--;
    }
}

void plotSin(int xLimit, int yLimit){
    double x,y;
    double xScale = PIXELMIDX/xLimit;
    double yScale = PIXELMIDY/yLimit;

    setColour(red);
    for(x = -xLimit; x<xLimit;x+=0.01){
        y=sin(x);
        int pixelX = (int) (PIXELMIDX + (x*xScale));
        int pixelY = (int) (PIXELMIDY - (y*yScale));
        drawRect(pixelX,pixelY,1,1);
    }
}

void plotCos(int xLimit, int yLimit){
    double x,y;
    double xScale = PIXELMIDX/xLimit;
    double yScale = PIXELMIDY/yLimit;
    setColour(blue);
    for(x=-xLimit; x<xLimit;x+=0.01){
        y = cos(x);
        int pixelX = (int)(PIXELMIDX+(x*xScale));
        int pixelY = (int)(PIXELMIDY - (y*yScale));
        drawRect(pixelX, pixelY, 1,1);
    }
}

void plotTan(int xLimit, int yLimit){
    double x,y;
    double xScale = PIXELMIDX / xLimit;
    double yScale = PIXELMIDY / yLimit;

    setColour(yellow);
    for(x=-xLimit; x<xLimit; x+=0.01){
        y=tan(x);
        int pixelX = (int)(PIXELMIDX + (x*xScale));
        int pixelY = (int) (PIXELMIDY - (y*yScale));
        drawRect(pixelX, pixelY, 1,1);

    }
}

void drawGraph(){
    int xLimit = 5;
    int yLimit = 2;
    drawAxes();
    labelXAxis(xLimit);
    labelYAxis(yLimit);
    plotSin(xLimit, yLimit);
    plotCos(xLimit, yLimit);
    plotTan(xLimit,yLimit);

}

int main(void){
    drawGraph();
    return 0;
}
