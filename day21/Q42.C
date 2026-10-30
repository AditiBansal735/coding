/*
A PROGRAM TO CHECK IF A NUMBER IS A PERFECT NUMBER
*/

#include <stdio.h>
int main()
{
    int n,i,sum=0;
    printf("enter any number= ");
    scanf("%d",&n);
    
    for (i=1; i<=n-1; i++)
    {
        
    if (n%i==0)
     sum= sum+i;
    
    }
    
    if (sum==n)
    printf("yes");
    
    else 
    printf("no");
    
    return 0;
    }
    
