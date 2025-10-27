/*A Spy Number is a number where the sum of its digits equals the product of its digits.

Example:
1124 → sum = 1+1+2+4 = 8, product = 1×1×2×4 = 8 -> Spy Number*/

#include <stdio.h>
int main() {
    int num, temp, digit;
    int sum = 0, product = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    while (temp > 0) {
        digit = temp % 10;
        sum += digit;
        product *= digit;
        temp /= 10;
    }
    if (sum == product)
        printf("%d is a Spy Number.\n", num);
    else
        printf("%d is not a Spy Number.\n", num);
    return 0;
}
