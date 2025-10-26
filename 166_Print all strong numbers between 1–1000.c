#include <stdio.h>
int main() {
    int num, temp, digit, fact, sum;

    printf("Strong numbers between 1 and 1000 are:\n");

    for (num = 1; num <= 1000; num++) {
        temp = num;
        sum = 0;

        while (temp > 0) {
            digit = temp % 10;
            // Calculate factorial of each digit
            fact = 1;
            for (int i = 1; i <= digit; i++) {
                fact *= i;
            }

            sum += fact;
            temp /= 10;
        }
        if (sum == num) {
            printf("%d\n", num);
        }
    }
    return 0;
}
