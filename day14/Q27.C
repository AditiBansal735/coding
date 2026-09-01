/*
a program to print the sum of the first n odd numbers
*/

#include <stdio.h>

int main()
{
    int i, n, sum=0;
    
    printf("enter the value of n= ");
    scanf("%d",&n);
    
    for (i=1; i<= 2*n-1; i= i+2)
    {
        sum= sum+i;
    }
    
    printf("sum of first %d odd numbers is %d",n,sum);
    
return 0;
}
