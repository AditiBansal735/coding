/*
a program to classify a triangle as equilateral, isosceles, or scalene based on the lengths of its sides.
*/  

#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter the value of side a: ");
    scanf("%d", &a);

    printf("enter the value of side b: ");
    scanf("%d", &b);

    printf("enter the value of side c: ");
    scanf("%d", &c);

    if (a == b && b == c)
    printf("The triangle is equilateral");

    else if (a == b && a != c || a == c && a != b || b == c && b != a)
    printf("The triangle is isosceles");

    else
    printf("The triangle is scalene");

    return 0;
}