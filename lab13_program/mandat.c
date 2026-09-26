/*Program to pass 1-D Array. Write a program that asks the user to enter 5 numbers from
standard input. Pass the array to a function where the function checks each number in
the array if it is even or odd. Your function should display each number and state
whether it is even or odd. Finally, your function should calculate the total number of
even numbers only and return this number to your main() and display it.
Author: Daria Osypova
Date: 17/02/26*/

#include <stdio.h>

//set a constant variable
#define SIZE 5

//Function signature
int check_array(int arr[]);

int main (){
    //initialise variables
    int values[SIZE];
    int i;
    int total_even;

    //User enters values
    printf("Enter %d numbers: \n", SIZE);
    for(i = 0; i < SIZE; i++){
        scanf("%d", &values[i]);
    }

    //calls the function
    total_even = check_array(values);

    printf("\nTotal number of even numbers: %d\n", total_even);

    return 0;
}

// Start the new function
int check_array(int arr[]){
    //initialise variables
    int i;
    int even_count = 0;
    //start for loop statement
    for(i = 0; i < SIZE; i++){
        //start if statement
        if (arr[i] % 2 == 0){
            printf("\n%d is even\n", arr[i]);
            //imcreament to calculate the total even numbers
            even_count++;
        }
        else {
            printf("\n%d is odd\n", arr[i]);
        }
    }

    //returns even numbers to function main()
    return even_count;
}