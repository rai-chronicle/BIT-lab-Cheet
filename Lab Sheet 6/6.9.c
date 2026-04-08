#include <stdio.h>

int main() {
    int m, n;
    printf("Enter m and n: ");
    scanf("%d %d", &m, &n);

    int mat[m][n];
    printf("Enter the elements of the matrix:\n");
    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
            scanf("%d", (*(mat + i) + j));

    printf("Transpose Matrix:\n");
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            printf("%d ", *(*(mat + j) + i));
        }
        printf("\n");
    }
    return 0;
}