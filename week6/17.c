#include <stdio.h>

int sum_digit_num(int num);

int main()
{
    int num;
    printf("Enter Number: ");
    scanf("%d", &num);
    printf("Sum of Digits = %d", sum_digit_num(num));
}

int sum_digit_num(int num)
{
    if (num == 0)
        return 0;
    return num % 10 + sum_digit_num(num / 10);
}