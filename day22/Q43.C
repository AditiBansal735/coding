/*
a program to check if a number is a strong number
*/

#include <stdio.h>
int main()
{
    int n, digit, fact, sum=0,a, i;
    printf("enter any number= ");
    scanf("%d",&n);
    
    a=n;
    
    while (n!=0)
    {
        digit=n%10;
        fact=1;
        
        for (i=1; i<=digit; i++)
        {
            fact= fact*i;
        } 
         
         sum= fact+ sum;
         n=n/10;
    }
    
    if (a==sum)
    printf("yes");
    
    else printf("no");
    
    return 0;
}