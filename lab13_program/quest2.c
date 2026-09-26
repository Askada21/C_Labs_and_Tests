/*Passing 1-D Array. Write a program that uses a function to find the highest number in
an array containing 5 numbers. In the main(), you must ask the user to enter 5
numbers and store these in the array. Pass the array to a function and your function
must find the highest number. Return this number to your main() and display it.
Author: Daria Osypova
Date: 17/02/26*/

#include <stdio.h>

//set a constant variable
#define NUM 5

//Function signature
int highest_arr (int arr[]);

int main(){

    //initialise variables
    int value[NUM];
    int i;
    int highest;

    //User enters values
    printf("Enter %d numbers: ", NUM);
    for(i = 0; i < NUM; i++){
        scanf("%d", &value[i]);
    }

    //calls the function
    highest = highest_arr(value);

    printf("\nThe highest number: %d\n", highest);

    return 0;
}

// Start the new function
int highest_arr (int arr[]){
    //initialise variables
    int i;
    //assume first element is highest
    int highest = arr[0];
    //start for loop
    for (i = 0; i < NUM; i++){
        if (arr[i] > highest){
            highest = arr[i];
        }
    }
    
    return highest;
}