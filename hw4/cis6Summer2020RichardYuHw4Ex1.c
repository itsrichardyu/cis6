/**
 * Program Name:  cis6Summer2020RichardYuHw4Ex1.c
 * Discussion:    HW #4 Ex #1
 * Written By:    Richard Yu
 * Date:          2020/07/13
 */

#include <stdio.h>

// Function Prototypes
void displayClassInfoRichardY(void);
void displayLoopMenu(void);
void displayAllDigitRichardY(int userInt);

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
        "  Assignment Number:  Homework 4,\n"
        "                      Coding Assignment -- Exercise #1\n"
        "  Written by:         Richard Yu\n"
        "  Submitted Date:     2020/07/13\n\n\n");

    return;
}

void displayLoopMenu() {
    int userSelection;
    int userInt;

    do {
        printf("******************************************\n"
          "*              MENU - HW #4              *\n"
          "*  (1) Calling displayAllDigitRichardY() *\n"
          "*  (2) Quit                              *\n"
          "******************************************\n\n");
        
        printf("Enter an integer for option + ENTER: ");
        scanf_s("%d", &userSelection);

        switch (userSelection) {
            case 1:
                printf("\nEnter an integer: ");
                scanf_s("%d", &userInt);
                printf("\nCalling displayAllDigitRichardY() with argument of %d "
                    "--", userInt);
                displayAllDigitRichardY(userInt);
                
                break;
            case 2:
                printf("\nHave fun!\n");

                break;
            default:
                printf("\nWrong Option!\n\n");
        }
    } while (userSelection != 2);

    return;
}

void displayAllDigitRichardY(int userInt) {
    int userIntDigits;
    int digitsCount = 0;
    int evenDigitsCount = 0;
    int oddDigitsCount = 0;

    if (userInt > 0) {
        printf("\n\n  %d is a positive number. \n", userInt);
    } else if (userInt < 0) {
        printf("\n\n  %d is a negative number.\n", userInt);
    } else {
        printf("\n\n  The given value is ZERO!\n\n");
        return;
    }

    userInt = (userInt < 0) ? -userInt : userInt;

    userIntDigits = userInt;

    do {
        digitsCount++;
        userIntDigits /= 10;
    } while (userIntDigits);

    printf("  There is/are %d digit(s).\n\n", digitsCount);
    
    printf("  The digit(s) would be\n");

    do {
        printf("    %d\n", (userInt % 10));
        ((userInt % 10) % 2 == 0) ? evenDigitsCount++ : oddDigitsCount++;
        userInt /= 10;
    } while (userInt);

    printf("\n  There is/are %d even digit(s).\n", evenDigitsCount);
    printf("  There is/are %d odd digit(s).\n\n", oddDigitsCount);

    return;
}

/** PROGRAM_OUTPUT
CIS 6 - Introduction to C Programming
Laney College
Richard Yu

Assignment Information --
  Assignment Number:  Homework 4,
                      Coding Assignment -- Exercise #1
  Written by:         Richard Yu
  Submitted Date:     2020/07/13


******************************************
*              MENU - HW #4              *
*  (1) Calling displayAllDigitRichardY() *
*  (2) Quit                              *
******************************************

Enter an integer for option + ENTER: 6

Wrong Option!

******************************************
*              MENU - HW #4              *
*  (1) Calling displayAllDigitRichardY() *
*  (2) Quit                              *
******************************************

Enter an integer for option + ENTER: 1

Enter an integer: -9

Calling displayAllDigitRichardY() with argument of -9 --

  -9 is a negative number.
  There is/are 1 digit(s).

  The digit(s) would be
    9

  There is/are 0 even digit(s).
  There is/are 1 odd digit(s).

******************************************
*              MENU - HW #4              *
*  (1) Calling displayAllDigitRichardY() *
*  (2) Quit                              *
******************************************

Enter an integer for option + ENTER: 1

Enter an integer: -13454

Calling displayAllDigitRichardY() with argument of -13454 --

  -13454 is a negative number.
  There is/are 5 digit(s).

  The digit(s) would be
    4
    5
    4
    3
    1

  There is/are 2 even digit(s).
  There is/are 3 odd digit(s).

******************************************
*              MENU - HW #4              *
*  (1) Calling displayAllDigitRichardY() *
*  (2) Quit                              *
******************************************

Enter an integer for option + ENTER: 1

Enter an integer: 3450406

Calling displayAllDigitRichardY() with argument of 3450406 --

  3450406 is a positive number.
  There is/are 7 digit(s).

  The digit(s) would be
    6
    0
    4
    0
    5
    4
    3

  There is/are 5 even digit(s).
  There is/are 2 odd digit(s).

******************************************
*              MENU - HW #4              *
*  (1) Calling displayAllDigitRichardY() *
*  (2) Quit                              *
******************************************

Enter an integer for option + ENTER: 1

Enter an integer: -3450406

Calling displayAllDigitRichardY() with argument of -3450406 --

  -3450406 is a negative number.
  There is/are 7 digit(s).

  The digit(s) would be
    6
    0
    4
    0
    5
    4
    3

  There is/are 5 even digit(s).
  There is/are 2 odd digit(s).

******************************************
*              MENU - HW #4              *
*  (1) Calling displayAllDigitRichardY() *
*  (2) Quit                              *
******************************************

Enter an integer for option + ENTER: 1

Enter an integer: 0

Calling displayAllDigitRichardY() with argument of 0 --

  The given value is ZERO!

******************************************
*              MENU - HW #4              *
*  (1) Calling displayAllDigitRichardY() *
*  (2) Quit                              *
******************************************

Enter an integer for option + ENTER: 2

Have fun!

*/

/** CODE_OUTPUT_ISSUES
No comments.
*/