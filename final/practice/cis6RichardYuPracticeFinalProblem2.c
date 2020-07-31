/**
 * Program Name:  cis6RichardYuPracticeFinalProblem1.c
 * Discussion:    Final Exam Practice, Problem #1
 * Written By:    Richard Yu
 * Date:          2020/07/23
 */

#include <stdio.h>

// Function Prototypes
int getSeenOnceOddDigitCount(int);

// Application Driver
int main() {
	int userInput;

	printf("Enter an int: ");
	scanf_s("%d", &userInput);

	printf("Total SODC: %d", getSeenOnceOddDigitCount(userInput));

	return 0;
}

// Function Definitions
int getSeenOnceOddDigitCount(int userInt) {
	int digitsArray[10] = { 0 };
	int seenOnceOddDigitCount = 0;

	userInt = (userInt < 0) ? -userInt : userInt;
	do {
		digitsArray[userInt % 10]++;
		userInt /= 10;
	} while (userInt);

	for (int i = 1; i < 10; i+=2) {
		if (digitsArray[i] == 1) {
			seenOnceOddDigitCount++;
		}
	}

	return seenOnceOddDigitCount;
}