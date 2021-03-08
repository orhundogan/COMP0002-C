#include <stdio.h> 
#include <string.h> 
#include <stdlib.h>


int *createRow(int size){
    return calloc(sizeof(int), size);
}

int **createRaggedArray(int numberOfRows, int *rowLengths){
    int **newRagged = calloc(sizeof(int*), numberOfRows); 
    for (int row = 0 ; row < numberOfRows ; row++){
        *(newRagged + row) = createRow(*(rowLengths + row)); 
        }
    return newRagged;
}

void freeRaggedArray(int **raggedArray, int numberOfRows) { 
    for (int row = 0 ; row < numberOfRows ; row++) {
        free(*(raggedArray + row));
    }
  free(raggedArray);
}

void printRow(int* row, int length){
    for (int n = 0 ; n < length ; n++) {
        printf("%d ", *(row + n)); 
    }
    printf("\n"); 
}

void printRaggedArray(int **raggedArray, int numberOfRows, int *rowLengths){
    for (int row = 0 ; row < numberOfRows ; row++) { 
        printRow(*(raggedArray + row), *(rowLengths + row));
    }
    printf("\n"); 
}

void setValue(int **raggedArray, int aRow, int aColumn, int value){
    *(*(raggedArray + aRow) + aColumn) = value; 
    }

int getValue(int **raggedArray, int aRow, int aColumn) {
  return *(*(raggedArray + aRow) + aColumn);
}
int main(void){
    
    int rowLengths[] = {5,7,2,10,4,20,3,6};
    int **raggedArray = createRaggedArray(8, rowLengths); 
    printRaggedArray(raggedArray, 8, rowLengths); 
    setValue(raggedArray, 1, 1, 100); 
    setValue(raggedArray, 4, 3, 200); 
    printRaggedArray(raggedArray, 8, rowLengths); 
    printf("1,1 = %d\n", getValue(raggedArray,1,1)); 
    printf("4,3 = %d\n", getValue(raggedArray,4,3)); 
    printf("5,10 = %d\n", getValue(raggedArray,5,10)); 
    freeRaggedArray(raggedArray, 8);
    return 0; 

}