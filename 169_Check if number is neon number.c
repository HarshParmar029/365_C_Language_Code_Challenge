/*A Neon Number is a number where the sum of digits of its square equals the number itself.
Example:
9 → 9² = 81 → 8 + 1 = 9 → Neon Number
*/
#include <stdio.h>
int main() {
    int num, square, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    square = num * num; // find square of number
    // calculate sum of digits of square
    while (square > 0) {
        digit = square % 10;
        sum += digit;
        square /= 10;
    }
    if (sum == num)
        printf("%d is a Neon Number.\n", num);
    else
        printf("%d is not a Neon Number.\n", num);
    return 0;
}
