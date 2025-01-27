#include <stdio.h>
#include <math.h>
int main() {
    int a , square;
    printf("Enter a number : ");
    scanf("%d" , &a);

    square = pow(a,2);

    printf("The square of %d is : %d\n" , a , square);
    return 0;
}