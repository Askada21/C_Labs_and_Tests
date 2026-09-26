/*Program to calculate the Fibonacci serieas.
Program must implement the following: 1)Ask the user to enter numbers of terms.
2)Display all the numbers in the Fibonacci series. 3)Program must include following statements...
Author: Daria Osypova
Date: 25/11/25
*/
#include <stdio.h>

// Array contains maximum 15 terms
#define FIBONACCI 15

int main()
{ // Initialize the variables
    int arr[FIBONACCI];
    int i, numbers;
    int choice = 0;

    printf("Welcome to the Fibonacci series program\n");

    // Loop runs until the user choose option 2
    while (choice != 2)
    {
        // Display the menu with options
        printf("Select the option: \n");
        printf("1. Enter the number of terms to calculate in the sequence and display\n");
        printf("2. End program\n");
        printf("Your choice: ");
        scanf("%d", &choice);

        // Select option 1 the program will calculate Fibonacci numbers
        if (choice == 1)
        {
            // Read how many terms the user input
            printf("Enter the number of terms (max %d): ", FIBONACCI);
            scanf("%d", &numbers);

            // Check if numbers in the range 1 - 15
            if (numbers < 1 || numbers > 15)
            {
                printf("Invalid number. Enter 1 - 15\n");
                // Skip the rest of current loop. Do not read incorrect numbers that do not include in the range
                continue;
            }

            // Set up first and second Fibonacci numbers in th series
            arr[0] = 0;
            arr[1] = 1;

            // Calculate actual Fibonacci numbers. Start from the 2 inbex becausen 0 and 1 already made
            for (i = 2; i < numbers; i++)
            {
                arr[i] = arr[i - 1] + arr[i - 2];
            }

            // Display the Fibonacci sequence up to the number that user etnered
            printf("Fibonacci series up to %d terms:\n", numbers);
            for (i = 0; i < numbers; i++)
            {
                printf("%d ", arr[i]);
            }
            printf("\n");

        } // end if
        // If the user enter invalid option
        else if (choice != 2)
        {
            printf("Invalid option. Try again");
        } // end else if
    } // end while
    // When the user choose 2 option, the program will end with following statement
    printf("The program end. Good bye!");

    return 0;
} // end main