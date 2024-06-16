#include <stdio.h>

int compare_strings(char *str1, char *str2);

int main()
{
    char *str1 = "Muhammad";
    char *str2 = "Muhammad";
    int res = compare_strings(str1, str2);
    if (res == 0)
        printf("str1 Equal str2\n");
    else if (res == -1)
        printf("Str1 less than str2\n");
    else if (res == 1)
        printf("Str1 greater than str2\n");
}

int compare_strings(char *str1, char *str2)
{
    while (*str1 != '\0' && *str2 != '\0')
    {
        if (*str1 > *str2)
            return 1;
        else if (*str1 < *str2)
            return -1;
        str1++;
        str2++;
    }
    if (*str1 == '\0' && *str2 == '\0')
        return 0;
    else if (*str1 == '\0')
        return -1;
    else if (*str2 == '\0')
        return 1;
}