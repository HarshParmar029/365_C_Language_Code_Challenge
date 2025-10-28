#include <stdio.h>
int main() {
    int n, i;
    float a, r, term;

    printf("Enter first term (a): ");
    scanf("%f", &a);

    printf("Enter common ratio (r): ");
    scanf("%f", &r);

    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    term = a;
    printf("Geometric Progression: ");
    for (i = 1; i <= n; i++) {
        printf("%.2f ", term);
        term = term * r;   // multiply by common ratio
    }
    printf("\n");
    return 0;
}
