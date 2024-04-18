#include <stdio.h>

#define SET_BIT(reg, n) reg |= (1 << (n - 1))

int main()
{
    int num, n;
    printf("Enter Number: ");
    scanf("%d", &num);
    printf("Enter N BIT: ");
    scanf("%d", &n);
    printf("Number After Set %d Bit: %d", n, SET_BIT(num, n));
}