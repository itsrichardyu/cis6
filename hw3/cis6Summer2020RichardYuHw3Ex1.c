/**
 * Program Name:  cis6Summer2020RichardYuHw3Ex1.c
 * Discussion:    HW #3 Ex #1
 * Written By:    Richard Yu
 * Date:          2020/07/06
 */

#include <stdio.h>

// Function Prototypes
void displayClassInfoRichardY(void);
int extractDigit1RichardY(void);
int extractDigit10RichardY(void);

// Application Driver
int main() {
    int digitOne;
    int digitTen;

    displayClassInfoRichardY();

    printf("Calling extractDigit1RichardY()\n");
    digitOne = extractDigit1RichardY();
    printf("After the function extractDigit1RichardY() finished and returned:"
        "\n  1-digit : %d\n\n", digitOne);

    printf("Calling extractDigit10RichardY()\n");
    digitTen = extractDigit10RichardY();
    printf("After the function extractDigit10RichardY() finished and returned:"
        "\n  10-digit : %d\n\n", digitTen);

    return 0;
}

// Function Definitions
void displayClassInfoRichardY() {
    printf("CIS 6 - Introduction to C Programming\n"
      "Laney College\n"
      "Richard Yu\n\n"

      "Assignment Information --\n"
      "  Assignment Number:  Homework 3,\n"
      "                      Coding Assignment -- Exercise #1\n"
      "  Written by:         Richard Yu\n"
      "  Submitted Date:     2020/07/06\n\n");

    return;
}

int extractDigit1RichardY() {
    double userValueFloat;
    int userValueInt;

    printf("  Enter a floating-point: ");
    scanf_s("%lf", &userValueFloat);

    userValueInt = (int) userValueFloat;

    (userValueFloat > 0) ? printf("\n  %lf is a positive value!\n\n", 
        userValueFloat) : printf("\n  %lf is a non-positive value!"
        "\n\n", userValueFloat);

    printf("  The integral part of %lf is %d!\n\n", userValueFloat, 
        userValueInt);

    return ((userValueInt < 0) ? -userValueInt : userValueInt) % 10;
}

int extractDigit10RichardY() {
    double userValueFloat;
    int userValueInt;

    printf("  Enter a floating-point: ");
    scanf_s("%lf", &userValueFloat);

    userValueInt = (int) userValueFloat;

    (userValueFloat > 0) ? printf("\n  %lf is a positive value!\n\n", 
        userValueFloat) : printf("\n  %lf is a non-positive value!"
        "\n\n", userValueFloat);

    printf("  The integral part of %lf is %d!\n\n", userValueFloat, 
        userValueInt);

    return ((userValueInt < 0) ? -userValueInt : userValueInt) / 10 % 10;
}

// --------------- RUN #1 ---------------
/** PROGRAM_OUTPUT - Sample Run #1
CIS 6 - Introduction to C Programming
Laney College
Richard Yu

Assignment Information --
  Assignment Number:  Homework 3,
                      Coding Assignment -- Exercise #1
  Written by:         Richard Yu
  Submitted Date:     2020/07/06

Calling extractDigit1RichardY()
  Enter a floating-point: 12385.456

  12385.456000 is a positive value!

  The integral part of 12385.456000 is 12385!

After the function extractDigit1RichardY() finished and returned:
  1-digit : 5

Calling extractDigit10RichardY()
  Enter a floating-point: 12385.456

  12385.456000 is a positive value!

  The integral part of 12385.456000 is 12385!

After the function extractDigit10RichardY() finished and returned:
  10-digit : 8

*/

// --------------- RUN #2 ---------------
/** PROGRAM_OUTPUT - Sample Run #2
CIS 6 - Introduction to C Programming
Laney College
Richard Yu

Assignment Information --
  Assignment Number:  Homework 3,
                      Coding Assignment -- Exercise #1
  Written by:         Richard Yu
  Submitted Date:     2020/07/06

Calling extractDigit1RichardY()
  Enter a floating-point: -456.12385

  -456.123850 is a non-positive value!

  The integral part of -456.123850 is -456!

After the function extractDigit1RichardY() finished and returned:
  1-digit : 6

Calling extractDigit10RichardY()
  Enter a floating-point: -456.12385

  -456.123850 is a non-positive value!

  The integral part of -456.123850 is -456!

After the function extractDigit10RichardY() finished and returned:
  10-digit : 5

*/

// --------------- RUN #3 ---------------
/** PROGRAM_OUTPUT - Sample Run #3
CIS 6 - Introduction to C Programming
Laney College
Richard Yu

Assignment Information --
  Assignment Number:  Homework 3,
                      Coding Assignment -- Exercise #1
  Written by:         Richard Yu
  Submitted Date:     2020/07/06

Calling extractDigit1RichardY()
  Enter a floating-point: -1230.456

  -1230.456000 is a non-positive value!

  The integral part of -1230.456000 is -1230!

After the function extractDigit1RichardY() finished and returned:
  1-digit : 0

Calling extractDigit10RichardY()
  Enter a floating-point: -1230.456

  -1230.456000 is a non-positive value!

  The integral part of -1230.456000 is -1230!

After the function extractDigit10RichardY() finished and returned:
  10-digit : 3

*/

// --------------- RUN #4 ---------------
/** PROGRAM_OUTPUT - Sample Run #4
CIS 6 - Introduction to C Programming
Laney College
Richard Yu

Assignment Information --
  Assignment Number:  Homework 3,
                      Coding Assignment -- Exercise #1
  Written by:         Richard Yu
  Submitted Date:     2020/07/06

Calling extractDigit1RichardY()
  Enter a floating-point: -0.456

  -0.456000 is a non-positive value!

  The integral part of -0.456000 is 0!

After the function extractDigit1RichardY() finished and returned:
  1-digit : 0

Calling extractDigit10RichardY()
  Enter a floating-point: -0.456

  -0.456000 is a non-positive value!

  The integral part of -0.456000 is 0!

After the function extractDigit10RichardY() finished and returned:
  10-digit : 0

*/

/** CODE_OUTPUT_ISSUES
No comments.
*/