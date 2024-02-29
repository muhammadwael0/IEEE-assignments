#include <stdio.h>

int digits(int num);

int main()
{
    int num, rev_num = 0;
    printf("Enter Number: ");
    scanf("%d", &num);
    int count = digits(num);
    while (num)
    {
        int product = num % 10;
        for (int i = 0; i < count - 1; i++)
        {
            product *= 10;
        }
        num /= 10;
        count--;
        rev_num += product;
    }
    printf("Product of digits = %d\n", rev_num);
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