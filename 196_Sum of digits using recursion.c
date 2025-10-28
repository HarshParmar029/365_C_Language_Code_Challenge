/*
Extract the last digit using % 10.

Add it to the result of recursive call for the remaining digits (num / 10).

Base case: when number becomes 0, stop recursion.
*/
#include <stdio.h>
int main() {
    int num, sum = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num > 0) {
        digit = num % 10;   // get last digit
        sum = sum + digit;  // add to sum
        num = num / 10;     // remove last digit
    }
    printf("Sum of digits = %d\n", sum);
    return 0;
}
