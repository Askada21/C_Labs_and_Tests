/*
Program to  define an integer array with 5 elements. Your program must do
the following:
i. Enter 5 integer values into the array.
ii. Define another integer array with 5 elements and copy the values from the 1st
array into the 2nd array in reverse order (e.g., the value in the first element of
the 1st array will be copied into the last element in the 2nd array, etc..).
Author: Daria Osypova
Date: 04/11/25
*/
#include <stdio.h>

#define NUM 5

int main()
{
    // Initialize the variables
    int arr1[NUM];
    int arr2[NUM];
    int i;

    printf("Enter %d values: \n", NUM);

    // Ask user to rnter values
    for (i = 0; i < NUM; i++)
    {
        scanf("%d", &arr1[i]);
    }

    // Create reverse array
    for (i = 0; i < NUM; i++)
    {
        arr2[i] = arr1[(NUM - 1) - i];
    }

    printf("Reverse: ");
    // Print reversed order
    for (i = 0; i < NUM; i++)
    {
        printf("%d ", arr2[i]);
    }

    return 0;
}