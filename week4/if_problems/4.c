#include <stdio.h>

int main()
{
    int num;
    printf("Enter Num: ");
    scanf("%d", &num);
    if (num % 55 == 0)
        printf("Num %d is div by 5 and 11", num);
    else
        printf("Num %d is not div by 5 and 11", num);
}