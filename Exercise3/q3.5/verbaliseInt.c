// Orhun Dogan
// October 20th 2020
// This program inputs an integer and verbalises it. 
#include <stdio.h>

const char* verbalise(int x){

    if(x == 0){
        return "zero";
    }
    else if(x ==1){
        return "one";
    }
    else if(x ==2){
        return "two";
    }
    else if(x ==3){
        return "three";
    }
    else if(x ==4){
        return "four";
    }
    else if(x ==5){
        return "five";
    }
    else if(x ==6){
        return "six";
    }
    else if(x ==7){
        return "seven";
    }
    else if(x ==8){
        return "eight";
    }
    else if(x ==9){
        return "nine";
    }
    return "";
}

const char* verbaliseTens(int x){

    if(x ==10){
        return "ten";
    }
    else if(x ==11){
        return "eleven";
    }
    else if(x ==12){
        return "twelve";
    }
    else if(x ==13){
        return "thirteen";
    }
    else if(x ==14){
        return "fourteen";
    }
    else if(x ==15){
        return "fifteen";
    }
    else if(x ==16){
        return "sixteen";
    }
    else if(x ==17){
        return "seventeen";
    }
    else if(x ==18){
        return "eighteen";
    }
    else if(x == 19){
        return "nineteen";
    }
    else if(x ==2){
        return "twenty";
    }
    else if(x ==3){
        return "thirty";
    }
    else if(x ==4){
        return "forty";
    }
    else if(x ==5){
        return "fifty";
    }
    else if(x ==6){
        return "sixty";
    }
    else if(x ==7){
        return "seventy";
    }
    else if(x ==8){
        return "eighty";
    }
    else if(x ==9){
        return "ninety";
    }
    return "";
}

int main(void){

    int number,x,y,z;
    printf("Enter a number between 0 and 999: ");
    scanf("%d", &number);

    if (number == 0){
        printf("Zero");
    }
    if(number>=100){
        x = number / 100;
        number = number - (x*100);
        printf("%s hundred ", verbalise(x));
    }

    if(number >= 10 && number <= 19){
        printf("%s", verbaliseTens(number));
    }

    else if(number >= 20){
        y = number / 10;
        number = number -(y*10);
        printf("%s ", verbaliseTens(y));
    }

    if(number != 0){
        printf("%s", verbalise(number));
    }
    return 0;
}
