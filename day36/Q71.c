// read and print a matrix

#include <stdio.h>
int main()
{
    int n,m,i,j;
    
    printf("enter the size of row and column= ");
    scanf("%d %d",&n,&m);
    
    int a[n][m];
    
    for (i=0; i<n; i++)
    {
        printf("enter elements for row %d= ",i+1);
        
        for(j=0; j<m; j++)
        {
           scanf("%d",&a[i][j]); 
        }
        
    }
    
    for (i=0; i<n; i++)
    {
        for (j=0; j<m; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}