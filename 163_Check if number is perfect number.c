/*Explanation:
A Perfect Number is a number that is equal to the sum of its proper divisors (excluding itself).*/

#include <stdio.h>
int main() {
    int num, i = 1, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (i < num) {
        if (num % i == 0) {
            sum += i;  // add factor to sum
        }
        i++;
    }
    if (sum == num)
        printf("%d is a Perfect Number.\n", num);
    else
        printf("%d is not a Perfect Number.\n", num);
    return 0;
}
