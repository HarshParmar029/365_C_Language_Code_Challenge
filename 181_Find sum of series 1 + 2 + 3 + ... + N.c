#include <stdio.h>
int main() {
    int n, i, sum = 0;
    printf("Enter value of N: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        sum += i;   // add each number
    }
    printf("Sum of series 1 + 2 + ... + %d = %d\n", n, sum);
    return 0;
}
