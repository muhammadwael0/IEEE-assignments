#include <stdio.h>

#define bool _Bool
#define true 1
#define false 0

bool is_prime(int num);
void print_prime_nums(int a, int b);

int main()
{
    int a, b;
    printf("Enter Two Nums\n");
    scanf("%d %d", &a, &b);
    print_prime_nums(a, b);
}

bool is_prime(int num)
{
    int i;
    if (num <= 1)
        return false;
    if (num == 2)
        return true;
    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

void print_prime_nums(int a, int b)
{
    b++; // To get full interval inclusively
    while (a != b)
    {
        if (is_prime(a))
        {
            printf("%d  ", a);
        }
        a++;
    }
}