/*
Write a program to print the following pattern
*/

#include <stdio.h>

int main()
{
   int i,j;
   
   for (i=5; i>=1; i--)
   {
     
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
