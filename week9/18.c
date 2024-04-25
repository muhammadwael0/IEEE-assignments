#include <stdio.h>

void func(int num1, int num2, int *sum, int *mul)
{
    *sum = num1 + num2;
    *mul = num1 * num2;
}

int main()
{
    int num1, num2, sum, mul;
    printf("Enter two nums\n");
    scanf("%d %d", &num1, &num2);
    func(num1, num2, &sum, &mul);
    printf("Sum = %d\nMul = %d", sum, mul);
}