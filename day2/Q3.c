/*
Program to calculate the area and perimeter of a rectangle
*/
#include <stdio.h>
int main() 
{
    int length, breadth, area, perimeter;
   
    printf("enter length= ");
    scanf("%d", &length);

    printf("enter breadth= ");
    scanf("%d", &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("area of rectangle is %d\n", area);
    printf("perimeter of rectangle is %d", perimeter);      

    return 0;


}