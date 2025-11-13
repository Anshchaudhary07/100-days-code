//Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.

#include <stdio.h>

int main() {
    int n;
    int x = -1;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int leftSum = i * (i + 1) / 2;
        int rightSum = n * (n + 1) / 2 - (i - 1) * i / 2;

        if (leftSum == rightSum) {
            x = i;
            break; 
        }
    }

    printf("Pivot integer: %d\n", x);

    return 0;
}
