#include <stdio.h>

#define CLR_BIT(reg, n) reg &= ~(1 << (n - 1))

int main()
{
    int num, n;
    printf("Enter Number: ");
    scanf("%d", &num);
    printf("Enter N BIT: ");
    scanf("%d", &n);
    printf("Number After CLR %d Bit: %d", n, CLR_BIT(num, n));
}