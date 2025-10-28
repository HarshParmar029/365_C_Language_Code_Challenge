#include <stdio.h>
int main() {
    int i;
    printf("ASCII values from 65 to 122:\n");
    for (i = 65; i <= 122; i++) {
        printf("ASCII value of %c = %d\n", i, i);
    }
    return 0;
}
