#include <stdio.h>

typedef unsigned long long uint64;
typedef unsigned short uint16;
typedef unsigned char uint8;

uint64 power(uint8 a, uint8 b);
uint8 num_of_digits(uint64 num);
void print_armstrong_num(uint64 a, uint64 b);

int main()
{
    uint64 a, b;
    printf("Enter Two Numbers\n");
    scanf("%lld %lld", &a, &b);
    print_armstrong_num(a, b);
}

uint64 power(uint8 a, uint8 b)
{
    uint64 pow = 1;
    while (b--)
        pow *= a;
    return pow;
}

uint8 num_of_digits(uint64 num)
{
    uint8 count = 0;
    while(num)
    {
        count += 1;
        num /= 10;
    }
    return count;
}

void print_armstrong_num(uint64 a, uint64 b)
{
    b++;
    uint8 no_digits;
    uint64 num, arm_num;
    while (a != b)
    {
        no_digits = num_of_digits(a);
        num = a;
        arm_num = 0;
        while (num)
        {
            arm_num += power(num % 10, no_digits);
            num /= 10;
        }
        if (arm_num == a)
            printf("%lld ", a);
        a++;
    }
}