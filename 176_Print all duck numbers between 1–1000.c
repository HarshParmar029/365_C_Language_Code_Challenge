#include <stdio.h>
int main() {
    int num, temp, digit, flag;

    printf("Duck numbers between 1 and 1000 are:\n");

    for (num = 1; num <= 1000; num++) {
        temp = num;
        flag = 0;
        // Skip numbers starting with 0 (not possible in int input anyway)
        while (temp > 0) {
            digit = temp % 10;
            if (digit == 0) {
                flag = 1;
                break;
            }
            temp /= 10;
        }
        // If number contains 0 and doesn't start with 0 → it's a Duck number
        if (flag == 1 && num / 10 != 0) {
            printf("%d\n", num);
        }
    }
    return 0;
}
