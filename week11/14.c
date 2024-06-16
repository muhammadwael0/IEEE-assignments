#include <stdio.h>

int main()
{
    char *str = "Muhammad Wael";
    char c = 'W';
    char *ptr = str;
    int iter = 0;
    while (*ptr != '\0')
    {
        if (*ptr == c)
        {
            printf("Founded at position %i\n", iter + 1);
            return 0;
        }
        iter++;
        ptr++;
    }
    printf("Not Founded\n");
}