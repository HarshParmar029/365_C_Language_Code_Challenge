#include <stdio.h>
int main() {
    int n, i, j, isPrime1, isPrime2;
    printf("Enter N: ");
    scanf("%d", &n);

    printf("Twin prime pairs up to %d are:\n", n);
    for(i = 2; i <= n - 2; i++) {
        // Check if i is prime
        isPrime1 = 1;
        for(j = 2; j * j <= i; j++) {
            if(i % j == 0) {
                isPrime1 = 0;
                break;
            }
        }
        // Check if i+2 is prime
        isPrime2 = 1;
        for(j = 2; j * j <= (i + 2); j++) {
            if((i + 2) % j == 0) {
                isPrime2 = 0;
                break;
            }
        }
        // If both are prime, print pair
        if(isPrime1 && isPrime2) {
            printf("(%d, %d)\n", i, i + 2);
        }
    }
    return 0;
}
