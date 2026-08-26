/*
a program to input two numbers and display their sum, difference, product, and quotient.
*/
#include <stdio.h>
int main()
{
   int a,b,c,d,e,f;

   printf("enter a= ");
    scanf("%d",&a);

    printf("enter b= ");
    scanf("%d",&b);

    c=a+b;
    d=a-b;     
    e=a*b;
    f=a/b;

    printf("sum of %d and %d is %d\n",a,b,c);
    printf("difference of %d and %d is %d\n",a,b,d);
    printf("product of %d and %d is %d\n",a,b,e);
    printf("quotient of %d and %d is %d",a,b,f);

    return 0;

}