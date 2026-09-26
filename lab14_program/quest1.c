#include <stdio.h>

int main(){
    //right align, minimum width 5
    printf("%5s", "abcd\n");

    //left align, minimum width 5
    printf("%5s", "abcdef\n");

    //print first 2 characters
    printf("%-5s", "abc\n");

    //cut to 2 chars, right align width 5
    printf("%5.2s", "abcde\n");

    //cut to 2 chars, left align width 5
    printf("%-5.2s", "abcde\n");
    return 0;
}