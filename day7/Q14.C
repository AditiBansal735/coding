/*
write a program to enter a character and check whether it is vowel or consonant using if else statement
*/
#include <stdio.h>
int main() 
    {

    char alphabet;

    printf("Enter an alphabet: ");
    scanf("%c", &alphabet);

    if (alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u' ||
        alphabet == 'A' || alphabet == 'E' || alphabet == 'I' || alphabet == 'O' || alphabet == 'U') 
        printf("vowel");

        else 
        printf("consonant");

    return 0;
}