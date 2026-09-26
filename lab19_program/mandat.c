/*Write a C program to compare two text files and display any differences between the
files.
In order to test your program, create the two text files beforehand that are short (only
a couple of characters in each with some similarities and some differences). Does your
program work if both text files contain text on:
a. a single line
b. multiple lines*/
#include <stdio.h>

int main() {
    //Declares two file pointers and initialize variables
    FILE *f1, *f2;
    char c1, c2;
    //Keeps track of the position of characters. Starts at 1
    int position = 1;

    //Open files in read mode
    f1 = fopen("file1.txt", "r");
    f2 = fopen("file2.txt", "r");

    //Checks if either file failed to open
    if (f1 == NULL || f2 == NULL) {
        printf("Error opening file\n");
        //Stops the program if there is an error
        return 1;
    }

    //Read each character separately from the file and display to standard output
    while ((c1 = fgetc(f1)) != EOF && (c2 = fgetc(f2)) != EOF) {
        //Checks if characters are different
        if (c1 != c2) {
            printf("Difference at position %d: %c vs %c\n", position, c1, c2);
        }
        //Moves to the next position
        position++;
    }

    //Closes first file
    fclose(f1);
    //Closes second file
    fclose(f2);

    return 0;
}
//Yes, it works for both files in part (a) and (b) because 
//the program reads the files character by character, and a new line is also a character.