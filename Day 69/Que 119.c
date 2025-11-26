//Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int freq[100000] = {0}; 

    for (int i = 0; i < n; i++) {
        if (freq[arr[i]] == 1) {    
            printf("%d\n", arr[i]);
            return 0;
        }
        freq[arr[i]] = 1;   
    }

    printf("No repeated element\n");

    return 0;
}
