//Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>

int main() {
    long long binary;
    long long original;
    int remainder;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    original = binary; 

    printf("1's complement of %lld is: ", original);

    long long rev = 0;
    long long place = 1;

    while (binary != 0) {
        remainder = binary % 10;
        if (remainder == 0) {
            remainder = 1;
        } else if (remainder == 1) {
            remainder = 0;
        } else {
            printf("\nInvalid binary number!\n");
            return 0;
        }
        rev = rev + remainder * place;
        place *= 10;
        binary /= 10;
    }

    printf("%lld\n", rev);

    return 0;
}
