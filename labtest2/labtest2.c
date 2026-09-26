/*Program to implement a word guessing game. The program will prompt the user to guess the characters
in the word "coding". The program will provide a feedback on whether each guessed character
entered is present or not. The user is allowed a maximum of 7 wrong character guesses.
Author: Daria Osypova
Date: 24/03/26
*/
#include <stdio.h>
#include <string.h>

int main()
{
    // Initialize the variables
    // Assignes the word to guess
    char word[] = "coding";
    // Length of the word that we need to guess
    int length = strlen(word);
    // Stores guessed letters
    char guess[10];
    int wrong_guess = 0;
    int max_guess = 7;
    char attempt;
    int i;
    int correct = 0;

    // Assigns the while loop to start guessing the word
    while (wrong_guess < max_guess && correct == 0)
    {
        // Assume that one character was guessed
        correct = 1;

        // Show the character that you enter currently
        printf("\nWord: ");
        // For loop allows enter one character where the loop go through the word length
        for (i = 0; i < length; i++)
        {
            // If statement put the entered letter into correct place
            if (guess[i] == 0)
            {
                printf("_ ");
                // The guess is still wrong
                correct = 0;
            }
            else
            {
                printf("%c ", guess[i]);
            }
        }

        printf("\n");

        // If statement to continue checking and guessing the characters
        if (correct == 0)
        {
            printf("Enter a letter: ");
            scanf(" %c", &attempt);

            // Initialize a new variable
            int found = 0;

            // For loop goes through the length of the word
            for (i = 0; i < length; i++)
            {
                // If statement check if the character you entered is equal to attempt that you used
                if (word[i] == attempt)
                {
                    guess[i] = attempt;
                    found = 1;
                }
            }

            // If statement to conclude if you guessed the character or not
            if (found == 1)
            {
                printf("\nCorrect\n");
            }
            else
            {
                // Counting how many guesses is left
                wrong_guess++;
                printf("%c is not in the word. Attempts remaining: %d\n", attempt, max_guess - wrong_guess);
            }
        }
    }

    // If stetement checkes if you guessed the word or not
    if (correct == 1)
    {
        printf("You guessed the word!\n"); // If you guessed
    }
    else
    {
        printf("Game over, you have run out of attempt. The correct word is: %s\n", word); // If you failed
    }

    return 0;
}