/*
a program to find the roots of a quadratic equation and categorize them
*/

#include <stdio.h>
#include <math.h>
int main ()
{

    int a,b,c,x,x1,x2,d;
    printf("Enter the coefficients of the quadratic equation (a, b, c): ");
    scanf("%d %d %d",&a,&b,&c);

    printf("The quadratic equation is: %dx^2 + %dx + %d = 0\n",a,b,c);

    d= b*b -4*a*c;

    if (d>0)
    printf("Roots are real and different\n");
    else if (d==0)  
    printf("Roots are real and equal\n");
    else
    printf("Roots are complex\n");

    x1= (-b + sqrt(d))/(2*a);
    x2= (-b - sqrt(d))/(2*a);

    printf("Roots of the quadratic equation are: %d and %d\n",x1,x2);

    return 0;

}