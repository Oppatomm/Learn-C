#include <stdio.h>
int main () {
    int width , length , area;

    printf("Enter width : ");
    scanf("%d" , &width);
    printf("Enter length : ");
    scanf("%d" , &length);

    area = width * length;

    printf("The area of the rectangle is : %d\n" , area);
    return 0;
}