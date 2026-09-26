/*Program to enter a string from standard input and uses separate
functions to do the following:
(a) Compare the string to the following string: “Hello World”.
(b) Determine if the word, i.e. substring, “is” occurs in the string entered (assuming
there is at least one occurrence). Is it possible to count the number of occurrences?
Hint: try the built-in string function: strstr(string_to_check, substring); This
function returns a char pointer that points at the memory address of the start of the
substring if found, otherwise NULL is returned.*/

#include <stdio.h>
#include <string.h>

#define SIZE 100

void compare(char str[]);
void check_substring(char str[]);

int main() {
    char sentence[SIZE];

    printf("Enter the sentence: ");
    fgets(sentence, SIZE, stdin);


    compare(sentence);
    check_substring(sentence);

    return 0;
}

// compares two strings. returns 0 if strings are exactly equal.
void compare(char str[]) {
    if (strcmp(str, "Hello World") == 0) {
        printf("The string matches \"Hello World\".\n");
    } else {
        printf("The string does NOT match \"Hello World\".\n");
    }
}

// function to check occurrence of "is" and count them
void check_substring(char str[]) {
    // pointer to walk through the string.
    char *ptr = str;
    //counter for how many times "is" occurs.
    int count = 0;

    //search for "is" starting at ptr. returns pointer to first occurrence of "is" after ptr
    while ((ptr = strstr(ptr, " is ")) != NULL) { //If "is" not found - returns NULL - stops the loop.
        count++;
        //move past the substring "is" to avoid counting it again.
        ptr += 2; 
    }

    if (count > 0) {
        printf("The substring \"is\" occurs %d time in the string.\n", count);
    } else {
        printf("The substring \"is\" does NOT occur in the string.\n");
    }
}