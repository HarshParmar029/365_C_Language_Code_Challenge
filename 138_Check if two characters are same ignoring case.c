#include <stdio.h>
int main() {
    char ch1, ch2;
    printf("Enter first character: ");
    scanf(" %c", &ch1);

    printf("Enter second character: ");
    scanf(" %c", &ch2);
    // Convert both characters to lowercase if they are uppercase
    if(ch1 >= 'A' && ch1 <= 'Z') {
        ch1 = ch1 + ('a' - 'A');
    }
    if(ch2 >= 'A' && ch2 <= 'Z') {
        ch2 = ch2 + ('a' - 'A');
    }
    if(ch1 == ch2) {
        printf("The characters are the same (ignoring case).\n");
    } else {
        printf("The characters are different.\n");
    }
    return 0;
}
