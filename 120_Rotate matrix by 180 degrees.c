#include <stdio.h>
int main() {
    int n, i, j;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];
    // Input matrix
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    // Rotate 180° (reverse both row and column)
    printf("Matrix after 180-degree rotation:\n");
    for(i = n - 1; i >= 0; i--) {
        for(j = n - 1; j >= 0; j--) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
     return 0;
}
