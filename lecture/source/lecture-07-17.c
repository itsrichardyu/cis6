#include <stdio.h>

void displaySmallestTemperature(void);
void displayLowestTemperature(void);
void extractCountOfSmallestDigit(void);
void extractCountOfSmallestDigitVers2(void);

int main() {

    return 0;
}

void displaySmallestTemperature() {
    int sunTemperature;
    int monTemperature;
    int tueTemperature;
    int wedTemperature;
    int thuTemperature;
    int friTemperature;
    int satTemperature;

    int smallestTemperature;

    printf("Enter the temperature for Sunday : ");
    scanf("%d", &sunTemperature);
    printf("Enter the temperature for Monday : ");
    scanf("%d", &monTemperature);

    printf("Enter the temperature for Tuesday : ");
    scanf("%d", &tueTemperature);

    printf("Enter the temperature for Wednesday: ");
    scanf("%d", &wedTemperature);

    printf("Enter the temperature for Thursday : ");
    scanf("%d", &thuTemperature);

    printf("Enter the temperature for Friday: ");
    scanf("%d", &friTemperature);

    printf("Enter the temperature for Saturday : ");
    scanf("%d", &satTemperature);

    //
    smallestTemperature = sunTemperature;
    if (smallestTemperature > monTemperature) {
        smallestTemperature = monTemperature;
    }
    if (smallestTemperature > tueTemperature) {
        smallestTemperature = tueTemperature;
    }
    if (smallestTemperature > wedTemperature) {
        smallestTemperature = wedTemperature;
    }
    if (smallestTemperature > thuTemperature) {
        smallestTemperature = thuTemperature;
    }
    if (smallestTemperature > friTemperature) {
        smallestTemperature = friTemperature;
    }
    if (smallestTemperature > satTemperature) {
        smallestTemperature = satTemperature;
    }

    printf("\nThe lowest temperature is %d\n", smallestTemperature);
}

/*
Get smallest value
1. Assume the smallest with some reasonable value
2. Compare the smallest with the next value, update as needed
3. Repeat with remaining values as needed
*/

void displayLowestTemperature() {
    int temperatureAry[7];
    int lowestTemperature;
    int i;

    for (i = 0; i < 7; i++) {
        printf("\nEnter the temperature for day %d : ", i);
        scanf("%d", &temperatureAry[i]);
    }

    lowestTemperature = temperatureAry[0];
    for (i = 0; i < 7; i++) {
        if (lowestTemperature > temperatureAry[i]) {
            lowestTemperature = temperatureAry[i];
        }
    }

    printf("\nThe lowest temperature is %d ", lowestTemperature);
    for (i = 0; i < 7; i++) {
        if (lowestTemperature == temperatureAry[i]) {
            printf("; and it is seen on day %d.\n", i);
            i = 7;
        }
    }
}

void extractCountOfSmallestDigit() {
    int userValue;
    int smallestDigit;
    int countOfSmallestDigit; // 10, 9...
    int digitCountAry[10];
    int tmp;
    int i;

    printf("\nEnter an int: ");
    scanf("%d", &userValue);

    smallestDigit = 9;

    tmp = (userValue < 0) ? -userValue : userValue;
    do {
        /*
        if (smallestDigit > (tmp % 10)) {
            smallestDigit = tmp % 10;
        }
        */
        if (tmp % 10 == smallestDigit) {
            countOfSmallestDigit++;
        }
        tmp /= 10;
    } while (tmp);

    printf("\nThe smallest digit in %d is %d\n", userValue, smallestDigit);
    printf("\nThe smallest digit is seen %d times\n", countOfSmallestDigit);

    return;
}

void extractCountOfSmallestDigitVers2() {
    int userValue;
    int smallestDigit;
    int countOfSmallestDigit; // 10, 9...
    int digitCountAry[10];
    int tmp;
    int i;

    printf("\nEnter an int: ");
    scanf("%d", &userValue);

    smallestDigit = 9;

    tmp = (userValue < 0) ? -userValue : userValue;

    for (i = 0; i < 10; i++) {
        digitCountAry[i] = 0;
    }

    do {
        /*
        if (smallestDigit > (tmp % 10)) {
            smallestDigit = tmp % 10;
        }
        if (tmp % 10 == smallestDigit) {
            countOfSmallestDigit++;
        }
        */
       if (tmp % 10 == smallestDigit) {
           digitCountAry[smallestDigit]++;
       }

        tmp /= 10;
    } while (tmp);

    printf("\nThe smallest digit in %d is %d\n", userValue, smallestDigit);
    printf("\nThe smallest digit is seen %d times\n", countOfSmallestDigit);

    //return;
    return digitCountAry[smallestDigit];
}

/*
To reverse sign of value
DO use negation, i.e. aValue = -aValue;
DO NOT use aValue = -1 * aValue;

To increase the value by 1 (increment)
DO use aValue++
DO NOT use aValue = aValue + 1 or aValue += 1;
*/