#include <stdio.h>
int main() {
    int n;
    long long sum;

    printf("Enter value of N: ");
    scanf("%d", &n);

    sum = (long long)n * (n + 1) / 2;
    sum = sum * sum;   // square of the sum of first n numbers

    printf("Sum of cubes of first %d natural numbers = %lld\n", n, sum);
    return 0;
}
