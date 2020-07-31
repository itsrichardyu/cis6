#include <stdio.h>

// Function Prototypes
int extractSmallestDigitVersion2(void);
int extractSmallestDigitVersion3(void);

// Application Driver
int main() {
    extractSmallestDigitVersion3();

    return 0;
}

// Function Definitions
int extractSmallestDigitVersion2() {
    int userValue;
    int smallestDigit;
    int countOfSmallestDigit = 0;
    int digitCountAry[10];
    int tmp;
    int i;

    printf("\nEnter an int: ");
    scanf("%d", &userValue);

    // smallestDigit = 9;

    // Get LSD of userValue
    smallestDigit = ((userValue < 0) ? -userValue : userValue) % 10; 
    // smallestDigit = tmp % 10;

    // tmp = (userValue < 0) ? -userValue : userValue;
    do {
        /* 
        You can remove the curly braces of if-structure
        but it is confusing without.
        */
        if (smallestDigit > (tmp % 10)) {
            smallestDigit = tmp % 10;
        }
        
        tmp /= 10;
    } while (tmp);

    printf("\nThe smallest digit in %d is %d\n", userValue, smallestDigit);

    tmp = (userValue < 0) ? -userValue : userValue;
    do {
        if (smallestDigit == (tmp % 10)) {
            countOfSmallestDigit++;
        }

        tmp /= 10;
    } while (tmp);
}

int extractSmallestDigitVersion3() {
    int userValue;
    int smallestDigit;
    int uniqueDigits = 0;
    int countOfSmallestDigit = 0;
    int digitCountAry[10];
    int tmp;
    int i;

    printf("\nEnter an int: ");
    scanf("%d", &userValue);

    smallestDigit = ((userValue < 0) ? -userValue : userValue) % 10; 

    do {
        if (smallestDigit > (tmp % 10)) {
            smallestDigit = tmp % 10;
        }
        
        tmp /= 10;
    } while (tmp);
    
    printf("\nThe smallest digit in %d is %d\n", userValue, smallestDigit);

    // Initialize all elements to 0
    for (i = 0; i < 10; i++) {
        digitCountAry[i] = 0;
    }

    // Abs value
    tmp = (userValue < 0) ? -userValue : userValue;
    do {
        /*
        if (smallestDigit == (tmp % 10)) {
            countOfSmallestDigit++;
        }
        */

        /*
        if (tmp % 10 == smallestDigit) {
        digitCountAry[smallestDigit]++;
        }
        */

        /* 
        • 0-9 as index
        • element at THAT index would be incremented
        • then digit removed.
        */
        digitCountAry[tmp % 10]++; 

        tmp /= 10;
    } while (tmp);

    printf("Unique digits %d\n", uniqueDigits);

    for (i = 0; i < 10; i++) {
        if (digitCountAry[i] != 0)
            printf("  %d seen %d time(s)\n", i, digitCountAry[i]);
    }
   
}

/*
1712912

Array:
Index | Count

0 | 0
1 | 0 1 2 3
2 | 0 1 2
3 | 0
4 | 0
5 | 0
6 | 0
7 | 0 1
8 | 0
9 | 0 1

for (i = 0; i < 10; i++) {
    if (ary[i] != 0) {          // Don't use "!= 0", there is overhead
        smallestDigit = i;
        i = 10;                 // To stop the loop.
    }
}

*** Sorting Discussion ***

5 | 21 | 10   ->   5 | 10 | 21   or   21 | 10 | 5

** Bubble Sort **

Largest -> Smallest (Descending sort)

Grab largest value, put it at the top.

** Swapping **

int value1;
int value2;
int tmp;

tmp = value1;
value1 = value2;
value2 = tmp;

*/