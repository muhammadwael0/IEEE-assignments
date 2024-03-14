#include <stdio.h>

#define bool _Bool
#define true 1
#define false 0

int power(int a, int b);
int no_digits(int num);
bool is_palindrome(int num);
int reverse_number(int num);

int main()
{
    int num;
    printf("Enter Number: ");
    scanf(" %d", &num);
    (is_palindrome(num) ? printf("YES\n") : printf("NO\n"));
}

int power(int a, int b)
{
    int pow = 1;
    while (b--)
        pow *= a;
    return pow;
}

int no_digits(int num)
{
    int count = 0;
    while (num)
    {
        count += 1;
        num /= 10;
    }
    return count;
}

int reverse_number(int num)
{
    int n, num_digits = no_digits(num);
    if (num == 0) return 0;
    return (num % 10 * power(10, num_digits - 1)) + reverse_number(num / 10);
}

bool is_palindrome(int num)
{
    if (num == reverse_number(num))
        return true;
    else
        return false;
}