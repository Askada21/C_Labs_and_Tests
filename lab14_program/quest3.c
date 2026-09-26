/*Write a program to display how a character array (e.g., char my_word[]) can be
initialised with a string. Try both ways, i.e. (i) initialising each element of the array
separately using a specific character, (ii) initialise the array with a complete string in
double-quotes. What happens if you use point (i) above but do not include the null
character? Print the string and see.
Print out the contents of the array. Does the null character get printed? Try printing
the null character after the last letter in the string - what is displayed?
Change your code and test it to see the different ways you can output the contents of
the character array as a string
*/

#include <stdio.h>

int main() {

    // (i) Initialize each element manually WITH null character
    char word1[] = {'H', 'e', 'l', 'l', 'o', '\0'};

    // (i) Initialize each element manually WITHOUT null character
    char word2[] = {'W', 'o', 'r', 'l', 'd'};   // NOT a valid C string

    // (ii) Initialize using a string literal
    char word3[] = "C Programming";

    puts("Printing as strings: ");
    printf("word1: %s\n", word1);
    printf("word2: %s\n", word2);
    printf("word3: %s\n", word3);

    puts("\nPrinting characters individually: ");
    for (int i = 0; i < 5; i++) {
        printf("%c ", word1[i]);
    }

    puts("\n\nPrinting null character explicitly: ");
    printf("After last letter of word1 -> ");

    // prints nothing visible
    printf("%c", '\0');  

    printf(" (nothing appears)\n");

    puts("\nAttempt to print word2 (no null terminator): ");
    // undefined behavior
    printf("word2: %s\n", word2);  

    return 0;
}