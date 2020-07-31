/**
 * Program Name:  06-26.c
 * Discussion:    Lecture 06/26/2020, scanf()
 * Written By:    Richard Yu
 * Due Date:      N/A
 */

#include <stdio.h>

int main() {
    int userValue;
    double usrValue;
    
    printf("Enter an int: ");
    scanf("%d", &userValue);
    printf("%d", userValue);
    /** Segment Output
     * Enter an int: 1500.55
     * 1500
     */
    /** Explanation
     * Attempting to input a floating-point number will truncate the decimal portion.
     */

    printf("\nEnter a floating-point (double): ");
    scanf("%lf", &usrValue);
    printf("%lf", usrValue);
    /** Explanation
     * You need to use %lf to store a double floating-point number.
     */

    /** Handling "___ is a positive value!"
     * Not allowed to use if statement
     *   - Apply ternary operator
     *   - Divide and modulus operators 
     */

    /** Notes
     * =, &, () are operators
     * testValue = 23 is an expression, must have at least 1 operand
     *   - 23 is an operand
     * lvalue, rvalue
     * 
     * 125.69 > 0 is TRUE
     * (userValue > 0)
     * 
     * testExpression ? valueIfTrue : valueIfFalse
     * 
     * 365
     * 3 (hundred), 6 (ten), 5 (unit)
     * 1 digit = 5
     * 10 digit = 6
     * 
     * Make sure both operands are integers
     * You cannot have remainders of floating-point division
     */
    /** Function prototypes notes
     * ie. int extractOneDigit(void);
     * Basically advertising the existence of the function
     * Conditonal operators
     * Modulus operator
     */

    usrValue > 5 ? printf("YES") : printf("NO");
    usrValue > 0 ? print("Positive") : printf("Non Positive");

    return 0;
}