#include <stdio.h>
int main () {
    int numerator , denominator , remainder;

    printf("Enter numerator : ");
    scanf("%d" , &numerator);
    printf("Enter denominator : ");
    scanf("%d" , &denominator);

    remainder = numerator % denominator;

    printf("The remainder is : %d\n" , remainder);
}