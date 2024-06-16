#include <stdio.h>

int main()
{
    char *str = "MUhammad123%$#09mn";

    char *ptr = str;
    int count_digit = 0, count_alpha = 0, count_special = 0;

    while (*ptr != '\0')
    {
        switch (*ptr) {
            case 'A' ... 'z':
                count_alpha++;
                break;
            case '0' ... '9':
                count_digit++;
                break;
            default:
                count_special++;
                break;
        }
        ptr++;
    }
    printf("Num of alpha            = %i\n", count_alpha);
    printf("Num of digits           = %i\n", count_digit);
    printf("Num of Special chars    = %i\n", count_special);
}