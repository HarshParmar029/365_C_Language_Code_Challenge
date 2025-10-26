/*Explanation:
Digital root = keep adding digits of a number until only one digit remains.
Example:
9875→9+8+7+5=29→2+9=11→1+1=2
Digital root = 2*/

#include <stdio.h>
int main() {
    int num, sum;
    printf("Enter a number: ");
    scanf("%d", &num);
    // Repeat the process until a single digit is left
    while (num >= 10) {
        sum = 0;
        while (num > 0) {
            sum += num % 10;  // Add last digit
            num /= 10;        // Remove last digit
        }
        num = sum;  // Replace number with sum of digits
    }
    printf("Digital root = %d\n", num);
    return 0;
}
