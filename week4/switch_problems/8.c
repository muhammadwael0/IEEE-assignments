#include <stdio.h>

int main()
{
    char op;
    double num1, num2, result;
    printf("Enter num1 op num2\n");
    scanf("%lf %c %lf", &num1, &op, &num2);
    switch(op)
    {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        default:
            printf("Invalid operator");
            return 0;
    }
    printf("%.2lf %c %.2lf = %.2lf", num1, op, num2, result);
}