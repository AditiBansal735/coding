//Find the sum of all elements in a matrix

#include <stdio.h>
int main()
{
    int n,m,i,j,sum=0;
    
    printf("enter size of rows and columns= ");
    scanf("%d %d",&n,&m);
    
    int a[n][m];
    
    for (i=0; i<n; i++)
    {
        printf("enter elements of row %d= ",i+1);
        
        for (j=0; j<m; j++)
        {
            scanf("%d",&a[i][j]);
            sum= sum+ a[i][j];
        }
    }
    
    printf("sum of all elements= %d",sum);
    return 0;
}