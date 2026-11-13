/*
 a program to search for an element in an array using linear search 
*/

#include <stdio.h>
int main()
{
    int n,i,key;
    
    printf("enter the size of array= ");
    scanf("%d",&n);
    
    int a[n];
    
    for (i=0; i<n; i++)
    {
        printf("\nenter element number %d= ",i+1);
        scanf("%d",&a[i]);
    }
    
    printf("enter the element to find= ");
    scanf("%d",&key);
    
    for (i=0; i<n; i++)
    {
        if (a[i]==key)
       { printf("index= %d",i);
        break;}
    }
    
    return 0;
    
}