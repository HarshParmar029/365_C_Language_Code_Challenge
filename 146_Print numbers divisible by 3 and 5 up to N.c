#include <stdio.h>
int main() {
    int n, i;
    printf("Enter the value of N: ");
    scanf("%d", &n);

    printf("Numbers divisible by both 3 and 5 up to %d are:\n", n);
    for(i = 1; i <= n; i++) {
        if(i % 3 == 0 && i % 5 == 0) {
            printf("%d ", i);
        }
    }
    return 0;
}
