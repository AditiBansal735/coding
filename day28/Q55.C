/* a program to print all prime numbers from 1 to n */

#include <stdio.h>
int main()
{
    int n, prime=1,i,j;
    
    printf("enter n= ");
    scanf("%d",&n);
    
    if (n>=2)
{
     for (i=2; i<=n; i++)
    {
        for (j=2; j<i; j++)
        {
            if (i%j==0)
           { prime=0;
            break;}
        }
      if (prime==1)
      printf("%d\n",i);
      prime=1;
   }
 }
 else printf("no prime number");

return 0;
}