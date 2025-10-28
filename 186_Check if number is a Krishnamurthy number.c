/*
A Krishnamurthy number (also called Strong number) is a number whose sum of factorials of digits equals the number itself.
Example:
145 = 1! + 4! + 5! = 1 + 24 + 120 = 145
Hence, 145 is a Krishnamurthy number.*/

#include <stdio.h>
// Function to find factorial of a digit
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}
int main() {
    int num, temp, digit, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;  // store original number

    while (temp > 0) {
        digit = temp % 10;          // get last digit
        sum += factorial(digit);    // add factorial of digit
        temp /= 10;                 // remove last digit
    }
    if (sum == num)
        printf("%d is a Krishnamurthy number.\n", num);
    else
        printf("%d is not a Krishnamurthy number.\n", num);
    return 0;
}
