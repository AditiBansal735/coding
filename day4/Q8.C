#include <stdio.h>
int main ()
{

    int n,sum;

printf("n= ");
scanf("%d",&n);

sum=(n*(n+1))/2;
printf("%d\n",sum);   

printf("sum of first %d natural numbers is %d",n,sum);

    return 0;   
    
}