/*A Palindrome Number reads the same forward and backward.

Example: 121, 1331, 989 → all are palindromes.

This program takes a range (start to end) and prints all numbers that are palindromic.
*/
#include <stdio.h>
int main() {
    int start, end, num, temp, rem, rev;

    printf("Enter starting number: ");
    scanf("%d", &start);

    printf("Enter ending number: ");
    scanf("%d", &end);

    printf("Palindrome numbers between %d and %d are:\n", start, end);

    for (num = start; num <= end; num++) {
        temp = num;
        rev = 0;
        // Reverse the number
        while (temp > 0) {
            rem = temp % 10;
            rev = rev * 10 + rem;
            temp /= 10;
        }
        if (rev == num) {
            printf("%d\n", num);
        }
    }
    return 0;
}
