#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter Number: ");
    scanf("%d", &n);
    for (i = 0; i <= 12; i++)
    {
        printf("%d x %d = %d\n", n, i , n * i);
    }
}