//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>

int main() {
    float a, b, c;

    printf("Enter the lengths of the three sides of the triangle:\n");
    scanf("%f %f %f", &a, &b, &c);

    if (a + b > c && b + c > a && a + c > b) {
        if (a == b && b == c) {
            printf("The triangle is Equilateral.\n");
        } 
        else if (a == b || b == c || a == c) {
            printf("The triangle is Isosceles.\n");
        } 
        else {
            printf("The triangle is Scalene.\n");
        }
    } 
    else {
        printf("Invalid triangle! The sum of any two sides must be greater than the third side.\n");
    }

    return 0;
}
