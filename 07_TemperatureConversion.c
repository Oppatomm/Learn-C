#include <stdio.h>
int main() 
{
    int Celsius , Fahrenheit;

    printf("Enter temperature in Celsius : ");
    scanf("%d" , &Celsius);

    Fahrenheit = (Celsius * 9/5) + 32;

    printf("Temperature in Fahrenheit : %d\n" , Fahrenheit);
}