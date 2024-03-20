#include <stdio.h>

#define READ_BIT(reg, n) ((reg >> (n - 1)) & 1)

int main()
{
    int num, n;
    printf("Enter Num: ");
    scanf("%d", &num);
    printf("Enter Bit num: ");
    scanf("%d", &n);
    printf("%d bit of %d is %d\n", n, num, READ_BIT(num, n));
}