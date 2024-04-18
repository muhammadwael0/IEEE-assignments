#include <stdio.h>
#define SIZE 100
int sum_array(int index, int *arr, int size)
{
    if (index == size)
        return 0;
    return arr[index] + sum_array(index + 1, arr, size);
}

int main()
{
    int n, i;
    int arr[SIZE];
    printf("Enter Size of Array: ");
    scanf("%d", &n);
    for (i = 0; i < n && i < SIZE; ++i) {
        printf("Enter Num: ");
        scanf("%d", &arr[i]);
    }
    printf("Sum = %d", sum_array(0, arr, (SIZE <= n ? SIZE : n)));
}