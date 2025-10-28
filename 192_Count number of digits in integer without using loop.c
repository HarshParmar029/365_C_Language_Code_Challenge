#include <stdio.h>
#include <math.h>  // for log10() function
int main() {
    int num, count;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num == 0)
        count = 1;   // special case: log10(0) undefined
    else
        count = (int)log10(fabs(num)) + 1;  // use absolute value for negatives

    printf("Number of digits in %d = %d\n", num, count);
    return 0;
}
