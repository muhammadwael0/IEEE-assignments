#include <stdio.h>
#define SIZE 5

int main()
{
    int arr[SIZE], i, j;
    printf("Enter Elements\n");
    for (i = 0; i < SIZE; ++i) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < SIZE; ++i) {
        int min = arr[i];
        int index = i;
        for (j = i + 1; j < SIZE; ++j) {
            if (*(arr + j) < min)
            {
                min = *(arr + j);
                index = j;
            }
        }
        int temp = *(arr + i);
        *(arr + i) = min;
        *(arr + index) = temp;
    }
    printf("Sorted Array: ");
    for (i = 0; i < SIZE; ++i) {
        printf("%d ", arr[i]);
    }
}