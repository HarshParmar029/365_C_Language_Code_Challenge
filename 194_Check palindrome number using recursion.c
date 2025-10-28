/*
A palindrome number reads the same forward and backward.
e.g. 121, 1331, 454
We use recursion to reverse the number.
Finally, compare the original number and the reversed number
*/

#include <stdio.h>
// Recursive function to reverse the number
int reverse(int num, int rev) {
    if (num == 0)
        return rev;
    rev = rev * 10 + (num % 10);
    return reverse(num / 10, rev);
}

int main() {
    int num, reversed;

    printf("Enter a number: ");
    scanf("%d", &num);

    reversed = reverse(num, 0);
    if (num == reversed)
        printf("%d is a palindrome number.\n", num);
    else
        printf("%d is not a palindrome number.\n", num);
    return 0;
}
