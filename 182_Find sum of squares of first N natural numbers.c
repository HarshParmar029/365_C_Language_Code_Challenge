#include <stdio.h>
int main() {
    int n, i, sum = 0;
    printf("Enter value of N: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        sum += i * i;   // add square of each number
    }
    printf("Sum of squares of first %d natural numbers = %d\n", n, sum);
    return 0;
}
