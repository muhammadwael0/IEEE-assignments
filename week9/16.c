#include <stdio.h>

int main()
{
    char *str = "Muhammad";
    char *ptr1 = str;
    char *ptr2 = str;
    while (*(ptr2++));
    ptr2--;
    while (ptr2 >= ptr1)
    {
        if (*ptr2 == '\0') {
            ptr2--;
            continue;
        }
        printf("%c", *ptr2);
        ptr2--;
    }
}