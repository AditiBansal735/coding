/* a program to check if a number is an Armstrong number
*/
#include <stdio.h>

int main()
{
    int n, a, b, i=0, sum=0, digit;
    
    n=a;
    n=b; 
    
    printf("enter the value of n= ");
    scanf("%d",&n);
    
    while (n!=0)
    {
        i=i+1;
        n=n/10;
    }
    
    while(a!=0)
    {
        digit= a%10;
        sum= sum+ (digit)^i;
        a= a/10;
    }
    
    if (b==sum)
    printf("armstrong");
    
    else
    printf("not armstrong");
    
    return 0;
}
    
    
