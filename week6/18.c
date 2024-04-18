#include <stdio.h>

long long factorial(int num);

int main()
{
    int num;
    printf("Enter Number: ");
    scanf("%d", &num);
    printf("Fact of %d = %lld", num, factorial(num));
}

long long factorial(int num)
{
    if (num == 0 || num == 1) return 1;
    return num * factorial(num - 1);
}