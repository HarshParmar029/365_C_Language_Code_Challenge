#include <stdio.h>
int main() {
    char str[100];  // declare a string (character array)
    printf("Enter a string: ");
    gets(str);  // read a string from user (unsafe, but simple for learning)
    printf("You entered: %s", str);
    return 0;
}
