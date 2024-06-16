#include <stdio.h>

int main()
{
    char *str = "Muhammad Wael";
    char c = 'a';
    char *ptr = str;
    int iter = 0;
    _Bool cond = 1;
    while (*ptr != '\0')
    {
        if (*ptr == c)
        {
            cond = 0;
            printf("Founded at position %i\n", iter + 1);
        }
        iter++;
        ptr++;
    }
    if (cond)
        printf("Not Founded\n");
}