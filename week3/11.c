#include <stdio.h>

int main()
{
    int x, y;
    long long power = 1;
    printf("Enter Number: ");
    scanf("%d", &x);
    printf("Enter Power: ");
    scanf("%d", &y);
    int i = y;
    while (i)
    {
        power *= x;
        i--;
    }
    printf("%d ^ %d = %lld", x, y, power);
}