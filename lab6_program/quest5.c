/*Write a program that uses a char array with 5 elements. Enter any 5 characters of your
choice into the array. Output the contents of the array to the screen and display each
character.
Note: Does your program allow any white-space character to be entered? If yes, can
you modify your code to prevent a white-space character be entered?*/

#include <stdio.h>

#define CHAR 5 

int main (){
    int i;
    char arr[CHAR];

    printf("Enter %d characters: ", CHAR);
    for (i = 0; i < CHAR; i++){
        scanf("%c", &arr[i]);
        if (arr[i] == ' ' || arr[i] == '\t' || arr[i] == '\n'){
            printf("Whitespace not allowed! Try again.\n");
            i--;
        }
    }

    printf("\nYou entered: ");
    for (i = 0; i < CHAR; i++) {
        printf("%c ", arr[i]);
    }

    return 0;
}