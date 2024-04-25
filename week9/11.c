#include <stdio.h>
#define SIZE 3

int main()
{
    int mat[SIZE][SIZE] = {0}, mat1[SIZE][SIZE], mat2[SIZE][SIZE], i, j, k;
    printf("Enter Elements of First Matrix\n");
    for (i = 0; i < SIZE; ++i) {
        for (j = 0; j < SIZE; ++j) {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Enter Elements of Second Matrix\n");
    for (i = 0; i < SIZE; ++i) {
        for (j = 0; j < SIZE; ++j) {
            scanf("%d", &mat2[i][j]);
        }
    }

    /* Find Matrix of mat1 * mat2 */
    for (i = 0; i < SIZE; ++i) {
        for (j = 0; j < SIZE; ++j) {
            for (k = 0; k < SIZE; ++k) {
                mat[i][k] +=  mat1[i][j] * mat2[j][k];
            }
        }
    }
    /* Print Matrix */
    printf("The Matrix\n");
    for (i = 0; i < SIZE; ++i) {
        for (j = 0; j < SIZE; ++j) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}