/**
 * Program Name:  07-09.c
 * Discussion:    
 * Written By:    Richard Yu
 * Date:          2020/07/09
 */

#include <stdio.h>

// Function Prototypes
int computeSquareA(int);        // arg is optional in prototype
void manipulateIntVersion0(int);
void manipulateIntVersion1(int);
void manipulateIntVersion2(int);

// Application Driver
int main() {
    int userInput;
    int total;
    int index;

    computeSquareA(5);

    // Inefficient
    computeSquareA((int) 5);

    // Implicit Conversion
    computeSquareA(5.8);        // double -> float -> long -> int

    // Explicit Conversion
    computeSquareA((int) 5.8);  // double -> int

    printf("\nEnter an int: ");
    scanf("%d", &userInput);

    manipulateIntVersion2(userInput);

    userInput = userInput + 1;  // 2 operators (assignment, addition), 3 operands
    userInput += 1;             // 1 operator, 2 operands
    userInput++;                // 1 operator, 1 operand

    for (total = 0, index = 0; index < userInput; index++) {
        total += index;
    }

    return 0;
}

// Function Defintions
int computeSquareA(int arg) {   // arg = Formal argument
    return arg * arg;
}

void manipulateIntVersion0(int arg) {   // THREE structures
    if (arg > 0) {
        printf("\n%d is positive!\n", arg);
    }
    if (arg < 0) {
        printf("\n%d is negative!\n", arg);
    }
    if (arg == 0) {
        printf("\nThe given value is ZERO!\n");
    }
}

void manipulateIntVersion1(int arg) {   // TWO structures
    if (arg > 0) {
        printf("\n%d is positive!\n", arg);
    } else {
        if (arg < 0) {
            printf("\n%d is negative!\n", arg);
        } else {
            printf("\nThe given value is ZERO!\n");
        }
    }
}

void manipulateIntVersion2(int arg) {   // ONE structure
    if (arg > 0) {
        printf("\n%d is positive!\n", arg);
    } else if (arg < 0) {
        printf("\n%d is negative!\n", arg);
    } else {
        printf("\nThe given value is ZERO!\n");
    }
}