/**
 * Program Name:  cis6Summer2020RichardYuQuiz0720.c
 * Discussion:    Quiz 07/20
 * Written By:    Richard Yu
 * Date:          2020/07/20
 */

#include <stdio.h>

// Function Prototypes
void displayClassInfoRichardY(void);
void displayLoopMenu(void);
void displayOddDigitRichardY(int);

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
        
        "Quiz Information --\n"
        "  Number:         Quiz0720,\n"
        "  Written by:     Richard Yu\n"
        "  Submitted Date: 2020/07/20\n\n");

    return;
}

void displayLoopMenu() {
    int userSelection;
    int userInt;

    do {
        printf("\n******************************************\n"
          "*             MENU - Quiz0720            *\n"
          "*  (1) Calling displayOddDigitRichardY() *\n"
          "*  (2) Quit                              *\n"
          "******************************************\n\n");
        
        printf("Enter an integer for option + ENTER: ");
        scanf_s("%d", &userSelection);

        switch (userSelection) {
            case 1:
                printf("\nEnter an integer: ");
                scanf_s("%d", &userInt);
                printf("\nCalling displayOddDigitRichardY() with the "
                    "argument of %d --\n", userInt);
                displayOddDigitRichardY(userInt);
                
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

void displayOddDigitRichardY(int userInt) {
    int oddDigitsCount = 0;
    int userIntTemp;

    userInt = (userInt < 0) ? -userInt : userInt;
    userIntTemp = userInt;

    do {
        if ((userInt % 10) % 2 == 1) {
            oddDigitsCount++;
        }
        userInt /= 10;
    } while (userInt);

    printf("\n  There is/are %d odd digit(s).\n", oddDigitsCount);

    if (!userIntTemp) {
        return;
    }

    printf("\n  The digit(s) would be\n");
    
    do {
        if ((userIntTemp % 10) % 2 == 1) {
            printf("    %d\n", (userIntTemp % 10));
        }
        userIntTemp /= 10;
    } while (userIntTemp);
    
    return;
}

/** PROGRAM_OUTPUT 
CIS 6 - Introduction to C Programming
Laney College
Richard Yu

Quiz Information --
  Number:         Quiz0720,
  Written by:     Richard Yu
  Submitted Date: 2020/07/20


******************************************
*             MENU - Quiz0720            *
*  (1) Calling displayOddDigitRichardY() *
*  (2) Quit                              *
******************************************

Enter an integer for option + ENTER: 6

Wrong Option!

******************************************
*             MENU - Quiz0720            *
*  (1) Calling displayOddDigitRichardY() *
*  (2) Quit                              *
******************************************

Enter an integer for option + ENTER: 1

Enter an integer: -9

Calling displayOddDigitRichardY() with the argument of -9 --

  There is/are 1 odd digit(s).

  The digit(s) would be
    9

******************************************
*             MENU - Quiz0720            *
*  (1) Calling displayOddDigitRichardY() *
*  (2) Quit                              *
******************************************

Enter an integer for option + ENTER: 1

Enter an integer: -13454

Calling displayOddDigitRichardY() with the argument of -13454 --

  There is/are 3 odd digit(s).

  The digit(s) would be
    5
    3
    1

******************************************
*             MENU - Quiz0720            *
*  (1) Calling displayOddDigitRichardY() *
*  (2) Quit                              *
******************************************

Enter an integer for option + ENTER: 1

Enter an integer: 3450406

Calling displayOddDigitRichardY() with the argument of 3450406 --

  There is/are 2 odd digit(s).

  The digit(s) would be
    5
    3

******************************************
*             MENU - Quiz0720            *
*  (1) Calling displayOddDigitRichardY() *
*  (2) Quit                              *
******************************************

Enter an integer for option + ENTER: 1

Enter an integer: 0

Calling displayOddDigitRichardY() with the argument of 0 --

  There is/are 0 odd digit(s).

******************************************
*             MENU - Quiz0720            *
*  (1) Calling displayOddDigitRichardY() *
*  (2) Quit                              *
******************************************

Enter an integer for option + ENTER: 2

Have fun!

*/

/** CODE_OUTPUT_ISSUES
No comments.
*/