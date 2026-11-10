/*
Q58: Find the maximum and minimum element in an array.
*/

#include <stdio.h>
int main()
{
    int n,i;
    printf("enter the size of array= ");
    scanf("%d",&n);
    
    int a[n],min,max;
    
    for(i=0; i<n; i++)
    {
        printf("\nenter element mumber %d=",i+1);
        scanf("%d",&a[i]);
        
            if (i==0 || min>=a[i])
            min= a[i];
            
            if (i==0 || max<=a[i])
            max=a[i];
    }
    
printf("minimum= %d",min);
printf("\nmaximum= %d",max);

return 0;
}