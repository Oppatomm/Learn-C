#include <stdio.h>
int main() {
    int firstnumber , secondnumber;

    printf("Enter first number : ");
    scanf("%d" , &firstnumber);
    printf("Enter second number : ");
    scanf("%d" , &secondnumber);

    if (firstnumber > secondnumber) {
        printf("%d is greater than %d\n" , firstnumber , secondnumber);
    }else {
        printf("%d is greater than %d\n" , secondnumber , firstnumber);
    }

    return 0;
}