#include <stdio.h>
int main() {
    int a[3][3], b[3][3], mul[3][3];
    int i, j, k;

    printf("Enter elements of first 3×3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter elements of second 3×3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    // Initialize multiplication matrix to 0
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            mul[i][j] = 0;
        }
    }
    // Matrix multiplication logic
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 3; k++) {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("\nProduct of the two matrices:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}
