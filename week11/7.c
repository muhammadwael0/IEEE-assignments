#include <stdio.h>

void toggle_char(char *str);

int main()
{
    char str[] = "MUhAMMad";
    printf("Original String = %s\n", str);
    toggle_char(str);
    printf("New String = %s\n", str);
}

void toggle_char(char *str)
{
    char *ptr = str;
    while (*ptr != '\0')
    {
        switch (*ptr) {
            case 'A' ... 'Z':
                *ptr += 32;
                break;
            case 'a' ... 'z':
                *ptr -= 32;
                break;
        }
        ptr++;
    }
}