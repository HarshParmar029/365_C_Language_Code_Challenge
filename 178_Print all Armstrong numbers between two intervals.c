/*
An Armstrong number (or narcissistic number) is a number that is equal to the sum of its own digits each raised to the power of the number of digits.
For example:
153 = 1³ + 5³ + 3³ → Armstrong
*/
#include <stdio.h>
#include <math.h>
int main() {
    int lower, upper, num, temp, remainder, n = 0;
    double result;

    printf("Enter lower interval: ");
    scanf("%d", &lower);
    printf("Enter upper interval: ");
    scanf("%d", &upper);

    printf("Armstrong numbers between %d and %d are:\n", lower, upper);
    for (num = lower; num <= upper; ++num) {
        temp = num;
        n = 0;
        result = 0.0;
        // count digits
        while (temp != 0) {
            temp /= 10;
            ++n;
        }

        temp = num;
        // calculate sum of powers
        while (temp != 0) {
            remainder = temp % 10;
            result += pow(remainder, n);
            temp /= 10;
        }
        // check Armstrong
        if ((int)result == num)
            printf("%d ", num);
    }
    return 0;
}
