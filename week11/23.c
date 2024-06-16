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
    printf("Original String = %s\n", str);
    printf("New String = ");
    ptr = str;
    while (*ptr != '\0')
    {
        if (freq[*ptr] != 0) {
            printf("%c", *ptr);
            freq[*ptr] = 0;
        }
        ptr++;
    }
    printf("\n");
}