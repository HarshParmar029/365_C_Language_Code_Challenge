#include <stdio.h>
int main() {
    int num, i = 1, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (i <= num) {
        if (num % i == 0) {
            count++;
        }
        i++;
    }
    printf("Total number of factors of %d = %d\n", num, count);
    return 0;
}
