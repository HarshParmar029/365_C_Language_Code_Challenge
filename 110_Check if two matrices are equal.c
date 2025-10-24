#include <stdio.h>
int main() {
    int a[10][10], b[10][10];
    int i, j, rows, cols;
    int isEqual = 1; // assume matrices are equal

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter elements of first matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter elements of second matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    // Compare matrices
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (a[i][j] != b[i][j]) {
                isEqual = 0;
                break;
            }
        }
        if (!isEqual) break;
    }
    if (isEqual)
        printf("The two matrices are equal.\n");
    else
        printf("The two matrices are not equal.\n");

    return 0;
}
