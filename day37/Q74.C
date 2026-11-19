// TRANSPOSE OF A MATRIX

#include <stdio.h>
int main()
{
    int n,m,i,j;
    printf("enter size of rows and columns= ");
    scanf("%d %d",&n,&m);
    
    int a[n][m], b[m][n];
    
    for (i=0; i<n; i++)
    {
        printf("enter elements of row %d= ",i+1);
        
         for (j=0; j<m; j++)
         {
           scanf("%d",&a[i][j]);  
         }
    }
    
    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            b[i][j]= a[j][i];
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
