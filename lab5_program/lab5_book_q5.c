/*Write a program that allows a teacher to enter a percentage mark for each student in a class.
The teacher enters a negative mark to indicate that threre are no more marks to be entered.
Once all the marks have been entered, the program displays the average percentage mark for the class.*/
#include <stdio.h>

int main()
{
    // Declare variables
    float mark = 0.0;      // To store each entered mark
    float total = 0.0;     // Sum of all valid marks
    int count = 0;         // Number of students (valid marks)
    float average = 0.0;   // Average mark

    // Ask for input
    printf("Enter percentage marks for each student.\n");
    printf("Enter a negative number to finish.\n");

    // Use a do...while loop to ensure we prompt at least once
    do
    {
        printf("Enter mark: ");
        scanf("%f", &mark);

        // Check for valid mark
        if (mark >= 0)
        {
            total += mark; // Add to total
            count++;       // Increase student count. Counts how many marks entered
        }

    } while (mark >= 0); // Stop when a negative mark is entered

    // Avoid division by zero
    if (count > 0)
    {
        average = total / count;
        printf("\nAverage percentage mark for the class: %.2f%%\n", average);
    }
    else
    {
        printf("\nNo valid marks were entered.\n");
    }

    return 0;
}
