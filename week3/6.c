//Write a C program to enter radius of a circle and find its diameter, circumference and area.
#include <stdio.h>
#define PI 3.14

int main()
{
    float rad;
    printf("Enter radius of a circle: ");
    scanf("%f", &rad);
    printf("its diameter = %.3f\n", 2 * rad);
    printf("its circumference = %.3f\n", 2 * PI * rad);
    printf("its area = %.3f\n", PI * rad * rad);
}