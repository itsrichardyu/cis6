/**
 * Program Name:  07-02.c
 * Discussion:    Homework #3
 * Name:          Richard Yu
 * Date:          2020/07/02
 */

#include <stdio.h>

int extract1Digit(void);

// GLOBAL Variable
int aGlobalVariable;

int main() {
    // LOCAL Variable
    double userInput;

    printf("\nEnter a floating-point: ");
    scanf("%lf", &userInput);

    /**
     * Ternary operator is usually used to update a value
     * It is also more efficient than an if-else
     * 
     * tempVar = testExpr ? valueIfTrue : valueIfFalse
     */

    (userInput > 0) ? printf("\n%lf is positive!\n", userInput) :
        printf("\n%lf is non-positive!\n");

    /** Efficiency Ladder
     * 1. Operators
     * 2. Structures
     * 3. Function Calls (lots of overhead)
     */

    printf("\nThe return value of extract1Digit() : %d\n", extract1Digit());

    return 0;

    /** Function Signatures
     * 2 Components
     * 1. Function Name
     * 2. Argument List
     */
}

int extract1Digit() {
    int digit1 = 10;

    // return digit1;
    // return 123.456; // 123.456 can be converted to int
    // return 'A';     // 'A' can be converted to int
    // return "ABC";  // Returns integer representation
}

int printAndReturnPositiveOrNegative() {
    int userInput;
    printf("\nEnter a floating-point: ");
    scanf("%lf", &userInput);

    return (userInput > 0) ? 1 : -1;
}