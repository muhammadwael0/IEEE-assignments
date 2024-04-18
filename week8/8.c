#include <stdio.h>
#define SIZE 100

int main()
{
    int n, i;
    printf("Enter Size: ");
    scanf("%d", &n);
    int arr[SIZE];
    int arr2[SIZE];
    for (i = 0; i < n; ++i) {
        printf("Enter Num: ");
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; ++i) {
        arr2[i] = arr[i];
        printf("%d ", arr2[i]);
    }

}