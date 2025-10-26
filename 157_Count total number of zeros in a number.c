#include <stdio.h>
int main() {
    long long num;   // to handle large numbers
    int digit, count = 0;

    printf("Enter a number: ");
    scanf("%lld", &num);   // %lld for long long input
    if(num == 0) {
    count = 1; // Special case: number itself is 0
    } else {
        while(num > 0) {
            digit = num % 10;  // Get last digit
            if(digit == 0)     // Check if zero
                count++;
            num = num / 10;    // Remove last digit
        }
    }
    printf("Total zeros = %d\n", count);
    return 0;
}
