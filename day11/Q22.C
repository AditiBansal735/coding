/*
a program to find profit or loss percentage given cost price and selling price
*/
#include <stdio.h>

int main()
{
   float cp, sp, loss, profit;
 
   printf("enter cp= ");
   scanf("%f",&cp);
   
   printf("enter sp= ");
   scanf("%f",&sp);
   
   if (sp>cp)
   {
       profit= (sp-cp)/cp *100;
       printf("profit= %f%%",profit);
   }
   
   else if (cp>sp)
   {
       loss= (cp-sp)/cp *100;
       printf("loss= %f%%",loss);
   }
   
   else 
   printf("no profit no loss");
   
   return 0;
   
}