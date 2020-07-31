#include <stdio.h>
#include "lecture-07-21.h"

// Function Prototypes

// Application Driver
int main() {

    int ary1[3] = { 5, 21, 10 };

    sortBubble1(ary1, 3);

    return 0;
}

// Function Definitions
void sortBubble1(int array[], int size) {
    int tmp;
    
    // Goal #1 -- with index 0
    if (array[0] < array[1]) {
        tmp = array[0];
        array[0] = array[1];
        array[1] = tmp;
    }

    if (array[0] < array[2]) {
        tmp = array[0];
        array[0] = array[2];
        array[2] = tmp;
    }

    // Goal #2 -- with index 1
    if (array[1] < array[2]) {
        tmp = array[1];
        array[1] = array[2];
        array[2] = tmp;
    }
}

void sortBubble2(int array[], int size) {
    int tmp;
    int i;
    
    // Goal #1 -- with index 0
    i = 0;
    if (array[i] < array[1]) {
        tmp = array[i];
        array[i] = array[1];
        array[1] = tmp;
    }

    if (array[i] < array[2]) {
        tmp = array[i];
        array[i] = array[2];
        array[2] = tmp;
    }

    // Goal #2 -- with index 1
    i++;
    if (array[i] < array[2]) {
        tmp = array[i];
        array[i] = array[2];
        array[2] = tmp;
    }
}

void sortBubble3(int array[], int size) {
    int tmp;
    int i;
    int j;
    
    // Goal #1 -- with index 0
    i = 0;
    for (j = 1; j < 3; j++) {
        if (array[i] < array[j]) {
            tmp = array[i];
            array[i] = array[j];
            array[j] = tmp;
        }
    }

    /*
    if (array[i] < array[2]) {
        tmp = array[i];
        array[i] = array[2];
        array[2] = tmp;
    }
    */

    // Goal #2 -- with index 1
    i++;

    for (j = i; j < 3; j++) {
        if (array[i] < array[j]) {
            tmp = array[i];
            array[i] = array[j];
            array[j] = tmp;
        }
    }
}

void sortBubble4(int array[], int size) {
    int tmp;
    int i;
    int j;

    i = 0;
    for (j = i + 1; j < 3; j++) {
        if (array[i] < array[j]) {
            tmp = array[i];
            array[i] = array[j];
            array[j] = tmp;
        }
    }

    i++;
    for (j = i + 1; j < 3; j++) {
        if (array[i] < array[j]) {
            tmp = array[i];
            array[i] = array[j];
            array[j] = tmp;
        }
    }
}

void sortBubble5(int array[], int size) {
    int tmp;
    // int i;
    // int j;

    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (array[i] < array[j]) {
                tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            }
        }
    }
}


void foo100() {
    int countArray[3] = { 0, 0, 0 };
    int iAry1[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    // First 4 values are "shown", remaining are all 0
    int iAry2[10] = { 0, 1, 2, 3 };

    for (int i = 0; i < 3; i++) {
        countArray[i] = 0;
    }
}

void foo101() {
    int userInput;

    /*
    if (userInput % 2 == 0) {
        printf("\n%d is even!\n", userInput);
    } else {
        printf("\n%d is odd!\n", userInput);
    }
    */

    if (userInput % 2) {
        printf("\n%d is odd!\n", userInput);
    } else {
        printf("\n%d is even!\n", userInput);
    }
}


/*
Quiz 1: Max points (15)
Quiz 2: Most people got it (10)
Quiz 3: (25)
Quiz 4: (50)

An array of 3 ints.
5 | 21 | 10

Goal #1           Goal #2
21 | ? | ?   ->   21 | 10 | ?   -> 21 | 10 | 5
(work index 0)    (work index 1)

** Swapping Code **
if (array[0] < array[1]) {
    tmp = array[0];
    array[0] = array[1];
    array[1] = tmp;
}

if (array[0] < array[2]) {
    tmp = array[0];
    array[0] = array[2];
    array[2] = tmp;
}

*/