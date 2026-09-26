/*Returning a value from a function. Write a program that uses a function to check if a
number is even or odd. Your main() should allow the user to enter any number and
this should be passed to your function. Your function should check if the number is
even or odd and return a 1 if even or a 0 if odd. Your main() should then indicate the
result
Author: Daria Osypova
Date: 10/02/26*/
#include <stdio.h>

//Declare the function that returns an integer value, therefore it returns a value(1 or 0)
int number(int);

int main() {
    //Initialize variables 
    int num, result;

    // Ask the user to input the value
    printf("Enter the number: ");
    scanf("%d", &num);

    //To store the value returned by the function
    result = number(num);

    if (result == 1) {
        printf("The number is even\n");
    } else {
        printf("The number is odd\n");
    }

    return 0;
}

int number(int num) {
    if (num % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}
