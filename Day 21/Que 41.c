//Write a program to swap the first and last digit of a number.

#include <stdio.h>
#include <math.h>

int main() {
    int num, original, lastDigit, firstDigit, digits, newNum;

    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num;

    int isNegative = 0;
    if (num < 0) {
        isNegative = 1;
        num = -num;
    }

    lastDigit = num % 10;

    digits = (int)log10(num);

    firstDigit = num / (int)pow(10, digits);

    newNum = lastDigit * (int)pow(10, digits) + (num % (int)pow(10, digits) - lastDigit) + firstDigit;

    if (isNegative) {
        newNum = -newNum;
    }

    printf("Number after swapping first and last digits: %d\n", newNum);

    return 0;
}