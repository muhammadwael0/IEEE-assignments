#include <stdio.h>

int digits(int num);

int main()
{
    int num, product = 1;
    printf("Enter Number: ");
    scanf("%d", &num);
    int count = digits(num);
    while (num)
    {
        product *= num % 10;
        for (int i = 0; i < count; i++)
        {
            product *= 10;
        }
        num /= 10;
        count--;
    }
    printf("Product of digits = %d\n", product);
}

int digits(int num)
{
    int count = 0;
    while (num)
    {
        count++;
        num /= 10;
    }
    return count;
}