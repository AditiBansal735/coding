/*
Write a program to print the following pattern:
*/

#include <stdio.h>

int main()
{
   int i,j;
   
   for (i=0; i<=4; i++)
   {
       for (j=0; j<=4; j++)
       {
           if (i>j)
           printf(" ");
           
           if (i<=j)
           printf("*");
       }
   printf("\n");
   }
   
   return 0;
}