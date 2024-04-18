#include <stdio.h>

int main()
{
    int n, i, j;
    printf("Enter Size of matrix: ");
    scanf("%d", &n);
    int mat[n][n];
    int rows[n];
    int cols[n];
    for (i = 0; i < n; ++i) {
        for (j = 0; j < n; ++j) {
            printf("Enter mat[%d][%d] = ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    for (i = 0; i < n; ++i) {
        rows[i] = 0;
        cols[i] = 0;
        for (j = 0; j < n; ++j) {
            rows[i] += mat[i][j];
            cols[i] += mat[j][i];
        }
    }
    for (i = 0; i < n; ++i) {
        printf("Col %i = %i\n", i + 1, cols[i]);
    }
    for (i = 0; i < n; ++i) {
        printf("Row %i = %i\n", i + 1, rows[i]);
    }
}