#include <stdio.h>
int main() {
    long long num;   // use long long for large numbers
    int digit, count = 0;

    printf("Enter a number: ");
    scanf("%lld", &num);   // %lld for long long input

    while(num > 0) {
        digit = num % 10;      // get last digit
        if(digit % 2 != 0)     // check if odd
            count++;
        num = num / 10;        // remove last digit
    }
    printf("Total odd digits = %d\n", count);
    return 0;
}
