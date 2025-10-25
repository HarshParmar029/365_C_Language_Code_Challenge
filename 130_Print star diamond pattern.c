#include <stdio.h>
int main() {
    int rows, i, j;

    printf("Enter number of rows (half of the diamond): ");
    scanf("%d", &rows);
    // Upper half of diamond
    for(i = 1; i <= rows; i++) {
        // Print spaces
        for(j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // Print stars
        for(j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    // Lower half of diamond
    for(i = rows - 1; i >= 1; i--) {
        // Print spaces
        for(j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // Print stars
        for(j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
