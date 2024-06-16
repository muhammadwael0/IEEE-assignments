#include <stdio.h>

int main()
{
    char *str = "Muhammad Wael";
    char c = 'a';
    char *ptr = str;
    int iter = 0;
    int res = -1;
    while (*ptr != '\0')
    {
        if (*ptr == c)
        {
            res = iter;
        }
        iter++;
        ptr++;
    }
    if (res == -1)
        printf("Not Founded\n");
    else
        printf("Founded at position %i\n", res + 1);
}