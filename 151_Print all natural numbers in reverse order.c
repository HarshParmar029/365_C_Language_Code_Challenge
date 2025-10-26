#include <stdio.h>
int main() {
    int n, i;
    printf("Enter the value of N: ");
    scanf("%d", &n);

    printf("Natural numbers from %d to 1 are:\n", n);
    for(i = n; i >= 1; i--) {
        printf("%d ", i);
    }
return 0;
}
