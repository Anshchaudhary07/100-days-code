//Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include <stdio.h>

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number > 0) {
        printf("%d is Positive.\n", number);
    } else {
        if (number < 0) {
            printf("%d is Negative.\n", number);
        } else {
            printf("The number is Zero.\n");
        }
    }

    return 0;
}