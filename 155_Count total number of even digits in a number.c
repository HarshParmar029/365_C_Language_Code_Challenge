#include <stdio.h>
int main() {
    long long num;
    int digit, count = 0;

    printf("Enter a number: ");
    scanf("%lld", &num);   // Note: %lld for long long

    while(num > 0) {
        digit = num % 10;
        if(digit % 2 == 0)
            count++;
        num = num / 10;
    }
    printf("Total even digits = %d\n", count);
    return 0;
}
