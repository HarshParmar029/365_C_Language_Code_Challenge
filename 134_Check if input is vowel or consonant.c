#include <stdio.h>
int main() {
    char ch;

    printf("Enter an alphabet: ");
    scanf(" %c", &ch);  // Note the space before %c to skip any whitespace
    // Check if the character is an alphabet
    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        // Check for vowels
        if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U' ||
           ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') {
            printf("%c is a vowel.\n", ch);
        } else {
            printf("%c is a consonant.\n", ch);
        }
    } else {
        printf("Invalid input! Please enter an alphabet.\n");
    }
    return 0;
}
