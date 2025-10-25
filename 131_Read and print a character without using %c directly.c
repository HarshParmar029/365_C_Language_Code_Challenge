#include <stdio.h>
int main() {
    int ch;
    printf("Enter a character: ");
    scanf("%d", &ch);  // Read ASCII value of character
    printf("You entered: %c\n", (char)ch);  // Cast int to char
    printf("ASCII value: %d\n",ch);
    return 0;
}
