/*
a program to calculate electricity bill based on units consumed
*/
#include <stdio.h>
int main()
{
  int a, bill;
  printf("unit consumed: ");
  scanf("%d",&a);
  
  if (a<=100)
  {
      bill= a*5;
      printf("bill: ₹%d",bill);
  }
  
  else if (100<a && a<=200)
  {
      bill= 500+ (a-100)*7;
      printf("bill: ₹%d",bill);
  }
  else if (a>200 && a<=300)
  {
      bill= 1200+ (a-200)*10;
      printf("bill: ₹%d",bill);
  }
  else
  {
      bill= 2200+ (a-300)*12;
      printf("bill: ₹%d",bill);
  }
  return 0;
}