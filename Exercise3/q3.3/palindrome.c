// Orhun Dogan
// October 20th 2020
// This program gets an input and checks whether that number is palindrome


#include <stdio.h>

int main() {
	int number, reverse = 0, temp;
	
	printf("Enter a number:");
	scanf("%d", &number);
	
	temp = number;
	
	while( temp != 0 ) {
		reverse = reverse * 10;
		reverse = reverse + temp%10;
		temp = temp / 10;
	}
	
	if ( number == reverse )
		printf("The number is a Palindrome number.\n");
	else
		printf("The number is not a Palindrome number.\n");
	
	return 0;
}