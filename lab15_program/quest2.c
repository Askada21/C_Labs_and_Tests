/*Write a program that reads a sentence from standard input and uses separate functions
to do the following:
a) Calculates the number of characters in the sentence.
b) Appends the sentence to the end of the following string: “My sentence is : “*/
#include <stdio.h>
#include <string.h>

#define MAX_INPUT 200
#define MAX_SENTENCE 300

// Function prototypes
int length_of_sentence(char sentence[]);
void append_to_prefix(char sentence[]);

int main() {
    char sentence[MAX_INPUT];

    printf("Enter a sentence (no spaces allowed): ");
    scanf("%s", sentence);  

    // Call functions
    printf("Number of characters: %d\n", length_of_sentence(sentence));
    append_to_prefix(sentence);

    return 0;
}

// Function to calculate the length of the sentence
int length_of_sentence(char sentence[]) {
    return strlen(sentence);
}

// Function to append sentence to the prefix
void append_to_prefix(char sentence[]) {
    char final_sentence[MAX_SENTENCE] = "My sentence is : ";
    strcat(final_sentence, sentence);
    printf("%s\n", final_sentence);
}