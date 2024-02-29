#include <stdio.h>

int main()
{
    char x;
    printf("Enter char: ");
    scanf("%c", &x);
    if ((x >= 'A' && x <= 'Z') || (x >= 'a' && x <= 'z'))
        printf("char is alphabet\n");
    else
        printf("char isn't alphabet\n");
}