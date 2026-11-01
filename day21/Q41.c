/*
a program to swap first and last digit of a number
*/  

#include <stdio.h>
int main()
{
    int n, last, first, place=10, num, mid;
    printf("enter any number= ");
    scanf("%d",&n);
    
    last=n%10;
    
    while(n/place>=10)
    {
        place= place*10;
    }
    
    mid= (n%place)/10;
    
    first= n/place;
    
    num= last*place + mid*10 + first;
    
    printf("%d",num);
    
    return 0;
}
    
