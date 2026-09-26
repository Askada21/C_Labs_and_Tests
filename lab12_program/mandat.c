/*Pass by Reference. Write a program similar to Q4 above but this time use Pass by
Reference to modify the integer variable declared in main().
Author: Daria Osypova
Date: 10/02/26*/

#include <stdio.h>

//Declare the function with the address
void number(int *);

// Start the main
int main() {

    //Initialize the variable
    int num = 1;

    // The program will print out the output
    printf("num contains: %d\n", num);

    // Call the function
    number(&num);

    //The last output
    printf("Back in main, num contains: %d\n", num);

    return 0;
}

// Start the new function that contains an address
void number(int *n) {
    //The output 
    printf("Inside function, before increment, n contains: %d\n", *n);

    //increment the variable 
    (*n) += 2;

    //The output 
    printf("Inside function, after increment, n contains: %d\n", *n);
}