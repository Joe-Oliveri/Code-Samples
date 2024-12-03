// Program which checks if a number is a palindrome

#include <stdio.h>
#include <string.h>

int main(){

	int userInput, reversed = 0, remainder, original;

	// Get input from user
	printf("Please Enter Your Number: ");
	fflush(stdout);

	// Get use input.
	// Make sure input is valid numerical data.
	if(scanf(" %d", &userInput)){
		printf("Input: %d \n", userInput);
	}
	else{
		printf("Please enter a valid numerical input");
		return 0;
	}

	// Maintain the original input
	original = userInput;

	// Reverse input number
	while (userInput != 0){
		remainder = userInput % 10;
		reversed = reversed * 10 + remainder;
		userInput /= 10;
	}

	// Make sure input is acceptable
	if(reversed == original){
		printf("%d is a Palindrome! \n", original);
	}
	else{
		printf("%d is not a Palindrome \n", original);
	}

}