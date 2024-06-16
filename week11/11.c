#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "muhammad wael";
    printf("Original string = %s\n", str);
    int iter;
    unsigned size = strlen(str);
    for (iter = 0; iter < size / 2; ++iter) {
        char temp = str[iter];
        str[iter] = str[size - iter - 1];
        str[size - iter - 1] = temp;
    }
    printf("New string = %s\n", str);
}