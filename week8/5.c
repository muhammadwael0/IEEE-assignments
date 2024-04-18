#include <stdio.h>
#define SIZE 100

int main()
{
    int n, i, j;
    int arr[SIZE];
    printf("Enter Size of Array: ");
    scanf("%d", &n);
    for (i = 0; i < n; ++i) {
        printf("Enter Num: ");
        scanf("%d", &arr[i]);
    }
    int min, index;
    for (i = 0; i < n; ++i) {
        min = arr[i];
        index = i;
        for (j = i + 1; j < n; ++j) {
            if (arr[j] < min)
            {
                min = arr[j];
                index = j;
            }
        }
        arr[index] = arr[i];
        arr[i] = min;
    }
    for (i = 1; i < n; ++i) {
        if (arr[n - 1] != arr[n - 1 - i]) {
            printf("Second Max = %d", arr[n - 1 - i]);
            break;
        }
    }
}