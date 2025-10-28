/*
If n == 0, Fibonacci number is 0.
If n == 1, Fibonacci number is 1.

For all others:
F(n)=F(n−1)+F(n−2)

The program calls the same function recursively until it reaches the base cases.*/

#include <stdio.h>
// Function to find nth Fibonacci number
int fibonacci(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}
int main()
{
    int n, result;

    printf("Enter the term number (n): ");
    scanf("%d", &n);

    result = fibonacci(n);

    printf("The %dth Fibonacci number is: %d\n", n, result);
    return 0;
}
