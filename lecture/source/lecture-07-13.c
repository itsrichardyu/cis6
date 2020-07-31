/**
 * Program Name:  07-13.c
 * Discussion:    HW #4
 * Written By:    Richard Yu
 * Date:          2020/07/13
 */

#include <stdio.h>

int main() {
    
    return 0;
}

void someFunction(arg) {
    int tmp;
    int digitCount;

    tmp = arg;
    digitCount = 0;

    do {
        digitCount++;
        tmp /= 10;
    } while (tmp);
}