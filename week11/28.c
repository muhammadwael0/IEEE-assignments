#include <stdio.h>
#include <string.h>

int main()
{
    char *str = "Muhammad Wael El Sayed";
    char *search = "Sayed";

    unsigned size1 = strlen(str);
    unsigned size2 = strlen(search);

    int iter1, iter2;

    for (iter1 = 0; iter1 <= size1 - size2; ++iter1) {
        for (iter2 = 0; iter2 < size2; ++iter2) {
            if (search[iter2] == str[iter1 + iter2])
            {
                if (iter2 == size2 - 1)
                {
                    if (size2 == 1)
                        printf("Founded at position %i\n", iter1 + 1);
                    else
                        printf("Founded at position [%i-%i]\n", iter1 + 1, iter1 + size2);
                    return 0;
                }
            }
            else
                break;
        }
    }
    printf("Not Founded\n");
}