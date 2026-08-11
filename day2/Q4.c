/*
 C program to calculate area and circumference of a circle
 using the radius provided by the user.
 */
#include <stdio.h>
int main()
{
    float r, area, circumference;
    printf("Enter radius: ");
    scanf("%f", &r);
    area = 3.14 * r * r;
    circumference = 2 * 3.14 * r;
    printf("Area = %f\n", area);
    printf("Circumference = %f", circumference);
    return 0;
}