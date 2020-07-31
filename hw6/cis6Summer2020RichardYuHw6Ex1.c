/**
 * Program Name:  cis6Summer2020RichardYuHw6Ex1.c
 * Discussion:    HW #6 Ex #1
 * Written By:    Richard Yu
 * Date:          2020/07/25
 */

#include <stdio.h>

 // Function Prototypes
void displayClassInfoRichardY(void);
void displayLoopMenu(void);
void displayUniqueEvenOddDigitRichardY(int [], int);

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
        "  Assignment Number:  Homework 6,\n"
        "                      Coding Assignment -- Exercise #1\n"
        "  Written by:         Richard Yu\n"
        "  Submitted Date:     2020/07/25\n");

    return;
}

void displayLoopMenu() {
    int userSelection;
    int arraySize;
    int userValuesArray[5] = { 0 };
    int i;

    do {
        printf("\n\n***************************************************\n"
            "*                    MENU - HW #6                 *\n"
            "*  1. Calling displayUniqueEvenOddDigitRichardY() *\n"
            "*  2. Quit                                        *\n"
            "***************************************************\n\n");

        printf("Enter an integer for option + ENTER: ");
        scanf_s("%d", &userSelection);

        switch (userSelection) {
        case 1:
            printf("\nPlease select the size of the array -- (2 or 5): ");
            scanf_s("%d", &arraySize);

            switch (arraySize) {
            case 2:
                printf("  Enter 2 value(s) for the array elements -\n");

                for (i = 0; i < 2; i++) {
                    printf("    Enter integer #%d: ", (i + 1));
                    scanf_s("%d", &userValuesArray[i]);
                }

                break;
            case 5:
                printf("  Enter 5 value(s) for the array elements -\n");

                for (i = 0; i < 5; i++) {
                    printf("    Enter integer #%d: ", (i + 1));
                    scanf_s("%d", &userValuesArray[i]);
                }

                break;
            default:
                printf("Wrong Array Size!");
            }

            printf("\n  Calling displayUniqueEvenOddDigitRichardY() "
                "with %d int's --", arraySize);
            displayUniqueEvenOddDigitRichardY(userValuesArray, arraySize);

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

void displayUniqueEvenOddDigitRichardY(int userValuesArray[], int arraySize) {
    int totalDigitsCountArray[10] = { 0 };
    int digitExistenceArrayMain[10] = { 0 };
    int digitExistenceArrayTemp[10] = { 0 };
    int digitExistenceArrayTemp2[10] = { 0 };
    int confirmedUniqueDigitArray[10] = { 0 };
    int uniqueEvenDigitsCount = 0;
    int uniqueOddDigitsCount = 0;
    int i;
    int j;

    for (i = 0; i < arraySize; i++) {
        userValuesArray[i] = (userValuesArray[i] < 0) ? -userValuesArray[i] : userValuesArray[i];
    }

    for (i = 0; i < arraySize; i++) {
        do {
            totalDigitsCountArray[userValuesArray[i] % 10]++;
            if (i % 2) {
                digitExistenceArrayTemp[userValuesArray[i] % 10] = 1;
            } else {
                digitExistenceArrayTemp2[userValuesArray[i] % 10] = 1;
            }
            userValuesArray[i] /= 10;
        } while (userValuesArray[i]);
        if (i % 2) {
            for (j = 0; j < 10; j++) {
                digitExistenceArrayTemp[j] += digitExistenceArrayTemp2[j];
                digitExistenceArrayMain[j] += digitExistenceArrayTemp[j];

                digitExistenceArrayTemp[j] = 0;
                digitExistenceArrayTemp2[j] = 0;
            }
        } else if (i == arraySize - 1) {
            for (j = 0; j < 10; j++) {
                digitExistenceArrayMain[j] += digitExistenceArrayTemp2[j];
                digitExistenceArrayTemp[j] = 0;
                digitExistenceArrayTemp2[j] = 0;
            }
        }
    }

    for (i = 0; i < 10; i++) {
        if (digitExistenceArrayMain[i] == 1) {
            confirmedUniqueDigitArray[i]++;
            if (i % 2) {
                uniqueOddDigitsCount++;
            } else {
                uniqueEvenDigitsCount++;
            }
        }
    }

    printf("\n    There is/are %d unique even digit(s).\n", uniqueEvenDigitsCount);

    for (i = 0; i < 10; i+=2) {
        if (digitExistenceArrayMain[i] == 1) {
            printf("      %d occurs %d time(s)\n", i, totalDigitsCountArray[i]);
        }
    }

    printf("\n    There is/are %d unique odd digit(s).\n", uniqueOddDigitsCount);

    for (i = 1; i < 10; i += 2) {
        if (digitExistenceArrayMain[i] == 1) {
            printf("      %d occurs %d time(s)\n", i, totalDigitsCountArray[i]);
        }
    }
}


/** PROGRAM_OUTPUT
CIS 6 - Introduction to C Programming
Laney College
Richard Yu

Assignment Information --
  Assignment Number:  Homework 6,
                      Coding Assignment -- Exercise #1
  Written by:         Richard Yu
  Submitted Date:     2020/07/25


***************************************************
*                    MENU - HW #6                 *
*  1. Calling displayUniqueEvenOddDigitRichardY() *
*  2. Quit                                        *
***************************************************

Enter an integer for option + ENTER: 6

Wrong Option!


***************************************************
*                    MENU - HW #6                 *
*  1. Calling displayUniqueEvenOddDigitRichardY() *
*  2. Quit                                        *
***************************************************

Enter an integer for option + ENTER: 1

Please select the size of the array -- (2 or 5): 2
  Enter 2 value(s) for the array elements -
    Enter integer #1: -1
    Enter integer #2: 18

  Calling displayUniqueEvenOddDigitRichardY() with 2 int's --
    There is/are 1 unique even digit(s).
      8 occurs 1 time(s)

    There is/are 0 unique odd digit(s).


***************************************************
*                    MENU - HW #6                 *
*  1. Calling displayUniqueEvenOddDigitRichardY() *
*  2. Quit                                        *
***************************************************

Enter an integer for option + ENTER: 1

Please select the size of the array -- (2 or 5): 5
  Enter 5 value(s) for the array elements -
    Enter integer #1: -1
    Enter integer #2: 189
    Enter integer #3: -20225
    Enter integer #4: 180
    Enter integer #5: -1767

  Calling displayUniqueEvenOddDigitRichardY() with 5 int's --
    There is/are 2 unique even digit(s).
      2 occurs 3 time(s)
      6 occurs 1 time(s)

    There is/are 3 unique odd digit(s).
      5 occurs 1 time(s)
      7 occurs 2 time(s)
      9 occurs 1 time(s)


***************************************************
*                    MENU - HW #6                 *
*  1. Calling displayUniqueEvenOddDigitRichardY() *
*  2. Quit                                        *
***************************************************

Enter an integer for option + ENTER: 2

Have fun!

*/

/** CODE_OUTPUT_ISSUES
No comments.
*/