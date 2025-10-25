#include <stdio.h>
int main() {
    char str[100];
    int i, count = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read a line including spaces
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            count++;
        }
    }
    printf("Number of lowercase letters: %d\n", count);
return 0;
}
