/*The program uses recursion to repeatedly add a until it becomes divisible by b.

static int multiple remembers its value between recursive calls.

When multiple % b == 0, that multiple is the LCM.*/

#include <stdio.h>
// Function to find GCD using recursion
int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
// Function to find LCM using recursion (formula based)
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}
int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("LCM of %d and %d = %d\n", num1, num2, lcm(num1, num2));
    return 0;
}
