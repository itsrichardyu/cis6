/** 
 * Program Name: cis6Summer2020InClassCode0710.c
 * Discussion:   
 * Written By:   
 * Due Date:     2020/07/10
 */

#include <stdio.h> 

// Function Prototypes

void runMenuHw4Version1(void);
void runMenuHw4Version2(void);
void runMenuHw4Version3(void);
void runMenuHw4Version4(void);

void doTask1(int);

// Application Driver
int main() { 

	// displayClasInfo()

	runMenuHw4Version3();

	return 0;
}

// Function Definitions

void doTask1(int arg) {
	int digitCount;
	int tmp;
	
	if (arg < 0) {
		printf("\nIt is negative!\n");
	} else if (arg > 0) {
		printf("\nIt is positive!\n");
	} else {
		printf("\nIt is a ZERO!\n");
	}

	tmp = arg;
	digitCount = 0;
	//while (tmp != 0) {
	while (tmp) {
		digitCount++;
		tmp /= 10;
	}
}

void runMenuHw4Version4() {
	int option;
	int usrInput = 0;

	do {
		printf("\n MENU HW #4"
			   "\n 1. doTask1()"
			   "\n 2. Quit");
		printf("\nEnter the option: ");
		scanf_s("%d", &option);

		switch (option) {
		case 1:
			// do task 1
			// setting things up
			printf("\nEnter an int for user input: ");
			scanf_s("%d", &usrInput);

			doTask1(usrInput);

			break;
		case 2:
			// do task 2
			printf("\nHave fun!\n");

			break;
		default:
			printf("\nWrong option!\n");
		}
	} while (option != 2);
}

void runMenuHw4Version3() {
	int option;
	int usrInput = 0;

	do {
		printf("\n MENU HW #4"
			   "\n 1. doTask1()"
			   "\n 2. Quit");
		printf("\nEnter the option: ");
		scanf_s("%d", &option);

		if (option == 1) {
			// do task 1
			// setting things up

			//doTask1();
		} else if (option == 2) {
			// do task 2
			printf("\nHave fun!\n");
		} else { // catch-all case
			printf("\nWrong option!\n");
		}
	} while (option != 2);
}

void runMenuHw4Version2() {
	//int option = 1;
	int option;
	int usrInput = 0;

	printf("\n MENU HW #4"
		   "\n 1. Option 1"
		   "\n 2. Option 2");
	printf("\nEnter the option: ");
	scanf_s("%d", &option);

	//while (option == 2) {
	while (option != 2) {
		printf("\n MENU HW #4"
			   "\n 1. Option 1"
			   "\n 2. Option 2");
		printf("\nEnter the option: ");
		scanf_s("%d", &option);

		if (option == 1) {
			// do task 1
		} else if (option == 2) {
			// do task 2
		} else {
			printf("\nWrong option!\n");
		}
	}
}

void runMenuHw4Version1() {
	int option = 9;
	int usrInput = 0;

	while (option == 2) {
		printf("\n MENU HW #4"
			   "\n 1. Option 1"
			   "\n 2. Option 2");
		printf("\nEnter the option: ");
		scanf_s("%d", &option);

		if (option == 1) {
			// do task 1
		} else if (option == 2) {
			// do task 2
		} else {
			printf("\nWrong option!\n");
		}
	}

	printf("\n MENU HW #4"
		   "\n 1. Option 1"
		   "\n 2. Option 2");
	printf("\nEnter the option: ");
	scanf_s("%d", &option);

	if (option == 1) {
		// do task 1
	} else if (option == 2) {
		// do task 2
	} else {
		printf("\nWrong option!\n");
	}
}
