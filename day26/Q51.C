/*
Write a program to print the following pattern
*/

#include <stdio.h>

int main()
{
   int i,j,k;
  
  for (i=5; i>0; i--)
  {
      for (k=i-1; k>=0; k--)
      {
          printf(" ");
      }
          j=i;
     while (j<=5)
     {
         printf("%d",j);
         j++;
     }
      printf("\n");
  }
  return 0;
}