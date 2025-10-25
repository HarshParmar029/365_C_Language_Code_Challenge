#include <stdio.h>
int main() {
    int N, M, i;
    printf("Enter the number N: ");
    scanf("%d", &N);

    printf("Enter number of terms M: ");
    scanf("%d", &M);

    printf("Multiplication table of %d up to %d terms:\n", N, M);
    for(i = 1; i <= M; i++) {
        printf("%d x %d = %d\n", N, i, N*i);
    }
    return 0;
}
