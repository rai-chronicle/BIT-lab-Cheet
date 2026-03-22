#include <stdio.h>

void printMat(int r, int c, int mat[r][c], char* label) {
    printf("\n--- %s ---\n", label);
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) printf("%-5d ", mat[i][j]);
        printf("\n");
    }
}

int main() {
    int r1, c1, r2, c2, i, j, k;

    printf("Matrix 1 Rows/Cols: "); scanf("%d %d", &r1, &c1);
    printf("Matrix 2 Rows/Cols: "); scanf("%d %d", &r2, &c2);

    if (c1 != r2) return printf("Multiplication not possible.\n"), 0;

    int m1[r1][c1], m2[r2][c2], res[r1][c2];

    printf("\nEnter elements of 1st matrix:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &m1[i][j]);
        }
    }

    printf("\nEnter elements of 2nd matrix:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &m2[i][j]);
        }
    }

    if (r1 == r2 && c1 == c2) {
        for (i = 0; i < r1; i++)
            for (j = 0; j < c1; j++) res[i][j] = m1[i][j] + m2[i][j];
        printMat(r1, c1, res, "Addition");

        for (i = 0; i < r1; i++)
            for (j = 0; j < c1; j++) res[i][j] = m1[i][j] - m2[i][j];
        printMat(r1, c1, res, "Subtraction");
    }

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            res[i][j] = 0;
            for (k = 0; k < c1; k++) res[i][j] += m1[i][k] * m2[k][j];
        }
    }
    printMat(r1, c2, res, "Multiplication");

    return 0;
}