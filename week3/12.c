#include <stdio.h>
#include <math.h>

int main()
{
    double num;
    printf("Enter Num: ");
    scanf("%lf", &num);
    printf("square root of %.2lf = %.2lf", num, sqrt(num));
}