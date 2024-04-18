#include <stdio.h>

int main()
{
    int n, i, j;
    printf("Enter Size: ");
    scanf("%d", &n);
    int arr[n];
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
    printf("Enter 1 for ascending and 2 for descending: ");
    int choise;
    scanf("%d", &choise);
    if (choise == 2)
    {
        int swap;
        for (i = 0; i < n / 2; ++i) {
            swap = arr[i];
            arr[i] = arr[n - i - 1];
            arr[n - i - 1] = swap;
        }
    }
    for (i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
}