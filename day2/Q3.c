/*
Program to calculate the area and perimeter of a rectangle
*/
#include <stdio.h>
int main() 
{
    int length, breadth;
    int area, perimeter;
    scanf("%d %d", &length, &breadth);
    area = length * breadth;
    perimeter = 2 * (length + breadth);
    // Print the area and perimeter of the rectangle
    printf("Area=%d, Perimeter=%d\n", area, perimeter);
    return 0;
}