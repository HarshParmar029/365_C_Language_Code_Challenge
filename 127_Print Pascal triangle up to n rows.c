#include <stdio.h>
int main() {
    int n, i, j, coef;

    printf("Enter number of rows: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        // Print spaces for alignment
        for(j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        coef = 1;  // first value in a row is always 1
        for(j = 0; j <= i; j++) {
            printf("%d ", coef);
            // Compute next coefficient: nCr = nC(r-1) * (n - r) / r
            coef = coef * (i - j) / (j + 1);
        }
        printf("\n");
    }
    return 0;
}
