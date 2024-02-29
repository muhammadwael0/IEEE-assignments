#include <stdio.h>

int main()
{
    int num, power, product = 1;
    printf("Enter Num and power\n");
    scanf("%d %d", &num, &power);
    while (power--)
        product *= num;
    printf("power = %d", product);
}