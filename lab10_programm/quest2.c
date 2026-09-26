/*
Program to (i) Write a program that uses DMA to allocate memory for 5 floating-point numbers.
You can use either malloc() or calloc().
(ii) After memory has been allocated for the 5 float numbers, enter these numbers into
the memory block.
(iii) Calculate and display the average of the numbers stored in the memory block.
Author: Daria Osypova
Date: 27/01/26
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    float *numbers; //The * means numbers is a pointer — it stores the address of a float
    int i;
    float sum, average;

    //(i) allocate memory for 5 float numbers using DMA
    numbers = malloc(5 * sizeof(float));
    //calloc: numbers = calloc(5, sizeof(float));
    /*When you use dynamic memory (malloc / calloc), they return an address, 
    not the actual memory contents.
    That address must be stored in a pointer.*/

    //check if memory alloctation was successful
    if(numbers == NULL){
        printf("Memory allocation was failed!\n");
        return 1;
    }

    //(ii) enter values into the memory block
    printf("Enter 5 floating-point numbers:\n");
    for (i = 0; i < 5; i++){
        scanf("%f", &numbers[i]);
        sum += numbers[i];
    }

    //(iii) calculate and display the average
    average = sum / 5;
    printf("Average = %.2f", average);

    //free allocated memory
    free(numbers);

    return 0;
}