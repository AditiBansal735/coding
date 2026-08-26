/*
write a program to swap two numbers using a third variable
*/
#include <stdio.h>
int main()
{
   int a,b,c;

   printf("enter a= ");
    scanf("%d",&a);

    printf("enter b= ");
    scanf("%d",&b);

    printf("input= %d, %d\n",a,b);

    c=a;
    a=b;
    b=c;

    printf("output= %d, %d",a,b);
    return 0;

}