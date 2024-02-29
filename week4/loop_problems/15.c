#include <stdio.h>

int main()
{
    int num, count = 0, product = 1;
    printf("Enter Number: ");
    scanf("%d", &num);
    while (num)
    {
        count++;
        product *= num % 10;
        num /= 10;
    }
    printf("Product of digits = %d\n", product);
}