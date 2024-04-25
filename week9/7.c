#include <stdio.h>
#define SIZE 5

int main()
{
    int arr[SIZE], i;
    printf("Enter Elements of Array\n");
    for (i = 0; i < SIZE; ++i) {
        scanf("%d", &arr[i]);
    }
    int *ptr1 = arr;
    int *ptr2 = &arr[SIZE - 1];
    for (i = 0; i < SIZE / 2; ++i) {
        int temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;
        ptr1++;
        ptr2--;
    }
    printf("Elements of First Array\n");
    for (i = 0; i < SIZE; ++i) {
        printf("%d ", arr[i]);
    }
}