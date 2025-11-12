//Write a program to find the HCF (GCD) of two numbers.

#include <stdio.h>

int main() {
    int num1, num2, a, b, hcf;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    a = num1;
    b = num2;

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    hcf = a;

    printf("HCF (GCD) of %d and %d is: %d\n", num1, num2, hcf);

    return 0;
}