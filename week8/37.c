#include <stdio.h>

int main()
{
    int n = 2, i, j;
    int mat[n][n];
    for (i = 0; i < n; ++i) {
        for (j = 0; j < n; ++j) {
            printf("Enter mat[%d][%d] = ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    printf("determinant = %d", mat[0][0] * mat[1][1] - mat[0][1] * mat[1][0]);
}