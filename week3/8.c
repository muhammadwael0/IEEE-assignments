#include <stdio.h>

int main()
{
    float degree;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &degree);
    printf("temperature in Fahrenheit: %.2f", (degree * 1.8) + 32);
}