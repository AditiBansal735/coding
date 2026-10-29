/*
A program to find the LCM of two numbers 
*/
#include <stdio.h>
int main()
{
    int a,b,lcm;
    
    printf("enter a and b= ");
    scanf("%d %d",&a,&b);

    if (a>b)
    lcm=a;
    
    else
    lcm=b;
    
    while (1)
    {
        if (lcm%a==0 && lcm%b==0)
       { printf("lcm= %d",lcm);
        break;
       }
       
        else
        lcm++;
    }
    
    return 0;
}