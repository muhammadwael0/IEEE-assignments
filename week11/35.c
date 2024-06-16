#include <stdio.h>

int main()
{
    char *str = "   Muhammad Wael";
    printf("Before: %s\n", str);
    while (*str == ' ')
    {
        str++;
    }
    printf("After: %s\n", str);
}