#include <stdio.h>

int main()
{
    int num, count = 0;
    printf("Enter Number: ");
    scanf("%d", &num);
    while (num)
    {
        count++;
        num /= 10;
    }
    printf("Num of digits = %d\n", count);
}