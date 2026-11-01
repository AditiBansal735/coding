/*
a program to find the sum of the series 1 + (3/4) + (5/6) + ... + (2n-1)/(2n)
*/

#include <stdio.h>
int main()
{
    int n;
    float i, sum=0;
    
    printf("enter n= ");
    scanf("%d",&n);
    
    for(i=1; i<=n-1; i++)
    {
        sum= sum+ (2*i+1)/(2*(i+1));
    }
    
    printf("%f", sum+1);
    return 0;
}