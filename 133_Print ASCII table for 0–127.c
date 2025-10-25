#include <stdio.h>
int main() {
    int i;
    printf("ASCII Table (0–127):\n");
    printf("Dec  Char\n");

    for(i = 0; i <= 127; i++) {
        printf("%3d  ", i);
        // Print character if printable
        if(i >= 32 && i <= 126) {
            printf("%c\n", i);
        } else {
            printf("\n");  // Non-printable characters
        }
    }
    return 0;
}
