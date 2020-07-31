/**
 * Program Name:  07-07.c
 * Discussion:    
 * Written By:    Richard Yu
 * Date:          2020/07/07
 */

#include <stdio.h>

int main() {
    int absValue;
    int userValue = 5;

    printf("\nFirst Line\n");
    printf("\nSecond Line\n");

    printf("\nNext Logic\n");
    
    printf("\nAnother Logic\n");

    5 ? printf("\nIt is true!\n") : printf("\nIt is not true!\n");

    (userValue > 0) ? (absValue = userValue) : (absValue = -userValue);

    return 0;
}

/** PROGRAM_OUTPUT
First Line

Second Line

Next Logic

Another Logic

It is true!
*/