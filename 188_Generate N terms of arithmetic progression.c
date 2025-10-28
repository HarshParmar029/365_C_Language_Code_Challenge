#include <stdio.h>
int main() {
    int n, i;
    float a, d, term;
    printf("Enter first term (a): ");
    scanf("%f", &a);

    printf("Enter common difference (d): ");
    scanf("%f", &d);

    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    term = a;

    printf("Arithmetic Progression: ");
    for (i = 1; i <= n; i++) {
        printf("%.2f ", term);
        term = term + d;   // add common difference
    }
    printf("\n");
    return 0;
}
