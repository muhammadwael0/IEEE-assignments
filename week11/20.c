#include <stdio.h>

int main()
{
    char *str = "Muhammad Wael";
    int freq[255] = {0};

    char *ptr = str;
    while (*ptr != '\0')
    {
        freq[*ptr]++;
        ptr++;
    }

    ptr = str;
    while (*ptr != '\0')
    {
        printf("occurrence of char %c = %i\n", *ptr, freq[*ptr]);
        ptr++;
    }
}