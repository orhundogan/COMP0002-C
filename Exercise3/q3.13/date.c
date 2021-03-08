// Orhun Dogan
// October 23rd 2020
// This program inputs a date, checks if it is valid, print the day name for the date, checks leap year
// CHECK: https://www.geeksforgeeks.org/find-day-of-the-week-for-a-given-date/

/* A program to find day of a given date */
#include<stdio.h> 
#include <stdlib.h>
  
int dayofweek(int d, int m, int y) 
{ 
    static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 }; 
    y -= m < 3; 
    return ( y + y/4 - y/100 + y/400 + t[m-1] + d) % 7; 
} 

int leapYear(int y){

    if(((y % 4 == 0) && (y % 100!= 0)) || (y%400 == 0)){
        return 1;
    } else{
        return 0;
    }

}
int main() 
{ 
    int d,m,y;
    printf("Enter a date (dd-mm-yyyy): ");
    scanf("%d-%d-%d", &d, &m, &y);

    if(d<1 || d>31){
        printf("Invalid Date");
        exit(0);
    }
    else if(m<1 || m>12){
        printf("Invalid Date");
        exit(0);
    }
    else if(y<0){
        printf("Invalid Date");
        exit(0);
    }

    int day = dayofweek(d, m, y); 
    
    if(day == 1){
        printf("Its Monday! \n");
    }
    else if(day == 2){
        printf("Its Tuesday! \n");
    }
    else if(day == 3){
        printf("Its Wednesday! \n");
    }
    else if(day == 4){
        printf("Its Thursday! \n");
    }
    else if(day == 5){
        printf("Its Friday! \n");
    }
    else if(day == 6){
        printf("Its Saturday! \n");
    }
    else if(day == 7){
        printf("Its Sunday! \n");
    }

    int leap = leapYear(y);
    if(leap == 1){
        printf("%d is a leap year!\n", y);
    }
    else{
        printf("%d is not a leap year\n", y);
    }
    
  
    return 0; 
}