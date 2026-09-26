/*Passing 1-D Array. Write a program that uses a function to calculate the average of 5
numbers in an array. In the main(), you must ask the user to enter 5 numbers and store
these in the array. Pass the array to a function in which the function calculates the
average of these 5 numbers. Return the average to your main() and display this
Author: Daria Osypova
Date: 17/02/26*/

#include <stdio.h>

//set a constant variable
#define NUM 5

//Function signature
int avg_arr(int []);

int main(){

    //initialise variables
    int i;
    int values[NUM];
    float avg;

    //User enters values
    printf("Enter %d numbers: ", NUM);
    for(i = 0; i < NUM; i++){
        scanf("%d", &values[i]);
    }

    //calls the function
    avg = avg_arr(values);

    printf("The average is: %.2f\n", avg);

    return 0;
}

// Start the new function
int avg_arr(int arr[]){

    //initialise variables
    int i;
    int total = 0;
    float avg;

    //for loop statement
    for(i = 0; i < NUM; i++){
        total += arr[i];
    }

    avg = total/NUM;

    return avg;
}