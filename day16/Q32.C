/*
a program to check if a number is a palindrome
*/
#include <stdio.h>
int main()
{
   int n, rev=0, digit, n1;
   printf("enter the value of n= ");
   scanf("%d",&n);
   
   n1=n;
   
   while (n1!=0)
   {
      digit= n1%10;
       rev= rev*10 + digit;
       n1= n1/10;
   }
   
   if (rev==n)
   printf("yes, it is a palindrome");

else 
printf("not a palindrome");

return 0;
}