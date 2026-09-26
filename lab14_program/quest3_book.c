#include <stdio.h>

int main(){
    char *text = "some text";

    //prints the whole string starting at text.
    printf("%s\n", text);

    //first character of the string 's'
    printf("%c\n", *text);

    //"more text" is a string literal. * - first character - 'm'
    printf("%c\n", *"more text");

    //text + 1 - pointer to second character. *(text + 1) - 'o'
    printf("%c\n", *(text + 1));

    //text + 1 - points to second character. %s prints from there to the null terminator
    //Output: ome text
    printf("%s\n", text + 1);

    //Passing a string without format specifiers.
    //Output: some text
    printf(text);

    //Unsafe.
    //Output: some
    *(text + 4) = '\0'; printf("\n%s\n", text);

    //"text"[2] - third character - 'x'
    printf("%c\n", "text"[2]);

    //"text" + 2 - pointer to third character - "xt". %s prints from there
    printf("%s\n", "text" + 2);

    return 0;
}