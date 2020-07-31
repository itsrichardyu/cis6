/**
 * Program Name:  07-03.c
 * Discussion:    Functions
 * Name:          Richard Yu
 * Date:          2020/07/03
 */

#include <stdio.h>

// Function Prototypes
void discuss(void);
int extractValue(void);
int extractOneDigit(void);

// Application Drivers
int main() {
    int tmpDigit;

    tmpDigit = extractOneDigit();

    printf("\nThe return 1-digit : %d\n", tmpDigit);

    return 0;
}

// Function Definitions
void discuss() {
    /** Function Terminology
     * void discuss(void)   = function prototype
     * 
     * discuss()            = function signature
     * 
     * void discuss()       = function header
     * 
     * void discuss() {     = function definition
     *   return;
     * }
     */

    int usrInput;
    
    printf("\nEnter an int: ");
    scanf("%d", &usrInput);

    usrInput = extractValue();

    return;
}

int extractValue() {
    int usrInput;

    printf("\nEnter an int: ");
    scanf("%d", &usrInput);

    return usrInput;
}

int extractOneDigit() {
    int usrInput;
    int oneDigit;

    printf("\nEnter an int: ");
    scanf("%d", &usrInput);
    
    oneDigit = usrInput % 10;

    return oneDigit;
}

/** Reversing Signs
 * x = -1 * x   Don't do this, not efficient
 * x = -x       Most efficient!
 */