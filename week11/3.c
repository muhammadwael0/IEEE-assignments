#include <stdio.h>

#define SIZE 20

int main()
{
    char *str1 = "Muhammad";
    char *str2 = " Wael";
    char dest[SIZE];
    char *ptr = str1;
    int iter = 0;
    while (*ptr != '\0' && iter < SIZE - 1)
    {
        dest[iter] = *ptr;
        ptr++;
        iter++;
    }
    ptr = str2;
    while (*ptr != '\0' && iter < SIZE - 1)
    {
        dest[iter] = *ptr;
        ptr++;
        iter++;
    }
    dest[iter] = '\0';

    printf("New String = %s\n", dest);
}