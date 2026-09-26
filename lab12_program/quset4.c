/*Pass by Value. Write a program to demonstrate the use of Pass by Value with a
function. Begin by creating an integer variable in your main() and initialise it to 1.
Display this value here to standard output. Next, call your function and pass this
variable as a parameter to the function. Increment the parameter variable in your
function by 2 and display this value here. Your function should end here, and
execution returns back to where the function was called. Finally, display the value of
the variable in your main() again and see if it has changed value. Did the function
increment the variable in your main()?
Author: Daria Osypova
Date: 10/02/26*/

#include <stdio.h>

//Declare the function
void number(int);

int main() {
    //Initialize the variable
    int num = 1;

    // The program will print out the output
    printf("num contains: %d\n", num);

    // Call the function
    number(num);

    //The last output
    printf("Back in main, num contains: %d\n", num);

    return 0;
}

// Start the new function 
void number(int n) {

    printf("Inside function, before increment, n contains: %d\n", n);

    //increment the variable 
    n += 2;

    printf("Inside function, after increment, n contains: %d\n", n);
}