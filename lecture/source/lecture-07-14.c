void printDigitCount(int);
int doNextStep(int, int);

int main() {

    int userInput = 0;

    printf("\nThe address of userInput : %p\n", &userInput); // Print userInput address

    return 0;
}

int extractDigit1Count(int arg) {
    int digit1Count = 0;
    int tmp;

    tmp = (arg < 0) ? -arg : arg;

    do {
        if (tmp % 10 == 1) {
            digit1Count++;
        }
    } while (tmp);

    return digit1Count;
}

int extractDigit0Count(int arg) {
    int digit0Count = 0;
    int tmp;

    tmp = (arg < 0) ? -arg : arg;

    do {
        if (tmp % 10 == 1) {
            digit0Count++;
        }
    } while (tmp);

    return digit0Count;
}

void printDigitCount(int arg) {
    int digit0Count = 0;
    int digit1Count = 0;
    int tmp;

    tmp = (arg < 0) ? -arg : arg;
    do {
        if (tmp % 10 == 0) {
            digit0Count++;
        }

        if (tmp % 10 == 1) {
            digit1Count++;
        }

        tmp /= 10;
    } while (tmp);

    printf("\nDigit 0 count : %d\n", digit0Count);
    printf("\nDigit 1 count : %d\n", digit1Count);
}