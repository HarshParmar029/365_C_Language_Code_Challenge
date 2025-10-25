#include <stdio.h>
int main() {
    int rows, i, j;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i = 1; i <= rows; i++) {
        for(j = 1; j <= i; j++) {
            printf("%d ", j);  // Print numbers from 1 to i
        }
        printf("\n");
    }
    return 0;
}
