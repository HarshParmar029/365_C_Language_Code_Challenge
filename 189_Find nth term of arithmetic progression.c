#include <stdio.h>
int main() {
    float a, d, n, nthTerm;
    printf("Enter first term (a): ");
    scanf("%f", &a);

    printf("Enter common difference (d): ");
    scanf("%f", &d);

    printf("Enter term number (n): ");
    scanf("%f", &n);

    nthTerm = a + (n - 1) * d;

    printf("The %.0fth term of the Arithmetic Progression is: %.2f\n", n, nthTerm);
    return 0;
}
