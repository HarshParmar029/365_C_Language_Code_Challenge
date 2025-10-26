#include <stdio.h>
int main() {
    long long num;   // to handle large numbers
    int digit;
    long long product = 1;
    int hasOdd = 0;  // flag to check if any odd digit exists

    printf("Enter a number: ");
    scanf("%lld", &num);   // %lld for long long input

    while(num > 0) {
        digit = num % 10;        // get last digit
        if(digit % 2 != 0) {     // check if odd
            product *= digit;    // multiply
            hasOdd = 1;
        }
        num = num / 10;          // remove last digit
    }
    if(hasOdd)
        printf("Product of odd digits = %lld\n", product);
    else
        printf("No odd digits found.\n");
    return 0;
}
