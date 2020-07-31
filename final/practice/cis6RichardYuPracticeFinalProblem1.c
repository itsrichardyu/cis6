/**
 * Program Name:  cis6RichardYuPracticeFinalProblem1.c
 * Discussion:    Final Exam Practice, Problem #1
 * Written By:    Richard Yu
 * Date:          2020/07/23
 */

#include <stdio.h>

// Function Prototypes
int getTotalOddDigitCount(int);

// Application Driver
int main() {
	int userInput;

	printf("Enter an int: ");
	scanf_s("%d", &userInput);

	printf("Total odd digit count: %d", getTotalOddDigitCount(userInput));

	return 0;
}

// Function Definitions
int getTotalOddDigitCount(int userInt) {
	int digitsArray[10] = { 0 };
	int oddDigitsCount = 0;

	userInt = (userInt < 0) ? -userInt : userInt;
	do {
		digitsArray[userInt % 10]++;
		if (userInt % 2) {
			oddDigitsCount++;
		}
		userInt /= 10;
	} while (userInt);

	return oddDigitsCount;
}