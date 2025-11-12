//Find the digit that occurs the most times in an integer number.

#include <stdio.h>

int main() {
    long long num;
    int count[10] = {0}; 

    printf("Enter an integer number: ");
    scanf("%lld", &num);

    if (num < 0) {
        num = -num; 
    }

    if (num == 0) { 
        count[0] = 1;  
    } else {
        while (num != 0) {
            int digit = num % 10;
            count[digit]++;
            num /= 10;
        }
    }

    int maxFreq = count[0];
    int digitWithMaxFreq = 0;
    for (int i = 1; i < 10; i++) {
        if (count[i] > maxFreq) {
            maxFreq = count[i];
            digitWithMaxFreq = i;
        }
    }

    printf("Digit %d occurs the most times (%d times).\n", digitWithMaxFreq, maxFreq);

    return 0;
}
