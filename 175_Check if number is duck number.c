/*A Duck Number is a positive number that contains at least one zero, but not at the beginning.
Examples:
3210 ✅ (contains 0, not at start)
707 ✅ (contains 0, not at start)
035 ❌ (starts with 0 → not Duck)*/

#include <stdio.h>
int main() {
    long num, temp;
    int digit, flag = 0;

    printf("Enter a number: ");
    scanf("%ld", &num);

    temp = num;
    // Check each digit (ignoring leading zeros)
    while (temp > 0) {
        digit = temp % 10;

        if (digit == 0) {
            flag = 1;
            break;
        }

        temp /= 10;
    }
    // Check if number starts with 0 (not allowed)
    if (num == 0 || num / 10 == 0) {
        printf("%ld is not a Duck Number.\n", num);
    }
    else if (flag == 1)
        printf("%ld is a Duck Number.\n", num);
    else
        printf("%ld is not a Duck Number.\n", num);
    return 0;
}
