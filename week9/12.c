#include <stdio.h>

int size(char *str)
{
    int count = 0;
    while(*str != '\0')
    {
        count++;
        str++;
    }
    return count;
}

int main()
{
    char *str = "Muhammad Wael";
    printf("String = %s\n", str);
    printf("Size of String = %d\n", size(str));
}