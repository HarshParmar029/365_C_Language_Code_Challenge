/*Explanation:
An Automorphic number is a number whose square ends with the same digits as the number itself.*/

#include <stdio.h>
int main() {
    int num, square, temp, lastDigits = 0, power = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    square = num * num;
    temp = num;
    // Count number of digits in num
    while (temp > 0) {
        power *= 10;
        temp /= 10;
    }
    lastDigits = square % power;
    if (lastDigits == num)
        printf("%d is an Automorphic number.\n", num);
    else
        printf("%d is not an Automorphic number.\n", num);
    return 0;
}
