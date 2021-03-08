// Orhun Dogan
// October 6th
// This program draws a Koch Snowflake

#include <math.h>
#include "graphics.h"

double x,y;

double convertToRadians(int angle){
    return (M_PI / 180) * angle;
}

void segment(int level, double lengthOfSide, double angle){

    if(level == 0){
        double newX = cos(convertToRadians(angle)) * lengthOfSide +x;
        double newY = sin(convertToRadians(angle)) * lengthOfSide+y;
        drawLine((int)x, (int)y, (int)newX, (int)newY);
        x = newX;
        y = newY;
    } else{
        double newLength = lengthOfSide/3;
        segment(level-1, newLength, angle);
        segment(level -1, newLength, angle -60);
        segment(level -1, newLength, angle+60);
        segment(level-1, newLength, angle);
    }

}

void snowflake(int level, double lengthOfSide){
    segment(level, lengthOfSide, 0);
    segment(level, lengthOfSide, 120);
    segment(level, lengthOfSide, 240);
}

int main(void) {
    x = 120.0;
    y = 80.0;
    snowflake(5,250.0);
}
