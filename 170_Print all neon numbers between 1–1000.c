#include <stdio.h>
int main() {
    int num, square, sum, digit;

    printf("Neon numbers between 1 and 1000 are:\n");

    for (num = 1; num <= 1000; num++) {
        square = num * num;
        sum = 0;
        // Calculate sum of digits of square
        while (square > 0) {
            digit = square % 10;
            sum += digit;
            square /= 10;
        }
        if (sum == num) {
            printf("%d\n", num);
        }
    }
    return 0;
}
