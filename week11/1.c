#include <stdio.h>

int get_length(char *str);

int main()
{
    char *name = "Muhammad";
    printf("Length of %s = %d", name, get_length(name));
}

int get_length(char *str)
{
    int counter = 0;
    while (*str != '\0')
    {
        counter++;
        str++;
    }
    return counter;
}