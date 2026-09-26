/*Returning a value from a function. Write a program that uses a function to check for
the highest value of 3 numbers. You should enter the 3 numbers using main() and
these should be passed to your function. Your function should find the highest of
these numbers and return it back to main(). Your main() should then display this
highest number
Author: Daria Osypova
Date: 10/02/26*/
#include <stdio.h>

//Declare the function
void highest(int, int, int );

int main(){
    //Initialize the variable
    int num1, num2, num3;

    //Ask the user to input
    printf("Enter 3 nums: ",num1, num2, num3);
    scanf("%d%d%d", &num1, &num2, &num3);

    //Call the function
    highest(num1, num2, num3);

    return 0;
}

// Start the new function 
void highest(int n1, int n2, int n3) {
    //Initialize the variable
    int high;
    // Set up the rule 
    high = n1;

    //If statement
    if (n2 > high) {
        high = n2;
    }
    if (n3 > high) {
        high = n3;
    }

    printf("The highest number is: %d\n", high);
}