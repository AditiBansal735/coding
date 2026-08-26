/*
WRITE A PROGRAM TO SWAP TWO NUMBERS WITHOUT USING A THIRD VARIABLE
*/
#include <stdio.h>
int main()
{
    int a,b;

printf("enter a= ");
    scanf("%d",&a);

    printf("enter b= ");
    scanf("%d",&b);

    printf("input= %d, %d\n",a,b);

   a= a+b;
   b= a-b;
   a= a-b;

   printf("output= %d, %d",a,b);
    return 0;

}