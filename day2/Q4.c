/*
 C program to calculate area and circumference of a circle
 using the radius provided by the user.
 */
#include <stdio.h>
int main()
{
    int radius;
    float area, circumference;

    printf("enter radius= ");
    scanf("%d", &radius);

    area = 3.14 * radius * radius;
    circumference = 2 * 3.14 * radius;

    printf("area of circle is %f\n",area);
    printf("circumference of circle is %f",circumference);

    return 0;
    
}