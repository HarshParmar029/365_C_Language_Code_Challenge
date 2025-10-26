#include <stdio.h>
int main() {
    int num, i = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factors of %d are:\n", num);
    while (i <= num) {
        if (num % i == 0) {
            printf("%d\n", i);
        }
        i++;
    }
    return 0;
}
