/**
 * Program Name:  cis6Summer2020RichardYuFinalVersionB.c
 * Discussion:    Final Exam Version B
 * Written By:    Richard Yu
 * Date:          2020/07/23
 */

#include <stdio.h>

// Function Prototypes
void displayClassInfoRichardY(void);
void displayLoopMenuRichardY(void);
void displayLargestEvenDigitInfoRichardY(double);

// Application Driver
int main() {

    displayClassInfoRichardY();
    
    displayLoopMenuRichardY();

    return 0;
}

// Function Definitions
void displayClassInfoRichardY() {
    printf("CIS 6 - Introduction to C Programming\n"
        "Laney College\n"
        "Richard Yu\n\n"
        
        "Final Exam Information --\n"
        "  Written by:     Richard Yu\n"
        "  Submitted Date: 2020/07/23\n");

    return;
}

void displayLoopMenuRichardY() {
    int userSelectionRY;
    double userFloatRY;

    do {
        printf("\n******************************************************\n"
          "*             MENU - Final Exam Version B            *\n"
          "*  (1) Calling displayLargestEvenDigitInfoRichardY() *\n"
          "*  (2) Quit                                          *\n"
          "******************************************************\n");
        
        printf("Enter an integer for option + ENTER: ");
        scanf_s("%d", &userSelectionRY);

        switch (userSelectionRY) {
            case 1:
                printf("\nEnter an floating-point: ");
                scanf_s("%lf", &userFloatRY);
                printf("\nCalling displayLargestEvenDigitInfoRichardY() with argument "
                    "of %lf\n\n", userFloatRY);
                displayLargestEvenDigitInfoRichardY(userFloatRY);
                
                break;
            case 2:
                printf("\nHave fun!\n");

                break;
            default:
                printf("\nWrong Option!\n");
        }
    } while (userSelectionRY != 2);

    return;
}

void displayLargestEvenDigitInfoRichardY(double userDoubleRY) {
    int digitsArrayRY[10] = { 0 };
    int evenDigitsCountRY = 0;
    int addlUniqueEvenDigitsCountRY = 0;
    int floatAsIntRY = userDoubleRY;
    int floatAsIntTempRY;

    if (userDoubleRY < 0) {
        printf("  The given argument of %lf is a negative value.\n", userDoubleRY);
    } else if (userDoubleRY > 0) {
        printf("  The given argument of %lf is a positive value.\n", userDoubleRY);
    } else {
        printf("  The given argument of %lf is ZERO.\n", userDoubleRY);
    }

    printf("  %lf has %d as its integral portion.\n\n", userDoubleRY, floatAsIntRY);

    printf("  For this integral portion of %d --\n", floatAsIntRY);

    floatAsIntRY = (floatAsIntRY < 0) ? -floatAsIntRY : floatAsIntRY;
    floatAsIntTempRY = floatAsIntRY;

    do {
        if (floatAsIntRY % 2 == 0) {
            evenDigitsCountRY++;
        }

        floatAsIntRY /= 10;
    } while (floatAsIntRY);

    printf("    There is/are %d even digit(s).\n", evenDigitsCountRY);

    if (evenDigitsCountRY) {
        printf("\n    Looking from the LSD toward the MSD, the even digit(s) would "
            "be\n");
        
        do {
            if (floatAsIntTempRY % 2 == 0) {
                printf("      %d\n", floatAsIntTempRY % 10);
                digitsArrayRY[floatAsIntTempRY % 10]++;
            }

            if (digitsArrayRY[floatAsIntTempRY % 10] == 1) {
                addlUniqueEvenDigitsCountRY++;
            }

            floatAsIntTempRY /= 10;
        } while (floatAsIntTempRY);

        for (int i = 9; i >= 0; i--) {
            if (digitsArrayRY[i]) {
                printf("\n    %d is the largest even digit.\n", i);
                printf("    There is/are %d largest even digit(s).\n\n", digitsArrayRY[i]);

                printf("    Along with this unique largest even digit of %d --\n", i);
                printf("      There is/are %d additional unique even digit(s).\n", addlUniqueEvenDigitsCountRY - 1);

                i = 0;
            }
        }
    }

    return;
}

/** PROGRAM_OUTPUT
CIS 6 - Introduction to C Programming
Laney College
Richard Yu

Final Exam Information --
  Written by:     Richard Yu
  Submitted Date: 2020/07/23

******************************************************
*             MENU - Final Exam Version B            *
*  (1) Calling displayLargestEvenDigitInfoRichardY() *
*  (2) Quit                                          *
******************************************************
Enter an integer for option + ENTER: 6

Wrong Option!

******************************************************
*             MENU - Final Exam Version B            *
*  (1) Calling displayLargestEvenDigitInfoRichardY() *
*  (2) Quit                                          *
******************************************************
Enter an integer for option + ENTER: -1

Wrong Option!

******************************************************
*             MENU - Final Exam Version B            *
*  (1) Calling displayLargestEvenDigitInfoRichardY() *
*  (2) Quit                                          *
******************************************************
Enter an integer for option + ENTER: 1

Enter an floating-point: -9.0

Calling displayLargestEvenDigitInfoRichardY() with argument of -9.000000

  The given argument of -9.000000 is a negative value.
  -9.000000 has -9 as its integral portion.

  For this integral portion of -9 --
    There is/are 0 even digit(s).

******************************************************
*             MENU - Final Exam Version B            *
*  (1) Calling displayLargestEvenDigitInfoRichardY() *
*  (2) Quit                                          *
******************************************************
Enter an integer for option + ENTER: 8

Wrong Option!

******************************************************
*             MENU - Final Exam Version B            *
*  (1) Calling displayLargestEvenDigitInfoRichardY() *
*  (2) Quit                                          *
******************************************************
Enter an integer for option + ENTER: 1

Enter an floating-point: 23456.7668

Calling displayLargestEvenDigitInfoRichardY() with argument of 23456.766800

  The given argument of 23456.766800 is a positive value.
  23456.766800 has 23456 as its integral portion.

  For this integral portion of 23456 --
    There is/are 3 even digit(s).

    Looking from the LSD toward the MSD, the even digit(s) would be
      6
      4
      2

    6 is the largest even digit.
    There is/are 1 largest even digit(s).

    Along with this unique largest even digit of 6 --
      There is/are 2 additional unique even digit(s).

******************************************************
*             MENU - Final Exam Version B            *
*  (1) Calling displayLargestEvenDigitInfoRichardY() *
*  (2) Quit                                          *
******************************************************
Enter an integer for option + ENTER: 1

Enter an floating-point: -3419.766

Calling displayLargestEvenDigitInfoRichardY() with argument of -3419.766000

  The given argument of -3419.766000 is a negative value.
  -3419.766000 has -3419 as its integral portion.

  For this integral portion of -3419 --
    There is/are 1 even digit(s).

    Looking from the LSD toward the MSD, the even digit(s) would be
      4

    4 is the largest even digit.
    There is/are 1 largest even digit(s).

    Along with this unique largest even digit of 4 --
      There is/are 0 additional unique even digit(s).

******************************************************
*             MENU - Final Exam Version B            *
*  (1) Calling displayLargestEvenDigitInfoRichardY() *
*  (2) Quit                                          *
******************************************************
Enter an integer for option + ENTER: 1

Enter an floating-point: -2429.766

Calling displayLargestEvenDigitInfoRichardY() with argument of -2429.766000

  The given argument of -2429.766000 is a negative value.
  -2429.766000 has -2429 as its integral portion.

  For this integral portion of -2429 --
    There is/are 3 even digit(s).

    Looking from the LSD toward the MSD, the even digit(s) would be
      2
      4
      2

    4 is the largest even digit.
    There is/are 1 largest even digit(s).

    Along with this unique largest even digit of 4 --
      There is/are 1 additional unique even digit(s).

******************************************************
*             MENU - Final Exam Version B            *
*  (1) Calling displayLargestEvenDigitInfoRichardY() *
*  (2) Quit                                          *
******************************************************
Enter an integer for option + ENTER: 1

Enter an floating-point: -2208.766

Calling displayLargestEvenDigitInfoRichardY() with argument of -2208.766000

  The given argument of -2208.766000 is a negative value.
  -2208.766000 has -2208 as its integral portion.

  For this integral portion of -2208 --
    There is/are 4 even digit(s).

    Looking from the LSD toward the MSD, the even digit(s) would be
      8
      0
      2
      2

    8 is the largest even digit.
    There is/are 1 largest even digit(s).

    Along with this unique largest even digit of 8 --
      There is/are 2 additional unique even digit(s).

******************************************************
*             MENU - Final Exam Version B            *
*  (1) Calling displayLargestEvenDigitInfoRichardY() *
*  (2) Quit                                          *
******************************************************
Enter an integer for option + ENTER: 1

Enter an floating-point: -31597.766

Calling displayLargestEvenDigitInfoRichardY() with argument of -31597.766000

  The given argument of -31597.766000 is a negative value.
  -31597.766000 has -31597 as its integral portion.

  For this integral portion of -31597 --
    There is/are 0 even digit(s).

******************************************************
*             MENU - Final Exam Version B            *
*  (1) Calling displayLargestEvenDigitInfoRichardY() *
*  (2) Quit                                          *
******************************************************
Enter an integer for option + ENTER: 1

Enter an floating-point: 0.0

Calling displayLargestEvenDigitInfoRichardY() with argument of 0.000000

  The given argument of 0.000000 is ZERO.
  0.000000 has 0 as its integral portion.

  For this integral portion of 0 --
    There is/are 1 even digit(s).

    Looking from the LSD toward the MSD, the even digit(s) would be
      0

    0 is the largest even digit.
    There is/are 1 largest even digit(s).

    Along with this unique largest even digit of 0 --
      There is/are 0 additional unique even digit(s).

******************************************************
*             MENU - Final Exam Version B            *
*  (1) Calling displayLargestEvenDigitInfoRichardY() *
*  (2) Quit                                          *
******************************************************
Enter an integer for option + ENTER: 2

Have fun!

*/

/** CODE_OUTPUT_ISSUES
No comments.
*/