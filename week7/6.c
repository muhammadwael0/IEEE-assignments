#include <stdio.h>

#define TOGGLE_BIT(reg, n) reg ^= (1 << (n - 1))

int main()
{
    int num, n;
    printf("Enter Number: ");
    scanf("%d", &num);
    printf("Enter N BIT: ");
    scanf("%d", &n);
    printf("Number After Toggle %d Bit: %d", n, TOGGLE_BIT(num, n));
}