#include <stdio.h>
int main() {
    char ch;
    int num;
    printf("Enter a digit character (0-9): ");
    scanf(" %c", &ch);
    if(ch >= '0' && ch <= '9') {
        num = ch - '0';  // Convert character to integer
        printf("The integer value is: %d\n", num);
    } else {
        printf("Invalid input! Not a digit.\n");
    }
    return 0;
}
