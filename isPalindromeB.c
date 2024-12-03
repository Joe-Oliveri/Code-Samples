// Program which checks if a number is a palindrome
// Compatible with any input.

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){

	char userInput[50];
    int len = 0;
    bool flag = true;
 
    printf("Please Enter Your Input: ");
    fflush(stdout);

    // Get user input
	scanf(" %s", &userInput);

	// Get length of String
    len = strlen(userInput);
 
 	// Reverse String
    for(int i=0;i<len/2;i++)  
    {
    	if(userInput[i]==userInput[len-i-1]){
    		flag = true;
    	}
    	else{
    		flag = false;
    	} 
 	}

 	// Make sure input is acceptable
	if(flag){
		printf("%s is a Palindrome! \n", userInput);
	}
	else{
		printf("%s is not a Palindrome \n", userInput);
	}
     
    return 0;
}
