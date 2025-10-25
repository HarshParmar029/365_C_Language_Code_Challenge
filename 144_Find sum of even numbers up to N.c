#include <stdio.h>
int main() {
    int n, i, sum = 0;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    for(i = 2; i <= n; i += 2) {
        sum += i;
    }
    printf("Sum of even numbers up to %d = %d\n", n, sum);
    return 0;
}
