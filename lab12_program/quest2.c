/*Returning a value from a function. Write a program that uses a function to calculate
the average of 3 numbers. Your main() should ask the user to enter these 3 numbers
and they should be passed to the function as parameters. Your function should
calculate the average and return this value back to the main(). Your main() should
then display this average value
Author: Daria Osypova
Date: 10/02/26*/
#include <stdio.h>

//Declare the function
float average(int, int, int);

int main() {
    //Initialize the variable
    int num1, num2, num3;
    float avg;

    //Ask the user to input
    printf("Enter 3 numbers: ");
    scanf("%d%d%d", &num1, &num2, &num3);

    //Call the function
    avg = average(num1, num2, num3);

    printf("The average is: %.2f\n", avg);

    return 0;
}
// Start the new function 
float average(int n1, int n2, int n3) {
    return (n1 + n2 + n3) / 3.0;
}
