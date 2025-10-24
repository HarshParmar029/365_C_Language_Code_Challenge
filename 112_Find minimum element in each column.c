#include <stdio.h>
int main() {
    int a[10][10];
    int i, j, rows, cols, min;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter elements of matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    // Find minimum element in each column
    for (j = 0; j < cols; j++) {
        min = a[0][j]; // assume first element of column is min
        for (i = 1; i < rows; i++) {
            if (a[i][j] < min) {
                min = a[i][j];
            }
        }
        printf("Minimum element in column %d = %d\n", j + 1, min);
    }
    return 0;
}
