/*Program to write a C program to display the lines of a text file along with the line numbers. The
first line should be proceeded by 1., the second by 2., etc., for each line in the text file.
Daria Osypova
28/04/2026*/

#include <stdio.h>
#define MAX_CHARS 81

int main()
{
    //Create a file pointer
    FILE *fp;
    //Initialize variables
    char one_line[MAX_CHARS];
    int line_number = 1;   // Line counter

    // Open the file called file.txt for reading
    // and check if this is successful
    if ((fp = fopen("file.txt", "r")) == NULL)
    {
        printf("\nError opening file");

        return 0; // return 1; doesnt matter what i put 0 or 1
    }
    else
    {   // Read each line from the file into one_line until end-of-file is reached
        while (fgets(one_line, MAX_CHARS, fp) != NULL)
        {
            //Print number + line
            printf("%d. %s", line_number, one_line);  
            //Increment
            line_number++;
        }
    }

    //Close the file once finished
    fclose(fp);

    return 0;
}