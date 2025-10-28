#include <stdio.h>
int main() {
    int n, i;
    long long fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);
    // factorial of 0 or 1 is 1
    if (n < 0)
        printf("Factorial of negative number doesn't exist.");
    else {
        for (i = 1; i <= n; i++) {
            fact = fact * i;  // multiply each number
        }
        printf("Factorial of %d = %lld", n, fact);
    }
    return 0;
}
