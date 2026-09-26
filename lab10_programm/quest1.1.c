/*program to write a program that replaces all the blanck elements in a character array
with the underline character '_'. Use pointer, rather than a subscript, to access the elements of the array.
Author: Daria Osypova
Date: 27/01/26
*/
#include <stdio.h>

int main(){

    char chars[] = {'a', ' ', 'b', ' ', 'c', ' ', ' ', 'd'};
    int i;
    

    for(i = 0; i < 10; i++){
        printf("%c", *(chars + i));
    }

    for(i = 0; i < 10; i++){
        if(*(chars + i) == ' '){
            *(chars + i) = '_';
        }
    }

    printf("\n\n");

    for (i = 0; i < 10; i++) {
        printf("%c", *(chars + i));
    }

    return 0;
}