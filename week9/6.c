#include <stdio.h>
#define SIZE 5

int main()
{
    int arr1[SIZE], arr2[SIZE], i;
    printf("Enter Elements of First Array\n");
    for (i = 0; i < SIZE; ++i) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter Elements of Second Array\n");
    for (i = 0; i < SIZE; ++i) {
        scanf("%d", &arr2[i]);
    }
    int *ptr1 = arr1;
    int *ptr2 = arr2;
    for (i = 0; i < SIZE; ++i) {
        int temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;
        ptr1++;
        ptr2++;
    }
    printf("Elements of First Array\n");
    for (i = 0; i < SIZE; ++i) {
        printf("%d ", arr1[i]);
    }
    printf("\n");
    printf("Elements of Second Array\n");
    for (i = 0; i < SIZE; ++i) {
        printf("%d ", arr2[i]);
    }
}