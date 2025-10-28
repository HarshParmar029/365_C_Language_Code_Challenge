/*Use recursion to extract last digit and build the reversed number.

Base case: when number becomes 0, stop recursion.

Recursive step:
Multiply current reversed number by 10 and add the last digit.*/

#include <stdio.h>
// Recursive function to reverse a number
int reverse(int num, int rev) {
    if (num == 0)
        return rev;
    rev = rev * 10 + (num % 10);
    return reverse(num / 10, rev);
}
int main() {
    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = reverse(num, 0);  // initial reversed number = 0

    printf("Reversed number = %d\n", result);

    return 0;
}
