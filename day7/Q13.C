/*
a program to input a year and check whether it is a leap year or not using conditional statements
*/
#include <stdio.h>
int main() 
{

     int a;
    printf("enter year= ");
    scanf("%d",&a);
    
    if (a%4==0 && a%100!=0)
    printf("year is a leap year");
    
    else if (a%400==0)
    printf("year is a leap year");
    
    else 
    printf("year is not a leap year");
           
    return 0;
}