/*
Program to calculate the area and perimeter of a rectangle
*/
#include <stdio.h>

int main() {
    int length, breadth;
    int area, perimeter;
    // Read length and breadth from standard input
    scanf("%d %d", &length, &breadth);
    // Perform rectangle calculations
    area = length * breadth;
    perimeter = 2 * (length + breadth);
    // Print output in required format: Area=X, Perimeter=Y
    printf("Area=%d, Perimeter=%d\n", area, perimeter);
    return 0;
}