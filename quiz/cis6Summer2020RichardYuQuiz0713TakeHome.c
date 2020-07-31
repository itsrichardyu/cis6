/**
 * Program Name:  cis6Summer2020RichardYuQuiz0713TakeHome.c
 * Discussion:    Quiz 0713
 * Written By:    Richard Yu
 * Date:          2020/07/13
 */

#include <stdio.h>

// Function Prototypes

void foo1(void);
void foo2(void);

int main() {
    foo1();

    foo2();

    return 0;
}

// Function Definitions

void foo2() {
    int usrInput;

    printf("\nEnter an int: ");
    scanf_s("%d", &usrInput);

    if (usrInput > 0) {
        // printf("\n% is positive!\n", usrInput);
        printf("\n%d is positive!\n", usrInput);
    } else {
        if (usrInput < 0) {
            // printf("\n%d is negative!\n", usrInput)
            printf("\n%d is negative!\n", usrInput);
        } else {
            // printf("\n% is zero!\n", usrInput);
            printf("\n%d is zero!\n", usrInput);
        }
    }

    // return 0;
    return;
}

void foo1() {
    int usrInput;

    printf("\nEnter an int: ");
    scanf_s("%d", &usrInput);

    if (usrInput > 0) {
        // printf("\n%d is positive!\n", usrInput)
        printf("\n%d is positive!\n", usrInput);
    } 

    if (usrInput < 0) {
        // printf("\n%d is negative!\n", usrInput);
        printf("\n%d is negative!\n", usrInput);
    }

    if (usrInput == 0) {
        printf("\n%d is zero!\n", usrInput);
    // };
    }

    // return 0;
    return;
}

/** PROGRAM_OUTPUT

Enter an int: 0

0 is zero!

Enter an int: -5

-5 is negative!

*/