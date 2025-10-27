#include <stdio.h>
int main() {
    int num, temp, digit, sum, product;

    printf("Spy numbers between 1 and 1000 are:\n");

    for (num = 1; num <= 1000; num++) {
        temp = num;
        sum = 0;
        product = 1;

        while (temp > 0) {
            digit = temp % 10;
            sum += digit;
            product *= digit;
            temp /= 10;
        }
        if (sum == product) {
            printf("%d\n", num);
        }
    }
    return 0;
}
