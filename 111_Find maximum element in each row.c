#include <stdio.h>
int main() {
    int a[10][10];
    int i, j, rows, cols, max;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter elements of matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    // Find maximum element in each row
    for (i = 0; i < rows; i++) {
        max = a[i][0]; // assume first element is max
        for (j = 1; j < cols; j++) {
            if (a[i][j] > max) {
                max = a[i][j];
            }
        }
        printf("Maximum element in row %d = %d\n", i + 1, max);
    }
    return 0;
}

