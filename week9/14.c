#include <stdio.h>

int main()
{
    char *str1 = "Muhammad ";
    char *str2 = "Wael";
    char str[20];
    char *ptr = str1, *ptr_str = str;

    while (*ptr != '\0')
    {
        *ptr_str = *ptr;
        ptr++;
        ptr_str++;
    }
    ptr = str2;
    while (*ptr != '\0')
    {
        *ptr_str = *ptr;
        ptr++;
        ptr_str++;
    }
    *ptr_str = '\0';
    printf("%s", str);
}