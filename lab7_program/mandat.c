/*
Program to write a program that uses a 3x2 (2-D) array. Your program must do the following:
a) Enter values into the array.
b) Display the values in the array to standard output.
c) Find the smallest & largest value and display both to standard output.
d) Calculate the average of the values and display to standard output.
Author: Daria Osypova
Date: 11/11/25
*/

#include <stdio.h>

#define ROW 3
#define COl 2

int main(){

    int arr[ROW][COl];
    int i, j;
    float sum = 0;
    float average = 0;
    int smallest, largest;

    //Enter values into the array
    printf("Enter %d numbers for a 3x2 array:\n", ROW * COl);

    for (i = 0; i < ROW; i++){
        for(j = 0; j < COl; j++){

            printf("Enter number [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
            sum = sum + arr[i][j];
        }
    }

    // Display the array
    printf("The 3x2 array is: \n");
    
    for (i = 0; i < ROW; i++) {
        for (j = 0; j < COl; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    //Initialize smallest and largest with the first element
    smallest = largest = arr[0][0];

    //Find smallest, largest, and sum for average
    for (i = 0; i < ROW; i++){
        for(j = 0; j < COl; j++){

            if (arr[i][j] < smallest){
                smallest = arr[i][j];
            }
            
            if (arr[i][j] > largest){
                largest = arr[i][j];
            }
            
        }
    }
    //Calculate the average
    average = sum / (ROW * COl);

    printf("Smallest number: %d\n", smallest);
    printf("Largest number: %d\n", largest);
    printf("Average: %.2f\n", average);

    return 0;

}