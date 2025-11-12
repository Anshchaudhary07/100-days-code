//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (int i = 1, j = 2; i <= 2*n-1; i += 2, j += 2) {
        sum += (double)i / j;
    }

    printf("Sum of the series up to %d terms is: %.4f\n", n, sum);

    return 0;
}