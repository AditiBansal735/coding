/*
a program to calculate simple interest and compound interest for given values of principal, time and rate of interest.
*/
#include <stdio.h>
int main ()
{

    int p,t;
    float r,si,ci;

printf("p= ");
scanf("%d",&p);
printf("t= ");
scanf("%d",&t);
printf("r= ");
scanf("%f",&r);

si=(p*t*r)/100;
printf("Simple Interest = %f",si);

ci= p(1+ r/100)^t -p;

printf("Compound Interest = %f",ci);


return 0;
    
}