#include <stdio.h>
int main() {
    long long num;   // to handle large numbers
    int digit;
    long long product = 1;
    int hasEven = 0; // to check if any even digit exists

    printf("Enter a number: ");
    scanf("%lld", &num);   // %lld for long long input

    while(num > 0) {
        digit = num % 10;      // get last digit
        if(digit % 2 == 0) {   // check if even
            product *= digit;  // multiply
            hasEven = 1;
        }
        num = num / 10;        // remove last digit
    }
    if(hasEven)
        printf("Product of even digits = %lld\n", product);
    else
        printf("No even digits found.\n");
    return 0;
}
