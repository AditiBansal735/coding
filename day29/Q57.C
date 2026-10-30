/*
A program to find sum of array elements
*/

#include <stdio.h>
int main()
{
    int n,i, sum=0;
    printf("enter the size of array= ");
    scanf("%d",&n);
    
    int arr[n];
    
    for (i=0; i<n; i++)
    {
        printf("\nenter element number %d= ",i+1);
        scanf("%d",&arr[i]);
        sum= sum+ arr[i];
    }
    
    printf("sum of all the elements= %d",sum);
    return 0;
    
}