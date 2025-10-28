#include <stdio.h>
#include <string.h>  // required for strlen()
int main() {
    char str[100];
    int length;
    printf("Enter a string: ");
    gets(str);  // read input string

    length = strlen(str);  // find length using library function

    printf("Length of string = %d", length);
return 0;
}
