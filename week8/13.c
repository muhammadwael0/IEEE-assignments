#include <stdio.h>
#define SIZE 100

int main()
{
    int n, i, count = 0;
    int arr[SIZE];
    int freq[10000] = {0};
    printf("Enter Num: ");
    scanf("%d", &n);
    for (i = 0; i < n; ++i) {
        printf("Enter Num: ");
        scanf("%d", &arr[i]);
        freq[arr[i]]++;
    }
    for (i = 0; i < n; ++i) {
        if (freq[arr[i]] >= 2)
        {
            count++;
            freq[arr[i]]--;
        }
    }
    printf("Num of duplicates = %d", count);
}