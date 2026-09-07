/*
 a program to find the HCF (GCD) of two numbers
 */
#include <stdio.h>

int main()
{
  int a,b,i,c;
  printf("enter a= ");
  scanf("%d",&a);
  printf("enter b= ");
  scanf("%d",&b);
  
 if (a<=b)
 {
     for (i=1; i<=a; i++)
  {
      if (a%i==0 && b%i==0)
      {
          c=i;
      }
    }
 }
 
 if (a>b)
 {
     for (i=1; i<=b; i++)
     {
         if (a%i==0 && b%i==0)
      {
          c=i;
      }
     }
 }
    printf("%d",c);
      return 0;
  }