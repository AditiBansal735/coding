/*
a program to take a number as input and print its equivalent binary representation
*/
#include <stdio.h>
int main()
{
    int n, place=1, bin=0, rem;
    
    printf("enter n= ");
    scanf("%d",&n);
    
    while (n!=0)
    {
        rem= n%2;
        n= n/2;
        bin= rem*place + bin;
        place= place*10;
    }
    
    printf("%d",bin);
    return 0;
}