/**
 * Program Name:  06-23.c
 * Discussion:    Lecture 06/23/2020, Field Specifiers
 * Written By:    Richard Yu
 * Due Date:      N/A
 */

#include <stdio.h>

int main() {
    printf("12345678901234567890\n");

    printf("%d %c %f\n", 23, 'z', 4.1);
    /** Segment Output
     * 12345678901234567890
     * 23 z 4.100000
     */

    printf("%c %d %f\n", 23, 'z', 4.1);
    /** Segment Output
     * 12345678901234567890
     * (ETB) 122 4.100000
     */
    /** Explanation - Where did  and 122 come from?
     * ETB (ASCII integer 23) has no character 
     * 122 is the ASCII integer value of 'z' 
     */

    printf("%8d%8c%10f\n", 23, 'z', 4.1);
    /** Segment Output
     * 12345678901234567890
     *       23       z  4.100000
     */
    /** Explanation - Why are we using 8 and 10?
     * We are using the "minimum-width" field specifier.
     * These are considered the allocated columns for the value.
     */

    printf("%08d%-8c%10f\n", 23, 'z', 4.1);
    /** Segment Output
     * 12345678901234567890
     * 00000023z         4.100000
     */
    /** Explanation - Why are there 0s?
     * The 0 flag fills up the empty columns with leading 0's (also called "zero padding").
     */
    /** Explanation - What happened to the z?
     * The - flag will justify the allocated columns to the LEFT.
     */

    printf("%+08d%-8c%+-10f\n", 23, 'z', 4.1);
    /** Segment Output
     * 12345678901234567890
     * +0000023z       +4.100000
     */
    /** Explanation - Why are we using pluses and minuses in the format specifier?
     * We can use combinations of flags.
     * The + flag will print the sign depending on whether the value is positive or negative.
     *  i.e. An integer 16 would be displayed as +16
     * Again, minuses will justify the values to the left.
     */

    printf("%+08d%-8c%+-10.2f\n", 23, 'z', 4.1);
    /** Segment Output
     * 12345678901234567890
     * +0000023z       +4.10
     */
    /** Explanation - How did we decrease the amount of zeros for 4.10?
     * We can increase the precision a given value using the . modifier.
     */

    return 0;
}