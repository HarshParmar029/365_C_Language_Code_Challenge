/*A Buzz Number is a number that either:
Is divisible by 7, or
Ends with 7.*/

#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    // A number is Buzz if it is divisible by 7 or ends with 7
    if (num % 7 == 0 || num % 10 == 7)
        printf("%d is a Buzz Number.\n", num);
    else
        printf("%d is not a Buzz Number.\n", num);
    return 0;
}
