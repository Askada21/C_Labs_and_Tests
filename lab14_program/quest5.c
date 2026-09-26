#include <stdio.h>

int main(){
    //1)
    char *p = "abcd";
    while (*p)
        putchar(*p++);
    //Output: abcd
    /*
    Explanation: 
    p points to "abcd" (string literal).
    *p is 'a' - putchar('a') - prints a
    p++ - move to 'b' - print 'b'
    'c' - print 'c'
    'd' - print 'd'
    Next *p → '\0' - loop ends*/

    //2)    
    char *text = "abcd";
    char *p = text;
    p += strlen(p) - 1;
    while (text <= p)
        puts(p--);
    /*Output:
    d
    cd
    bcd
    abcd
    
    Explanation:
    text points to "abcd"
    p = text - points to 'a'
    p += strlen(p) - 1: moves p to last character 'd'
    */
    return 0;

}