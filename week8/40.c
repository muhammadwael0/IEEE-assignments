#include <stdio.h>

int main()
{
    int n, i, j;
    printf("Enter Size of matrix: ");
    scanf("%d", &n);
    int mat[n][n];
    for (i = 0; i < n; ++i) {
        for (j = 0; j < n; ++j) {
            printf("Enter mat[%d][%d] = ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    for (i = 0; i < n; ++i) {
        for (j = 0; j < n; ++j) {
            if (mat[i][j] != mat[j][i])
            {
                printf("Not symmetric");
                return 0;
            }
        }
    }
    printf("Symmetric");
}