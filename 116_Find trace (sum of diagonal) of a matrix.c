#include <stdio.h>
int main() {
    int n, i, j, trace = 0;

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
    // Calculate trace (sum of diagonal elements)
    for(i = 0; i < n; i++) {
        trace += matrix[i][i];
    }
    printf("Trace (sum of diagonal elements) = %d\n", trace);
    return 0;
}
