// add two matrices

#include <stdio.h>
int main()
{
    int n,m,i,j,sum=0;
    
    printf("enter size of rows and columns= ");
    scanf("%d %d",&n,&m);
    
    int a[n][m], b[n][m];
    
    for (i=0; i<n; i++)
    {
        printf("enter elements of row %d of matrix 1= ",i+1);
        
        for (j=0; j<m; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    for (i=0; i<n; i++)
    {
        printf("enter elements of row %d of matrix 2= ",i+1);
        
        for (j=0; j<m; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    
    for (i=0; i<n; i++)
    {
        for (j=0; j<m; j++)
        {
            a[i][j]=a[i][j]+b[i][j];
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}