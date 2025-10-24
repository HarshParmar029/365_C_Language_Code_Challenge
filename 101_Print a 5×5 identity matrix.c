#include <stdio.h>
int main() {
    int i, j;
    printf("5x5 Identity Matrix:\n");

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (i == j)
                printf("1 ");
            else
                printf("0 ");
        }
        printf("\n");
    }
    return 0;
}

