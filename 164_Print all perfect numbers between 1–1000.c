#include <stdio.h>
int main() {
    int num, i, sum;

    printf("Perfect numbers between 1 and 1000 are:\n");

    for (num = 1; num <= 1000; num++) {
        sum = 0;
        for (i = 1; i < num; i++) {
            if (num % i == 0) {
                sum += i;
            }
        }
        if (sum == num) {
            printf("%d\n", num);
        }
    }
    return 0;
}

