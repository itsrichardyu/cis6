/** 
 * Program Name: cis6Summer20200703InclassDiscussion.c
 * Discussion:   
 * Written By:   
 * Due Date:     2020/07/03
 */

#include <stdio.h> 

// Function Prototypes

int extractOneDigit(void);

// Application Driver
int main() { 
	int tmpDigit;

	tmpDigit = extractOneDigit();

	printf("\nThe return 1-digit : %d\n", tmpDigit);

	return 0;
}

// Function Definitions

int extractOneDigit() {
	int usrInput;
	//int oneDigit; // 125 --> oneDigit is 5
	//int absValue;

	printf("\nEnter an int: ");
	scanf_s("%d", &usrInput);

	/*
	oneDigit = usrInput % 10; // -9 -8 through 8 9
	                          // {-9, -8, ..., 0, ..., 9}
	                          // oneDigit is -9


	oneDigit = -1 * oneDigit;

	(oneDigit < 0) ? oneDigit = -1 * oneDigit : oneDigit;
	*/
	//absValue = (usrInput > 0) ? usrInput : -usrInput;
	//oneDigit = absValue % 10;

	//oneDigit = ((usrInput > 0) ? usrInput : -usrInput) % 10;

	//return oneDigit;
	return ((usrInput > 0) ? usrInput : -usrInput) % 10;
}