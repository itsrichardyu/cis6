/**
 * Program Name:  cis6Summer2020YourNameHw3Ex1.c
 * Discussion:    HW #3 Ex #1
 * Written By:    Richard Yu
 * Date:          2020/07/06
 */

#include <stdio.h>

// Function Prototypes

void displayClassInfoRichardY(void);
int extractDigit1RichardY(void);
int extractDigit10RichardY(void);

int main() {

    displayClassInfoRichardY();

    printf("Calling extractDigit1RichardY()\n");
    int digitOne = extractDigit1RichardY();
    printf("After the function extractDigit10RichardY() finished and returned:"
        "\n  1-digit : %d\n\n", digitOne);

    printf("Calling extractDigit10RichardY()\n");
    int digitTen = extractDigit10RichardY();
    printf("After the function extractDigit10RichardY() finished and returned:"
        "\n  10-digit : %d\n\n", digitTen);

    return 0;
}

// Function Definitions

void displayClassInfoRichardY() {
    printf("CIS 6 - Introduction to C Programming\n");
    printf("Laney College\n");
    printf("Richard Yu\n\n");

    printf("Assignment Information --\n");
    printf("  Assignment Number:  Homework 3,\n");
    printf("                      Coding Assignment -- Exercise #1\n");
    printf("  Written by:         Richard Yu\n");
    printf("  Submitted Date:     2020/07/06\n\n");

    return;
}

int extractDigit1RichardY() {
    double floatingPointNumber;
    int digitOne;
    
    printf("  Enter a floating-point: ");
    scanf("%lf", &floatingPointNumber);

    (floatingPointNumber > 0) ? printf("\n  %lf is a positive value!\n\n", 
        floatingPointNumber) : printf("\n  %lf is a non-positive value!"
        "\n\n", floatingPointNumber);

    printf("  The integral part of %lf is %.lf!\n\n", floatingPointNumber, 
        (floatingPointNumber > -1 && floatingPointNumber < 0) 
        ? floatingPointNumber * -1 : floatingPointNumber);

    digitOne = (int) floatingPointNumber % 10;
    digitOne = (digitOne > 0) ? digitOne : digitOne * -1;

    return digitOne;
}

int extractDigit10RichardY() {
    double floatingPointNumber;
    int digitTen;

    printf("  Enter a floating-point: ");
    scanf("%lf", &floatingPointNumber);

    (floatingPointNumber > 0) ? printf("\n  %lf is a positive value!\n\n", 
        floatingPointNumber) : printf("\n  %lf is a non-positive value!"
        "\n\n", floatingPointNumber);

    printf("  The integral part of %lf is %.lf!\n\n", floatingPointNumber, 
        (floatingPointNumber > -1 && floatingPointNumber < 0) 
        ? floatingPointNumber * -1 : floatingPointNumber);

    digitTen = (int) (floatingPointNumber / 10) % 10;
    digitTen = (digitTen > 0) ? digitTen : digitTen * -1;

    return digitTen;
}

/** PROGRAM_OUTPUT 
// --------------- RUN #1 ---------------
// OUTPUT - Sample Run #1
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

After the function extractDigit10RichardY() finished and returned:
  1-digit : 5

Calling extractDigit10RichardY()
  Enter a floating-point: 12385.456

  12385.456000 is a positive value!

  The integral part of 12385.456000 is 12385!

After the function extractDigit10RichardY() finished and returned:
  10-digit : 8

// --------------- RUN #2 ---------------
// OUTPUT - Sample Run #2
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

After the function extractDigit10RichardY() finished and returned:
  1-digit : 6

Calling extractDigit10RichardY()
  Enter a floating-point: -456.12385

  -456.123850 is a non-positive value!

  The integral part of -456.123850 is -456!

After the function extractDigit10RichardY() finished and returned:
  10-digit : 5

// --------------- RUN #3 ---------------
// OUTPUT - Sample Run #3
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

After the function extractDigit10RichardY() finished and returned:
  1-digit : 0

Calling extractDigit10RichardY()
  Enter a floating-point: -1230.456

  -1230.456000 is a non-positive value!

  The integral part of -1230.456000 is -1230!

After the function extractDigit10RichardY() finished and returned:
  10-digit : 3

// --------------- RUN #4 ---------------
// OUTPUT - Sample Run #4
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

After the function extractDigit10RichardY() finished and returned:
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