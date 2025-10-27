#include <stdio.h>
int main() {
    int num, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);
    while (num != 0) {
        digit = num % 10;         // extract last digit
        sum += digit * digit;     // add its square
        num /= 10;                // remove last digit
    }
    printf("Sum of squares of digits = %d\n", sum);
    return 0;
}
