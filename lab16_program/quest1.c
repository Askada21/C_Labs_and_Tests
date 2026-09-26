/*Program to enter a string from standard input and uses separate
functions to do the following:
(a) Count the number of times a vowel occurs in the sentence.
(b) Find the number of characters in the string you entered (use a built-in string
function). Using this number, display the string in reverse.
(c) Concatenate the string you entered to the end of the following string and display
the new string:
char sentence[40] = “I entered the string ”*/

#include <stdio.h>
#include <string.h>

#define SIZE 100

int vowels (char word[]);
void reverse(char str[]);
void concantenate(char str[]);

int main(){

    char sentence[SIZE];

    puts("Enter the sentence: ");
    fgets(sentence, SIZE, stdin);

    //removes the newline
    sentence[strlen(sentence) - 1] = '\0';

    printf("You entered: %s\n", sentence);

    // (a) Count vowels
    printf("Number of vowels: %d\n", vowels(sentence));

    //(b) Reversed string
    printf("Reverse string: \n");
    reverse(sentence);

    //(c) Concatenate string
    concantenate(sentence);

    return 0;
}

//(a)
int vowels(char word[]){
    int count = 0;
    int i;

    for (i = 0; i < strlen(word); i++){
        switch(word[i]){
            case 'a':
            case 'e':
            case 'o':
            case 'i':
            case 'u':
            case 'A':
            case 'E':
            case 'O':
            case 'I':
            case 'U': {
                //every time we find a vowel, we increase the count by 1
                count++;
                break;
            }
        }
    }
    //after counting all vowels, we send the result back to main()
    return count;
}

//(b)
void reverse(char str[]){
    int length = strlen(str);
    int i;

    for(i = 0; i < length; i++){
        //print characters from end to start
        printf("%c\n", str[length - i - 1]);
    }
}

//(c)
void concantenate(char str[]){
    char new_string[SIZE] = "I entered the string - ";
    strcat(new_string, str);
    printf("Concatenate string: %s\n", new_string);
}
