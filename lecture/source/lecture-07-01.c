/**
 * Program Name:  07-01.c
 * Discussion:    Functions
 * Name:          Richard Yu
 * Date:          2020/07/01
 */

#include <stdio.h>

// Function Prototypes
int extract1Digit(void);
void doPrinting(void);  // doPrinting() does not require any arguments 
                        // (also known as parameters)

// Application Driver
int main() {
    // Declare variables at the TOP
    printf("\nThe value of printf(\"A\") is %d", printf("A"));

    doPrinting(); // This is NOT a value because there is no return value

    return 0;
}

// Function Definitions
void doPrinting() {
    printf("\nHello World\n0");

    return; // Returns NOTHING
}

int extract1Digit() {
    int digit1 = 10;

    return digit1;  // Returns a COPY of digit1
}