/* Program to read in your name and display it with a space between each letter. For example,
John gets display as J o h n.
use fgets() and puts() to rad/write strings

fgets → input (safe reading)
fgets(array, size, stdin)

puts → output (simple printing)
*/

#include <stdio.h>

int main(){
    //Initialize variables
    char name[10];
    int i = 0;

    //The user's output
    puts("Enter the name: ");
    //The user's input
    fgets(name, sizeof(name), stdin);

    printf("\n");
    
    //The user's output
    puts("You typed: ");
    //Since fgets() keeps the newline (\n), we should ignore it while printing.
    //'\0' is the null character — it marks the end of a string in C.
    while (name[i] != '\0' && name[i] != '\n'){
        printf("%c ", name[i]);
        i++;
    }

    return 0;
}