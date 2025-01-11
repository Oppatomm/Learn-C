#include <stdio.h>
int main () {
    int a , b;
    printf("Enter first number: ");
    scanf ("%d" , &a);
    printf("Enter second number: ");
    scanf ("%d" , &b);

    printf("Addition : %d\n" , a + b);
    printf("Subtraction : %d\n" , a - b);
    printf("Multiplication : %d\n" , a * b);
    if (b != 0) {
        printf("Division : %d\n" , a / b);
    }else {
        printf("%d Cannot be divided by zero\n" , a);
    }

    return 0;
}