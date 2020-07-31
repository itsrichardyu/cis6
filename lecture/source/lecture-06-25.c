/**
 * Program Name:  06-25.c
 * Discussion:    Lecture 06/25/2020, Variables
 * Written By:    Richard Yu
 * Due Date:      N/A
 */

#include <stdio.h>

int main() {
    int testValue;
    testValue = 23;
    printf("%d\n", testValue);

    printf("The address of the memory block reserved for testValue: %p\n", &testValue);
    /** Sample Segment Output
     * The address of the memory block reserved for testValue: 0061FF1C
     */
    /** Explanation 
     * This is the location in memory where testValue is stored.
     */

    return 0;
}