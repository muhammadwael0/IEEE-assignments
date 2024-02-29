#include <stdio.h>

int main()
{
    char x;
    printf("Enter char: ");
    scanf("%c", &x);
    if (x == 'a' || x == 'e' || x == 'o' || x == 'u' || x == 'i' ||
        x == 'A' || x == 'E' || x == 'U' || x == 'I' || x == 'O')
        printf("char is vowel\n");
    else
        printf("char is consonant\n");
}