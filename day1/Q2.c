#include <stdio.h>

int main() {
    int a, b;
    int sum, diff, prod;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    sum = a + b;
    printf("The sum of %d and %d is %d\n", a, b, sum);
    diff = a - b;
    printf("The difference of %d and %d is %d\n", a, b, diff);
    prod = a * b;
    printf("The product of %d and %d is %d\n", a, b, prod);
    /*Prevent division by zero and cast to float for decimal accuracy*/
    if (b != 0) {
        float quotient = (float)a / b;
        printf("The quotient of %d and %d is %.2f\n", a, b, quotient);
    } else {
        printf("Error: Division by zero is undefined.\n");
    }
    return 0;
}