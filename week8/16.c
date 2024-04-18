#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter Size: ");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; ++i) {
        printf("Enter Num: ");
        scanf("%d", &arr[i]);
    }
    int reverse_arr[n];
    for (i = n - 1; i >= 0; --i) {
        reverse_arr[n - i - 1] = arr[i];
    }
    for (i = 0; i < n; ++i) {
        printf("%d ", reverse_arr[i]);
    }
}