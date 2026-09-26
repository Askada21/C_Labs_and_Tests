/*Program to write a program that uses 2 floating-point 1-D arrays
with 3 elements in each. Enter values into the 1st array. Copy the contents of this array
into the 2nd array. Display the contents of both arrays.
Author: Daria Osypova
Date: 02/12/25*/
#include <stdio.h>

#define ELEMENT 3

int main(){
    //Initialise variables
    float arr1[ELEMENT];
    float arr2[ELEMENT];
    int i, temp;

    //User enters values
    printf("Enter %d numbers: ", ELEMENT);
    for(i = 0; i < ELEMENT; i++){
        scanf("%f", & *(arr1 + i));
    }

    //Display first array
    printf("First array: ");
    for(i = 0; i < ELEMENT; i++){
        printf("%.1f ", *(arr1 + i));
    }

    printf("\n");

    //Display second array 
    printf("Second array: ");
    for(i = 0; i < ELEMENT; i++){
        //Equal first array to second array
        float temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
        // *(arr2 + i) = *(arr1 + i);
        printf("%.1f ", *(arr2 + i));
    }

    return 0;
}