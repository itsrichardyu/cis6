/**
 * Program Name:  cis6Summer2020RichardYuHw2Ex1.c
 * Discussion:    HW #2 Ex #1
 * Written By:    Richard Yu
 * Date:          2020/06/26
 */

#include <stdio.h>

// Application Driver
int main() {
    char cVar = 'z';
    int iVar = 23;
    double dVar = 4.1;

    printf("Class Information --\n"
    "  CIS 6 - Introduction to Programming (Using C)\n"
    "  Laney College\n\n"

    "Assignment Information --\n"
    "  Assignment Number:  Homework #2,\n"
    "                      Exercise #1\n"
    "  Written by:         Richard Yu\n"
    "  Submitted Date:     2020/06/26\n\n\n");

    printf("1234567890123456789012345678901234567890\n");
    printf("%8d%8c%10f\n", iVar, cVar, dVar);
    printf("%8c%8d%10f\n", iVar, cVar, dVar);
    printf("%8c%8d%10f\n", cVar, iVar, dVar);
    printf("%8c%10f%8d\n\n", cVar, dVar, iVar);

    printf("%8d%8c%10f\n", iVar, cVar, dVar);
    printf("%8c%8d%10f\n", iVar, cVar, dVar);
    printf("%8c%08d%10.4f\n", cVar, iVar, dVar);
    printf("%8c%010.2f%8d\n", cVar, dVar, iVar);

    printf("%d%14c%18f\n", iVar, cVar, dVar);
    printf("%c%23d%10f\n", iVar, cVar, dVar);
    printf("%-8c%08d%10.4f\n", cVar, iVar, dVar);
    printf("%-8c%010.2f%8d\n", cVar, dVar, iVar);

    return 0;
}

/** PROGRAM_OUTPUT
Class Information --
  CIS 6 - Introduction to Programming (Using C)
  Laney College

Assignment Information --
  Assignment Number:  Homework #2,
                      Exercise #1
  Written by:         Richard Yu
  Submitted Date:     2020/06/26


1234567890123456789012345678901234567890
      23       z  4.100000
            122  4.100000
       z      23  4.100000
       z  4.100000      23

      23       z  4.100000
            122  4.100000
       z00000023    4.1000
       z0000004.10      23
23             z          4.100000
                    122  4.100000
z       00000023    4.1000
z       0000004.10      23

*/

/** CODE_OUTPUT_ISSUES
No comments.
*/