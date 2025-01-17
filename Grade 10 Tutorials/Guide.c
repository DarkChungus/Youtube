// Common header files that you will be using

#include <stdio.h>
#include <conio.h>
#include <math.h>

// Main Module

int main(){

	// Defining the data type of the number we want to take

	int num;

	// Print function syntax

	printf("Hello World!\n");

	// How to take input from user?

	printf("Enter any number: ");
	fflush(stdout);

	// Syntax to take input from user

	scanf("%d", &num);

	// IF STATEMENT SYNTAX WITH ELSEIF AND IF

	if(num%2==0){
		// FOR LOOPS
		for(int i=1; i<=num; i++){
			printf("\nThis is being repeated this many times(even number): %d", num);
		}
	}
	else if(num%3==0&&num%5==0){
		// WHILE LOOPS
		int i = 1;
		while(i<=num){
			printf("This number is divisible by both 3 and 5: %d", num);
		}
	}
	else if(num%4==0||num%5==0){
		printf("This number is divisible by either 4 or 5: %d", num);
	}
	else{

		// Introducing the float variable

		float flt;

		printf("I don't know what to do with the else statement. So let's practice some other format specifiers.\n");
		printf("Enter any decimal number: ");
		fflush(stdout);

		// Taking the number as input

		scanf("%f", &flt);

		// Printing out the number you input

		printf("This number you entered is %f", flt);
	}

	// getch();

	// Returning a value 0 to show that the program executed successfully (not needed in void function)

	return 0;
}
