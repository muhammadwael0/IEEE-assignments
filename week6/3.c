#include <stdio.h>

int max(int a, int b);
int min(int a, int b);

int main()
{
    int num1, num2;
    printf("Enter 1st Num: ");
    scanf("%d", &num1);
    printf("Enter 2nd Num: ");
    scanf("%d", &num2);
    printf("Max = %d\n", max(num1, num2));
    printf("Min = %d\n", min(num1, num2));
}

int max(int a, int b)
{
    return a >= b ? a : b;
}
int min(int a, int b)
{
    return  a <= b ? a : b;
}