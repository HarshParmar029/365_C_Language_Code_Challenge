#include <stdio.h>
int main() {
    int a[10][10], result[10][10];
    int i, j, rows, cols, scalar;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter scalar value to multiply: ");
    scanf("%d", &scalar);
    // Multiply each element by scalar
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            result[i][j] = a[i][j] * scalar;
        }
    }
    printf("\nResultant matrix after scalar multiplication:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
