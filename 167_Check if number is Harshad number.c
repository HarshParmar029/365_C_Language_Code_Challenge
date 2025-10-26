/*A Harshad Number is divisible by the sum of its digits.

Example:

18 → sum of digits = 1 + 8 = 9 → 18 % 9 == 0  → Harshad number*/

#include <stdio.h>
int main() {
    int num, temp, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    // Calculate sum of digits
    while (temp > 0) {
        digit = temp % 10;
        sum += digit;
        temp /= 10;
    }
    // Check if divisible by sum of digits
    if (num % sum == 0)
        printf("%d is a Harshad Number.\n", num);
    else
        printf("%d is not a Harshad Number.\n", num);
    return 0;
}
