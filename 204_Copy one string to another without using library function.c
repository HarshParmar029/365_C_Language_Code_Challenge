#include <stdio.h>
int main() {
    char str1[100], str2[100];
    int i;
    printf("Enter first string: ");
    gets(str1);  // read source string

    // copy characters one by one
    for(i = 0; str1[i] != '\0'; i++) {
        str2[i] = str1[i];
    }
    str2[i] = '\0';  // end destination string with null character

    printf("Copied string: %s", str2);
    return 0;
}
