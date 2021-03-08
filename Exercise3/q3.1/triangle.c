// Orhun Dogan
// October 19th 2020
// This program calculates area and perimeter of a triangle

#include <stdio.h>
#include <math.h>


float areaFunction(int a, int b, int c, float s){

    float area;

    area = sqrt(s * (s-a) * (s-b) * (s-c));
    return area;
}

float perimeterFunction(int a, int b, int c){

    float perimeter;

    perimeter = a + b + c;
    return perimeter;
}

float seriparameterFunction(int a, int b, int c){

    float semiparameter;

    semiparameter = (a+b+c) / 2;

    return semiparameter;
}


int main(void) {

int a,b,c;
printf("Enter first length: \n");
scanf("%d", &a);
printf("Enter second length: \n");
scanf("%d", &b);
printf("Enter third length: \n");
scanf("%d", &c);

if(a + b > c && a + c > b && b + c > a){
printf("Perimeter of the triangle: %f \n", perimeterFunction(a,b,c));
printf("Area of the triangle: %f\n", areaFunction(a,b,c,seriparameterFunction(a,b,c)));
}
else{
    printf("The lengths that you have entered do not make a triangle.");
}
    return 0;
}