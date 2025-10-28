#include <stdio.h>
#include <math.h>   // for pow() function
int main() {
    float a, r, n, nthTerm;

    printf("Enter first term (a): ");
    scanf("%f", &a);

    printf("Enter common ratio (r): ");
    scanf("%f", &r);

    printf("Enter term number (n): ");
    scanf("%f", &n);

    nthTerm = a * pow(r, n - 1);   // formula for nth term

    printf("The %.0fth term of the Geometric Progression is: %.2f\n", n, nthTerm);
    return 0;
}
