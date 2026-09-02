/*
a program to calculate library fine based on late days
*/
#include <stdio.h>
int main()
{
      int a, fine;
    printf("enter the number of days: ");
    scanf("%d",&a);
    
    if (a<=5)
    {
        fine= a*5;
        printf("%d",fine);
    }
        else if (a>5 && a<=10)
    {
        fine= 10+ (a-5)*4;
        printf("%d",fine);
    }
     else if (a>10 && a<=30)
     {
         fine= 30+ (a-10)*6;
         printf("%d",fine);
     }
     else
     printf("membership cancelled");
    
    return 0;
}
