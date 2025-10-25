/*
A saddle point in a matrix is an element that is:

Minimum in its row and

Maximum in its column
*/
#include <stdio.h>
int main() {
    int n, i, j, k, minRow, colIndex, isSaddle = 0;

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
    // Find saddle point
    for(i = 0; i < n; i++) {
        // Step 1: Find the minimum element in the current row
        minRow = matrix[i][0];
        colIndex = 0;
        for(j = 1; j < n; j++) {
            if(matrix[i][j] < minRow) {
                minRow = matrix[i][j];
                colIndex = j;
            }
        }
        // Step 2: Check if this minimum is also the maximum in its column
        int isMaxInCol = 1;
        for(k = 0; k < n; k++) {
            if(matrix[k][colIndex] > minRow) {
                isMaxInCol = 0;
                break;
            }
        }
        // Step 3: If yes, saddle point found
        if(isMaxInCol) {
            printf("Saddle point found: %d\n", minRow);
            isSaddle = 1;
        }
    }
    if(!isSaddle)
        printf("No saddle point found.\n");
    return 0;
}
