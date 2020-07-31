/**
 * Program Name:  07-10.c
 * Discussion:    
 * Written By:    Richard Yu
 * Date:          2020/07/10
 */

#include <stdio.h>

// Function Prototypes
void printTotal(void);
void runMenuHw4(void);
void runMenuHw4Version2(void);
void runMenuHw4Version3(void);
void runMenuHw4Version4(void);

// Application Driver
int main() {
    runMenuHw4();

    return 0;
}

// Function Definitions
void printTotal() {
    // Desired Effect: total = 1 + 2 + 3 + 4 + 5 + 9 + (-8) + ...

    int userInput;
    int total;
    int index;

    printf("\nEnter a positive int: ");
    scanf("%d", &userInput);

    /* For Loop Structure
    for (initialization; testExpression, update) {
        body;
    }

    Therefore, you could put the initialzation OUTSIDE of the loop, shown below.
    Then, leave the initialization portion blank.
    */

    // total = 0;
    // index = 0;
    for (total = 0, index = 0; index <= userInput; index++) {
        total += index;
    }

}

void runMenuHw4() {
    int option;
    int userInput;

    while (option == 2) {
        printf("\nMENU HW #4"
           "\n1. Option 1"
           "\n2. Option 2");

        printf("\nEnter the option: ");
        scanf("%d", &userInput);
    
        if (option == 1) {

        } else if (option == 2) {
        
        } else {
            printf("\nWrong Option!\n");
        }
    }   
}

void runMenuHw4Version2() {
    int option;
    int userInput;

    while (option != 2) {
        printf("\nMENU HW #4"
           "\n1. Option 1"
           "\n2. Option 2");

        printf("\nEnter the option: ");
        scanf("%d", &userInput);
    
        if (option == 1) {

        } else if (option == 2) {
        
        } else {
            printf("\nWrong Option!\n");
        }
    }   
}


void runMenuHw4Version3() {
    int option;
    int userInput;

    do {
        printf("\nMENU HW #4"
           "\n1. doTask1()"
           "\n2. Quit");

        printf("\nEnter the option: ");
        scanf("%d", &option);
    
        if (option == 1) {
            // Task #1, then break
        } else if (option == 2) {
            // Task #2, then break
            printf("\nHave fun!\n");
        } else {    // Catch-all case
            printf("\nWrong Option!\n");
        }
    } while (option != 2);
}

void runMenuHw4Version4() { // used for rest of semester
    int option;
    int userInput;

    do {
        switch (option) {   // Must be integral value
        case 1:
            // Task #1, then break
            printf("\nEnter an integer: ");
            scanf("%d", &userInput);

            doTask1(userInput);

            break;
        case 2:
            // Task #2, then break
            printf("\nHave fun!\n");
            break;
        default:
            printf("\nWrong Option!\n");
        }
    } while (option != 2);
}

void doTask1(arg) {
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

    // while (tmp != 0) is INEFFICIENT
    while (tmp) {
        digitCount++;
        tmp /= 10;
    }
}