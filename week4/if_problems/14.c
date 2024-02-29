#include <stdio.h>

int main()
{
    short a1, a2, a3;
    printf("Enter Three angles\n");
    scanf("%hi %hi %hi", &a1, &a2, &a3);
    if (a1 + a2 + a3 == 180)
        printf("Valid Triangle\n");
    else
        printf("Invalid Triangle\n");
}