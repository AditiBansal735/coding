//sum of each row of a matrix and store it in an array

#include <stdio.h>
int main()
{
    int n,m,i,j;
    
    printf("enter number of rows and columns= ");
    scanf("%d %d",&n,&m);
    
    int a[n][m], b[n];
    
    for (i=0; i<n; i++)
    {
        printf("enter elements of row %d= ",i+1);
        int sum=0;
        
        for (j=0; j<m; j++)
        {
            scanf("%d",&a[i][j]);
            sum= sum+ a[i][j];
            
            if (j==m-1)
            b[i]=sum;
         }
    }
    
    for (i=0; i<n; i++)
    printf("%d ",b[i]);
    
    return 0;
}