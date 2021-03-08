// Orhun Dogan
// October 26th 2020
// This program gets a string and creates a copy in dynamic memory
// LOOK AT https://www.geeksforgeeks.org/dynamic-memory-allocation-in-c-using-malloc-calloc-free-and-realloc/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* stringCopy(char *s){

    int n = strlen(s);
    char *ptr;


    printf("Number of elements in this char array: %d\n", n);

    // Dynamically allocate memory
    ptr = (char*)malloc(n*sizeof(char));

    if(ptr == NULL){
        printf("Memory not allocated\n");
        exit(0);
    }

    else{
        printf("Memory allocated successfully \n");
        printf("Elements of the char array :\n");

        for(int i = 0; i<n;i++){
            ptr[i] = s[i];
            printf("%c, ", ptr[i]);
        }

    }
    return NULL;
}

int main(void){

    char *str;
    printf("Enter a string: ");
    scanf("%s", &*str);

    stringCopy(str);

    return 0;
}