/*Create a copy of Q2 above. Modify the code so that it does:
Careful – think first. Allocate a second memory block and store the average value
calculate in part (iii) in this block. Display all of the 5 float values in the first memory
block and their average value in the second memory block on the screen.
(Hint: you will need to use 2 float pointers, one pointer to the block of memory
storing the 5 floating-point numbers, the other pointer to the block of memory storing
the average of the 5 numbers).
One-line explanation:
The program uses two dynamically allocated memory blocks: one to store five floating-point numbers 
and another to store their average, accessed using two float pointers.
Author: Daria Osypova
Date: 27/01/26
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float *numbers; //pointer for 5 float numbers
    float *average; // pointer for average
    int i;
    float sum = 0;

    // allocate memory for 5 floats
    numbers = malloc(5 * sizeof(float));
    if (numbers == NULL){
        printf("Memory allocation failed for numbers\n");
        return 1;
    }

    // allocate memory for 1 float (average) 
    average = malloc(sizeof(float));
    if (average == NULL) {
        printf("Memory allocation failed for average\n");
        free(numbers);
        return 1;
    }

    // read 5 floating-point numbers
    printf("Enter 5 floating-point numbers:\n");
    for(i = 0; i < 5; i++){
        scanf("%f", &numbers[i]);
        sum += numbers[i];
    }

    // store average in second memory block
    *average = sum/5;

    // display values from first memory block
    printf("\nValues stored in first memory block:\n");
    for(i= 0; i < 5; i++) {
        printf("%.2f\n", numbers[i]);
    }

    // display average from second memory block
    printf("\nAverage stored in second memory block:%.2f\n", *average);

    free(numbers);
    free(average);

    return 0;
}