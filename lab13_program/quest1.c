/*A program to pass by Reference. Write a program that uses two functions - one function to calculate
the area of a Square (side x side), another function to calculate the area of a Circle (pi
x radius 2 ). Declare a variable in your main for the length of a side of the Square and
another variable for the radius of the Circle. Ask the user to enter these values. Using
Pass by Reference, pass these as parameters to the separate functions, calculate the
areas of the Square and Circle in their separate functions, and display the calculated
areas for the Square and Circle back in your main(). Remember, you must use Pass by
Reference. Do not forget to declare the signatures for both functions.
You can assume the value of pi = 3.14
Author: Daria Osypova
Date: 17/02/26*/

#include <stdio.h>

//Function signatures
void square(int *side, int *area_sq);
void circle(int *radius, float *area_cir);

int main(){
    //initialise variables
    int side, radius;
    int area_square;
    float area_circle;

    //User enters values
    printf("Enter the side: ");
    scanf("%d", &side);

    //User enters values
    printf("Enter the side: ");
    scanf("%d", &radius);

    //call functions
    square(&side, &area_square);
    circle(&radius, &area_circle);

    printf("\nThe area of the square is: %d\n", area_square);
    printf("The area of the circle is: %.2f\n", area_circle);

    return 0;
}

//create a new function
void square (int *side, int *area_sq){
    *area_sq = (*side) * (*side);
}

//create a new function
void circle(int *radius, float *area_cir){
    float pi = 3.14;
    *area_cir = pi * (*radius) * (*radius);
}