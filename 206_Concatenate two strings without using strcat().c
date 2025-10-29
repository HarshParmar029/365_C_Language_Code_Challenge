#include <stdio.h>
int main() {
    char str1[100], str2[100];
    int i, j;

    printf("Enter first string: ");
    gets(str1);   // take first string
    printf("Enter second string: ");
    gets(str2);   // take second string

    // find length of first string
    for(i = 0; str1[i] != '\0'; i++);
    // add str2 at the end of str1
    for(j = 0; str2[j] != '\0'; j++) {
        str1[i] = str2[j];
        i++;
    }
    // put null character at the end
    str1[i] = '\0';
    printf("Concatenated string: %s", str1);
    return 0;
}
