#include <stdio.h>

void to_lower(char *str);

int main()
{
    char str[] = "MUhAMMad";
    printf("Original String = %s\n", str);
    to_lower(str);
    printf("New String = %s\n", str);
}

void to_lower(char *str)
{
    char *ptr = str;
    while (*ptr != '\0')
    {
        switch (*ptr) {
            case 'A' ... 'Z':
                *ptr += 32;
                break;
        }
        ptr++;
    }
}