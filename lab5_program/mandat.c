/*
Program to ask the user to enter a positive integer number, and compute even(halve it) and odd(multiply by 3 and add 1) numbers.
Repeat this programuntil the number is 1, display the number value each time and display the number of times.
Author Daria Osypova
Date 21/10/25
*/ 
#include <stdio.h>

int main()
{   //Initialize the variables
    int num = 0;
    int steps = 0;

    //Creating numbers and input from user
    printf("Enter the positive number: ");
    scanf("%d", &num);

    printf("Value entered is %d\n", num);

   /*do {
        printf("Enter a positive number: ");
        scanf("%d", &num);

        if (num < 1) {
            printf("Error. Please enter a positive integer greater than 0.\n");
        }
    } 
    while (num < 1);
    printf("Value entered is %d\n", num);*/

    //Start while loop
    while (num >= 1)
    {
        //Start if statement 
        if (num % 2 == 0)
        {
            num = num / 2;
        }
        else
        {
            num = 3 * num + 1;
        }

        if (num != 1)
        {
            printf("Next value is %d\n", num);
        }

        printf("Next value is: ");
        scanf("%d", &num);

        //Go through iterations
        steps += 1;
    } // end while

    printf("Final value 1, number of steps %d\n", steps);

    return 0;
} // end main