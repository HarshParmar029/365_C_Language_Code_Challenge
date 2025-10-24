#include <stdio.h>
int main() {
    int n, i, j;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];
    // Input matrix elements
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    // Print upper triangular matrix
    printf("Upper triangular matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(j >= i) {
                printf("%d ", matrix[i][j]);
            } else {
                printf("0 ");  // or just skip printing
            }
        }
        printf("\n");
    }
    return 0;
}
