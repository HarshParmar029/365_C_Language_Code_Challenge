/*
Explanation:

Count total elements → rows * cols

Count number of zeros → zeroCount

If zeroCount > total/2, it’s sparse.
example:-
0 0 3
0 0 0
4 0 0
*/

#include <stdio.h>
int main() {
    int rows, cols, i, j, zeroCount = 0, total;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    // Input matrix elements
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    // Count zeros
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            if(matrix[i][j] == 0) {
                zeroCount++;
            }
        }
    }
    total = rows * cols;
    // Check sparse condition
    if(zeroCount > total / 2)
        printf("The matrix is sparse.\n");
    else
        printf("The matrix is not sparse.\n");
    return 0;
}
