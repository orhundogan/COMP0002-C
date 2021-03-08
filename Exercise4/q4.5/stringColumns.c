// Orhun Dogan
// October 29th 2020
// This program takes a block of text and formats it into two columns


#include <string.h>
#include <stdio.h>

void blocks(char s[]){

    int i = 0;

    
    while (i<40){
        printf("%c", s[i]);
        i++;
    }

    printf("\n");
        


}

int main(void){

    char s[] = "My name is Orhun and I am from Turkey. I will live in the United Kingdom. ";
    blocks(s);

    return 0;
}
