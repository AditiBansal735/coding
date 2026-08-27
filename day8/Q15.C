/*
a program to input three numbers and find the largest among them using if-else 
*/
#include <stdio.h>

int main() 
{
    int a, b, c;
    printf("Enter a= ");
    scanf("%d", &a);

    printf("Enter b= ");
    scanf("%d", &b);

    printf("Enter c= ");
    scanf("%d", &c);

    if (a > b && a > c) 
    {
        printf("%d is the largest number", a);
    } 
    else if (b > a && b > c) 
    {
        printf("%d is the largest number", b);
    } 
    else if (c > a && c > b) 
    {
        printf("%d is the largest number", c);
    } 
    else 
    {
        printf("all numbers are equal");
    }

    return 0;
}
