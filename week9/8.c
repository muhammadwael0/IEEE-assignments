#include <stdio.h>
#define SIZE 5

int main()
{
    int arr[SIZE], i, num;
    printf("Enter Elements of Array\n");
    for (i = 0; i < SIZE; ++i) {
        scanf("%d", &arr[i]);
    }
    int *ptr1 = arr;
    int *ptr2 = &arr[SIZE - 1];
    printf("Enter Element: ");
    scanf("%d", &num);
    while (ptr1 <= ptr2)
    {
        if (*ptr1 == num)
        {
            printf("Founded Successful\n");
            return 0;
        }
        ptr1++;
    }
    printf("Not Founded\n");
}