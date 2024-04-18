#include <stdio.h>

int main()
{
    int n, i, j;
    printf("Enter Size of matrix: ");
    scanf("%d", &n);
    int mat1[n][n];
    int mat2[n][n];
    for (i = 0; i < n; ++i) {
        for (j = 0; j < n; ++j) {
            printf("Enter mat1[%d][%d] = ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }
    for (i = 0; i < n; ++i) {
        for (j = 0; j < n; ++j) {
            printf("Enter mat2[%d][%d] = ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }
    for (i = 0; i < n; ++i) {
        for (j = 0; j < n; ++j) {
            if (mat1[i][j] != mat2[i][j])
            {
                printf("Not Equal\n");
                return 0;
            }
        }
    }
    printf("Equal\n");
}