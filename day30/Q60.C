/*
A program to count positive, negative, and zero elements in an array
*/

#include <stdio.h>
int main()
{
    int n,i,pos=0,neg=0,zero=0;
    
    printf("enter the size of array= ");
    scanf("%d",&n);
    
    int a[n];
    
    for (i=0; i<n; i++)
    {
        printf("\nenter element number %d= ",i+1);
        scanf("%d",&a[i]);
        
        if (a[i]>0)
        pos++;
        
       else if (a[i]<0)
       neg++;
       
       else
       zero++;
    }
    
    printf("negative= %d",neg);
    printf("\npositive= %d",pos);
    printf("\nzero=%d",zero);
    
    return 0;
}