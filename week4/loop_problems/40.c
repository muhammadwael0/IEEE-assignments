#include <stdio.h>
#include <math.h>

int main()
{
    long long num;
    printf("Enter Binary Number: ");
    scanf("%lld", &num);
    int i = 0, dec = 0;
    while (num)
    {
        dec += num % 10 * pow(2, i);
        num /= 10;
        i++;
    }
    printf("Decimal = %d", dec);
}