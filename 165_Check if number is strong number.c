//A Strong Number = sum of factorials of its digits = original number.#include <stdio.h>
#include <stdio.h>
int main() {
    int num, temp, digit, fact, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

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
    if (sum == num)
        printf("%d is a Strong Number.\n", num);
    else
        printf("%d is not a Strong Number.\n", num);
    return 0;
}
