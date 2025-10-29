#include <stdio.h>
int main() {
    char str[100];
    int i, length = 0;
    char temp;
    printf("Enter a string: ");
    gets(str);   // take input string

    // find length of string
    for(i = 0; str[i] != '\0'; i++) {
        length++;
    }
    // reverse the string
    for(i = 0; i < length / 2; i++) {
        temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
    printf("Reversed string: %s", str);
    return 0;
}
