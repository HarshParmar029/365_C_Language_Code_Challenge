#include <stdio.h>
int main() {
    int a[10][10];
    int i, j, rows, cols, sum;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter elements of matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    // Calculate sum of each column
    for (j = 0; j < cols; j++) {
        sum = 0;
        for (i = 0; i < rows; i++) {
            sum += a[i][j];
        }
        printf("Sum of column %d = %d\n", j + 1, sum);
    }
    return 0;
}
