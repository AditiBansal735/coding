/*
a program to count odd and even numbers in an array
*/

#include <stdio.h>
int main()
{
    int n, i, odd=0, even=0;
    printf("enter the size of array: ");
    scanf("%d",&n);
    
    int a[n];
    
    for (i=0; i<n; i++)
    {
        printf("\nenter element number %d=",i+1);
        scanf("%d",&a[i]);
        
        if (a[i]%2==0)
        even++;
        
        else 
        odd++;
    }
    
    printf("odd= %d",odd);
    printf("\neven= %d",even);
    
    return 0;
}