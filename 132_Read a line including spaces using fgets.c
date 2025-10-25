#include <stdio.h>
int main() {
    char str[100];  // buffer to store the line
    printf("Enter a line of text: ");
    fgets(str, sizeof(str), stdin);  // Read a line including spaces
    printf("You entered: %s", str);
    return 0;
}
