/*A Pronic Number is a number that is the product of two consecutive integers.
n=x×(x+1)*/
#include <stdio.h>
int main() {
    int num, i, flag = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 0; i <= num / 2; i++) {
        if (i * (i + 1) == num) {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        printf("%d is a Pronic Number.\n", num);
    else
        printf("%d is not a Pronic Number.\n", num);
    return 0;
}
