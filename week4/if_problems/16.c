#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter Dim\n");
    scanf("%i %i %i", &a, &b, &c);
    if (a == b && b == c)
        printf("triangle is equilateral\n");
    else if (a == b || b == c || a == c)
        printf("triangle is isosceles\n");
    else
        printf("triangle is scalene\n");
}