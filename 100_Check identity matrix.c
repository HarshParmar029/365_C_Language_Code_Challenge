#include <stdio.h>
int main() {
    int a[10][10];
    int n, i, j, flag = 1;

    printf("Enter the order of square matrix: ");
    scanf("%d", &n);

    printf("Enter elements of matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    // Check identity matrix condition
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == j && a[i][j] != 1) {  // diagonal elements must be 1
                flag = 0;
                break;
            }
            else if (i != j && a[i][j] != 0) {  // others must be 0
                flag = 0;
                break;
            }
        }
    }
    if (flag == 1)
        printf("Matrix is an Identity Matrix.\n");
    else
        printf("Matrix is NOT an Identity Matrix.\n");
    return 0;
}

