/*
a program to input two numbers and display their sum, difference, product, and quotient.
*/
#include <stdio.h>
int main ()
{
int a;
int b;
int c;
int d;
int e;
int f;
printf("enter the value of a");
scanf("%d",&a);
printf("enter value of b");
scanf("%d",&b);
c=a+b;
printf("The sum of %d and %d is %d\n",a,b,c);
d=a-b;
printf("The difference of %d and %d is %d\n",a,b,d);
e=a*b;
printf("The product of %d and %d is %d\n",a,b,e);
f=a/b;
printf("The quotient of %d and %d is %d\n",a,b,f);
return 0;
}