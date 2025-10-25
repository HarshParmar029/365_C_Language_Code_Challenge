/*
Print * when:

i == 1 (top row)

i == rows (bottom row)

j == 1 (left border)

j == cols (right border)

Else print space " "
*/
#include <stdio.h>
int main() {
    int rows, cols, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);
    for(i = 1; i <= rows; i++) {
        for(j = 1; j <= cols; j++) {
            // Print '*' for first/last row or first/last column
            if(i == 1 || i == rows || j == 1 || j == cols)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
