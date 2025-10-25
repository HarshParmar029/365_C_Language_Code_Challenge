#include <stdio.h>
int main() {
    int rows, i, j, k, num;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for(i = 1; i <= rows; i++) {
        // Print spaces before numbers
        for(j = i; j < rows; j++) {
            printf(" ");
        }
        // Print increasing numbers
        num = 1;
        for(k = 1; k <= (2 * i - 1); k++) {
            printf("%d", num);
            num++;
        }

        printf("\n");
    }
    return 0;
}
