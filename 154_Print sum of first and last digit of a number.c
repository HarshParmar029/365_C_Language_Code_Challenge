#include <stdio.h>
int main() {
    int num, first, last;
    printf("Enter a number: ");
    scanf("%d", &num);

    last = num % 10;  // Get last digit
    // Find first digit
    while(num >= 10) {
        num = num / 10;
    }
    first = num;

    printf("Sum of first and last digit = %d\n", first + last);
    return 0;
}
