// Orhun Dogan
// October 21st 2020
// This program displays twin prime numbers in a specific range


#include <stdio.h>


int check_prime(int n)
{
    if(n == 1)
    {
        return 0;
    }
    for(int i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            // number is not prime
            return 0;
        }
    }

    // number is prime
    return 1;
}



int main(void){

    int min,max;
    int p = 0;
    int prime[] = {};
    printf("Enter the minimum number: ");
    scanf("%d", &min);
    printf("Enter the maximum number: ");
    scanf("%d", &max);

    for(int i = min; i<(max+1); i++){
        if(check_prime(i) && check_prime(i+2)){
            printf("{%d, %d}\n", i, i + 2);
            i = i + 1; 
        }
    }
    
    return 0;
}
