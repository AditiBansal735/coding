/*
a program to input two numbers and display their sum
*/
#include <stdio.h>
int main ()
{
int a;
int b;
int c;
printf("enter the value of a:");
scanf("%d",&a);
printf("enter the value of b:");
scanf("%d",&b);
c=a+b;
printf("The sum of %d and %d is %d",a,b,c);
return 0;
}