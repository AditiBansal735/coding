/*
a program to input two numbers and display their sum
*/

#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("Enter the value of b: ");
    scanf("%d", &b);

    c = a + b;

    printf("The sum of %d and %d is %d\n", a, b, c);

    return 0;
}