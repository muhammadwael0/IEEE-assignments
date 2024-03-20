#include <stdio.h>

#define READ_BIT(reg, n) ((reg >> (n - 1)) & 1)
#define SIZE sizeof (int) * 8

int main()
{
    int i, num, count = 0;
    printf("Enter Number: ");
    scanf("%d", &num);

    for (i = 1; i <= SIZE; i++)
    {
        if (READ_BIT(num, i))
            count++;
    }
    printf("Num of Zeros = %lu\n", SIZE - count);
    printf("Num of ones = %d", count);
}