/*Using separate functions for part (a) and (b) below, extend your program in Q3 to do
the following:
a) Concatenate the first word entered to the end of the string: "First word entered
is ". Display this entire string on the screen.
b) Calculate the length of the string in part (a) above and display the number of
characters used*/

#include <stdio.h>
#include <string.h>

//Function prototypes
//Passing a string inside the word
void append(char word[]);
void length_of_string(char sentence[]);

int main() {
    //Initialize variables
    char str1[50];

    //Ask user
    printf("Enter first word: ");
    scanf("%s", str1);

    //Call the function
    append(str1);

    return 0;
}

void append(char word[]) {

    char sentence[100] = "First word entered is ";

    //Concatenating a string
    strcat(sentence, word);

    printf("%s\n", sentence);

    //print how many characters are in that full string
    length_of_string(sentence);
}

void length_of_string(char sentence[]) {

    //Finding the length of a string
    int len = strlen(sentence);

    printf("Number of characters: %d\n", len);
}