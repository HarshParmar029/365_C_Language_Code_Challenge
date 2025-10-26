#include <stdio.h>
int main() {
    int num, temp, digit, sum;

    printf("Harshad numbers between 1 and 1000 are:\n");

    for (num = 1; num <= 1000; num++) {
        temp = num;
        sum = 0;
        // Calculate sum of digits
        while (temp > 0) {
            digit = temp % 10;
            sum += digit;
            temp /= 10;
        }
        // Check if number is divisible by sum of its digits
        if (num % sum == 0) {
            printf("%d\n", num);
        }
    }
    return 0;
}
