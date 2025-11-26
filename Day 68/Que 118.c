//Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number

#include <stdio.h>

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers (from 0 to %n, missing one number):\n", n, n);

    int sum = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    int totalSum = n * (n + 1) / 2;

    int missing = totalSum - sum;

    printf("Missing number: %d\n", missing);

    return 0;
}
