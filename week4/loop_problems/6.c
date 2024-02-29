#include <stdio.h>

int main()
{
    int n;
    printf("Enter Number: ");
    scanf("%d", &n);
    printf("sum = %d", n * (n + 1) / 2);
}