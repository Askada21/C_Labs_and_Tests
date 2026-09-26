/*
Program to ask the user to enter a character and displays a message whether the character is a vowel (upper and
lower case), i.e., (a, e, i, o, u) or not.
Author Daria Osypova
Date 14/10/25
*/ 
#include <stdio.h>

int main(){
    //Initialize the variables
    char word = ' ';

    //Creating numbers and input from user
    printf("Enter a character:\n");
    scanf("%c", &word);

    //Start switch statement 
    switch(word) {
        case 'a': case 'A': {
            printf("The character %c is a vowel.\n", word);
            break;
        }
        case 'e': case 'E': {
            printf("The character %c is a vowel.\n", word);
            break;
        }
        case 'i': case 'I': {
            printf("The character %c is a vowel.\n", word);
            break;
        }
        case 'o': case 'O': {
            printf("The character %c is a vowel.\n", word);
            break;
        }
        case 'u': case 'U': {
            printf("The character %c is a vowel.\n", word);
            break;
        }
        default: {
            printf("Invalid operator\n");
            break;
        }
    } //end switch

    return 0;
    
} //end main