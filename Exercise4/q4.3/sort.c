// Orhun Dogan
// October 26th 2020
// This program takes a pointer to an integer array and returns a pointer to a new array with integers sorted

#include <stdio.h>
#include <stdlib.h>

void swap(int *xp, int *yp)         // Functions for bubble sor
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 

int* sort(int* n, int size){

    int array[size];

    // Adding same elements into the new array
    for(int i = 0; i<size; i++){
        array[i] = *n;
        n++;
    }

    // Sorting the array
    int x,y;
    for(x=0; x<(size-1); x++){
        for(y=0;y<(size-x-1); y++){
            if(array[y] > array[y+1]){
                swap(&array[y], &array[y+1]);
            }
        }
    }

    return array;
}

int main(void){

    int a[6] = {5,2,1,6,4,3};
    int* ptr = sort(a, 6);  // Pointer to the returned array
    printf("Sorted array: \n");
    for(int i = 0; i<6; i++){
        printf("%d\n", ptr[i]);     // Printing elements
    }
    return 0;
}