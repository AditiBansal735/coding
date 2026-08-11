/*
C program to calculate area and perimeter of rectangle
*/
#include <stdio.h>
int main() 
{
    int length, breadth;
    int area, perimeter;
    scanf("%d %d", &length, &breadth);
    area = length * breadth;
    perimeter = 2 * (length + breadth);
    // Display result
    printf("Area=%d, Perimeter=%d\n", area, perimeter);
    return 0;
}