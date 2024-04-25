#include <stdio.h>
#define SIZE 5

int main()
{
    int arr[SIZE], i;
    printf("Enter Array Elements\n");
    for (i = 0; i < SIZE; ++i) {
        scanf("%i", &arr[i]);
    }
    int *ptr = arr;
    int copy[SIZE];
    for (i = 0; i < SIZE; ++i) {
        copy[i] = *ptr;
        ptr++;
    }
    printf("Copied Array\n");
    for (i = 0; i < SIZE; ++i) {
        printf("%d ", copy[i]);
    }
}