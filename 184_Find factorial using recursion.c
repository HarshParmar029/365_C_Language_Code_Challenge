#include <stdio.h>
// function to find factorial using recursion
int factorial(int n) {
    if (n == 0 || n == 1)    // base condition
        return 1;
    else
        return n * factorial(n - 1);  // recursive call
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factorial of %d = %d\n", n, factorial(n));
    return 0;
}
