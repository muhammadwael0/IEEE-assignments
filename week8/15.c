#include <stdio.h>

int main()
{
    int s1, s2, i, j;
    printf("Enter Size of first array: ");
    scanf("%d", &s1);
    int arr1[s1];
    for (i = 0; i < s1; ++i) {
        printf("Enter Num: ");
        scanf("%d", &arr1[i]);
    }
    printf("Enter Size of second array: ");
    scanf("%d", &s2);
    int arr2[s2];
    for (i = 0; i < s2; ++i) {
        printf("Enter Num: ");
        scanf("%d", &arr2[i]);
    }
    int arr3[s1 + s2];
    for (i = 0; i < s1; ++i) {
        arr3[i] = arr1[i];
    }
    for (i = 0, j = s1; i < s2; ++i, ++j) {
        arr3[j] = arr2[i];
    }
    for (i = 0; i < s1 + s2; ++i) {
        printf("%d ", arr3[i]);
    }
}