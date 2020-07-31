/**
 * Program Name:  cis6Summer2020RichardYuHw5Ex1.c
 * Discussion:    HW #5 Ex #1
 * Written By:    Richard Yu
 * Date:          2020/07/20
 */

#include <stdio.h>

// Function Prototypes
void displayClassInfoRichardY(void);
void displayLoopMenu(void);
void displayUniqueDigitRichardY(int);

// Application Driver
int main() {

    displayClassInfoRichardY();

    displayLoopMenu();

    return 0;
}

// Function Definitions
void displayClassInfoRichardY() {
    printf("CIS 6 - Introduction to C Programming\n"
        "Laney College\n"
        "Richard Yu\n\n"
        
        "Assignment Information --\n"
        "  Assignment Number:  Homework 5,\n"
        "                      Coding Assignment -- Exercise #1\n"
        "  Written by:         Richard Yu\n"
        "  Submitted Date:     2020/07/20\n");

    return;
}

void displayLoopMenu() {
    int userSelection;
    int userInt;

    do {
        printf("\n*********************************************\n"
          "*                MENU - HW #5               *\n"
          "*  1. Calling displayUniqueDigitRichardY()  *\n"
          "*  2. Quit                                  *\n"
          "*********************************************\n\n");
        
        printf("Enter an integer for option + ENTER: ");
        scanf_s("%d", &userSelection);

        switch (userSelection) {
            case 1:
                printf("\nEnter an integer: ");
                scanf_s("%d", &userInt);
                printf("\nCalling displayUniqueDigitRichardY() --");
                displayUniqueDigitRichardY(userInt);
                
                break;
            case 2:
                printf("\nHave fun!\n");

                break;
            default:
                printf("\nWrong Option!\n");
        }
    } while (userSelection != 2);

    return;
}

void displayUniqueDigitRichardY(int userInt) {
    int digitsArray[10] = { 0 };
    int uniqueDigitsCount = 0;
    int i;

    if (!userInt) {
        printf("\n\n  The given value is ZERO!\n");
        return;
    }

    (userInt % 2) ? printf("\n\n  %d is an odd value! \n", userInt) :
        printf("\n\n  %d is a even value!\n", userInt);

    userInt = (userInt < 0) ? -userInt : userInt;

    do {
        if (!digitsArray[userInt % 10]) {
            uniqueDigitsCount++;
        }

        digitsArray[userInt % 10]++; 
        userInt /= 10;
    } while (userInt);

    printf("  There is/are %d unique digit(s)\n", uniqueDigitsCount);

    printf("  The unique digit(s) would be\n");
    for (i = 0; i < 10; i++) {
        if (digitsArray[i]) {
            printf("    %d seen %d time(s)\n", i, digitsArray[i]);
        }
    }

    return;
}

/** PROGRAM_OUTPUT 
CIS 6 - Introduction to C Programming
Laney College
Richard Yu

Assignment Information --
  Assignment Number:  Homework 5,
                      Coding Assignment -- Exercise #1
  Written by:         Richard Yu
  Submitted Date:     2020/07/20

*********************************************
*                MENU - HW #5               *
*  1. Calling displayUniqueDigitRichardY()  *
*  2. Quit                                  *
*********************************************

Enter an integer for option + ENTER: 6

Wrong Option!

*********************************************
*                MENU - HW #5               *
*  1. Calling displayUniqueDigitRichardY()  *
*  2. Quit                                  *
*********************************************

Enter an integer for option + ENTER: 1

Enter an integer: -9

Calling displayUniqueDigitRichardY() --

  -9 is an odd value!
  There is/are 1 unique digit(s)
  The unique digit(s) would be
    9 seen 1 time(s)

*********************************************
*                MENU - HW #5               *
*  1. Calling displayUniqueDigitRichardY()  *
*  2. Quit                                  *
*********************************************

Enter an integer for option + ENTER: 1

Enter an integer: -13454

Calling displayUniqueDigitRichardY() --

  -13454 is a even value!
  There is/are 4 unique digit(s)
  The unique digit(s) would be
    1 seen 1 time(s)
    3 seen 1 time(s)
    4 seen 2 time(s)
    5 seen 1 time(s)

*********************************************
*                MENU - HW #5               *
*  1. Calling displayUniqueDigitRichardY()  *
*  2. Quit                                  *
*********************************************

Enter an integer for option + ENTER: 1

Enter an integer: 3450406

Calling displayUniqueDigitRichardY() --

  3450406 is a even value!
  There is/are 5 unique digit(s)
  The unique digit(s) would be
    0 seen 2 time(s)
    3 seen 1 time(s)
    4 seen 2 time(s)
    5 seen 1 time(s)
    6 seen 1 time(s)

*********************************************
*                MENU - HW #5               *
*  1. Calling displayUniqueDigitRichardY()  *
*  2. Quit                                  *
*********************************************

Enter an integer for option + ENTER: 1

Enter an integer: -3450406

Calling displayUniqueDigitRichardY() --

  -3450406 is a even value!
  There is/are 5 unique digit(s)
  The unique digit(s) would be
    0 seen 2 time(s)
    3 seen 1 time(s)
    4 seen 2 time(s)
    5 seen 1 time(s)
    6 seen 1 time(s)

*********************************************
*                MENU - HW #5               *
*  1. Calling displayUniqueDigitRichardY()  *
*  2. Quit                                  *
*********************************************

Enter an integer for option + ENTER: 1

Enter an integer: 0

Calling displayUniqueDigitRichardY() --

  The given value is ZERO!

*********************************************
*                MENU - HW #5               *
*  1. Calling displayUniqueDigitRichardY()  *
*  2. Quit                                  *
*********************************************

Enter an integer for option + ENTER: 2

Have fun!

*/

/** CODE_OUTPUT_ISSUES
No comments.
*/