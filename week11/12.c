#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "abbccbba";
    int iter;
    unsigned size = strlen(str);
    for (iter = 0; iter < size / 2; ++iter) {
        if (str[iter] != str[size - iter - 1])
        {
            printf("Not palindrome string\n");
            return 0;
        }
    }
    printf("palindrome string\n");
}
