#include <stdio.h>

#define SIZE 20

int main()
{
    char *str = "Muhammad Wael";
    char dest[SIZE];
    char *ptr = str;
    int iter = 0;
    while (*ptr != '\0' && iter < SIZE - 1)
    {
        dest[iter] = *ptr;
        iter++;
        ptr++;
    }
    dest[iter] = '\0';

    printf("Old String = %s\n", str);
    printf("New String = %s\n", dest);
}