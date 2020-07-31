#include <stdio.h>

// Function Prototypes
void runMenuQuiz0720(void);
void displayOddDigit(int);
void updateDigitExistenceArray(int[], int);

// Application Driver
int main() {

    return 0;
}


// Function Definitions
void runMenuQuiz0720() {
    int option;
    int userInput;
    
    do {
        printf("\nMenu -- "
        "\n1. Calling displayOddDigit()"
        "\n2. Quit");
        printf("\nEnter the option: ");
        scanf("%d", &option);
        switch (option) {
            case 1:
                printf("\nEnter the integer: ");
                scanf("%d", &userInput);
                printf("Calling displayOddDigit() with %d as argument\n",
                    userInput);
                displayOddDigit(userInput);
                break;
            case 2:
                printf("Have fun!");
                break;
            default:
                printf("Wrong option!");
        }
    } while (option != 2);
}

void displayOddDigit(int arg) {
    int oddDigitCount = 0;
    int tmp;

    tmp = arg;
    do {
        if (tmp % 2) {
            oddDigitCount++;
        }
        tmp /= 10;
    } while (tmp);

    printf("\nThere is/are %d odd digit(s)\n", oddDigitCount);

    if (oddDigitCount) {
        tmp = (arg < 0) ? -arg : arg;
        printf("\nThe digit(s) would be");
        do {
            if (tmp % 2) {
                printf("\n  %d", tmp % 10);
            }
            tmp /= 10;
        } while (tmp);
    }
}

// Variable length arrays
void foo111(int size) {
    int* iPtr = NULL;

    iPtr = (int*) malloc(size * sizeof (int));
}

void updateDigitExistenceArray(int array[], int size) {
    int digitExistenceArray[10] = { 0 };
    int digitExistenceArray2[10] = { 0 };
    int tmp = array[0];     // work w/ 1st element
    int i;

    if (tmp < 0) {
        tmp = -tmp;
    }

    do {
        digitExistenceArray[tmp % 10] = 1;
        tmp /= 10;
    } while (tmp);

    tmp = (array[1] < 0) ? -(array[1]) : array[1];
    do {
        digitExistenceArray2[tmp % 10] = 1;
        tmp /= 10;
    } while (tmp);

    for (i = 0; i < 10; i++) {
        digitExistenceArray[i] += digitExistenceArray2[i];
    }
}