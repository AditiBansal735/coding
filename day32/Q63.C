/* MERGE TWO ARRAYS */

#include <stdio.h>
int main()
{
    int n,m,i;
    
    printf("enter size of first array= ");
    scanf("%d",&n);
    
    int a[n];
    
    for (i=0; i<n; i++)
    {
        printf("enter element number %d= ",i+1);
        scanf("%d",&a[i]);
    }
    
    printf("enter size of second array= ");
    scanf("%d",&m);
    
    int b[m];
    
    for (i=0; i<m; i++)
    {
        printf("enter element number %d= ",i+1);
        scanf("%d",&b[i]);
    }
    
    int c[n+m];
    
    for (i=0; i<n+m; i++)
    {
        if (i<n)
        c[i]=a[i];
        
        else
        c[i]=b[i-n];
        
        printf("%d ",c[i]);
    }
    
    return 0;
}
