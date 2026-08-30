/* 
write a program to input a character and check whether it is an uppercase letter, lowercase letter, digit, or special character
*/
#include <stdio.h>

int main()
{
    char a;
    printf("enter the character= ");
    scanf("%c",&a);
    
    if (a>='A' && a<='Z')
    printf("uppercase alphabet");
    
    else if (a>='a' && a<='z')
    printf("lowercase alphabet");
    
    else if (a>='0' && a<='9')
    printf("digit");
    
    else 
    printf("special character");
    
    return 0;
}