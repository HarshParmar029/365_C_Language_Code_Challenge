#include <stdio.h>
int main() {
    int a, b, i, j, isPrime;
    printf("Enter the starting number (A): ");
    scanf("%d", &a);

    printf("Enter the ending number (B): ");
    scanf("%d", &b);

    printf("Prime numbers between %d and %d are:\n", a, b);

    for(i = a; i <= b; i++) {
        if(i < 2)
            continue; // Skip numbers less than 2

        isPrime = 1; // Assume i is prime
        for(j = 2; j * j <= i; j++) {
            if(i % j == 0) {
                isPrime = 0; // Not prime
                break;
            }
        }
        if(isPrime)
            printf("%d ", i);
    }
    return 0;
}
