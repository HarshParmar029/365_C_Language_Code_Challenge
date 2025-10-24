/*
symmetric matrix means —
A square matrix (same number of rows and columns) in which
the elements are the same along the main diagonal when flipped across it.
*/

#include <stdio.h>
int main() {
    int a[10][10], transpose[10][10];
    int i, j, n;
    int isSymmetric = 1; // assume symmetric

    printf("Enter the size of square matrix: ");
    scanf("%d", &n);

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    // find transpose
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            transpose[j][i] = a[i][j];
        }
    }
    // check if matrix equals its transpose
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (a[i][j] != transpose[i][j]) {
                isSymmetric = 0;
                break;
            }
        }
    }
    if (isSymmetric)
        printf("The matrix is symmetric.\n");
    else
        printf("The matrix is not symmetric.\n");
    return 0;
}
