#include <stdio.h>
int main() {
    int n, i, sum = 0;
    printf("Enter value of N: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        sum += i * i * i;   // add cube of each number
    }
    printf("Sum of cubes of first %d natural numbers = %d\n", n, sum);
    return 0;
}
