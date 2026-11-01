/*
a program to find the sum of the series 2/3 + 4/7 + 6/11 + ... + 2n/(4n-1)
*/

#include <stdio.h>
int main()
{
    int n;
    float i, sum=0;
    
    printf("enter n= ");
    scanf("%d",&n);
    
    for(i=1; i<=n; i++)
    {
        sum= sum+ 2*i/(4*i-1);
    }
    
    printf("%f", sum);
    return 0;
}