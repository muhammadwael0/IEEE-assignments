#include <stdio.h>
#define SIZE 100

int main()
{
    int n, i;
    int arr[SIZE];
    printf("Enter Num: ");
    scanf("%d", &n);
    for (i = 0; i < n; ++i) {
        printf("Enter Num: ");
        scanf("%d", &arr[i]);
    }
    printf("Enter Num to add to array: ");
    scanf("%d", &arr[i]);
    for (i = 0; i <= n; ++i) {
        printf("%d ", arr[i]);
    }
}